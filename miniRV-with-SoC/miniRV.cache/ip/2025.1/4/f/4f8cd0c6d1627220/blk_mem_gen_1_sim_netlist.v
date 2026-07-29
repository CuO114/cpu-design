// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2025 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2025.1 (win64) Build 6140274 Thu May 22 00:12:29 MDT 2025
// Date        : Wed Jul 29 10:34:16 2026
// Host        : LAPTOP-1C1u4O running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ blk_mem_gen_1_sim_netlist.v
// Design      : blk_mem_gen_1
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a35tcsg324-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "blk_mem_gen_1,blk_mem_gen_v8_4_11,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_11,Vivado 2025.1" *) 
(* NotValidForBitStream *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix
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
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_blk_mem_gen_v8_4_11 U0
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
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 52128)
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
