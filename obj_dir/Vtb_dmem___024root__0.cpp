// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dmem.h for the primary calling header

#include "Vtb_dmem__pch.h"

VL_ATTR_COLD void Vtb_dmem___024root___eval_initial__TOP(Vtb_dmem___024root* vlSelf);
VlCoroutine Vtb_dmem___024root___eval_initial__TOP__Vtiming__0(Vtb_dmem___024root* vlSelf);
VlCoroutine Vtb_dmem___024root___eval_initial__TOP__Vtiming__1(Vtb_dmem___024root* vlSelf);

void Vtb_dmem___024root___eval_initial(Vtb_dmem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___eval_initial\n"); );
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_dmem___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_dmem___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_dmem___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_dmem___024root____VbeforeTrig_h1f61a266__0(Vtb_dmem___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_dmem___024root___eval_initial__TOP__Vtiming__0(Vtb_dmem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_dmem__DOT__dut__DOT__memory[0U] = 0U;
    vlSelfRef.tb_dmem__DOT__dut__DOT__memory[1U] = 0U;
    vlSelfRef.tb_dmem__DOT__dut__DOT__memory[2U] = 0U;
    vlSelfRef.tb_dmem__DOT__dut__DOT__memory[3U] = 0U;
    vlSelfRef.tb_dmem__DOT__dut__DOT__memory[4U] = 0U;
    vlSelfRef.tb_dmem__DOT__dut__DOT__memory[5U] = 0U;
    vlSelfRef.tb_dmem__DOT__dut__DOT__memory[6U] = 0U;
    vlSelfRef.tb_dmem__DOT__dut__DOT__memory[7U] = 0U;
    vlSelfRef.tb_dmem__DOT__dut__DOT__memory[8U] = 0U;
    vlSelfRef.tb_dmem__DOT__dut__DOT__memory[9U] = 0U;
    vlSelfRef.tb_dmem__DOT__dut__DOT__memory[10U] = 0U;
    vlSelfRef.tb_dmem__DOT__dut__DOT__memory[11U] = 0U;
    vlSelfRef.tb_dmem__DOT__dut__DOT__memory[12U] = 0U;
    vlSelfRef.tb_dmem__DOT__dut__DOT__memory[13U] = 0U;
    vlSelfRef.tb_dmem__DOT__dut__DOT__memory[14U] = 0U;
    vlSelfRef.tb_dmem__DOT__dut__DOT__memory[15U] = 0U;
    vlSelfRef.tb_dmem__DOT__addr = 0U;
    vlSelfRef.tb_dmem__DOT__mem_wdata = 0x12345678U;
    vlSelfRef.tb_dmem__DOT__wmask = 0U;
    vlSelfRef.tb_dmem__DOT__mem_wen = 1U;
    Vtb_dmem___024root____VbeforeTrig_h1f61a266__0(vlSelf, 
                                                   "@(posedge tb_dmem.clk)");
    co_await vlSelfRef.__VtrigSched_h1f61a266__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_dmem.clk)", 
                                                         "tests/tb_dmem.sv", 
                                                         34);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_dmem.sv", 
                                         34);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_dmem__DOT__mem_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_dmem.sv", 
                                         35);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_dmem__DOT__rmask = 0U;
    vlSelfRef.tb_dmem__DOT__load_unsigned = 1U;
    Vtb_dmem___024root____VbeforeTrig_h1f61a266__0(vlSelf, 
                                                   "@(posedge tb_dmem.clk)");
    co_await vlSelfRef.__VtrigSched_h1f61a266__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_dmem.clk)", 
                                                         "tests/tb_dmem.sv", 
                                                         37);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((0x12345678U != vlSelfRef.tb_dmem__DOT__mem_rdata)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_dmem.sv:38: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_dmem", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_dmem.sv", 38, "", false);
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_dmem.sv", 
                                         40);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_dmem__DOT__addr = 2U;
    vlSelfRef.tb_dmem__DOT__mem_wdata = 0x0000abcdU;
    vlSelfRef.tb_dmem__DOT__wmask = 1U;
    vlSelfRef.tb_dmem__DOT__mem_wen = 1U;
    Vtb_dmem___024root____VbeforeTrig_h1f61a266__0(vlSelf, 
                                                   "@(posedge tb_dmem.clk)");
    co_await vlSelfRef.__VtrigSched_h1f61a266__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_dmem.clk)", 
                                                         "tests/tb_dmem.sv", 
                                                         42);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_dmem.sv", 
                                         42);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_dmem__DOT__mem_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_dmem.sv", 
                                         43);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_dmem__DOT__addr = 2U;
    vlSelfRef.tb_dmem__DOT__rmask = 1U;
    vlSelfRef.tb_dmem__DOT__load_unsigned = 0U;
    Vtb_dmem___024root____VbeforeTrig_h1f61a266__0(vlSelf, 
                                                   "@(posedge tb_dmem.clk)");
    co_await vlSelfRef.__VtrigSched_h1f61a266__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_dmem.clk)", 
                                                         "tests/tb_dmem.sv", 
                                                         45);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((0xffffabcdU != vlSelfRef.tb_dmem__DOT__mem_rdata)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_dmem.sv:46: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_dmem", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_dmem.sv", 46, "", false);
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_dmem.sv", 
                                         48);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_dmem__DOT__addr = 1U;
    vlSelfRef.tb_dmem__DOT__mem_wdata = 0x000000efU;
    vlSelfRef.tb_dmem__DOT__wmask = 2U;
    vlSelfRef.tb_dmem__DOT__mem_wen = 1U;
    Vtb_dmem___024root____VbeforeTrig_h1f61a266__0(vlSelf, 
                                                   "@(posedge tb_dmem.clk)");
    co_await vlSelfRef.__VtrigSched_h1f61a266__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_dmem.clk)", 
                                                         "tests/tb_dmem.sv", 
                                                         50);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_dmem.sv", 
                                         50);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_dmem__DOT__mem_wen = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tests/tb_dmem.sv", 
                                         51);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_dmem__DOT__addr = 1U;
    vlSelfRef.tb_dmem__DOT__rmask = 2U;
    vlSelfRef.tb_dmem__DOT__load_unsigned = 1U;
    Vtb_dmem___024root____VbeforeTrig_h1f61a266__0(vlSelf, 
                                                   "@(posedge tb_dmem.clk)");
    co_await vlSelfRef.__VtrigSched_h1f61a266__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_dmem.clk)", 
                                                         "tests/tb_dmem.sv", 
                                                         53);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((0x000000efU != vlSelfRef.tb_dmem__DOT__mem_rdata)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_dmem.sv:54: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"tb_dmem", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("tests/tb_dmem.sv", 54, "", false);
    }
    VL_WRITEF_NX("\033[0;32mtb_dmem PASS\033[0m\n",0);
    VL_FINISH_MT("tests/tb_dmem.sv", 57, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

VlCoroutine Vtb_dmem___024root___eval_initial__TOP__Vtiming__1(Vtb_dmem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tests/tb_dmem.sv", 
                                             28);
        vlSelfRef.tb_dmem__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_dmem__DOT__clk)));
    }
    co_return;
}

