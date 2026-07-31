// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtl_axi_probe.h for the primary calling header

#ifndef VERILATED_VRTL_AXI_PROBE_MULTIPLIER_H_
#define VERILATED_VRTL_AXI_PROBE_MULTIPLIER_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vrtl_axi_probe__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtl_axi_probe_multiplier final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(start,0,0);
    VL_OUT8(busy,0,0);
    CData/*5:0*/ count;
    CData/*0:0*/ __PVT__start_d;
    CData/*0:0*/ __PVT__start_rise;
    VL_IN(__PVT__x,31,0);
    VL_IN(__PVT__y,31,0);
    IData/*31:0*/ product_lo;
    IData/*31:0*/ multiplicand;
    IData/*31:0*/ __PVT__next_lo;
    VL_OUT64(__PVT__z,63,0);
    QData/*32:0*/ product_hi;
    QData/*32:0*/ __PVT__next_hi;

    // INTERNAL VARIABLES
    Vrtl_axi_probe__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtl_axi_probe_multiplier(Vrtl_axi_probe__Syms* symsp, const char* v__name);
    ~Vrtl_axi_probe_multiplier();
    VL_UNCOPYABLE(Vrtl_axi_probe_multiplier);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
