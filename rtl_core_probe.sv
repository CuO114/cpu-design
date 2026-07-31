`timescale 1ns/1ps
`include "miniRV-with-SoC/src/rtl/defines.vh"

module rtl_core_probe;
    reg clk = 1'b0;
    reg rst = 1'b1;
    always #5 clk = ~clk;

    wire        ifetch_req;
    wire [31:0] ifetch_addr;
    reg         ifetch_valid = 1'b0;
    reg  [31:0] ifetch_inst = 32'h0;
    wire [3:0]  daccess_ren;
    wire [31:0] daccess_addr;
    reg         daccess_rvalid = 1'b0;
    reg  [31:0] daccess_rdata = 32'h0;
    wire [3:0]  daccess_wen;
    wire [31:0] daccess_wdata;
    reg         daccess_wresp = 1'b0;

    cpu_core dut (
        .cpu_clk(clk), .cpu_rst(rst),
        .ifetch_req(ifetch_req), .ifetch_addr(ifetch_addr),
        .ifetch_valid(ifetch_valid), .ifetch_inst(ifetch_inst),
        .daccess_ren(daccess_ren), .daccess_addr(daccess_addr),
        .daccess_rvalid(daccess_rvalid), .daccess_rdata(daccess_rdata),
        .daccess_wen(daccess_wen), .daccess_wdata(daccess_wdata),
        .daccess_wresp(daccess_wresp)
    );

    reg [31:0] mem [0:38399];
    reg [63:0] timer;
    integer cycle;
    integer i;
    integer idx;
    integer trace_count;
    initial begin
        $readmemb("miniRV-with-SoC/src/rtl/ip/bram_axi/bram_axi.mif", mem);
        // Temporary short-run check; do not use this value for the board image.
        mem[32'h0000d140 >> 2] = 32'd10;
        $display("SEED4_INIT=%08x", mem[32'h0000d140 >> 2]);
        for (i = 0; i < 40; i = i + 1)
            $display("INIT[%0d]=%08x", i, mem[i]);
        #100 rst = 1'b0;
    end

    always @(posedge clk) begin
        if (rst) begin
            ifetch_valid <= 1'b0;
            ifetch_inst  <= 32'h0;
            daccess_rvalid <= 1'b0;
            daccess_rdata  <= 32'h0;
            daccess_wresp  <= 1'b0;
            timer <= 64'h0;
            cycle <= 0;
            trace_count <= 0;
        end else begin
            cycle <= cycle + 1;
            timer <= timer + 1;

            ifetch_valid <= ifetch_req;
            if (ifetch_req)
                ifetch_inst <= mem[ifetch_addr[17:2]];
            else
                ifetch_inst <= 32'h0;

            daccess_rvalid <= |daccess_ren;
            daccess_wresp  <= |daccess_wen;
            daccess_rdata  <= 32'h0;
            if (|daccess_ren) begin
                if (daccess_addr == 32'hffff4000)
                    daccess_rdata <= timer[31:0];
                else if (daccess_addr == 32'hffff4008)
                    daccess_rdata <= timer[63:32];
                else if (daccess_addr == 32'hffff3008)
                    daccess_rdata <= 32'h0;
                else if (daccess_addr[31:16] == 16'hffff)
                    daccess_rdata <= 32'h0;
                else
                    daccess_rdata <= mem[daccess_addr[17:2]];
            end

            if (|daccess_wen) begin
                if (daccess_addr[31:16] == 16'hffff) begin
                    if (daccess_addr == 32'hffff3004)
                        $write("%c", daccess_wdata[7:0]);
                    $display("STORE cycle=%0d addr=%08x wen=%x data=%08x", cycle, daccess_addr, daccess_wen, daccess_wdata);
                end else begin
                    idx = daccess_addr[17:2];
                    if (daccess_wen[0]) mem[idx][7:0]   <= daccess_wdata[7:0];
                    if (daccess_wen[1]) mem[idx][15:8]  <= daccess_wdata[15:8];
                    if (daccess_wen[2]) mem[idx][23:16] <= daccess_wdata[23:16];
                    if (daccess_wen[3]) mem[idx][31:24] <= daccess_wdata[31:24];
                end
            end

            if ((dut.pc == 32'h000070f8) || (dut.pc == 32'h00007100) || (dut.pc == 32'h00000018))
                $display("PC cycle=%0d pc=%08x ifv=%b inst=%08x memstall=%b", cycle, dut.pc, ifetch_valid, ifetch_inst, dut.mem_stall);
            if ((cycle == 10000000) || (cycle == 50000000)) begin
                $display("PROBE cycle=%0d pc=%08x if_id=%08x ex_mem=%08x x16=%08x x17=%08x x18=%08x x20=%08x x21=%08x x22=%08x", cycle, dut.pc, dut.if_id_inst, dut.ex_mem_pc, dut.U_RF.regs[16], dut.U_RF.regs[17], dut.U_RF.regs[18], dut.U_RF.regs[20], dut.U_RF.regs[21], dut.U_RF.regs[22]);
            end
            if (cycle == 50000000) begin
                $display("TIMEOUT pc=%08x if_id=%08x ex_mem=%08x", dut.pc, dut.if_id_inst, dut.ex_mem_pc);
                $finish;
            end
        end
    end
endmodule
