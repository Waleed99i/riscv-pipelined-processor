// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cpu.h for the primary calling header

#include "Vtb_cpu__pch.h"

VL_ATTR_COLD void Vtb_cpu___024root___eval_static__TOP(Vtb_cpu___024root* vlSelf);
void Vtb_cpu___024root___timing_ready(Vtb_cpu___024root* vlSelf);

VL_ATTR_COLD void Vtb_cpu___024root___eval_static(Vtb_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_static\n"); );
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_cpu___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cpu__DOT__clk__0 = 0U;
    Vtb_cpu___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_cpu___024root___eval_static__TOP(Vtb_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_static__TOP\n"); );
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cpu__DOT__clk = 0U;
    vlSelfRef.tb_cpu__DOT__rst = 1U;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_cpu__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16390193871596256417ull);
    vlSelf->tb_cpu__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__half_word = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16612074364625456367ull);
    vlSelf->tb_cpu__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__byte_val = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10368537918512619800ull);
}

VL_ATTR_COLD void Vtb_cpu___024root___eval_initial__TOP(Vtb_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_initial__TOP\n"); );
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 32, 256, 0, "insertion_sort/build/main.txt"s
                 ,  &(vlSelfRef.tb_cpu__DOT__dut__DOT__imem_inst__DOT__memory)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 256, 0, "insertion_sort/build/main.txt"s
                 ,  &(vlSelfRef.tb_cpu__DOT__dut__DOT__dmem_inst__DOT__memory)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtb_cpu___024root___eval_final(Vtb_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_final\n"); );
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_cpu___024root___eval_phase__stl(Vtb_cpu___024root* vlSelf);

VL_ATTR_COLD void Vtb_cpu___024root___eval_settle(Vtb_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_settle\n"); );
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_cpu___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tests/tb_cpu.sv", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_cpu___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_cpu___024root___eval_triggers_vec__stl(Vtb_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_triggers_vec__stl\n"); );
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_cpu___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_cpu___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_cpu___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<CData/*0:0*/, 64> Vtb_cpu__ConstPool__TABLE_hfe2418f9_0;

VL_ATTR_COLD void Vtb_cpu___024root___stl_sequent__TOP__0(Vtb_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___stl_sequent__TOP__0\n"); );
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_4;
    __VdfgRegularize_h6e95ff9d_0_4 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_5;
    __VdfgRegularize_h6e95ff9d_0_5 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_8;
    __VdfgRegularize_h6e95ff9d_0_8 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_9;
    __VdfgRegularize_h6e95ff9d_0_9 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_15;
    __VdfgRegularize_h6e95ff9d_0_15 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_16;
    __VdfgRegularize_h6e95ff9d_0_16 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_17;
    __VdfgRegularize_h6e95ff9d_0_17 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_18;
    __VdfgRegularize_h6e95ff9d_0_18 = 0;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = (0x0000001fU 
                                                & (vlSelfRef.tb_cpu__DOT__dut__DOT__imem_inst__DOT__memory
                                                   [
                                                   (0x000000ffU 
                                                    & (vlSelfRef.tb_cpu__DOT__dut__DOT__pc 
                                                       >> 2U))] 
                                                   >> 0x0000000fU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = (0x0000001fU 
                                                & (vlSelfRef.tb_cpu__DOT__dut__DOT__imem_inst__DOT__memory
                                                   [
                                                   (0x000000ffU 
                                                    & (vlSelfRef.tb_cpu__DOT__dut__DOT__pc 
                                                       >> 2U))] 
                                                   >> 0x00000014U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = (7U 
                                                & (vlSelfRef.tb_cpu__DOT__dut__DOT__imem_inst__DOT__memory
                                                   [
                                                   (0x000000ffU 
                                                    & (vlSelfRef.tb_cpu__DOT__dut__DOT__pc 
                                                       >> 2U))] 
                                                   >> 0x0000000cU));
    __VdfgRegularize_h6e95ff9d_0_5 = (1U & (vlSelfRef.tb_cpu__DOT__dut__DOT__imem_inst__DOT__memory
                                            [(0x000000ffU 
                                              & (vlSelfRef.tb_cpu__DOT__dut__DOT__pc 
                                                 >> 2U))] 
                                            >> 2U));
    __VdfgRegularize_h6e95ff9d_0_9 = (1U & (vlSelfRef.tb_cpu__DOT__dut__DOT__imem_inst__DOT__memory
                                            [(0x000000ffU 
                                              & (vlSelfRef.tb_cpu__DOT__dut__DOT__pc 
                                                 >> 2U))] 
                                            >> 4U));
    __VdfgRegularize_h6e95ff9d_0_17 = (1U & (vlSelfRef.tb_cpu__DOT__dut__DOT__imem_inst__DOT__memory
                                             [(0x000000ffU 
                                               & (vlSelfRef.tb_cpu__DOT__dut__DOT__pc 
                                                  >> 2U))] 
                                             >> 3U));
    __VdfgRegularize_h6e95ff9d_0_18 = (1U & (vlSelfRef.tb_cpu__DOT__dut__DOT__imem_inst__DOT__memory
                                             [(0x000000ffU 
                                               & (vlSelfRef.tb_cpu__DOT__dut__DOT__pc 
                                                  >> 2U))] 
                                             >> 5U));
    vlSelfRef.tb_cpu__DOT__dut__DOT__alu_ctrl_inst__DOT__alu_operation 
        = ((2U & (IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__alu_op_2))
            ? ((0x00004000U & vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2)
                ? ((0x00002000U & vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2)
                    ? (1U & (- (IData)((1U & (~ (vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2 
                                                 >> 0x0000000cU))))))
                    : ((0x00001000U & vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2)
                        ? ((0x20U == (vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2 
                                      >> 0x00000019U))
                            ? 7U : 5U) : 3U)) : ((0x00002000U 
                                                  & vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2)
                                                  ? 
                                                 ((0x00001000U 
                                                   & vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2)
                                                   ? 9U
                                                   : 8U)
                                                  : 
                                                 ((0x00001000U 
                                                   & vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2)
                                                   ? 4U
                                                   : 
                                                  (((0x20U 
                                                     == 
                                                     (vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2 
                                                      >> 0x00000019U)) 
                                                    & (2U 
                                                       == (IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__alu_op_2)))
                                                    ? 6U
                                                    : 2U))))
            : ((1U & (IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__alu_op_2))
                ? 6U : 2U));
    __VdfgRegularize_h6e95ff9d_0_4 = (vlSelfRef.tb_cpu__DOT__dut__DOT__imem_inst__DOT__memory
                                      [(0x000000ffU 
                                        & (vlSelfRef.tb_cpu__DOT__dut__DOT__pc 
                                           >> 2U))] 
                                      >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (0x0000007fU 
                                                & vlSelfRef.tb_cpu__DOT__dut__DOT__imem_inst__DOT__memory
                                                [(0x000000ffU 
                                                  & (vlSelfRef.tb_cpu__DOT__dut__DOT__pc 
                                                     >> 2U))]);
    __VdfgRegularize_h6e95ff9d_0_15 = (3U == (3U & vlSelfRef.tb_cpu__DOT__dut__DOT__imem_inst__DOT__memory
                                              [(0x000000ffU 
                                                & (vlSelfRef.tb_cpu__DOT__dut__DOT__pc 
                                                   >> 2U))]));
    vlSelfRef.tb_cpu__DOT__dut__DOT__wd_rf_3 = ((IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__mem_to_reg_3)
                                                 ? vlSelfRef.tb_cpu__DOT__dut__DOT__mem_rdata_3
                                                 : vlSelfRef.tb_cpu__DOT__dut__DOT__alu_out_3);
    vlSelfRef.tb_cpu__DOT__dut__DOT__stall = 0U;
    if ((((IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__we_rf_2) 
          & (0U != (0x0000001fU & (vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2 
                                   >> 7U)))) & (((0x0000001fU 
                                                  & (vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2 
                                                     >> 7U)) 
                                                 == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                                | ((0x0000001fU 
                                                    & (vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2 
                                                       >> 7U)) 
                                                   == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))))) {
        vlSelfRef.tb_cpu__DOT__dut__DOT__stall = 1U;
    } else if ((((IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__we_rf_3) 
                 & (0U != (IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__waddr_rf_3))) 
                & (((IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__waddr_rf_3) 
                    == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                   | ((IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__waddr_rf_3) 
                      == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))))) {
        vlSelfRef.tb_cpu__DOT__dut__DOT__stall = 1U;
    }
    vlSelfRef.tb_cpu__DOT__dut__DOT__jump_reg_1 = 0U;
    vlSelfRef.tb_cpu__DOT__dut__DOT__jump_1 = 0U;
    vlSelfRef.tb_cpu__DOT__dut__DOT__branch_1 = 0U;
    vlSelfRef.tb_cpu__DOT__dut__DOT__mem_wen_1 = 0U;
    vlSelfRef.tb_cpu__DOT__dut__DOT__mem_to_reg_1 = 0U;
    vlSelfRef.tb_cpu__DOT__dut__DOT__alu_op_1 = 0U;
    vlSelfRef.tb_cpu__DOT__dut__DOT__we_rf_1 = 0U;
    vlSelfRef.tb_cpu__DOT__dut__DOT__load_unsigned_1 = 1U;
    vlSelfRef.tb_cpu__DOT__dut__DOT__wmask_1 = 0U;
    vlSelfRef.tb_cpu__DOT__dut__DOT__rmask_1 = 0U;
    if (((((((((3U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
               | (0x23U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) 
              | (0x33U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) 
             | (0x13U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) 
            | (0x63U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) 
           | (0x6fU == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) 
          | (0x67U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) 
         | (0x37U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)))) {
        if ((3U != (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) {
            if ((0x23U != (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) {
                if ((0x33U != (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) {
                    if ((0x13U != (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) {
                        if ((0x63U != (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) {
                            if ((0x6fU != (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) {
                                if ((0x67U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) {
                                    vlSelfRef.tb_cpu__DOT__dut__DOT__jump_reg_1 = 1U;
                                }
                            }
                            if ((0x6fU == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) {
                                vlSelfRef.tb_cpu__DOT__dut__DOT__jump_1 = 1U;
                            } else if ((0x67U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) {
                                vlSelfRef.tb_cpu__DOT__dut__DOT__jump_1 = 1U;
                            }
                        }
                        if ((0x63U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) {
                            vlSelfRef.tb_cpu__DOT__dut__DOT__branch_1 = 1U;
                        }
                    }
                }
            }
            if ((0x23U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) {
                vlSelfRef.tb_cpu__DOT__dut__DOT__mem_wen_1 = 1U;
                vlSelfRef.tb_cpu__DOT__dut__DOT__wmask_1 
                    = ((0U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
                        ? 2U : ((1U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
                                 ? 1U : 0U));
            }
        }
        if ((3U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) {
            vlSelfRef.tb_cpu__DOT__dut__DOT__mem_to_reg_1 = 1U;
            vlSelfRef.tb_cpu__DOT__dut__DOT__alu_op_1 = 0U;
            vlSelfRef.tb_cpu__DOT__dut__DOT__load_unsigned_1 = 1U;
            if ((0U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))) {
                vlSelfRef.tb_cpu__DOT__dut__DOT__load_unsigned_1 = 0U;
                vlSelfRef.tb_cpu__DOT__dut__DOT__rmask_1 = 2U;
            } else {
                if ((4U != (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))) {
                    if ((1U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))) {
                        vlSelfRef.tb_cpu__DOT__dut__DOT__load_unsigned_1 = 0U;
                    }
                }
                vlSelfRef.tb_cpu__DOT__dut__DOT__rmask_1 
                    = ((4U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
                        ? 2U : ((1U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
                                 ? 1U : ((5U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))
                                          ? 1U : 0U)));
            }
        } else {
            vlSelfRef.tb_cpu__DOT__dut__DOT__alu_op_1 
                = ((0x23U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                    ? 0U : ((0x33U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                             ? 2U : ((0x13U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                      ? 3U : ((0x63U 
                                               == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                               ? 1U
                                               : 0U))));
        }
        vlSelfRef.tb_cpu__DOT__dut__DOT__we_rf_1 = 
            ((3U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
             || ((0x23U != (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                 && ((0x33U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                     || ((0x13U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                         || (0x63U != (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))));
    } else if ((0x17U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) {
        vlSelfRef.tb_cpu__DOT__dut__DOT__alu_op_1 = 0U;
        vlSelfRef.tb_cpu__DOT__dut__DOT__we_rf_1 = 1U;
    }
    __VdfgRegularize_h6e95ff9d_0_16 = (0xfffff000U 
                                       & (vlSelfRef.tb_cpu__DOT__dut__DOT__imem_inst__DOT__memory
                                          [(0x000000ffU 
                                            & (vlSelfRef.tb_cpu__DOT__dut__DOT__pc 
                                               >> 2U))] 
                                          & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_15)))));
    __VdfgRegularize_h6e95ff9d_0_8 = ((((- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_4))) 
                                        << 0x0000000cU) 
                                       | (vlSelfRef.tb_cpu__DOT__dut__DOT__imem_inst__DOT__memory
                                          [(0x000000ffU 
                                            & (vlSelfRef.tb_cpu__DOT__dut__DOT__pc 
                                               >> 2U))] 
                                          >> 0x00000014U)) 
                                      & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_15))));
    vlSelfRef.tb_cpu__DOT__dut__DOT__forwarded_rs2_2 
        = vlSelfRef.tb_cpu__DOT__dut__DOT__rd2_2;
    if (((IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__we_rf_3) 
         & (0U != (IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__waddr_rf_3)))) {
        if (((IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__waddr_rf_3) 
             == (0x0000001fU & (vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2 
                                >> 0x00000014U)))) {
            vlSelfRef.tb_cpu__DOT__dut__DOT__forwarded_rs2_2 
                = vlSelfRef.tb_cpu__DOT__dut__DOT__wd_rf_3;
        }
    }
    vlSelfRef.tb_cpu__DOT__dut__DOT__alu_srcB_2 = (
                                                   ((0x33U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2)) 
                                                    | (0x63U 
                                                       == 
                                                       (0x0000007fU 
                                                        & vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2)))
                                                    ? vlSelfRef.tb_cpu__DOT__dut__DOT__forwarded_rs2_2
                                                    : 
                                                   (((0x6fU 
                                                      == 
                                                      (0x0000007fU 
                                                       & vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2)) 
                                                     | (0x67U 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2)))
                                                     ? 0U
                                                     : vlSelfRef.tb_cpu__DOT__dut__DOT__imm_2));
    vlSelfRef.tb_cpu__DOT__dut__DOT__forwarded_rs1_2 
        = vlSelfRef.tb_cpu__DOT__dut__DOT__rd1_2;
    if (((IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__we_rf_3) 
         & (0U != (IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__waddr_rf_3)))) {
        if (((IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__waddr_rf_3) 
             == (0x0000001fU & (vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2 
                                >> 0x0000000fU)))) {
            vlSelfRef.tb_cpu__DOT__dut__DOT__forwarded_rs1_2 
                = vlSelfRef.tb_cpu__DOT__dut__DOT__wd_rf_3;
        }
    }
    vlSelfRef.tb_cpu__DOT__dut__DOT__imm_1 = ((0x00000040U 
                                               & vlSelfRef.tb_cpu__DOT__dut__DOT__imem_inst__DOT__memory
                                               [(0x000000ffU 
                                                 & (vlSelfRef.tb_cpu__DOT__dut__DOT__pc 
                                                    >> 2U))])
                                               ? ((- (IData)(
                                                             (1U 
                                                              & (~ (IData)(__VdfgRegularize_h6e95ff9d_0_9))))) 
                                                  & (((IData)(__VdfgRegularize_h6e95ff9d_0_17)
                                                       ? 
                                                      ((((- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_4))) 
                                                         << 0x00000014U) 
                                                        | ((((0x000001feU 
                                                              & (vlSelfRef.tb_cpu__DOT__dut__DOT__imem_inst__DOT__memory
                                                                 [
                                                                 (0x000000ffU 
                                                                  & (vlSelfRef.tb_cpu__DOT__dut__DOT__pc 
                                                                     >> 2U))] 
                                                                 >> 0x0000000bU)) 
                                                             | (1U 
                                                                & (vlSelfRef.tb_cpu__DOT__dut__DOT__imem_inst__DOT__memory
                                                                   [
                                                                   (0x000000ffU 
                                                                    & (vlSelfRef.tb_cpu__DOT__dut__DOT__pc 
                                                                       >> 2U))] 
                                                                   >> 0x00000014U))) 
                                                            << 0x0000000bU) 
                                                           | (0x000007feU 
                                                              & (vlSelfRef.tb_cpu__DOT__dut__DOT__imem_inst__DOT__memory
                                                                 [
                                                                 (0x000000ffU 
                                                                  & (vlSelfRef.tb_cpu__DOT__dut__DOT__pc 
                                                                     >> 2U))] 
                                                                 >> 0x00000014U)))) 
                                                       & (- (IData)(
                                                                    (7U 
                                                                     == 
                                                                     (7U 
                                                                      & vlSelfRef.tb_cpu__DOT__dut__DOT__imem_inst__DOT__memory
                                                                      [
                                                                      (0x000000ffU 
                                                                       & (vlSelfRef.tb_cpu__DOT__dut__DOT__pc 
                                                                          >> 2U))])))))
                                                       : 
                                                      ((IData)(__VdfgRegularize_h6e95ff9d_0_5)
                                                        ? __VdfgRegularize_h6e95ff9d_0_8
                                                        : 
                                                       ((((- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_4))) 
                                                          << 0x0000000dU) 
                                                         | ((((IData)(__VdfgRegularize_h6e95ff9d_0_4) 
                                                              << 0x0000000cU) 
                                                             | (0x00000800U 
                                                                & (vlSelfRef.tb_cpu__DOT__dut__DOT__imem_inst__DOT__memory
                                                                   [
                                                                   (0x000000ffU 
                                                                    & (vlSelfRef.tb_cpu__DOT__dut__DOT__pc 
                                                                       >> 2U))] 
                                                                   << 4U))) 
                                                            | ((0x000007e0U 
                                                                & (vlSelfRef.tb_cpu__DOT__dut__DOT__imem_inst__DOT__memory
                                                                   [
                                                                   (0x000000ffU 
                                                                    & (vlSelfRef.tb_cpu__DOT__dut__DOT__pc 
                                                                       >> 2U))] 
                                                                   >> 0x00000014U)) 
                                                               | (0x0000001eU 
                                                                  & (vlSelfRef.tb_cpu__DOT__dut__DOT__imem_inst__DOT__memory
                                                                     [
                                                                     (0x000000ffU 
                                                                      & (vlSelfRef.tb_cpu__DOT__dut__DOT__pc 
                                                                         >> 2U))] 
                                                                     >> 7U))))) 
                                                        & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_15)))))) 
                                                     & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_18)))))
                                               : ((IData)(__VdfgRegularize_h6e95ff9d_0_18)
                                                   ? 
                                                  ((IData)(__VdfgRegularize_h6e95ff9d_0_9)
                                                    ? 
                                                   ((- (IData)(
                                                               ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_17)) 
                                                                & (IData)(__VdfgRegularize_h6e95ff9d_0_5)))) 
                                                    & __VdfgRegularize_h6e95ff9d_0_16)
                                                    : 
                                                   ((((- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_4))) 
                                                      << 0x0000000cU) 
                                                     | ((0x00000fe0U 
                                                         & (vlSelfRef.tb_cpu__DOT__dut__DOT__imem_inst__DOT__memory
                                                            [
                                                            (0x000000ffU 
                                                             & (vlSelfRef.tb_cpu__DOT__dut__DOT__pc 
                                                                >> 2U))] 
                                                            >> 0x00000014U)) 
                                                        | (0x0000001fU 
                                                           & (vlSelfRef.tb_cpu__DOT__dut__DOT__imem_inst__DOT__memory
                                                              [
                                                              (0x000000ffU 
                                                               & (vlSelfRef.tb_cpu__DOT__dut__DOT__pc 
                                                                  >> 2U))] 
                                                              >> 7U)))) 
                                                    & (- (IData)(
                                                                 ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_5)) 
                                                                  & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_17)) 
                                                                     & (IData)(__VdfgRegularize_h6e95ff9d_0_15)))))))
                                                   : 
                                                  ((IData)(__VdfgRegularize_h6e95ff9d_0_9)
                                                    ? 
                                                   (((IData)(__VdfgRegularize_h6e95ff9d_0_5)
                                                      ? __VdfgRegularize_h6e95ff9d_0_16
                                                      : __VdfgRegularize_h6e95ff9d_0_8) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (~ (IData)(__VdfgRegularize_h6e95ff9d_0_17))))))
                                                    : 
                                                   (__VdfgRegularize_h6e95ff9d_0_8 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (~ (IData)(__VdfgRegularize_h6e95ff9d_0_17))))) 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (~ (IData)(__VdfgRegularize_h6e95ff9d_0_5))))))))));
    vlSelfRef.tb_cpu__DOT__dut__DOT__alu_inst__DOT__op_A 
        = ((0x17U == (0x0000007fU & vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2))
            ? vlSelfRef.tb_cpu__DOT__dut__DOT__pc_2
            : ((((0x6fU == (0x0000007fU & vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2)) 
                 | (0x67U == (0x0000007fU & vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2)))
                 ? ((IData)(4U) + vlSelfRef.tb_cpu__DOT__dut__DOT__pc_2)
                 : vlSelfRef.tb_cpu__DOT__dut__DOT__forwarded_rs1_2) 
               & (- (IData)((0x37U != (0x0000007fU 
                                       & vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2))))));
    __Vtableidx1 = (((vlSelfRef.tb_cpu__DOT__dut__DOT__forwarded_rs1_2 
                      < vlSelfRef.tb_cpu__DOT__dut__DOT__forwarded_rs2_2) 
                     << 5U) | ((VL_LTS_III(32, vlSelfRef.tb_cpu__DOT__dut__DOT__forwarded_rs1_2, vlSelfRef.tb_cpu__DOT__dut__DOT__forwarded_rs2_2) 
                                << 4U) | (((vlSelfRef.tb_cpu__DOT__dut__DOT__forwarded_rs1_2 
                                            == vlSelfRef.tb_cpu__DOT__dut__DOT__forwarded_rs2_2) 
                                           << 3U) | 
                                          (7U & (vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2 
                                                 >> 0x0000000cU)))));
    vlSelfRef.tb_cpu__DOT__dut__DOT__branch_taken_2 
        = Vtb_cpu__ConstPool__TABLE_hfe2418f9_0[__Vtableidx1];
    vlSelfRef.tb_cpu__DOT__dut__DOT__alu_inst__DOT__result 
        = ((8U & (IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__alu_ctrl_inst__DOT__alu_operation))
            ? ((- (IData)((1U & (~ ((IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__alu_ctrl_inst__DOT__alu_operation) 
                                    >> 1U))))) & ((
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__alu_ctrl_inst__DOT__alu_operation))
                                                    ? 
                                                   (1U 
                                                    & (- (IData)(
                                                                 (vlSelfRef.tb_cpu__DOT__dut__DOT__alu_inst__DOT__op_A 
                                                                  < vlSelfRef.tb_cpu__DOT__dut__DOT__alu_srcB_2))))
                                                    : 
                                                   (1U 
                                                    & (- (IData)(
                                                                 VL_LTS_III(32, vlSelfRef.tb_cpu__DOT__dut__DOT__alu_inst__DOT__op_A, vlSelfRef.tb_cpu__DOT__dut__DOT__alu_srcB_2))))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (~ 
                                                                   ((IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__alu_ctrl_inst__DOT__alu_operation) 
                                                                    >> 2U)))))))
            : ((4U & (IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__alu_ctrl_inst__DOT__alu_operation))
                ? ((2U & (IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__alu_ctrl_inst__DOT__alu_operation))
                    ? ((1U & (IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__alu_ctrl_inst__DOT__alu_operation))
                        ? VL_SHIFTRS_III(32,32,5, vlSelfRef.tb_cpu__DOT__dut__DOT__alu_inst__DOT__op_A, 
                                         (0x0000001fU 
                                          & vlSelfRef.tb_cpu__DOT__dut__DOT__alu_srcB_2))
                        : (vlSelfRef.tb_cpu__DOT__dut__DOT__alu_inst__DOT__op_A 
                           - vlSelfRef.tb_cpu__DOT__dut__DOT__alu_srcB_2))
                    : ((1U & (IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__alu_ctrl_inst__DOT__alu_operation))
                        ? (vlSelfRef.tb_cpu__DOT__dut__DOT__alu_inst__DOT__op_A 
                           >> (0x0000001fU & vlSelfRef.tb_cpu__DOT__dut__DOT__alu_srcB_2))
                        : (vlSelfRef.tb_cpu__DOT__dut__DOT__alu_inst__DOT__op_A 
                           << (0x0000001fU & vlSelfRef.tb_cpu__DOT__dut__DOT__alu_srcB_2))))
                : ((2U & (IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__alu_ctrl_inst__DOT__alu_operation))
                    ? ((1U & (IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__alu_ctrl_inst__DOT__alu_operation))
                        ? (vlSelfRef.tb_cpu__DOT__dut__DOT__alu_srcB_2 
                           ^ vlSelfRef.tb_cpu__DOT__dut__DOT__alu_inst__DOT__op_A)
                        : (vlSelfRef.tb_cpu__DOT__dut__DOT__alu_srcB_2 
                           + vlSelfRef.tb_cpu__DOT__dut__DOT__alu_inst__DOT__op_A))
                    : ((1U & (IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__alu_ctrl_inst__DOT__alu_operation))
                        ? (vlSelfRef.tb_cpu__DOT__dut__DOT__alu_srcB_2 
                           | vlSelfRef.tb_cpu__DOT__dut__DOT__alu_inst__DOT__op_A)
                        : (vlSelfRef.tb_cpu__DOT__dut__DOT__alu_srcB_2 
                           & vlSelfRef.tb_cpu__DOT__dut__DOT__alu_inst__DOT__op_A)))));
    vlSelfRef.tb_cpu__DOT__dut__DOT__flush = 0U;
    vlSelfRef.tb_cpu__DOT__dut__DOT__pc_next = ((IData)(4U) 
                                                + vlSelfRef.tb_cpu__DOT__dut__DOT__pc);
    if (vlSelfRef.tb_cpu__DOT__dut__DOT__jump_2) {
        vlSelfRef.tb_cpu__DOT__dut__DOT__flush = 1U;
        vlSelfRef.tb_cpu__DOT__dut__DOT__pc_next = 
            ((IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__jump_reg_2)
              ? (0xfffffffeU & (vlSelfRef.tb_cpu__DOT__dut__DOT__forwarded_rs1_2 
                                + vlSelfRef.tb_cpu__DOT__dut__DOT__imm_2))
              : (vlSelfRef.tb_cpu__DOT__dut__DOT__pc_2 
                 + vlSelfRef.tb_cpu__DOT__dut__DOT__imm_2));
    } else if (((IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__branch_2) 
                & (IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__branch_taken_2))) {
        vlSelfRef.tb_cpu__DOT__dut__DOT__flush = 1U;
        vlSelfRef.tb_cpu__DOT__dut__DOT__pc_next = 
            (vlSelfRef.tb_cpu__DOT__dut__DOT__pc_2 
             + vlSelfRef.tb_cpu__DOT__dut__DOT__imm_2);
    }
    vlSelfRef.tb_cpu__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word 
        = vlSelfRef.tb_cpu__DOT__dut__DOT__dmem_inst__DOT__memory
        [(0x000000ffU & (vlSelfRef.tb_cpu__DOT__dut__DOT__alu_inst__DOT__result 
                         >> 2U))];
    if ((0U == (IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__rmask_2))) {
        vlSelfRef.tb_cpu__DOT__dut__DOT__mem_rdata_2 
            = vlSelfRef.tb_cpu__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word;
    } else if ((1U == (IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__rmask_2))) {
        vlSelfRef.tb_cpu__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__half_word 
            = (0x0000ffffU & ((2U == (3U & vlSelfRef.tb_cpu__DOT__dut__DOT__alu_inst__DOT__result))
                               ? (vlSelfRef.tb_cpu__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word 
                                  >> 0x10U) : vlSelfRef.tb_cpu__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word));
        vlSelfRef.tb_cpu__DOT__dut__DOT__mem_rdata_2 
            = ((IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__load_unsigned_2)
                ? (IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__half_word)
                : (((- (IData)((1U & ((IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__half_word) 
                                      >> 0x0fU)))) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__half_word)));
    } else if ((2U == (IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__rmask_2))) {
        vlSelfRef.tb_cpu__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__byte_val 
            = (0x000000ffU & ((0U == (3U & vlSelfRef.tb_cpu__DOT__dut__DOT__alu_inst__DOT__result))
                               ? vlSelfRef.tb_cpu__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word
                               : ((1U == (3U & vlSelfRef.tb_cpu__DOT__dut__DOT__alu_inst__DOT__result))
                                   ? (vlSelfRef.tb_cpu__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word 
                                      >> 8U) : ((2U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.tb_cpu__DOT__dut__DOT__alu_inst__DOT__result))
                                                 ? 
                                                (vlSelfRef.tb_cpu__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word 
                                                 >> 0x10U)
                                                 : 
                                                (vlSelfRef.tb_cpu__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word 
                                                 >> 0x18U)))));
        vlSelfRef.tb_cpu__DOT__dut__DOT__mem_rdata_2 
            = ((IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__load_unsigned_2)
                ? (IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__byte_val)
                : (((- (IData)((1U & ((IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__byte_val) 
                                      >> 7U)))) << 8U) 
                   | (IData)(vlSelfRef.tb_cpu__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__byte_val)));
    } else {
        vlSelfRef.tb_cpu__DOT__dut__DOT__mem_rdata_2 = 0U;
    }
}

