// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtl_core_probe.h for the primary calling header

#include "Vrtl_core_probe__pch.h"
#include "Vrtl_core_probe__Syms.h"
#include "Vrtl_core_probe_rtl_core_probe.h"

void Vrtl_core_probe_rtl_core_probe___ctor_var_reset(Vrtl_core_probe_rtl_core_probe* vlSelf);

Vrtl_core_probe_rtl_core_probe::Vrtl_core_probe_rtl_core_probe(Vrtl_core_probe__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrtl_core_probe_rtl_core_probe___ctor_var_reset(this);
}

void Vrtl_core_probe_rtl_core_probe::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vrtl_core_probe_rtl_core_probe::~Vrtl_core_probe_rtl_core_probe() {
}
