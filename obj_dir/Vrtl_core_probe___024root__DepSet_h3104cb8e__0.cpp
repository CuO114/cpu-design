// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtl_core_probe.h for the primary calling header

#include "Vrtl_core_probe__pch.h"
#include "Vrtl_core_probe__Syms.h"
#include "Vrtl_core_probe___024root.h"

VlCoroutine Vrtl_core_probe_rtl_core_probe___eval_initial__TOP__rtl_core_probe__Vtiming__0(Vrtl_core_probe_rtl_core_probe* vlSelf);
VlCoroutine Vrtl_core_probe_rtl_core_probe___eval_initial__TOP__rtl_core_probe__Vtiming__1(Vrtl_core_probe_rtl_core_probe* vlSelf);

void Vrtl_core_probe___024root___eval_initial(Vrtl_core_probe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_core_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtl_core_probe___024root___eval_initial\n"); );
    // Body
    Vrtl_core_probe_rtl_core_probe___eval_initial__TOP__rtl_core_probe__Vtiming__0((&vlSymsp->TOP__rtl_core_probe));
    Vrtl_core_probe_rtl_core_probe___eval_initial__TOP__rtl_core_probe__Vtiming__1((&vlSymsp->TOP__rtl_core_probe));
    vlSelf->__Vtrigprevexpr___TOP__rtl_core_probe____PVT__clk__0 
        = vlSymsp->TOP__rtl_core_probe.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__rtl_core_probe____PVT__rst__0 
        = vlSymsp->TOP__rtl_core_probe.__PVT__rst;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrtl_core_probe___024root___dump_triggers__ico(Vrtl_core_probe___024root* vlSelf);
#endif  // VL_DEBUG

void Vrtl_core_probe___024root___eval_triggers__ico(Vrtl_core_probe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_core_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtl_core_probe___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrtl_core_probe___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vrtl_core_probe_cpu_core___ico_sequent__TOP__rtl_core_probe__dut__0(Vrtl_core_probe_cpu_core* vlSelf);
void Vrtl_core_probe_multiplier___ico_sequent__TOP__rtl_core_probe__dut__U_ALU__U_mul__0(Vrtl_core_probe_multiplier* vlSelf);
void Vrtl_core_probe_multiplier__W21___ico_sequent__TOP__rtl_core_probe__dut__U_ALU__U_mulu__0(Vrtl_core_probe_multiplier__W21* vlSelf);
void Vrtl_core_probe_ALU___ico_sequent__TOP__rtl_core_probe__dut__U_ALU__0(Vrtl_core_probe_ALU* vlSelf);
void Vrtl_core_probe_cpu_core___ico_sequent__TOP__rtl_core_probe__dut__1(Vrtl_core_probe_cpu_core* vlSelf);
void Vrtl_core_probe_multiplier___ico_sequent__TOP__rtl_core_probe__dut__U_ALU__U_mul__1(Vrtl_core_probe_multiplier* vlSelf);
void Vrtl_core_probe_multiplier__W21___ico_sequent__TOP__rtl_core_probe__dut__U_ALU__U_mulu__1(Vrtl_core_probe_multiplier__W21* vlSelf);

void Vrtl_core_probe___024root___eval_ico(Vrtl_core_probe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_core_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtl_core_probe___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vrtl_core_probe_cpu_core___ico_sequent__TOP__rtl_core_probe__dut__0((&vlSymsp->TOP__rtl_core_probe__dut));
        Vrtl_core_probe_multiplier___ico_sequent__TOP__rtl_core_probe__dut__U_ALU__U_mul__0((&vlSymsp->TOP__rtl_core_probe__dut__U_ALU__U_mul));
        Vrtl_core_probe_multiplier__W21___ico_sequent__TOP__rtl_core_probe__dut__U_ALU__U_mulu__0((&vlSymsp->TOP__rtl_core_probe__dut__U_ALU__U_mulu));
        Vrtl_core_probe_ALU___ico_sequent__TOP__rtl_core_probe__dut__U_ALU__0((&vlSymsp->TOP__rtl_core_probe__dut__U_ALU));
        Vrtl_core_probe_cpu_core___ico_sequent__TOP__rtl_core_probe__dut__1((&vlSymsp->TOP__rtl_core_probe__dut));
        Vrtl_core_probe_multiplier___ico_sequent__TOP__rtl_core_probe__dut__U_ALU__U_mul__1((&vlSymsp->TOP__rtl_core_probe__dut__U_ALU__U_mul));
        Vrtl_core_probe_multiplier__W21___ico_sequent__TOP__rtl_core_probe__dut__U_ALU__U_mulu__1((&vlSymsp->TOP__rtl_core_probe__dut__U_ALU__U_mulu));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrtl_core_probe___024root___dump_triggers__act(Vrtl_core_probe___024root* vlSelf);
#endif  // VL_DEBUG

void Vrtl_core_probe___024root___eval_triggers__act(Vrtl_core_probe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_core_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtl_core_probe___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSymsp->TOP__rtl_core_probe.__PVT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__rtl_core_probe____PVT__clk__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSymsp->TOP__rtl_core_probe.__PVT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__rtl_core_probe____PVT__clk__0))) 
                                     | ((IData)(vlSymsp->TOP__rtl_core_probe.__PVT__rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__rtl_core_probe____PVT__rst__0)))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__rtl_core_probe____PVT__clk__0 
        = vlSymsp->TOP__rtl_core_probe.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__rtl_core_probe____PVT__rst__0 
        = vlSymsp->TOP__rtl_core_probe.__PVT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrtl_core_probe___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vrtl_core_probe_cpu_core___act_sequent__TOP__rtl_core_probe__dut__0(Vrtl_core_probe_cpu_core* vlSelf);

