// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtl_axi_probe.h for the primary calling header

#include "Vrtl_axi_probe__pch.h"
#include "Vrtl_axi_probe__Syms.h"
#include "Vrtl_axi_probe___024root.h"

void Vrtl_axi_probe___024root___ctor_var_reset(Vrtl_axi_probe___024root* vlSelf);

Vrtl_axi_probe___024root::Vrtl_axi_probe___024root(Vrtl_axi_probe__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrtl_axi_probe___024root___ctor_var_reset(this);
}

void Vrtl_axi_probe___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vrtl_axi_probe___024root::~Vrtl_axi_probe___024root() {
}
