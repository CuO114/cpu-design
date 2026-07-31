// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtl_core_probe.h for the primary calling header

#include "Vrtl_core_probe__pch.h"
#include "Vrtl_core_probe_multiplier.h"

VL_ATTR_COLD void Vrtl_core_probe_multiplier___stl_sequent__TOP__rtl_core_probe__dut__U_ALU__U_mul__0(Vrtl_core_probe_multiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_core_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrtl_core_probe_multiplier___stl_sequent__TOP__rtl_core_probe__dut__U_ALU__U_mul__0\n"); );
    // Init
    QData/*33:0*/ __PVT__hi_sum;
    __PVT__hi_sum = 0;
    // Body
    __PVT__hi_sum = (0x3ffffffffULL & (vlSelf->product_hi 
                                       + (QData)((IData)(vlSelf->multiplicand))));
    vlSelf->busy = (0U != (IData)(vlSelf->count));
    vlSelf->__PVT__start_rise = ((~ (IData)(vlSelf->__PVT__start_d)) 
                                 & (IData)(vlSelf->start));
    if ((1U & vlSelf->product_lo)) {
        vlSelf->__PVT__next_hi = (0x1ffffffffULL & 
                                  (__PVT__hi_sum >> 1U));
        vlSelf->__PVT__next_lo = (((IData)(__PVT__hi_sum) 
                                   << 0x1fU) | (vlSelf->product_lo 
                                                >> 1U));
    } else {
        vlSelf->__PVT__next_hi = (0x1ffffffffULL & 
                                  VL_SHIFTR_QQI(33,33,32, vlSelf->product_hi, 1U));
        vlSelf->__PVT__next_lo = (((IData)(vlSelf->product_hi) 
                                   << 0x1fU) | (vlSelf->product_lo 
                                                >> 1U));
    }
}

VL_ATTR_COLD void Vrtl_core_probe_multiplier___ctor_var_reset(Vrtl_core_probe_multiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_core_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrtl_core_probe_multiplier___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__x = VL_RAND_RESET_I(32);
    vlSelf->__PVT__y = VL_RAND_RESET_I(32);
    vlSelf->start = VL_RAND_RESET_I(1);
    vlSelf->__PVT__z = VL_RAND_RESET_Q(64);
    vlSelf->busy = VL_RAND_RESET_I(1);
    vlSelf->product_hi = VL_RAND_RESET_Q(33);
    vlSelf->product_lo = VL_RAND_RESET_I(32);
    vlSelf->multiplicand = VL_RAND_RESET_I(32);
    vlSelf->count = VL_RAND_RESET_I(6);
    vlSelf->__PVT__start_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__next_hi = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__next_lo = VL_RAND_RESET_I(32);
    vlSelf->__PVT__start_rise = VL_RAND_RESET_I(1);
}
