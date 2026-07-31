// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtl_axi_probe.h for the primary calling header

#include "Vrtl_axi_probe__pch.h"
#include "Vrtl_axi_probe_rtl_axi_probe.h"

VL_ATTR_COLD void Vrtl_axi_probe_rtl_axi_probe___eval_static__TOP__rtl_axi_probe(Vrtl_axi_probe_rtl_axi_probe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrtl_axi_probe_rtl_axi_probe___eval_static__TOP__rtl_axi_probe\n"); );
    // Body
    vlSelf->__PVT__clk = 0U;
    vlSelf->__PVT__rst = 1U;
    vlSelf->__PVT__bvalid = 0U;
    vlSelf->__PVT__rdata = 0U;
    vlSelf->__PVT__rlast = 0U;
    vlSelf->__PVT__rvalid = 0U;
}

VL_ATTR_COLD void Vrtl_axi_probe_rtl_axi_probe___ctor_var_reset(Vrtl_axi_probe_rtl_axi_probe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrtl_axi_probe_rtl_axi_probe___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rlast = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rvalid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 38400; ++__Vi0) {
        vlSelf->__PVT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__timer = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__read_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__read_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__read_len = VL_RAND_RESET_I(8);
    vlSelf->__PVT__read_beat = VL_RAND_RESET_I(8);
    vlSelf->__PVT__aw_hold = VL_RAND_RESET_I(1);
    vlSelf->__PVT__w_hold = VL_RAND_RESET_I(1);
    vlSelf->__PVT__awaddr_hold = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wdata_hold = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wstrb_hold = VL_RAND_RESET_I(4);
    vlSelf->__PVT__cycle = VL_RAND_RESET_I(32);
    vlSelf->__PVT__idx = VL_RAND_RESET_I(32);
    vlSelf->__PVT__trace_count = VL_RAND_RESET_I(32);
    vlSelf->__PVT__late_trace_count = VL_RAND_RESET_I(32);
    vlSelf->__PVT__state_trace_count = VL_RAND_RESET_I(32);
    vlSelf->__PVT__state_load_count = VL_RAND_RESET_I(32);
    vlSelf->__PVT__state_entry_count = VL_RAND_RESET_I(32);
    vlSelf->__PVT__call_trace_count = VL_RAND_RESET_I(32);
    vlSelf->__PVT__stack_store_count = VL_RAND_RESET_I(32);
    vlSelf->__PVT__result_store_count = VL_RAND_RESET_I(32);
    vlSelf->__Vlvbound_h77e98a54__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vlvbound_h767fac4c__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vlvbound_h767fe5f1__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vlvbound_h7800dfdd__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__rvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__rdata = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__bvalid = VL_RAND_RESET_I(1);
}
