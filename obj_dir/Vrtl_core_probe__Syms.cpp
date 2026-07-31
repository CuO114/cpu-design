// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vrtl_core_probe__pch.h"
#include "Vrtl_core_probe.h"
#include "Vrtl_core_probe___024root.h"
#include "Vrtl_core_probe_rtl_core_probe.h"
#include "Vrtl_core_probe_cpu_core.h"
#include "Vrtl_core_probe_ALU.h"
#include "Vrtl_core_probe_multiplier.h"
#include "Vrtl_core_probe_multiplier__W21.h"

// FUNCTIONS
Vrtl_core_probe__Syms::~Vrtl_core_probe__Syms()
{
}

Vrtl_core_probe__Syms::Vrtl_core_probe__Syms(VerilatedContext* contextp, const char* namep, Vrtl_core_probe* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__rtl_core_probe{this, Verilated::catName(namep, "rtl_core_probe")}
    , TOP__rtl_core_probe__dut{this, Verilated::catName(namep, "rtl_core_probe.dut")}
    , TOP__rtl_core_probe__dut__U_ALU{this, Verilated::catName(namep, "rtl_core_probe.dut.U_ALU")}
    , TOP__rtl_core_probe__dut__U_ALU__U_mul{this, Verilated::catName(namep, "rtl_core_probe.dut.U_ALU.U_mul")}
    , TOP__rtl_core_probe__dut__U_ALU__U_mulu{this, Verilated::catName(namep, "rtl_core_probe.dut.U_ALU.U_mulu")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.rtl_core_probe = &TOP__rtl_core_probe;
    TOP__rtl_core_probe.dut = &TOP__rtl_core_probe__dut;
    TOP__rtl_core_probe__dut.U_ALU = &TOP__rtl_core_probe__dut__U_ALU;
    TOP__rtl_core_probe__dut__U_ALU.U_mul = &TOP__rtl_core_probe__dut__U_ALU__U_mul;
    TOP__rtl_core_probe__dut__U_ALU.U_mulu = &TOP__rtl_core_probe__dut__U_ALU__U_mulu;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__rtl_core_probe.__Vconfigure(true);
    TOP__rtl_core_probe__dut.__Vconfigure(true);
    TOP__rtl_core_probe__dut__U_ALU.__Vconfigure(true);
    TOP__rtl_core_probe__dut__U_ALU__U_mul.__Vconfigure(true);
    TOP__rtl_core_probe__dut__U_ALU__U_mulu.__Vconfigure(true);
    // Setup scopes
    __Vscope_rtl_core_probe__dut.configure(this, name(), "rtl_core_probe.dut", "dut", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_rtl_core_probe__dut__U_ALU.configure(this, name(), "rtl_core_probe.dut.U_ALU", "U_ALU", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_rtl_core_probe__dut__U_ALU__U_mul.configure(this, name(), "rtl_core_probe.dut.U_ALU.U_mul", "U_mul", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_rtl_core_probe__dut__U_ALU__U_mulu.configure(this, name(), "rtl_core_probe.dut.U_ALU.U_mulu", "U_mulu", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_rtl_core_probe__dut.varInsert(__Vfinal,"ex_alu_b", &(TOP__rtl_core_probe__dut.ex_alu_b), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rtl_core_probe__dut.varInsert(__Vfinal,"ex_alu_c", &(TOP__rtl_core_probe__dut.ex_alu_c), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rtl_core_probe__dut.varInsert(__Vfinal,"ex_br_taken", &(TOP__rtl_core_probe__dut.ex_br_taken), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rtl_core_probe__dut.varInsert(__Vfinal,"ex_mem_pc", &(TOP__rtl_core_probe__dut.ex_mem_pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rtl_core_probe__dut.varInsert(__Vfinal,"flush_d", &(TOP__rtl_core_probe__dut.flush_d), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rtl_core_probe__dut.varInsert(__Vfinal,"flush_f", &(TOP__rtl_core_probe__dut.flush_f), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rtl_core_probe__dut.varInsert(__Vfinal,"forward_b", &(TOP__rtl_core_probe__dut.forward_b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_rtl_core_probe__dut.varInsert(__Vfinal,"id_ex_alu_op", &(TOP__rtl_core_probe__dut.id_ex_alu_op), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_rtl_core_probe__dut.varInsert(__Vfinal,"id_ex_alub_sel", &(TOP__rtl_core_probe__dut.id_ex_alub_sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rtl_core_probe__dut.varInsert(__Vfinal,"id_ex_ext", &(TOP__rtl_core_probe__dut.id_ex_ext), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rtl_core_probe__dut.varInsert(__Vfinal,"id_ex_pc", &(TOP__rtl_core_probe__dut.id_ex_pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rtl_core_probe__dut.varInsert(__Vfinal,"id_ex_rs1", &(TOP__rtl_core_probe__dut.id_ex_rs1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_rtl_core_probe__dut.varInsert(__Vfinal,"id_ex_rs2", &(TOP__rtl_core_probe__dut.id_ex_rs2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_rtl_core_probe__dut.varInsert(__Vfinal,"if_id_inst", &(TOP__rtl_core_probe__dut.if_id_inst), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rtl_core_probe__dut.varInsert(__Vfinal,"if_id_pc", &(TOP__rtl_core_probe__dut.if_id_pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rtl_core_probe__dut.varInsert(__Vfinal,"ifetch_addr", &(TOP__rtl_core_probe__dut.ifetch_addr), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rtl_core_probe__dut.varInsert(__Vfinal,"ifetch_req", &(TOP__rtl_core_probe__dut.ifetch_req), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_rtl_core_probe__dut.varInsert(__Vfinal,"ifetch_valid", &(TOP__rtl_core_probe__dut.ifetch_valid), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_rtl_core_probe__dut.varInsert(__Vfinal,"mem_wb_ext", &(TOP__rtl_core_probe__dut.mem_wb_ext), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rtl_core_probe__dut.varInsert(__Vfinal,"mem_wb_pc", &(TOP__rtl_core_probe__dut.mem_wb_pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rtl_core_probe__dut.varInsert(__Vfinal,"mem_wb_rd", &(TOP__rtl_core_probe__dut.mem_wb_rd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_rtl_core_probe__dut.varInsert(__Vfinal,"mem_wb_rf_we", &(TOP__rtl_core_probe__dut.mem_wb_rf_we), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rtl_core_probe__dut.varInsert(__Vfinal,"mem_wb_rf_wsel", &(TOP__rtl_core_probe__dut.mem_wb_rf_wsel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_rtl_core_probe__dut.varInsert(__Vfinal,"pc", &(TOP__rtl_core_probe__dut.pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rtl_core_probe__dut.varInsert(__Vfinal,"stall_d", &(TOP__rtl_core_probe__dut.stall_d), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rtl_core_probe__dut.varInsert(__Vfinal,"stall_f", &(TOP__rtl_core_probe__dut.stall_f), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rtl_core_probe__dut__U_ALU.varInsert(__Vfinal,"a_latched", &(TOP__rtl_core_probe__dut__U_ALU.a_latched), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rtl_core_probe__dut__U_ALU.varInsert(__Vfinal,"b_latched", &(TOP__rtl_core_probe__dut__U_ALU.b_latched), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rtl_core_probe__dut__U_ALU.varInsert(__Vfinal,"mul_busy", &(TOP__rtl_core_probe__dut__U_ALU.mul_busy), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rtl_core_probe__dut__U_ALU.varInsert(__Vfinal,"multi_active", &(TOP__rtl_core_probe__dut__U_ALU.multi_active), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rtl_core_probe__dut__U_ALU.varInsert(__Vfinal,"op", &(TOP__rtl_core_probe__dut__U_ALU.op), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,4,0);
        __Vscope_rtl_core_probe__dut__U_ALU.varInsert(__Vfinal,"op_r", &(TOP__rtl_core_probe__dut__U_ALU.op_r), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_rtl_core_probe__dut__U_ALU__U_mul.varInsert(__Vfinal,"busy", &(TOP__rtl_core_probe__dut__U_ALU__U_mul.busy), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_rtl_core_probe__dut__U_ALU__U_mul.varInsert(__Vfinal,"count", &(TOP__rtl_core_probe__dut__U_ALU__U_mul.count), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_rtl_core_probe__dut__U_ALU__U_mul.varInsert(__Vfinal,"multiplicand", &(TOP__rtl_core_probe__dut__U_ALU__U_mul.multiplicand), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rtl_core_probe__dut__U_ALU__U_mul.varInsert(__Vfinal,"product_hi", &(TOP__rtl_core_probe__dut__U_ALU__U_mul.product_hi), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,32,0);
        __Vscope_rtl_core_probe__dut__U_ALU__U_mul.varInsert(__Vfinal,"product_lo", &(TOP__rtl_core_probe__dut__U_ALU__U_mul.product_lo), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rtl_core_probe__dut__U_ALU__U_mul.varInsert(__Vfinal,"start", &(TOP__rtl_core_probe__dut__U_ALU__U_mul.start), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_rtl_core_probe__dut__U_ALU__U_mulu.varInsert(__Vfinal,"busy", &(TOP__rtl_core_probe__dut__U_ALU__U_mulu.busy), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_rtl_core_probe__dut__U_ALU__U_mulu.varInsert(__Vfinal,"count", &(TOP__rtl_core_probe__dut__U_ALU__U_mulu.count), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_rtl_core_probe__dut__U_ALU__U_mulu.varInsert(__Vfinal,"multiplicand", &(TOP__rtl_core_probe__dut__U_ALU__U_mulu.multiplicand), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,32,0);
        __Vscope_rtl_core_probe__dut__U_ALU__U_mulu.varInsert(__Vfinal,"product_hi", &(TOP__rtl_core_probe__dut__U_ALU__U_mulu.product_hi), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,33,0);
        __Vscope_rtl_core_probe__dut__U_ALU__U_mulu.varInsert(__Vfinal,"product_lo", &(TOP__rtl_core_probe__dut__U_ALU__U_mulu.product_lo), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1 ,32,0);
        __Vscope_rtl_core_probe__dut__U_ALU__U_mulu.varInsert(__Vfinal,"start", &(TOP__rtl_core_probe__dut__U_ALU__U_mulu.start), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
    }
}
