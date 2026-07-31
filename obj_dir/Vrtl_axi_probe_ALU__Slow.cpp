// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtl_axi_probe.h for the primary calling header

#include "Vrtl_axi_probe__pch.h"
#include "Vrtl_axi_probe_ALU.h"
#include "Vrtl_axi_probe__Syms.h"

void Vrtl_axi_probe_ALU___ctor_var_reset(Vrtl_axi_probe_ALU* vlSelf);

Vrtl_axi_probe_ALU::Vrtl_axi_probe_ALU(Vrtl_axi_probe__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrtl_axi_probe_ALU___ctor_var_reset(this);
}

void Vrtl_axi_probe_ALU::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vrtl_axi_probe_ALU::~Vrtl_axi_probe_ALU() {
}
