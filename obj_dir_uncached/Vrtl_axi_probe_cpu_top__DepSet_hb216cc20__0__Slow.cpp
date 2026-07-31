// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtl_axi_probe.h for the primary calling header

#include "Vrtl_axi_probe__pch.h"
#include "Vrtl_axi_probe_cpu_top.h"

VL_ATTR_COLD void Vrtl_axi_probe_cpu_top___ctor_var_reset(Vrtl_axi_probe_cpu_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrtl_axi_probe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrtl_axi_probe_cpu_top___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__cpu_clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cpu_rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m_axi_awaddr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__m_axi_awlen = VL_RAND_RESET_I(8);
    vlSelf->__PVT__m_axi_awsize = VL_RAND_RESET_I(3);
    vlSelf->__PVT__m_axi_awburst = VL_RAND_RESET_I(2);
    vlSelf->__PVT__m_axi_awready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m_axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m_axi_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__m_axi_wready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m_axi_wstrb = VL_RAND_RESET_I(4);
    vlSelf->__PVT__m_axi_wlast = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m_axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m_axi_bready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m_axi_bresp = VL_RAND_RESET_I(2);
    vlSelf->__PVT__m_axi_bvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m_axi_araddr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__m_axi_arlen = VL_RAND_RESET_I(8);
    vlSelf->__PVT__m_axi_arsize = VL_RAND_RESET_I(3);
    vlSelf->__PVT__m_axi_arburst = VL_RAND_RESET_I(2);
    vlSelf->__PVT__m_axi_arready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m_axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m_axi_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__m_axi_rready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m_axi_rresp = VL_RAND_RESET_I(2);
    vlSelf->__PVT__m_axi_rlast = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m_axi_rvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dc2cpu_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dc2cpu_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dc2cpu_wresp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ic_dev_rrdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ic_cpu_ren = VL_RAND_RESET_I(4);
    vlSelf->__PVT__ic_cpu_raddr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ic_dev_rvalid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ic_dev_rdata);
    vlSelf->__PVT__dc_cpu_wen = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dc_cpu_waddr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dc_cpu_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dc_dev_rrdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dc_cpu_ren = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dc_cpu_raddr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dc_dev_rvalid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->__PVT__dc_dev_rdata);
    vlSelf->__PVT__U_dcache__DOT__r_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__U_dcache__DOT__r_nstat = VL_RAND_RESET_I(2);
    vlSelf->__PVT__U_dcache__DOT__ren_r = VL_RAND_RESET_I(4);
    vlSelf->__PVT__U_dcache__DOT__read_addr_r = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(134, vlSelf->__PVT__U_dcache__DOT__cache_line_r);
    vlSelf->__PVT__U_dcache__DOT__w_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__U_dcache__DOT__w_nstat = VL_RAND_RESET_I(2);
    vlSelf->__PVT__U_dcache__DOT__wen_r = VL_RAND_RESET_I(4);
    vlSelf->__PVT__U_dcache__DOT__wr_resp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__U_dcache__DOT__current_addr = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__U_dcache__DOT__tag_hi[__Vi0] = VL_RAND_RESET_I(17);
    }
    vlSelf->__PVT__U_dcache__DOT__hit_r = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->__PVT__U_dcache__DOT__wr_cache_data);
    vlSelf->__PVT__U_dcache__DOT__cache_we = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_RAND_RESET_W(134, vlSelf->__PVT__U_dcache__DOT__U_dsram__DOT__mem[__Vi0]);
    }
    VL_RAND_RESET_W(134, vlSelf->__PVT__U_icache__DOT__cache_line_r);
    vlSelf->__PVT__U_icache__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__U_icache__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__U_icache__DOT__nstat = VL_RAND_RESET_I(2);
    vlSelf->__PVT__U_icache__DOT__cache_index = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_RAND_RESET_W(134, vlSelf->__PVT__U_icache__DOT__U_isram__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__U_aximaster__DOT__r_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__U_aximaster__DOT__r_next = VL_RAND_RESET_I(2);
    vlSelf->__PVT__U_aximaster__DOT__w_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__U_aximaster__DOT__w_next = VL_RAND_RESET_I(2);
    vlSelf->__PVT__U_aximaster__DOT__read_from_dc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__U_aximaster__DOT__read_turn_dc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__U_aximaster__DOT__read_beat = VL_RAND_RESET_I(8);
    vlSelf->__PVT__U_aximaster__DOT__aw_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__U_aximaster__DOT__w_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__U_aximaster__DOT__read_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__U_aximaster__DOT__aw_fire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__U_aximaster__DOT__w_fire = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__dc_cpu_ren = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__dc_cpu_raddr = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ic_cpu_ren = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__U_aximaster__DOT__read_from_dc = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__U_aximaster__DOT__read_turn_dc = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__U_aximaster__DOT__read_beat = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__m_axi_rready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__U_aximaster__DOT__aw_done = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__U_aximaster__DOT__w_done = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__m_axi_bready = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__U_icache__DOT__U_isram__DOT__mem__v0 = 0;
    VL_RAND_RESET_W(134, vlSelf->__Vdlyvval__U_icache__DOT__U_isram__DOT__mem__v0);
    vlSelf->__Vdlyvset__U_icache__DOT__U_isram__DOT__mem__v0 = 0;
}
