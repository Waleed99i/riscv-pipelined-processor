// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_immgen.h for the primary calling header

#include "Vtb_immgen__pch.h"

VlCoroutine Vtb_immgen___024root___eval_initial__TOP__Vtiming__0(Vtb_immgen___024root* vlSelf);

void Vtb_immgen___024root___eval_initial(Vtb_immgen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_immgen___024root___eval_initial\n"); );
    Vtb_immgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_immgen___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine Vtb_immgen___024root___eval_initial__TOP__Vtiming__0(Vtb_immgen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_immgen___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_immgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_immgen__DOT__instruction = 0xfff00093U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_immgen.sv", 
                                         15);
    VL_WRITEF_NX("immgen debug: instruction=%b immediate=%08x\n",2
                 , '#',32,vlSelfRef.tb_immgen__DOT__instruction
                 , '#',32,vlSelfRef.tb_immgen__DOT__immediate);
    if (VL_UNLIKELY(((0xffffffffU != vlSelfRef.tb_immgen__DOT__immediate)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_immgen.sv:17: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_immgen", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_immgen.sv", 17, "", false);
    }
    vlSelfRef.tb_immgen__DOT__instruction = 0x00112223U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_immgen.sv", 
                                         21);
    VL_WRITEF_NX("immgen debug: instruction=%b immediate=%08x\n",2
                 , '#',32,vlSelfRef.tb_immgen__DOT__instruction
                 , '#',32,vlSelfRef.tb_immgen__DOT__immediate);
    if (VL_UNLIKELY(((4U != vlSelfRef.tb_immgen__DOT__immediate)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_immgen.sv:23: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_immgen", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_immgen.sv", 23, "", false);
    }
    vlSelfRef.tb_immgen__DOT__instruction = 0x00208463U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_immgen.sv", 
                                         27);
    VL_WRITEF_NX("immgen debug: instruction=%b immediate=%08x\n",2
                 , '#',32,vlSelfRef.tb_immgen__DOT__instruction
                 , '#',32,vlSelfRef.tb_immgen__DOT__immediate);
    if (VL_UNLIKELY(((8U != vlSelfRef.tb_immgen__DOT__immediate)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_immgen.sv:29: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_immgen", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_immgen.sv", 29, "", false);
    }
    vlSelfRef.tb_immgen__DOT__instruction = 0x12345297U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_immgen.sv", 
                                         32);
    if (VL_UNLIKELY(((0x12345000U != vlSelfRef.tb_immgen__DOT__immediate)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_immgen.sv:33: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_immgen", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_immgen.sv", 33, "", false);
    }
    vlSelfRef.tb_immgen__DOT__instruction = 0x010000efU;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_immgen.sv", 
                                         36);
    if (VL_UNLIKELY(((0x00000010U != vlSelfRef.tb_immgen__DOT__immediate)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_immgen.sv:37: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_immgen", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_immgen.sv", 37, "", false);
    }
    VL_WRITEF_NX("tb_immgen PASS\n",0);
    VL_FINISH_MT("tests/tb_immgen.sv", 40, "");
    co_return;
}

void Vtb_immgen___024root___eval_triggers_vec__act(Vtb_immgen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_immgen___024root___eval_triggers_vec__act\n"); );
    Vtb_immgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
}

bool Vtb_immgen___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_immgen___024root___trigger_anySet__act\n"); );
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

void Vtb_immgen___024root___act_sequent__TOP__0(Vtb_immgen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_immgen___024root___act_sequent__TOP__0\n"); );
    Vtb_immgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_2;
    __VdfgRegularize_hebeb780c_0_2 = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_6;
    __VdfgRegularize_hebeb780c_0_6 = 0;
    // Body
    __VdfgRegularize_hebeb780c_0_2 = ((((- (IData)(
                                                   (vlSelfRef.tb_immgen__DOT__instruction 
                                                    >> 0x0000001fU))) 
                                        << 0x0000000cU) 
                                       | (vlSelfRef.tb_immgen__DOT__instruction 
                                          >> 0x00000014U)) 
                                      & (- (IData)(
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.tb_immgen__DOT__instruction)))));
    __VdfgRegularize_hebeb780c_0_6 = (0xfffff000U & 
                                      (vlSelfRef.tb_immgen__DOT__instruction 
                                       & (- (IData)(
                                                    (3U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.tb_immgen__DOT__instruction))))));
    vlSelfRef.tb_immgen__DOT__immediate = ((0x00000040U 
                                            & vlSelfRef.tb_immgen__DOT__instruction)
                                            ? ((- (IData)(
                                                          (1U 
                                                           & (~ 
                                                              (vlSelfRef.tb_immgen__DOT__instruction 
                                                               >> 4U))))) 
                                               & (((8U 
                                                    & vlSelfRef.tb_immgen__DOT__instruction)
                                                    ? 
                                                   (((((0x00000ffeU 
                                                        & ((- (IData)(
                                                                      (vlSelfRef.tb_immgen__DOT__instruction 
                                                                       >> 0x0000001fU))) 
                                                           << 1U)) 
                                                       | (vlSelfRef.tb_immgen__DOT__instruction 
                                                          >> 0x0000001fU)) 
                                                      << 0x00000014U) 
                                                     | ((((0x000001feU 
                                                           & (vlSelfRef.tb_immgen__DOT__instruction 
                                                              >> 0x0000000bU)) 
                                                          | (1U 
                                                             & (vlSelfRef.tb_immgen__DOT__instruction 
                                                                >> 0x00000014U))) 
                                                         << 0x0000000bU) 
                                                        | (0x000007feU 
                                                           & (vlSelfRef.tb_immgen__DOT__instruction 
                                                              >> 0x00000014U)))) 
                                                    & (- (IData)(
                                                                 (7U 
                                                                  == 
                                                                  (7U 
                                                                   & vlSelfRef.tb_immgen__DOT__instruction)))))
                                                    : 
                                                   ((4U 
                                                     & vlSelfRef.tb_immgen__DOT__instruction)
                                                     ? __VdfgRegularize_hebeb780c_0_2
                                                     : 
                                                    ((((- (IData)(
                                                                  (vlSelfRef.tb_immgen__DOT__instruction 
                                                                   >> 0x0000001fU))) 
                                                       << 0x0000000dU) 
                                                      | ((((2U 
                                                            & (vlSelfRef.tb_immgen__DOT__instruction 
                                                               >> 0x0000001eU)) 
                                                           | (1U 
                                                              & (vlSelfRef.tb_immgen__DOT__instruction 
                                                                 >> 7U))) 
                                                          << 0x0000000bU) 
                                                         | ((0x000007e0U 
                                                             & (vlSelfRef.tb_immgen__DOT__instruction 
                                                                >> 0x00000014U)) 
                                                            | (0x0000001eU 
                                                               & (vlSelfRef.tb_immgen__DOT__instruction 
                                                                  >> 7U))))) 
                                                     & (- (IData)(
                                                                  (3U 
                                                                   == 
                                                                   (3U 
                                                                    & vlSelfRef.tb_immgen__DOT__instruction))))))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.tb_immgen__DOT__instruction 
                                                                   >> 5U))))))
                                            : ((0x00000020U 
                                                & vlSelfRef.tb_immgen__DOT__instruction)
                                                ? (
                                                   (0x00000010U 
                                                    & vlSelfRef.tb_immgen__DOT__instruction)
                                                    ? 
                                                   ((- (IData)((IData)(
                                                                       (4U 
                                                                        == 
                                                                        (0x0000000cU 
                                                                         & vlSelfRef.tb_immgen__DOT__instruction))))) 
                                                    & __VdfgRegularize_hebeb780c_0_6)
                                                    : 
                                                   ((((- (IData)(
                                                                 (vlSelfRef.tb_immgen__DOT__instruction 
                                                                  >> 0x0000001fU))) 
                                                      << 0x0000000cU) 
                                                     | ((0x00000fe0U 
                                                         & (vlSelfRef.tb_immgen__DOT__instruction 
                                                            >> 0x00000014U)) 
                                                        | (0x0000001fU 
                                                           & (vlSelfRef.tb_immgen__DOT__instruction 
                                                              >> 7U)))) 
                                                    & (- (IData)((IData)(
                                                                         (3U 
                                                                          == 
                                                                          (0x0000000fU 
                                                                           & vlSelfRef.tb_immgen__DOT__instruction)))))))
                                                : (
                                                   (0x00000010U 
                                                    & vlSelfRef.tb_immgen__DOT__instruction)
                                                    ? 
                                                   (((4U 
                                                      & vlSelfRef.tb_immgen__DOT__instruction)
                                                      ? __VdfgRegularize_hebeb780c_0_6
                                                      : __VdfgRegularize_hebeb780c_0_2) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelfRef.tb_immgen__DOT__instruction 
                                                                      >> 3U))))))
                                                    : 
                                                   (__VdfgRegularize_hebeb780c_0_2 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      (vlSelfRef.tb_immgen__DOT__instruction 
                                                                       >> 3U))))) 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelfRef.tb_immgen__DOT__instruction 
                                                                         >> 2U))))))))));
}

