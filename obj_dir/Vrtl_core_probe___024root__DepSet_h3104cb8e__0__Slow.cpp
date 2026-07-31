// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtl_core_probe.h for the primary calling header

#include "Vrtl_core_probe__pch.h"
#include "Vrtl_core_probe__Syms.h"
#include "Vrtl_core_probe___024root.h"

VL_ATTR_COLD void Vrtl_core_probe_rtl_core_probe___eval_static__TOP__rtl_core_probe(Vrtl_core_probe_rtl_core_probe* vlSelf);

VL_ATTR_COLD void Vrtl_core_probe___024root___eval_static(Vrtl_core_probe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_core_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtl_core_probe___024root___eval_static\n"); );
    // Body
    Vrtl_core_probe_rtl_core_probe___eval_static__TOP__rtl_core_probe((&vlSymsp->TOP__rtl_core_probe));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrtl_core_probe___024root___dump_triggers__stl(Vrtl_core_probe___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrtl_core_probe___024root___eval_triggers__stl(Vrtl_core_probe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_core_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtl_core_probe___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrtl_core_probe___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vrtl_core_probe_cpu_core___stl_sequent__TOP__rtl_core_probe__dut__0(Vrtl_core_probe_cpu_core* vlSelf);
VL_ATTR_COLD void Vrtl_core_probe_rtl_core_probe___stl_sequent__TOP__rtl_core_probe__0(Vrtl_core_probe_rtl_core_probe* vlSelf);
VL_ATTR_COLD void Vrtl_core_probe_ALU___stl_sequent__TOP__rtl_core_probe__dut__U_ALU__0(Vrtl_core_probe_ALU* vlSelf);
VL_ATTR_COLD void Vrtl_core_probe_multiplier___stl_sequent__TOP__rtl_core_probe__dut__U_ALU__U_mul__0(Vrtl_core_probe_multiplier* vlSelf);
VL_ATTR_COLD void Vrtl_core_probe_multiplier__W21___stl_sequent__TOP__rtl_core_probe__dut__U_ALU__U_mulu__0(Vrtl_core_probe_multiplier__W21* vlSelf);
VL_ATTR_COLD void Vrtl_core_probe_cpu_core___stl_sequent__TOP__rtl_core_probe__dut__1(Vrtl_core_probe_cpu_core* vlSelf);
VL_ATTR_COLD void Vrtl_core_probe_ALU___stl_sequent__TOP__rtl_core_probe__dut__U_ALU__1(Vrtl_core_probe_ALU* vlSelf);
VL_ATTR_COLD void Vrtl_core_probe_cpu_core___stl_sequent__TOP__rtl_core_probe__dut__2(Vrtl_core_probe_cpu_core* vlSelf);

VL_ATTR_COLD void Vrtl_core_probe___024root___eval_stl(Vrtl_core_probe___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_core_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrtl_core_probe___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vrtl_core_probe_cpu_core___stl_sequent__TOP__rtl_core_probe__dut__0((&vlSymsp->TOP__rtl_core_probe__dut));
        Vrtl_core_probe_rtl_core_probe___stl_sequent__TOP__rtl_core_probe__0((&vlSymsp->TOP__rtl_core_probe));
        Vrtl_core_probe_ALU___stl_sequent__TOP__rtl_core_probe__dut__U_ALU__0((&vlSymsp->TOP__rtl_core_probe__dut__U_ALU));
        Vrtl_core_probe_multiplier___stl_sequent__TOP__rtl_core_probe__dut__U_ALU__U_mul__0((&vlSymsp->TOP__rtl_core_probe__dut__U_ALU__U_mul));
        Vrtl_core_probe_multiplier__W21___stl_sequent__TOP__rtl_core_probe__dut__U_ALU__U_mulu__0((&vlSymsp->TOP__rtl_core_probe__dut__U_ALU__U_mulu));
        Vrtl_core_probe_cpu_core___stl_sequent__TOP__rtl_core_probe__dut__1((&vlSymsp->TOP__rtl_core_probe__dut));
        Vrtl_core_probe_ALU___stl_sequent__TOP__rtl_core_probe__dut__U_ALU__1((&vlSymsp->TOP__rtl_core_probe__dut__U_ALU));
        Vrtl_core_probe_cpu_core___stl_sequent__TOP__rtl_core_probe__dut__2((&vlSymsp->TOP__rtl_core_probe__dut));
    }
}
