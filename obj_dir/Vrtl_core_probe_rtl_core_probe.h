// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtl_core_probe.h for the primary calling header

#ifndef VERILATED_VRTL_CORE_PROBE_RTL_CORE_PROBE_H_
#define VERILATED_VRTL_CORE_PROBE_RTL_CORE_PROBE_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vrtl_core_probe_cpu_core;


class Vrtl_core_probe__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtl_core_probe_rtl_core_probe final : public VerilatedModule {
  public:
    // CELLS
    Vrtl_core_probe_cpu_core* dut;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__rst;
    CData/*0:0*/ __PVT__ifetch_valid;
    CData/*0:0*/ __PVT__daccess_rvalid;
    CData/*0:0*/ __PVT__daccess_wresp;
    CData/*7:0*/ __Vlvbound_h77e98a54__0;
    CData/*7:0*/ __Vlvbound_h767fac4c__0;
    CData/*7:0*/ __Vlvbound_h767fe5f1__0;
    CData/*7:0*/ __Vlvbound_h7800dfdd__0;
    IData/*31:0*/ __PVT__ifetch_inst;
    IData/*31:0*/ __PVT__daccess_rdata;
    IData/*31:0*/ __PVT__cycle;
    IData/*31:0*/ __PVT__idx;
    IData/*31:0*/ __Vdly__ifetch_inst;
    QData/*63:0*/ __PVT__timer;
    VlUnpacked<IData/*31:0*/, 38400> __PVT__mem;

    // INTERNAL VARIABLES
    Vrtl_core_probe__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtl_core_probe_rtl_core_probe(Vrtl_core_probe__Syms* symsp, const char* v__name);
    ~Vrtl_core_probe_rtl_core_probe();
    VL_UNCOPYABLE(Vrtl_core_probe_rtl_core_probe);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
