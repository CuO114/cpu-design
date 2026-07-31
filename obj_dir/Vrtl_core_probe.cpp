// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrtl_core_probe__pch.h"

//============================================================
// Constructors

Vrtl_core_probe::Vrtl_core_probe(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vrtl_core_probe__Syms(contextp(), _vcname__, this)}
    , rtl_core_probe{vlSymsp->TOP.rtl_core_probe}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vrtl_core_probe::Vrtl_core_probe(const char* _vcname__)
    : Vrtl_core_probe(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vrtl_core_probe::~Vrtl_core_probe() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vrtl_core_probe___024root___eval_debug_assertions(Vrtl_core_probe___024root* vlSelf);
#endif  // VL_DEBUG
void Vrtl_core_probe___024root___eval_static(Vrtl_core_probe___024root* vlSelf);
void Vrtl_core_probe___024root___eval_initial(Vrtl_core_probe___024root* vlSelf);
void Vrtl_core_probe___024root___eval_settle(Vrtl_core_probe___024root* vlSelf);
void Vrtl_core_probe___024root___eval(Vrtl_core_probe___024root* vlSelf);

void Vrtl_core_probe::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrtl_core_probe::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrtl_core_probe___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vrtl_core_probe___024root___eval_static(&(vlSymsp->TOP));
        Vrtl_core_probe___024root___eval_initial(&(vlSymsp->TOP));
        Vrtl_core_probe___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vrtl_core_probe___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vrtl_core_probe::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vrtl_core_probe::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vrtl_core_probe::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vrtl_core_probe___024root___eval_final(Vrtl_core_probe___024root* vlSelf);

VL_ATTR_COLD void Vrtl_core_probe::final() {
    Vrtl_core_probe___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vrtl_core_probe::hierName() const { return vlSymsp->name(); }
const char* Vrtl_core_probe::modelName() const { return "Vrtl_core_probe"; }
unsigned Vrtl_core_probe::threads() const { return 1; }
void Vrtl_core_probe::prepareClone() const { contextp()->prepareClone(); }
void Vrtl_core_probe::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vrtl_core_probe::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vrtl_core_probe::trace()' called on model that was Verilated without --trace option");
}
