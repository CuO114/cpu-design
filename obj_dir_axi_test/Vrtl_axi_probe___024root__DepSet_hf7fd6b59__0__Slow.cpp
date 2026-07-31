// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtl_axi_probe.h for the primary calling header

#include "Vrtl_axi_probe__pch.h"
#include "Vrtl_axi_probe___024root.h"

VL_ATTR_COLD void Vrtl_axi_probe___024root___eval_final(Vrtl_axi_probe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtl_axi_probe___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrtl_axi_probe___024root___dump_triggers__stl(Vrtl_axi_probe___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vrtl_axi_probe___024root___eval_phase__stl(Vrtl_axi_probe___024root* vlSelf);

VL_ATTR_COLD void Vrtl_axi_probe___024root___eval_settle(Vrtl_axi_probe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtl_axi_probe___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vrtl_axi_probe___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl_axi_probe.sv", 19, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vrtl_axi_probe___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrtl_axi_probe___024root___dump_triggers__stl(Vrtl_axi_probe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtl_axi_probe___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrtl_axi_probe___024root___eval_triggers__stl(Vrtl_axi_probe___024root* vlSelf);
VL_ATTR_COLD void Vrtl_axi_probe___024root___eval_stl(Vrtl_axi_probe___024root* vlSelf);

VL_ATTR_COLD bool Vrtl_axi_probe___024root___eval_phase__stl(Vrtl_axi_probe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtl_axi_probe___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vrtl_axi_probe___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vrtl_axi_probe___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrtl_axi_probe___024root___dump_triggers__ico(Vrtl_axi_probe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtl_axi_probe___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrtl_axi_probe___024root___dump_triggers__act(Vrtl_axi_probe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtl_axi_probe___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge rtl_axi_probe.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge rtl_axi_probe.clk or posedge rtl_axi_probe.rst)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrtl_axi_probe___024root___dump_triggers__nba(Vrtl_axi_probe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtl_axi_probe___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge rtl_axi_probe.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge rtl_axi_probe.clk or posedge rtl_axi_probe.rst)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrtl_axi_probe___024root___ctor_var_reset(Vrtl_axi_probe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtl_axi_probe___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__rtl_axi_probe____PVT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rtl_axi_probe____PVT__rst__0 = VL_RAND_RESET_I(1);
}
