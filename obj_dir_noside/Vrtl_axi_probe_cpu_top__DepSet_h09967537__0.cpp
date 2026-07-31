// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtl_axi_probe.h for the primary calling header

#include "Vrtl_axi_probe__pch.h"
#include "Vrtl_axi_probe__Syms.h"
#include "Vrtl_axi_probe_cpu_top.h"

VL_INLINE_OPT void Vrtl_axi_probe_cpu_top___ico_sequent__TOP__rtl_axi_probe__dut__0(Vrtl_axi_probe_cpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrtl_axi_probe_cpu_top___ico_sequent__TOP__rtl_axi_probe__dut__0\n"); );
    // Body
    vlSelf->__PVT__U_icache__DOT__cache_index = (0x3fU 
                                                 & ((3U 
                                                     == (IData)(vlSelf->__PVT__U_icache__DOT__state))
                                                     ? 
                                                    (vlSelf->__PVT__ic_cpu_raddr 
                                                     >> 4U)
                                                     : 
                                                    (vlSymsp->TOP__rtl_axi_probe__dut__U_core.ifetch_addr 
                                                     >> 4U)));
    vlSelf->__PVT__U_icache__DOT__hit = (((0x1fU & 
                                           vlSelf->__PVT__U_icache__DOT__cache_line_r[4U]) 
                                          == (0x1fU 
                                              & (vlSymsp->TOP__rtl_axi_probe__dut__U_core.ifetch_addr 
                                                 >> 0xaU))) 
                                         & (vlSelf->__PVT__U_icache__DOT__cache_line_r[4U] 
                                            >> 5U));
    vlSymsp->TOP__rtl_axi_probe__dut__U_core.ifetch_valid 
        = (((1U == (IData)(vlSelf->__PVT__U_icache__DOT__state)) 
            & (IData)(vlSelf->__PVT__U_icache__DOT__hit)) 
           || (((3U == (IData)(vlSelf->__PVT__U_icache__DOT__state)) 
                & (IData)(vlSelf->__PVT__ic_dev_rvalid)) 
               & ((vlSelf->__PVT__ic_cpu_raddr >> 4U) 
                  == (vlSymsp->TOP__rtl_axi_probe__dut__U_core.ifetch_addr 
                      >> 4U))));
}

extern const VlUnpacked<CData/*1:0*/, 64> Vrtl_axi_probe__ConstPool__TABLE_hbe39ccd8_0;

VL_INLINE_OPT void Vrtl_axi_probe_cpu_top___ico_sequent__TOP__rtl_axi_probe__dut__1(Vrtl_axi_probe_cpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrtl_axi_probe_cpu_top___ico_sequent__TOP__rtl_axi_probe__dut__1\n"); );
    // Init
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    __Vtableidx3 = (((IData)(vlSelf->__PVT__ic_dev_rvalid) 
                     << 5U) | ((((IData)(vlSelf->__PVT__U_icache__DOT__hit)
                                  ? 0U : 3U) << 3U) 
                               | (((IData)(vlSymsp->TOP__rtl_axi_probe__dut__U_core.ifetch_req) 
                                   << 2U) | (IData)(vlSelf->__PVT__U_icache__DOT__state))));
    vlSelf->__PVT__U_icache__DOT__nstat = Vrtl_axi_probe__ConstPool__TABLE_hbe39ccd8_0
        [__Vtableidx3];
}

