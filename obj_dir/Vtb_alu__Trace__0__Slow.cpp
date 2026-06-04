// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_alu__Syms.h"


VL_ATTR_COLD void Vtb_alu___024root__trace_init_sub__TOP__0(Vtb_alu___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root__trace_init_sub__TOP__0\n"); );
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "tb_alu", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"opA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"opB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"alu_operation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"op_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"op_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"alu_operation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_alu___024root__trace_init_top(Vtb_alu___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root__trace_init_top\n"); );
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_alu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_alu___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_alu___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_alu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_alu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_alu___024root__trace_register(Vtb_alu___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root__trace_register\n"); );
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_alu___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_alu___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_alu___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_alu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_alu___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root__trace_const_0\n"); );
    // Body
    Vtb_alu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_alu___024root*>(voidSelf);
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtb_alu___024root__trace_full_0_sub_0(Vtb_alu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_alu___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root__trace_full_0\n"); );
    // Body
    Vtb_alu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_alu___024root*>(voidSelf);
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_alu___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_alu___024root__trace_full_0_sub_0(Vtb_alu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root__trace_full_0_sub_0\n"); );
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+0,(vlSelfRef.tb_alu__DOT__opA),32);
    bufp->fullIData(oldp+1,(vlSelfRef.tb_alu__DOT__opB),32);
    bufp->fullCData(oldp+2,(vlSelfRef.tb_alu__DOT__alu_operation),4);
    bufp->fullIData(oldp+3,(((8U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                              ? ((- (IData)((1U & (~ 
                                                   ((IData)(vlSelfRef.tb_alu__DOT__alu_operation) 
                                                    >> 1U))))) 
                                 & (((1U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                      ? (1U & (- (IData)(
                                                         (vlSelfRef.tb_alu__DOT__opA 
                                                          < vlSelfRef.tb_alu__DOT__opB))))
                                      : (1U & (- (IData)(
                                                         VL_LTS_III(32, vlSelfRef.tb_alu__DOT__opA, vlSelfRef.tb_alu__DOT__opB))))) 
                                    & (- (IData)((1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.tb_alu__DOT__alu_operation) 
                                                      >> 2U)))))))
                              : ((4U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                  ? ((2U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                      ? ((1U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                          ? VL_SHIFTRS_III(32,32,5, vlSelfRef.tb_alu__DOT__opA, 
                                                           (0x0000001fU 
                                                            & vlSelfRef.tb_alu__DOT__opB))
                                          : (vlSelfRef.tb_alu__DOT__opA 
                                             - vlSelfRef.tb_alu__DOT__opB))
                                      : ((1U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                          ? (vlSelfRef.tb_alu__DOT__opA 
                                             >> (0x0000001fU 
                                                 & vlSelfRef.tb_alu__DOT__opB))
                                          : (vlSelfRef.tb_alu__DOT__opA 
                                             << (0x0000001fU 
                                                 & vlSelfRef.tb_alu__DOT__opB))))
                                  : ((2U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                      ? ((1U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                          ? (vlSelfRef.tb_alu__DOT__opA 
                                             ^ vlSelfRef.tb_alu__DOT__opB)
                                          : (vlSelfRef.tb_alu__DOT__opA 
                                             + vlSelfRef.tb_alu__DOT__opB))
                                      : ((1U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                          ? (vlSelfRef.tb_alu__DOT__opA 
                                             | vlSelfRef.tb_alu__DOT__opB)
                                          : (vlSelfRef.tb_alu__DOT__opA 
                                             & vlSelfRef.tb_alu__DOT__opB)))))),32);
    bufp->fullBit(oldp+4,((0U == ((8U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                   ? ((- (IData)((1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.tb_alu__DOT__alu_operation) 
                                                      >> 1U))))) 
                                      & (((1U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                           ? (1U & 
                                              (- (IData)(
                                                         (vlSelfRef.tb_alu__DOT__opA 
                                                          < vlSelfRef.tb_alu__DOT__opB))))
                                           : (1U & 
                                              (- (IData)(
                                                         VL_LTS_III(32, vlSelfRef.tb_alu__DOT__opA, vlSelfRef.tb_alu__DOT__opB))))) 
                                         & (- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.tb_alu__DOT__alu_operation) 
                                                           >> 2U)))))))
                                   : ((4U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                       ? ((2U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                           ? ((1U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                               ? VL_SHIFTRS_III(32,32,5, vlSelfRef.tb_alu__DOT__opA, 
                                                                (0x0000001fU 
                                                                 & vlSelfRef.tb_alu__DOT__opB))
                                               : (vlSelfRef.tb_alu__DOT__opA 
                                                  - vlSelfRef.tb_alu__DOT__opB))
                                           : ((1U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                               ? (vlSelfRef.tb_alu__DOT__opA 
                                                  >> 
                                                  (0x0000001fU 
                                                   & vlSelfRef.tb_alu__DOT__opB))
                                               : (vlSelfRef.tb_alu__DOT__opA 
                                                  << 
                                                  (0x0000001fU 
                                                   & vlSelfRef.tb_alu__DOT__opB))))
                                       : ((2U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                           ? ((1U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                               ? (vlSelfRef.tb_alu__DOT__opA 
                                                  ^ vlSelfRef.tb_alu__DOT__opB)
                                               : (vlSelfRef.tb_alu__DOT__opA 
                                                  + vlSelfRef.tb_alu__DOT__opB))
                                           : ((1U & (IData)(vlSelfRef.tb_alu__DOT__alu_operation))
                                               ? (vlSelfRef.tb_alu__DOT__opA 
                                                  | vlSelfRef.tb_alu__DOT__opB)
                                               : (vlSelfRef.tb_alu__DOT__opA 
                                                  & vlSelfRef.tb_alu__DOT__opB))))))));
}
