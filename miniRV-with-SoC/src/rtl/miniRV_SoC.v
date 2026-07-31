`timescale 1ns / 1ps

`include "defines.vh"

module miniRV_SoC(
    input  wire         fpga_clk,
    input  wire         fpga_rst,   // Low Active
    input  wire [15:0]  sw,
    output wire [15:0]  led,
    output wire [ 7:0]  dig_en,
    output wire [ 7:0]  dig_seg,    // {CA, CB, ..., CG, DP}
    output wire [ 7:0]  dig_seg1,
    input  wire         rx,
    output wire         tx
);



`ifdef RUN_TRACE
    wire sys_clk = fpga_clk;
    wire sys_rst = fpga_rst;
`else
    wire pll_clk1;
    wire pll_lock;
    wire sys_clk = pll_clk1;
    (* ASYNC_REG = "TRUE" *) reg  [1:0] sys_rst_sync;
    wire sys_rst = sys_rst_sync[1];

    // Assert reset immediately, but release it synchronously to the PLL clock.
    always @(posedge pll_clk1 or negedge fpga_rst or negedge pll_lock) begin
        if (!fpga_rst || !pll_lock)
            sys_rst_sync <= 2'b11;
        else
            sys_rst_sync <= {sys_rst_sync[0], 1'b0};
    end

    clk_wiz_0 U_clkgen (
        .clk_in1    (fpga_clk),
        .locked     (pll_lock),
        .clk_out1   (pll_clk1)
    );
`endif

    wire [31:0] cpu_awaddr ;
    wire [ 7:0] cpu_awlen  ;
    wire [ 2:0] cpu_awsize ;
    wire [ 1:0] cpu_awburst;
    wire        cpu_awvalid;
    wire        cpu_awready;
    wire [31:0] cpu_wdata  ;
    wire [ 3:0] cpu_wstrb  ;
    wire        cpu_wlast  ;
    wire        cpu_wvalid ;
    wire        cpu_wready ;
    wire        cpu_bready ;
    wire [ 1:0] cpu_bresp  ;
    wire        cpu_bvalid ;
    wire [31:0] cpu_araddr ;
    wire [ 7:0] cpu_arlen  ;
    wire [ 2:0] cpu_arsize ;
    wire [ 1:0] cpu_arburst;
    wire        cpu_arvalid;
    wire        cpu_arready;
    wire        cpu_rready ;
    wire [31:0] cpu_rdata  ;
    wire [ 1:0] cpu_rresp  ;
    wire        cpu_rlast  ;
    wire        cpu_rvalid ;
    wire [31:0] uart_awaddr;
    wire [ 7:0] uart_awlen;
    wire [ 2:0] uart_awsize;
    wire [ 1:0] uart_awburst;
    wire        uart_awvalid;
    wire        uart_awready;

    wire [31:0] uart_wdata;
    wire [ 3:0] uart_wstrb;
    wire        uart_wlast;
    wire        uart_wvalid;
    wire        uart_wready;

    wire [ 1:0] uart_bresp;
    wire        uart_bvalid;
    wire        uart_bready;

    wire [31:0] uart_araddr;
    wire [ 7:0] uart_arlen;
    wire [ 2:0] uart_arsize;
    wire [ 1:0] uart_arburst;
    wire        uart_arvalid;
    wire        uart_arready;

    wire [31:0] uart_rdata;
    wire [ 1:0] uart_rresp;
    wire        uart_rlast;
    wire        uart_rvalid;
    wire        uart_rready;
    wire        uart_awlock;
    wire [ 3:0] uart_awcache;
    wire [ 2:0] uart_awprot;
    wire [ 3:0] uart_awregion;
    wire [ 3:0] uart_awqos;
    wire        uart_arlock;
    wire [ 3:0] uart_arcache;
    wire [ 2:0] uart_arprot;
    wire [ 3:0] uart_arregion;
    wire [ 3:0] uart_arqos;

    wire [31:0] switch_awaddr;
    wire [ 7:0] switch_awlen;
    wire [ 2:0] switch_awsize;
    wire [ 1:0] switch_awburst;
    wire        switch_awvalid;
    wire        switch_awready;
    wire [31:0] switch_wdata;
    wire [ 3:0] switch_wstrb;
    wire        switch_wlast;
    wire        switch_wvalid;
    wire        switch_wready;
    wire        switch_bready;
    wire [ 1:0] switch_bresp;
    wire        switch_bvalid;
    wire [31:0] switch_araddr;
    wire [ 7:0] switch_arlen;
    wire [ 2:0] switch_arsize;
    wire [ 1:0] switch_arburst;
    wire        switch_arvalid;
    wire        switch_arready;
    wire        switch_rready;
    wire [31:0] switch_rdata;
    wire [ 1:0] switch_rresp;
    wire        switch_rlast;
    wire        switch_rvalid;
    wire        switch_awlock;
    wire [ 3:0] switch_awcache;
    wire [ 2:0] switch_awprot;
    wire [ 3:0] switch_awregion;
    wire [ 3:0] switch_awqos;
    wire        switch_arlock;
    wire [ 3:0] switch_arcache;
    wire [ 2:0] switch_arprot;
    wire [ 3:0] switch_arregion;
    wire [ 3:0] switch_arqos;

    wire [31:0] led_awaddr;
    wire [ 7:0] led_awlen;
    wire [ 2:0] led_awsize;
    wire [ 1:0] led_awburst;
    wire        led_awvalid;
    wire        led_awready;
    wire [31:0] led_wdata;
    wire [ 3:0] led_wstrb;
    wire        led_wlast;
    wire        led_wvalid;
    wire        led_wready;
    wire        led_bready;
    wire [ 1:0] led_bresp;
    wire        led_bvalid;
    wire [31:0] led_araddr;
    wire [ 7:0] led_arlen;
    wire [ 2:0] led_arsize;
    wire [ 1:0] led_arburst;
    wire        led_arvalid;
    wire        led_arready;
    wire        led_rready;
    wire [31:0] led_rdata;
    wire [ 1:0] led_rresp;
    wire        led_rlast;
    wire        led_rvalid;
    wire        led_awlock;
    wire [ 3:0] led_awcache;
    wire [ 2:0] led_awprot;
    wire [ 3:0] led_awregion;
    wire [ 3:0] led_awqos;
    wire        led_arlock;
    wire [ 3:0] led_arcache;
    wire [ 2:0] led_arprot;
    wire [ 3:0] led_arregion;
    wire [ 3:0] led_arqos;

    wire [31:0] display_awaddr;
    wire [ 7:0] display_awlen;
    wire [ 2:0] display_awsize;
    wire [ 1:0] display_awburst;
    wire        display_awvalid;
    wire        display_awready;
    wire [31:0] display_wdata;
    wire [ 3:0] display_wstrb;
    wire        display_wlast;
    wire        display_wvalid;
    wire        display_wready;
    wire        display_bready;
    wire [ 1:0] display_bresp;
    wire        display_bvalid;
    wire [31:0] display_araddr;
    wire [ 7:0] display_arlen;
    wire [ 2:0] display_arsize;
    wire [ 1:0] display_arburst;
    wire        display_arvalid;
    wire        display_arready;
    wire        display_rready;
    wire [31:0] display_rdata;
    wire [ 1:0] display_rresp;
    wire        display_rlast;
    wire        display_rvalid;
    wire        display_awlock;
    wire [ 3:0] display_awcache;
    wire [ 2:0] display_awprot;
    wire [ 3:0] display_awregion;
    wire [ 3:0] display_awqos;
    wire        display_arlock;
    wire [ 3:0] display_arcache;
    wire [ 2:0] display_arprot;
    wire [ 3:0] display_arregion;
    wire [ 3:0] display_arqos;

    cpu_top U_cpu (
        .cpu_clk        (sys_clk),
        .cpu_rst        (sys_rst),

        // AXI4 Master Interface
        // write address channel
        .m_axi_awaddr   (cpu_awaddr),
        .m_axi_awlen    (cpu_awlen),
        .m_axi_awsize   (cpu_awsize),
        .m_axi_awburst  (cpu_awburst),
        .m_axi_awvalid  (cpu_awvalid),
        .m_axi_awready  (cpu_awready),
        // write data channel
        .m_axi_wdata    (cpu_wdata),
        .m_axi_wstrb    (cpu_wstrb),
        .m_axi_wlast    (cpu_wlast),
        .m_axi_wvalid   (cpu_wvalid),
        .m_axi_wready   (cpu_wready),
        // write response channel
        .m_axi_bready   (cpu_bready),
        .m_axi_bresp    (cpu_bresp),
        .m_axi_bvalid   (cpu_bvalid),
        // read address channel
        .m_axi_araddr   (cpu_araddr),
        .m_axi_arlen    (cpu_arlen),
        .m_axi_arsize   (cpu_arsize),
        .m_axi_arburst  (cpu_arburst),
        .m_axi_arvalid  (cpu_arvalid),
        .m_axi_arready  (cpu_arready),
        // read data channel
        .m_axi_rready   (cpu_rready),
        .m_axi_rdata    (cpu_rdata),
        .m_axi_rresp    (cpu_rresp),
        .m_axi_rlast    (cpu_rlast),
        .m_axi_rvalid   (cpu_rvalid)
    );

    wire [31:0] bram_awaddr ;
    wire [ 7:0] bram_awlen  ;
    wire [ 2:0] bram_awsize ;
    wire [ 1:0] bram_awburst;
    wire        bram_awvalid;
    wire        bram_awready;
    wire [31:0] bram_wdata  ;
    wire [ 3:0] bram_wstrb  ;
    wire        bram_wlast  ;
    wire        bram_wvalid ;
    wire        bram_wready ;
    wire        bram_bready ;
    wire [ 1:0] bram_bresp  ;
    wire        bram_bvalid ;
    wire [31:0] bram_araddr ;
    wire [ 7:0] bram_arlen  ;
    wire [ 2:0] bram_arsize ;
    wire [ 1:0] bram_arburst;
    wire        bram_arvalid;
    wire        bram_arready;
    wire        bram_rready ;
    wire [31:0] bram_rdata  ;
    wire [ 1:0] bram_rresp  ;
    wire        bram_rlast  ;
    wire        bram_rvalid ;
    wire        bram_awlock ;
    wire [ 3:0] bram_awcache;
    wire [ 2:0] bram_awprot ;
    wire [ 3:0] bram_awregion;
    wire [ 3:0] bram_awqos  ;
    wire        bram_arlock ;
    wire [ 3:0] bram_arcache;
    wire [ 2:0] bram_arprot ;
    wire [ 3:0] bram_arregion;
    wire [ 3:0] bram_arqos  ;

    bram_axi U_bram (
        .s_aclk         (sys_clk),
        .s_aresetn      (!sys_rst),
        .s_axi_awid     (4'h6),
        .s_axi_awaddr   (bram_awaddr ),
        .s_axi_awlen    (bram_awlen  ),
        .s_axi_awsize   (bram_awsize ),
        .s_axi_awburst  (bram_awburst),
        .s_axi_awready  (bram_awready),
        .s_axi_awvalid  (bram_awvalid),
        .s_axi_wdata    (bram_wdata  ),
        .s_axi_wstrb    (bram_wstrb  ),
        .s_axi_wvalid   (bram_wvalid ),
        .s_axi_wlast    (bram_wlast  ),
        .s_axi_wready   (bram_wready ),
        .s_axi_bready   (bram_bready ),
        .s_axi_bid      (),
        .s_axi_bresp    (bram_bresp  ),
        .s_axi_bvalid   (bram_bvalid ),
        .s_axi_arid     (4'h6),
        .s_axi_araddr   (bram_araddr ),
        .s_axi_arlen    (bram_arlen  ),
        .s_axi_arsize   (bram_arsize ),
        .s_axi_arburst  (bram_arburst),
        .s_axi_arready  (bram_arready),
        .s_axi_arvalid  (bram_arvalid),
        .s_axi_rid      (),
        .s_axi_rdata    (bram_rdata  ),
        .s_axi_rvalid   (bram_rvalid ),
        .s_axi_rlast    (bram_rlast  ),
        .s_axi_rready   (bram_rready ),
        .s_axi_rresp    (bram_rresp  )
    );

    wire [31:0] tim_awaddr ;
    wire [ 7:0] tim_awlen  ;
    wire [ 2:0] tim_awsize ;
    wire [ 1:0] tim_awburst;
    wire        tim_awvalid;
    wire        tim_awready;
    wire [31:0] tim_wdata  ;
    wire [ 3:0] tim_wstrb  ;
    wire        tim_wlast  ;
    wire        tim_wvalid ;
    wire        tim_wready ;
    wire        tim_bready ;
    wire [ 1:0] tim_bresp  ;
    wire        tim_bvalid ;
    wire [31:0] tim_araddr ;
    wire [ 7:0] tim_arlen  ;
    wire [ 2:0] tim_arsize ;
    wire [ 1:0] tim_arburst;
    wire        tim_arvalid;
    wire        tim_arready;
    wire        tim_rready ;
    wire [31:0] tim_rdata  ;
    wire [ 1:0] tim_rresp  ;
    wire        tim_rlast  ;
    wire        tim_rvalid ;
    wire        tim_awlock ;
    wire [ 3:0] tim_awcache;
    wire [ 2:0] tim_awprot ;
    wire [ 3:0] tim_awregion;
    wire [ 3:0] tim_awqos  ;
    wire        tim_arlock ;
    wire [ 3:0] tim_arcache;
    wire [ 2:0] tim_arprot ;
    wire [ 3:0] tim_arregion;
    wire [ 3:0] tim_arqos  ;

`ifdef RUN_TRACE
    assign bram_awaddr  = cpu_awaddr ;
    assign bram_awlen   = cpu_awlen  ;
    assign bram_awsize  = cpu_awsize ;
    assign bram_awburst = cpu_awburst;
    assign cpu_awready  = bram_awready;
    assign bram_awvalid = cpu_awvalid;
    assign bram_wdata   = cpu_wdata  ;
    assign bram_wstrb   = cpu_wstrb  ;
    assign bram_wlast   = cpu_wlast  ;
    assign bram_wvalid  = cpu_wvalid ;
    assign cpu_wready   = bram_wready;
    assign cpu_bresp    = bram_bresp ;
    assign cpu_bvalid   = bram_bvalid;
    assign bram_bready  = cpu_bready ;
    assign bram_araddr  = cpu_araddr ;
    assign bram_arlen   = cpu_arlen  ;
    assign bram_arsize  = cpu_arsize ;
    assign bram_arburst = cpu_arburst;
    assign bram_arvalid = cpu_arvalid;
    assign cpu_arready  = bram_arready;
    assign bram_rready  = cpu_rready ;
    assign cpu_rdata    = bram_rdata ;
    assign cpu_rresp    = bram_rresp ;
    assign cpu_rlast    = bram_rlast ;
    assign cpu_rvalid   = bram_rvalid;
`else
    axi_crossbar_0 U_bridge (
        .aclk               (sys_clk),
        .aresetn            (!sys_rst),
        .s_axi_awaddr       (cpu_awaddr ),
        .s_axi_awlen        (cpu_awlen  ),
        .s_axi_awsize       (cpu_awsize ),
        .s_axi_awburst      (cpu_awburst),
        .s_axi_awlock       (1'b0       ),
        .s_axi_awcache      (4'h0       ),
        .s_axi_awprot       (3'h0       ),
        .s_axi_awqos        (4'h0       ),
        .s_axi_awvalid      (cpu_awvalid),
        .s_axi_awready      (cpu_awready),
        .s_axi_wdata        (cpu_wdata  ),
        .s_axi_wstrb        (cpu_wstrb  ),
        .s_axi_wlast        (cpu_wlast  ),
        .s_axi_wvalid       (cpu_wvalid ),
        .s_axi_wready       (cpu_wready ),
        .s_axi_bresp        (cpu_bresp  ),
        .s_axi_bvalid       (cpu_bvalid ),
        .s_axi_bready       (cpu_bready ),
        .s_axi_araddr       (cpu_araddr ),
        .s_axi_arlen        (cpu_arlen  ),
        .s_axi_arsize       (cpu_arsize ),
        .s_axi_arburst      (cpu_arburst),
        .s_axi_arlock       (1'b0       ),
        .s_axi_arcache      (4'h0       ),
        .s_axi_arprot       (3'h0       ),
        .s_axi_arqos        (4'h0       ),
        .s_axi_arvalid      (cpu_arvalid),
        .s_axi_arready      (cpu_arready),
        .s_axi_rdata        (cpu_rdata  ),
        .s_axi_rresp        (cpu_rresp  ),
        .s_axi_rlast        (cpu_rlast  ),
        .s_axi_rvalid       (cpu_rvalid ),
        .s_axi_rready       (cpu_rready ),

        // M00=BRAM, M01=SWITCH, M02=LED, M03=DISPLAY, M04=UART, M05=TIMER.
        .m_axi_awaddr       ({tim_awaddr , uart_awaddr , display_awaddr , led_awaddr , switch_awaddr , bram_awaddr }),
        .m_axi_awlen        ({tim_awlen  , uart_awlen  , display_awlen  , led_awlen  , switch_awlen  , bram_awlen  }),
        .m_axi_awsize       ({tim_awsize , uart_awsize , display_awsize , led_awsize , switch_awsize , bram_awsize }),
        .m_axi_awburst      ({tim_awburst, uart_awburst, display_awburst, led_awburst, switch_awburst, bram_awburst}),
        .m_axi_awlock       ({tim_awlock , uart_awlock , display_awlock , led_awlock , switch_awlock , bram_awlock }),
        .m_axi_awcache      ({tim_awcache, uart_awcache, display_awcache, led_awcache, switch_awcache, bram_awcache}),
        .m_axi_awprot       ({tim_awprot , uart_awprot , display_awprot , led_awprot , switch_awprot , bram_awprot }),
        .m_axi_awregion     ({tim_awregion, uart_awregion, display_awregion, led_awregion, switch_awregion, bram_awregion}),
        .m_axi_awqos        ({tim_awqos  , uart_awqos  , display_awqos  , led_awqos  , switch_awqos  , bram_awqos  }),
        .m_axi_awvalid      ({tim_awvalid, uart_awvalid, display_awvalid, led_awvalid, switch_awvalid, bram_awvalid}),
        .m_axi_awready      ({tim_awready, uart_awready, display_awready, led_awready, switch_awready, bram_awready}),
        .m_axi_wdata        ({tim_wdata  , uart_wdata  , display_wdata  , led_wdata  , switch_wdata  , bram_wdata  }),
        .m_axi_wstrb        ({tim_wstrb  , uart_wstrb  , display_wstrb  , led_wstrb  , switch_wstrb  , bram_wstrb  }),
        .m_axi_wlast        ({tim_wlast  , uart_wlast  , display_wlast  , led_wlast  , switch_wlast  , bram_wlast  }),
        .m_axi_wvalid       ({tim_wvalid , uart_wvalid , display_wvalid , led_wvalid , switch_wvalid , bram_wvalid }),
        .m_axi_wready       ({tim_wready , uart_wready , display_wready , led_wready , switch_wready , bram_wready }),
        .m_axi_bresp        ({tim_bresp  , uart_bresp  , display_bresp  , led_bresp  , switch_bresp  , bram_bresp  }),
        .m_axi_bvalid       ({tim_bvalid , uart_bvalid , display_bvalid , led_bvalid , switch_bvalid , bram_bvalid }),
        .m_axi_bready       ({tim_bready , uart_bready , display_bready , led_bready , switch_bready , bram_bready }),
        .m_axi_araddr       ({tim_araddr , uart_araddr , display_araddr , led_araddr , switch_araddr , bram_araddr }),
        .m_axi_arlen        ({tim_arlen  , uart_arlen  , display_arlen  , led_arlen  , switch_arlen  , bram_arlen  }),
        .m_axi_arsize       ({tim_arsize , uart_arsize , display_arsize , led_arsize , switch_arsize , bram_arsize }),
        .m_axi_arburst      ({tim_arburst, uart_arburst, display_arburst, led_arburst, switch_arburst, bram_arburst}),
        .m_axi_arlock       ({tim_arlock , uart_arlock , display_arlock , led_arlock , switch_arlock , bram_arlock }),
        .m_axi_arcache      ({tim_arcache, uart_arcache, display_arcache, led_arcache, switch_arcache, bram_arcache}),
        .m_axi_arprot       ({tim_arprot , uart_arprot , display_arprot , led_arprot , switch_arprot , bram_arprot }),
        .m_axi_arregion     ({tim_arregion, uart_arregion, display_arregion, led_arregion, switch_arregion, bram_arregion}),
        .m_axi_arqos        ({tim_arqos  , uart_arqos  , display_arqos  , led_arqos  , switch_arqos  , bram_arqos  }),
        .m_axi_arvalid      ({tim_arvalid, uart_arvalid, display_arvalid, led_arvalid, switch_arvalid, bram_arvalid}),
        .m_axi_arready      ({tim_arready, uart_arready, display_arready, led_arready, switch_arready, bram_arready}),
        .m_axi_rdata        ({tim_rdata  , uart_rdata  , display_rdata  , led_rdata  , switch_rdata  , bram_rdata  }),
        .m_axi_rresp        ({tim_rresp  , uart_rresp  , display_rresp  , led_rresp  , switch_rresp  , bram_rresp  }),
        .m_axi_rlast        ({tim_rlast  , uart_rlast  , display_rlast  , led_rlast  , switch_rlast  , bram_rlast  }),
        .m_axi_rvalid       ({tim_rvalid , uart_rvalid , display_rvalid , led_rvalid , switch_rvalid , bram_rvalid }),
        .m_axi_rready       ({tim_rready , uart_rready , display_rready , led_rready , switch_rready , bram_rready })
    );
`endif

`ifndef RUN_TRACE
    timer_wrap U_timer (
        .aclk           (sys_clk),
        .aresetn        (!sys_rst),
        .s_axi_awaddr   (tim_awaddr ),
        .s_axi_awlen    (tim_awlen  ),
        .s_axi_awsize   (tim_awsize ),
        .s_axi_awburst  (tim_awburst),
        .s_axi_awlock   (tim_awlock),
        .s_axi_awcache  (tim_awcache),
        .s_axi_awprot   (tim_awprot),
        .s_axi_awregion (tim_awregion),
        .s_axi_awqos    (tim_awqos),
        .s_axi_awvalid  (tim_awvalid),
        .s_axi_awready  (tim_awready),
        .s_axi_wdata    (tim_wdata  ),
        .s_axi_wstrb    (tim_wstrb  ),
        .s_axi_wlast    (tim_wlast  ),
        .s_axi_wvalid   (tim_wvalid ),
        .s_axi_wready   (tim_wready ),
        .s_axi_bresp    (tim_bresp  ),
        .s_axi_bvalid   (tim_bvalid ),
        .s_axi_bready   (tim_bready ),
        .s_axi_araddr   (tim_araddr ),
        .s_axi_arlen    (tim_arlen  ),
        .s_axi_arsize   (tim_arsize ),
        .s_axi_arburst  (tim_arburst),
        .s_axi_arlock   (tim_arlock),
        .s_axi_arcache  (tim_arcache),
        .s_axi_arprot   (tim_arprot),
        .s_axi_arregion (tim_arregion),
        .s_axi_arqos    (tim_arqos),
        .s_axi_arvalid  (tim_arvalid),
        .s_axi_arready  (tim_arready),
        .s_axi_rdata    (tim_rdata  ),
        .s_axi_rresp    (tim_rresp  ),
        .s_axi_rlast    (tim_rlast  ),
        .s_axi_rvalid   (tim_rvalid ),
        .s_axi_rready   (tim_rready )
    );

    uart_wrap U_uart (
    .aclk          (sys_clk),
    .aresetn       (!sys_rst),

    .s_axi_awaddr  (uart_awaddr),
    .s_axi_awlen   (uart_awlen),
    .s_axi_awsize  (uart_awsize),
    .s_axi_awburst (uart_awburst),
    .s_axi_awlock  (uart_awlock),
    .s_axi_awcache (uart_awcache),
    .s_axi_awprot  (uart_awprot),
    .s_axi_awregion(uart_awregion),
    .s_axi_awqos   (uart_awqos),
    .s_axi_awvalid (uart_awvalid),
    .s_axi_awready (uart_awready),

    .s_axi_wdata   (uart_wdata),
    .s_axi_wstrb   (uart_wstrb),
    .s_axi_wlast   (uart_wlast),
    .s_axi_wvalid  (uart_wvalid),
    .s_axi_wready  (uart_wready),

    .s_axi_bresp   (uart_bresp),
    .s_axi_bvalid  (uart_bvalid),
    .s_axi_bready  (uart_bready),

    .s_axi_araddr  (uart_araddr),
    .s_axi_arlen   (uart_arlen),
    .s_axi_arsize  (uart_arsize),
    .s_axi_arburst (uart_arburst),
    .s_axi_arlock  (uart_arlock),
    .s_axi_arcache (uart_arcache),
    .s_axi_arprot  (uart_arprot),
    .s_axi_arregion(uart_arregion),
    .s_axi_arqos   (uart_arqos),
    .s_axi_arvalid (uart_arvalid),
    .s_axi_arready (uart_arready),

    .s_axi_rdata   (uart_rdata),
    .s_axi_rresp   (uart_rresp),
    .s_axi_rlast   (uart_rlast),
    .s_axi_rvalid  (uart_rvalid),
    .s_axi_rready  (uart_rready),

    .rx            (rx),
    .tx            (tx)
);

    switch_wrap U_switch (
        .aclk          (sys_clk),
        .aresetn       (!sys_rst),

        .s_axi_awaddr  (switch_awaddr),
        .s_axi_awlen   (switch_awlen),
        .s_axi_awsize  (switch_awsize),
        .s_axi_awburst (switch_awburst),
        .s_axi_awlock  (switch_awlock),
        .s_axi_awcache (switch_awcache),
        .s_axi_awprot  (switch_awprot),
        .s_axi_awregion(switch_awregion),
        .s_axi_awqos   (switch_awqos),
        .s_axi_awvalid (switch_awvalid),
        .s_axi_awready (switch_awready),

        .s_axi_wdata   (switch_wdata),
        .s_axi_wstrb   (switch_wstrb),
        .s_axi_wlast   (switch_wlast),
        .s_axi_wvalid  (switch_wvalid),
        .s_axi_wready  (switch_wready),

        .s_axi_bresp   (switch_bresp),
        .s_axi_bvalid  (switch_bvalid),
        .s_axi_bready  (switch_bready),

        .s_axi_araddr  (switch_araddr),
        .s_axi_arlen   (switch_arlen),
        .s_axi_arsize  (switch_arsize),
        .s_axi_arburst (switch_arburst),
        .s_axi_arlock  (switch_arlock),
        .s_axi_arcache (switch_arcache),
        .s_axi_arprot  (switch_arprot),
        .s_axi_arregion(switch_arregion),
        .s_axi_arqos   (switch_arqos),
        .s_axi_arvalid (switch_arvalid),
        .s_axi_arready (switch_arready),

        .s_axi_rdata   (switch_rdata),
        .s_axi_rresp   (switch_rresp),
        .s_axi_rlast   (switch_rlast),
        .s_axi_rvalid  (switch_rvalid),
        .s_axi_rready  (switch_rready),

        .sw            (sw)
    );

    led_wrap U_led (
        .aclk          (sys_clk),
        .aresetn       (!sys_rst),

        .s_axi_awaddr  (led_awaddr),
        .s_axi_awlen   (led_awlen),
        .s_axi_awsize  (led_awsize),
        .s_axi_awburst (led_awburst),
        .s_axi_awlock  (led_awlock),
        .s_axi_awcache (led_awcache),
        .s_axi_awprot  (led_awprot),
        .s_axi_awregion(led_awregion),
        .s_axi_awqos   (led_awqos),
        .s_axi_awvalid (led_awvalid),
        .s_axi_awready (led_awready),

        .s_axi_wdata   (led_wdata),
        .s_axi_wstrb   (led_wstrb),
        .s_axi_wlast   (led_wlast),
        .s_axi_wvalid  (led_wvalid),
        .s_axi_wready  (led_wready),

        .s_axi_bresp   (led_bresp),
        .s_axi_bvalid  (led_bvalid),
        .s_axi_bready  (led_bready),

        .s_axi_araddr  (led_araddr),
        .s_axi_arlen   (led_arlen),
        .s_axi_arsize  (led_arsize),
        .s_axi_arburst (led_arburst),
        .s_axi_arlock  (led_arlock),
        .s_axi_arcache (led_arcache),
        .s_axi_arprot  (led_arprot),
        .s_axi_arregion(led_arregion),
        .s_axi_arqos   (led_arqos),
        .s_axi_arvalid (led_arvalid),
        .s_axi_arready (led_arready),

        .s_axi_rdata   (led_rdata),
        .s_axi_rresp   (led_rresp),
        .s_axi_rlast   (led_rlast),
        .s_axi_rvalid  (led_rvalid),
        .s_axi_rready  (led_rready),

        .led           (led)
    );

    display_wrap U_display (
        .aclk           (sys_clk),
        .aresetn        (!sys_rst),
        .s_axi_awaddr   (display_awaddr),
        .s_axi_awlen    (display_awlen),
        .s_axi_awsize   (display_awsize),
        .s_axi_awburst  (display_awburst),
        .s_axi_awlock   (display_awlock),
        .s_axi_awcache  (display_awcache),
        .s_axi_awprot   (display_awprot),
        .s_axi_awregion (display_awregion),
        .s_axi_awqos    (display_awqos),
        .s_axi_awvalid  (display_awvalid),
        .s_axi_awready  (display_awready),
        .s_axi_wdata    (display_wdata),
        .s_axi_wstrb    (display_wstrb),
        .s_axi_wlast    (display_wlast),
        .s_axi_wvalid   (display_wvalid),
        .s_axi_wready   (display_wready),
        .s_axi_bresp    (display_bresp),
        .s_axi_bvalid   (display_bvalid),
        .s_axi_bready   (display_bready),
        .s_axi_araddr   (display_araddr),
        .s_axi_arlen    (display_arlen),
        .s_axi_arsize   (display_arsize),
        .s_axi_arburst  (display_arburst),
        .s_axi_arlock   (display_arlock),
        .s_axi_arcache  (display_arcache),
        .s_axi_arprot   (display_arprot),
        .s_axi_arregion (display_arregion),
        .s_axi_arqos    (display_arqos),
        .s_axi_arvalid  (display_arvalid),
        .s_axi_arready  (display_arready),
        .s_axi_rdata    (display_rdata),
        .s_axi_rresp    (display_rresp),
        .s_axi_rlast    (display_rlast),
        .s_axi_rvalid   (display_rvalid),
        .s_axi_rready   (display_rready),
        .dig_en         (dig_en),
        .dig_seg        (dig_seg),
        .dig_seg1       (dig_seg1)
    );
`endif


endmodule