VL_INLINE_OPT void Vrtl_axi_probe_cpu_top___nba_sequent__TOP__rtl_axi_probe__dut__0(Vrtl_axi_probe_cpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrtl_axi_probe_cpu_top___nba_sequent__TOP__rtl_axi_probe__dut__0\n"); );
    // Body
    vlSelf->__Vdly__ic_cpu_ren = vlSelf->__PVT__ic_cpu_ren;
    vlSelf->__Vdly__U_aximaster__DOT__read_from_dc 
        = vlSelf->__PVT__U_aximaster__DOT__read_from_dc;
    vlSelf->__Vdly__m_axi_rready = vlSelf->__PVT__m_axi_rready;
    vlSelf->__Vdly__U_aximaster__DOT__read_turn_dc 
        = vlSelf->__PVT__U_aximaster__DOT__read_turn_dc;
    vlSelf->__Vdly__U_aximaster__DOT__read_beat = vlSelf->__PVT__U_aximaster__DOT__read_beat;
    vlSelf->__Vdly__dc_cpu_ren = vlSelf->__PVT__dc_cpu_ren;
    vlSelf->__Vdly__dc_cpu_raddr = vlSelf->__PVT__dc_cpu_raddr;
    vlSelf->__Vdly__m_axi_bready = vlSelf->__PVT__m_axi_bready;
    vlSelf->__Vdly__U_aximaster__DOT__w_done = vlSelf->__PVT__U_aximaster__DOT__w_done;
    vlSelf->__Vdly__U_aximaster__DOT__aw_done = vlSelf->__PVT__U_aximaster__DOT__aw_done;
    if (vlSymsp->TOP__rtl_axi_probe.__PVT__rst) {
        vlSelf->__Vdly__ic_cpu_ren = 0U;
        vlSelf->__Vdly__dc_cpu_ren = 0U;
        vlSelf->__Vdly__dc_cpu_raddr = 0U;
        vlSelf->__PVT__dc2cpu_wresp = 0U;
        vlSelf->__PVT__U_dcache__DOT__read_addr_r = 0U;
        vlSelf->__PVT__U_dcache__DOT__ren_r = 0U;
    } else {
        if ((0U == (IData)(vlSelf->__PVT__U_icache__DOT__state))) {
            vlSelf->__Vdly__ic_cpu_ren = 0U;
        } else if ((1U == (IData)(vlSelf->__PVT__U_icache__DOT__state))) {
            vlSelf->__Vdly__ic_cpu_ren = ((IData)(vlSelf->__PVT__U_icache__DOT__hit)
                                           ? 0U : 0xfU);
        } else if ((3U == (IData)(vlSelf->__PVT__U_icache__DOT__state))) {
            if (((0U != (IData)(vlSelf->__PVT__ic_cpu_ren)) 
                 & (IData)(vlSelf->__PVT__ic_dev_rrdy))) {
                vlSelf->__Vdly__ic_cpu_ren = 0U;
            }
        } else {
            vlSelf->__Vdly__ic_cpu_ren = 0U;
        }
        if ((0U == (IData)(vlSelf->__PVT__U_dcache__DOT__r_state))) {
            vlSelf->__Vdly__dc_cpu_ren = 0U;
            if ((0U != (IData)(vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__daccess_ren))) {
                vlSelf->__Vdly__dc_cpu_raddr = vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_mem_alu_c;
                vlSelf->__PVT__U_dcache__DOT__read_addr_r 
                    = vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_mem_alu_c;
                vlSelf->__PVT__U_dcache__DOT__ren_r 
                    = vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__daccess_ren;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__U_dcache__DOT__r_state))) {
            vlSelf->__Vdly__dc_cpu_ren = ((IData)(vlSelf->__PVT__U_dcache__DOT__hit_r)
                                           ? 0U : (
                                                   (0xffffU 
                                                    == 
                                                    (vlSelf->__PVT__U_dcache__DOT__current_addr 
                                                     >> 0x10U))
                                                    ? (IData)(vlSelf->__PVT__U_dcache__DOT__ren_r)
                                                    : 0xfU));
            if ((1U & (~ (IData)(vlSelf->__PVT__U_dcache__DOT__hit_r)))) {
                vlSelf->__Vdly__dc_cpu_raddr = ((0xffffU 
                                                 == 
                                                 (vlSelf->__PVT__U_dcache__DOT__current_addr 
                                                  >> 0x10U))
                                                 ? vlSelf->__PVT__dc_cpu_raddr
                                                 : 
                                                (0xfffffff0U 
                                                 & vlSelf->__PVT__dc_cpu_raddr));
            }
        } else if ((3U == (IData)(vlSelf->__PVT__U_dcache__DOT__r_state))) {
            if (((0U != (IData)(vlSelf->__PVT__dc_cpu_ren)) 
                 & (IData)(vlSelf->__PVT__dc_dev_rrdy))) {
                vlSelf->__Vdly__dc_cpu_ren = 0U;
            }
        } else {
            vlSelf->__Vdly__dc_cpu_ren = 0U;
        }
        if ((0U == (IData)(vlSelf->__PVT__U_dcache__DOT__w_state))) {
            vlSelf->__PVT__dc2cpu_wresp = 0U;
        } else if ((1U != (IData)(vlSelf->__PVT__U_dcache__DOT__w_state))) {
            vlSelf->__PVT__dc2cpu_wresp = ((3U == (IData)(vlSelf->__PVT__U_dcache__DOT__w_state)) 
                                           && (IData)(vlSelf->__PVT__U_dcache__DOT__wr_resp));
        }
    }
}

