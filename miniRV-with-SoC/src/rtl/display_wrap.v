module display_wrap(
    input  wire         aclk,
    input  wire         aresetn,
    input  wire [31:0]  s_axi_awaddr,
    input  wire [ 7:0]  s_axi_awlen,
    input  wire [ 2:0]  s_axi_awsize,
    input  wire [ 1:0]  s_axi_awburst,
    input  wire [ 0:0]  s_axi_awlock,
    input  wire [ 3:0]  s_axi_awcache,
    input  wire [ 2:0]  s_axi_awprot,
    input  wire [ 3:0]  s_axi_awregion,
    input  wire [ 3:0]  s_axi_awqos,
    input  wire         s_axi_awvalid,
    output wire         s_axi_awready,
    input  wire [31:0]  s_axi_wdata,
    input  wire [ 3:0]  s_axi_wstrb,
    input  wire         s_axi_wlast,
    input  wire         s_axi_wvalid,
    output wire         s_axi_wready,
    output wire [ 1:0]  s_axi_bresp,
    output wire         s_axi_bvalid,
    input  wire         s_axi_bready,
    input  wire [31:0]  s_axi_araddr,
    input  wire [ 7:0]  s_axi_arlen,
    input  wire [ 2:0]  s_axi_arsize,
    input  wire [ 1:0]  s_axi_arburst,
    input  wire [ 0:0]  s_axi_arlock,
    input  wire [ 3:0]  s_axi_arcache,
    input  wire [ 2:0]  s_axi_arprot,
    input  wire [ 3:0]  s_axi_arregion,
    input  wire [ 3:0]  s_axi_arqos,
    input  wire         s_axi_arvalid,
    output wire         s_axi_arready,
    output wire [31:0]  s_axi_rdata,
    output wire [ 1:0]  s_axi_rresp,
    output wire         s_axi_rlast,
    output wire         s_axi_rvalid,
    input  wire         s_axi_rready,
    output wire [7:0] dig_en,
    output wire [7:0] dig_seg,
    output wire [7:0] dig_seg1
);

wire [31:0] display_data;

wire [31:0] display_awaddr;
wire        display_awready;
wire        display_awvalid;
wire [31:0] display_wdata;
wire [3:0]  display_wstrb;
wire        display_wvalid;
wire        display_wready;
wire        display_bready;
wire [1:0]  display_bresp;
wire        display_bvalid;
wire [31:0] display_araddr;
wire        display_arready;
wire        display_arvalid;
wire [31:0] display_rdata;
wire        display_rready;
wire [1:0]  display_rresp;
wire        display_rvalid;

// AXI GPIO 必须配置为：
// Single Channel，All Outputs，GPIO Width = 32
axi_gpio_3 U_display_gpio (
    .s_axi_aclk    (aclk),
    .s_axi_aresetn (aresetn),
    .s_axi_awaddr  (display_awaddr[8:0]),
    .s_axi_awvalid (display_awvalid),
    .s_axi_awready (display_awready),
    .s_axi_wdata   (display_wdata),
    .s_axi_wstrb   (display_wstrb),
    .s_axi_wvalid  (display_wvalid),
    .s_axi_wready  (display_wready),
    .s_axi_bresp   (display_bresp),
    .s_axi_bvalid  (display_bvalid),
    .s_axi_bready  (display_bready),
    .s_axi_araddr  (display_araddr[8:0]),
    .s_axi_arvalid (display_arvalid),
    .s_axi_arready (display_arready),
    .s_axi_rdata   (display_rdata),
    .s_axi_rresp   (display_rresp),
    .s_axi_rvalid  (display_rvalid),
    .s_axi_rready  (display_rready),
    .gpio_io_o     (display_data)
);

