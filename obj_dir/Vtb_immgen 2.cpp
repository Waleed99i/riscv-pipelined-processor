// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_immgen__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtb_immgen::Vtb_immgen(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_immgen__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
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
    vlSymsp->__Vm_activity = true;
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
std::unique_ptr<VerilatedTraceConfig> Vtb_immgen::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vtb_immgen___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtb_immgen___024root__trace_init_top(Vtb_immgen___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_immgen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_immgen___024root*>(voidSelf);
    Vtb_immgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_immgen___024root__trace_decl_types(tracep);
    Vtb_immgen___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_immgen___024root__trace_register(Vtb_immgen___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_immgen::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_immgen::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 3);
    Vtb_immgen___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
