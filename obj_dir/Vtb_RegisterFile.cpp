// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_RegisterFile__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtb_RegisterFile::Vtb_RegisterFile(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_RegisterFile__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
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
    vlSymsp->__Vm_activity = true;
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
std::unique_ptr<VerilatedTraceConfig> Vtb_RegisterFile::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vtb_RegisterFile___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtb_RegisterFile___024root__trace_init_top(Vtb_RegisterFile___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_RegisterFile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_RegisterFile___024root*>(voidSelf);
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_RegisterFile___024root__trace_decl_types(tracep);
    Vtb_RegisterFile___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_RegisterFile___024root__trace_register(Vtb_RegisterFile___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_RegisterFile::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_RegisterFile::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 40);
    Vtb_RegisterFile___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
