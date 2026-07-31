// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtl_axi_probe.h for the primary calling header

#include "Vrtl_axi_probe__pch.h"
#include "Vrtl_axi_probe__Syms.h"
#include "Vrtl_axi_probe___024root.h"

VlCoroutine Vrtl_axi_probe_rtl_axi_probe___eval_initial__TOP__rtl_axi_probe__Vtiming__0(Vrtl_axi_probe_rtl_axi_probe* vlSelf);
VlCoroutine Vrtl_axi_probe_rtl_axi_probe___eval_initial__TOP__rtl_axi_probe__Vtiming__1(Vrtl_axi_probe_rtl_axi_probe* vlSelf);

void Vrtl_axi_probe___024root___eval_initial(Vrtl_axi_probe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtl_axi_probe___024root___eval_initial\n"); );
    // Body
    Vrtl_axi_probe_rtl_axi_probe___eval_initial__TOP__rtl_axi_probe__Vtiming__0((&vlSymsp->TOP__rtl_axi_probe));
    Vrtl_axi_probe_rtl_axi_probe___eval_initial__TOP__rtl_axi_probe__Vtiming__1((&vlSymsp->TOP__rtl_axi_probe));
    vlSelf->__Vtrigprevexpr___TOP__rtl_axi_probe____PVT__clk__0 
        = vlSymsp->TOP__rtl_axi_probe.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__rtl_axi_probe____PVT__rst__0 
        = vlSymsp->TOP__rtl_axi_probe.__PVT__rst;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrtl_axi_probe___024root___dump_triggers__ico(Vrtl_axi_probe___024root* vlSelf);
#endif  // VL_DEBUG

void Vrtl_axi_probe___024root___eval_triggers__ico(Vrtl_axi_probe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtl_axi_probe___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrtl_axi_probe___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vrtl_axi_probe_cpu_core___ico_sequent__TOP__rtl_axi_probe__dut__U_core__0(Vrtl_axi_probe_cpu_core* vlSelf);
void Vrtl_axi_probe_multiplier___ico_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mul__0(Vrtl_axi_probe_multiplier* vlSelf);
void Vrtl_axi_probe_multiplier__W21___ico_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mulu__0(Vrtl_axi_probe_multiplier__W21* vlSelf);
void Vrtl_axi_probe_cpu_top___ico_sequent__TOP__rtl_axi_probe__dut__0(Vrtl_axi_probe_cpu_top* vlSelf);
void Vrtl_axi_probe_ALU___ico_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__0(Vrtl_axi_probe_ALU* vlSelf);
void Vrtl_axi_probe_cpu_core___ico_sequent__TOP__rtl_axi_probe__dut__U_core__1(Vrtl_axi_probe_cpu_core* vlSelf);
void Vrtl_axi_probe_multiplier___ico_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mul__1(Vrtl_axi_probe_multiplier* vlSelf);
void Vrtl_axi_probe_multiplier__W21___ico_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mulu__1(Vrtl_axi_probe_multiplier__W21* vlSelf);
void Vrtl_axi_probe_cpu_top___ico_sequent__TOP__rtl_axi_probe__dut__1(Vrtl_axi_probe_cpu_top* vlSelf);

void Vrtl_axi_probe___024root___eval_ico(Vrtl_axi_probe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtl_axi_probe___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vrtl_axi_probe_cpu_core___ico_sequent__TOP__rtl_axi_probe__dut__U_core__0((&vlSymsp->TOP__rtl_axi_probe__dut__U_core));
        Vrtl_axi_probe_multiplier___ico_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mul__0((&vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mul));
        Vrtl_axi_probe_multiplier__W21___ico_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mulu__0((&vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mulu));
        Vrtl_axi_probe_cpu_top___ico_sequent__TOP__rtl_axi_probe__dut__0((&vlSymsp->TOP__rtl_axi_probe__dut));
        Vrtl_axi_probe_ALU___ico_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__0((&vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU));
        Vrtl_axi_probe_cpu_core___ico_sequent__TOP__rtl_axi_probe__dut__U_core__1((&vlSymsp->TOP__rtl_axi_probe__dut__U_core));
        Vrtl_axi_probe_multiplier___ico_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mul__1((&vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mul));
        Vrtl_axi_probe_multiplier__W21___ico_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mulu__1((&vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mulu));
        Vrtl_axi_probe_cpu_top___ico_sequent__TOP__rtl_axi_probe__dut__1((&vlSymsp->TOP__rtl_axi_probe__dut));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrtl_axi_probe___024root___dump_triggers__act(Vrtl_axi_probe___024root* vlSelf);
#endif  // VL_DEBUG

void Vrtl_axi_probe___024root___eval_triggers__act(Vrtl_axi_probe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtl_axi_probe___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSymsp->TOP__rtl_axi_probe.__PVT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__rtl_axi_probe____PVT__clk__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSymsp->TOP__rtl_axi_probe.__PVT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__rtl_axi_probe____PVT__clk__0))) 
                                     | ((IData)(vlSymsp->TOP__rtl_axi_probe.__PVT__rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__rtl_axi_probe____PVT__rst__0)))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__rtl_axi_probe____PVT__clk__0 
        = vlSymsp->TOP__rtl_axi_probe.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__rtl_axi_probe____PVT__rst__0 
        = vlSymsp->TOP__rtl_axi_probe.__PVT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrtl_axi_probe___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vrtl_axi_probe_cpu_core___act_sequent__TOP__rtl_axi_probe__dut__U_core__0(Vrtl_axi_probe_cpu_core* vlSelf);

