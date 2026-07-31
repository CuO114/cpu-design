transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

vlib work
vlib activehdl/xpm
vlib activehdl/generic_baseblocks_v2_1_2
vlib activehdl/fifo_generator_v13_2_13
vlib activehdl/axi_data_fifo_v2_1_35
vlib activehdl/axi_infrastructure_v1_1_0
vlib activehdl/axi_register_slice_v2_1_35
vlib activehdl/axi_protocol_converter_v2_1_36
vlib activehdl/xil_defaultlib

vmap xpm activehdl/xpm
vmap generic_baseblocks_v2_1_2 activehdl/generic_baseblocks_v2_1_2
vmap fifo_generator_v13_2_13 activehdl/fifo_generator_v13_2_13
vmap axi_data_fifo_v2_1_35 activehdl/axi_data_fifo_v2_1_35
vmap axi_infrastructure_v1_1_0 activehdl/axi_infrastructure_v1_1_0
vmap axi_register_slice_v2_1_35 activehdl/axi_register_slice_v2_1_35
vmap axi_protocol_converter_v2_1_36 activehdl/axi_protocol_converter_v2_1_36
vmap xil_defaultlib activehdl/xil_defaultlib

vlog -work xpm  -sv2k12 "+incdir+../../../ipstatic/hdl" "+incdir+../../../../../../vivado/2025.1/Vivado/data/rsb/busdef" -l xpm -l generic_baseblocks_v2_1_2 -l fifo_generator_v13_2_13 -l axi_data_fifo_v2_1_35 -l axi_infrastructure_v1_1_0 -l axi_register_slice_v2_1_35 -l axi_protocol_converter_v2_1_36 -l xil_defaultlib \
"D:/vivado/2025.1/Vivado/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
"D:/vivado/2025.1/Vivado/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \

vcom -work xpm -93  \
"D:/vivado/2025.1/Vivado/data/ip/xpm/xpm_VCOMP.vhd" \

vlog -work generic_baseblocks_v2_1_2  -v2k5 "+incdir+../../../ipstatic/hdl" "+incdir+../../../../../../vivado/2025.1/Vivado/data/rsb/busdef" -l xpm -l generic_baseblocks_v2_1_2 -l fifo_generator_v13_2_13 -l axi_data_fifo_v2_1_35 -l axi_infrastructure_v1_1_0 -l axi_register_slice_v2_1_35 -l axi_protocol_converter_v2_1_36 -l xil_defaultlib \
"../../../ipstatic/hdl/generic_baseblocks_v2_1_vl_rfs.v" \

vlog -work fifo_generator_v13_2_13  -v2k5 "+incdir+../../../ipstatic/hdl" "+incdir+../../../../../../vivado/2025.1/Vivado/data/rsb/busdef" -l xpm -l generic_baseblocks_v2_1_2 -l fifo_generator_v13_2_13 -l axi_data_fifo_v2_1_35 -l axi_infrastructure_v1_1_0 -l axi_register_slice_v2_1_35 -l axi_protocol_converter_v2_1_36 -l xil_defaultlib \
"../../../ipstatic/simulation/fifo_generator_vlog_beh.v" \

vcom -work fifo_generator_v13_2_13 -93  \
"../../../ipstatic/hdl/fifo_generator_v13_2_rfs.vhd" \

vlog -work fifo_generator_v13_2_13  -v2k5 "+incdir+../../../ipstatic/hdl" "+incdir+../../../../../../vivado/2025.1/Vivado/data/rsb/busdef" -l xpm -l generic_baseblocks_v2_1_2 -l fifo_generator_v13_2_13 -l axi_data_fifo_v2_1_35 -l axi_infrastructure_v1_1_0 -l axi_register_slice_v2_1_35 -l axi_protocol_converter_v2_1_36 -l xil_defaultlib \
"../../../ipstatic/hdl/fifo_generator_v13_2_rfs.v" \

vlog -work axi_data_fifo_v2_1_35  -v2k5 "+incdir+../../../ipstatic/hdl" "+incdir+../../../../../../vivado/2025.1/Vivado/data/rsb/busdef" -l xpm -l generic_baseblocks_v2_1_2 -l fifo_generator_v13_2_13 -l axi_data_fifo_v2_1_35 -l axi_infrastructure_v1_1_0 -l axi_register_slice_v2_1_35 -l axi_protocol_converter_v2_1_36 -l xil_defaultlib \
"../../../ipstatic/hdl/axi_data_fifo_v2_1_vl_rfs.v" \

vlog -work axi_infrastructure_v1_1_0  -v2k5 "+incdir+../../../ipstatic/hdl" "+incdir+../../../../../../vivado/2025.1/Vivado/data/rsb/busdef" -l xpm -l generic_baseblocks_v2_1_2 -l fifo_generator_v13_2_13 -l axi_data_fifo_v2_1_35 -l axi_infrastructure_v1_1_0 -l axi_register_slice_v2_1_35 -l axi_protocol_converter_v2_1_36 -l xil_defaultlib \
"../../../ipstatic/hdl/axi_infrastructure_v1_1_vl_rfs.v" \

vlog -work axi_register_slice_v2_1_35  -v2k5 "+incdir+../../../ipstatic/hdl" "+incdir+../../../../../../vivado/2025.1/Vivado/data/rsb/busdef" -l xpm -l generic_baseblocks_v2_1_2 -l fifo_generator_v13_2_13 -l axi_data_fifo_v2_1_35 -l axi_infrastructure_v1_1_0 -l axi_register_slice_v2_1_35 -l axi_protocol_converter_v2_1_36 -l xil_defaultlib \
"../../../ipstatic/hdl/axi_register_slice_v2_1_vl_rfs.v" \

vlog -work axi_protocol_converter_v2_1_36  -v2k5 "+incdir+../../../ipstatic/hdl" "+incdir+../../../../../../vivado/2025.1/Vivado/data/rsb/busdef" -l xpm -l generic_baseblocks_v2_1_2 -l fifo_generator_v13_2_13 -l axi_data_fifo_v2_1_35 -l axi_infrastructure_v1_1_0 -l axi_register_slice_v2_1_35 -l axi_protocol_converter_v2_1_36 -l xil_defaultlib \
"../../../ipstatic/hdl/axi_protocol_converter_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../ipstatic/hdl" "+incdir+../../../../../../vivado/2025.1/Vivado/data/rsb/busdef" -l xpm -l generic_baseblocks_v2_1_2 -l fifo_generator_v13_2_13 -l axi_data_fifo_v2_1_35 -l axi_infrastructure_v1_1_0 -l axi_register_slice_v2_1_35 -l axi_protocol_converter_v2_1_36 -l xil_defaultlib \
"../../../../src/rtl/ip/axi_protocol_converter_0/sim/axi_protocol_converter_0.v" \

vlog -work xil_defaultlib \
"glbl.v"

