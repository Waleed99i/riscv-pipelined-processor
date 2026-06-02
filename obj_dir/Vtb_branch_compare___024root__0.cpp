// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_branch_compare.h for the primary calling header

#include "Vtb_branch_compare__pch.h"

VlCoroutine Vtb_branch_compare___024root___eval_initial__TOP__Vtiming__0(Vtb_branch_compare___024root* vlSelf);

void Vtb_branch_compare___024root___eval_initial(Vtb_branch_compare___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_compare___024root___eval_initial\n"); );
    Vtb_branch_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_branch_compare___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine Vtb_branch_compare___024root___eval_initial__TOP__Vtiming__0(Vtb_branch_compare___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_compare___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_branch_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_branch_compare__DOT__rs1 = 5U;
    vlSelfRef.tb_branch_compare__DOT__rs2 = 5U;
    vlSelfRef.tb_branch_compare__DOT__br_cond = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_branch_compare.sv", 
                                         16);
    vlSelfRef.tb_branch_compare__DOT__br_cond = 1U;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_branch_compare__DOT__branch_taken)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_branch_compare.sv:16: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_branch_compare", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_branch_compare.sv", 16, "", false);
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_branch_compare.sv", 
                                         17);
    vlSelfRef.tb_branch_compare__DOT__rs1 = 0xfffffffdU;
    vlSelfRef.tb_branch_compare__DOT__rs2 = 2U;
    vlSelfRef.tb_branch_compare__DOT__br_cond = 4U;
    if (VL_UNLIKELY((vlSelfRef.tb_branch_compare__DOT__branch_taken))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_branch_compare.sv:17: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_branch_compare", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_branch_compare.sv", 17, "", false);
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_branch_compare.sv", 
                                         18);
    vlSelfRef.tb_branch_compare__DOT__br_cond = 5U;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_branch_compare__DOT__branch_taken)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_branch_compare.sv:18: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_branch_compare", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_branch_compare.sv", 18, "", false);
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_branch_compare.sv", 
                                         19);
    vlSelfRef.tb_branch_compare__DOT__rs1 = 1U;
    vlSelfRef.tb_branch_compare__DOT__rs2 = 2U;
    vlSelfRef.tb_branch_compare__DOT__br_cond = 6U;
    if (VL_UNLIKELY((vlSelfRef.tb_branch_compare__DOT__branch_taken))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_branch_compare.sv:19: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_branch_compare", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_branch_compare.sv", 19, "", false);
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_branch_compare.sv", 
                                         20);
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_branch_compare__DOT__branch_taken)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_branch_compare.sv:20: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_branch_compare", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_branch_compare.sv", 20, "", false);
    }
    vlSelfRef.tb_branch_compare__DOT__br_cond = 7U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_branch_compare.sv", 
                                         21);
    if (VL_UNLIKELY((vlSelfRef.tb_branch_compare__DOT__branch_taken))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_branch_compare.sv:21: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_branch_compare", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_branch_compare.sv", 21, "", false);
    }
    VL_WRITEF_NX("\033[0;32mtb_branch_compare PASS\033[0m\n",0);
    VL_FINISH_MT("tests/tb_branch_compare.sv", 23, "");
    co_return;
}

void Vtb_branch_compare___024root___eval_triggers_vec__act(Vtb_branch_compare___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_compare___024root___eval_triggers_vec__act\n"); );
    Vtb_branch_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
}

bool Vtb_branch_compare___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_compare___024root___trigger_anySet__act\n"); );
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

extern const VlUnpacked<CData/*0:0*/, 64> Vtb_branch_compare__ConstPool__TABLE_hfe2569db_0;

void Vtb_branch_compare___024root___act_sequent__TOP__0(Vtb_branch_compare___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_compare___024root___act_sequent__TOP__0\n"); );
    Vtb_branch_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((vlSelfRef.tb_branch_compare__DOT__rs1 
                      < vlSelfRef.tb_branch_compare__DOT__rs2) 
                     << 5U) | ((VL_LTS_III(32, vlSelfRef.tb_branch_compare__DOT__rs1, vlSelfRef.tb_branch_compare__DOT__rs2) 
                                << 4U) | (((vlSelfRef.tb_branch_compare__DOT__rs1 
                                            == vlSelfRef.tb_branch_compare__DOT__rs2) 
                                           << 3U) | (IData)(vlSelfRef.tb_branch_compare__DOT__br_cond))));
    vlSelfRef.tb_branch_compare__DOT__branch_taken 
        = Vtb_branch_compare__ConstPool__TABLE_hfe2569db_0
        [__Vtableidx1];
}

