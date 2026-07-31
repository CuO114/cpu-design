// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtl_axi_probe.h for the primary calling header

#ifndef VERILATED_VRTL_AXI_PROBE_ALU_H_
#define VERILATED_VRTL_AXI_PROBE_ALU_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vrtl_axi_probe_multiplier;
class Vrtl_axi_probe_multiplier__W21;


class Vrtl_axi_probe__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtl_axi_probe_ALU final : public VerilatedModule {
  public:
    // CELLS
    Vrtl_axi_probe_multiplier* U_mul;
    Vrtl_axi_probe_multiplier__W21* U_mulu;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(op,4,0);
    VL_IN8(__PVT__suppress,0,0);
    VL_OUT8(__PVT__br,0,0);
    VL_OUT8(__PVT__busy,0,0);
    CData/*0:0*/ __PVT__mul_flag;
    CData/*0:0*/ mul_busy;
    CData/*0:0*/ __PVT__div_flag;
    CData/*0:0*/ __PVT__divu_flag;
    CData/*4:0*/ op_r;
    CData/*4:0*/ __PVT__effective_op;
    CData/*0:0*/ multi_active;
    CData/*0:0*/ __PVT__any_mul_div;
    CData/*0:0*/ __PVT__restart_continue;
    CData/*0:0*/ __PVT__multi_start;
    CData/*0:0*/ __Vcellinp__U_div__start;
    CData/*0:0*/ __Vcellinp__U_divu__start;
    CData/*5:0*/ __PVT__U_div__DOT__count;
    CData/*0:0*/ __PVT__U_div__DOT__start_d;
    CData/*0:0*/ __PVT__U_div__DOT__start_rise;
    CData/*5:0*/ __PVT__U_divu__DOT__count;
    CData/*0:0*/ __PVT__U_divu__DOT__start_d;
    CData/*0:0*/ __PVT__U_divu__DOT__start_rise;
    VL_IN(__PVT__a,31,0);
    VL_IN(__PVT__b,31,0);
    VL_OUT(__PVT__c,31,0);
    IData/*31:0*/ a_latched;
    IData/*31:0*/ b_latched;
    IData/*31:0*/ __PVT__U_div__DOT__remainder;
    IData/*31:0*/ __PVT__U_div__DOT__quotient;
    IData/*31:0*/ __PVT__U_div__DOT__divisor;
    IData/*31:0*/ __PVT__U_div__DOT__shifted_rem;
    IData/*31:0*/ __PVT__U_div__DOT__next_quo;
    QData/*32:0*/ __PVT__U_div__DOT__diff;
    QData/*32:0*/ __PVT__U_divu__DOT__remainder;
    QData/*32:0*/ __PVT__U_divu__DOT__quotient;
    QData/*32:0*/ __PVT__U_divu__DOT__divisor;
    QData/*32:0*/ __PVT__U_divu__DOT__shifted_rem;
    QData/*33:0*/ __PVT__U_divu__DOT__diff;
    QData/*32:0*/ __PVT__U_divu__DOT__next_quo;

    // INTERNAL VARIABLES
    Vrtl_axi_probe__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtl_axi_probe_ALU(Vrtl_axi_probe__Syms* symsp, const char* v__name);
    ~Vrtl_axi_probe_ALU();
    VL_UNCOPYABLE(Vrtl_axi_probe_ALU);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
