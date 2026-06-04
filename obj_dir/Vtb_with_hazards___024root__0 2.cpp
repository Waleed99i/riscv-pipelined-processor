// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_with_hazards.h for the primary calling header

#include "Vtb_with_hazards__pch.h"

VlCoroutine Vtb_with_hazards___024root___eval_initial__TOP__Vtiming__0(Vtb_with_hazards___024root* vlSelf);
VlCoroutine Vtb_with_hazards___024root___eval_initial__TOP__Vtiming__1(Vtb_with_hazards___024root* vlSelf);

void Vtb_with_hazards___024root___eval_initial(Vtb_with_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___eval_initial\n"); );
    Vtb_with_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_with_hazards___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_with_hazards___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_with_hazards___024root____VbeforeTrig_h7407f5f6__0(Vtb_with_hazards___024root* vlSelf, const char* __VeventDescription);
void Vtb_with_hazards___024root____VbeforeTrig_h7407f534__0(Vtb_with_hazards___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_with_hazards___024root___eval_initial__TOP__Vtiming__0(Vtb_with_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_with_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_with_hazards__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_with_hazards__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vilp1;
    IData/*31:0*/ __Vilp2;
    // Body
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[0U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[1U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[2U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[3U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[4U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[5U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[6U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[7U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[8U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[9U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[10U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[11U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[12U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[13U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[14U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[15U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[16U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[17U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[18U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[19U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[20U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[21U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[22U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[23U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[24U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[25U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[26U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[27U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[28U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[29U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[30U] = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[31U] = 0U;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000003fU)) {
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__memory[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x0000003fU)) {
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory[__Vilp2] = 0x00000013U;
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory[0U] = 0x00600093U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory[1U] = 0x00200113U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory[2U] = 0x00208233U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory[3U] = 0x02402023U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory[4U] = 0x02002483U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory[5U] = 0x002482b3U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory[6U] = 0x002085b3U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory[7U] = 0x00b20463U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory[8U] = 0x00200493U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory[9U] = 0x01000213U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory[10U] = 0x0044e133U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory[11U] = 0x00000013U;
    Vtb_with_hazards___024root____VbeforeTrig_h7407f5f6__0(vlSelf, 
                                                           "@(negedge tb_with_hazards.clk)");
    co_await vlSelfRef.__VtrigSched_h7407f5f6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_with_hazards.clk)", 
                                                         "tests/tb_with_hazards.sv", 
                                                         97);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vtb_with_hazards___024root____VbeforeTrig_h7407f5f6__0(vlSelf, 
                                                           "@(negedge tb_with_hazards.clk)");
    co_await vlSelfRef.__VtrigSched_h7407f5f6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_with_hazards.clk)", 
                                                         "tests/tb_with_hazards.sv", 
                                                         98);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_with_hazards__DOT__rst = 0U;
    tb_with_hazards__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0x00000064U;
    while (VL_LTS_III(32, 0U, tb_with_hazards__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_with_hazards___024root____VbeforeTrig_h7407f534__0(vlSelf, 
                                                               "@(posedge tb_with_hazards.clk)");
        co_await vlSelfRef.__VtrigSched_h7407f534__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_with_hazards.clk)", 
                                                             "tests/tb_with_hazards.sv", 
                                                             103);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        tb_with_hazards__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_with_hazards__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    VL_FINISH_MT("tests/tb_with_hazards.sv", 105, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

VlCoroutine Vtb_with_hazards___024root___eval_initial__TOP__Vtiming__1(Vtb_with_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_with_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tests/tb_with_hazards.sv", 
                                             12);
        vlSelfRef.tb_with_hazards__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.tb_with_hazards__DOT__clk)));
    }
    co_return;
}

void Vtb_with_hazards___024root___eval_triggers_vec__act(Vtb_with_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___eval_triggers_vec__act\n"); );
    Vtb_with_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((~ (IData)(vlSelfRef.tb_with_hazards__DOT__clk)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_with_hazards__DOT__clk__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_with_hazards__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_with_hazards__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_with_hazards__DOT__clk__0 
        = vlSelfRef.tb_with_hazards__DOT__clk;
}

bool Vtb_with_hazards___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___trigger_anySet__act\n"); );
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

void Vtb_with_hazards___024root___act_comb__TOP__0(Vtb_with_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___act_comb__TOP__0\n"); );
    Vtb_with_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_4;
    __VdfgRegularize_hebeb780c_0_4 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_5;
    __VdfgRegularize_hebeb780c_0_5 = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_8;
    __VdfgRegularize_hebeb780c_0_8 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_9;
    __VdfgRegularize_hebeb780c_0_9 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_15;
    __VdfgRegularize_hebeb780c_0_15 = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_16;
    __VdfgRegularize_hebeb780c_0_16 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_17;
    __VdfgRegularize_hebeb780c_0_17 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_18;
    __VdfgRegularize_hebeb780c_0_18 = 0;
    // Body
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word 
        = vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__memory
        [(0x000fffffU & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__result 
                         >> 2U))];
    if ((0U == (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__rmask_2))) {
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_rdata_2 
            = vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word;
    } else if ((1U == (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__rmask_2))) {
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__half_word 
            = (0x0000ffffU & ((2U == (3U & vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__result))
                               ? (vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word 
                                  >> 0x10U) : vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word));
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_rdata_2 
            = ((IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__load_unsigned_2)
                ? (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__half_word)
                : (((- (IData)((1U & ((IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__half_word) 
                                      >> 0x0fU)))) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__half_word)));
    } else if ((2U == (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__rmask_2))) {
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__byte_val 
            = (0x000000ffU & ((0U == (3U & vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__result))
                               ? vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word
                               : ((1U == (3U & vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__result))
                                   ? (vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word 
                                      >> 8U) : ((2U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__result))
                                                 ? 
                                                (vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word 
                                                 >> 0x10U)
                                                 : 
                                                (vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word 
                                                 >> 0x18U)))));
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_rdata_2 
            = ((IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__load_unsigned_2)
                ? (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__byte_val)
                : (((- (IData)((1U & ((IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__byte_val) 
                                      >> 7U)))) << 8U) 
                   | (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__byte_val)));
    } else {
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_rdata_2 = 0U;
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = (0x0000001fU 
                                                & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                   [
                                                   (0x000fffffU 
                                                    & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                       >> 2U))] 
                                                   >> 0x0000000fU));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_3 = (0x0000001fU 
                                                & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                   [
                                                   (0x000fffffU 
                                                    & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                       >> 2U))] 
                                                   >> 0x00000014U));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = (7U 
                                                & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                   [
                                                   (0x000fffffU 
                                                    & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                       >> 2U))] 
                                                   >> 0x0000000cU));
    __VdfgRegularize_hebeb780c_0_5 = (1U & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                            [(0x000fffffU 
                                              & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                 >> 2U))] 
                                            >> 2U));
    __VdfgRegularize_hebeb780c_0_9 = (1U & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                            [(0x000fffffU 
                                              & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                 >> 2U))] 
                                            >> 4U));
    __VdfgRegularize_hebeb780c_0_17 = (1U & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                             [(0x000fffffU 
                                               & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                  >> 2U))] 
                                             >> 3U));
    __VdfgRegularize_hebeb780c_0_18 = (1U & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                             [(0x000fffffU 
                                               & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                  >> 2U))] 
                                             >> 5U));
    __VdfgRegularize_hebeb780c_0_4 = (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                      [(0x000fffffU 
                                        & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                           >> 2U))] 
                                      >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (0x0000007fU 
                                                & vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                [(0x000fffffU 
                                                  & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                     >> 2U))]);
    __VdfgRegularize_hebeb780c_0_15 = (3U == (3U & vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                              [(0x000fffffU 
                                                & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                   >> 2U))]));
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__stall = 0U;
    if ((((IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__we_rf_2) 
          & (0U != (0x0000001fU & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__inst_2 
                                   >> 7U)))) & (((0x0000001fU 
                                                  & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__inst_2 
                                                     >> 7U)) 
                                                 == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)) 
                                                | ((0x0000001fU 
                                                    & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__inst_2 
                                                       >> 7U)) 
                                                   == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3))))) {
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__stall = 1U;
    } else if ((((IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__we_rf_3) 
                 & (0U != (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__waddr_rf_3))) 
                & (((IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__waddr_rf_3) 
                    == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)) 
                   | ((IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__waddr_rf_3) 
                      == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3))))) {
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__stall = 1U;
    }
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__we_rf_1 = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_op_1 = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_to_reg_1 = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_wen_1 = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__branch_1 = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__jump_1 = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__jump_reg_1 = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rmask_1 = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__wmask_1 = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__load_unsigned_1 = 1U;
    if (((((((((3U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
               | (0x23U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
              | (0x33U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
             | (0x13U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
            | (0x63U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
           | (0x6fU == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
          | (0x67U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
         | (0x37U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))) {
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__we_rf_1 
            = ((3U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
               || ((0x23U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                   && ((0x33U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                       || ((0x13U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                           || (0x63U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))))));
        if ((3U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
            vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_op_1 = 0U;
            vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_to_reg_1 = 1U;
            vlSelfRef.tb_with_hazards__DOT__dut__DOT__load_unsigned_1 = 1U;
            if ((0U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))) {
                vlSelfRef.tb_with_hazards__DOT__dut__DOT__rmask_1 = 2U;
                vlSelfRef.tb_with_hazards__DOT__dut__DOT__load_unsigned_1 = 0U;
            } else {
                vlSelfRef.tb_with_hazards__DOT__dut__DOT__rmask_1 
                    = ((4U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))
                        ? 2U : ((1U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))
                                 ? 1U : ((5U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))
                                          ? 1U : 0U)));
                if ((4U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))) {
                    if ((1U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))) {
                        vlSelfRef.tb_with_hazards__DOT__dut__DOT__load_unsigned_1 = 0U;
                    }
                }
            }
        } else {
            vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_op_1 
                = ((0x23U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))
                    ? 0U : ((0x33U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))
                             ? 2U : ((0x13U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))
                                      ? 3U : ((0x63U 
                                               == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))
                                               ? 1U
                                               : 0U))));
        }
        if ((3U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
            if ((0x23U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_wen_1 = 1U;
                vlSelfRef.tb_with_hazards__DOT__dut__DOT__wmask_1 
                    = ((0U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))
                        ? 2U : ((1U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))
                                 ? 1U : 0U));
            }
            if ((0x23U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                if ((0x33U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                    if ((0x13U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                        if ((0x63U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                            vlSelfRef.tb_with_hazards__DOT__dut__DOT__branch_1 = 1U;
                        }
                        if ((0x63U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                            if ((0x6fU == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                                vlSelfRef.tb_with_hazards__DOT__dut__DOT__jump_1 = 1U;
                            } else if ((0x67U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                                vlSelfRef.tb_with_hazards__DOT__dut__DOT__jump_1 = 1U;
                            }
                            if ((0x6fU != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                                if ((0x67U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                                    vlSelfRef.tb_with_hazards__DOT__dut__DOT__jump_reg_1 = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x17U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__we_rf_1 = 1U;
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_op_1 = 0U;
    }
    __VdfgRegularize_hebeb780c_0_16 = (0xfffff000U 
                                       & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                          [(0x000fffffU 
                                            & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                               >> 2U))] 
                                          & (- (IData)((IData)(__VdfgRegularize_hebeb780c_0_15)))));
    __VdfgRegularize_hebeb780c_0_8 = ((((- (IData)((IData)(__VdfgRegularize_hebeb780c_0_4))) 
                                        << 0x0000000cU) 
                                       | (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                          [(0x000fffffU 
                                            & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                               >> 2U))] 
                                          >> 0x00000014U)) 
                                      & (- (IData)((IData)(__VdfgRegularize_hebeb780c_0_15))));
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__imm_1 
        = ((0x00000040U & vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
            [(0x000fffffU & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                             >> 2U))]) ? ((- (IData)(
                                                     (1U 
                                                      & (~ (IData)(__VdfgRegularize_hebeb780c_0_9))))) 
                                          & (((IData)(__VdfgRegularize_hebeb780c_0_17)
                                               ? ((
                                                   ((- (IData)((IData)(__VdfgRegularize_hebeb780c_0_4))) 
                                                    << 0x00000014U) 
                                                   | ((((0x000001feU 
                                                         & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                            [
                                                            (0x000fffffU 
                                                             & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                                >> 2U))] 
                                                            >> 0x0000000bU)) 
                                                        | (1U 
                                                           & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                              [
                                                              (0x000fffffU 
                                                               & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                                  >> 2U))] 
                                                              >> 0x00000014U))) 
                                                       << 0x0000000bU) 
                                                      | (0x000007feU 
                                                         & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                            [
                                                            (0x000fffffU 
                                                             & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                                >> 2U))] 
                                                            >> 0x00000014U)))) 
                                                  & (- (IData)(
                                                               (7U 
                                                                == 
                                                                (7U 
                                                                 & vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                                 [
                                                                 (0x000fffffU 
                                                                  & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                                     >> 2U))])))))
                                               : ((IData)(__VdfgRegularize_hebeb780c_0_5)
                                                   ? __VdfgRegularize_hebeb780c_0_8
                                                   : 
                                                  ((((- (IData)((IData)(__VdfgRegularize_hebeb780c_0_4))) 
                                                     << 0x0000000dU) 
                                                    | ((((IData)(__VdfgRegularize_hebeb780c_0_4) 
                                                         << 0x0000000cU) 
                                                        | (0x00000800U 
                                                           & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                              [
                                                              (0x000fffffU 
                                                               & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                                  >> 2U))] 
                                                              << 4U))) 
                                                       | ((0x000007e0U 
                                                           & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                              [
                                                              (0x000fffffU 
                                                               & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                                  >> 2U))] 
                                                              >> 0x00000014U)) 
                                                          | (0x0000001eU 
                                                             & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                                [
                                                                (0x000fffffU 
                                                                 & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                                    >> 2U))] 
                                                                >> 7U))))) 
                                                   & (- (IData)((IData)(__VdfgRegularize_hebeb780c_0_15)))))) 
                                             & (- (IData)((IData)(__VdfgRegularize_hebeb780c_0_18)))))
            : ((IData)(__VdfgRegularize_hebeb780c_0_18)
                ? ((IData)(__VdfgRegularize_hebeb780c_0_9)
                    ? ((- (IData)(((~ (IData)(__VdfgRegularize_hebeb780c_0_17)) 
                                   & (IData)(__VdfgRegularize_hebeb780c_0_5)))) 
                       & __VdfgRegularize_hebeb780c_0_16)
                    : ((((- (IData)((IData)(__VdfgRegularize_hebeb780c_0_4))) 
                         << 0x0000000cU) | ((0x00000fe0U 
                                             & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                [(0x000fffffU 
                                                  & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                     >> 2U))] 
                                                >> 0x00000014U)) 
                                            | (0x0000001fU 
                                               & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                  [
                                                  (0x000fffffU 
                                                   & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                      >> 2U))] 
                                                  >> 7U)))) 
                       & (- (IData)(((~ (IData)(__VdfgRegularize_hebeb780c_0_5)) 
                                     & ((~ (IData)(__VdfgRegularize_hebeb780c_0_17)) 
                                        & (IData)(__VdfgRegularize_hebeb780c_0_15)))))))
                : ((IData)(__VdfgRegularize_hebeb780c_0_9)
                    ? (((IData)(__VdfgRegularize_hebeb780c_0_5)
                         ? __VdfgRegularize_hebeb780c_0_16
                         : __VdfgRegularize_hebeb780c_0_8) 
                       & (- (IData)((1U & (~ (IData)(__VdfgRegularize_hebeb780c_0_17))))))
                    : (__VdfgRegularize_hebeb780c_0_8 
                       & ((- (IData)((1U & (~ (IData)(__VdfgRegularize_hebeb780c_0_17))))) 
                          & (- (IData)((1U & (~ (IData)(__VdfgRegularize_hebeb780c_0_5))))))))));
}

void Vtb_with_hazards___024root___eval_act(Vtb_with_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___eval_act\n"); );
    Vtb_with_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_with_hazards___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 64> Vtb_with_hazards__ConstPool__TABLE_hfe2569db_0;

void Vtb_with_hazards___024root___nba_sequent__TOP__0(Vtb_with_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___nba_sequent__TOP__0\n"); );
    Vtb_with_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    IData/*31:0*/ __VdlyVal__tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf__v0;
    __VdlyVal__tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf__v0;
    __VdlyDim0__tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf__v0;
    __VdlySet__tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vtemp_1;
    // Body
    __VdlySet__tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf__v0 = 0U;
    if (vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_wen_2) {
        __Vtemp_1 = ((0U == (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__wmask_2))
                      ? vlSelfRef.tb_with_hazards__DOT__dut__DOT__forwarded_rs2_2
                      : ((1U == (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__wmask_2))
                          ? ((0U == (3U & vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__result))
                              ? ((0xffff0000U & vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__memory
                                  [(0x000fffffU & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__result 
                                                   >> 2U))]) 
                                 | (0x0000ffffU & vlSelfRef.tb_with_hazards__DOT__dut__DOT__forwarded_rs2_2))
                              : ((2U == (3U & vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__result))
                                  ? ((vlSelfRef.tb_with_hazards__DOT__dut__DOT__forwarded_rs2_2 
                                      << 0x00000010U) 
                                     | (0x0000ffffU 
                                        & vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__memory
                                        [(0x000fffffU 
                                          & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__result 
                                             >> 2U))]))
                                  : vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__memory
                                 [(0x000fffffU & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__result 
                                                  >> 2U))]))
                          : ((2U == (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__wmask_2))
                              ? ((2U & vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__result)
                                  ? ((1U & vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__result)
                                      ? ((vlSelfRef.tb_with_hazards__DOT__dut__DOT__forwarded_rs2_2 
                                          << 0x00000018U) 
                                         | (0x00ffffffU 
                                            & vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__memory
                                            [(0x000fffffU 
                                              & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__result 
                                                 >> 2U))]))
                                      : ((0xff000000U 
                                          & vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__memory
                                          [(0x000fffffU 
                                            & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__result 
                                               >> 2U))]) 
                                         | ((0x00ff0000U 
                                             & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__forwarded_rs2_2 
                                                << 0x00000010U)) 
                                            | (0x0000ffffU 
                                               & vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__memory
                                               [(0x000fffffU 
                                                 & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__result 
                                                    >> 2U))]))))
                                  : ((1U & vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__result)
                                      ? ((0xffff0000U 
                                          & vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__memory
                                          [(0x000fffffU 
                                            & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__result 
                                               >> 2U))]) 
                                         | ((0x0000ff00U 
                                             & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__forwarded_rs2_2 
                                                << 8U)) 
                                            | (0x000000ffU 
                                               & vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__memory
                                               [(0x000fffffU 
                                                 & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__result 
                                                    >> 2U))])))
                                      : ((0xffffff00U 
                                          & vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__memory
                                          [(0x000fffffU 
                                            & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__result 
                                               >> 2U))]) 
                                         | (0x000000ffU 
                                            & vlSelfRef.tb_with_hazards__DOT__dut__DOT__forwarded_rs2_2))))
                              : vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__memory
                             [(0x000fffffU & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__result 
                                              >> 2U))])));
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__memory[(0x000fffffU 
                                                                          & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__result 
                                                                             >> 2U))] 
            = __Vtemp_1;
    }
    if (vlSelfRef.tb_with_hazards__DOT__dut__DOT__we_rf_3) {
        if ((0U != (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__waddr_rf_3))) {
            __VdlyVal__tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf__v0 
                = vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__wd_rf;
            __VdlyDim0__tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf__v0 
                = vlSelfRef.tb_with_hazards__DOT__dut__DOT__waddr_rf_3;
            __VdlySet__tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf__v0 = 1U;
        }
    }
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__jump_reg_2 
        = ((1U & (~ (((IData)(vlSelfRef.tb_with_hazards__DOT__rst) 
                      | (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__flush)) 
                     | (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__stall)))) 
           && (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__jump_reg_1));
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__load_unsigned_2 
        = ((((IData)(vlSelfRef.tb_with_hazards__DOT__rst) 
             | (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__flush)) 
            | (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__stall)) 
           || (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__load_unsigned_1));
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__branch_2 
        = ((1U & (~ (((IData)(vlSelfRef.tb_with_hazards__DOT__rst) 
                      | (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__flush)) 
                     | (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__stall)))) 
           && (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__branch_1));
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__jump_2 
        = ((1U & (~ (((IData)(vlSelfRef.tb_with_hazards__DOT__rst) 
                      | (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__flush)) 
                     | (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__stall)))) 
           && (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__jump_1));
    if ((((IData)(vlSelfRef.tb_with_hazards__DOT__rst) 
          | (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__flush)) 
         | (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__stall))) {
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__rmask_2 = 0U;
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_op_2 = 0U;
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__rd2_2 = 0U;
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__imm_2 = 0U;
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__rd1_2 = 0U;
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc_2 = 0U;
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__wmask_2 = 0U;
    } else {
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__rmask_2 
            = vlSelfRef.tb_with_hazards__DOT__dut__DOT__rmask_1;
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_op_2 
            = vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_op_1;
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__rd2_2 
            = (vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf
               [vlSelfRef.__VdfgRegularize_hebeb780c_0_3] 
               & (- (IData)((0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3)))));
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__imm_2 
            = vlSelfRef.tb_with_hazards__DOT__dut__DOT__imm_1;
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__rd1_2 
            = (vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf
               [vlSelfRef.__VdfgRegularize_hebeb780c_0_2] 
               & (- (IData)((0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)))));
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc_2 
            = vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc;
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__wmask_2 
            = vlSelfRef.tb_with_hazards__DOT__dut__DOT__wmask_1;
    }
    if (vlSelfRef.tb_with_hazards__DOT__rst) {
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_rdata_3 = 0U;
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_out_3 = 0U;
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__waddr_rf_3 = 0U;
    } else {
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_rdata_3 
            = vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_rdata_2;
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_out_3 
            = vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__result;
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__waddr_rf_3 
            = (0x0000001fU & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__inst_2 
                              >> 7U));
    }
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__inst_2 
        = ((((IData)(vlSelfRef.tb_with_hazards__DOT__rst) 
             | (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__flush)) 
            | (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__stall))
            ? 0x00000013U : vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
           [(0x000fffffU & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                            >> 2U))]);
    if (vlSelfRef.tb_with_hazards__DOT__rst) {
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc = 0U;
    } else if ((1U & ((IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__flush) 
                      | (~ (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__stall))))) {
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
            = vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc_next;
    }
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_to_reg_3 
        = ((1U & (~ (IData)(vlSelfRef.tb_with_hazards__DOT__rst))) 
           && (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_to_reg_2));
    if (__VdlySet__tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf__v0) {
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[__VdlyDim0__tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf__v0] 
            = __VdlyVal__tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf__v0;
    }
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_wen_2 
        = ((1U & (~ (((IData)(vlSelfRef.tb_with_hazards__DOT__rst) 
                      | (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__flush)) 
                     | (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__stall)))) 
           && (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_wen_1));
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__we_rf_3 
        = ((1U & (~ (IData)(vlSelfRef.tb_with_hazards__DOT__rst))) 
           && (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__we_rf_2));
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__wd_rf 
        = ((IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_to_reg_3)
            ? vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_rdata_3
            : vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_out_3);
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_to_reg_2 
        = ((1U & (~ (((IData)(vlSelfRef.tb_with_hazards__DOT__rst) 
                      | (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__flush)) 
                     | (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__stall)))) 
           && (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_to_reg_1));
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__we_rf_2 
        = ((1U & (~ (((IData)(vlSelfRef.tb_with_hazards__DOT__rst) 
                      | (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__flush)) 
                     | (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__stall)))) 
           && (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__we_rf_1));
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__alu_operation 
        = ((2U & (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_op_2))
            ? ((0x00004000U & vlSelfRef.tb_with_hazards__DOT__dut__DOT__inst_2)
                ? ((0x00002000U & vlSelfRef.tb_with_hazards__DOT__dut__DOT__inst_2)
                    ? (1U & (- (IData)((1U & (~ (vlSelfRef.tb_with_hazards__DOT__dut__DOT__inst_2 
                                                 >> 0x0000000cU))))))
                    : ((0x00001000U & vlSelfRef.tb_with_hazards__DOT__dut__DOT__inst_2)
                        ? ((0x20U == (vlSelfRef.tb_with_hazards__DOT__dut__DOT__inst_2 
                                      >> 0x00000019U))
                            ? 7U : 5U) : 3U)) : ((0x00002000U 
                                                  & vlSelfRef.tb_with_hazards__DOT__dut__DOT__inst_2)
                                                  ? 
                                                 ((0x00001000U 
                                                   & vlSelfRef.tb_with_hazards__DOT__dut__DOT__inst_2)
                                                   ? 9U
                                                   : 8U)
                                                  : 
                                                 ((0x00001000U 
                                                   & vlSelfRef.tb_with_hazards__DOT__dut__DOT__inst_2)
                                                   ? 4U
                                                   : 
                                                  (((0x20U 
                                                     == 
                                                     (vlSelfRef.tb_with_hazards__DOT__dut__DOT__inst_2 
                                                      >> 0x00000019U)) 
                                                    & (2U 
                                                       == (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_op_2)))
                                                    ? 6U
                                                    : 2U))))
            : ((1U & (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_op_2))
                ? 6U : 2U));
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__forwarded_rs2_2 
        = vlSelfRef.tb_with_hazards__DOT__dut__DOT__rd2_2;
    if (((IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__we_rf_3) 
         & (0U != (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__waddr_rf_3)))) {
        if (((IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__waddr_rf_3) 
             == (0x0000001fU & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__inst_2 
                                >> 0x00000014U)))) {
            vlSelfRef.tb_with_hazards__DOT__dut__DOT__forwarded_rs2_2 
                = vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__wd_rf;
        }
    }
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_srcB_2 
        = (((0x33U == (0x0000007fU & vlSelfRef.tb_with_hazards__DOT__dut__DOT__inst_2)) 
            | (0x63U == (0x0000007fU & vlSelfRef.tb_with_hazards__DOT__dut__DOT__inst_2)))
            ? vlSelfRef.tb_with_hazards__DOT__dut__DOT__forwarded_rs2_2
            : (((0x6fU == (0x0000007fU & vlSelfRef.tb_with_hazards__DOT__dut__DOT__inst_2)) 
                | (0x67U == (0x0000007fU & vlSelfRef.tb_with_hazards__DOT__dut__DOT__inst_2)))
                ? 0U : vlSelfRef.tb_with_hazards__DOT__dut__DOT__imm_2));
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__forwarded_rs1_2 
        = vlSelfRef.tb_with_hazards__DOT__dut__DOT__rd1_2;
    if (((IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__we_rf_3) 
         & (0U != (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__waddr_rf_3)))) {
        if (((IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__waddr_rf_3) 
             == (0x0000001fU & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__inst_2 
                                >> 0x0000000fU)))) {
            vlSelfRef.tb_with_hazards__DOT__dut__DOT__forwarded_rs1_2 
                = vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__wd_rf;
        }
    }
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__op_A 
        = ((0x17U == (0x0000007fU & vlSelfRef.tb_with_hazards__DOT__dut__DOT__inst_2))
            ? vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc_2
            : ((((0x6fU == (0x0000007fU & vlSelfRef.tb_with_hazards__DOT__dut__DOT__inst_2)) 
                 | (0x67U == (0x0000007fU & vlSelfRef.tb_with_hazards__DOT__dut__DOT__inst_2)))
                 ? ((IData)(4U) + vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc_2)
                 : vlSelfRef.tb_with_hazards__DOT__dut__DOT__forwarded_rs1_2) 
               & (- (IData)((0x37U != (0x0000007fU 
                                       & vlSelfRef.tb_with_hazards__DOT__dut__DOT__inst_2))))));
    __Vtableidx1 = (((vlSelfRef.tb_with_hazards__DOT__dut__DOT__forwarded_rs1_2 
                      < vlSelfRef.tb_with_hazards__DOT__dut__DOT__forwarded_rs2_2) 
                     << 5U) | ((VL_LTS_III(32, vlSelfRef.tb_with_hazards__DOT__dut__DOT__forwarded_rs1_2, vlSelfRef.tb_with_hazards__DOT__dut__DOT__forwarded_rs2_2) 
                                << 4U) | (((vlSelfRef.tb_with_hazards__DOT__dut__DOT__forwarded_rs1_2 
                                            == vlSelfRef.tb_with_hazards__DOT__dut__DOT__forwarded_rs2_2) 
                                           << 3U) | 
                                          (7U & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__inst_2 
                                                 >> 0x0000000cU)))));
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__branch_taken_2 
        = Vtb_with_hazards__ConstPool__TABLE_hfe2569db_0
        [__Vtableidx1];
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__result 
        = ((8U & (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__alu_operation))
            ? ((- (IData)((1U & (~ ((IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__alu_operation) 
                                    >> 1U))))) & ((
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__alu_operation))
                                                    ? 
                                                   (1U 
                                                    & (- (IData)(
                                                                 (vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__op_A 
                                                                  < vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_srcB_2))))
                                                    : 
                                                   (1U 
                                                    & (- (IData)(
                                                                 VL_LTS_III(32, vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__op_A, vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_srcB_2))))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (~ 
                                                                   ((IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__alu_operation) 
                                                                    >> 2U)))))))
            : ((4U & (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__alu_operation))
                ? ((2U & (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__alu_operation))
                    ? ((1U & (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__alu_operation))
                        ? VL_SHIFTRS_III(32,32,5, vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__op_A, 
                                         (0x0000001fU 
                                          & vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_srcB_2))
                        : (vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__op_A 
                           - vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_srcB_2))
                    : ((1U & (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__alu_operation))
                        ? (vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__op_A 
                           >> (0x0000001fU & vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_srcB_2))
                        : (vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__op_A 
                           << (0x0000001fU & vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_srcB_2))))
                : ((2U & (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__alu_operation))
                    ? ((1U & (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__alu_operation))
                        ? (vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_srcB_2 
                           ^ vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__op_A)
                        : (vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_srcB_2 
                           + vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__op_A))
                    : ((1U & (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__alu_operation))
                        ? (vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_srcB_2 
                           | vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__op_A)
                        : (vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_srcB_2 
                           & vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__op_A)))));
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__flush = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc_next 
        = ((IData)(4U) + vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc);
    if (vlSelfRef.tb_with_hazards__DOT__dut__DOT__jump_2) {
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__flush = 1U;
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc_next 
            = ((IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__jump_reg_2)
                ? (0xfffffffeU & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__forwarded_rs1_2 
                                  + vlSelfRef.tb_with_hazards__DOT__dut__DOT__imm_2))
                : (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc_2 
                   + vlSelfRef.tb_with_hazards__DOT__dut__DOT__imm_2));
    } else if (((IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__branch_2) 
                & (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__branch_taken_2))) {
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__flush = 1U;
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc_next 
            = (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc_2 
               + vlSelfRef.tb_with_hazards__DOT__dut__DOT__imm_2);
    }
}

