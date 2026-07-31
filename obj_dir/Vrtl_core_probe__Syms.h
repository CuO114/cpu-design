// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRTL_CORE_PROBE__SYMS_H_
#define VERILATED_VRTL_CORE_PROBE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vrtl_core_probe.h"

// INCLUDE MODULE CLASSES
#include "Vrtl_core_probe___024root.h"
#include "Vrtl_core_probe_rtl_core_probe.h"
#include "Vrtl_core_probe_cpu_core.h"
#include "Vrtl_core_probe_ALU.h"
#include "Vrtl_core_probe_multiplier.h"
#include "Vrtl_core_probe_multiplier__W21.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vrtl_core_probe__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vrtl_core_probe* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vrtl_core_probe___024root      TOP;
    Vrtl_core_probe_rtl_core_probe TOP__rtl_core_probe;
    Vrtl_core_probe_cpu_core       TOP__rtl_core_probe__dut;
    Vrtl_core_probe_ALU            TOP__rtl_core_probe__dut__U_ALU;
    Vrtl_core_probe_multiplier     TOP__rtl_core_probe__dut__U_ALU__U_mul;
    Vrtl_core_probe_multiplier__W21 TOP__rtl_core_probe__dut__U_ALU__U_mulu;

    // SCOPE NAMES
    VerilatedScope __Vscope_rtl_core_probe__dut;
    VerilatedScope __Vscope_rtl_core_probe__dut__U_ALU;
    VerilatedScope __Vscope_rtl_core_probe__dut__U_ALU__U_mul;
    VerilatedScope __Vscope_rtl_core_probe__dut__U_ALU__U_mulu;

    // CONSTRUCTORS
    Vrtl_core_probe__Syms(VerilatedContext* contextp, const char* namep, Vrtl_core_probe* modelp);
    ~Vrtl_core_probe__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
