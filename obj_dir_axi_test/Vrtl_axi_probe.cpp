// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrtl_axi_probe__pch.h"

//============================================================
// Constructors

Vrtl_axi_probe::Vrtl_axi_probe(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vrtl_axi_probe__Syms(contextp(), _vcname__, this)}
    , rtl_axi_probe{vlSymsp->TOP.rtl_axi_probe}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vrtl_axi_probe::Vrtl_axi_probe(const char* _vcname__)
    : Vrtl_axi_probe(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vrtl_axi_probe::~Vrtl_axi_probe() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vrtl_axi_probe___024root___eval_debug_assertions(Vrtl_axi_probe___024root* vlSelf);
#endif  // VL_DEBUG
void Vrtl_axi_probe___024root___eval_static(Vrtl_axi_probe___024root* vlSelf);
void Vrtl_axi_probe___024root___eval_initial(Vrtl_axi_probe___024root* vlSelf);
void Vrtl_axi_probe___024root___eval_settle(Vrtl_axi_probe___024root* vlSelf);
void Vrtl_axi_probe___024root___eval(Vrtl_axi_probe___024root* vlSelf);

void Vrtl_axi_probe::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrtl_axi_probe::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrtl_axi_probe___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vrtl_axi_probe___024root___eval_static(&(vlSymsp->TOP));
        Vrtl_axi_probe___024root___eval_initial(&(vlSymsp->TOP));
        Vrtl_axi_probe___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vrtl_axi_probe___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vrtl_axi_probe::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vrtl_axi_probe::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vrtl_axi_probe::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vrtl_axi_probe___024root___eval_final(Vrtl_axi_probe___024root* vlSelf);

VL_ATTR_COLD void Vrtl_axi_probe::final() {
    Vrtl_axi_probe___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vrtl_axi_probe::hierName() const { return vlSymsp->name(); }
const char* Vrtl_axi_probe::modelName() const { return "Vrtl_axi_probe"; }
unsigned Vrtl_axi_probe::threads() const { return 1; }
void Vrtl_axi_probe::prepareClone() const { contextp()->prepareClone(); }
void Vrtl_axi_probe::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vrtl_axi_probe::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vrtl_axi_probe::trace()' called on model that was Verilated without --trace option");
}
