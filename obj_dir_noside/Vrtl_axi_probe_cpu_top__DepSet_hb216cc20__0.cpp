// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtl_axi_probe.h for the primary calling header

#include "Vrtl_axi_probe__pch.h"
#include "Vrtl_axi_probe_cpu_top.h"

VL_INLINE_OPT void Vrtl_axi_probe_cpu_top___nba_sequent__TOP__rtl_axi_probe__dut__1(Vrtl_axi_probe_cpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrtl_axi_probe_cpu_top___nba_sequent__TOP__rtl_axi_probe__dut__1\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__U_dcache__DOT__U_dsram__DOT__mem__v0;
    __Vdlyvdim0__U_dcache__DOT__U_dsram__DOT__mem__v0 = 0;
    VlWide<5>/*133:0*/ __Vdlyvval__U_dcache__DOT__U_dsram__DOT__mem__v0;
    VL_ZERO_W(134, __Vdlyvval__U_dcache__DOT__U_dsram__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__U_dcache__DOT__U_dsram__DOT__mem__v0;
    __Vdlyvset__U_dcache__DOT__U_dsram__DOT__mem__v0 = 0;
    // Body
    vlSelf->__Vdlyvset__U_icache__DOT__U_isram__DOT__mem__v0 = 0U;
    __Vdlyvset__U_dcache__DOT__U_dsram__DOT__mem__v0 = 0U;
    if (((3U == (IData)(vlSelf->__PVT__U_icache__DOT__state)) 
         & (IData)(vlSelf->__PVT__ic_dev_rvalid))) {
        vlSelf->__Vdlyvval__U_icache__DOT__U_isram__DOT__mem__v0[0U] 
            = vlSelf->__PVT__ic_dev_rdata[0U];
        vlSelf->__Vdlyvval__U_icache__DOT__U_isram__DOT__mem__v0[1U] 
            = vlSelf->__PVT__ic_dev_rdata[1U];
        vlSelf->__Vdlyvval__U_icache__DOT__U_isram__DOT__mem__v0[2U] 
            = vlSelf->__PVT__ic_dev_rdata[2U];
        vlSelf->__Vdlyvval__U_icache__DOT__U_isram__DOT__mem__v0[3U] 
            = vlSelf->__PVT__ic_dev_rdata[3U];
        vlSelf->__Vdlyvval__U_icache__DOT__U_isram__DOT__mem__v0[4U] 
            = (0x20U | (0x1fU & (vlSelf->__PVT__ic_cpu_raddr 
                                 >> 0xaU)));
        vlSelf->__Vdlyvset__U_icache__DOT__U_isram__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__U_icache__DOT__U_isram__DOT__mem__v0 
            = vlSelf->__PVT__U_icache__DOT__cache_index;
    }
    if ((((3U == (IData)(vlSelf->__PVT__U_dcache__DOT__r_state)) 
          & ((0xffffU != (vlSelf->__PVT__U_dcache__DOT__current_addr 
                          >> 0x10U)) & (IData)(vlSelf->__PVT__dc_dev_rvalid))) 
         | ((3U == (IData)(vlSelf->__PVT__U_dcache__DOT__w_state)) 
            & ((IData)(vlSelf->__PVT__U_dcache__DOT__wr_resp) 
               & ((IData)(vlSelf->U_dcache__DOT____VdfgTmp_h27345ae1__0) 
                  & (0U != (IData)(vlSelf->__PVT__U_dcache__DOT__w_state))))))) {
        if ((3U == (IData)(vlSelf->__PVT__U_dcache__DOT__r_state))) {
            __Vdlyvval__U_dcache__DOT__U_dsram__DOT__mem__v0[0U] 
                = vlSelf->__PVT__dc_dev_rdata[0U];
            __Vdlyvval__U_dcache__DOT__U_dsram__DOT__mem__v0[1U] 
                = vlSelf->__PVT__dc_dev_rdata[1U];
            __Vdlyvval__U_dcache__DOT__U_dsram__DOT__mem__v0[2U] 
                = vlSelf->__PVT__dc_dev_rdata[2U];
            __Vdlyvval__U_dcache__DOT__U_dsram__DOT__mem__v0[3U] 
                = vlSelf->__PVT__dc_dev_rdata[3U];
            __Vdlyvval__U_dcache__DOT__U_dsram__DOT__mem__v0[4U] 
                = (0x20U | (0x1fU & (vlSelf->__PVT__U_dcache__DOT__current_addr 
                                     >> 0xaU)));
        } else {
            __Vdlyvval__U_dcache__DOT__U_dsram__DOT__mem__v0[0U] 
                = vlSelf->__PVT__U_dcache__DOT__wr_cache_data[0U];
            __Vdlyvval__U_dcache__DOT__U_dsram__DOT__mem__v0[1U] 
                = vlSelf->__PVT__U_dcache__DOT__wr_cache_data[1U];
            __Vdlyvval__U_dcache__DOT__U_dsram__DOT__mem__v0[2U] 
                = vlSelf->__PVT__U_dcache__DOT__wr_cache_data[2U];
            __Vdlyvval__U_dcache__DOT__U_dsram__DOT__mem__v0[3U] 
                = vlSelf->__PVT__U_dcache__DOT__wr_cache_data[3U];
            __Vdlyvval__U_dcache__DOT__U_dsram__DOT__mem__v0[4U] 
                = (0x20U | (0x1fU & (vlSelf->__PVT__U_dcache__DOT__current_addr 
                                     >> 0xaU)));
        }
        __Vdlyvset__U_dcache__DOT__U_dsram__DOT__mem__v0 = 1U;
        __Vdlyvdim0__U_dcache__DOT__U_dsram__DOT__mem__v0 
            = (0x3fU & (vlSelf->__PVT__U_dcache__DOT__current_addr 
                        >> 4U));
    }
    vlSelf->__PVT__U_dcache__DOT__cache_line_r[0U] 
        = vlSelf->__PVT__U_dcache__DOT__U_dsram__DOT__mem
        [(0x3fU & (vlSelf->__PVT__U_dcache__DOT__current_addr 
                   >> 4U))][0U];
    vlSelf->__PVT__U_dcache__DOT__cache_line_r[1U] 
        = vlSelf->__PVT__U_dcache__DOT__U_dsram__DOT__mem
        [(0x3fU & (vlSelf->__PVT__U_dcache__DOT__current_addr 
                   >> 4U))][1U];
    vlSelf->__PVT__U_dcache__DOT__cache_line_r[2U] 
        = vlSelf->__PVT__U_dcache__DOT__U_dsram__DOT__mem
        [(0x3fU & (vlSelf->__PVT__U_dcache__DOT__current_addr 
                   >> 4U))][2U];
    vlSelf->__PVT__U_dcache__DOT__cache_line_r[3U] 
        = vlSelf->__PVT__U_dcache__DOT__U_dsram__DOT__mem
        [(0x3fU & (vlSelf->__PVT__U_dcache__DOT__current_addr 
                   >> 4U))][3U];
    vlSelf->__PVT__U_dcache__DOT__cache_line_r[4U] 
        = vlSelf->__PVT__U_dcache__DOT__U_dsram__DOT__mem
        [(0x3fU & (vlSelf->__PVT__U_dcache__DOT__current_addr 
                   >> 4U))][4U];
    if (__Vdlyvset__U_dcache__DOT__U_dsram__DOT__mem__v0) {
        vlSelf->__PVT__U_dcache__DOT__U_dsram__DOT__mem[__Vdlyvdim0__U_dcache__DOT__U_dsram__DOT__mem__v0][0U] 
            = __Vdlyvval__U_dcache__DOT__U_dsram__DOT__mem__v0[0U];
        vlSelf->__PVT__U_dcache__DOT__U_dsram__DOT__mem[__Vdlyvdim0__U_dcache__DOT__U_dsram__DOT__mem__v0][1U] 
            = __Vdlyvval__U_dcache__DOT__U_dsram__DOT__mem__v0[1U];
        vlSelf->__PVT__U_dcache__DOT__U_dsram__DOT__mem[__Vdlyvdim0__U_dcache__DOT__U_dsram__DOT__mem__v0][2U] 
            = __Vdlyvval__U_dcache__DOT__U_dsram__DOT__mem__v0[2U];
        vlSelf->__PVT__U_dcache__DOT__U_dsram__DOT__mem[__Vdlyvdim0__U_dcache__DOT__U_dsram__DOT__mem__v0][3U] 
            = __Vdlyvval__U_dcache__DOT__U_dsram__DOT__mem__v0[3U];
        vlSelf->__PVT__U_dcache__DOT__U_dsram__DOT__mem[__Vdlyvdim0__U_dcache__DOT__U_dsram__DOT__mem__v0][4U] 
            = __Vdlyvval__U_dcache__DOT__U_dsram__DOT__mem__v0[4U];
    }
}

VL_INLINE_OPT void Vrtl_axi_probe_cpu_top___nba_sequent__TOP__rtl_axi_probe__dut__4(Vrtl_axi_probe_cpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrtl_axi_probe_cpu_top___nba_sequent__TOP__rtl_axi_probe__dut__4\n"); );
    // Body
    vlSelf->__PVT__U_icache__DOT__cache_line_r[0U] 
        = vlSelf->__PVT__U_icache__DOT__U_isram__DOT__mem
        [vlSelf->__PVT__U_icache__DOT__cache_index][0U];
    vlSelf->__PVT__U_icache__DOT__cache_line_r[1U] 
        = vlSelf->__PVT__U_icache__DOT__U_isram__DOT__mem
        [vlSelf->__PVT__U_icache__DOT__cache_index][1U];
    vlSelf->__PVT__U_icache__DOT__cache_line_r[2U] 
        = vlSelf->__PVT__U_icache__DOT__U_isram__DOT__mem
        [vlSelf->__PVT__U_icache__DOT__cache_index][2U];
    vlSelf->__PVT__U_icache__DOT__cache_line_r[3U] 
        = vlSelf->__PVT__U_icache__DOT__U_isram__DOT__mem
        [vlSelf->__PVT__U_icache__DOT__cache_index][3U];
    vlSelf->__PVT__U_icache__DOT__cache_line_r[4U] 
        = vlSelf->__PVT__U_icache__DOT__U_isram__DOT__mem
        [vlSelf->__PVT__U_icache__DOT__cache_index][4U];
    if (vlSelf->__Vdlyvset__U_icache__DOT__U_isram__DOT__mem__v0) {
        vlSelf->__PVT__U_icache__DOT__U_isram__DOT__mem[vlSelf->__Vdlyvdim0__U_icache__DOT__U_isram__DOT__mem__v0][0U] 
            = vlSelf->__Vdlyvval__U_icache__DOT__U_isram__DOT__mem__v0[0U];
        vlSelf->__PVT__U_icache__DOT__U_isram__DOT__mem[vlSelf->__Vdlyvdim0__U_icache__DOT__U_isram__DOT__mem__v0][1U] 
            = vlSelf->__Vdlyvval__U_icache__DOT__U_isram__DOT__mem__v0[1U];
        vlSelf->__PVT__U_icache__DOT__U_isram__DOT__mem[vlSelf->__Vdlyvdim0__U_icache__DOT__U_isram__DOT__mem__v0][2U] 
            = vlSelf->__Vdlyvval__U_icache__DOT__U_isram__DOT__mem__v0[2U];
        vlSelf->__PVT__U_icache__DOT__U_isram__DOT__mem[vlSelf->__Vdlyvdim0__U_icache__DOT__U_isram__DOT__mem__v0][3U] 
            = vlSelf->__Vdlyvval__U_icache__DOT__U_isram__DOT__mem__v0[3U];
        vlSelf->__PVT__U_icache__DOT__U_isram__DOT__mem[vlSelf->__Vdlyvdim0__U_icache__DOT__U_isram__DOT__mem__v0][4U] 
            = vlSelf->__Vdlyvval__U_icache__DOT__U_isram__DOT__mem__v0[4U];
    }
}
