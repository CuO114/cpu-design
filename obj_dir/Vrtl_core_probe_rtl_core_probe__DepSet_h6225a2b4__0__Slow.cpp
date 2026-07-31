// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtl_core_probe.h for the primary calling header

#include "Vrtl_core_probe__pch.h"
#include "Vrtl_core_probe_rtl_core_probe.h"

VL_ATTR_COLD void Vrtl_core_probe_rtl_core_probe___eval_static__TOP__rtl_core_probe(Vrtl_core_probe_rtl_core_probe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_core_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrtl_core_probe_rtl_core_probe___eval_static__TOP__rtl_core_probe\n"); );
    // Body
    vlSelf->__PVT__clk = 0U;
    vlSelf->__PVT__rst = 1U;
    vlSelf->__PVT__ifetch_valid = 0U;
    vlSelf->__PVT__ifetch_inst = 0U;
    vlSelf->__PVT__daccess_rvalid = 0U;
    vlSelf->__PVT__daccess_rdata = 0U;
    vlSelf->__PVT__daccess_wresp = 0U;
}

VL_ATTR_COLD void Vrtl_core_probe_rtl_core_probe___ctor_var_reset(Vrtl_core_probe_rtl_core_probe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_core_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrtl_core_probe_rtl_core_probe___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifetch_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifetch_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__daccess_rvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__daccess_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__daccess_wresp = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 38400; ++__Vi0) {
        vlSelf->__PVT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__timer = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__cycle = VL_RAND_RESET_I(32);
    vlSelf->__PVT__idx = VL_RAND_RESET_I(32);
    vlSelf->__Vlvbound_h77e98a54__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vlvbound_h767fac4c__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vlvbound_h767fe5f1__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vlvbound_h7800dfdd__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__ifetch_inst = VL_RAND_RESET_I(32);
}
