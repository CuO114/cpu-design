`timescale 1ns/1ps
`include "miniRV-with-SoC/src/rtl/defines.vh"

// Behavioral replacement for the 134-bit x 64 cache RAM used by ICache/DCache.
module blk_mem_gen_1(
    input  wire         clka,
    input  wire [0:0]   wea,
    input  wire [5:0]   addra,
    input  wire [133:0] dina,
    output reg  [133:0] douta
);
    reg [133:0] mem [0:63];
    always @(posedge clka) begin
        if (wea[0]) mem[addra] <= dina;
        douta <= mem[addra];
    end
endmodule

module rtl_axi_probe;
    reg clk = 1'b0;
    reg rst = 1'b1;
    always #5 clk = ~clk;

    wire [31:0] awaddr;
    wire [7:0]  awlen;
    wire [2:0]  awsize;
    wire [1:0]  awburst;
    wire        awvalid;
    wire        awready = 1'b1;
    wire [31:0] wdata;
    wire [3:0]  wstrb;
    wire        wlast;
    wire        wvalid;
    wire        wready = 1'b1;
    wire        bready;
    reg  [1:0]  bresp = 2'b00;
    reg         bvalid = 1'b0;
    wire [31:0] araddr;
    wire [7:0]  arlen;
    wire [2:0]  arsize;
    wire [1:0]  arburst;
    wire        arvalid;
    wire        arready = 1'b1;
    wire        rready;
    reg  [31:0] rdata = 32'h0;
    reg  [1:0]  rresp = 2'b00;
    reg         rlast = 1'b0;
    reg         rvalid = 1'b0;

    cpu_top dut (
        .cpu_clk(clk), .cpu_rst(rst),
        .m_axi_awaddr(awaddr), .m_axi_awlen(awlen), .m_axi_awsize(awsize),
        .m_axi_awburst(awburst), .m_axi_awready(awready), .m_axi_awvalid(awvalid),
        .m_axi_wdata(wdata), .m_axi_wready(wready), .m_axi_wstrb(wstrb),
        .m_axi_wlast(wlast), .m_axi_wvalid(wvalid), .m_axi_bready(bready),
        .m_axi_bresp(bresp), .m_axi_bvalid(bvalid),
        .m_axi_araddr(araddr), .m_axi_arlen(arlen), .m_axi_arsize(arsize),
        .m_axi_arburst(arburst), .m_axi_arready(arready), .m_axi_arvalid(arvalid),
        .m_axi_rdata(rdata), .m_axi_rready(rready), .m_axi_rresp(rresp),
        .m_axi_rlast(rlast), .m_axi_rvalid(rvalid)
    );

    reg [31:0] mem [0:38399];
    reg [63:0] timer;
    reg        read_active;
    reg [31:0] read_addr;
    reg [7:0]  read_len;
    reg [7:0]  read_beat;
    reg        aw_hold;
    reg        w_hold;
    reg [31:0] awaddr_hold;
    reg [31:0] wdata_hold;
    reg [3:0]  wstrb_hold;
    integer cycle;
    integer i;
    integer idx;
    integer trace_count;

    function [31:0] bus_read(input [31:0] addr);
        begin
            if (addr == 32'hffff4000)
                bus_read = timer[31:0];
            else if (addr == 32'hffff4008)
                bus_read = timer[63:32];
            else if (addr == 32'hffff3008)
                bus_read = 32'h0;
            else if (addr[31:16] == 16'hffff)
                bus_read = 32'h0;
            else
                bus_read = mem[addr[17:2]];
        end
    endfunction

    initial begin
        $readmemb("miniRV-with-SoC/src/rtl/ip/bram_axi/bram_axi.mif", mem);
        // Temporary short-run check; do not use this value for the board image.
        mem[32'h0000d140 >> 2] = 32'd10;
        $display("SEED4_INIT=%08x", mem[32'h0000d140 >> 2]);
        for (i = 0; i < 64; i = i + 1) begin
            dut.U_icache.U_isram.mem[i] = 134'h0;
            dut.U_dcache.U_dsram.mem[i] = 134'h0;
        end
        #100 rst = 1'b0;
    end

    always @(posedge clk) begin
        if (rst) begin
            timer <= 64'h0;
            read_active <= 1'b0;
            read_addr <= 32'h0;
            read_len <= 8'h0;
            read_beat <= 8'h0;
            rvalid <= 1'b0;
            rdata <= 32'h0;
            rresp <= 2'b00;
            rlast <= 1'b0;
            aw_hold <= 1'b0;
            w_hold <= 1'b0;
            awaddr_hold <= 32'h0;
            wdata_hold <= 32'h0;
            wstrb_hold <= 4'h0;
            bvalid <= 1'b0;
            bresp <= 2'b00;
            cycle <= 0;
            trace_count <= 0;
        end else begin
            cycle <= cycle + 1;
            timer <= timer + 1;

            if (arvalid && arready) begin
                read_active <= 1'b1;
                read_addr   <= araddr;
                read_len    <= arlen;
                read_beat   <= 8'h0;
            end
            if (read_active) begin
                if (!rvalid) begin
                    rvalid <= 1'b1;
                    rdata  <= bus_read(read_addr + (read_beat << 2));
                    rresp  <= 2'b00;
                    rlast  <= (read_beat == read_len);
                end else if (rvalid && rready) begin
                    if (rlast) begin
                        rvalid <= 1'b0;
                        rlast <= 1'b0;
                        read_active <= 1'b0;
                    end else begin
                        rvalid <= 1'b0;
                        read_beat <= read_beat + 1'b1;
                    end
                end
            end

            if (awvalid && awready) begin
                aw_hold <= 1'b1;
                awaddr_hold <= awaddr;
            end
            if (wvalid && wready) begin
                w_hold <= 1'b1;
                wdata_hold <= wdata;
                wstrb_hold <= wstrb;
            end
            if ((aw_hold && w_hold) && !bvalid) begin
                if (awaddr_hold[31:16] == 16'hffff) begin
                    if (awaddr_hold == 32'hffff3004)
                        $write("%c", wdata_hold[7:0]);
                    $display("STORE cycle=%0d addr=%08x strb=%x data=%08x", cycle, awaddr_hold, wstrb_hold, wdata_hold);
                end else begin
                    idx = awaddr_hold[17:2];
                    if (wstrb_hold[0]) mem[idx][7:0]   <= wdata_hold[7:0];
                    if (wstrb_hold[1]) mem[idx][15:8]  <= wdata_hold[15:8];
                    if (wstrb_hold[2]) mem[idx][23:16] <= wdata_hold[23:16];
                    if (wstrb_hold[3]) mem[idx][31:24] <= wdata_hold[31:24];
                end
                aw_hold <= 1'b0;
                w_hold <= 1'b0;
                bvalid <= 1'b1;
                bresp <= 2'b00;
            end
            if (bvalid && bready)
                bvalid <= 1'b0;

            if ((cycle > 5000000) && (trace_count < 240) &&
                (dut.U_core.wb_rf_we &&
                 ((dut.U_core.wb_rf_wR == 5'd20) ||
                  (dut.U_core.wb_rf_wR == 5'd21)))) begin
                $display("WBTRACE cycle=%0d pc=%08x rd=%0d data=%08x wsel=%0d ramrop=%0d addr=%08x ren=%x rvalid=%b", cycle, dut.U_core.mem_wb_pc, dut.U_core.wb_rf_wR, dut.U_core.wb_rf_wD, dut.U_core.mem_wb_rf_wsel, dut.U_core.mem_wb_ram_rop, dut.U_core.daccess_addr, dut.U_core.daccess_ren, dut.U_core.daccess_rvalid);
                trace_count <= trace_count + 1;
            end

            if ((cycle == 1000000) || (cycle == 10000000) ||
                (cycle == 50000000) || (cycle == 100000000) ||
                (cycle == 150000000) || (cycle == 200000000)) begin
                $display("PROBE cycle=%0d pc=%08x if_id=%08x ex_mem=%08x rstate=%0d wstate=%0d arvalid=%b rvalid=%b awvalid=%b wvalid=%b bvalid=%b x16=%08x x17=%08x x18=%08x x20=%08x x21=%08x x22=%08x", cycle, dut.U_core.pc, dut.U_core.if_id_inst, dut.U_core.ex_mem_pc, dut.U_aximaster.r_state, dut.U_aximaster.w_state, arvalid, rvalid, awvalid, wvalid, bvalid, dut.U_core.U_RF.regs[16], dut.U_core.U_RF.regs[17], dut.U_core.U_RF.regs[18], dut.U_core.U_RF.regs[20], dut.U_core.U_RF.regs[21], dut.U_core.U_RF.regs[22]);
            end
            if (cycle == 50000000) begin
                $display("TIMEOUT");
                $finish;
            end
        end
    end
endmodule
