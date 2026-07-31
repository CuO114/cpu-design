// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtl_core_probe.h for the primary calling header

#include "Vrtl_core_probe__pch.h"
#include "Vrtl_core_probe_cpu_core.h"

VL_INLINE_OPT void Vrtl_core_probe_cpu_core___nba_sequent__TOP__rtl_core_probe__dut__2(Vrtl_core_probe_cpu_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_core_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrtl_core_probe_cpu_core___nba_sequent__TOP__rtl_core_probe__dut__2\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__U_RF__DOT__regs__v0;
    __Vdlyvdim0__U_RF__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__U_RF__DOT__regs__v0;
    __Vdlyvval__U_RF__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__U_RF__DOT__regs__v0;
    __Vdlyvset__U_RF__DOT__regs__v0 = 0;
    // Body
    __Vdlyvset__U_RF__DOT__regs__v0 = 0U;
    if ((((IData)(vlSelf->mem_wb_rf_we) & (IData)(vlSelf->__PVT__mem_wb_valid)) 
         & (0U != (IData)(vlSelf->mem_wb_rd)))) {
        vlSelf->U_RF__DOT____Vlvbound_ha15ce012__0 
            = ((1U == (IData)(vlSelf->mem_wb_rf_wsel))
                ? vlSelf->__PVT__wb_ram_ext : ((0U 
                                                == (IData)(vlSelf->mem_wb_rf_wsel))
                                                ? vlSelf->__PVT__mem_wb_alu_c
                                                : vlSelf->__VdfgTmp_hf1e24608__0));
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->mem_wb_rd) 
                                - (IData)(1U))))) {
            __Vdlyvval__U_RF__DOT__regs__v0 = vlSelf->U_RF__DOT____Vlvbound_ha15ce012__0;
            __Vdlyvset__U_RF__DOT__regs__v0 = 1U;
            __Vdlyvdim0__U_RF__DOT__regs__v0 = (0x1fU 
                                                & ((IData)(vlSelf->mem_wb_rd) 
                                                   - (IData)(1U)));
        }
    }
    if (__Vdlyvset__U_RF__DOT__regs__v0) {
        vlSelf->__PVT__U_RF__DOT__regs[__Vdlyvdim0__U_RF__DOT__regs__v0] 
            = __Vdlyvval__U_RF__DOT__regs__v0;
    }
}