VL_INLINE_OPT void Vrtl_axi_probe_cpu_top___nba_sequent__TOP__rtl_axi_probe__dut__2(Vrtl_axi_probe_cpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrtl_axi_probe_cpu_top___nba_sequent__TOP__rtl_axi_probe__dut__2\n"); );
    // Init
    CData/*7:0*/ __PVT__m_axi_awlen;
    __PVT__m_axi_awlen = 0;
    CData/*2:0*/ __PVT__m_axi_awsize;
    __PVT__m_axi_awsize = 0;
    CData/*1:0*/ __PVT__m_axi_awburst;
    __PVT__m_axi_awburst = 0;
    // Body
    if (vlSymsp->TOP__rtl_axi_probe.__PVT__rst) {
        vlSelf->__PVT__U_dcache__DOT__r_state = 0U;
        vlSelf->__Vdly__U_aximaster__DOT__aw_done = 0U;
        vlSelf->__Vdly__U_aximaster__DOT__w_done = 0U;
        vlSelf->__PVT__m_axi_awaddr = 0U;
        __PVT__m_axi_awlen = 0U;
        __PVT__m_axi_awsize = 2U;
        __PVT__m_axi_awburst = 1U;
        vlSelf->__PVT__m_axi_awvalid = 0U;
        vlSelf->__PVT__m_axi_wdata = 0U;
        vlSelf->__PVT__m_axi_wstrb = 0U;
        vlSelf->__PVT__m_axi_wvalid = 0U;
        vlSelf->__Vdly__m_axi_bready = 0U;
        vlSelf->__PVT__dc_cpu_wdata = 0U;
        vlSelf->__PVT__dc_cpu_wen = 0U;
        vlSelf->__PVT__dc_cpu_waddr = 0U;
        vlSelf->__PVT__U_dcache__DOT__wen_r = 0U;
        vlSelf->__PVT__U_aximaster__DOT__w_state = 0U;
        vlSelf->__PVT__U_dcache__DOT__w_state = 0U;
    } else {
        vlSelf->__PVT__U_dcache__DOT__r_state = vlSelf->__PVT__U_dcache__DOT__r_nstat;
        if ((0U == (IData)(vlSelf->__PVT__U_aximaster__DOT__w_state))) {
            vlSelf->__Vdly__U_aximaster__DOT__aw_done = 0U;
            vlSelf->__Vdly__U_aximaster__DOT__w_done = 0U;
            vlSelf->__PVT__m_axi_awvalid = 0U;
            vlSelf->__Vdly__m_axi_bready = 0U;
            vlSelf->__PVT__m_axi_wvalid = 0U;
            if ((0U != (IData)(vlSelf->__PVT__dc_cpu_wen))) {
                vlSelf->__PVT__m_axi_awaddr = (0xfffffffcU 
                                               & vlSelf->__PVT__dc_cpu_waddr);
                __PVT__m_axi_awlen = 0U;
                __PVT__m_axi_awsize = 2U;
                __PVT__m_axi_awburst = 1U;
                vlSelf->__PVT__m_axi_awvalid = 1U;
                vlSelf->__PVT__m_axi_wdata = vlSelf->__PVT__dc_cpu_wdata;
                vlSelf->__PVT__m_axi_wstrb = vlSelf->__PVT__dc_cpu_wen;
                vlSelf->__PVT__m_axi_wvalid = 1U;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__U_aximaster__DOT__w_state))) {
            if ((((IData)(vlSelf->__PVT__U_aximaster__DOT__aw_done) 
                  | (IData)(vlSelf->__PVT__U_aximaster__DOT__aw_fire)) 
                 & ((IData)(vlSelf->__PVT__U_aximaster__DOT__w_done) 
                    | (IData)(vlSelf->__PVT__U_aximaster__DOT__w_fire)))) {
                vlSelf->__Vdly__m_axi_bready = 1U;
            }
            if (vlSelf->__PVT__U_aximaster__DOT__aw_fire) {
                vlSelf->__PVT__m_axi_awvalid = 0U;
                vlSelf->__Vdly__U_aximaster__DOT__aw_done = 1U;
            }
            if (vlSelf->__PVT__U_aximaster__DOT__w_fire) {
                vlSelf->__PVT__m_axi_wvalid = 0U;
                vlSelf->__Vdly__U_aximaster__DOT__w_done = 1U;
            }
        } else if ((2U == (IData)(vlSelf->__PVT__U_aximaster__DOT__w_state))) {
            if (((IData)(vlSymsp->TOP__rtl_axi_probe.__PVT__bvalid) 
                 & (IData)(vlSelf->__PVT__m_axi_bready))) {
                vlSelf->__Vdly__m_axi_bready = 0U;
            }
        } else {
            vlSelf->__PVT__m_axi_awvalid = 0U;
            vlSelf->__PVT__m_axi_wvalid = 0U;
            vlSelf->__Vdly__m_axi_bready = 0U;
        }
        if ((0U == (IData)(vlSelf->__PVT__U_dcache__DOT__w_state))) {
            if ((0U != (IData)(vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__daccess_wen))) {
                vlSelf->__PVT__dc_cpu_wdata = vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__mem_da_wdata;
                if ((0U == (IData)(vlSelf->__PVT__U_aximaster__DOT__w_state))) {
                    vlSelf->__PVT__dc_cpu_wen = vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__daccess_wen;
                }
                vlSelf->__PVT__dc_cpu_waddr = vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_mem_alu_c;
                if ((0U != (IData)(vlSelf->__PVT__U_aximaster__DOT__w_state))) {
                    vlSelf->__PVT__U_dcache__DOT__wen_r 
                        = vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__daccess_wen;
                }
                vlSelf->__PVT__U_dcache__DOT__wen_r 
                    = vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__daccess_wen;
            } else {
                vlSelf->__PVT__dc_cpu_wen = 0U;
            }
        } else {
            vlSelf->__PVT__dc_cpu_wen = ((1U == (IData)(vlSelf->__PVT__U_dcache__DOT__w_state))
                                          ? ((0U == (IData)(vlSelf->__PVT__U_aximaster__DOT__w_state))
                                              ? (IData)(vlSelf->__PVT__U_dcache__DOT__wen_r)
                                              : 0U)
                                          : 0U);
        }
        vlSelf->__PVT__U_aximaster__DOT__w_state = vlSelf->__PVT__U_aximaster__DOT__w_next;
        vlSelf->__PVT__U_dcache__DOT__w_state = vlSelf->__PVT__U_dcache__DOT__w_nstat;
    }
    vlSelf->__PVT__U_aximaster__DOT__aw_done = vlSelf->__Vdly__U_aximaster__DOT__aw_done;
    vlSelf->__PVT__U_aximaster__DOT__w_done = vlSelf->__Vdly__U_aximaster__DOT__w_done;
    vlSelf->__PVT__m_axi_bready = vlSelf->__Vdly__m_axi_bready;
    vlSelf->__PVT__U_aximaster__DOT__aw_fire = vlSelf->__PVT__m_axi_awvalid;
    vlSelf->__PVT__U_aximaster__DOT__w_fire = vlSelf->__PVT__m_axi_wvalid;
    vlSelf->__PVT__U_dcache__DOT__wr_resp = ((0U == (IData)(vlSelf->__PVT__U_aximaster__DOT__w_state)) 
                                             & (0U 
                                                == (IData)(vlSelf->__PVT__dc_cpu_wen)));
}

