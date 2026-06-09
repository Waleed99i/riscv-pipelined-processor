// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_alu_controller__Syms.h"


VL_ATTR_COLD void Vtb_alu_controller___024root__trace_init_sub__TOP__0(Vtb_alu_controller___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu_controller___024root__trace_init_sub__TOP__0\n"); );
    Vtb_alu_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "tb_alu_controller", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"func7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"alu_operation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"func3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"func7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"alu_operation",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_alu_controller___024root__trace_init_top(Vtb_alu_controller___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu_controller___024root__trace_init_top\n"); );
    Vtb_alu_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_alu_controller___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_alu_controller___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_alu_controller___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_alu_controller___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_alu_controller___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_alu_controller___024root__trace_register(Vtb_alu_controller___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu_controller___024root__trace_register\n"); );
    Vtb_alu_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_alu_controller___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_alu_controller___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_alu_controller___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_alu_controller___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_alu_controller___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu_controller___024root__trace_const_0\n"); );
    // Body
    Vtb_alu_controller___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_alu_controller___024root*>(voidSelf);
    Vtb_alu_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtb_alu_controller___024root__trace_full_0_sub_0(Vtb_alu_controller___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_alu_controller___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu_controller___024root__trace_full_0\n"); );
    // Body
    Vtb_alu_controller___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_alu_controller___024root*>(voidSelf);
    Vtb_alu_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_alu_controller___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_alu_controller___024root__trace_full_0_sub_0(Vtb_alu_controller___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu_controller___024root__trace_full_0_sub_0\n"); );
    Vtb_alu_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+0,(vlSelfRef.tb_alu_controller__DOT__alu_op),2);
    bufp->fullCData(oldp+1,(vlSelfRef.tb_alu_controller__DOT__func3),3);
    bufp->fullCData(oldp+2,(vlSelfRef.tb_alu_controller__DOT__func7),7);
    bufp->fullCData(oldp+3,(((2U & (IData)(vlSelfRef.tb_alu_controller__DOT__alu_op))
                              ? ((4U & (IData)(vlSelfRef.tb_alu_controller__DOT__func3))
                                  ? ((2U & (IData)(vlSelfRef.tb_alu_controller__DOT__func3))
                                      ? (1U & (- (IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelfRef.tb_alu_controller__DOT__func3))))))
                                      : ((1U & (IData)(vlSelfRef.tb_alu_controller__DOT__func3))
                                          ? ((0x20U 
                                              == (IData)(vlSelfRef.tb_alu_controller__DOT__func7))
                                              ? 7U : 5U)
                                          : 3U)) : 
                                 ((2U & (IData)(vlSelfRef.tb_alu_controller__DOT__func3))
                                   ? ((1U & (IData)(vlSelfRef.tb_alu_controller__DOT__func3))
                                       ? 9U : 8U) : 
                                  ((1U & (IData)(vlSelfRef.tb_alu_controller__DOT__func3))
                                    ? 4U : (((0x20U 
                                              == (IData)(vlSelfRef.tb_alu_controller__DOT__func7)) 
                                             & (2U 
                                                == (IData)(vlSelfRef.tb_alu_controller__DOT__alu_op)))
                                             ? 6U : 2U))))
                              : ((1U & (IData)(vlSelfRef.tb_alu_controller__DOT__alu_op))
                                  ? 6U : 2U))),4);
}
