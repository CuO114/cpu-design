// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtl_axi_probe.h for the primary calling header

#include "Vrtl_axi_probe__pch.h"
#include "Vrtl_axi_probe_multiplier.h"

VL_INLINE_OPT void Vrtl_axi_probe_multiplier___ico_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mul__0(Vrtl_axi_probe_multiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrtl_axi_probe_multiplier___ico_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mul__0\n"); );
    // Init
    QData/*33:0*/ __PVT__hi_sum;
    __PVT__hi_sum = 0;
    // Body
    __PVT__hi_sum = (0x3ffffffffULL & (vlSelf->product_hi 
                                       + (QData)((IData)(vlSelf->multiplicand))));
    vlSelf->busy = (0U != (IData)(vlSelf->count));
    if ((1U & vlSelf->product_lo)) {
        vlSelf->__PVT__next_hi = (0x1ffffffffULL & 
                                  (__PVT__hi_sum >> 1U));
        vlSelf->__PVT__next_lo = (((IData)(__PVT__hi_sum) 
                                   << 0x1fU) | (vlSelf->product_lo 
                                                >> 1U));
    } else {
        vlSelf->__PVT__next_hi = (0x1ffffffffULL & 
                                  VL_SHIFTR_QQI(33,33,32, vlSelf->product_hi, 1U));
        vlSelf->__PVT__next_lo = (((IData)(vlSelf->product_hi) 
                                   << 0x1fU) | (vlSelf->product_lo 
                                                >> 1U));
    }
}

VL_INLINE_OPT void Vrtl_axi_probe_multiplier___ico_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mul__1(Vrtl_axi_probe_multiplier* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrtl_axi_probe_multiplier___ico_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mul__1\n"); );
    // Body
    vlSelf->__PVT__start_rise = ((~ (IData)(vlSelf->__PVT__start_d)) 
                                 & (IData)(vlSelf->start));
}
