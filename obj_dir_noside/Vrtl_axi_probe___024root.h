// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtl_axi_probe.h for the primary calling header

#ifndef VERILATED_VRTL_AXI_PROBE___024ROOT_H_
#define VERILATED_VRTL_AXI_PROBE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vrtl_axi_probe_rtl_axi_probe;


class Vrtl_axi_probe__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtl_axi_probe___024root final : public VerilatedModule {
  public:
    // CELLS
    Vrtl_axi_probe_rtl_axi_probe* rtl_axi_probe;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rtl_axi_probe____PVT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rtl_axi_probe____PVT__rst__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vrtl_axi_probe__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtl_axi_probe___024root(Vrtl_axi_probe__Syms* symsp, const char* v__name);
    ~Vrtl_axi_probe___024root();
    VL_UNCOPYABLE(Vrtl_axi_probe___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
