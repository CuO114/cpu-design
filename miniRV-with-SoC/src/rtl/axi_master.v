`timescale 1ns / 1ps

`include "defines.vh"

module axi_master(
    input  wire         aclk,
    input  wire         areset,     // high active

    // ICache Interface
    output reg          ic_dev_rrdy,
    input  wire [ 3:0]  ic_cpu_ren,
    input  wire [31:0]  ic_cpu_raddr,
    output reg          ic_dev_rvalid,
    output reg  [`IC_BLK_SIZE-1:0]  ic_dev_rdata,
    // DCache Interface
    output reg          dc_dev_wrdy,
    input  wire [ 3:0]  dc_cpu_wen,
    input  wire [31:0]  dc_cpu_waddr,
    input  wire [31:0]  dc_cpu_wdata,
    output reg          dc_dev_rrdy,
    input  wire [ 3:0]  dc_cpu_ren,
    input  wire [31:0]  dc_cpu_raddr,
    output reg          dc_dev_rvalid,
    output reg  [`DC_BLK_SIZE-1:0]  dc_dev_rdata,

    // AXI4 Master Interface
    // write address channel
    output reg  [31:0]  m_axi_awaddr,
    output reg  [ 7:0]  m_axi_awlen,
    output reg  [ 2:0]  m_axi_awsize,
    output reg  [ 1:0]  m_axi_awburst,
    output reg          m_axi_awvalid,
    input  wire         m_axi_awready,
    // write data channel
    output reg  [31:0]  m_axi_wdata,
    output reg  [ 3:0]  m_axi_wstrb,
    output wire         m_axi_wlast,
    output reg          m_axi_wvalid,
    input  wire         m_axi_wready,
    // write response channel
    output reg          m_axi_bready,
    input  wire [ 1:0]  m_axi_bresp,
    input  wire         m_axi_bvalid,
    // read address channel
    output reg  [31:0]  m_axi_araddr,
    output reg  [ 7:0]  m_axi_arlen,
    output reg  [ 2:0]  m_axi_arsize,
    output reg  [ 1:0]  m_axi_arburst,
    output reg          m_axi_arvalid,
    input  wire         m_axi_arready,
    // read data channel
    output reg          m_axi_rready,
    input  wire [31:0]  m_axi_rdata,
    input  wire [ 1:0]  m_axi_rresp,
    input  wire         m_axi_rlast,
    input  wire         m_axi_rvalid
);

    // AXI 读通道状态：等待请求、发送读地址、接收读数据
    localparam [1:0] R_IDLE = 2'd0;
    localparam [1:0] R_ADDR = 2'd1;
    localparam [1:0] R_DATA = 2'd2;

    // AXI 写通道状态：等待请求、发送地址和数据、等待写响应
    localparam [1:0] W_IDLE = 2'd0;
    localparam [1:0] W_SEND = 2'd1;
    localparam [1:0] W_RESP = 2'd2;

    reg [1:0] r_state, r_next;
    reg [1:0] w_state, w_next;
    reg       read_from_dc;  // 记录当前读事务来自 DCache 还是 ICache
    reg       read_turn_dc;  // 无请求时轮换优先级，避免一侧长期得不到服务
    reg [7:0] read_beat;     // 当前接收的突发传输拍号
    reg       aw_done;       // 写地址通道已经完成握手
    reg       w_done;        // 写数据通道已经完成握手

    wire ic_read_req = |ic_cpu_ren;
    wire dc_read_req = |dc_cpu_ren;
    wire read_last   = m_axi_rlast || (read_beat == m_axi_arlen); // 当前拍为最后一拍
    wire aw_fire     = m_axi_awvalid && m_axi_awready;            // 写地址握手成功
    wire w_fire      = m_axi_wvalid && m_axi_wready;              // 写数据握手成功

    assign m_axi_wlast = 1'b1;

    // 读请求仲裁：空闲时只向一个 Cache 发出 ready。
    // 有实际请求时优先响应该请求；两侧同时请求时 DCache 优先。
    // AXI 读状态转移：地址握手后接收数据，收到最后一拍后回到空闲态。
    always @(*) begin
        ic_dev_rrdy = 1'b0;
        dc_dev_rrdy = 1'b0;

        if (r_state == R_IDLE) begin
            if (dc_read_req)
                dc_dev_rrdy = 1'b1;
            else if (ic_read_req)
                ic_dev_rrdy = 1'b1;
            else if (read_turn_dc)
                dc_dev_rrdy = 1'b1;
            else
                ic_dev_rrdy = 1'b1;
        end
    end

    // AXI 写地址和写数据是两个独立通道，二者都握手后才能等待写响应。
    always @(*) begin
        case (r_state)
            R_IDLE:  r_next = (dc_read_req || ic_read_req) ? R_ADDR : R_IDLE;
            R_ADDR:  r_next = m_axi_arready ? R_DATA : R_ADDR;
            R_DATA:  r_next = (m_axi_rvalid && m_axi_rready && read_last) ? R_IDLE : R_DATA;
            default: r_next = R_IDLE;
        endcase
    end

    always @(*) begin
        case (w_state)
            W_IDLE:  w_next = (|dc_cpu_wen) ? W_SEND : W_IDLE;
            W_SEND:  w_next = ((aw_done || aw_fire) && (w_done || w_fire)) ? W_RESP : W_SEND;
            W_RESP:  w_next = (m_axi_bvalid && m_axi_bready) ? W_IDLE : W_RESP;
            default: w_next = W_IDLE;
        endcase
    end

    // 读通道时序逻辑
    always @(posedge aclk or posedge areset) begin
        if (areset) begin
            r_state       <= R_IDLE;
            read_from_dc  <= 1'b0;
            read_turn_dc  <= 1'b0;
            read_beat     <= 8'h0;
            ic_dev_rvalid <= 1'b0;
            ic_dev_rdata  <= {`IC_BLK_SIZE{1'b0}};
            dc_dev_rvalid <= 1'b0;
            dc_dev_rdata  <= {`DC_BLK_SIZE{1'b0}};
            m_axi_araddr  <= 32'h0;
            m_axi_arlen   <= 8'h0;
            m_axi_arsize  <= 3'b010;
            m_axi_arburst <= 2'b01;
            m_axi_arvalid <= 1'b0;
            m_axi_rready  <= 1'b0;
        end else begin
            r_state       <= r_next;
            ic_dev_rvalid <= 1'b0;
            dc_dev_rvalid <= 1'b0;

            case (r_state)
                R_IDLE: begin
                    m_axi_arvalid <= 1'b0;
                    m_axi_rready  <= 1'b0;
                    read_beat     <= 8'h0;

                    if (dc_read_req) begin
                        // DCache 普通内存访问按 Cache 块读取；外设地址只读取一个字。
                        read_from_dc  <= 1'b1;
                        read_turn_dc  <= 1'b0;
                        if ((`DC_BLK_LEN > 1) && (dc_cpu_raddr[31:16] != 16'hFFFF)) begin
                            m_axi_araddr <= {dc_cpu_raddr[31:4], 4'b0000};
                            m_axi_arlen  <= `DC_BLK_LEN - 1;
                        end else begin
                            m_axi_araddr <= {dc_cpu_raddr[31:2], 2'b00};
                            m_axi_arlen  <= 8'h0;
                        end
                        m_axi_arsize  <= 3'b010;
                        m_axi_arburst <= 2'b01;
                        m_axi_arvalid <= 1'b1;
                        dc_dev_rdata  <= {`DC_BLK_SIZE{1'b0}};
                    end else if (ic_read_req) begin
                        // ICache 缺失时，从块首地址开始发起突发读。
                        read_from_dc  <= 1'b0;
                        read_turn_dc  <= 1'b1;
                        if (`IC_BLK_LEN > 1)
                            m_axi_araddr <= {ic_cpu_raddr[31:4], 4'b0000};
                        else
                            m_axi_araddr <= {ic_cpu_raddr[31:2], 2'b00};
                        m_axi_arlen   <= `IC_BLK_LEN - 1;
                        m_axi_arsize  <= 3'b010;
                        m_axi_arburst <= 2'b01;
                        m_axi_arvalid <= 1'b1;
                        ic_dev_rdata  <= {`IC_BLK_SIZE{1'b0}};
                    end else begin
                        read_turn_dc <= ~read_turn_dc;
                    end
                end

                R_ADDR: begin
                    // ARVALID 必须保持到从设备接受地址，随后开放读数据通道。
                    if (m_axi_arready) begin
                        m_axi_arvalid <= 1'b0;
                        m_axi_rready  <= 1'b1;
                    end
                end

                R_DATA: begin
                    if (m_axi_rvalid && m_axi_rready) begin
                        // 每个 AXI 数据拍为 32 位，按拍号依次写入 Cache 块。
                        if (read_from_dc)
                            dc_dev_rdata[read_beat*32 +: 32] <= m_axi_rdata;
                        else
                            ic_dev_rdata[read_beat*32 +: 32] <= m_axi_rdata;

                        if (read_last) begin
                            // 完整数据块接收完毕后，只向请求来源发送一个周期的 valid。
                            m_axi_rready <= 1'b0;
                            if (read_from_dc)
                                dc_dev_rvalid <= 1'b1;
                            else
                                ic_dev_rvalid <= 1'b1;
                        end else begin
                            read_beat <= read_beat + 1'b1;
                        end
                    end
                end

                default: begin
                    m_axi_arvalid <= 1'b0;
                    m_axi_rready  <= 1'b0;
                end
            endcase
        end
    end

    // 写状态机空闲时即可接受新的 DCache 写请求。
    always @(*) begin
        dc_dev_wrdy = (w_state == W_IDLE);
    end

    // 写通道时序逻辑
    always @(posedge aclk or posedge areset) begin
        if (areset) begin
            w_state       <= W_IDLE;
            aw_done       <= 1'b0;
            w_done        <= 1'b0;
            m_axi_awaddr  <= 32'h0;
            m_axi_awlen   <= 8'h0;
            m_axi_awsize  <= 3'b010;
            m_axi_awburst <= 2'b01;
            m_axi_awvalid <= 1'b0;
            m_axi_wdata   <= 32'h0;
            m_axi_wstrb   <= 4'h0;
            m_axi_wvalid  <= 1'b0;
            m_axi_bready  <= 1'b0;
        end else begin
            w_state <= w_next;

            case (w_state)
                W_IDLE: begin
                    aw_done       <= 1'b0;
                    w_done        <= 1'b0;
                    m_axi_awvalid <= 1'b0;
                    m_axi_wvalid  <= 1'b0;
                    m_axi_bready  <= 1'b0;

                    if (|dc_cpu_wen) begin
                        // 当前仅执行单拍写；字节写使能直接作为 AXI WSTRB。
                        m_axi_awaddr  <= {dc_cpu_waddr[31:2], 2'b00};
                        m_axi_awlen   <= 8'h0;
                        m_axi_awsize  <= 3'b010;
                        m_axi_awburst <= 2'b01;
                        m_axi_awvalid <= 1'b1;
                        m_axi_wdata   <= dc_cpu_wdata;
                        m_axi_wstrb   <= dc_cpu_wen;
                        m_axi_wvalid  <= 1'b1;
                    end
                end

                W_SEND: begin
                    // AWREADY 和 WREADY 可能在不同周期到达，分别记录完成状态。
                    if (aw_fire) begin
                        m_axi_awvalid <= 1'b0;
                        aw_done       <= 1'b1;
                    end
                    if (w_fire) begin
                        m_axi_wvalid <= 1'b0;
                        w_done       <= 1'b1;
                    end
                    if ((aw_done || aw_fire) && (w_done || w_fire))
                        // 地址和数据均被接收后，开始接收从设备的写响应。
                        m_axi_bready <= 1'b1;
                end

                W_RESP: begin
                    // 写响应握手完成，本次写事务结束。
                    if (m_axi_bvalid && m_axi_bready)
                        m_axi_bready <= 1'b0;
                end

                default: begin
                    m_axi_awvalid <= 1'b0;
                    m_axi_wvalid  <= 1'b0;
                    m_axi_bready  <= 1'b0;
                end
            endcase
        end
    end


endmodule
