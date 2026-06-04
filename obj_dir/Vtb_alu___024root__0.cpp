// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_alu.h for the primary calling header

#include "Vtb_alu__pch.h"

VlCoroutine Vtb_alu___024root___eval_initial__TOP__Vtiming__0(Vtb_alu___024root* vlSelf);

void Vtb_alu___024root___eval_initial(Vtb_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval_initial\n"); );
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_alu___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VlCoroutine Vtb_alu___024root___eval_initial__TOP__Vtiming__0(Vtb_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_alu__DOT__opA = 0xff00ff00U;
    vlSelfRef.tb_alu__DOT__opB = 0x0f0f0f0fU;
    vlSelfRef.tb_alu__DOT__alu_operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_alu.sv", 
                                         19);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((0x0f000f00U != vlSelfRef.tb_alu__DOT__dut__DOT__result)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_alu.sv:19: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_alu", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_alu.sv", 19, "", false);
    }
    vlSelfRef.tb_alu__DOT__alu_operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_alu.sv", 
                                         20);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((0xff0fff0fU != vlSelfRef.tb_alu__DOT__dut__DOT__result)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_alu.sv:20: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_alu", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_alu.sv", 20, "", false);
    }
    vlSelfRef.tb_alu__DOT__alu_operation = 2U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_alu.sv", 
                                         21);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((0x0e100e0fU != vlSelfRef.tb_alu__DOT__dut__DOT__result)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_alu.sv:21: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_alu", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_alu.sv", 21, "", false);
    }
    vlSelfRef.tb_alu__DOT__alu_operation = 3U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_alu.sv", 
                                         22);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((0xf00ff00fU != vlSelfRef.tb_alu__DOT__dut__DOT__result)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_alu.sv:22: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_alu", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_alu.sv", 22, "", false);
    }
    vlSelfRef.tb_alu__DOT__alu_operation = 4U;
    vlSelfRef.tb_alu__DOT__opA = 1U;
    vlSelfRef.tb_alu__DOT__opB = 3U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_alu.sv", 
                                         23);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((8U != vlSelfRef.tb_alu__DOT__dut__DOT__result)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_alu.sv:23: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_alu", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_alu.sv", 23, "", false);
    }
    vlSelfRef.tb_alu__DOT__alu_operation = 5U;
    vlSelfRef.tb_alu__DOT__opA = 0x80000000U;
    vlSelfRef.tb_alu__DOT__opB = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_alu.sv", 
                                         24);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((0x40000000U != vlSelfRef.tb_alu__DOT__dut__DOT__result)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_alu.sv:24: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_alu", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_alu.sv", 24, "", false);
    }
    vlSelfRef.tb_alu__DOT__alu_operation = 6U;
    vlSelfRef.tb_alu__DOT__opA = 0x00000014U;
    vlSelfRef.tb_alu__DOT__opB = 5U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_alu.sv", 
                                         25);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((0x0000000fU != vlSelfRef.tb_alu__DOT__dut__DOT__result)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_alu.sv:25: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_alu", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_alu.sv", 25, "", false);
    }
    vlSelfRef.tb_alu__DOT__alu_operation = 7U;
    vlSelfRef.tb_alu__DOT__opA = 0xfffffffeU;
    vlSelfRef.tb_alu__DOT__opB = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_alu.sv", 
                                         26);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((0xffffffffU != vlSelfRef.tb_alu__DOT__dut__DOT__result)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_alu.sv:26: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_alu", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_alu.sv", 26, "", false);
    }
    vlSelfRef.tb_alu__DOT__alu_operation = 8U;
    vlSelfRef.tb_alu__DOT__opA = 0xfffffffbU;
    vlSelfRef.tb_alu__DOT__opB = 3U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_alu.sv", 
                                         27);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_alu__DOT__alu_operation = 9U;
    vlSelfRef.tb_alu__DOT__opA = 3U;
    vlSelfRef.tb_alu__DOT__opB = 5U;
    if (VL_UNLIKELY(((1U != vlSelfRef.tb_alu__DOT__dut__DOT__result)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_alu.sv:27: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_alu", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_alu.sv", 27, "", false);
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_alu.sv", 
                                         28);
    if (VL_UNLIKELY(((1U != vlSelfRef.tb_alu__DOT__dut__DOT__result)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_alu.sv:28: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_alu", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_alu.sv", 28, "", false);
    }
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\033[0;32mtb_alu PASS\033[0m\n",0);
    VL_FINISH_MT("tests/tb_alu.sv", 30, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

void Vtb_alu___024root___eval_triggers_vec__act(Vtb_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval_triggers_vec__act\n"); );
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
}

bool Vtb_alu___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___trigger_anySet__act\n"); );
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

void Vtb_alu___024root___act_sequent__TOP__0(Vtb_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___act_sequent__TOP__0\n"); );
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_alu__DOT__dut__DOT__result = ((8U 
                                                & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                                ? (
                                                   (- (IData)(
                                                              (1U 
                                                               & (~ 
                                                                  ((IData)(vlSelfRef.tb_alu__DOT__alu_operation) 
                                                                   >> 1U))))) 
                                                   & (((1U 
                                                        & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                                        ? 
                                                       (1U 
                                                        & (- (IData)(
                                                                     (vlSelfRef.tb_alu__DOT__opA 
                                                                      < vlSelfRef.tb_alu__DOT__opB))))
                                                        : 
                                                       (1U 
                                                        & (- (IData)(
                                                                     VL_LTS_III(32, vlSelfRef.tb_alu__DOT__opA, vlSelfRef.tb_alu__DOT__opB))))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (~ 
                                                                       ((IData)(vlSelfRef.tb_alu__DOT__alu_operation) 
                                                                        >> 2U)))))))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,5, vlSelfRef.tb_alu__DOT__opA, 
                                                                    (0x0000001fU 
                                                                     & vlSelfRef.tb_alu__DOT__opB))
                                                      : 
                                                     (vlSelfRef.tb_alu__DOT__opA 
                                                      - vlSelfRef.tb_alu__DOT__opB))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                                      ? 
                                                     (vlSelfRef.tb_alu__DOT__opA 
                                                      >> 
                                                      (0x0000001fU 
                                                       & vlSelfRef.tb_alu__DOT__opB))
                                                      : 
                                                     (vlSelfRef.tb_alu__DOT__opA 
                                                      << 
                                                      (0x0000001fU 
                                                       & vlSelfRef.tb_alu__DOT__opB))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                                      ? 
                                                     (vlSelfRef.tb_alu__DOT__opA 
                                                      ^ vlSelfRef.tb_alu__DOT__opB)
                                                      : 
                                                     (vlSelfRef.tb_alu__DOT__opA 
                                                      + vlSelfRef.tb_alu__DOT__opB))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                                      ? 
                                                     (vlSelfRef.tb_alu__DOT__opA 
                                                      | vlSelfRef.tb_alu__DOT__opB)
                                                      : 
                                                     (vlSelfRef.tb_alu__DOT__opA 
                                                      & vlSelfRef.tb_alu__DOT__opB)))));
}

void Vtb_alu___024root___eval_act(Vtb_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval_act\n"); );
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_alu___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_alu___024root___eval_nba(Vtb_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval_nba\n"); );
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_alu___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_alu___024root___timing_resume(Vtb_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___timing_resume\n"); );
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_alu___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_alu___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_alu___024root___eval_phase__act(Vtb_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval_phase__act\n"); );
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_alu___024root___eval_triggers_vec__act(vlSelf);
    Vtb_alu___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_alu___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_alu___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_alu___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_alu___024root___timing_resume(vlSelf);
        Vtb_alu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_alu___024root___eval_phase__inact(Vtb_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval_phase__inact\n"); );
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tests/tb_alu.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_alu___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_alu___024root___eval_phase__nba(Vtb_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval_phase__nba\n"); );
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_alu___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_alu___024root___eval_nba(vlSelf);
        Vtb_alu___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_alu___024root___eval(Vtb_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval\n"); );
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_alu___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tests/tb_alu.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tests/tb_alu.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_alu___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tests/tb_alu.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_alu___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_alu___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_alu___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_alu___024root___eval_debug_assertions(Vtb_alu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval_debug_assertions\n"); );
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
