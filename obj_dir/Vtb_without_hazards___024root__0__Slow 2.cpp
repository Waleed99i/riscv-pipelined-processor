// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_without_hazards.h for the primary calling header

#include "Vtb_without_hazards__pch.h"

VL_ATTR_COLD void Vtb_without_hazards___024root___eval_static__TOP(Vtb_without_hazards___024root* vlSelf);
void Vtb_without_hazards___024root___timing_ready(Vtb_without_hazards___024root* vlSelf);

VL_ATTR_COLD void Vtb_without_hazards___024root___eval_static(Vtb_without_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_without_hazards___024root___eval_static\n"); );
    Vtb_without_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_without_hazards___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_without_hazards__DOT__clk__0 = 0U;
    Vtb_without_hazards___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_without_hazards___024root___eval_static__TOP(Vtb_without_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_without_hazards___024root___eval_static__TOP\n"); );
    Vtb_without_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_without_hazards__DOT__clk = 0U;
    vlSelfRef.tb_without_hazards__DOT__rst = 1U;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_without_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5117065529722750907ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__half_word = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10092800996460714687ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__byte_val = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6975514961449234364ull);
}

VL_ATTR_COLD void Vtb_without_hazards___024root___eval_final(Vtb_without_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_without_hazards___024root___eval_final\n"); );
    Vtb_without_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_without_hazards___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_without_hazards___024root___eval_phase__stl(Vtb_without_hazards___024root* vlSelf);

VL_ATTR_COLD void Vtb_without_hazards___024root___eval_settle(Vtb_without_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_without_hazards___024root___eval_settle\n"); );
    Vtb_without_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_without_hazards___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tests/tb_without_hazards.sv", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_without_hazards___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_without_hazards___024root___eval_triggers_vec__stl(Vtb_without_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_without_hazards___024root___eval_triggers_vec__stl\n"); );
    Vtb_without_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_without_hazards___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_without_hazards___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_without_hazards___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_without_hazards___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_without_hazards___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_without_hazards___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<CData/*0:0*/, 64> Vtb_without_hazards__ConstPool__TABLE_hfe2569db_0;

