// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtl_axi_probe.h for the primary calling header

#include "Vrtl_axi_probe__pch.h"
#include "Vrtl_axi_probe_ALU.h"

VL_ATTR_COLD void Vrtl_axi_probe_ALU___ctor_var_reset(Vrtl_axi_probe_ALU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrtl_axi_probe_ALU___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->op = VL_RAND_RESET_I(5);
    vlSelf->__PVT__a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__b = VL_RAND_RESET_I(32);
    vlSelf->__PVT__suppress = VL_RAND_RESET_I(1);
    vlSelf->__PVT__c = VL_RAND_RESET_I(32);
    vlSelf->__PVT__br = VL_RAND_RESET_I(1);
    vlSelf->__PVT__busy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_flag = VL_RAND_RESET_I(1);
    vlSelf->mul_busy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__divu_flag = VL_RAND_RESET_I(1);
    vlSelf->op_r = VL_RAND_RESET_I(5);
    vlSelf->__PVT__effective_op = VL_RAND_RESET_I(5);
    vlSelf->a_latched = VL_RAND_RESET_I(32);
    vlSelf->b_latched = VL_RAND_RESET_I(32);
    vlSelf->multi_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__any_mul_div = VL_RAND_RESET_I(1);
    vlSelf->__PVT__restart_continue = VL_RAND_RESET_I(1);
    vlSelf->__PVT__multi_start = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__U_div__start = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__U_divu__start = VL_RAND_RESET_I(1);
    vlSelf->__PVT__U_div__DOT__remainder = VL_RAND_RESET_I(32);
    vlSelf->__PVT__U_div__DOT__quotient = VL_RAND_RESET_I(32);
    vlSelf->__PVT__U_div__DOT__divisor = VL_RAND_RESET_I(32);
    vlSelf->__PVT__U_div__DOT__count = VL_RAND_RESET_I(6);
    vlSelf->__PVT__U_div__DOT__start_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__U_div__DOT__shifted_rem = VL_RAND_RESET_I(32);
    vlSelf->__PVT__U_div__DOT__diff = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__U_div__DOT__next_quo = VL_RAND_RESET_I(32);
    vlSelf->__PVT__U_div__DOT__start_rise = VL_RAND_RESET_I(1);
    vlSelf->__PVT__U_divu__DOT__remainder = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__U_divu__DOT__quotient = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__U_divu__DOT__divisor = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__U_divu__DOT__count = VL_RAND_RESET_I(6);
    vlSelf->__PVT__U_divu__DOT__start_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__U_divu__DOT__shifted_rem = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__U_divu__DOT__diff = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__U_divu__DOT__next_quo = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__U_divu__DOT__start_rise = VL_RAND_RESET_I(1);
}