void Vtb_with_hazards___024root___nba_comb__TOP__0(Vtb_with_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___nba_comb__TOP__0\n"); );
    Vtb_with_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_4;
    __VdfgRegularize_hebeb780c_0_4 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_5;
    __VdfgRegularize_hebeb780c_0_5 = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_8;
    __VdfgRegularize_hebeb780c_0_8 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_9;
    __VdfgRegularize_hebeb780c_0_9 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_15;
    __VdfgRegularize_hebeb780c_0_15 = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_16;
    __VdfgRegularize_hebeb780c_0_16 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_17;
    __VdfgRegularize_hebeb780c_0_17 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_18;
    __VdfgRegularize_hebeb780c_0_18 = 0;
    // Body
    vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = (0x0000001fU 
                                                & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                   [
                                                   (0x000fffffU 
                                                    & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                       >> 2U))] 
                                                   >> 0x0000000fU));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_3 = (0x0000001fU 
                                                & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                   [
                                                   (0x000fffffU 
                                                    & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                       >> 2U))] 
                                                   >> 0x00000014U));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = (7U 
                                                & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                   [
                                                   (0x000fffffU 
                                                    & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                       >> 2U))] 
                                                   >> 0x0000000cU));
    __VdfgRegularize_hebeb780c_0_5 = (1U & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                            [(0x000fffffU 
                                              & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                 >> 2U))] 
                                            >> 2U));
    __VdfgRegularize_hebeb780c_0_9 = (1U & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                            [(0x000fffffU 
                                              & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                 >> 2U))] 
                                            >> 4U));
    __VdfgRegularize_hebeb780c_0_17 = (1U & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                             [(0x000fffffU 
                                               & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                  >> 2U))] 
                                             >> 3U));
    __VdfgRegularize_hebeb780c_0_18 = (1U & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                             [(0x000fffffU 
                                               & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                  >> 2U))] 
                                             >> 5U));
    __VdfgRegularize_hebeb780c_0_4 = (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                      [(0x000fffffU 
                                        & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                           >> 2U))] 
                                      >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (0x0000007fU 
                                                & vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                [(0x000fffffU 
                                                  & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                     >> 2U))]);
    __VdfgRegularize_hebeb780c_0_15 = (3U == (3U & vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                              [(0x000fffffU 
                                                & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                   >> 2U))]));
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word 
        = vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__memory
        [(0x000fffffU & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__result 
                         >> 2U))];
    if ((0U == (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__rmask_2))) {
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_rdata_2 
            = vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word;
    } else if ((1U == (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__rmask_2))) {
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__half_word 
            = (0x0000ffffU & ((2U == (3U & vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__result))
                               ? (vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word 
                                  >> 0x10U) : vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word));
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_rdata_2 
            = ((IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__load_unsigned_2)
                ? (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__half_word)
                : (((- (IData)((1U & ((IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__half_word) 
                                      >> 0x0fU)))) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__half_word)));
    } else if ((2U == (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__rmask_2))) {
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__byte_val 
            = (0x000000ffU & ((0U == (3U & vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__result))
                               ? vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word
                               : ((1U == (3U & vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__result))
                                   ? (vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word 
                                      >> 8U) : ((2U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__result))
                                                 ? 
                                                (vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word 
                                                 >> 0x10U)
                                                 : 
                                                (vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word 
                                                 >> 0x18U)))));
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_rdata_2 
            = ((IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__load_unsigned_2)
                ? (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__byte_val)
                : (((- (IData)((1U & ((IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__byte_val) 
                                      >> 7U)))) << 8U) 
                   | (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__byte_val)));
    } else {
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_rdata_2 = 0U;
    }
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__stall = 0U;
    if ((((IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__we_rf_2) 
          & (0U != (0x0000001fU & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__inst_2 
                                   >> 7U)))) & (((0x0000001fU 
                                                  & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__inst_2 
                                                     >> 7U)) 
                                                 == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)) 
                                                | ((0x0000001fU 
                                                    & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__inst_2 
                                                       >> 7U)) 
                                                   == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3))))) {
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__stall = 1U;
    } else if ((((IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__we_rf_3) 
                 & (0U != (IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__waddr_rf_3))) 
                & (((IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__waddr_rf_3) 
                    == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)) 
                   | ((IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__waddr_rf_3) 
                      == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3))))) {
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__stall = 1U;
    }
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__we_rf_1 = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_op_1 = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_to_reg_1 = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_wen_1 = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__branch_1 = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__jump_1 = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__jump_reg_1 = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rmask_1 = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__wmask_1 = 0U;
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__load_unsigned_1 = 1U;
    if (((((((((3U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
               | (0x23U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
              | (0x33U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
             | (0x13U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
            | (0x63U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
           | (0x6fU == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
          | (0x67U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
         | (0x37U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))) {
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__we_rf_1 
            = ((3U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
               || ((0x23U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                   && ((0x33U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                       || ((0x13U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                           || (0x63U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))))));
        if ((3U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
            vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_op_1 = 0U;
            vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_to_reg_1 = 1U;
            vlSelfRef.tb_with_hazards__DOT__dut__DOT__load_unsigned_1 = 1U;
            if ((0U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))) {
                vlSelfRef.tb_with_hazards__DOT__dut__DOT__rmask_1 = 2U;
                vlSelfRef.tb_with_hazards__DOT__dut__DOT__load_unsigned_1 = 0U;
            } else {
                vlSelfRef.tb_with_hazards__DOT__dut__DOT__rmask_1 
                    = ((4U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))
                        ? 2U : ((1U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))
                                 ? 1U : ((5U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))
                                          ? 1U : 0U)));
                if ((4U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))) {
                    if ((1U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))) {
                        vlSelfRef.tb_with_hazards__DOT__dut__DOT__load_unsigned_1 = 0U;
                    }
                }
            }
        } else {
            vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_op_1 
                = ((0x23U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))
                    ? 0U : ((0x33U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))
                             ? 2U : ((0x13U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))
                                      ? 3U : ((0x63U 
                                               == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))
                                               ? 1U
                                               : 0U))));
        }
        if ((3U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
            if ((0x23U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_wen_1 = 1U;
                vlSelfRef.tb_with_hazards__DOT__dut__DOT__wmask_1 
                    = ((0U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))
                        ? 2U : ((1U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))
                                 ? 1U : 0U));
            }
            if ((0x23U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                if ((0x33U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                    if ((0x13U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                        if ((0x63U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                            vlSelfRef.tb_with_hazards__DOT__dut__DOT__branch_1 = 1U;
                        }
                        if ((0x63U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                            if ((0x6fU == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                                vlSelfRef.tb_with_hazards__DOT__dut__DOT__jump_1 = 1U;
                            } else if ((0x67U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                                vlSelfRef.tb_with_hazards__DOT__dut__DOT__jump_1 = 1U;
                            }
                            if ((0x6fU != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                                if ((0x67U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                                    vlSelfRef.tb_with_hazards__DOT__dut__DOT__jump_reg_1 = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x17U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__we_rf_1 = 1U;
        vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_op_1 = 0U;
    }
    __VdfgRegularize_hebeb780c_0_16 = (0xfffff000U 
                                       & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                          [(0x000fffffU 
                                            & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                               >> 2U))] 
                                          & (- (IData)((IData)(__VdfgRegularize_hebeb780c_0_15)))));
    __VdfgRegularize_hebeb780c_0_8 = ((((- (IData)((IData)(__VdfgRegularize_hebeb780c_0_4))) 
                                        << 0x0000000cU) 
                                       | (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                          [(0x000fffffU 
                                            & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                               >> 2U))] 
                                          >> 0x00000014U)) 
                                      & (- (IData)((IData)(__VdfgRegularize_hebeb780c_0_15))));
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__imm_1 
        = ((0x00000040U & vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
            [(0x000fffffU & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                             >> 2U))]) ? ((- (IData)(
                                                     (1U 
                                                      & (~ (IData)(__VdfgRegularize_hebeb780c_0_9))))) 
                                          & (((IData)(__VdfgRegularize_hebeb780c_0_17)
                                               ? ((
                                                   ((- (IData)((IData)(__VdfgRegularize_hebeb780c_0_4))) 
                                                    << 0x00000014U) 
                                                   | ((((0x000001feU 
                                                         & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                            [
                                                            (0x000fffffU 
                                                             & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                                >> 2U))] 
                                                            >> 0x0000000bU)) 
                                                        | (1U 
                                                           & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                              [
                                                              (0x000fffffU 
                                                               & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                                  >> 2U))] 
                                                              >> 0x00000014U))) 
                                                       << 0x0000000bU) 
                                                      | (0x000007feU 
                                                         & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                            [
                                                            (0x000fffffU 
                                                             & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                                >> 2U))] 
                                                            >> 0x00000014U)))) 
                                                  & (- (IData)(
                                                               (7U 
                                                                == 
                                                                (7U 
                                                                 & vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                                 [
                                                                 (0x000fffffU 
                                                                  & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                                     >> 2U))])))))
                                               : ((IData)(__VdfgRegularize_hebeb780c_0_5)
                                                   ? __VdfgRegularize_hebeb780c_0_8
                                                   : 
                                                  ((((- (IData)((IData)(__VdfgRegularize_hebeb780c_0_4))) 
                                                     << 0x0000000dU) 
                                                    | ((((IData)(__VdfgRegularize_hebeb780c_0_4) 
                                                         << 0x0000000cU) 
                                                        | (0x00000800U 
                                                           & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                              [
                                                              (0x000fffffU 
                                                               & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                                  >> 2U))] 
                                                              << 4U))) 
                                                       | ((0x000007e0U 
                                                           & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                              [
                                                              (0x000fffffU 
                                                               & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                                  >> 2U))] 
                                                              >> 0x00000014U)) 
                                                          | (0x0000001eU 
                                                             & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                                [
                                                                (0x000fffffU 
                                                                 & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                                    >> 2U))] 
                                                                >> 7U))))) 
                                                   & (- (IData)((IData)(__VdfgRegularize_hebeb780c_0_15)))))) 
                                             & (- (IData)((IData)(__VdfgRegularize_hebeb780c_0_18)))))
            : ((IData)(__VdfgRegularize_hebeb780c_0_18)
                ? ((IData)(__VdfgRegularize_hebeb780c_0_9)
                    ? ((- (IData)(((~ (IData)(__VdfgRegularize_hebeb780c_0_17)) 
                                   & (IData)(__VdfgRegularize_hebeb780c_0_5)))) 
                       & __VdfgRegularize_hebeb780c_0_16)
                    : ((((- (IData)((IData)(__VdfgRegularize_hebeb780c_0_4))) 
                         << 0x0000000cU) | ((0x00000fe0U 
                                             & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                [(0x000fffffU 
                                                  & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                     >> 2U))] 
                                                >> 0x00000014U)) 
                                            | (0x0000001fU 
                                               & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                  [
                                                  (0x000fffffU 
                                                   & (vlSelfRef.tb_with_hazards__DOT__dut__DOT__pc 
                                                      >> 2U))] 
                                                  >> 7U)))) 
                       & (- (IData)(((~ (IData)(__VdfgRegularize_hebeb780c_0_5)) 
                                     & ((~ (IData)(__VdfgRegularize_hebeb780c_0_17)) 
                                        & (IData)(__VdfgRegularize_hebeb780c_0_15)))))))
                : ((IData)(__VdfgRegularize_hebeb780c_0_9)
                    ? (((IData)(__VdfgRegularize_hebeb780c_0_5)
                         ? __VdfgRegularize_hebeb780c_0_16
                         : __VdfgRegularize_hebeb780c_0_8) 
                       & (- (IData)((1U & (~ (IData)(__VdfgRegularize_hebeb780c_0_17))))))
                    : (__VdfgRegularize_hebeb780c_0_8 
                       & ((- (IData)((1U & (~ (IData)(__VdfgRegularize_hebeb780c_0_17))))) 
                          & (- (IData)((1U & (~ (IData)(__VdfgRegularize_hebeb780c_0_5))))))))));
}

void Vtb_with_hazards___024root___eval_nba(Vtb_with_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___eval_nba\n"); );
    Vtb_with_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_with_hazards___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_with_hazards___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
}

void Vtb_with_hazards___024root___timing_ready(Vtb_with_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___timing_ready\n"); );
    Vtb_with_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h7407f5f6__0.ready("@(negedge tb_with_hazards.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h7407f534__0.ready("@(posedge tb_with_hazards.clk)");
    }
}

void Vtb_with_hazards___024root___timing_resume(Vtb_with_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___timing_resume\n"); );
    Vtb_with_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h7407f5f6__0.moveToResumeQueue(
                                                          "@(negedge tb_with_hazards.clk)");
    vlSelfRef.__VtrigSched_h7407f534__0.moveToResumeQueue(
                                                          "@(posedge tb_with_hazards.clk)");
    vlSelfRef.__VtrigSched_h7407f5f6__0.resume("@(negedge tb_with_hazards.clk)");
    vlSelfRef.__VtrigSched_h7407f534__0.resume("@(posedge tb_with_hazards.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_with_hazards___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_with_hazards___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_with_hazards___024root___eval_phase__act(Vtb_with_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___eval_phase__act\n"); );
    Vtb_with_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_with_hazards___024root___eval_triggers_vec__act(vlSelf);
    Vtb_with_hazards___024root___timing_ready(vlSelf);
    Vtb_with_hazards___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_with_hazards___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_with_hazards___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_with_hazards___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_with_hazards___024root___timing_resume(vlSelf);
        Vtb_with_hazards___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_with_hazards___024root___eval_phase__inact(Vtb_with_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___eval_phase__inact\n"); );
    Vtb_with_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tests/tb_with_hazards.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_with_hazards___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_with_hazards___024root___eval_phase__nba(Vtb_with_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___eval_phase__nba\n"); );
    Vtb_with_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_with_hazards___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_with_hazards___024root___eval_nba(vlSelf);
        Vtb_with_hazards___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_with_hazards___024root___eval(Vtb_with_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___eval\n"); );
    Vtb_with_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_with_hazards___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tests/tb_with_hazards.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tests/tb_with_hazards.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_with_hazards___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tests/tb_with_hazards.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_with_hazards___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_with_hazards___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_with_hazards___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_with_hazards___024root____VbeforeTrig_h7407f5f6__0(Vtb_with_hazards___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root____VbeforeTrig_h7407f5f6__0\n"); );
    Vtb_with_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_with_hazards__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_with_hazards__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.tb_with_hazards__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_with_hazards__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_with_hazards__DOT__clk__0 
        = vlSelfRef.tb_with_hazards__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h7407f534__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h7407f5f6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7407f5f6__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_with_hazards___024root____VbeforeTrig_h7407f534__0(Vtb_with_hazards___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root____VbeforeTrig_h7407f534__0\n"); );
    Vtb_with_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_with_hazards__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_with_hazards__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.tb_with_hazards__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_with_hazards__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_with_hazards__DOT__clk__0 
        = vlSelfRef.tb_with_hazards__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h7407f534__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h7407f5f6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7407f5f6__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_with_hazards___024root___eval_debug_assertions(Vtb_with_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___eval_debug_assertions\n"); );
    Vtb_with_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