void Vrtl_axi_probe___024root___eval_act(Vrtl_axi_probe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtl_axi_probe___024root___eval_act\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vrtl_axi_probe_cpu_core___act_sequent__TOP__rtl_axi_probe__dut__U_core__0((&vlSymsp->TOP__rtl_axi_probe__dut__U_core));
        Vrtl_axi_probe_cpu_top___ico_sequent__TOP__rtl_axi_probe__dut__1((&vlSymsp->TOP__rtl_axi_probe__dut));
    }
}

void Vrtl_axi_probe_cpu_core___nba_sequent__TOP__rtl_axi_probe__dut__U_core__0(Vrtl_axi_probe_cpu_core* vlSelf);
void Vrtl_axi_probe_multiplier__W21___nba_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mulu__0(Vrtl_axi_probe_multiplier__W21* vlSelf);
void Vrtl_axi_probe_ALU___nba_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__0(Vrtl_axi_probe_ALU* vlSelf);
void Vrtl_axi_probe_multiplier___nba_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mul__0(Vrtl_axi_probe_multiplier* vlSelf);
void Vrtl_axi_probe_cpu_top___nba_sequent__TOP__rtl_axi_probe__dut__0(Vrtl_axi_probe_cpu_top* vlSelf);
void Vrtl_axi_probe_cpu_core___nba_sequent__TOP__rtl_axi_probe__dut__U_core__1(Vrtl_axi_probe_cpu_core* vlSelf);
void Vrtl_axi_probe_ALU___nba_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__1(Vrtl_axi_probe_ALU* vlSelf);
void Vrtl_axi_probe_cpu_top___nba_sequent__TOP__rtl_axi_probe__dut__1(Vrtl_axi_probe_cpu_top* vlSelf);
void Vrtl_axi_probe_cpu_core___nba_sequent__TOP__rtl_axi_probe__dut__U_core__2(Vrtl_axi_probe_cpu_core* vlSelf);
void Vrtl_axi_probe_rtl_axi_probe___nba_sequent__TOP__rtl_axi_probe__0(Vrtl_axi_probe_rtl_axi_probe* vlSelf);
void Vrtl_axi_probe_cpu_core___nba_sequent__TOP__rtl_axi_probe__dut__U_core__3(Vrtl_axi_probe_cpu_core* vlSelf);
void Vrtl_axi_probe_cpu_top___nba_sequent__TOP__rtl_axi_probe__dut__2(Vrtl_axi_probe_cpu_top* vlSelf);
void Vrtl_axi_probe_cpu_core___nba_sequent__TOP__rtl_axi_probe__dut__U_core__4(Vrtl_axi_probe_cpu_core* vlSelf);
void Vrtl_axi_probe_cpu_top___nba_sequent__TOP__rtl_axi_probe__dut__3(Vrtl_axi_probe_cpu_top* vlSelf);
void Vrtl_axi_probe_ALU___nba_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__2(Vrtl_axi_probe_ALU* vlSelf);
void Vrtl_axi_probe_cpu_core___nba_sequent__TOP__rtl_axi_probe__dut__U_core__5(Vrtl_axi_probe_cpu_core* vlSelf);
void Vrtl_axi_probe_rtl_axi_probe___nba_sequent__TOP__rtl_axi_probe__1(Vrtl_axi_probe_rtl_axi_probe* vlSelf);
void Vrtl_axi_probe_cpu_top___nba_sequent__TOP__rtl_axi_probe__dut__4(Vrtl_axi_probe_cpu_top* vlSelf);
void Vrtl_axi_probe_cpu_top___nba_comb__TOP__rtl_axi_probe__dut__0(Vrtl_axi_probe_cpu_top* vlSelf);
void Vrtl_axi_probe_cpu_core___nba_comb__TOP__rtl_axi_probe__dut__U_core__0(Vrtl_axi_probe_cpu_core* vlSelf);
void Vrtl_axi_probe_cpu_top___nba_sequent__TOP__rtl_axi_probe__dut__5(Vrtl_axi_probe_cpu_top* vlSelf);
void Vrtl_axi_probe_cpu_top___nba_comb__TOP__rtl_axi_probe__dut__1(Vrtl_axi_probe_cpu_top* vlSelf);

