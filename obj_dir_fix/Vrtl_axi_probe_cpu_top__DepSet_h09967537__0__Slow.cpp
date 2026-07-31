// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtl_axi_probe.h for the primary calling header

#include "Vrtl_axi_probe__pch.h"
#include "Vrtl_axi_probe__Syms.h"
#include "Vrtl_axi_probe_cpu_top.h"

extern const VlUnpacked<CData/*1:0*/, 256> Vrtl_axi_probe__ConstPool__TABLE_h71331e0b_0;

VL_ATTR_COLD void Vrtl_axi_probe_cpu_top___stl_sequent__TOP__rtl_axi_probe__dut__0(Vrtl_axi_probe_cpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrtl_axi_probe_cpu_top___stl_sequent__TOP__rtl_axi_probe__dut__0\n"); );
    // Init
    CData/*0:0*/ U_dcache__DOT____VdfgTmp_h9763fb1d__0;
    U_dcache__DOT____VdfgTmp_h9763fb1d__0 = 0;
    CData/*7:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelf->__PVT__U_aximaster__DOT__aw_fire = vlSelf->__PVT__m_axi_awvalid;
    vlSelf->__PVT__U_aximaster__DOT__w_fire = vlSelf->__PVT__m_axi_wvalid;
    vlSelf->__PVT__U_icache__DOT__cache_we = ((3U == (IData)(vlSelf->__PVT__U_icache__DOT__state)) 
                                              & (IData)(vlSelf->__PVT__ic_dev_rvalid));
    vlSelf->__PVT__ic_dev_rrdy = 0U;
    vlSelf->__PVT__dc_dev_rrdy = 0U;
    if ((0U == (IData)(vlSelf->__PVT__U_aximaster__DOT__r_state))) {
        if ((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__dc_cpu_ren)))))) {
            if ((0U != (IData)(vlSelf->__PVT__ic_cpu_ren))) {
                vlSelf->__PVT__ic_dev_rrdy = 1U;
            } else if ((1U & (~ (IData)(vlSelf->__PVT__U_aximaster__DOT__read_turn_dc)))) {
                vlSelf->__PVT__ic_dev_rrdy = 1U;
            }
        }
        if ((0U != (IData)(vlSelf->__PVT__dc_cpu_ren))) {
            vlSelf->__PVT__dc_dev_rrdy = 1U;
        } else if ((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__ic_cpu_ren)))))) {
            if (vlSelf->__PVT__U_aximaster__DOT__read_turn_dc) {
                vlSelf->__PVT__dc_dev_rrdy = 1U;
            }
        }
    }
    vlSelf->__PVT__U_aximaster__DOT__w_next = ((0U 
                                                == (IData)(vlSelf->__PVT__U_aximaster__DOT__w_state))
                                                ? (
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__dc_cpu_wen))
                                                    ? 1U
                                                    : 0U)
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->__PVT__U_aximaster__DOT__w_state))
                                                    ? 
                                                   ((((IData)(vlSelf->__PVT__U_aximaster__DOT__aw_done) 
                                                      | (IData)(vlSelf->__PVT__m_axi_awvalid)) 
                                                     & ((IData)(vlSelf->__PVT__U_aximaster__DOT__w_done) 
                                                        | (IData)(vlSelf->__PVT__m_axi_wvalid)))
                                                     ? 2U
                                                     : 1U)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->__PVT__U_aximaster__DOT__w_state))
                                                     ? 
                                                    (((IData)(vlSymsp->TOP__rtl_axi_probe.__PVT__bvalid) 
                                                      & (IData)(vlSelf->__PVT__m_axi_bready))
                                                      ? 0U
                                                      : 2U)
                                                     : 0U)));
    vlSelf->__PVT__U_aximaster__DOT__read_last = ((IData)(vlSymsp->TOP__rtl_axi_probe.__PVT__rlast) 
                                                  | ((IData)(vlSelf->__PVT__U_aximaster__DOT__read_beat) 
                                                     == (IData)(vlSelf->__PVT__m_axi_arlen)));
    vlSelf->__PVT__U_dcache__DOT__wr_resp = ((0U == (IData)(vlSelf->__PVT__U_aximaster__DOT__w_state)) 
                                             & (0U 
                                                == (IData)(vlSelf->__PVT__dc_cpu_wen)));
    vlSelf->__PVT__U_dcache__DOT__current_addr = ((0U 
                                                   != (IData)(vlSelf->__PVT__U_dcache__DOT__w_state))
                                                   ? vlSelf->__PVT__dc_cpu_waddr
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->__PVT__U_dcache__DOT__r_state))
                                                    ? vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_mem_alu_c
                                                    : vlSelf->__PVT__U_dcache__DOT__read_addr_r));
    __Vtableidx4 = (0x10U | (((IData)(vlSelf->__PVT__U_aximaster__DOT__read_last) 
                              << 7U) | (((IData)(vlSelf->__PVT__m_axi_rready) 
                                         << 6U) | (
                                                   ((IData)(vlSymsp->TOP__rtl_axi_probe.__PVT__rvalid) 
                                                    << 5U) 
                                                   | ((((0U 
                                                         != 
                                                         ((IData)(vlSelf->__PVT__dc_cpu_ren) 
                                                          | (IData)(vlSelf->__PVT__ic_cpu_ren)))
                                                         ? 1U
                                                         : 0U) 
                                                       << 2U) 
                                                      | (IData)(vlSelf->__PVT__U_aximaster__DOT__r_state))))));
    vlSelf->__PVT__U_aximaster__DOT__r_next = Vrtl_axi_probe__ConstPool__TABLE_h71331e0b_0
        [__Vtableidx4];
    vlSelf->__PVT__U_dcache__DOT__wr_cache_data[0U] 
        = vlSelf->__PVT__U_dcache__DOT__cache_line_r[0U];
    vlSelf->__PVT__U_dcache__DOT__wr_cache_data[1U] 
        = vlSelf->__PVT__U_dcache__DOT__cache_line_r[1U];
    vlSelf->__PVT__U_dcache__DOT__wr_cache_data[2U] 
        = vlSelf->__PVT__U_dcache__DOT__cache_line_r[2U];
    vlSelf->__PVT__U_dcache__DOT__wr_cache_data[3U] 
        = vlSelf->__PVT__U_dcache__DOT__cache_line_r[3U];
    if ((1U & (IData)(vlSelf->__PVT__U_dcache__DOT__wen_r))) {
        VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, 
                                                     (3U 
                                                      & (vlSelf->__PVT__U_dcache__DOT__current_addr 
                                                         >> 2U)), 5U)), vlSelf->__PVT__U_dcache__DOT__wr_cache_data, 
                        (0xffU & vlSelf->__PVT__dc_cpu_wdata));
    }
    if ((2U & (IData)(vlSelf->__PVT__U_dcache__DOT__wen_r))) {
        VL_ASSIGNSEL_WI(128,8,(0x7fU & ((IData)(8U) 
                                        + VL_SHIFTL_III(7,32,32, 
                                                        (3U 
                                                         & (vlSelf->__PVT__U_dcache__DOT__current_addr 
                                                            >> 2U)), 5U))), vlSelf->__PVT__U_dcache__DOT__wr_cache_data, 
                        (0xffU & (vlSelf->__PVT__dc_cpu_wdata 
                                  >> 8U)));
    }
    if ((4U & (IData)(vlSelf->__PVT__U_dcache__DOT__wen_r))) {
        VL_ASSIGNSEL_WI(128,8,(0x7fU & ((IData)(0x10U) 
                                        + VL_SHIFTL_III(7,32,32, 
                                                        (3U 
                                                         & (vlSelf->__PVT__U_dcache__DOT__current_addr 
                                                            >> 2U)), 5U))), vlSelf->__PVT__U_dcache__DOT__wr_cache_data, 
                        (0xffU & (vlSelf->__PVT__dc_cpu_wdata 
                                  >> 0x10U)));
    }
    if ((8U & (IData)(vlSelf->__PVT__U_dcache__DOT__wen_r))) {
        VL_ASSIGNSEL_WI(128,8,(0x7fU & ((IData)(0x18U) 
                                        + VL_SHIFTL_III(7,32,32, 
                                                        (3U 
                                                         & (vlSelf->__PVT__U_dcache__DOT__current_addr 
                                                            >> 2U)), 5U))), vlSelf->__PVT__U_dcache__DOT__wr_cache_data, 
                        (vlSelf->__PVT__dc_cpu_wdata 
                         >> 0x18U));
    }
    U_dcache__DOT____VdfgTmp_h9763fb1d__0 = (((0x1fU 
                                               & vlSelf->__PVT__U_dcache__DOT__cache_line_r[4U]) 
                                              == (0x1fU 
                                                  & (vlSelf->__PVT__U_dcache__DOT__current_addr 
                                                     >> 0xaU))) 
                                             & ((IData)(
                                                        (vlSelf->__PVT__U_dcache__DOT__valid_lines 
                                                         >> 
                                                         (0x3fU 
                                                          & (vlSelf->__PVT__U_dcache__DOT__current_addr 
                                                             >> 4U)))) 
                                                & ((0xffffU 
                                                    != 
                                                    (vlSelf->__PVT__U_dcache__DOT__current_addr 
                                                     >> 0x10U)) 
                                                   & (vlSelf->__PVT__U_dcache__DOT__tag_hi
                                                      [
                                                      (0x3fU 
                                                       & (vlSelf->__PVT__U_dcache__DOT__current_addr 
                                                          >> 4U))] 
                                                      == 
                                                      (vlSelf->__PVT__U_dcache__DOT__current_addr 
                                                       >> 0xfU)))));
    vlSelf->__PVT__U_dcache__DOT__cache_we = (((3U 
                                                == (IData)(vlSelf->__PVT__U_dcache__DOT__r_state)) 
                                               & ((0xffffU 
                                                   != 
                                                   (vlSelf->__PVT__U_dcache__DOT__current_addr 
                                                    >> 0x10U)) 
                                                  & (IData)(vlSelf->__PVT__dc_dev_rvalid))) 
                                              | ((3U 
                                                  == (IData)(vlSelf->__PVT__U_dcache__DOT__w_state)) 
                                                 & ((IData)(vlSelf->__PVT__U_dcache__DOT__wr_resp) 
                                                    & ((IData)(U_dcache__DOT____VdfgTmp_h9763fb1d__0) 
                                                       & (0U 
                                                          != (IData)(vlSelf->__PVT__U_dcache__DOT__w_state))))));
    vlSelf->__PVT__U_dcache__DOT__hit_r = ((IData)(U_dcache__DOT____VdfgTmp_h9763fb1d__0) 
                                           & (1U == (IData)(vlSelf->__PVT__U_dcache__DOT__r_state)));
    vlSelf->__PVT__dc2cpu_rdata = ((IData)(vlSelf->__PVT__U_dcache__DOT__hit_r)
                                    ? ((0x85U >= (0xffU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (3U 
                                                                   & (vlSelf->__PVT__U_dcache__DOT__current_addr 
                                                                      >> 2U)), 5U)))
                                        ? (((0U == 
                                             (0x1fU 
                                              & VL_SHIFTL_III(8,32,32, 
                                                              (3U 
                                                               & (vlSelf->__PVT__U_dcache__DOT__current_addr 
                                                                  >> 2U)), 5U)))
                                             ? 0U : 
                                            (vlSelf->__PVT__U_dcache__DOT__cache_line_r[
                                             (((IData)(0x1fU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (3U 
                                                                   & (vlSelf->__PVT__U_dcache__DOT__current_addr 
                                                                      >> 2U)), 5U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (3U 
                                                                   & (vlSelf->__PVT__U_dcache__DOT__current_addr 
                                                                      >> 2U)), 5U))))) 
                                           | (vlSelf->__PVT__U_dcache__DOT__cache_line_r[
                                              (7U & 
                                               (VL_SHIFTL_III(8,32,32, 
                                                              (3U 
                                                               & (vlSelf->__PVT__U_dcache__DOT__current_addr 
                                                                  >> 2U)), 5U) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(8,32,32, 
                                                                  (3U 
                                                                   & (vlSelf->__PVT__U_dcache__DOT__current_addr 
                                                                      >> 2U)), 5U))))
                                        : 0U) : (((3U 
                                                   == (IData)(vlSelf->__PVT__U_dcache__DOT__r_state)) 
                                                  & (IData)(vlSelf->__PVT__dc_dev_rvalid))
                                                  ? 
                                                 ((0xffffU 
                                                   == 
                                                   (vlSelf->__PVT__U_dcache__DOT__current_addr 
                                                    >> 0x10U))
                                                   ? 
                                                  vlSelf->__PVT__dc_dev_rdata[0U]
                                                   : 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(7,32,32, 
                                                                      (3U 
                                                                       & (vlSelf->__PVT__U_dcache__DOT__current_addr 
                                                                          >> 2U)), 5U)))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->__PVT__dc_dev_rdata[
                                                     (((IData)(0x1fU) 
                                                       + 
                                                       (0x7fU 
                                                        & VL_SHIFTL_III(7,32,32, 
                                                                        (3U 
                                                                         & (vlSelf->__PVT__U_dcache__DOT__current_addr 
                                                                            >> 2U)), 5U))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (3U 
                                                                        & (vlSelf->__PVT__U_dcache__DOT__current_addr 
                                                                           >> 2U)), 5U))))) 
                                                   | (vlSelf->__PVT__dc_dev_rdata[
                                                      (3U 
                                                       & (VL_SHIFTL_III(7,32,32, 
                                                                        (3U 
                                                                         & (vlSelf->__PVT__U_dcache__DOT__current_addr 
                                                                            >> 2U)), 5U) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (3U 
                                                                        & (vlSelf->__PVT__U_dcache__DOT__current_addr 
                                                                           >> 2U)), 5U)))))
                                                  : 0U));
    vlSelf->__PVT__dc2cpu_valid = ((IData)(vlSelf->__PVT__U_dcache__DOT__hit_r) 
                                   | ((3U == (IData)(vlSelf->__PVT__U_dcache__DOT__r_state)) 
                                      & (IData)(vlSelf->__PVT__dc_dev_rvalid)));
}

extern const VlUnpacked<CData/*1:0*/, 512> Vrtl_axi_probe__ConstPool__TABLE_h4af120c4_0;
extern const VlUnpacked<CData/*1:0*/, 512> Vrtl_axi_probe__ConstPool__TABLE_h49a5d49c_0;

VL_ATTR_COLD void Vrtl_axi_probe_cpu_top___stl_sequent__TOP__rtl_axi_probe__dut__1(Vrtl_axi_probe_cpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrtl_axi_probe_cpu_top___stl_sequent__TOP__rtl_axi_probe__dut__1\n"); );
    // Init
    CData/*0:0*/ __PVT__ic2cpu_valid;
    __PVT__ic2cpu_valid = 0;
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->__PVT__U_icache__DOT__cache_index = (0x3fU 
                                                 & ((3U 
                                                     == (IData)(vlSelf->__PVT__U_icache__DOT__state))
                                                     ? 
                                                    (vlSelf->__PVT__ic_cpu_raddr 
                                                     >> 4U)
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->__PVT__U_icache__DOT__state))
                                                      ? 
                                                     (vlSelf->__PVT__U_icache__DOT__req_addr_r 
                                                      >> 4U)
                                                      : 
                                                     (vlSymsp->TOP__rtl_axi_probe__dut__U_core.ifetch_addr 
                                                      >> 4U))));
    __Vtableidx1 = (((IData)(vlSelf->__PVT__dc_dev_rvalid) 
                     << 8U) | ((((IData)(vlSelf->__PVT__U_dcache__DOT__hit_r)
                                  ? 0U : 3U) << 6U) 
                               | (((IData)(vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__daccess_ren) 
                                   << 2U) | (IData)(vlSelf->__PVT__U_dcache__DOT__r_state))));
    vlSelf->__PVT__U_dcache__DOT__r_nstat = Vrtl_axi_probe__ConstPool__TABLE_h4af120c4_0
        [__Vtableidx1];
    __Vtableidx2 = ((((IData)(vlSelf->__PVT__U_dcache__DOT__wr_resp)
                       ? 0U : 3U) << 7U) | (((0U == (IData)(vlSelf->__PVT__U_aximaster__DOT__w_state)) 
                                             << 6U) 
                                            | (((IData)(vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__daccess_wen) 
                                                << 2U) 
                                               | (IData)(vlSelf->__PVT__U_dcache__DOT__w_state))));
    vlSelf->__PVT__U_dcache__DOT__w_nstat = Vrtl_axi_probe__ConstPool__TABLE_h49a5d49c_0
        [__Vtableidx2];
    vlSelf->__PVT__U_icache__DOT__hit = (((0x1fU & 
                                           vlSelf->__PVT__U_icache__DOT__cache_line_r[4U]) 
                                          == (0x1fU 
                                              & (vlSelf->__PVT__U_icache__DOT__req_addr_r 
                                                 >> 0xaU))) 
                                         & ((IData)(
                                                    (vlSelf->__PVT__U_icache__DOT__valid_lines 
                                                     >> (IData)(vlSelf->__PVT__U_icache__DOT__cache_index))) 
                                            & (vlSelf->__PVT__U_icache__DOT__tag_hi
                                               [vlSelf->__PVT__U_icache__DOT__cache_index] 
                                               == (vlSelf->__PVT__U_icache__DOT__req_addr_r 
                                                   >> 0xfU))));
    __PVT__ic2cpu_valid = (((1U == (IData)(vlSelf->__PVT__U_icache__DOT__state)) 
                            & (IData)(vlSelf->__PVT__U_icache__DOT__hit)) 
                           || (((3U == (IData)(vlSelf->__PVT__U_icache__DOT__state)) 
                                & (IData)(vlSelf->__PVT__ic_dev_rvalid)) 
                               & ((vlSelf->__PVT__ic_cpu_raddr 
                                   >> 4U) == (vlSelf->__PVT__U_icache__DOT__req_addr_r 
                                              >> 4U))));
    vlSymsp->TOP__rtl_axi_probe__dut__U_core.ifetch_valid 
        = __PVT__ic2cpu_valid;
}