VL_ATTR_COLD void Vtb_cpu___024root____Vm_traceActivitySetAll(Vtb_cpu___024root* vlSelf);

VL_ATTR_COLD void Vtb_cpu___024root___eval_stl(Vtb_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_stl\n"); );
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_cpu___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_cpu___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_cpu___024root___eval_phase__stl(Vtb_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_phase__stl\n"); );
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_cpu___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cpu___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_cpu___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_cpu___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_cpu___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_cpu___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_cpu.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_cpu___024root____Vm_traceActivitySetAll(Vtb_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root____Vm_traceActivitySetAll\n"); );
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vtb_cpu___024root___ctor_var_reset(Vtb_cpu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___ctor_var_reset\n"); );
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_cpu__DOT__dut__DOT__pc_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7085723591465516397ull);
    vlSelf->tb_cpu__DOT__dut__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 721484257191296466ull);
    vlSelf->tb_cpu__DOT__dut__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17730026064846381287ull);
    vlSelf->tb_cpu__DOT__dut__DOT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1372845963949069005ull);
    vlSelf->tb_cpu__DOT__dut__DOT__imm_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3522804098264135667ull);
    vlSelf->tb_cpu__DOT__dut__DOT__we_rf_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15577258495767937239ull);
    vlSelf->tb_cpu__DOT__dut__DOT__alu_op_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14863711328184247800ull);
    vlSelf->tb_cpu__DOT__dut__DOT__mem_to_reg_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17693709825443854785ull);
    vlSelf->tb_cpu__DOT__dut__DOT__rmask_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2780712402455088812ull);
    vlSelf->tb_cpu__DOT__dut__DOT__wmask_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17291820645576925486ull);
    vlSelf->tb_cpu__DOT__dut__DOT__mem_wen_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12361707246130839744ull);
    vlSelf->tb_cpu__DOT__dut__DOT__load_unsigned_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15839000454721384174ull);
    vlSelf->tb_cpu__DOT__dut__DOT__branch_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7212804673731790219ull);
    vlSelf->tb_cpu__DOT__dut__DOT__jump_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4090326299302298834ull);
    vlSelf->tb_cpu__DOT__dut__DOT__jump_reg_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9575913596990377149ull);
    vlSelf->tb_cpu__DOT__dut__DOT__inst_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9387498578966714890ull);
    vlSelf->tb_cpu__DOT__dut__DOT__pc_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12335284016245063739ull);
    vlSelf->tb_cpu__DOT__dut__DOT__imm_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9155653988562893977ull);
    vlSelf->tb_cpu__DOT__dut__DOT__rd1_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15923293750287766053ull);
    vlSelf->tb_cpu__DOT__dut__DOT__rd2_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7140477316826056512ull);
    vlSelf->tb_cpu__DOT__dut__DOT__we_rf_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7881971369564049826ull);
    vlSelf->tb_cpu__DOT__dut__DOT__alu_op_2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17562591360938992972ull);
    vlSelf->tb_cpu__DOT__dut__DOT__mem_to_reg_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16482645993892663046ull);
    vlSelf->tb_cpu__DOT__dut__DOT__rmask_2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8978698587790830678ull);
    vlSelf->tb_cpu__DOT__dut__DOT__wmask_2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13692132000506906232ull);
    vlSelf->tb_cpu__DOT__dut__DOT__mem_wen_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4346788054375805638ull);
    vlSelf->tb_cpu__DOT__dut__DOT__load_unsigned_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15510812849822289239ull);
    vlSelf->tb_cpu__DOT__dut__DOT__branch_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8353282455965566636ull);
    vlSelf->tb_cpu__DOT__dut__DOT__jump_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4069721155775824182ull);
    vlSelf->tb_cpu__DOT__dut__DOT__jump_reg_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17628624866693993123ull);
    vlSelf->tb_cpu__DOT__dut__DOT__mem_rdata_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6817004520696722011ull);
    vlSelf->tb_cpu__DOT__dut__DOT__branch_taken_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5710812976088958708ull);
    vlSelf->tb_cpu__DOT__dut__DOT__forwarded_rs1_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6781326030315151952ull);
    vlSelf->tb_cpu__DOT__dut__DOT__forwarded_rs2_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6324995748682660258ull);
    vlSelf->tb_cpu__DOT__dut__DOT__alu_srcB_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5008473651389260296ull);
    vlSelf->tb_cpu__DOT__dut__DOT__we_rf_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2227726643653302274ull);
    vlSelf->tb_cpu__DOT__dut__DOT__waddr_rf_3 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12629421882284432066ull);
    vlSelf->tb_cpu__DOT__dut__DOT__wd_rf_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 22768824241783373ull);
    vlSelf->tb_cpu__DOT__dut__DOT__mem_to_reg_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12296275779037961310ull);
    vlSelf->tb_cpu__DOT__dut__DOT__alu_out_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8391907829641994053ull);
    vlSelf->tb_cpu__DOT__dut__DOT__mem_rdata_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5041810372401681509ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_cpu__DOT__dut__DOT__imem_inst__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7390041444695106774ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14569037200908141084ull);
    }
    vlSelf->tb_cpu__DOT__dut__DOT__alu_ctrl_inst__DOT__alu_operation = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11950356888760306686ull);
    vlSelf->tb_cpu__DOT__dut__DOT__alu_inst__DOT__op_A = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2360337138737231392ull);
    vlSelf->tb_cpu__DOT__dut__DOT__alu_inst__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13705580842499328425ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_cpu__DOT__dut__DOT__dmem_inst__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4112476570899044093ull);
    }
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_cpu__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