void Vrtl_axi_probe___024root___eval_nba(Vrtl_axi_probe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtl_axi_probe___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vrtl_axi_probe_cpu_core___nba_sequent__TOP__rtl_axi_probe__dut__U_core__0((&vlSymsp->TOP__rtl_axi_probe__dut__U_core));
        Vrtl_axi_probe_multiplier__W21___nba_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mulu__0((&vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mulu));
        Vrtl_axi_probe_ALU___nba_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__0((&vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU));
        Vrtl_axi_probe_multiplier___nba_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mul__0((&vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mul));
        Vrtl_axi_probe_cpu_top___nba_sequent__TOP__rtl_axi_probe__dut__0((&vlSymsp->TOP__rtl_axi_probe__dut));
        Vrtl_axi_probe_cpu_core___nba_sequent__TOP__rtl_axi_probe__dut__U_core__1((&vlSymsp->TOP__rtl_axi_probe__dut__U_core));
        Vrtl_axi_probe_ALU___nba_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__1((&vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU));
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vrtl_axi_probe_cpu_top___nba_sequent__TOP__rtl_axi_probe__dut__1((&vlSymsp->TOP__rtl_axi_probe__dut));
        Vrtl_axi_probe_cpu_core___nba_sequent__TOP__rtl_axi_probe__dut__U_core__2((&vlSymsp->TOP__rtl_axi_probe__dut__U_core));
        Vrtl_axi_probe_rtl_axi_probe___nba_sequent__TOP__rtl_axi_probe__0((&vlSymsp->TOP__rtl_axi_probe));
        Vrtl_axi_probe_cpu_core___nba_sequent__TOP__rtl_axi_probe__dut__U_core__3((&vlSymsp->TOP__rtl_axi_probe__dut__U_core));
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vrtl_axi_probe_cpu_top___nba_sequent__TOP__rtl_axi_probe__dut__2((&vlSymsp->TOP__rtl_axi_probe__dut));
        Vrtl_axi_probe_cpu_core___nba_sequent__TOP__rtl_axi_probe__dut__U_core__4((&vlSymsp->TOP__rtl_axi_probe__dut__U_core));
        Vrtl_axi_probe_cpu_top___nba_sequent__TOP__rtl_axi_probe__dut__3((&vlSymsp->TOP__rtl_axi_probe__dut));
        Vrtl_axi_probe_ALU___nba_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__2((&vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU));
        Vrtl_axi_probe_cpu_core___nba_sequent__TOP__rtl_axi_probe__dut__U_core__5((&vlSymsp->TOP__rtl_axi_probe__dut__U_core));
        Vrtl_axi_probe_multiplier___ico_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mul__1((&vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mul));
        Vrtl_axi_probe_multiplier__W21___ico_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mulu__1((&vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mulu));
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vrtl_axi_probe_rtl_axi_probe___nba_sequent__TOP__rtl_axi_probe__1((&vlSymsp->TOP__rtl_axi_probe));
        Vrtl_axi_probe_cpu_top___nba_sequent__TOP__rtl_axi_probe__dut__4((&vlSymsp->TOP__rtl_axi_probe__dut));
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vrtl_axi_probe_cpu_top___nba_comb__TOP__rtl_axi_probe__dut__0((&vlSymsp->TOP__rtl_axi_probe__dut));
        Vrtl_axi_probe_cpu_core___nba_comb__TOP__rtl_axi_probe__dut__U_core__0((&vlSymsp->TOP__rtl_axi_probe__dut__U_core));
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vrtl_axi_probe_cpu_top___nba_sequent__TOP__rtl_axi_probe__dut__5((&vlSymsp->TOP__rtl_axi_probe__dut));
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vrtl_axi_probe_cpu_top___nba_comb__TOP__rtl_axi_probe__dut__1((&vlSymsp->TOP__rtl_axi_probe__dut));
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vrtl_axi_probe_cpu_core___act_sequent__TOP__rtl_axi_probe__dut__U_core__0((&vlSymsp->TOP__rtl_axi_probe__dut__U_core));
        Vrtl_axi_probe_cpu_top___ico_sequent__TOP__rtl_axi_probe__dut__1((&vlSymsp->TOP__rtl_axi_probe__dut));
    }
}
