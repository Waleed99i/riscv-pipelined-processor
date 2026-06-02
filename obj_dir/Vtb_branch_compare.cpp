// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_branch_compare__pch.h"

//============================================================
// Constructors

Vtb_branch_compare::Vtb_branch_compare(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_branch_compare__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_branch_compare::Vtb_branch_compare(const char* _vcname__)
    : Vtb_branch_compare(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_branch_compare::~Vtb_branch_compare() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_branch_compare___024root___eval_debug_assertions(Vtb_branch_compare___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_branch_compare___024root___eval_static(Vtb_branch_compare___024root* vlSelf);
void Vtb_branch_compare___024root___eval_initial(Vtb_branch_compare___024root* vlSelf);
void Vtb_branch_compare___024root___eval_settle(Vtb_branch_compare___024root* vlSelf);
void Vtb_branch_compare___024root___eval(Vtb_branch_compare___024root* vlSelf);

void Vtb_branch_compare::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_branch_compare::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_branch_compare___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_branch_compare___024root___eval_static(&(vlSymsp->TOP));
        Vtb_branch_compare___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_branch_compare___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_branch_compare___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_branch_compare::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_branch_compare::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_branch_compare::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_branch_compare___024root___eval_final(Vtb_branch_compare___024root* vlSelf);

VL_ATTR_COLD void Vtb_branch_compare::final() {
    contextp()->executingFinal(true);
    Vtb_branch_compare___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_branch_compare::hierName() const { return vlSymsp->name(); }
const char* Vtb_branch_compare::modelName() const { return "Vtb_branch_compare"; }
unsigned Vtb_branch_compare::threads() const { return 1; }
void Vtb_branch_compare::prepareClone() const { contextp()->prepareClone(); }
void Vtb_branch_compare::atClone() const {
    contextp()->threadPoolpOnClone();
}
