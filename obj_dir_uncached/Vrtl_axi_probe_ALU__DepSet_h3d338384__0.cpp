// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtl_axi_probe.h for the primary calling header

#include "Vrtl_axi_probe__pch.h"
#include "Vrtl_axi_probe_ALU.h"
#include "Vrtl_axi_probe__Syms.h"

VL_INLINE_OPT void Vrtl_axi_probe_ALU___ico_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__0(Vrtl_axi_probe_ALU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrtl_axi_probe_ALU___ico_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__0\n"); );
    // Body
    vlSelf->__PVT__mul_flag = ((0x10U == (IData)(vlSelf->op)) 
                               | (0x11U == (IData)(vlSelf->op)));
    vlSelf->__PVT__div_flag = ((0x13U == (IData)(vlSelf->op)) 
                               | (0x15U == (IData)(vlSelf->op)));
    vlSelf->__PVT__divu_flag = ((0x14U == (IData)(vlSelf->op)) 
                                | (0x16U == (IData)(vlSelf->op)));
    vlSelf->__PVT__br = ((0x10U & (IData)(vlSelf->op))
                          ? ((8U & (IData)(vlSelf->op))
                              ? ((1U & (~ ((IData)(vlSelf->op) 
                                           >> 2U))) 
                                 && ((1U & (~ ((IData)(vlSelf->op) 
                                               >> 1U))) 
                                     && ((1U & (~ (IData)(vlSelf->op))) 
                                         && (vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a 
                                             >= vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b))))
                              : ((1U & ((IData)(vlSelf->op) 
                                        >> 2U)) && 
                                 ((1U & ((IData)(vlSelf->op) 
                                         >> 1U)) && 
                                  ((1U & (IData)(vlSelf->op)) 
                                   && VL_GTES_III(32, vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a, vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b)))))
                          : ((1U & ((IData)(vlSelf->op) 
                                    >> 3U)) && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->op) 
                                                     >> 2U))) 
                                                && ((2U 
                                                     & (IData)(vlSelf->op))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->op))
                                                      ? 
                                                     (vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a 
                                                      < vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b)
                                                      : 
                                                     VL_LTS_III(32, vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a, vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->op))
                                                      ? 
                                                     (vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a 
                                                      != vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b)
                                                      : 
                                                     (vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a 
                                                      == vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b))))));
    vlSelf->mul_busy = vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mul.busy;
    vlSelf->__PVT__any_mul_div = ((IData)(vlSelf->__PVT__mul_flag) 
                                  | ((0x12U == (IData)(vlSelf->op)) 
                                     | ((IData)(vlSelf->__PVT__div_flag) 
                                        | (IData)(vlSelf->__PVT__divu_flag))));
    vlSelf->__PVT__busy = ((IData)(vlSelf->mul_busy) 
                           | ((IData)(vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mulu.busy) 
                              | ((0U != (IData)(vlSelf->__PVT__U_div__DOT__count)) 
                                 | (0U != (IData)(vlSelf->__PVT__U_divu__DOT__count)))));
    vlSelf->__PVT__effective_op = (((IData)(vlSelf->multi_active) 
                                    & ((IData)(vlSelf->__PVT__any_mul_div) 
                                       & ((IData)(vlSelf->op) 
                                          == (IData)(vlSelf->op_r))))
                                    ? (IData)(vlSelf->op_r)
                                    : (IData)(vlSelf->op));
    vlSelf->__PVT__multi_start = ((~ (IData)(vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__duplicate_mul)) 
                                  & (((~ (IData)(vlSelf->multi_active)) 
                                      & (IData)(vlSelf->__PVT__any_mul_div)) 
                                     | (IData)(vlSelf->__PVT__restart_continue)));
    if ((0x10U & (IData)(vlSelf->__PVT__effective_op))) {
        if ((8U & (IData)(vlSelf->__PVT__effective_op))) {
            vlSelf->__PVT__c = 0U;
        } else if ((4U & (IData)(vlSelf->__PVT__effective_op))) {
            vlSelf->__PVT__c = ((2U & (IData)(vlSelf->__PVT__effective_op))
                                 ? ((1U & (IData)(vlSelf->__PVT__effective_op))
                                     ? 0U : (IData)(vlSelf->__PVT__U_divu__DOT__remainder))
                                 : ((1U & (IData)(vlSelf->__PVT__effective_op))
                                     ? ((vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a 
                                         >> 0x1fU) ? 
                                        (- vlSelf->__PVT__U_div__DOT__remainder)
                                         : vlSelf->__PVT__U_div__DOT__remainder)
                                     : (IData)(vlSelf->__PVT__U_divu__DOT__quotient)));
        } else if ((2U & (IData)(vlSelf->__PVT__effective_op))) {
            vlSelf->__PVT__c = ((1U & (IData)(vlSelf->__PVT__effective_op))
                                 ? (((vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a 
                                      ^ vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b) 
                                     >> 0x1fU) ? (- vlSelf->__PVT__U_div__DOT__quotient)
                                     : vlSelf->__PVT__U_div__DOT__quotient)
                                 : (((IData)(vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mulu.product_hi) 
                                     << 1U) | (1U & (IData)(
                                                            (vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mulu.product_lo 
                                                             >> 0x20U)))));
        } else if ((1U & (IData)(vlSelf->__PVT__effective_op))) {
            vlSelf->__PVT__c = (IData)(vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mul.product_hi);
            if ((vlSelf->a_latched >> 0x1fU)) {
                vlSelf->__PVT__c = (vlSelf->__PVT__c 
                                    - vlSelf->b_latched);
            }
            if ((vlSelf->b_latched >> 0x1fU)) {
                vlSelf->__PVT__c = (vlSelf->__PVT__c 
                                    - vlSelf->a_latched);
            }
        } else {
            vlSelf->__PVT__c = vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mul.product_lo;
        }
    } else {
        vlSelf->__PVT__c = ((8U & (IData)(vlSelf->__PVT__effective_op))
                             ? ((4U & (IData)(vlSelf->__PVT__effective_op))
                                 ? 0U : ((2U & (IData)(vlSelf->__PVT__effective_op))
                                          ? ((1U & (IData)(vlSelf->__PVT__effective_op))
                                              ? ((vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a 
                                                  < vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b)
                                                  ? 1U
                                                  : 0U)
                                              : (VL_LTS_III(32, vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a, vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b)
                                                  ? 1U
                                                  : 0U))
                                          : 0U)) : 
                            ((4U & (IData)(vlSelf->__PVT__effective_op))
                              ? ((2U & (IData)(vlSelf->__PVT__effective_op))
                                  ? ((1U & (IData)(vlSelf->__PVT__effective_op))
                                      ? VL_SHIFTRS_III(32,32,5, vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a, 
                                                       (0x1fU 
                                                        & vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b))
                                      : (vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a 
                                         >> (0x1fU 
                                             & vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b)))
                                  : ((1U & (IData)(vlSelf->__PVT__effective_op))
                                      ? (vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a 
                                         << (0x1fU 
                                             & vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b))
                                      : (vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a 
                                         & vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b)))
                              : ((2U & (IData)(vlSelf->__PVT__effective_op))
                                  ? ((1U & (IData)(vlSelf->__PVT__effective_op))
                                      ? (vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a 
                                         | vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b)
                                      : (vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a 
                                         ^ vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b))
                                  : ((1U & (IData)(vlSelf->__PVT__effective_op))
                                      ? (vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a 
                                         - vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b)
                                      : (vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a 
                                         + vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b)))));
    }
    vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mul.start 
        = ((IData)(vlSelf->__PVT__multi_start) & (IData)(vlSelf->__PVT__mul_flag));
    vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mulu.start 
        = ((IData)(vlSelf->__PVT__multi_start) & (0x12U 
                                                  == (IData)(vlSelf->op)));
    vlSelf->__Vcellinp__U_div__start = ((IData)(vlSelf->__PVT__multi_start) 
                                        & (IData)(vlSelf->__PVT__div_flag));
    vlSelf->__Vcellinp__U_divu__start = ((IData)(vlSelf->__PVT__multi_start) 
                                         & (IData)(vlSelf->__PVT__divu_flag));
    vlSelf->__PVT__U_div__DOT__start_rise = ((~ (IData)(vlSelf->__PVT__U_div__DOT__start_d)) 
                                             & (IData)(vlSelf->__Vcellinp__U_div__start));
    vlSelf->__PVT__U_divu__DOT__start_rise = ((~ (IData)(vlSelf->__PVT__U_divu__DOT__start_d)) 
                                              & (IData)(vlSelf->__Vcellinp__U_divu__start));
}

