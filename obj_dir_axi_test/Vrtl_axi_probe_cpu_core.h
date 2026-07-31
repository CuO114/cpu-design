// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtl_axi_probe.h for the primary calling header

#ifndef VERILATED_VRTL_AXI_PROBE_CPU_CORE_H_
#define VERILATED_VRTL_AXI_PROBE_CPU_CORE_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vrtl_axi_probe_ALU;


class Vrtl_axi_probe__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtl_axi_probe_cpu_core final : public VerilatedModule {
  public:
    // CELLS
    Vrtl_axi_probe_ALU* U_ALU;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__cpu_rst,0,0);
        VL_IN8(__PVT__cpu_clk,0,0);
        VL_OUT8(ifetch_req,0,0);
        VL_IN8(ifetch_valid,0,0);
        VL_OUT8(__PVT__daccess_ren,3,0);
        VL_IN8(__PVT__daccess_rvalid,0,0);
        VL_OUT8(__PVT__daccess_wen,3,0);
        VL_IN8(__PVT__daccess_wresp,0,0);
        CData/*0:0*/ __PVT__mem_stall;
        CData/*0:0*/ __PVT__discard_fetch;
        CData/*0:0*/ __PVT__if_id_valid;
        CData/*0:0*/ __PVT__fetch_pending;
        CData/*1:0*/ __PVT__id_npc_op;
        CData/*4:0*/ __PVT__id_alu_op;
        CData/*0:0*/ __PVT__id_alua_sel;
        CData/*0:0*/ __PVT__id_alub_sel;
        CData/*3:0*/ __PVT__id_ram_wop;
        CData/*0:0*/ __PVT__id_is_mul;
        CData/*0:0*/ __PVT__id_is_div;
        CData/*0:0*/ __PVT__id_ex_valid;
        CData/*4:0*/ id_ex_alu_op;
        CData/*0:0*/ __PVT__id_ex_alua_sel;
        CData/*0:0*/ id_ex_alub_sel;
        CData/*0:0*/ __PVT__id_ex_rf_we;
        CData/*1:0*/ __PVT__id_ex_rf_wsel;
        CData/*2:0*/ __PVT__id_ex_ram_rop;
        CData/*3:0*/ __PVT__id_ex_ram_wop;
        CData/*0:0*/ __PVT__id_ex_is_mul;
        CData/*0:0*/ __PVT__id_ex_is_div;
        CData/*4:0*/ id_ex_rs1;
        CData/*4:0*/ id_ex_rs2;
        CData/*4:0*/ __PVT__id_ex_rd;
        CData/*1:0*/ __PVT__id_ex_npc_op;
        CData/*0:0*/ __PVT__load_use_stall;
        CData/*0:0*/ __PVT__id_is_jal;
        CData/*0:0*/ __PVT__ex_is_jalr;
        CData/*0:0*/ ex_br_taken;
        CData/*0:0*/ flush_f;
        CData/*0:0*/ flush_d;
        CData/*0:0*/ __PVT__mul_div_entering;
        CData/*0:0*/ __PVT__duplicate_mul;
        CData/*0:0*/ __PVT__mul_div_stall;
        CData/*0:0*/ __PVT__mul_div_stall_d;
        CData/*0:0*/ __PVT__mul_div_release;
        CData/*0:0*/ stall_f;
        CData/*0:0*/ stall_d;
        CData/*0:0*/ __PVT__stall_e;
        CData/*1:0*/ forward_b;
        CData/*0:0*/ __PVT__ex_mem_valid;
        CData/*0:0*/ __PVT__ex_mem_rf_we;
        CData/*1:0*/ __PVT__ex_mem_rf_wsel;
        CData/*2:0*/ __PVT__ex_mem_ram_rop;
        CData/*3:0*/ __PVT__ex_mem_ram_wop;
        CData/*4:0*/ __PVT__ex_mem_rd;
        CData/*0:0*/ __PVT__mem_is_load;
        CData/*0:0*/ __PVT__mem_is_store;
        CData/*0:0*/ __PVT__mem_access;
        CData/*0:0*/ __PVT__mem_done;
        CData/*0:0*/ __PVT__mem_req_sent;
        CData/*0:0*/ __PVT__mem_wb_valid;
        CData/*0:0*/ mem_wb_rf_we;
        CData/*1:0*/ mem_wb_rf_wsel;
        CData/*4:0*/ mem_wb_rd;
        CData/*2:0*/ __PVT__mem_wb_ram_rop;
    };
    struct {
        CData/*1:0*/ __PVT__mem_wb_byte_offs;
        CData/*0:0*/ __PVT__wb_rf_we;
        CData/*0:0*/ __VdfgTmp_hac861cd7__0;
        CData/*0:0*/ __VdfgTmp_hccde1b87__0;
        CData/*0:0*/ __VdfgTmp_hcc710bce__0;
        CData/*0:0*/ __PVT__U_CU__DOT__ADDI;
        CData/*0:0*/ __PVT__U_CU__DOT__XORI;
        CData/*0:0*/ __PVT__U_CU__DOT__XOR;
        CData/*0:0*/ __PVT__U_CU__DOT__ANDI;
        CData/*0:0*/ __PVT__U_CU__DOT__AND;
        CData/*0:0*/ __PVT__U_CU__DOT__OR;
        CData/*0:0*/ __PVT__U_CU__DOT__SLTI;
        CData/*0:0*/ __PVT__U_CU__DOT__SLTIU;
        CData/*0:0*/ __PVT__U_CU__DOT__SLT;
        CData/*0:0*/ __PVT__U_CU__DOT__SLTU;
        CData/*0:0*/ __PVT__U_CU__DOT__ORI;
        CData/*0:0*/ __PVT__U_CU__DOT__SLLI;
        CData/*0:0*/ __PVT__U_CU__DOT__SRLI;
        CData/*0:0*/ __PVT__U_CU__DOT__SRAI;
        CData/*0:0*/ __PVT__U_CU__DOT__SLL;
        CData/*0:0*/ __PVT__U_CU__DOT__SRL;
        CData/*0:0*/ __PVT__U_CU__DOT__SRA;
        CData/*0:0*/ __PVT__U_CU__DOT__NPC_OP_JALR;
        CData/*0:0*/ __PVT__U_CU__DOT__WB_OP_RAM;
        CData/*0:0*/ __PVT__U_CU__DOT__ALU_OP_SUB;
        CData/*0:0*/ __PVT__U_CU__DOT__ALU_OP_MUL;
        CData/*0:0*/ __PVT__U_CU__DOT__ALU_OP_MULH;
        CData/*0:0*/ __PVT__U_CU__DOT__ALU_OP_MULHU;
        CData/*0:0*/ __PVT__U_CU__DOT__RAM_EXT_B;
        CData/*0:0*/ __PVT__U_CU__DOT__RAM_EXT_BU;
        CData/*0:0*/ __PVT__U_CU__DOT__RAM_EXT_H;
        CData/*0:0*/ __PVT__U_CU__DOT__RAM_EXT_HU;
        CData/*0:0*/ __PVT__U_CU__DOT__RAM_EXT_W;
        CData/*0:0*/ U_CU__DOT____VdfgTmp_h947ed5b8__0;
        CData/*0:0*/ U_FWD__DOT____VdfgTmp_h11f87e05__0;
        CData/*0:0*/ U_FWD__DOT____VdfgTmp_h18378549__0;
        CData/*0:0*/ __Vdly__discard_fetch;
        CData/*0:0*/ __Vdly__fetch_pending;
        CData/*4:0*/ __Vdlyvdim0__U_RF__DOT__regs__v0;
        CData/*0:0*/ __Vdlyvset__U_RF__DOT__regs__v0;
        VL_OUT(ifetch_addr,31,0);
        VL_IN(__PVT__ifetch_inst,31,0);
        VL_OUT(__PVT__daccess_addr,31,0);
        VL_IN(__PVT__daccess_rdata,31,0);
        VL_OUT(__PVT__daccess_wdata,31,0);
        IData/*31:0*/ pc;
        IData/*31:0*/ __PVT__pc_plus_4;
        IData/*31:0*/ if_id_pc;
        IData/*31:0*/ if_id_inst;
        IData/*31:0*/ __PVT__fetch_inst_r;
        IData/*31:0*/ __PVT__fetch_pc_r;
        IData/*31:0*/ __PVT__id_ext;
        IData/*31:0*/ __PVT__id_br_target;
        IData/*31:0*/ id_ex_pc;
        IData/*31:0*/ __PVT__id_ex_rd1;
        IData/*31:0*/ __PVT__id_ex_rd2;
        IData/*31:0*/ id_ex_ext;
        IData/*31:0*/ __PVT__id_ex_br_target;
        IData/*31:0*/ __PVT__pc_next;
        IData/*31:0*/ __PVT__last_mul_pc;
        IData/*31:0*/ __PVT__ex_mem_fwd_data;
        IData/*31:0*/ __PVT__ex_alu_a;
        IData/*31:0*/ ex_alu_b;
        IData/*31:0*/ ex_alu_c;
    };
    struct {
        IData/*31:0*/ ex_mem_pc;
        IData/*31:0*/ __PVT__ex_mem_alu_c;
        IData/*31:0*/ __PVT__ex_mem_rd2;
        IData/*31:0*/ __PVT__ex_mem_ext;
        IData/*31:0*/ __PVT__mem_da_wdata;
        IData/*31:0*/ mem_wb_pc;
        IData/*31:0*/ __PVT__mem_wb_alu_c;
        IData/*31:0*/ mem_wb_ext;
        IData/*31:0*/ __PVT__mem_wb_rdata;
        IData/*31:0*/ __PVT__wb_ram_ext;
        IData/*31:0*/ __PVT__wb_forward_data;
        IData/*31:0*/ __PVT__wb_rf_wD;
        IData/*31:0*/ U_RF__DOT____Vlvbound_ha15ce012__0;
        IData/*31:0*/ __PVT__U_MEXT__DOT__aligned;
        IData/*31:0*/ __Vdly__fetch_inst_r;
        IData/*31:0*/ __Vdly__fetch_pc_r;
        IData/*31:0*/ __Vdlyvval__U_RF__DOT__regs__v0;
        VlUnpacked<IData/*31:0*/, 31> __PVT__U_RF__DOT__regs;
    };

    // INTERNAL VARIABLES
    Vrtl_axi_probe__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtl_axi_probe_cpu_core(Vrtl_axi_probe__Syms* symsp, const char* v__name);
    ~Vrtl_axi_probe_cpu_core();
    VL_UNCOPYABLE(Vrtl_axi_probe_cpu_core);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
