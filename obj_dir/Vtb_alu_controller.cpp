// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_alu_controller__pch.h"

//============================================================
// Constructors

Vtb_alu_controller::Vtb_alu_controller(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_alu_controller__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_alu_controller::Vtb_alu_controller(const char* _vcname__)
    : Vtb_alu_controller(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_alu_controller::~Vtb_alu_controller() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_alu_controller___024root___eval_debug_assertions(Vtb_alu_controller___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_alu_controller___024root___eval_static(Vtb_alu_controller___024root* vlSelf);
void Vtb_alu_controller___024root___eval_initial(Vtb_alu_controller___024root* vlSelf);
void Vtb_alu_controller___024root___eval_settle(Vtb_alu_controller___024root* vlSelf);
void Vtb_alu_controller___024root___eval(Vtb_alu_controller___024root* vlSelf);

void Vtb_alu_controller::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_alu_controller::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_alu_controller___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_alu_controller___024root___eval_static(&(vlSymsp->TOP));
        Vtb_alu_controller___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_alu_controller___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_alu_controller___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_alu_controller::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_alu_controller::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_alu_controller::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_alu_controller___024root___eval_final(Vtb_alu_controller___024root* vlSelf);

VL_ATTR_COLD void Vtb_alu_controller::final() {
    contextp()->executingFinal(true);
    Vtb_alu_controller___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_alu_controller::hierName() const { return vlSymsp->name(); }
const char* Vtb_alu_controller::modelName() const { return "Vtb_alu_controller"; }
unsigned Vtb_alu_controller::threads() const { return 1; }
void Vtb_alu_controller::prepareClone() const { contextp()->prepareClone(); }
void Vtb_alu_controller::atClone() const {
    contextp()->threadPoolpOnClone();
}