VL_INLINE_OPT void Vrtl_axi_probe_ALU___nba_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__0(Vrtl_axi_probe_ALU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrtl_axi_probe_ALU___nba_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__multi_active;
    __Vdly__multi_active = 0;
    CData/*5:0*/ __Vdly__U_div__DOT__count;
    __Vdly__U_div__DOT__count = 0;
    CData/*5:0*/ __Vdly__U_divu__DOT__count;
    __Vdly__U_divu__DOT__count = 0;
    // Body
    __Vdly__U_divu__DOT__count = vlSelf->__PVT__U_divu__DOT__count;
    __Vdly__U_div__DOT__count = vlSelf->__PVT__U_div__DOT__count;
    __Vdly__multi_active = vlSelf->multi_active;
    vlSelf->__PVT__U_divu__DOT__start_d = ((1U & (~ (IData)(vlSymsp->TOP__rtl_axi_probe.__PVT__rst))) 
                                           && (IData)(vlSelf->__Vcellinp__U_divu__start));
    vlSelf->__PVT__U_div__DOT__start_d = ((1U & (~ (IData)(vlSymsp->TOP__rtl_axi_probe.__PVT__rst))) 
                                          && (IData)(vlSelf->__Vcellinp__U_div__start));
    if (vlSymsp->TOP__rtl_axi_probe.__PVT__rst) {
        vlSelf->__PVT__U_divu__DOT__divisor = 0ULL;
        vlSelf->__PVT__U_div__DOT__divisor = 0U;
        vlSelf->b_latched = 0U;
        vlSelf->a_latched = 0U;
        __Vdly__U_divu__DOT__count = 0U;
        vlSelf->__PVT__U_divu__DOT__remainder = 0ULL;
        vlSelf->__PVT__U_divu__DOT__quotient = 0ULL;
        __Vdly__U_div__DOT__count = 0U;
        vlSelf->__PVT__U_div__DOT__remainder = 0U;
        vlSelf->__PVT__U_div__DOT__quotient = 0U;
        __Vdly__multi_active = 0U;
        vlSelf->op_r = 0U;
    } else {
        if (vlSelf->__PVT__U_divu__DOT__start_rise) {
            vlSelf->__PVT__U_divu__DOT__divisor = (QData)((IData)(vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b));
            __Vdly__U_divu__DOT__count = 0x21U;
            vlSelf->__PVT__U_divu__DOT__remainder = 0ULL;
            vlSelf->__PVT__U_divu__DOT__quotient = (QData)((IData)(vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a));
        } else if ((0U < (IData)(vlSelf->__PVT__U_divu__DOT__count))) {
            __Vdly__U_divu__DOT__count = (0x3fU & ((IData)(vlSelf->__PVT__U_divu__DOT__count) 
                                                   - (IData)(1U)));
            vlSelf->__PVT__U_divu__DOT__remainder = 
                (0x1ffffffffULL & ((1U & (IData)((vlSelf->__PVT__U_divu__DOT__diff 
                                                  >> 0x21U)))
                                    ? vlSelf->__PVT__U_divu__DOT__shifted_rem
                                    : vlSelf->__PVT__U_divu__DOT__diff));
            vlSelf->__PVT__U_divu__DOT__quotient = vlSelf->__PVT__U_divu__DOT__next_quo;
        }
        if (vlSelf->__PVT__U_div__DOT__start_rise) {
            vlSelf->__PVT__U_div__DOT__divisor = ((vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b 
                                                   >> 0x1fU)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b))
                                                   : vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b);
            __Vdly__U_div__DOT__count = 0x20U;
            vlSelf->__PVT__U_div__DOT__remainder = 0U;
            vlSelf->__PVT__U_div__DOT__quotient = (
                                                   (vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a 
                                                    >> 0x1fU)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a))
                                                    : vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a);
        } else if ((0U < (IData)(vlSelf->__PVT__U_div__DOT__count))) {
            __Vdly__U_div__DOT__count = (0x3fU & ((IData)(vlSelf->__PVT__U_div__DOT__count) 
                                                  - (IData)(1U)));
            vlSelf->__PVT__U_div__DOT__remainder = 
                ((1U & (IData)((vlSelf->__PVT__U_div__DOT__diff 
                                >> 0x20U))) ? vlSelf->__PVT__U_div__DOT__shifted_rem
                  : (IData)(vlSelf->__PVT__U_div__DOT__diff));
            vlSelf->__PVT__U_div__DOT__quotient = vlSelf->__PVT__U_div__DOT__next_quo;
        }
        if (vlSelf->__PVT__multi_start) {
            vlSelf->b_latched = vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b;
            vlSelf->a_latched = vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a;
            vlSelf->op_r = vlSelf->op;
            __Vdly__multi_active = 1U;
        } else if (((IData)(vlSelf->multi_active) & 
                    (~ (IData)(vlSelf->__PVT__any_mul_div)))) {
            vlSelf->op_r = 0U;
            __Vdly__multi_active = 0U;
        }
    }
    vlSelf->__PVT__restart_continue = ((~ (IData)(vlSymsp->TOP__rtl_axi_probe.__PVT__rst)) 
                                       & ((IData)(vlSelf->__PVT__any_mul_div) 
                                          & ((~ (IData)(vlSelf->__PVT__busy)) 
                                             & (IData)(vlSelf->multi_active))));
    vlSelf->__PVT__U_divu__DOT__count = __Vdly__U_divu__DOT__count;
    vlSelf->__PVT__U_div__DOT__count = __Vdly__U_div__DOT__count;
    vlSelf->multi_active = __Vdly__multi_active;
    vlSelf->__PVT__U_divu__DOT__shifted_rem = (((QData)((IData)(vlSelf->__PVT__U_divu__DOT__remainder)) 
                                                << 1U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__U_divu__DOT__quotient 
                                                                             >> 0x20U))))));
    vlSelf->__PVT__U_div__DOT__shifted_rem = ((vlSelf->__PVT__U_div__DOT__remainder 
                                               << 1U) 
                                              | (vlSelf->__PVT__U_div__DOT__quotient 
                                                 >> 0x1fU));
    vlSelf->__PVT__U_divu__DOT__diff = (0x3ffffffffULL 
                                        & (vlSelf->__PVT__U_divu__DOT__shifted_rem 
                                           - vlSelf->__PVT__U_divu__DOT__divisor));
    vlSelf->__PVT__U_div__DOT__diff = (0x1ffffffffULL 
                                       & ((QData)((IData)(vlSelf->__PVT__U_div__DOT__shifted_rem)) 
                                          - (QData)((IData)(vlSelf->__PVT__U_div__DOT__divisor))));
    vlSelf->__PVT__U_divu__DOT__next_quo = (((QData)((IData)(vlSelf->__PVT__U_divu__DOT__quotient)) 
                                             << 1U) 
                                            | (QData)((IData)(
                                                              (1U 
                                                               & (~ (IData)(
                                                                            (vlSelf->__PVT__U_divu__DOT__diff 
                                                                             >> 0x21U)))))));
    vlSelf->__PVT__U_div__DOT__next_quo = ((vlSelf->__PVT__U_div__DOT__quotient 
                                            << 1U) 
                                           | (1U & 
                                              (~ (IData)(
                                                         (vlSelf->__PVT__U_div__DOT__diff 
                                                          >> 0x20U)))));
}

