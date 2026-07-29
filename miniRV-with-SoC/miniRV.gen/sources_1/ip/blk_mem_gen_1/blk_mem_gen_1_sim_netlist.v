// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2025 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2025.1 (win64) Build 6140274 Thu May 22 00:12:29 MDT 2025
// Date        : Wed Jul 29 10:34:16 2026
// Host        : LAPTOP-1C1u4O running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode funcsim -rename_top blk_mem_gen_1 -prefix
//               blk_mem_gen_1_ blk_mem_gen_1_sim_netlist.v
// Design      : blk_mem_gen_1
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a35tcsg324-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "blk_mem_gen_1,blk_mem_gen_v8_4_11,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_11,Vivado 2025.1" *) 
(* NotValidForBitStream *)
module blk_mem_gen_1
   (clka,
    ena,
    wea,
    addra,
    dina,
    douta);
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA CLK" *) (* x_interface_mode = "slave BRAM_PORTA" *) (* x_interface_parameter = "XIL_INTERFACENAME BRAM_PORTA, MEM_ADDRESS_MODE BYTE_ADDRESS, MEM_SIZE 8192, MEM_WIDTH 32, MEM_ECC NONE, MASTER_TYPE OTHER, READ_LATENCY 1" *) input clka;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA EN" *) input ena;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA WE" *) input [0:0]wea;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA ADDR" *) input [5:0]addra;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA DIN" *) input [133:0]dina;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA DOUT" *) output [133:0]douta;

  wire [5:0]addra;
  wire clka;
  wire [133:0]dina;
  wire [133:0]douta;
  wire ena;
  wire [0:0]wea;
  wire NLW_U0_dbiterr_UNCONNECTED;
  wire NLW_U0_rsta_busy_UNCONNECTED;
  wire NLW_U0_rstb_busy_UNCONNECTED;
  wire NLW_U0_s_axi_arready_UNCONNECTED;
  wire NLW_U0_s_axi_awready_UNCONNECTED;
  wire NLW_U0_s_axi_bvalid_UNCONNECTED;
  wire NLW_U0_s_axi_dbiterr_UNCONNECTED;
  wire NLW_U0_s_axi_rlast_UNCONNECTED;
  wire NLW_U0_s_axi_rvalid_UNCONNECTED;
  wire NLW_U0_s_axi_sbiterr_UNCONNECTED;
  wire NLW_U0_s_axi_wready_UNCONNECTED;
  wire NLW_U0_sbiterr_UNCONNECTED;
  wire [133:0]NLW_U0_doutb_UNCONNECTED;
  wire [5:0]NLW_U0_rdaddrecc_UNCONNECTED;
  wire [3:0]NLW_U0_s_axi_bid_UNCONNECTED;
  wire [1:0]NLW_U0_s_axi_bresp_UNCONNECTED;
  wire [5:0]NLW_U0_s_axi_rdaddrecc_UNCONNECTED;
  wire [133:0]NLW_U0_s_axi_rdata_UNCONNECTED;
  wire [3:0]NLW_U0_s_axi_rid_UNCONNECTED;
  wire [1:0]NLW_U0_s_axi_rresp_UNCONNECTED;

  (* C_ADDRA_WIDTH = "6" *) 
  (* C_ADDRB_WIDTH = "6" *) 
  (* C_ALGORITHM = "1" *) 
  (* C_AXI_ID_WIDTH = "4" *) 
  (* C_AXI_SLAVE_TYPE = "0" *) 
  (* C_AXI_TYPE = "1" *) 
  (* C_BYTE_SIZE = "9" *) 
  (* C_COMMON_CLK = "0" *) 
  (* C_COUNT_18K_BRAM = "0" *) 
  (* C_COUNT_36K_BRAM = "2" *) 
  (* C_CTRL_ECC_ALGO = "NONE" *) 
  (* C_DEFAULT_DATA = "0" *) 
  (* C_DISABLE_WARN_BHV_COLL = "0" *) 
  (* C_DISABLE_WARN_BHV_RANGE = "0" *) 
  (* C_ELABORATION_DIR = "./" *) 
  (* C_ENABLE_32BIT_ADDRESS = "0" *) 
  (* C_EN_DEEPSLEEP_PIN = "0" *) 
  (* C_EN_ECC_PIPE = "0" *) 
  (* C_EN_RDADDRA_CHG = "0" *) 
  (* C_EN_RDADDRB_CHG = "0" *) 
  (* C_EN_SAFETY_CKT = "0" *) 
  (* C_EN_SHUTDOWN_PIN = "0" *) 
  (* C_EN_SLEEP_PIN = "0" *) 
  (* C_EST_POWER_SUMMARY = "Estimated Power for IP     :     13.6123 mW" *) 
  (* C_FAMILY = "artix7" *) 
  (* C_HAS_AXI_ID = "0" *) 
  (* C_HAS_ENA = "1" *) 
  (* C_HAS_ENB = "0" *) 
  (* C_HAS_INJECTERR = "0" *) 
  (* C_HAS_MEM_OUTPUT_REGS_A = "1" *) 
  (* C_HAS_MEM_OUTPUT_REGS_B = "0" *) 
  (* C_HAS_MUX_OUTPUT_REGS_A = "0" *) 
  (* C_HAS_MUX_OUTPUT_REGS_B = "0" *) 
  (* C_HAS_REGCEA = "0" *) 
  (* C_HAS_REGCEB = "0" *) 
  (* C_HAS_RSTA = "0" *) 
  (* C_HAS_RSTB = "0" *) 
  (* C_HAS_SOFTECC_INPUT_REGS_A = "0" *) 
  (* C_HAS_SOFTECC_OUTPUT_REGS_B = "0" *) 
  (* C_INITA_VAL = "0" *) 
  (* C_INITB_VAL = "0" *) 
  (* C_INIT_FILE = "blk_mem_gen_1.mem" *) 
  (* C_INIT_FILE_NAME = "no_coe_file_loaded" *) 
  (* C_INTERFACE_TYPE = "0" *) 
  (* C_LOAD_INIT_FILE = "0" *) 
  (* C_MEM_TYPE = "0" *) 
  (* C_MUX_PIPELINE_STAGES = "0" *) 
  (* C_PRIM_TYPE = "1" *) 
  (* C_READ_DEPTH_A = "64" *) 
  (* C_READ_DEPTH_B = "64" *) 
  (* C_READ_LATENCY_A = "1" *) 
  (* C_READ_LATENCY_B = "1" *) 
  (* C_READ_WIDTH_A = "134" *) 
  (* C_READ_WIDTH_B = "134" *) 
  (* C_RSTRAM_A = "0" *) 
  (* C_RSTRAM_B = "0" *) 
  (* C_RST_PRIORITY_A = "CE" *) 
  (* C_RST_PRIORITY_B = "CE" *) 
  (* C_SIM_COLLISION_CHECK = "ALL" *) 
  (* C_USE_BRAM_BLOCK = "0" *) 
  (* C_USE_BYTE_WEA = "0" *) 
  (* C_USE_BYTE_WEB = "0" *) 
  (* C_USE_DEFAULT_DATA = "0" *) 
  (* C_USE_ECC = "0" *) 
  (* C_USE_SOFTECC = "0" *) 
  (* C_USE_URAM = "0" *) 
  (* C_WEA_WIDTH = "1" *) 
  (* C_WEB_WIDTH = "1" *) 
  (* C_WRITE_DEPTH_A = "64" *) 
  (* C_WRITE_DEPTH_B = "64" *) 
  (* C_WRITE_MODE_A = "WRITE_FIRST" *) 
  (* C_WRITE_MODE_B = "WRITE_FIRST" *) 
  (* C_WRITE_WIDTH_A = "134" *) 
  (* C_WRITE_WIDTH_B = "134" *) 
  (* C_XDEVICEFAMILY = "artix7" *) 
  (* downgradeipidentifiedwarnings = "yes" *) 
  (* is_du_within_envelope = "true" *) 
  blk_mem_gen_1_blk_mem_gen_v8_4_11 U0
       (.addra(addra),
        .addrb({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .clka(clka),
        .clkb(1'b0),
        .dbiterr(NLW_U0_dbiterr_UNCONNECTED),
        .deepsleep(1'b0),
        .dina(dina),
        .dinb({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .douta(douta),
        .doutb(NLW_U0_doutb_UNCONNECTED[133:0]),
        .eccpipece(1'b0),
        .ena(ena),
        .enb(1'b0),
        .injectdbiterr(1'b0),
        .injectsbiterr(1'b0),
        .rdaddrecc(NLW_U0_rdaddrecc_UNCONNECTED[5:0]),
        .regcea(1'b1),
        .regceb(1'b1),
        .rsta(1'b0),
        .rsta_busy(NLW_U0_rsta_busy_UNCONNECTED),
        .rstb(1'b0),
        .rstb_busy(NLW_U0_rstb_busy_UNCONNECTED),
        .s_aclk(1'b0),
        .s_aresetn(1'b0),
        .s_axi_araddr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arburst({1'b0,1'b0}),
        .s_axi_arid({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arlen({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arready(NLW_U0_s_axi_arready_UNCONNECTED),
        .s_axi_arsize({1'b0,1'b0,1'b0}),
        .s_axi_arvalid(1'b0),
        .s_axi_awaddr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awburst({1'b0,1'b0}),
        .s_axi_awid({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awlen({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awready(NLW_U0_s_axi_awready_UNCONNECTED),
        .s_axi_awsize({1'b0,1'b0,1'b0}),
        .s_axi_awvalid(1'b0),
        .s_axi_bid(NLW_U0_s_axi_bid_UNCONNECTED[3:0]),
        .s_axi_bready(1'b0),
        .s_axi_bresp(NLW_U0_s_axi_bresp_UNCONNECTED[1:0]),
        .s_axi_bvalid(NLW_U0_s_axi_bvalid_UNCONNECTED),
        .s_axi_dbiterr(NLW_U0_s_axi_dbiterr_UNCONNECTED),
        .s_axi_injectdbiterr(1'b0),
        .s_axi_injectsbiterr(1'b0),
        .s_axi_rdaddrecc(NLW_U0_s_axi_rdaddrecc_UNCONNECTED[5:0]),
        .s_axi_rdata(NLW_U0_s_axi_rdata_UNCONNECTED[133:0]),
        .s_axi_rid(NLW_U0_s_axi_rid_UNCONNECTED[3:0]),
        .s_axi_rlast(NLW_U0_s_axi_rlast_UNCONNECTED),
        .s_axi_rready(1'b0),
        .s_axi_rresp(NLW_U0_s_axi_rresp_UNCONNECTED[1:0]),
        .s_axi_rvalid(NLW_U0_s_axi_rvalid_UNCONNECTED),
        .s_axi_sbiterr(NLW_U0_s_axi_sbiterr_UNCONNECTED),
        .s_axi_wdata({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_wlast(1'b0),
        .s_axi_wready(NLW_U0_s_axi_wready_UNCONNECTED),
        .s_axi_wstrb(1'b0),
        .s_axi_wvalid(1'b0),
        .sbiterr(NLW_U0_sbiterr_UNCONNECTED),
        .shutdown(1'b0),
        .sleep(1'b0),
        .wea(wea),
        .web(1'b0));
endmodule
`pragma protect begin_protected
`pragma protect version = 1
`pragma protect encrypt_agent = "XILINX"
`pragma protect encrypt_agent_info = "Xilinx Encryption Tool 2025.1"
`pragma protect key_keyowner="Synopsys", key_keyname="SNPS-VCS-RSA-2", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=128)
`pragma protect key_block
gydSV72FvW4hnoyUt6yZFJHfJqjRQWPUfYIuDKP0fpjrPOkLRbJGBr4Z9msYTvoIHRlYtXJ2YMY0
d1TIQb+FK4gKsTRru9wr397OxuFBsTRf4e+ZjpYZEdsnqYWcgMSzhN4yhPvO06GyZO15y/LKBxa8
3OKwxVlOLYXhv+sxdXg=

`pragma protect key_keyowner="Aldec", key_keyname="ALDEC15_001", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
WHB6Zbfa5Qi47krP9T4L8UnPOlr881dWx7UcYaZfNGIQQM0gadcoXbhucIpRaUuyOKxv6yhKveRN
h0l+N9+KX6rbZ6+TRhP9JAMuPhlpI7T42QtRv5zx9+m3ct5S0NMszbFaK8zeTAYra5BGP7BHmtkr
MpKfLK5sFyaTE/A7ACtAace9MwFTHDZdl9uUs4aY6KJlm6GaypKduiqkNugukJp5vlFPX/ZapJqG
KMtMhI6grhcuYb1FJrwRZ4jW7hs9HxddSdGLzsZ0HsBcO/qaCPTst+ZA0YIQfd5ULlFmPqq39FfO
p1P+2hEH2n+LycbMj5cn4Dxfqv2R8eucM78R3w==

`pragma protect key_keyowner="Mentor Graphics Corporation", key_keyname="MGC-VELOCE-RSA", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=128)
`pragma protect key_block
SmAzQA1VEuJXtJi5vXa2Jg7YvRqAJs6PX9HTZ1YqrJw4VfonBW3726gJ81BjlizpMkcf/Uk5sFIK
aPedVhEs4xCIZylz7gXYDshtytOA/pXUID2qV9nXr8qfI+FydSADUF3ScYDZmlkclFqlZrGq6DQ7
da3lJAzt2h/iR+cczrA=

`pragma protect key_keyowner="Mentor Graphics Corporation", key_keyname="MGC-VERIF-SIM-RSA-2", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
iAph5JWb/chMQpLPX1UoLjQDxN5l2I8McM/k2xN5wRht7HXoE6F5yV8luDjn3zkI6vnfUYo7BaI1
mogRRx+R3XcwxvhHr+lngh4+/YLVex1TFncl+kiUMAsu3M/FjFSiqGMVMdKTNLDqr35DuZJVyuiF
lTwXob/KkbQDJiJjBEoxbt+968rKRKRyJGcqIjm4mqRBdqMcgo3HOJFG74SFsWAQrxvXfBhdLSG3
OfoLfls9XDojBjp7G83k0h82g1eeWgBfydm/OcX9o48Pst93NvI4ua8WShZL8MCvRWYqWZrrjrWi
cfUjXAF5SDACjq1/OU6arz/Idz6/a7AP/jmexw==

`pragma protect key_keyowner="Real Intent", key_keyname="RI-RSA-KEY-1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
BY49GZBxBT/gjZDPyaSWlti/sctckoR7jK6NuWdhnF9tiyNfVU7BqjjwxSnyMi0Uucv1BKHXC18h
8hQbFWnNtrq71ilURotXux7sssHlVJ2i1CsJWU18DOcBWxm2ai89uwvxDJh3TJkBJixB5KPvsDhL
lWOjTvZWPoR+Ixy+Tzo+U5Vx7z7SOakRwTrn3u7+c3vmCEBphE+HKeJExhBAoOEd0SXK5iwXaByW
D7Wb7zq6NNUmnCyaJ2BG9kGxLVsf+md7SlocuaFsYyaRZhwPyTucxIlz1tLYwcytKzx0ovoax3no
nYgzlzP/F0/PDWk9BqXgr/tuclc4EZYX0cf4ng==

`pragma protect key_keyowner="Xilinx", key_keyname="xilinxt_2025.1-2029.x", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
qGnCvL35qO7cbUEKCL50yDv1UvezcqBz601zctKop1954QlcjemzZWZHg1zJ00nJaToNdH2S8AKX
n8hNJvbQ+x5HEGL5DoSU9m5qjXd8xxocnZ0yzuZX/dGCT8kDn3gWJR2Gz13pT+w2LQUno1fX+MsC
ehgwvjBBT6GeYjdxHi+aybQUP9AblSxX/z3vh857SGCPohEWvghOgORCHAe45YD+ZWnL62FLxMM2
c+Ozq/Au/Q4q1Yzlzcfv8Mnsvg7OqOeEamQHbuYOfdkJUuYqOwsskEWW348u7FXtsf8m7P3pZyyz
IWyTDAW4igGguMPLHfbtK/twZx8ScJQmOKzglg==

`pragma protect key_keyowner="Metrics Technologies Inc.", key_keyname="DSim", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
Hz+6K8+wh5/fukU4ZWNDXGsq6hreSVCSPP67nA6kUz9Vpjy4TtTnOrrl1BWY0ivEC7Ldyw8VI60A
VO/WPlt409LdAZdMZGsEZ1JuTZ0m9LPcgu9CPCyoMECctmd8LHE+otY6etTmYABB9syY61rk2hrv
RgbcyT/HCK9TzWxSm+XMqvx2nvagCLkMDPh/JZv51fj2zcKaBPnxsz8rnDipaeo0fEyVRC3Y1F/V
U3RmXojBjIumPHSJkQ537dENJEIA0Ra65u8EM/+ItUn1bcryLcIbKy1xGadrHmHdHRUoRcAodO2C
B48bNVeL0VnGg8P9ACIB04lMNzn5p6A1tPOb4Q==

`pragma protect key_keyowner="Atrenta", key_keyname="ATR-SG-RSA-1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=384)
`pragma protect key_block
YDpb+UeT0rJ543Q8wCo2xSS3gpVAT+JoStgBlV5IMjJoUOWkiOPn691FGChmDi3BTq5NxC73KHHR
1galACCjeTGq6cv+0Zc2Ocm1oobdrnSPHp7TMDr5Zle8FX6WywJCiGdoWBODggZSlbOASIK/PVfY
cZM2z60M6RSvzsi3TnYHiKYHpju8THVoSgRd6r31GcbiSy9TjjARERXan0OVc79jGuAg90mmDEEq
91eqmn6NZ9yLI2fgBjFUZbtFCpmJ8WGxOL1h39niWnRK3ZXnk8jcpnZUlxLbYTPO0Z3vVr1zrvcn
RVQloU0OLqg7M95zSs7NtX5Vzvb6jGbMehWV+WMMyxWmxL2XOwsAwPSeX2dI2r77pioY7X6VzH7f
/JxMAnq9udra3WGPsUkD1G0CvPkCC3zdxjpVaflY37ztX9UONhKtzMQa8lJc1IL8GhXRY3R9Lg2c
HIeXSGkpNNuFDqKT6Khe/6Casq+SjFJq+IH9IUtz6RUZTkbFb0Xhgm2P

`pragma protect key_keyowner="Cadence Design Systems.", key_keyname="CDS_RSA_KEY_VER_1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
Q+63zFEYw/LeMgxa7g8g79GGvSyIKDKD8RvvC4DHDQuGObf6n9OGZX4e17v/E/+EDEwUhsWQHFDI
Lp/aH+6fNRmhu9BEWVjxq2WRrQSl4eQjfIaSOXu2dlYh3JjRJwiUp4LteVh8RFAf5t5sRQO4dRIK
x+h28yliSgibaWEAv5FaJQ1EFbNwmgedAaSYjgf2A3afBUcBh5Uy9VHbW/zRzdhhJdsVNBjZYcFy
CVLOcf1toCRp8J4U5FlnFMOzFegUbdXFQhq2VmIhPRxWjrfTk6iR4BcMEN9UMij/5IHRAeBdksyD
CqEKsyFxosbI5KVMRZ1Ln75Zipn0JdsGekHkxg==

`pragma protect key_keyowner="Synplicity", key_keyname="SYNP15_1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
DPUa5DLPYRWvbPnX0U412yoWvvvHyuq43DrYmDJGTK0cR5U4U6th8icYgizC1/hUAEzt19kM/hVa
zZh7bXSWACYLpcfhPY8dRTVGDZVjpbkraw0ceBryLP7jc6Jt5JdNw88tZtZpprCB7nQ25lUL82Hf
WTwL1ZqgGIvtfHhxO0JF5L5ES5giedwQ6u5ffXG3UB6ELcpQD1NvpW5lAz4mfXyvVDCAPZN581TF
tlAy79iKbPKlJ2zFn1BS2cuRIHHe2JRxwPo+0n5VD5CXVgg+lCYxTnCxI8CdyFaTumbs4IfAKwVI
wSN/btbwDUhW9hAHWHIRo+BpdJ4qeGcTDPKtsA==

`pragma protect key_keyowner="Mentor Graphics Corporation", key_keyname="MGC-PREC-RSA", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
mf5hcf6JE6yLm0jNCQnHMVmogjLlPz6re0FwG67yvOJ3FuEorru0emIeAKEwgOoxjUYNWvcM7QAH
/UEeB2EIdjLl6glPAUda0HjtaCU2rdncVdM8k6DSMBggc4yo18Qx5F+1TD/RoBgoo0jNkMdDy6wJ
JHjqlN+R01z3yYIMQ9f2z6ZaYncbBYEp4+YAb7g1D7CSMxP5cFRpQznRpYp0JwqJfT9CHzlKgdab
8B288NxeLM66iYodiTS+GSRGLGtDWXpz9yeiuiPe6kJxae2GJyHIMSfluO/0Slc3m24DQNdbojf8
jdc0G2UnrDe5mCUTfYiDmpOWTUJOdYo0FK0N2g==

`pragma protect data_method = "AES128-CBC"
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 51696)
`pragma protect data_block
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
`pragma protect end_protected
`ifndef GLBL
`define GLBL
`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;
    parameter GRES_WIDTH = 10000;
    parameter GRES_START = 10000;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    wire GRESTORE;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;
    wire FCSBO_GLBL;
    wire [3:0] DO_GLBL;
    wire [3:0] DI_GLBL;
   
    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;
    reg GRESTORE_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (strong1, weak0) GSR = GSR_int;
    assign (strong1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;
    assign (strong1, weak0) GRESTORE = GRESTORE_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

    initial begin 
	GRESTORE_int = 1'b0;
	#(GRES_START);
	GRESTORE_int = 1'b1;
	#(GRES_WIDTH);
	GRESTORE_int = 1'b0;
    end

endmodule
`endif
