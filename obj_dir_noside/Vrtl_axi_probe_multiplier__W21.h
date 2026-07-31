// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtl_axi_probe.h for the primary calling header

#ifndef VERILATED_VRTL_AXI_PROBE_MULTIPLIER__W21_H_
#define VERILATED_VRTL_AXI_PROBE_MULTIPLIER__W21_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vrtl_axi_probe__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtl_axi_probe_multiplier__W21 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(start,0,0);
    VL_OUT8(busy,0,0);
    CData/*5:0*/ count;
    CData/*0:0*/ __PVT__start_d;
    CData/*0:0*/ __PVT__start_rise;
    VL_OUTW(__PVT__z,65,0,3);
    VL_IN64(__PVT__x,32,0);
    VL_IN64(__PVT__y,32,0);
    QData/*33:0*/ product_hi;
    QData/*32:0*/ product_lo;
    QData/*32:0*/ multiplicand;
    QData/*33:0*/ __PVT__next_hi;
    QData/*32:0*/ __PVT__next_lo;

    // INTERNAL VARIABLES
    Vrtl_axi_probe__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrtl_axi_probe_multiplier__W21(Vrtl_axi_probe__Syms* symsp, const char* v__name);
    ~Vrtl_axi_probe_multiplier__W21();
    VL_UNCOPYABLE(Vrtl_axi_probe_multiplier__W21);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
