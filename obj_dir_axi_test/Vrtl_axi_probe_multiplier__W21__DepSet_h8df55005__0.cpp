// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtl_axi_probe.h for the primary calling header

#include "Vrtl_axi_probe__pch.h"
#include "Vrtl_axi_probe_multiplier__W21.h"

VL_INLINE_OPT void Vrtl_axi_probe_multiplier__W21___ico_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mulu__0(Vrtl_axi_probe_multiplier__W21* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrtl_axi_probe_multiplier__W21___ico_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mulu__0\n"); );
    // Init
    QData/*34:0*/ __PVT__hi_sum;
    __PVT__hi_sum = 0;
    // Body
    __PVT__hi_sum = (0x7ffffffffULL & (vlSelf->product_hi 
                                       + vlSelf->multiplicand));
    vlSelf->busy = (0U != (IData)(vlSelf->count));
    if ((1U & (IData)(vlSelf->product_lo))) {
        vlSelf->__PVT__next_hi = (0x3ffffffffULL & 
                                  (__PVT__hi_sum >> 1U));
        vlSelf->__PVT__next_lo = (((QData)((IData)(
                                                   (1U 
                                                    & (IData)(__PVT__hi_sum)))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (vlSelf->product_lo 
                                                                >> 1U))));
    } else {
        vlSelf->__PVT__next_hi = (0x3ffffffffULL & 
                                  VL_SHIFTR_QQI(34,34,32, vlSelf->product_hi, 1U));
        vlSelf->__PVT__next_lo = (((QData)((IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->product_hi)))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (vlSelf->product_lo 
                                                                >> 1U))));
    }
}

VL_INLINE_OPT void Vrtl_axi_probe_multiplier__W21___ico_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mulu__1(Vrtl_axi_probe_multiplier__W21* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrtl_axi_probe_multiplier__W21___ico_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mulu__1\n"); );
    // Body
    vlSelf->__PVT__start_rise = ((~ (IData)(vlSelf->__PVT__start_d)) 
                                 & (IData)(vlSelf->start));
}
