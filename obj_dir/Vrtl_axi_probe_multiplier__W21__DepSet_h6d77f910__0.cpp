// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtl_axi_probe.h for the primary calling header

#include "Vrtl_axi_probe__pch.h"
#include "Vrtl_axi_probe__Syms.h"
#include "Vrtl_axi_probe_multiplier__W21.h"

VL_INLINE_OPT void Vrtl_axi_probe_multiplier__W21___nba_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mulu__0(Vrtl_axi_probe_multiplier__W21* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrtl_axi_probe_multiplier__W21___nba_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mulu__0\n"); );
    // Init
    QData/*34:0*/ __PVT__hi_sum;
    __PVT__hi_sum = 0;
    CData/*5:0*/ __Vdly__count;
    __Vdly__count = 0;
    // Body
    __Vdly__count = vlSelf->count;
    vlSelf->__PVT__start_d = ((1U & (~ (IData)(vlSymsp->TOP__rtl_axi_probe.__PVT__rst))) 
                              && (IData)(vlSelf->start));
    if (vlSymsp->TOP__rtl_axi_probe.__PVT__rst) {
        vlSelf->multiplicand = 0ULL;
        __Vdly__count = 0U;
        vlSelf->product_hi = 0ULL;
        vlSelf->product_lo = 0ULL;
    } else if (vlSelf->__PVT__start_rise) {
        vlSelf->multiplicand = (QData)((IData)(vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a));
        __Vdly__count = 0x21U;
        vlSelf->product_hi = 0ULL;
        vlSelf->product_lo = (QData)((IData)(vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b));
    } else if ((0U < (IData)(vlSelf->count))) {
        __Vdly__count = (0x3fU & ((IData)(vlSelf->count) 
                                  - (IData)(1U)));
        vlSelf->product_hi = vlSelf->__PVT__next_hi;
        vlSelf->product_lo = vlSelf->__PVT__next_lo;
    }
    vlSelf->count = __Vdly__count;
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