extern const VlUnpacked<CData/*1:0*/, 512> Vrtl_axi_probe__ConstPool__TABLE_h49a5d49c_0;

VL_INLINE_OPT void Vrtl_axi_probe_cpu_top___nba_sequent__TOP__rtl_axi_probe__dut__3(Vrtl_axi_probe_cpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrtl_axi_probe_cpu_top___nba_sequent__TOP__rtl_axi_probe__dut__3\n"); );
    // Init
    CData/*2:0*/ __PVT__m_axi_arsize;
    __PVT__m_axi_arsize = 0;
    CData/*1:0*/ __PVT__m_axi_arburst;
    __PVT__m_axi_arburst = 0;
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->__PVT__U_dcache__DOT__current_addr = ((0U 
                                                   != (IData)(vlSelf->__PVT__U_dcache__DOT__w_state))
                                                   ? vlSelf->__PVT__dc_cpu_waddr
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->__PVT__U_dcache__DOT__r_state))
                                                    ? vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__ex_mem_alu_c
                                                    : vlSelf->__PVT__U_dcache__DOT__read_addr_r));
    __Vtableidx2 = ((((IData)(vlSelf->__PVT__U_dcache__DOT__wr_resp)
                       ? 0U : 3U) << 7U) | (((0U == (IData)(vlSelf->__PVT__U_aximaster__DOT__w_state)) 
                                             << 6U) 
                                            | (((IData)(vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__daccess_wen) 
                                                << 2U) 
                                               | (IData)(vlSelf->__PVT__U_dcache__DOT__w_state))));
    vlSelf->__PVT__U_dcache__DOT__w_nstat = Vrtl_axi_probe__ConstPool__TABLE_h49a5d49c_0
        [__Vtableidx2];
    if (vlSymsp->TOP__rtl_axi_probe.__PVT__rst) {
        vlSelf->__Vdly__U_aximaster__DOT__read_from_dc = 0U;
        vlSelf->__Vdly__U_aximaster__DOT__read_turn_dc = 0U;
        vlSelf->__Vdly__U_aximaster__DOT__read_beat = 0U;
        vlSelf->__PVT__ic_dev_rvalid = 0U;
        vlSelf->__PVT__ic_dev_rdata[0U] = 0U;
        vlSelf->__PVT__ic_dev_rdata[1U] = 0U;
        vlSelf->__PVT__ic_dev_rdata[2U] = 0U;
        vlSelf->__PVT__ic_dev_rdata[3U] = 0U;
        vlSelf->__PVT__dc_dev_rvalid = 0U;
        vlSelf->__PVT__dc_dev_rdata[0U] = 0U;
        vlSelf->__PVT__dc_dev_rdata[1U] = 0U;
        vlSelf->__PVT__dc_dev_rdata[2U] = 0U;
        vlSelf->__PVT__dc_dev_rdata[3U] = 0U;
        vlSelf->__PVT__m_axi_araddr = 0U;
        vlSelf->__PVT__m_axi_arlen = 0U;
        __PVT__m_axi_arsize = 2U;
        __PVT__m_axi_arburst = 1U;
        vlSelf->__PVT__m_axi_arvalid = 0U;
        vlSelf->__Vdly__m_axi_rready = 0U;
        vlSelf->__PVT__U_aximaster__DOT__r_state = 0U;
        vlSelf->__PVT__ic_cpu_raddr = 0U;
        vlSelf->__PVT__U_icache__DOT__state = 0U;
    } else {
        vlSelf->__PVT__ic_dev_rvalid = 0U;
        vlSelf->__PVT__dc_dev_rvalid = 0U;
        if ((0U == (IData)(vlSelf->__PVT__U_aximaster__DOT__r_state))) {
            vlSelf->__PVT__m_axi_arvalid = 0U;
            vlSelf->__Vdly__m_axi_rready = 0U;
            vlSelf->__Vdly__U_aximaster__DOT__read_beat = 0U;
            if ((0U != (IData)(vlSelf->__PVT__dc_cpu_ren))) {
                vlSelf->__Vdly__U_aximaster__DOT__read_from_dc = 1U;
                vlSelf->__Vdly__U_aximaster__DOT__read_turn_dc = 0U;
                if ((0xffffU != (vlSelf->__PVT__dc_cpu_raddr 
                                 >> 0x10U))) {
                    vlSelf->__PVT__m_axi_araddr = (0xfffffff0U 
                                                   & vlSelf->__PVT__dc_cpu_raddr);
                    vlSelf->__PVT__m_axi_arlen = 3U;
                } else {
                    vlSelf->__PVT__m_axi_araddr = (0xfffffffcU 
                                                   & vlSelf->__PVT__dc_cpu_raddr);
                    vlSelf->__PVT__m_axi_arlen = 0U;
                }
                __PVT__m_axi_arsize = 2U;
                __PVT__m_axi_arburst = 1U;
                vlSelf->__PVT__m_axi_arvalid = 1U;
                vlSelf->__PVT__dc_dev_rdata[0U] = 0U;
                vlSelf->__PVT__dc_dev_rdata[1U] = 0U;
                vlSelf->__PVT__dc_dev_rdata[2U] = 0U;
                vlSelf->__PVT__dc_dev_rdata[3U] = 0U;
            } else if ((0U != (IData)(vlSelf->__PVT__ic_cpu_ren))) {
                vlSelf->__Vdly__U_aximaster__DOT__read_from_dc = 0U;
                vlSelf->__Vdly__U_aximaster__DOT__read_turn_dc = 1U;
                vlSelf->__PVT__m_axi_araddr = (0xfffffff0U 
                                               & vlSelf->__PVT__ic_cpu_raddr);
                vlSelf->__PVT__m_axi_arlen = 3U;
                __PVT__m_axi_arsize = 2U;
                __PVT__m_axi_arburst = 1U;
                vlSelf->__PVT__m_axi_arvalid = 1U;
                vlSelf->__PVT__ic_dev_rdata[0U] = 0U;
                vlSelf->__PVT__ic_dev_rdata[1U] = 0U;
                vlSelf->__PVT__ic_dev_rdata[2U] = 0U;
                vlSelf->__PVT__ic_dev_rdata[3U] = 0U;
            } else {
                vlSelf->__Vdly__U_aximaster__DOT__read_turn_dc 
                    = (1U & (~ (IData)(vlSelf->__PVT__U_aximaster__DOT__read_turn_dc)));
            }
        } else if ((1U == (IData)(vlSelf->__PVT__U_aximaster__DOT__r_state))) {
            vlSelf->__PVT__m_axi_arvalid = 0U;
            vlSelf->__Vdly__m_axi_rready = 1U;
        } else if ((2U == (IData)(vlSelf->__PVT__U_aximaster__DOT__r_state))) {
            if (((IData)(vlSymsp->TOP__rtl_axi_probe.__PVT__rvalid) 
                 & (IData)(vlSelf->__PVT__m_axi_rready))) {
                if (vlSelf->__PVT__U_aximaster__DOT__read_from_dc) {
                    VL_ASSIGNSEL_WI(128,32,(0x7fU & 
                                            VL_SHIFTL_III(7,32,32, (IData)(vlSelf->__PVT__U_aximaster__DOT__read_beat), 5U)), vlSelf->__PVT__dc_dev_rdata, vlSymsp->TOP__rtl_axi_probe.__PVT__rdata);
                } else {
                    VL_ASSIGNSEL_WI(128,32,(0x7fU & 
                                            VL_SHIFTL_III(7,32,32, (IData)(vlSelf->__PVT__U_aximaster__DOT__read_beat), 5U)), vlSelf->__PVT__ic_dev_rdata, vlSymsp->TOP__rtl_axi_probe.__PVT__rdata);
                }
                if (vlSelf->__PVT__U_aximaster__DOT__read_last) {
                    vlSelf->__Vdly__m_axi_rready = 0U;
                    if (vlSelf->__PVT__U_aximaster__DOT__read_from_dc) {
                        vlSelf->__PVT__dc_dev_rvalid = 1U;
                    } else {
                        vlSelf->__PVT__ic_dev_rvalid = 1U;
                    }
                } else {
                    vlSelf->__Vdly__U_aximaster__DOT__read_beat 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__U_aximaster__DOT__read_beat)));
                }
            }
        } else {
            vlSelf->__PVT__m_axi_arvalid = 0U;
            vlSelf->__Vdly__m_axi_rready = 0U;
        }
        vlSelf->__PVT__U_aximaster__DOT__r_state = vlSelf->__PVT__U_aximaster__DOT__r_next;
        if ((0U != (IData)(vlSelf->__PVT__U_icache__DOT__state))) {
            if ((1U == (IData)(vlSelf->__PVT__U_icache__DOT__state))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__U_icache__DOT__hit)))) {
                    vlSelf->__PVT__ic_cpu_raddr = (0xfffffff0U 
                                                   & vlSymsp->TOP__rtl_axi_probe__dut__U_core.ifetch_addr);
                }
            }
        }
        vlSelf->__PVT__U_icache__DOT__state = vlSelf->__PVT__U_icache__DOT__nstat;
    }
    vlSelf->__PVT__U_aximaster__DOT__read_from_dc = vlSelf->__Vdly__U_aximaster__DOT__read_from_dc;
    vlSelf->__PVT__dc_cpu_raddr = vlSelf->__Vdly__dc_cpu_raddr;
    vlSelf->__PVT__m_axi_rready = vlSelf->__Vdly__m_axi_rready;
    vlSelf->__PVT__U_aximaster__DOT__read_turn_dc = vlSelf->__Vdly__U_aximaster__DOT__read_turn_dc;
    vlSelf->__PVT__U_aximaster__DOT__read_beat = vlSelf->__Vdly__U_aximaster__DOT__read_beat;
    vlSelf->__PVT__dc_cpu_ren = vlSelf->__Vdly__dc_cpu_ren;
    vlSelf->__PVT__ic_cpu_ren = vlSelf->__Vdly__ic_cpu_ren;
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
}