void Vtb_immgen___024root___eval_act(Vtb_immgen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_immgen___024root___eval_act\n"); );
    Vtb_immgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_immgen___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_immgen___024root___eval_nba(Vtb_immgen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_immgen___024root___eval_nba\n"); );
    Vtb_immgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_immgen___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_immgen___024root___timing_resume(Vtb_immgen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_immgen___024root___timing_resume\n"); );
    Vtb_immgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_immgen___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_immgen___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_immgen___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_immgen___024root___eval_phase__act(Vtb_immgen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_immgen___024root___eval_phase__act\n"); );
    Vtb_immgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_immgen___024root___eval_triggers_vec__act(vlSelf);
    Vtb_immgen___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_immgen___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_immgen___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_immgen___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_immgen___024root___timing_resume(vlSelf);
        Vtb_immgen___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_immgen___024root___eval_phase__inact(Vtb_immgen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_immgen___024root___eval_phase__inact\n"); );
    Vtb_immgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tests/tb_immgen.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_immgen___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_immgen___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_immgen___024root___eval_phase__nba(Vtb_immgen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_immgen___024root___eval_phase__nba\n"); );
    Vtb_immgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_immgen___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_immgen___024root___eval_nba(vlSelf);
        Vtb_immgen___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_immgen___024root___eval(Vtb_immgen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_immgen___024root___eval\n"); );
    Vtb_immgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_immgen___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tests/tb_immgen.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tests/tb_immgen.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_immgen___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tests/tb_immgen.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_immgen___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_immgen___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_immgen___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_immgen___024root___eval_debug_assertions(Vtb_immgen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_immgen___024root___eval_debug_assertions\n"); );
    Vtb_immgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