void Vrtl_core_probe___024root___eval_act(Vrtl_core_probe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_core_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtl_core_probe___024root___eval_act\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vrtl_core_probe_cpu_core___act_sequent__TOP__rtl_core_probe__dut__0((&vlSymsp->TOP__rtl_core_probe__dut));
    }
}

void Vrtl_core_probe_cpu_core___nba_sequent__TOP__rtl_core_probe__dut__0(Vrtl_core_probe_cpu_core* vlSelf);
void Vrtl_core_probe_multiplier__W21___nba_sequent__TOP__rtl_core_probe__dut__U_ALU__U_mulu__0(Vrtl_core_probe_multiplier__W21* vlSelf);
void Vrtl_core_probe_ALU___nba_sequent__TOP__rtl_core_probe__dut__U_ALU__0(Vrtl_core_probe_ALU* vlSelf);
void Vrtl_core_probe_multiplier___nba_sequent__TOP__rtl_core_probe__dut__U_ALU__U_mul__0(Vrtl_core_probe_multiplier* vlSelf);
void Vrtl_core_probe_cpu_core___nba_sequent__TOP__rtl_core_probe__dut__1(Vrtl_core_probe_cpu_core* vlSelf);
void Vrtl_core_probe_ALU___nba_sequent__TOP__rtl_core_probe__dut__U_ALU__1(Vrtl_core_probe_ALU* vlSelf);
void Vrtl_core_probe_rtl_core_probe___nba_sequent__TOP__rtl_core_probe__0(Vrtl_core_probe_rtl_core_probe* vlSelf);
void Vrtl_core_probe_cpu_core___nba_sequent__TOP__rtl_core_probe__dut__2(Vrtl_core_probe_cpu_core* vlSelf);
void Vrtl_core_probe_cpu_core___nba_sequent__TOP__rtl_core_probe__dut__3(Vrtl_core_probe_cpu_core* vlSelf);
void Vrtl_core_probe_ALU___nba_sequent__TOP__rtl_core_probe__dut__U_ALU__2(Vrtl_core_probe_ALU* vlSelf);
void Vrtl_core_probe_cpu_core___nba_sequent__TOP__rtl_core_probe__dut__4(Vrtl_core_probe_cpu_core* vlSelf);
void Vrtl_core_probe_cpu_core___nba_comb__TOP__rtl_core_probe__dut__0(Vrtl_core_probe_cpu_core* vlSelf);
void Vrtl_core_probe_rtl_core_probe___nba_sequent__TOP__rtl_core_probe__1(Vrtl_core_probe_rtl_core_probe* vlSelf);

void Vrtl_core_probe___024root___eval_nba(Vrtl_core_probe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_core_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtl_core_probe___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vrtl_core_probe_cpu_core___nba_sequent__TOP__rtl_core_probe__dut__0((&vlSymsp->TOP__rtl_core_probe__dut));
        Vrtl_core_probe_multiplier__W21___nba_sequent__TOP__rtl_core_probe__dut__U_ALU__U_mulu__0((&vlSymsp->TOP__rtl_core_probe__dut__U_ALU__U_mulu));
        Vrtl_core_probe_ALU___nba_sequent__TOP__rtl_core_probe__dut__U_ALU__0((&vlSymsp->TOP__rtl_core_probe__dut__U_ALU));
        Vrtl_core_probe_multiplier___nba_sequent__TOP__rtl_core_probe__dut__U_ALU__U_mul__0((&vlSymsp->TOP__rtl_core_probe__dut__U_ALU__U_mul));
        Vrtl_core_probe_cpu_core___nba_sequent__TOP__rtl_core_probe__dut__1((&vlSymsp->TOP__rtl_core_probe__dut));
        Vrtl_core_probe_ALU___nba_sequent__TOP__rtl_core_probe__dut__U_ALU__1((&vlSymsp->TOP__rtl_core_probe__dut__U_ALU));
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vrtl_core_probe_rtl_core_probe___nba_sequent__TOP__rtl_core_probe__0((&vlSymsp->TOP__rtl_core_probe));
        Vrtl_core_probe_cpu_core___nba_sequent__TOP__rtl_core_probe__dut__2((&vlSymsp->TOP__rtl_core_probe__dut));
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vrtl_core_probe_cpu_core___nba_sequent__TOP__rtl_core_probe__dut__3((&vlSymsp->TOP__rtl_core_probe__dut));
        Vrtl_core_probe_ALU___nba_sequent__TOP__rtl_core_probe__dut__U_ALU__2((&vlSymsp->TOP__rtl_core_probe__dut__U_ALU));
        Vrtl_core_probe_cpu_core___nba_sequent__TOP__rtl_core_probe__dut__4((&vlSymsp->TOP__rtl_core_probe__dut));
        Vrtl_core_probe_multiplier___ico_sequent__TOP__rtl_core_probe__dut__U_ALU__U_mul__1((&vlSymsp->TOP__rtl_core_probe__dut__U_ALU__U_mul));
        Vrtl_core_probe_multiplier__W21___ico_sequent__TOP__rtl_core_probe__dut__U_ALU__U_mulu__1((&vlSymsp->TOP__rtl_core_probe__dut__U_ALU__U_mulu));
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vrtl_core_probe_cpu_core___nba_comb__TOP__rtl_core_probe__dut__0((&vlSymsp->TOP__rtl_core_probe__dut));
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vrtl_core_probe_rtl_core_probe___nba_sequent__TOP__rtl_core_probe__1((&vlSymsp->TOP__rtl_core_probe));
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vrtl_core_probe_cpu_core___act_sequent__TOP__rtl_core_probe__dut__0((&vlSymsp->TOP__rtl_core_probe__dut));
    }
}