void Vtb_branch_compare___024root___eval_act(Vtb_branch_compare___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_compare___024root___eval_act\n"); );
    Vtb_branch_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vinline__act_sequent__TOP__0___Vtableidx1;
    __Vinline__act_sequent__TOP__0___Vtableidx1 = 0;
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        __Vinline__act_sequent__TOP__0___Vtableidx1 
            = (((vlSelfRef.tb_branch_compare__DOT__rs1 
                 < vlSelfRef.tb_branch_compare__DOT__rs2) 
                << 5U) | ((VL_LTS_III(32, vlSelfRef.tb_branch_compare__DOT__rs1, vlSelfRef.tb_branch_compare__DOT__rs2) 
                           << 4U) | (((vlSelfRef.tb_branch_compare__DOT__rs1 
                                       == vlSelfRef.tb_branch_compare__DOT__rs2) 
                                      << 3U) | (IData)(vlSelfRef.tb_branch_compare__DOT__br_cond))));
        vlSelfRef.tb_branch_compare__DOT__branch_taken 
            = Vtb_branch_compare__ConstPool__TABLE_hfe2569db_0
            [__Vinline__act_sequent__TOP__0___Vtableidx1];
    }
}

void Vtb_branch_compare___024root___eval_nba(Vtb_branch_compare___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_compare___024root___eval_nba\n"); );
    Vtb_branch_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vinline__act_sequent__TOP__0___Vtableidx1;
    __Vinline__act_sequent__TOP__0___Vtableidx1 = 0;
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__act_sequent__TOP__0___Vtableidx1 
            = (((vlSelfRef.tb_branch_compare__DOT__rs1 
                 < vlSelfRef.tb_branch_compare__DOT__rs2) 
                << 5U) | ((VL_LTS_III(32, vlSelfRef.tb_branch_compare__DOT__rs1, vlSelfRef.tb_branch_compare__DOT__rs2) 
                           << 4U) | (((vlSelfRef.tb_branch_compare__DOT__rs1 
                                       == vlSelfRef.tb_branch_compare__DOT__rs2) 
                                      << 3U) | (IData)(vlSelfRef.tb_branch_compare__DOT__br_cond))));
        vlSelfRef.tb_branch_compare__DOT__branch_taken 
            = Vtb_branch_compare__ConstPool__TABLE_hfe2569db_0
            [__Vinline__act_sequent__TOP__0___Vtableidx1];
    }
}

void Vtb_branch_compare___024root___timing_resume(Vtb_branch_compare___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_compare___024root___timing_resume\n"); );
    Vtb_branch_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_branch_compare___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_compare___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_branch_compare___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_branch_compare___024root___eval_phase__act(Vtb_branch_compare___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_compare___024root___eval_phase__act\n"); );
    Vtb_branch_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_branch_compare___024root___eval_triggers_vec__act(vlSelf);
    Vtb_branch_compare___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_branch_compare___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_branch_compare___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_branch_compare___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_branch_compare___024root___timing_resume(vlSelf);
        Vtb_branch_compare___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_branch_compare___024root___eval_phase__inact(Vtb_branch_compare___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_compare___024root___eval_phase__inact\n"); );
    Vtb_branch_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tests/tb_branch_compare.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_branch_compare___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_compare___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_branch_compare___024root___eval_phase__nba(Vtb_branch_compare___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_compare___024root___eval_phase__nba\n"); );
    Vtb_branch_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_branch_compare___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_branch_compare___024root___eval_nba(vlSelf);
        Vtb_branch_compare___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_branch_compare___024root___eval(Vtb_branch_compare___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_compare___024root___eval\n"); );
    Vtb_branch_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_branch_compare___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tests/tb_branch_compare.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tests/tb_branch_compare.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_branch_compare___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tests/tb_branch_compare.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_branch_compare___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_branch_compare___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_branch_compare___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_branch_compare___024root___eval_debug_assertions(Vtb_branch_compare___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_compare___024root___eval_debug_assertions\n"); );
    Vtb_branch_compare__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