VL_INLINE_OPT void Vrtl_axi_probe_ALU___nba_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__1(Vrtl_axi_probe_ALU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrtl_axi_probe_ALU___nba_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__1\n"); );
    // Body
    vlSelf->mul_busy = vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mul.busy;
    vlSelf->__PVT__mul_flag = ((0x10U == (IData)(vlSelf->op)) 
                               | (0x11U == (IData)(vlSelf->op)));
    vlSelf->__PVT__div_flag = ((0x13U == (IData)(vlSelf->op)) 
                               | (0x15U == (IData)(vlSelf->op)));
    vlSelf->__PVT__divu_flag = ((0x14U == (IData)(vlSelf->op)) 
                                | (0x16U == (IData)(vlSelf->op)));
    vlSelf->__PVT__busy = ((IData)(vlSelf->mul_busy) 
                           | ((IData)(vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mulu.busy) 
                              | ((0U != (IData)(vlSelf->__PVT__U_div__DOT__count)) 
                                 | (0U != (IData)(vlSelf->__PVT__U_divu__DOT__count)))));
    vlSelf->__PVT__any_mul_div = ((IData)(vlSelf->__PVT__mul_flag) 
                                  | ((0x12U == (IData)(vlSelf->op)) 
                                     | ((IData)(vlSelf->__PVT__div_flag) 
                                        | (IData)(vlSelf->__PVT__divu_flag))));
    vlSelf->__PVT__effective_op = (((IData)(vlSelf->multi_active) 
                                    & ((IData)(vlSelf->__PVT__any_mul_div) 
                                       & ((IData)(vlSelf->op) 
                                          == (IData)(vlSelf->op_r))))
                                    ? (IData)(vlSelf->op_r)
                                    : (IData)(vlSelf->op));
}

