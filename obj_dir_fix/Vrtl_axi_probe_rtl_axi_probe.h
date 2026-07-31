// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtl_axi_probe.h for the primary calling header

#ifndef VERILATED_VRTL_AXI_PROBE_RTL_AXI_PROBE_H_
#define VERILATED_VRTL_AXI_PROBE_RTL_AXI_PROBE_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vrtl_axi_probe_cpu_top;


class Vrtl_axi_probe__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtl_axi_probe_rtl_axi_probe final : public VerilatedModule {
  public:
    // CELLS
    Vrtl_axi_probe_cpu_top* dut;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__rst;
    CData/*0:0*/ __PVT__bvalid;
    CData/*0:0*/ __PVT__rlast;
    CData/*0:0*/ __PVT__rvalid;
    CData/*0:0*/ __PVT__read_active;
    CData/*7:0*/ __PVT__read_len;
    CData/*7:0*/ __PVT__read_beat;
    CData/*0:0*/ __PVT__aw_hold;
    CData/*0:0*/ __PVT__w_hold;
    CData/*3:0*/ __PVT__wstrb_hold;
    CData/*7:0*/ __Vlvbound_h77e98a54__0;
    CData/*7:0*/ __Vlvbound_h767fac4c__0;
    CData/*7:0*/ __Vlvbound_h767fe5f1__0;
    CData/*7:0*/ __Vlvbound_h7800dfdd__0;
    CData/*0:0*/ __Vdly__rvalid;
    CData/*0:0*/ __Vdly__bvalid;
    IData/*31:0*/ __PVT__rdata;
    IData/*31:0*/ __PVT__read_addr;
    IData/*31:0*/ __PVT__awaddr_hold;
    IData/*31:0*/ __PVT__wdata_hold;
    IData/*31:0*/ __PVT__cycle;
    IData/*31:0*/ __PVT__idx;
    IData/*31:0*/ __PVT__trace_count;
    IData/*31:0*/ __PVT__late_trace_count;
    IData/*31:0*/ __PVT__state_trace_count;
    IData/*31:0*/ __PVT__state_load_count;
    IData/*31:0*/ __PVT__state_entry_count;
    IData/*31:0*/ __PVT__call_trace_count;
    IData/*31:0*/ __PVT__stack_store_count;
    IData/*31:0*/ __PVT__result_store_count;
    IData/*31:0*/ __Vdly__rdata;
    QData/*63:0*/ __PVT__timer;
    VlUnpacked<IData/*31:0*/, 38400> __PVT__mem;

    // INTERNAL VARIABLES
    Vrtl_axi_probe__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtl_axi_probe_rtl_axi_probe(Vrtl_axi_probe__Syms* symsp, const char* v__name);
    ~Vrtl_axi_probe_rtl_axi_probe();
    VL_UNCOPYABLE(Vrtl_axi_probe_rtl_axi_probe);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