void Vtb_dmem___024root___eval_triggers_vec__act(Vtb_dmem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___eval_triggers_vec__act\n"); );
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.tb_dmem__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_dmem__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_dmem__DOT__clk__0 
        = vlSelfRef.tb_dmem__DOT__clk;
}

bool Vtb_dmem___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___trigger_anySet__act\n"); );
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

void Vtb_dmem___024root___act_comb__TOP__0(Vtb_dmem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___act_comb__TOP__0\n"); );
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_dmem__DOT__dut__DOT__unnamedblk1__DOT__current_word 
        = vlSelfRef.tb_dmem__DOT__dut__DOT__memory[
        (0x000007ffU & (vlSelfRef.tb_dmem__DOT__addr 
                        >> 2U))];
    if ((0U == (IData)(vlSelfRef.tb_dmem__DOT__rmask))) {
        vlSelfRef.tb_dmem__DOT__mem_rdata = vlSelfRef.tb_dmem__DOT__dut__DOT__unnamedblk1__DOT__current_word;
    } else if ((1U == (IData)(vlSelfRef.tb_dmem__DOT__rmask))) {
        vlSelfRef.tb_dmem__DOT__dut__DOT__unnamedblk1__DOT__half_word 
            = (0x0000ffffU & ((2U == (3U & vlSelfRef.tb_dmem__DOT__addr))
                               ? (vlSelfRef.tb_dmem__DOT__dut__DOT__unnamedblk1__DOT__current_word 
                                  >> 0x10U) : vlSelfRef.tb_dmem__DOT__dut__DOT__unnamedblk1__DOT__current_word));
        vlSelfRef.tb_dmem__DOT__mem_rdata = ((IData)(vlSelfRef.tb_dmem__DOT__load_unsigned)
                                              ? (IData)(vlSelfRef.tb_dmem__DOT__dut__DOT__unnamedblk1__DOT__half_word)
                                              : (((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.tb_dmem__DOT__dut__DOT__unnamedblk1__DOT__half_word) 
                                                                 >> 0x0fU)))) 
                                                  << 0x00000010U) 
                                                 | (IData)(vlSelfRef.tb_dmem__DOT__dut__DOT__unnamedblk1__DOT__half_word)));
    } else if ((2U == (IData)(vlSelfRef.tb_dmem__DOT__rmask))) {
        vlSelfRef.tb_dmem__DOT__dut__DOT__unnamedblk1__DOT__byte_val 
            = (0x000000ffU & ((0U == (3U & vlSelfRef.tb_dmem__DOT__addr))
                               ? vlSelfRef.tb_dmem__DOT__dut__DOT__unnamedblk1__DOT__current_word
                               : ((1U == (3U & vlSelfRef.tb_dmem__DOT__addr))
                                   ? (vlSelfRef.tb_dmem__DOT__dut__DOT__unnamedblk1__DOT__current_word 
                                      >> 8U) : ((2U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.tb_dmem__DOT__addr))
                                                 ? 
                                                (vlSelfRef.tb_dmem__DOT__dut__DOT__unnamedblk1__DOT__current_word 
                                                 >> 0x10U)
                                                 : 
                                                (vlSelfRef.tb_dmem__DOT__dut__DOT__unnamedblk1__DOT__current_word 
                                                 >> 0x18U)))));
        vlSelfRef.tb_dmem__DOT__mem_rdata = ((IData)(vlSelfRef.tb_dmem__DOT__load_unsigned)
                                              ? (IData)(vlSelfRef.tb_dmem__DOT__dut__DOT__unnamedblk1__DOT__byte_val)
                                              : (((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.tb_dmem__DOT__dut__DOT__unnamedblk1__DOT__byte_val) 
                                                                 >> 7U)))) 
                                                  << 8U) 
                                                 | (IData)(vlSelfRef.tb_dmem__DOT__dut__DOT__unnamedblk1__DOT__byte_val)));
    } else {
        vlSelfRef.tb_dmem__DOT__mem_rdata = 0U;
    }
}

