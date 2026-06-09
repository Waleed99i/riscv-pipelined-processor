// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_alu_controller.h for the primary calling header

#include "Vtb_alu_controller__pch.h"

VlCoroutine Vtb_alu_controller___024root___eval_initial__TOP__Vtiming__0(Vtb_alu_controller___024root* vlSelf);

void Vtb_alu_controller___024root___eval_initial(Vtb_alu_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu_controller___024root___eval_initial\n"); );
    Vtb_alu_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_alu_controller___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine Vtb_alu_controller___024root___eval_initial__TOP__Vtiming__0(Vtb_alu_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu_controller___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_alu_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_alu_controller__DOT__alu_op = 0U;
    vlSelfRef.tb_alu_controller__DOT__func3 = 0U;
    vlSelfRef.tb_alu_controller__DOT__func7 = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_alu_controller.sv", 
                                         17);
    vlSelfRef.tb_alu_controller__DOT__alu_op = 1U;
    vlSelfRef.tb_alu_controller__DOT__func3 = 0U;
    vlSelfRef.tb_alu_controller__DOT__func7 = 0U;
    if (VL_UNLIKELY(((2U != (IData)(vlSelfRef.tb_alu_controller__DOT__dut__DOT__alu_operation))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_alu_controller.sv:18: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_alu_controller", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_alu_controller.sv", 18, "", false);
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_alu_controller.sv", 
                                         20);
    vlSelfRef.tb_alu_controller__DOT__alu_op = 2U;
    vlSelfRef.tb_alu_controller__DOT__func3 = 0U;
    vlSelfRef.tb_alu_controller__DOT__func7 = 0U;
    if (VL_UNLIKELY(((6U != (IData)(vlSelfRef.tb_alu_controller__DOT__dut__DOT__alu_operation))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_alu_controller.sv:21: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_alu_controller", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_alu_controller.sv", 21, "", false);
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_alu_controller.sv", 
                                         23);
    if (VL_UNLIKELY(((2U != (IData)(vlSelfRef.tb_alu_controller__DOT__dut__DOT__alu_operation))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_alu_controller.sv:24: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_alu_controller", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_alu_controller.sv", 24, "", false);
    }
    vlSelfRef.tb_alu_controller__DOT__func7 = 0x20U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_alu_controller.sv", 
                                         26);
    if (VL_UNLIKELY(((6U != (IData)(vlSelfRef.tb_alu_controller__DOT__dut__DOT__alu_operation))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_alu_controller.sv:27: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_alu_controller", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_alu_controller.sv", 27, "", false);
    }
    vlSelfRef.tb_alu_controller__DOT__func3 = 1U;
    vlSelfRef.tb_alu_controller__DOT__func7 = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_alu_controller.sv", 
                                         29);
    if (VL_UNLIKELY(((4U != (IData)(vlSelfRef.tb_alu_controller__DOT__dut__DOT__alu_operation))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_alu_controller.sv:29: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_alu_controller", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_alu_controller.sv", 29, "", false);
    }
    vlSelfRef.tb_alu_controller__DOT__func3 = 2U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_alu_controller.sv", 
                                         30);
    if (VL_UNLIKELY(((8U != (IData)(vlSelfRef.tb_alu_controller__DOT__dut__DOT__alu_operation))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_alu_controller.sv:30: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_alu_controller", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_alu_controller.sv", 30, "", false);
    }
    vlSelfRef.tb_alu_controller__DOT__func3 = 3U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_alu_controller.sv", 
                                         31);
    if (VL_UNLIKELY(((9U != (IData)(vlSelfRef.tb_alu_controller__DOT__dut__DOT__alu_operation))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_alu_controller.sv:31: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_alu_controller", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_alu_controller.sv", 31, "", false);
    }
    vlSelfRef.tb_alu_controller__DOT__func3 = 4U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_alu_controller.sv", 
                                         32);
    if (VL_UNLIKELY(((3U != (IData)(vlSelfRef.tb_alu_controller__DOT__dut__DOT__alu_operation))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_alu_controller.sv:32: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_alu_controller", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_alu_controller.sv", 32, "", false);
    }
    vlSelfRef.tb_alu_controller__DOT__func3 = 5U;
    vlSelfRef.tb_alu_controller__DOT__func7 = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_alu_controller.sv", 
                                         33);
    if (VL_UNLIKELY(((5U != (IData)(vlSelfRef.tb_alu_controller__DOT__dut__DOT__alu_operation))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_alu_controller.sv:33: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_alu_controller", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_alu_controller.sv", 33, "", false);
    }
    vlSelfRef.tb_alu_controller__DOT__func7 = 0x20U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_alu_controller.sv", 
                                         34);
    if (VL_UNLIKELY(((7U != (IData)(vlSelfRef.tb_alu_controller__DOT__dut__DOT__alu_operation))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_alu_controller.sv:34: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_alu_controller", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_alu_controller.sv", 34, "", false);
    }
    vlSelfRef.tb_alu_controller__DOT__func3 = 6U;
    vlSelfRef.tb_alu_controller__DOT__func7 = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_alu_controller.sv", 
                                         35);
    if (VL_UNLIKELY(((1U != (IData)(vlSelfRef.tb_alu_controller__DOT__dut__DOT__alu_operation))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_alu_controller.sv:35: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_alu_controller", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_alu_controller.sv", 35, "", false);
    }
    vlSelfRef.tb_alu_controller__DOT__func3 = 7U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_alu_controller.sv", 
                                         36);
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_alu_controller__DOT__dut__DOT__alu_operation))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_alu_controller.sv:36: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_alu_controller", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_alu_controller.sv", 36, "", false);
    }
    VL_WRITEF_NX("\033[0;32mtb_alu_controller PASS\033[0m\n",0);
    VL_FINISH_MT("tests/tb_alu_controller.sv", 39, "");
    co_return;
}

