// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtl_core_probe.h for the primary calling header

#include "Vrtl_core_probe__pch.h"
#include "Vrtl_core_probe__Syms.h"
#include "Vrtl_core_probe_rtl_core_probe.h"

VL_ATTR_COLD void Vrtl_core_probe_rtl_core_probe___stl_sequent__TOP__rtl_core_probe__0(Vrtl_core_probe_rtl_core_probe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_core_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrtl_core_probe_rtl_core_probe___stl_sequent__TOP__rtl_core_probe__0\n"); );
    // Body
    vlSymsp->TOP__rtl_core_probe__dut.ifetch_valid 
        = vlSelf->__PVT__ifetch_valid;
}
