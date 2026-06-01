// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_immgen__pch.h"

//============================================================
// Constructors

Vtb_immgen::Vtb_immgen(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_immgen__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_immgen::Vtb_immgen(const char* _vcname__)
    : Vtb_immgen(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_immgen::~Vtb_immgen() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_immgen___024root___eval_debug_assertions(Vtb_immgen___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_immgen___024root___eval_static(Vtb_immgen___024root* vlSelf);
void Vtb_immgen___024root___eval_initial(Vtb_immgen___024root* vlSelf);
void Vtb_immgen___024root___eval_settle(Vtb_immgen___024root* vlSelf);
void Vtb_immgen___024root___eval(Vtb_immgen___024root* vlSelf);

void Vtb_immgen::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_immgen::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_immgen___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_immgen___024root___eval_static(&(vlSymsp->TOP));
        Vtb_immgen___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_immgen___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_immgen___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_immgen::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_immgen::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_immgen::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_immgen___024root___eval_final(Vtb_immgen___024root* vlSelf);

VL_ATTR_COLD void Vtb_immgen::final() {
    contextp()->executingFinal(true);
    Vtb_immgen___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_immgen::hierName() const { return vlSymsp->name(); }
const char* Vtb_immgen::modelName() const { return "Vtb_immgen"; }
unsigned Vtb_immgen::threads() const { return 1; }
void Vtb_immgen::prepareClone() const { contextp()->prepareClone(); }
void Vtb_immgen::atClone() const {
    contextp()->threadPoolpOnClone();
}
