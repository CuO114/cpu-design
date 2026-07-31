// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtl_axi_probe.h for the primary calling header

#include "Vrtl_axi_probe__pch.h"
#include "Vrtl_axi_probe_rtl_axi_probe.h"

VL_INLINE_OPT void Vrtl_axi_probe_rtl_axi_probe___nba_sequent__TOP__rtl_axi_probe__1(Vrtl_axi_probe_rtl_axi_probe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrtl_axi_probe_rtl_axi_probe___nba_sequent__TOP__rtl_axi_probe__1\n"); );
    // Body
    vlSelf->__PVT__bvalid = vlSelf->__Vdly__bvalid;
    vlSelf->__PVT__rdata = vlSelf->__Vdly__rdata;
    vlSelf->__PVT__rvalid = vlSelf->__Vdly__rvalid;
}
