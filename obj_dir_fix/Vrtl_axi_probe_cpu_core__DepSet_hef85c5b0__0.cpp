// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtl_axi_probe.h for the primary calling header

#include "Vrtl_axi_probe__pch.h"
#include "Vrtl_axi_probe_cpu_core.h"

VL_INLINE_OPT void Vrtl_axi_probe_cpu_core___nba_sequent__TOP__rtl_axi_probe__dut__U_core__2(Vrtl_axi_probe_cpu_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrtl_axi_probe_cpu_core___nba_sequent__TOP__rtl_axi_probe__dut__U_core__2\n"); );
    // Body
    vlSelf->__Vdlyvset__U_RF__DOT__regs__v0 = 0U;
    if (((IData)(vlSelf->__PVT__wb_rf_we) & (0U != (IData)(vlSelf->mem_wb_rd)))) {
        vlSelf->U_RF__DOT____Vlvbound_ha15ce012__0 
            = vlSelf->__PVT__wb_rf_wD;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->mem_wb_rd) 
                                - (IData)(1U))))) {
            vlSelf->__Vdlyvval__U_RF__DOT__regs__v0 
                = vlSelf->U_RF__DOT____Vlvbound_ha15ce012__0;
            vlSelf->__Vdlyvset__U_RF__DOT__regs__v0 = 1U;
            vlSelf->__Vdlyvdim0__U_RF__DOT__regs__v0 
                = (0x1fU & ((IData)(vlSelf->mem_wb_rd) 
                            - (IData)(1U)));
        }
    }
}

VL_INLINE_OPT void Vrtl_axi_probe_cpu_core___nba_sequent__TOP__rtl_axi_probe__dut__U_core__3(Vrtl_axi_probe_cpu_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrtl_axi_probe_cpu_core___nba_sequent__TOP__rtl_axi_probe__dut__U_core__3\n"); );
    // Body
    if (vlSelf->__Vdlyvset__U_RF__DOT__regs__v0) {
        vlSelf->__PVT__U_RF__DOT__regs[vlSelf->__Vdlyvdim0__U_RF__DOT__regs__v0] 
            = vlSelf->__Vdlyvval__U_RF__DOT__regs__v0;
    }
}