void Vtb_alu_controller___024root___eval_triggers_vec__act(Vtb_alu_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu_controller___024root___eval_triggers_vec__act\n"); );
    Vtb_alu_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
}

bool Vtb_alu_controller___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu_controller___024root___trigger_anySet__act\n"); );
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

void Vtb_alu_controller___024root___act_sequent__TOP__0(Vtb_alu_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu_controller___024root___act_sequent__TOP__0\n"); );
    Vtb_alu_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_alu_controller__DOT__dut__DOT__alu_operation 
        = ((2U & (IData)(vlSelfRef.tb_alu_controller__DOT__alu_op))
            ? ((4U & (IData)(vlSelfRef.tb_alu_controller__DOT__func3))
                ? ((2U & (IData)(vlSelfRef.tb_alu_controller__DOT__func3))
                    ? (1U & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_alu_controller__DOT__func3))))))
                    : ((1U & (IData)(vlSelfRef.tb_alu_controller__DOT__func3))
                        ? ((0x20U == (IData)(vlSelfRef.tb_alu_controller__DOT__func7))
                            ? 7U : 5U) : 3U)) : ((2U 
                                                  & (IData)(vlSelfRef.tb_alu_controller__DOT__func3))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.tb_alu_controller__DOT__func3))
                                                   ? 9U
                                                   : 8U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.tb_alu_controller__DOT__func3))
                                                   ? 4U
                                                   : 
                                                  (((0x20U 
                                                     == (IData)(vlSelfRef.tb_alu_controller__DOT__func7)) 
                                                    & (2U 
                                                       == (IData)(vlSelfRef.tb_alu_controller__DOT__alu_op)))
                                                    ? 6U
                                                    : 2U))))
            : ((1U & (IData)(vlSelfRef.tb_alu_controller__DOT__alu_op))
                ? 6U : 2U));
}

void Vtb_alu_controller___024root___eval_act(Vtb_alu_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu_controller___024root___eval_act\n"); );
    Vtb_alu_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_alu_controller___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_alu_controller___024root___eval_nba(Vtb_alu_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu_controller___024root___eval_nba\n"); );
    Vtb_alu_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_alu_controller___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_alu_controller___024root___timing_resume(Vtb_alu_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu_controller___024root___timing_resume\n"); );
    Vtb_alu_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_alu_controller___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu_controller___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_alu_controller___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_alu_controller___024root___eval_phase__act(Vtb_alu_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu_controller___024root___eval_phase__act\n"); );
    Vtb_alu_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_alu_controller___024root___eval_triggers_vec__act(vlSelf);
    Vtb_alu_controller___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_alu_controller___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_alu_controller___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_alu_controller___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_alu_controller___024root___timing_resume(vlSelf);
        Vtb_alu_controller___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_alu_controller___024root___eval_phase__inact(Vtb_alu_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu_controller___024root___eval_phase__inact\n"); );
    Vtb_alu_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tests/tb_alu_controller.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_alu_controller___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu_controller___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_alu_controller___024root___eval_phase__nba(Vtb_alu_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu_controller___024root___eval_phase__nba\n"); );
    Vtb_alu_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_alu_controller___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_alu_controller___024root___eval_nba(vlSelf);
        Vtb_alu_controller___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_alu_controller___024root___eval(Vtb_alu_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu_controller___024root___eval\n"); );
    Vtb_alu_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_alu_controller___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tests/tb_alu_controller.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tests/tb_alu_controller.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_alu_controller___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tests/tb_alu_controller.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_alu_controller___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_alu_controller___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_alu_controller___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_alu_controller___024root___eval_debug_assertions(Vtb_alu_controller___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu_controller___024root___eval_debug_assertions\n"); );
    Vtb_alu_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