VL_INLINE_OPT void Vrtl_axi_probe_ALU___nba_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__2(Vrtl_axi_probe_ALU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrtl_axi_probe_ALU___nba_sequent__TOP__rtl_axi_probe__dut__U_core__U_ALU__2\n"); );
    // Body
    vlSelf->__PVT__multi_start = ((~ (IData)(vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__duplicate_mul)) 
                                  & (((~ (IData)(vlSelf->multi_active)) 
                                      & (IData)(vlSelf->__PVT__any_mul_div)) 
                                     | (IData)(vlSelf->__PVT__restart_continue)));
    if ((0x10U & (IData)(vlSelf->__PVT__effective_op))) {
        if ((8U & (IData)(vlSelf->__PVT__effective_op))) {
            vlSelf->__PVT__c = 0U;
        } else if ((4U & (IData)(vlSelf->__PVT__effective_op))) {
            vlSelf->__PVT__c = ((2U & (IData)(vlSelf->__PVT__effective_op))
                                 ? ((1U & (IData)(vlSelf->__PVT__effective_op))
                                     ? 0U : (IData)(vlSelf->__PVT__U_divu__DOT__remainder))
                                 : ((1U & (IData)(vlSelf->__PVT__effective_op))
                                     ? ((vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a 
                                         >> 0x1fU) ? 
                                        (- vlSelf->__PVT__U_div__DOT__remainder)
                                         : vlSelf->__PVT__U_div__DOT__remainder)
                                     : (IData)(vlSelf->__PVT__U_divu__DOT__quotient)));
        } else if ((2U & (IData)(vlSelf->__PVT__effective_op))) {
            vlSelf->__PVT__c = ((1U & (IData)(vlSelf->__PVT__effective_op))
                                 ? (((vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a 
                                      ^ vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b) 
                                     >> 0x1fU) ? (- vlSelf->__PVT__U_div__DOT__quotient)
                                     : vlSelf->__PVT__U_div__DOT__quotient)
                                 : (((IData)(vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mulu.product_hi) 
                                     << 1U) | (1U & (IData)(
                                                            (vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mulu.product_lo 
                                                             >> 0x20U)))));
        } else if ((1U & (IData)(vlSelf->__PVT__effective_op))) {
            vlSelf->__PVT__c = (IData)(vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mul.product_hi);
            if ((vlSelf->a_latched >> 0x1fU)) {
                vlSelf->__PVT__c = (vlSelf->__PVT__c 
                                    - vlSelf->b_latched);
            }
            if ((vlSelf->b_latched >> 0x1fU)) {
                vlSelf->__PVT__c = (vlSelf->__PVT__c 
                                    - vlSelf->a_latched);
            }
        } else {
            vlSelf->__PVT__c = vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mul.product_lo;
        }
    } else {
        vlSelf->__PVT__c = ((8U & (IData)(vlSelf->__PVT__effective_op))
                             ? ((4U & (IData)(vlSelf->__PVT__effective_op))
                                 ? 0U : ((2U & (IData)(vlSelf->__PVT__effective_op))
                                          ? ((1U & (IData)(vlSelf->__PVT__effective_op))
                                              ? ((vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a 
                                                  < vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b)
                                                  ? 1U
                                                  : 0U)
                                              : (VL_LTS_III(32, vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a, vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b)
                                                  ? 1U
                                                  : 0U))
                                          : 0U)) : 
                            ((4U & (IData)(vlSelf->__PVT__effective_op))
                              ? ((2U & (IData)(vlSelf->__PVT__effective_op))
                                  ? ((1U & (IData)(vlSelf->__PVT__effective_op))
                                      ? VL_SHIFTRS_III(32,32,5, vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a, 
                                                       (0x1fU 
                                                        & vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b))
                                      : (vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a 
                                         >> (0x1fU 
                                             & vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b)))
                                  : ((1U & (IData)(vlSelf->__PVT__effective_op))
                                      ? (vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a 
                                         << (0x1fU 
                                             & vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b))
                                      : (vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a 
                                         & vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b)))
                              : ((2U & (IData)(vlSelf->__PVT__effective_op))
                                  ? ((1U & (IData)(vlSelf->__PVT__effective_op))
                                      ? (vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a 
                                         | vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b)
                                      : (vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a 
                                         ^ vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b))
                                  : ((1U & (IData)(vlSelf->__PVT__effective_op))
                                      ? (vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a 
                                         - vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b)
                                      : (vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a 
                                         + vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b)))));
    }
    vlSelf->__PVT__br = ((0x10U & (IData)(vlSelf->op))
                          ? ((8U & (IData)(vlSelf->op))
                              ? ((1U & (~ ((IData)(vlSelf->op) 
                                           >> 2U))) 
                                 && ((1U & (~ ((IData)(vlSelf->op) 
                                               >> 1U))) 
                                     && ((1U & (~ (IData)(vlSelf->op))) 
                                         && (vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a 
                                             >= vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b))))
                              : ((1U & ((IData)(vlSelf->op) 
                                        >> 2U)) && 
                                 ((1U & ((IData)(vlSelf->op) 
                                         >> 1U)) && 
                                  ((1U & (IData)(vlSelf->op)) 
                                   && VL_GTES_III(32, vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a, vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b)))))
                          : ((1U & ((IData)(vlSelf->op) 
                                    >> 3U)) && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->op) 
                                                     >> 2U))) 
                                                && ((2U 
                                                     & (IData)(vlSelf->op))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->op))
                                                      ? 
                                                     (vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a 
                                                      < vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b)
                                                      : 
                                                     VL_LTS_III(32, vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a, vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->op))
                                                      ? 
                                                     (vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a 
                                                      != vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b)
                                                      : 
                                                     (vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_alu_a 
                                                      == vlSymsp->TOP__rtl_axi_probe__dut__U_core.ex_alu_b))))));
    vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mul.start 
        = ((IData)(vlSelf->__PVT__multi_start) & (IData)(vlSelf->__PVT__mul_flag));
    vlSymsp->TOP__rtl_axi_probe__dut__U_core__U_ALU__U_mulu.start 
        = ((IData)(vlSelf->__PVT__multi_start) & (0x12U 
                                                  == (IData)(vlSelf->op)));
    vlSelf->__Vcellinp__U_div__start = ((IData)(vlSelf->__PVT__multi_start) 
                                        & (IData)(vlSelf->__PVT__div_flag));
    vlSelf->__Vcellinp__U_divu__start = ((IData)(vlSelf->__PVT__multi_start) 
                                         & (IData)(vlSelf->__PVT__divu_flag));
    vlSelf->__PVT__U_div__DOT__start_rise = ((~ (IData)(vlSelf->__PVT__U_div__DOT__start_d)) 
                                             & (IData)(vlSelf->__Vcellinp__U_div__start));
    vlSelf->__PVT__U_divu__DOT__start_rise = ((~ (IData)(vlSelf->__PVT__U_divu__DOT__start_d)) 
                                              & (IData)(vlSelf->__Vcellinp__U_divu__start));
}