axi_protocol_converter_0 U_display_converter (
    .aclk           (aclk),
    .aresetn        (aresetn),

    .s_axi_awaddr   (s_axi_awaddr),
    .s_axi_awlen    (s_axi_awlen),
    .s_axi_awsize   (s_axi_awsize),
    .s_axi_awburst  (s_axi_awburst),
    .s_axi_awlock   (s_axi_awlock),
    .s_axi_awcache  (s_axi_awcache),
    .s_axi_awprot   (s_axi_awprot),
    .s_axi_awregion  (s_axi_awregion),
    .s_axi_awqos    (s_axi_awqos),
    .s_axi_awvalid  (s_axi_awvalid),
    .s_axi_awready  (s_axi_awready),

    .s_axi_wdata    (s_axi_wdata),
    .s_axi_wstrb    (s_axi_wstrb),
    .s_axi_wlast    (s_axi_wlast),
    .s_axi_wvalid   (s_axi_wvalid),
    .s_axi_wready   (s_axi_wready),

    .s_axi_bresp    (s_axi_bresp),
    .s_axi_bvalid   (s_axi_bvalid),
    .s_axi_bready   (s_axi_bready),

    .s_axi_araddr   (s_axi_araddr),
    .s_axi_arlen    (s_axi_arlen),
    .s_axi_arsize   (s_axi_arsize),
    .s_axi_arburst  (s_axi_arburst),
    .s_axi_arlock   (s_axi_arlock),
    .s_axi_arcache  (s_axi_arcache),
    .s_axi_arprot   (s_axi_arprot),
    .s_axi_arregion  (s_axi_arregion),
    .s_axi_arqos    (s_axi_arqos),
    .s_axi_arvalid  (s_axi_arvalid),
    .s_axi_arready  (s_axi_arready),

    .s_axi_rdata    (s_axi_rdata),
    .s_axi_rresp    (s_axi_rresp),
    .s_axi_rlast    (s_axi_rlast),
    .s_axi_rvalid   (s_axi_rvalid),
    .s_axi_rready   (s_axi_rready),

    .m_axi_awaddr  (display_awaddr),
    .m_axi_awvalid (display_awvalid),
    .m_axi_awready (display_awready),
    .m_axi_wdata   (display_wdata),
    .m_axi_wstrb   (display_wstrb),
    .m_axi_wvalid  (display_wvalid),
    .m_axi_wready  (display_wready),
    .m_axi_bresp   (display_bresp),
    .m_axi_bvalid  (display_bvalid),
    .m_axi_bready  (display_bready),
    .m_axi_araddr  (display_araddr),
    .m_axi_arvalid (display_arvalid),
    .m_axi_arready (display_arready),
    .m_axi_rdata   (display_rdata),
    .m_axi_rresp   (display_rresp),
    .m_axi_rvalid  (display_rvalid),
    .m_axi_rready  (display_rready)
);

// 动态扫描，50 MHz 时约 763 Hz 刷新一帧
reg [15:0] refresh_cnt;
wire [2:0] digit_sel;
reg  [3:0] digit_value;
reg  [7:0] seg_value;

always @(posedge aclk or negedge aresetn) begin
    if (!aresetn)
        refresh_cnt <= 16'h0;
    else
        refresh_cnt <= refresh_cnt + 16'h1;
end

assign digit_sel = refresh_cnt[15:13];
assign dig_en = 8'b0000_0001 << digit_sel;

always @(*) begin
    case (digit_sel)
        3'd0: digit_value = display_data[ 3: 0];
        3'd1: digit_value = display_data[ 7: 4];
        3'd2: digit_value = display_data[11: 8];
        3'd3: digit_value = display_data[15:12];
        3'd4: digit_value = display_data[19:16];
        3'd5: digit_value = display_data[23:20];
        3'd6: digit_value = display_data[27:24];
        3'd7: digit_value = display_data[31:28];
    endcase
end

// dig_seg = {CA, CB, CC, CD, CE, CF, CG, DP}
// EGO1 数码管为高电平有效
always @(*) begin
    case (digit_value)
        4'h0: seg_value = 8'b11111100;
        4'h1: seg_value = 8'b01100000;
        4'h2: seg_value = 8'b11011010;
        4'h3: seg_value = 8'b11110010;
        4'h4: seg_value = 8'b01100110;
        4'h5: seg_value = 8'b10110110;
        4'h6: seg_value = 8'b10111110;
        4'h7: seg_value = 8'b11100000;
        4'h8: seg_value = 8'b11111110;
        4'h9: seg_value = 8'b11110110;
        4'hA: seg_value = 8'b11101110;
        4'hB: seg_value = 8'b00111110;
        4'hC: seg_value = 8'b10011100;
        4'hD: seg_value = 8'b01111010;
        4'hE: seg_value = 8'b10011110;
        4'hF: seg_value = 8'b10001110;
        default: seg_value = 8'b00000000;
    endcase
end

assign dig_seg  = seg_value;
assign dig_seg1 = seg_value;

endmodule
