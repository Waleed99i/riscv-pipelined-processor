// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_RegisterFile__pch.h"

//============================================================
// Constructors

Vtb_RegisterFile::Vtb_RegisterFile(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_RegisterFile__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_RegisterFile::Vtb_RegisterFile(const char* _vcname__)
    : Vtb_RegisterFile(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_RegisterFile::~Vtb_RegisterFile() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_RegisterFile___024root___eval_debug_assertions(Vtb_RegisterFile___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_RegisterFile___024root___eval_static(Vtb_RegisterFile___024root* vlSelf);
void Vtb_RegisterFile___024root___eval_initial(Vtb_RegisterFile___024root* vlSelf);
void Vtb_RegisterFile___024root___eval_settle(Vtb_RegisterFile___024root* vlSelf);
void Vtb_RegisterFile___024root___eval(Vtb_RegisterFile___024root* vlSelf);

void Vtb_RegisterFile::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_RegisterFile::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_RegisterFile___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_RegisterFile___024root___eval_static(&(vlSymsp->TOP));
        Vtb_RegisterFile___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_RegisterFile___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_RegisterFile___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_RegisterFile::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_RegisterFile::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_RegisterFile::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_RegisterFile___024root___eval_final(Vtb_RegisterFile___024root* vlSelf);

VL_ATTR_COLD void Vtb_RegisterFile::final() {
    contextp()->executingFinal(true);
    Vtb_RegisterFile___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_RegisterFile::hierName() const { return vlSymsp->name(); }
const char* Vtb_RegisterFile::modelName() const { return "Vtb_RegisterFile"; }
unsigned Vtb_RegisterFile::threads() const { return 1; }
void Vtb_RegisterFile::prepareClone() const { contextp()->prepareClone(); }
void Vtb_RegisterFile::atClone() const {
    contextp()->threadPoolpOnClone();
}