VL_ATTR_COLD void Vtb_without_hazards___024root___stl_sequent__TOP__0(Vtb_without_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_without_hazards___024root___stl_sequent__TOP__0\n"); );
    Vtb_without_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
                                                & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                   [
                                                   (0x000fffffU 
                                                    & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc 
                                                       >> 2U))] 
                                                   >> 0x0000000fU));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_3 = (0x0000001fU 
                                                & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                   [
                                                   (0x000fffffU 
                                                    & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc 
                                                       >> 2U))] 
                                                   >> 0x00000014U));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = (7U 
                                                & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                   [
                                                   (0x000fffffU 
                                                    & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc 
                                                       >> 2U))] 
                                                   >> 0x0000000cU));
    __VdfgRegularize_hebeb780c_0_5 = (1U & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                            [(0x000fffffU 
                                              & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc 
                                                 >> 2U))] 
                                            >> 2U));
    __VdfgRegularize_hebeb780c_0_9 = (1U & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                            [(0x000fffffU 
                                              & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc 
                                                 >> 2U))] 
                                            >> 4U));
    __VdfgRegularize_hebeb780c_0_17 = (1U & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                             [(0x000fffffU 
                                               & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc 
                                                  >> 2U))] 
                                             >> 3U));
    __VdfgRegularize_hebeb780c_0_18 = (1U & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                             [(0x000fffffU 
                                               & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc 
                                                  >> 2U))] 
                                             >> 5U));
    vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__alu_operation 
        = ((2U & (IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_op_2))
            ? ((0x00004000U & vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2)
                ? ((0x00002000U & vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2)
                    ? (1U & (- (IData)((1U & (~ (vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2 
                                                 >> 0x0000000cU))))))
                    : ((0x00001000U & vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2)
                        ? ((0x20U == (vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2 
                                      >> 0x00000019U))
                            ? 7U : 5U) : 3U)) : ((0x00002000U 
                                                  & vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2)
                                                  ? 
                                                 ((0x00001000U 
                                                   & vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2)
                                                   ? 9U
                                                   : 8U)
                                                  : 
                                                 ((0x00001000U 
                                                   & vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2)
                                                   ? 4U
                                                   : 
                                                  (((0x20U 
                                                     == 
                                                     (vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2 
                                                      >> 0x00000019U)) 
                                                    & (2U 
                                                       == (IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_op_2)))
                                                    ? 6U
                                                    : 2U))))
            : ((1U & (IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_op_2))
                ? 6U : 2U));
    __VdfgRegularize_hebeb780c_0_4 = (vlSelfRef.tb_without_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                      [(0x000fffffU 
                                        & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc 
                                           >> 2U))] 
                                      >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (0x0000007fU 
                                                & vlSelfRef.tb_without_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                [(0x000fffffU 
                                                  & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc 
                                                     >> 2U))]);
    __VdfgRegularize_hebeb780c_0_15 = (3U == (3U & vlSelfRef.tb_without_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                              [(0x000fffffU 
                                                & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc 
                                                   >> 2U))]));
    vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__wd_rf 
        = ((IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__mem_to_reg_3)
            ? vlSelfRef.tb_without_hazards__DOT__dut__DOT__mem_rdata_3
            : vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_out_3);
    vlSelfRef.tb_without_hazards__DOT__dut__DOT__stall = 0U;
    if ((((IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__we_rf_2) 
          & (0U != (0x0000001fU & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2 
                                   >> 7U)))) & (((0x0000001fU 
                                                  & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2 
                                                     >> 7U)) 
                                                 == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)) 
                                                | ((0x0000001fU 
                                                    & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2 
                                                       >> 7U)) 
                                                   == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3))))) {
        vlSelfRef.tb_without_hazards__DOT__dut__DOT__stall = 1U;
    } else if ((((IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__we_rf_3) 
                 & (0U != (IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__waddr_rf_3))) 
                & (((IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__waddr_rf_3) 
                    == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)) 
                   | ((IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__waddr_rf_3) 
                      == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3))))) {
        vlSelfRef.tb_without_hazards__DOT__dut__DOT__stall = 1U;
    }
    vlSelfRef.tb_without_hazards__DOT__dut__DOT__we_rf_1 = 0U;
    vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_op_1 = 0U;
    vlSelfRef.tb_without_hazards__DOT__dut__DOT__mem_to_reg_1 = 0U;
    vlSelfRef.tb_without_hazards__DOT__dut__DOT__mem_wen_1 = 0U;
    vlSelfRef.tb_without_hazards__DOT__dut__DOT__branch_1 = 0U;
    vlSelfRef.tb_without_hazards__DOT__dut__DOT__jump_1 = 0U;
    vlSelfRef.tb_without_hazards__DOT__dut__DOT__jump_reg_1 = 0U;
    vlSelfRef.tb_without_hazards__DOT__dut__DOT__rmask_1 = 0U;
    vlSelfRef.tb_without_hazards__DOT__dut__DOT__wmask_1 = 0U;
    vlSelfRef.tb_without_hazards__DOT__dut__DOT__load_unsigned_1 = 1U;
    if (((((((((3U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
               | (0x23U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
              | (0x33U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
             | (0x13U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
            | (0x63U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
           | (0x6fU == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
          | (0x67U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
         | (0x37U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))) {
        vlSelfRef.tb_without_hazards__DOT__dut__DOT__we_rf_1 
            = ((3U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
               || ((0x23U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                   && ((0x33U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                       || ((0x13U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                           || (0x63U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))))));
        if ((3U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
            vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_op_1 = 0U;
            vlSelfRef.tb_without_hazards__DOT__dut__DOT__mem_to_reg_1 = 1U;
            vlSelfRef.tb_without_hazards__DOT__dut__DOT__load_unsigned_1 = 1U;
            if ((0U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))) {
                vlSelfRef.tb_without_hazards__DOT__dut__DOT__rmask_1 = 2U;
                vlSelfRef.tb_without_hazards__DOT__dut__DOT__load_unsigned_1 = 0U;
            } else {
                vlSelfRef.tb_without_hazards__DOT__dut__DOT__rmask_1 
                    = ((4U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))
                        ? 2U : ((1U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))
                                 ? 1U : ((5U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))
                                          ? 1U : 0U)));
                if ((4U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))) {
                    if ((1U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))) {
                        vlSelfRef.tb_without_hazards__DOT__dut__DOT__load_unsigned_1 = 0U;
                    }
                }
            }
        } else {
            vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_op_1 
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
                vlSelfRef.tb_without_hazards__DOT__dut__DOT__mem_wen_1 = 1U;
                vlSelfRef.tb_without_hazards__DOT__dut__DOT__wmask_1 
                    = ((0U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))
                        ? 2U : ((1U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))
                                 ? 1U : 0U));
            }
            if ((0x23U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                if ((0x33U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                    if ((0x13U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                        if ((0x63U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                            vlSelfRef.tb_without_hazards__DOT__dut__DOT__branch_1 = 1U;
                        }
                        if ((0x63U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                            if ((0x6fU == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                                vlSelfRef.tb_without_hazards__DOT__dut__DOT__jump_1 = 1U;
                            } else if ((0x67U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                                vlSelfRef.tb_without_hazards__DOT__dut__DOT__jump_1 = 1U;
                            }
                            if ((0x6fU != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                                if ((0x67U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
                                    vlSelfRef.tb_without_hazards__DOT__dut__DOT__jump_reg_1 = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x17U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) {
        vlSelfRef.tb_without_hazards__DOT__dut__DOT__we_rf_1 = 1U;
        vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_op_1 = 0U;
    }
    __VdfgRegularize_hebeb780c_0_16 = (0xfffff000U 
                                       & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                          [(0x000fffffU 
                                            & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc 
                                               >> 2U))] 
                                          & (- (IData)((IData)(__VdfgRegularize_hebeb780c_0_15)))));
    __VdfgRegularize_hebeb780c_0_8 = ((((- (IData)((IData)(__VdfgRegularize_hebeb780c_0_4))) 
                                        << 0x0000000cU) 
                                       | (vlSelfRef.tb_without_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                          [(0x000fffffU 
                                            & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc 
                                               >> 2U))] 
                                          >> 0x00000014U)) 
                                      & (- (IData)((IData)(__VdfgRegularize_hebeb780c_0_15))));
    vlSelfRef.tb_without_hazards__DOT__dut__DOT__forwarded_rs2_2 
        = vlSelfRef.tb_without_hazards__DOT__dut__DOT__rd2_2;
    if (((IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__we_rf_3) 
         & (0U != (IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__waddr_rf_3)))) {
        if (((IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__waddr_rf_3) 
             == (0x0000001fU & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2 
                                >> 0x00000014U)))) {
            vlSelfRef.tb_without_hazards__DOT__dut__DOT__forwarded_rs2_2 
                = vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__wd_rf;
        }
    }
    vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_srcB_2 
        = (((0x33U == (0x0000007fU & vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2)) 
            | (0x63U == (0x0000007fU & vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2)))
            ? vlSelfRef.tb_without_hazards__DOT__dut__DOT__forwarded_rs2_2
            : (((0x6fU == (0x0000007fU & vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2)) 
                | (0x67U == (0x0000007fU & vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2)))
                ? 0U : vlSelfRef.tb_without_hazards__DOT__dut__DOT__imm_2));
    vlSelfRef.tb_without_hazards__DOT__dut__DOT__forwarded_rs1_2 
        = vlSelfRef.tb_without_hazards__DOT__dut__DOT__rd1_2;
    if (((IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__we_rf_3) 
         & (0U != (IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__waddr_rf_3)))) {
        if (((IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__waddr_rf_3) 
             == (0x0000001fU & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2 
                                >> 0x0000000fU)))) {
            vlSelfRef.tb_without_hazards__DOT__dut__DOT__forwarded_rs1_2 
                = vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__wd_rf;
        }
    }
    vlSelfRef.tb_without_hazards__DOT__dut__DOT__imm_1 
        = ((0x00000040U & vlSelfRef.tb_without_hazards__DOT__dut__DOT__imem_inst__DOT__memory
            [(0x000fffffU & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc 
                             >> 2U))]) ? ((- (IData)(
                                                     (1U 
                                                      & (~ (IData)(__VdfgRegularize_hebeb780c_0_9))))) 
                                          & (((IData)(__VdfgRegularize_hebeb780c_0_17)
                                               ? ((
                                                   ((- (IData)((IData)(__VdfgRegularize_hebeb780c_0_4))) 
                                                    << 0x00000014U) 
                                                   | ((((0x000001feU 
                                                         & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                            [
                                                            (0x000fffffU 
                                                             & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc 
                                                                >> 2U))] 
                                                            >> 0x0000000bU)) 
                                                        | (1U 
                                                           & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                              [
                                                              (0x000fffffU 
                                                               & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc 
                                                                  >> 2U))] 
                                                              >> 0x00000014U))) 
                                                       << 0x0000000bU) 
                                                      | (0x000007feU 
                                                         & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                            [
                                                            (0x000fffffU 
                                                             & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc 
                                                                >> 2U))] 
                                                            >> 0x00000014U)))) 
                                                  & (- (IData)(
                                                               (7U 
                                                                == 
                                                                (7U 
                                                                 & vlSelfRef.tb_without_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                                 [
                                                                 (0x000fffffU 
                                                                  & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc 
                                                                     >> 2U))])))))
                                               : ((IData)(__VdfgRegularize_hebeb780c_0_5)
                                                   ? __VdfgRegularize_hebeb780c_0_8
                                                   : 
                                                  ((((- (IData)((IData)(__VdfgRegularize_hebeb780c_0_4))) 
                                                     << 0x0000000dU) 
                                                    | ((((IData)(__VdfgRegularize_hebeb780c_0_4) 
                                                         << 0x0000000cU) 
                                                        | (0x00000800U 
                                                           & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                              [
                                                              (0x000fffffU 
                                                               & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc 
                                                                  >> 2U))] 
                                                              << 4U))) 
                                                       | ((0x000007e0U 
                                                           & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                              [
                                                              (0x000fffffU 
                                                               & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc 
                                                                  >> 2U))] 
                                                              >> 0x00000014U)) 
                                                          | (0x0000001eU 
                                                             & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                                [
                                                                (0x000fffffU 
                                                                 & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc 
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
                                             & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                [(0x000fffffU 
                                                  & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc 
                                                     >> 2U))] 
                                                >> 0x00000014U)) 
                                            | (0x0000001fU 
                                               & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                                  [
                                                  (0x000fffffU 
                                                   & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc 
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
    vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__op_A 
        = ((0x17U == (0x0000007fU & vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2))
            ? vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc_2
            : ((((0x6fU == (0x0000007fU & vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2)) 
                 | (0x67U == (0x0000007fU & vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2)))
                 ? ((IData)(4U) + vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc_2)
                 : vlSelfRef.tb_without_hazards__DOT__dut__DOT__forwarded_rs1_2) 
               & (- (IData)((0x37U != (0x0000007fU 
                                       & vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2))))));
    __Vtableidx1 = (((vlSelfRef.tb_without_hazards__DOT__dut__DOT__forwarded_rs1_2 
                      < vlSelfRef.tb_without_hazards__DOT__dut__DOT__forwarded_rs2_2) 
                     << 5U) | ((VL_LTS_III(32, vlSelfRef.tb_without_hazards__DOT__dut__DOT__forwarded_rs1_2, vlSelfRef.tb_without_hazards__DOT__dut__DOT__forwarded_rs2_2) 
                                << 4U) | (((vlSelfRef.tb_without_hazards__DOT__dut__DOT__forwarded_rs1_2 
                                            == vlSelfRef.tb_without_hazards__DOT__dut__DOT__forwarded_rs2_2) 
                                           << 3U) | 
                                          (7U & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2 
                                                 >> 0x0000000cU)))));
    vlSelfRef.tb_without_hazards__DOT__dut__DOT__branch_taken_2 
        = Vtb_without_hazards__ConstPool__TABLE_hfe2569db_0
        [__Vtableidx1];
    vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__result 
        = ((8U & (IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__alu_operation))
            ? ((- (IData)((1U & (~ ((IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__alu_operation) 
                                    >> 1U))))) & ((
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__alu_operation))
                                                    ? 
                                                   (1U 
                                                    & (- (IData)(
                                                                 (vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__op_A 
                                                                  < vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_srcB_2))))
                                                    : 
                                                   (1U 
                                                    & (- (IData)(
                                                                 VL_LTS_III(32, vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__op_A, vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_srcB_2))))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (~ 
                                                                   ((IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__alu_operation) 
                                                                    >> 2U)))))))
            : ((4U & (IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__alu_operation))
                ? ((2U & (IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__alu_operation))
                    ? ((1U & (IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__alu_operation))
                        ? VL_SHIFTRS_III(32,32,5, vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__op_A, 
                                         (0x0000001fU 
                                          & vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_srcB_2))
                        : (vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__op_A 
                           - vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_srcB_2))
                    : ((1U & (IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__alu_operation))
                        ? (vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__op_A 
                           >> (0x0000001fU & vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_srcB_2))
                        : (vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__op_A 
                           << (0x0000001fU & vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_srcB_2))))
                : ((2U & (IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__alu_operation))
                    ? ((1U & (IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__alu_operation))
                        ? (vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_srcB_2 
                           ^ vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__op_A)
                        : (vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_srcB_2 
                           + vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__op_A))
                    : ((1U & (IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__alu_operation))
                        ? (vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_srcB_2 
                           | vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__op_A)
                        : (vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_srcB_2 
                           & vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__op_A)))));
    vlSelfRef.tb_without_hazards__DOT__dut__DOT__flush = 0U;
    vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc_next 
        = ((IData)(4U) + vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc);
    if (vlSelfRef.tb_without_hazards__DOT__dut__DOT__jump_2) {
        vlSelfRef.tb_without_hazards__DOT__dut__DOT__flush = 1U;
        vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc_next 
            = ((IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__jump_reg_2)
                ? (0xfffffffeU & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__forwarded_rs1_2 
                                  + vlSelfRef.tb_without_hazards__DOT__dut__DOT__imm_2))
                : (vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc_2 
                   + vlSelfRef.tb_without_hazards__DOT__dut__DOT__imm_2));
    } else if (((IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__branch_2) 
                & (IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__branch_taken_2))) {
        vlSelfRef.tb_without_hazards__DOT__dut__DOT__flush = 1U;
        vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc_next 
            = (vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc_2 
               + vlSelfRef.tb_without_hazards__DOT__dut__DOT__imm_2);
    }
    vlSelfRef.tb_without_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word 
        = vlSelfRef.tb_without_hazards__DOT__dut__DOT__dmem_inst__DOT__memory
        [(0x000fffffU & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__result 
                         >> 2U))];
    if ((0U == (IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rmask_2))) {
        vlSelfRef.tb_without_hazards__DOT__dut__DOT__mem_rdata_2 
            = vlSelfRef.tb_without_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word;
    } else if ((1U == (IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rmask_2))) {
        vlSelfRef.tb_without_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__half_word 
            = (0x0000ffffU & ((2U == (3U & vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__result))
                               ? (vlSelfRef.tb_without_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word 
                                  >> 0x10U) : vlSelfRef.tb_without_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word));
        vlSelfRef.tb_without_hazards__DOT__dut__DOT__mem_rdata_2 
            = ((IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__load_unsigned_2)
                ? (IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__half_word)
                : (((- (IData)((1U & ((IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__half_word) 
                                      >> 0x0fU)))) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__half_word)));
    } else if ((2U == (IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rmask_2))) {
        vlSelfRef.tb_without_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__byte_val 
            = (0x000000ffU & ((0U == (3U & vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__result))
                               ? vlSelfRef.tb_without_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word
                               : ((1U == (3U & vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__result))
                                   ? (vlSelfRef.tb_without_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word 
                                      >> 8U) : ((2U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__result))
                                                 ? 
                                                (vlSelfRef.tb_without_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word 
                                                 >> 0x10U)
                                                 : 
                                                (vlSelfRef.tb_without_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word 
                                                 >> 0x18U)))));
        vlSelfRef.tb_without_hazards__DOT__dut__DOT__mem_rdata_2 
            = ((IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__load_unsigned_2)
                ? (IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__byte_val)
                : (((- (IData)((1U & ((IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__byte_val) 
                                      >> 7U)))) << 8U) 
                   | (IData)(vlSelfRef.tb_without_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__byte_val)));
    } else {
        vlSelfRef.tb_without_hazards__DOT__dut__DOT__mem_rdata_2 = 0U;
    }
}

VL_ATTR_COLD void Vtb_without_hazards___024root____Vm_traceActivitySetAll(Vtb_without_hazards___024root* vlSelf);

VL_ATTR_COLD void Vtb_without_hazards___024root___eval_stl(Vtb_without_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_without_hazards___024root___eval_stl\n"); );
    Vtb_without_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_without_hazards___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_without_hazards___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_without_hazards___024root___eval_phase__stl(Vtb_without_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_without_hazards___024root___eval_phase__stl\n"); );
    Vtb_without_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_without_hazards___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_without_hazards___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_without_hazards___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_without_hazards___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_without_hazards___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_without_hazards___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_without_hazards___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_without_hazards___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_without_hazards.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_without_hazards.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_without_hazards___024root____Vm_traceActivitySetAll(Vtb_without_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_without_hazards___024root____Vm_traceActivitySetAll\n"); );
    Vtb_without_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
}

VL_ATTR_COLD void Vtb_without_hazards___024root___ctor_var_reset(Vtb_without_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_without_hazards___024root___ctor_var_reset\n"); );
    Vtb_without_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_without_hazards__DOT__dut__DOT__pc_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11833954372258735761ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4083960152432366511ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13143899019110772304ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7836779227286726044ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__imm_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3270983489606235777ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__we_rf_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5749942208726846167ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__alu_op_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9752678552708951719ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__mem_to_reg_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16100901535581647260ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__rmask_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6181433615271659908ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__wmask_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8833637814522905764ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__mem_wen_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16952241716060671413ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__load_unsigned_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10098685597115792629ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__branch_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6747178198118546993ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__jump_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17839177067646378710ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__jump_reg_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8647430063097546861ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__inst_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6645120789361771276ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__pc_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2015186666474712966ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__imm_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12946613648318728264ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__rd1_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7208929759574300745ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__rd2_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2585009285312601221ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__we_rf_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3733306315319764600ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__alu_op_2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9621847387853251682ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__mem_to_reg_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10990580594011355064ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__rmask_2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10370208721723686271ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__wmask_2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7517926317431442898ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__mem_wen_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5895742742546910274ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__load_unsigned_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10974031111053117126ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__branch_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5232715484420919274ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__jump_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2613480767534259506ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__jump_reg_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4935968051065546750ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__mem_rdata_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6561413383237370489ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__branch_taken_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12111799872909887930ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__forwarded_rs1_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 466209631956237742ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__forwarded_rs2_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2871190215248139620ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__alu_srcB_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10249442510689410174ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__we_rf_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 215980783616789523ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__waddr_rf_3 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18442005083214391035ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__mem_to_reg_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1822821421968598833ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__alu_out_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10619528003553115999ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__mem_rdata_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 101250414015854044ull);
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->tb_without_hazards__DOT__dut__DOT__imem_inst__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5894798492958725692ull);
    }
    vlSelf->tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__wd_rf = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9098984632586258887ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5170667131264268738ull);
    }
    vlSelf->tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__op_A = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15317797563719593342ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__alu_operation = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8327164214125731810ull);
    vlSelf->tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3037614089829705880ull);
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->tb_without_hazards__DOT__dut__DOT__dmem_inst__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17837301376106693963ull);
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
    vlSelf->__Vtrigprevexpr___TOP__tb_without_hazards__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
