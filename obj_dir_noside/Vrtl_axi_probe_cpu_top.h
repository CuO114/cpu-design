// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtl_axi_probe.h for the primary calling header

#ifndef VERILATED_VRTL_AXI_PROBE_CPU_TOP_H_
#define VERILATED_VRTL_AXI_PROBE_CPU_TOP_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vrtl_axi_probe_cpu_core;


class Vrtl_axi_probe__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtl_axi_probe_cpu_top final : public VerilatedModule {
  public:
    // CELLS
    Vrtl_axi_probe_cpu_core* U_core;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__cpu_clk,0,0);
        VL_IN8(__PVT__cpu_rst,0,0);
        VL_OUT8(__PVT__m_axi_awlen,7,0);
        VL_OUT8(__PVT__m_axi_awsize,2,0);
        VL_OUT8(__PVT__m_axi_awburst,1,0);
        VL_IN8(__PVT__m_axi_awready,0,0);
        VL_OUT8(__PVT__m_axi_awvalid,0,0);
        VL_IN8(__PVT__m_axi_wready,0,0);
        VL_OUT8(__PVT__m_axi_wstrb,3,0);
        VL_OUT8(__PVT__m_axi_wlast,0,0);
        VL_OUT8(__PVT__m_axi_wvalid,0,0);
        VL_OUT8(__PVT__m_axi_bready,0,0);
        VL_IN8(__PVT__m_axi_bresp,1,0);
        VL_IN8(__PVT__m_axi_bvalid,0,0);
        VL_OUT8(__PVT__m_axi_arlen,7,0);
        VL_OUT8(__PVT__m_axi_arsize,2,0);
        VL_OUT8(__PVT__m_axi_arburst,1,0);
        VL_IN8(__PVT__m_axi_arready,0,0);
        VL_OUT8(__PVT__m_axi_arvalid,0,0);
        VL_OUT8(__PVT__m_axi_rready,0,0);
        VL_IN8(__PVT__m_axi_rresp,1,0);
        VL_IN8(__PVT__m_axi_rlast,0,0);
        VL_IN8(__PVT__m_axi_rvalid,0,0);
        CData/*0:0*/ __PVT__dc2cpu_valid;
        CData/*0:0*/ __PVT__dc2cpu_wresp;
        CData/*0:0*/ __PVT__ic_dev_rrdy;
        CData/*3:0*/ __PVT__ic_cpu_ren;
        CData/*0:0*/ __PVT__ic_dev_rvalid;
        CData/*3:0*/ __PVT__dc_cpu_wen;
        CData/*0:0*/ __PVT__dc_dev_rrdy;
        CData/*3:0*/ __PVT__dc_cpu_ren;
        CData/*0:0*/ __PVT__dc_dev_rvalid;
        CData/*1:0*/ __PVT__U_dcache__DOT__r_state;
        CData/*1:0*/ __PVT__U_dcache__DOT__r_nstat;
        CData/*3:0*/ __PVT__U_dcache__DOT__ren_r;
        CData/*1:0*/ __PVT__U_dcache__DOT__w_state;
        CData/*1:0*/ __PVT__U_dcache__DOT__w_nstat;
        CData/*3:0*/ __PVT__U_dcache__DOT__wen_r;
        CData/*0:0*/ __PVT__U_dcache__DOT__wr_resp;
        CData/*0:0*/ __PVT__U_dcache__DOT__hit_r;
        CData/*0:0*/ U_dcache__DOT____VdfgTmp_h27345ae1__0;
        CData/*1:0*/ __PVT__U_icache__DOT__state;
        CData/*1:0*/ __PVT__U_icache__DOT__nstat;
        CData/*5:0*/ __PVT__U_icache__DOT__cache_index;
        CData/*0:0*/ __PVT__U_icache__DOT__hit;
        CData/*1:0*/ __PVT__U_aximaster__DOT__r_state;
        CData/*1:0*/ __PVT__U_aximaster__DOT__r_next;
        CData/*1:0*/ __PVT__U_aximaster__DOT__w_state;
        CData/*1:0*/ __PVT__U_aximaster__DOT__w_next;
        CData/*0:0*/ __PVT__U_aximaster__DOT__read_from_dc;
        CData/*0:0*/ __PVT__U_aximaster__DOT__read_turn_dc;
        CData/*7:0*/ __PVT__U_aximaster__DOT__read_beat;
        CData/*0:0*/ __PVT__U_aximaster__DOT__aw_done;
        CData/*0:0*/ __PVT__U_aximaster__DOT__w_done;
        CData/*0:0*/ __PVT__U_aximaster__DOT__read_last;
        CData/*0:0*/ __PVT__U_aximaster__DOT__aw_fire;
        CData/*0:0*/ __PVT__U_aximaster__DOT__w_fire;
        CData/*3:0*/ __Vdly__dc_cpu_ren;
        CData/*3:0*/ __Vdly__ic_cpu_ren;
        CData/*0:0*/ __Vdly__U_aximaster__DOT__read_from_dc;
        CData/*0:0*/ __Vdly__U_aximaster__DOT__read_turn_dc;
        CData/*7:0*/ __Vdly__U_aximaster__DOT__read_beat;
        CData/*0:0*/ __Vdly__m_axi_rready;
        CData/*0:0*/ __Vdly__U_aximaster__DOT__aw_done;
    };
    struct {
        CData/*0:0*/ __Vdly__U_aximaster__DOT__w_done;
        CData/*0:0*/ __Vdly__m_axi_bready;
        CData/*5:0*/ __Vdlyvdim0__U_icache__DOT__U_isram__DOT__mem__v0;
        CData/*0:0*/ __Vdlyvset__U_icache__DOT__U_isram__DOT__mem__v0;
        VL_OUT(__PVT__m_axi_awaddr,31,0);
        VL_OUT(__PVT__m_axi_wdata,31,0);
        VL_OUT(__PVT__m_axi_araddr,31,0);
        VL_IN(__PVT__m_axi_rdata,31,0);
        IData/*31:0*/ __PVT__dc2cpu_rdata;
        IData/*31:0*/ __PVT__ic_cpu_raddr;
        VlWide<4>/*127:0*/ __PVT__ic_dev_rdata;
        IData/*31:0*/ __PVT__dc_cpu_waddr;
        IData/*31:0*/ __PVT__dc_cpu_wdata;
        IData/*31:0*/ __PVT__dc_cpu_raddr;
        VlWide<4>/*127:0*/ __PVT__dc_dev_rdata;
        IData/*31:0*/ __PVT__U_dcache__DOT__read_addr_r;
        VlWide<5>/*133:0*/ __PVT__U_dcache__DOT__cache_line_r;
        IData/*31:0*/ __PVT__U_dcache__DOT__current_addr;
        VlWide<4>/*127:0*/ __PVT__U_dcache__DOT__wr_cache_data;
        VlWide<5>/*133:0*/ __PVT__U_icache__DOT__cache_line_r;
        IData/*31:0*/ __Vdly__dc_cpu_raddr;
        VlWide<5>/*133:0*/ __Vdlyvval__U_icache__DOT__U_isram__DOT__mem__v0;
        VlUnpacked<VlWide<5>/*133:0*/, 64> __PVT__U_dcache__DOT__U_dsram__DOT__mem;
        VlUnpacked<VlWide<5>/*133:0*/, 64> __PVT__U_icache__DOT__U_isram__DOT__mem;
    };

    // INTERNAL VARIABLES
    Vrtl_axi_probe__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtl_axi_probe_cpu_top(Vrtl_axi_probe__Syms* symsp, const char* v__name);
    ~Vrtl_axi_probe_cpu_top();
    VL_UNCOPYABLE(Vrtl_axi_probe_cpu_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
