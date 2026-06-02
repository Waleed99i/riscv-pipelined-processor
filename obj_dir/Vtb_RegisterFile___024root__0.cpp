// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_RegisterFile.h for the primary calling header

#include "Vtb_RegisterFile__pch.h"

VlCoroutine Vtb_RegisterFile___024root___eval_initial__TOP__Vtiming__0(Vtb_RegisterFile___024root* vlSelf);
VlCoroutine Vtb_RegisterFile___024root___eval_initial__TOP__Vtiming__1(Vtb_RegisterFile___024root* vlSelf);

void Vtb_RegisterFile___024root___eval_initial(Vtb_RegisterFile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root___eval_initial\n"); );
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_RegisterFile___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_RegisterFile___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_RegisterFile___024root____VbeforeTrig_hd8ad563f__0(Vtb_RegisterFile___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_RegisterFile___024root___eval_initial__TOP__Vtiming__0(Vtb_RegisterFile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ tb_RegisterFile__DOT__rs1;
    tb_RegisterFile__DOT__rs1 = 0;
    // Body
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[0U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[1U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[2U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[3U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[4U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[5U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[6U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[7U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[8U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[9U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[10U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[11U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[12U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[13U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[14U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[15U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[16U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[17U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[18U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[19U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[20U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[21U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[22U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[23U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[24U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[25U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[26U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[27U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[28U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[29U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[30U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[31U] = 0U;
    vlSelfRef.tb_RegisterFile__DOT__we_rf = 0U;
    tb_RegisterFile__DOT__rs1 = 0U;
    Vtb_RegisterFile___024root____VbeforeTrig_hd8ad563f__0(vlSelf, 
                                                           "@(posedge tb_RegisterFile.clk)");
    co_await vlSelfRef.__VtrigSched_hd8ad563f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_RegisterFile.clk)", 
                                                         "tests/tb_RegisterFile.sv", 
                                                         25);
    vlSelfRef.tb_RegisterFile__DOT__waddr_rf = 1U;
    vlSelfRef.tb_RegisterFile__DOT__wd_rf = 0xdeadbeefU;
    vlSelfRef.tb_RegisterFile__DOT__we_rf = 1U;
    Vtb_RegisterFile___024root____VbeforeTrig_hd8ad563f__0(vlSelf, 
                                                           "@(posedge tb_RegisterFile.clk)");
    co_await vlSelfRef.__VtrigSched_hd8ad563f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_RegisterFile.clk)", 
                                                         "tests/tb_RegisterFile.sv", 
                                                         27);
    vlSelfRef.tb_RegisterFile__DOT__we_rf = 0U;
    tb_RegisterFile__DOT__rs1 = 1U;
    Vtb_RegisterFile___024root____VbeforeTrig_hd8ad563f__0(vlSelf, 
                                                           "@(posedge tb_RegisterFile.clk)");
    co_await vlSelfRef.__VtrigSched_hd8ad563f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_RegisterFile.clk)", 
                                                         "tests/tb_RegisterFile.sv", 
                                                         28);
    if (VL_UNLIKELY(((0xdeadbeefU != (vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf
                                      [tb_RegisterFile__DOT__rs1] 
                                      & (- (IData)(
                                                   (0U 
                                                    != (IData)(tb_RegisterFile__DOT__rs1))))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_RegisterFile.sv:29: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_RegisterFile", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_RegisterFile.sv", 29, "", false);
    }
    vlSelfRef.tb_RegisterFile__DOT__waddr_rf = 0U;
    vlSelfRef.tb_RegisterFile__DOT__wd_rf = 0xcafebabeU;
    vlSelfRef.tb_RegisterFile__DOT__we_rf = 1U;
    Vtb_RegisterFile___024root____VbeforeTrig_hd8ad563f__0(vlSelf, 
                                                           "@(posedge tb_RegisterFile.clk)");
    co_await vlSelfRef.__VtrigSched_hd8ad563f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_RegisterFile.clk)", 
                                                         "tests/tb_RegisterFile.sv", 
                                                         31);
    vlSelfRef.tb_RegisterFile__DOT__we_rf = 0U;
    Vtb_RegisterFile___024root____VbeforeTrig_hd8ad563f__0(vlSelf, 
                                                           "@(posedge tb_RegisterFile.clk)");
    co_await vlSelfRef.__VtrigSched_hd8ad563f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_RegisterFile.clk)", 
                                                         "tests/tb_RegisterFile.sv", 
                                                         32);
    if (VL_UNLIKELY(((0U != vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[0U])))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_RegisterFile.sv:33: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_RegisterFile", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_RegisterFile.sv", 33, "", false);
    }
    VL_WRITEF_NX("\033[0;32mtb_RegisterFile PASS\033[0m\n",0);
    VL_FINISH_MT("tests/tb_RegisterFile.sv", 36, "");
    co_return;
}

VlCoroutine Vtb_RegisterFile___024root___eval_initial__TOP__Vtiming__1(Vtb_RegisterFile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tests/tb_RegisterFile.sv", 
                                             21);
        vlSelfRef.tb_RegisterFile__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.tb_RegisterFile__DOT__clk)));
    }
    co_return;
}

void Vtb_RegisterFile___024root___eval_triggers_vec__act(Vtb_RegisterFile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root___eval_triggers_vec__act\n"); );
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.tb_RegisterFile__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_RegisterFile__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_RegisterFile__DOT__clk__0 
        = vlSelfRef.tb_RegisterFile__DOT__clk;
}

bool Vtb_RegisterFile___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root___trigger_anySet__act\n"); );
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

void Vtb_RegisterFile___024root___nba_sequent__TOP__0(Vtb_RegisterFile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root___nba_sequent__TOP__0\n"); );
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__tb_RegisterFile__DOT__dut__DOT__rf__v0;
    __VdlyVal__tb_RegisterFile__DOT__dut__DOT__rf__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_RegisterFile__DOT__dut__DOT__rf__v0;
    __VdlyDim0__tb_RegisterFile__DOT__dut__DOT__rf__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_RegisterFile__DOT__dut__DOT__rf__v0;
    __VdlySet__tb_RegisterFile__DOT__dut__DOT__rf__v0 = 0;
    // Body
    __VdlySet__tb_RegisterFile__DOT__dut__DOT__rf__v0 = 0U;
    if (vlSelfRef.tb_RegisterFile__DOT__we_rf) {
        if ((0U != (IData)(vlSelfRef.tb_RegisterFile__DOT__waddr_rf))) {
            __VdlyVal__tb_RegisterFile__DOT__dut__DOT__rf__v0 
                = vlSelfRef.tb_RegisterFile__DOT__wd_rf;
            __VdlyDim0__tb_RegisterFile__DOT__dut__DOT__rf__v0 
                = vlSelfRef.tb_RegisterFile__DOT__waddr_rf;
            __VdlySet__tb_RegisterFile__DOT__dut__DOT__rf__v0 = 1U;
        }
    }
    if (__VdlySet__tb_RegisterFile__DOT__dut__DOT__rf__v0) {
        vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[__VdlyDim0__tb_RegisterFile__DOT__dut__DOT__rf__v0] 
            = __VdlyVal__tb_RegisterFile__DOT__dut__DOT__rf__v0;
    }
}

void Vtb_RegisterFile___024root___eval_nba(Vtb_RegisterFile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root___eval_nba\n"); );
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vinline__nba_sequent__TOP__0___VdlyVal__tb_RegisterFile__DOT__dut__DOT__rf__v0;
    __Vinline__nba_sequent__TOP__0___VdlyVal__tb_RegisterFile__DOT__dut__DOT__rf__v0 = 0;
    CData/*4:0*/ __Vinline__nba_sequent__TOP__0___VdlyDim0__tb_RegisterFile__DOT__dut__DOT__rf__v0;
    __Vinline__nba_sequent__TOP__0___VdlyDim0__tb_RegisterFile__DOT__dut__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__0___VdlySet__tb_RegisterFile__DOT__dut__DOT__rf__v0;
    __Vinline__nba_sequent__TOP__0___VdlySet__tb_RegisterFile__DOT__dut__DOT__rf__v0 = 0;
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__0___VdlySet__tb_RegisterFile__DOT__dut__DOT__rf__v0 = 0U;
        if (vlSelfRef.tb_RegisterFile__DOT__we_rf) {
            if ((0U != (IData)(vlSelfRef.tb_RegisterFile__DOT__waddr_rf))) {
                __Vinline__nba_sequent__TOP__0___VdlyVal__tb_RegisterFile__DOT__dut__DOT__rf__v0 
                    = vlSelfRef.tb_RegisterFile__DOT__wd_rf;
                __Vinline__nba_sequent__TOP__0___VdlyDim0__tb_RegisterFile__DOT__dut__DOT__rf__v0 
                    = vlSelfRef.tb_RegisterFile__DOT__waddr_rf;
                __Vinline__nba_sequent__TOP__0___VdlySet__tb_RegisterFile__DOT__dut__DOT__rf__v0 = 1U;
            }
        }
        if (__Vinline__nba_sequent__TOP__0___VdlySet__tb_RegisterFile__DOT__dut__DOT__rf__v0) {
            vlSelfRef.tb_RegisterFile__DOT__dut__DOT__rf[__Vinline__nba_sequent__TOP__0___VdlyDim0__tb_RegisterFile__DOT__dut__DOT__rf__v0] 
                = __Vinline__nba_sequent__TOP__0___VdlyVal__tb_RegisterFile__DOT__dut__DOT__rf__v0;
        }
    }
}

void Vtb_RegisterFile___024root___timing_ready(Vtb_RegisterFile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root___timing_ready\n"); );
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hd8ad563f__0.ready("@(posedge tb_RegisterFile.clk)");
    }
}

void Vtb_RegisterFile___024root___timing_resume(Vtb_RegisterFile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root___timing_resume\n"); );
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hd8ad563f__0.moveToResumeQueue(
                                                          "@(posedge tb_RegisterFile.clk)");
    vlSelfRef.__VtrigSched_hd8ad563f__0.resume("@(posedge tb_RegisterFile.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_RegisterFile___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_RegisterFile___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_RegisterFile___024root___eval_phase__act(Vtb_RegisterFile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root___eval_phase__act\n"); );
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_RegisterFile___024root___eval_triggers_vec__act(vlSelf);
    Vtb_RegisterFile___024root___timing_ready(vlSelf);
    Vtb_RegisterFile___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_RegisterFile___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_RegisterFile___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_RegisterFile___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_RegisterFile___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_RegisterFile___024root___eval_phase__inact(Vtb_RegisterFile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root___eval_phase__inact\n"); );
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tests/tb_RegisterFile.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_RegisterFile___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_RegisterFile___024root___eval_phase__nba(Vtb_RegisterFile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root___eval_phase__nba\n"); );
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_RegisterFile___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_RegisterFile___024root___eval_nba(vlSelf);
        Vtb_RegisterFile___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_RegisterFile___024root___eval(Vtb_RegisterFile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root___eval\n"); );
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_RegisterFile___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tests/tb_RegisterFile.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tests/tb_RegisterFile.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_RegisterFile___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tests/tb_RegisterFile.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_RegisterFile___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_RegisterFile___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_RegisterFile___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_RegisterFile___024root____VbeforeTrig_hd8ad563f__0(Vtb_RegisterFile___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root____VbeforeTrig_hd8ad563f__0\n"); );
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.tb_RegisterFile__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_RegisterFile__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_RegisterFile__DOT__clk__0 
        = vlSelfRef.tb_RegisterFile__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hd8ad563f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd8ad563f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd8ad563f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd8ad563f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd8ad563f__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_RegisterFile___024root___eval_debug_assertions(Vtb_RegisterFile___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_RegisterFile___024root___eval_debug_assertions\n"); );
    Vtb_RegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
