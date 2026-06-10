// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_RegisterFile.h for the primary calling header

#include "Vtb_RegisterFile__pch.h"

VL_ATTR_COLD void Vtb_RegisterFile___024root___eval_static__TOP(Vtb_RegisterFile___024root* vlSelf);
void Vtb_RegisterFile___024root___timing_ready(Vtb_RegisterFile___024root* vlSelf);

VL_ATTR_COLD void Vtb_RegisterFile___024root___eval_static(Vtb_RegisterFile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root___eval_static\n"); );
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_RegisterFile___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_RegisterFile__DOT__clk__0 = 0U;
    Vtb_RegisterFile___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_RegisterFile___024root___eval_static__TOP(Vtb_RegisterFile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root___eval_static__TOP\n"); );
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_RegisterFile__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtb_RegisterFile___024root___eval_final(Vtb_RegisterFile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root___eval_final\n"); );
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_RegisterFile___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_RegisterFile___024root___eval_phase__stl(Vtb_RegisterFile___024root* vlSelf);

VL_ATTR_COLD void Vtb_RegisterFile___024root___eval_settle(Vtb_RegisterFile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root___eval_settle\n"); );
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_RegisterFile___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tests/tb_RegisterFile.sv", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_RegisterFile___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_RegisterFile___024root___eval_triggers_vec__stl(Vtb_RegisterFile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root___eval_triggers_vec__stl\n"); );
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_RegisterFile___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_RegisterFile___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_RegisterFile___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_RegisterFile___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_RegisterFile___024root___act_sequent__TOP__0(Vtb_RegisterFile___024root* vlSelf);

VL_ATTR_COLD void Vtb_RegisterFile___024root___eval_stl(Vtb_RegisterFile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root___eval_stl\n"); );
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_RegisterFile___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_RegisterFile___024root___eval_phase__stl(Vtb_RegisterFile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root___eval_phase__stl\n"); );
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_RegisterFile___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_RegisterFile___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_RegisterFile___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_RegisterFile___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_RegisterFile___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_RegisterFile___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_RegisterFile___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_RegisterFile.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_RegisterFile___024root___ctor_var_reset(Vtb_RegisterFile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root___ctor_var_reset\n"); );
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_RegisterFile__DOT__rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16396430305617654985ull);
    vlSelf->tb_RegisterFile__DOT__rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10208901633355803904ull);
    vlSelf->tb_RegisterFile__DOT__waddr_rf = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15805983320190024284ull);
    vlSelf->tb_RegisterFile__DOT__we_rf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15295441803680993364ull);
    vlSelf->tb_RegisterFile__DOT__wd_rf = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 799965592163414069ull);
    vlSelf->tb_RegisterFile__DOT__dut__DOT__rd1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4649298093360055963ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_RegisterFile__DOT__dut__DOT__rf[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 843348708981107081ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_RegisterFile__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