extern const VlUnpacked<CData/*1:0*/, 256> Vrtl_axi_probe__ConstPool__TABLE_h71331e0b_0;
extern const VlUnpacked<CData/*1:0*/, 512> Vrtl_axi_probe__ConstPool__TABLE_h4af120c4_0;

VL_INLINE_OPT void Vrtl_axi_probe_cpu_top___nba_comb__TOP__rtl_axi_probe__dut__0(Vrtl_axi_probe_cpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrtl_axi_probe_cpu_top___nba_comb__TOP__rtl_axi_probe__dut__0\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
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
    vlSelf->U_dcache__DOT____VdfgTmp_h27345ae1__0 = 
        (((0x1fU & vlSelf->__PVT__U_dcache__DOT__cache_line_r[4U]) 
          == (0x1fU & (vlSelf->__PVT__U_dcache__DOT__current_addr 
                       >> 0xaU))) & ((0xffffU != (vlSelf->__PVT__U_dcache__DOT__current_addr 
                                                  >> 0x10U)) 
                                     & (vlSelf->__PVT__U_dcache__DOT__cache_line_r[4U] 
                                        >> 5U)));
    vlSelf->__PVT__U_aximaster__DOT__read_last = ((IData)(vlSymsp->TOP__rtl_axi_probe.__PVT__rlast) 
                                                  | ((IData)(vlSelf->__PVT__U_aximaster__DOT__read_beat) 
                                                     == (IData)(vlSelf->__PVT__m_axi_arlen)));
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
    vlSelf->__PVT__U_icache__DOT__hit = (((0x1fU & 
                                           vlSelf->__PVT__U_icache__DOT__cache_line_r[4U]) 
                                          == (0x1fU 
                                              & (vlSymsp->TOP__rtl_axi_probe__dut__U_core.ifetch_addr 
                                                 >> 0xaU))) 
                                         & (vlSelf->__PVT__U_icache__DOT__cache_line_r[4U] 
                                            >> 5U));
    vlSelf->__PVT__U_dcache__DOT__hit_r = ((IData)(vlSelf->U_dcache__DOT____VdfgTmp_h27345ae1__0) 
                                           & (1U == (IData)(vlSelf->__PVT__U_dcache__DOT__r_state)));
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
    vlSymsp->TOP__rtl_axi_probe__dut__U_core.ifetch_valid 
        = (((1U == (IData)(vlSelf->__PVT__U_icache__DOT__state)) 
            & (IData)(vlSelf->__PVT__U_icache__DOT__hit)) 
           || (((3U == (IData)(vlSelf->__PVT__U_icache__DOT__state)) 
                & (IData)(vlSelf->__PVT__ic_dev_rvalid)) 
               & ((vlSelf->__PVT__ic_cpu_raddr >> 4U) 
                  == (vlSymsp->TOP__rtl_axi_probe__dut__U_core.ifetch_addr 
                      >> 4U))));
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
    __Vtableidx1 = (((IData)(vlSelf->__PVT__dc_dev_rvalid) 
                     << 8U) | ((((IData)(vlSelf->__PVT__U_dcache__DOT__hit_r)
                                  ? 0U : 3U) << 6U) 
                               | (((IData)(vlSymsp->TOP__rtl_axi_probe__dut__U_core.__PVT__daccess_ren) 
                                   << 2U) | (IData)(vlSelf->__PVT__U_dcache__DOT__r_state))));
    vlSelf->__PVT__U_dcache__DOT__r_nstat = Vrtl_axi_probe__ConstPool__TABLE_h4af120c4_0
        [__Vtableidx1];
    vlSelf->__PVT__dc2cpu_valid = ((IData)(vlSelf->__PVT__U_dcache__DOT__hit_r) 
                                   | ((3U == (IData)(vlSelf->__PVT__U_dcache__DOT__r_state)) 
                                      & (IData)(vlSelf->__PVT__dc_dev_rvalid)));
}

VL_INLINE_OPT void Vrtl_axi_probe_cpu_top___nba_sequent__TOP__rtl_axi_probe__dut__5(Vrtl_axi_probe_cpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrtl_axi_probe_cpu_top___nba_sequent__TOP__rtl_axi_probe__dut__5\n"); );
    // Body
    vlSelf->__PVT__U_icache__DOT__cache_index = (0x3fU 
                                                 & ((3U 
                                                     == (IData)(vlSelf->__PVT__U_icache__DOT__state))
                                                     ? 
                                                    (vlSelf->__PVT__ic_cpu_raddr 
                                                     >> 4U)
                                                     : 
                                                    (vlSymsp->TOP__rtl_axi_probe__dut__U_core.ifetch_addr 
                                                     >> 4U)));
}