void Vtb_dmem___024root___eval_act(Vtb_dmem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___eval_act\n"); );
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_dmem___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_dmem___024root___nba_sequent__TOP__0(Vtb_dmem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___nba_sequent__TOP__0\n"); );
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtemp_1;
    // Body
    if (vlSelfRef.tb_dmem__DOT__mem_wen) {
        __Vtemp_1 = ((0U == (IData)(vlSelfRef.tb_dmem__DOT__wmask))
                      ? vlSelfRef.tb_dmem__DOT__mem_wdata
                      : ((1U == (IData)(vlSelfRef.tb_dmem__DOT__wmask))
                          ? ((0U == (3U & vlSelfRef.tb_dmem__DOT__addr))
                              ? ((0xffff0000U & vlSelfRef.tb_dmem__DOT__dut__DOT__memory
                                  [(0x000007ffU & (vlSelfRef.tb_dmem__DOT__addr 
                                                   >> 2U))]) 
                                 | (0x0000ffffU & vlSelfRef.tb_dmem__DOT__mem_wdata))
                              : ((2U == (3U & vlSelfRef.tb_dmem__DOT__addr))
                                  ? ((vlSelfRef.tb_dmem__DOT__mem_wdata 
                                      << 0x00000010U) 
                                     | (0x0000ffffU 
                                        & vlSelfRef.tb_dmem__DOT__dut__DOT__memory
                                        [(0x000007ffU 
                                          & (vlSelfRef.tb_dmem__DOT__addr 
                                             >> 2U))]))
                                  : vlSelfRef.tb_dmem__DOT__dut__DOT__memory
                                 [(0x000007ffU & (vlSelfRef.tb_dmem__DOT__addr 
                                                  >> 2U))]))
                          : ((2U == (IData)(vlSelfRef.tb_dmem__DOT__wmask))
                              ? ((2U & vlSelfRef.tb_dmem__DOT__addr)
                                  ? ((1U & vlSelfRef.tb_dmem__DOT__addr)
                                      ? ((vlSelfRef.tb_dmem__DOT__mem_wdata 
                                          << 0x00000018U) 
                                         | (0x00ffffffU 
                                            & vlSelfRef.tb_dmem__DOT__dut__DOT__memory
                                            [(0x000007ffU 
                                              & (vlSelfRef.tb_dmem__DOT__addr 
                                                 >> 2U))]))
                                      : ((0xff000000U 
                                          & vlSelfRef.tb_dmem__DOT__dut__DOT__memory
                                          [(0x000007ffU 
                                            & (vlSelfRef.tb_dmem__DOT__addr 
                                               >> 2U))]) 
                                         | ((0x00ff0000U 
                                             & (vlSelfRef.tb_dmem__DOT__mem_wdata 
                                                << 0x00000010U)) 
                                            | (0x0000ffffU 
                                               & vlSelfRef.tb_dmem__DOT__dut__DOT__memory
                                               [(0x000007ffU 
                                                 & (vlSelfRef.tb_dmem__DOT__addr 
                                                    >> 2U))]))))
                                  : ((1U & vlSelfRef.tb_dmem__DOT__addr)
                                      ? ((0xffff0000U 
                                          & vlSelfRef.tb_dmem__DOT__dut__DOT__memory
                                          [(0x000007ffU 
                                            & (vlSelfRef.tb_dmem__DOT__addr 
                                               >> 2U))]) 
                                         | ((0x0000ff00U 
                                             & (vlSelfRef.tb_dmem__DOT__mem_wdata 
                                                << 8U)) 
                                            | (0x000000ffU 
                                               & vlSelfRef.tb_dmem__DOT__dut__DOT__memory
                                               [(0x000007ffU 
                                                 & (vlSelfRef.tb_dmem__DOT__addr 
                                                    >> 2U))])))
                                      : ((0xffffff00U 
                                          & vlSelfRef.tb_dmem__DOT__dut__DOT__memory
                                          [(0x000007ffU 
                                            & (vlSelfRef.tb_dmem__DOT__addr 
                                               >> 2U))]) 
                                         | (0x000000ffU 
                                            & vlSelfRef.tb_dmem__DOT__mem_wdata))))
                              : vlSelfRef.tb_dmem__DOT__dut__DOT__memory
                             [(0x000007ffU & (vlSelfRef.tb_dmem__DOT__addr 
                                              >> 2U))])));
        vlSelfRef.tb_dmem__DOT__dut__DOT__memory[(0x000007ffU 
                                                  & (vlSelfRef.tb_dmem__DOT__addr 
                                                     >> 2U))] 
            = __Vtemp_1;
    }
}

void Vtb_dmem___024root___eval_nba(Vtb_dmem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___eval_nba\n"); );
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_dmem___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_dmem___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_dmem___024root___timing_ready(Vtb_dmem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___timing_ready\n"); );
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h1f61a266__0.ready("@(posedge tb_dmem.clk)");
    }
}

void Vtb_dmem___024root___timing_resume(Vtb_dmem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___timing_resume\n"); );
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h1f61a266__0.moveToResumeQueue(
                                                          "@(posedge tb_dmem.clk)");
    vlSelfRef.__VtrigSched_h1f61a266__0.resume("@(posedge tb_dmem.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_dmem___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_dmem___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_dmem___024root___eval_phase__act(Vtb_dmem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___eval_phase__act\n"); );
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_dmem___024root___eval_triggers_vec__act(vlSelf);
    Vtb_dmem___024root___timing_ready(vlSelf);
    Vtb_dmem___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_dmem___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_dmem___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_dmem___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_dmem___024root___timing_resume(vlSelf);
        Vtb_dmem___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_dmem___024root___eval_phase__inact(Vtb_dmem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___eval_phase__inact\n"); );
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tests/tb_dmem.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_dmem___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_dmem___024root___eval_phase__nba(Vtb_dmem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___eval_phase__nba\n"); );
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_dmem___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_dmem___024root___eval_nba(vlSelf);
        Vtb_dmem___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_dmem___024root___eval(Vtb_dmem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___eval\n"); );
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_dmem___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tests/tb_dmem.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tests/tb_dmem.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_dmem___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tests/tb_dmem.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_dmem___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_dmem___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_dmem___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_dmem___024root____VbeforeTrig_h1f61a266__0(Vtb_dmem___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root____VbeforeTrig_h1f61a266__0\n"); );
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.tb_dmem__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_dmem__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_dmem__DOT__clk__0 
        = vlSelfRef.tb_dmem__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h1f61a266__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1f61a266__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1f61a266__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1f61a266__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1f61a266__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1f61a266__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_dmem___024root___eval_debug_assertions(Vtb_dmem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dmem___024root___eval_debug_assertions\n"); );
    Vtb_dmem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
