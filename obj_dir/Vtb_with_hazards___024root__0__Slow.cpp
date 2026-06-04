// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_with_hazards.h for the primary calling header

#include "Vtb_with_hazards__pch.h"

VL_ATTR_COLD void Vtb_with_hazards___024root___eval_static__TOP(Vtb_with_hazards___024root* vlSelf);
void Vtb_with_hazards___024root___timing_ready(Vtb_with_hazards___024root* vlSelf);

VL_ATTR_COLD void Vtb_with_hazards___024root___eval_static(Vtb_with_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___eval_static\n"); );
    Vtb_with_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_with_hazards___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_with_hazards__DOT__clk__0 = 0U;
    Vtb_with_hazards___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_with_hazards___024root___eval_static__TOP(Vtb_with_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___eval_static__TOP\n"); );
    Vtb_with_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_with_hazards__DOT__clk = 0U;
    vlSelfRef.tb_with_hazards__DOT__rst = 1U;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13669855312451940827ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__half_word = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3310274207616867600ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__byte_val = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10654238058705682749ull);
}

VL_ATTR_COLD void Vtb_with_hazards___024root___eval_final(Vtb_with_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___eval_final\n"); );
    Vtb_with_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_with_hazards___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_with_hazards___024root___eval_phase__stl(Vtb_with_hazards___024root* vlSelf);

VL_ATTR_COLD void Vtb_with_hazards___024root___eval_settle(Vtb_with_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___eval_settle\n"); );
    Vtb_with_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_with_hazards___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tests/tb_with_hazards.sv", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_with_hazards___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_with_hazards___024root___eval_triggers_vec__stl(Vtb_with_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___eval_triggers_vec__stl\n"); );
    Vtb_with_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_with_hazards___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_with_hazards___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_with_hazards___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_with_hazards___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<CData/*0:0*/, 64> Vtb_with_hazards__ConstPool__TABLE_hfe2569db_0;

VL_ATTR_COLD void Vtb_with_hazards___024root___stl_sequent__TOP__0(Vtb_with_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___stl_sequent__TOP__0\n"); );
    Vtb_with_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
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
    vlSelfRef.tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__wd_rf 
        = ((IData)(vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_to_reg_3)
            ? vlSelfRef.tb_with_hazards__DOT__dut__DOT__mem_rdata_3
            : vlSelfRef.tb_with_hazards__DOT__dut__DOT__alu_out_3);
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
}

VL_ATTR_COLD void Vtb_with_hazards___024root____Vm_traceActivitySetAll(Vtb_with_hazards___024root* vlSelf);

VL_ATTR_COLD void Vtb_with_hazards___024root___eval_stl(Vtb_with_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___eval_stl\n"); );
    Vtb_with_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_with_hazards___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_with_hazards___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_with_hazards___024root___eval_phase__stl(Vtb_with_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___eval_phase__stl\n"); );
    Vtb_with_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_with_hazards___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_with_hazards___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_with_hazards___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_with_hazards___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_with_hazards___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_with_hazards___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_with_hazards___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_with_hazards.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_with_hazards.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_with_hazards___024root____Vm_traceActivitySetAll(Vtb_with_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root____Vm_traceActivitySetAll\n"); );
    Vtb_with_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
}

VL_ATTR_COLD void Vtb_with_hazards___024root___ctor_var_reset(Vtb_with_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_with_hazards___024root___ctor_var_reset\n"); );
    Vtb_with_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_with_hazards__DOT__dut__DOT__pc_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 520082656832973104ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7390901319336294608ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9293666798048701063ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10723318135488951545ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__imm_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14910400732822354808ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__we_rf_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4373319842132176071ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__alu_op_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11734080792867341662ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__mem_to_reg_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8963236953844566759ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__rmask_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 576655040685101655ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__wmask_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4726137387423666045ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__mem_wen_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3031465478790774425ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__load_unsigned_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13226383660119073800ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__branch_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12743059319876231450ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__jump_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8011423692184028878ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__jump_reg_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17156544033868606783ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__inst_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14334501327132623069ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__pc_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1303662481904568213ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__imm_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17322291111328536558ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__rd1_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10696138252940220168ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__rd2_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18015964870308692299ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__we_rf_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8037947677670591643ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__alu_op_2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12007875191853892215ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__mem_to_reg_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12100625762353757303ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__rmask_2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13029824952932059563ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__wmask_2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16507138162058356766ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__mem_wen_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10187943692390513576ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__load_unsigned_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14188679066832125183ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__branch_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15365802167277468305ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__jump_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8684857374548345294ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__jump_reg_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6635383297011248211ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__mem_rdata_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9968846648796339836ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__branch_taken_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16116251541910227630ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__forwarded_rs1_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12416606855715361872ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__forwarded_rs2_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2890968863821083955ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__alu_srcB_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8540745964680039988ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__we_rf_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5524658783734439400ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__waddr_rf_3 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8356694356428297296ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__mem_to_reg_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14846666477926088278ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__alu_out_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12138860031526033362ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__mem_rdata_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4863180040638634784ull);
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->tb_with_hazards__DOT__dut__DOT__imem_inst__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13933888778612437059ull);
    }
    vlSelf->tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__wd_rf = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3820080976439227399ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_with_hazards__DOT__dut__DOT__rf_inst__DOT__rf[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11139220735853172126ull);
    }
    vlSelf->tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__op_A = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18178476044014218274ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__alu_operation = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11591056799013017846ull);
    vlSelf->tb_with_hazards__DOT__dut__DOT__alu_inst__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13622918043623344273ull);
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->tb_with_hazards__DOT__dut__DOT__dmem_inst__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13557774797377045448ull);
    }
    vlSelf->__VdfgRegularize_hebeb780c_0_0 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_1 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_2 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_3 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_with_hazards__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
