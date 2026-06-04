// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_without_hazards__Syms.h"


void Vtb_without_hazards___024root__trace_chg_0_sub_0(Vtb_without_hazards___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_without_hazards___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_without_hazards___024root__trace_chg_0\n"); );
    // Body
    Vtb_without_hazards___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_without_hazards___024root*>(voidSelf);
    Vtb_without_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_without_hazards___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_without_hazards___024root__trace_chg_0_sub_0(Vtb_without_hazards___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_without_hazards___024root__trace_chg_0_sub_0\n"); );
    Vtb_without_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[1U] 
                       | vlSelfRef.__Vm_traceActivity[2U]) 
                      | vlSelfRef.__Vm_traceActivity[4U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                               [(0x000fffffU & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc 
                                                >> 2U))]),32);
        bufp->chgCData(oldp+1,((0x0000001fU & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                               [(0x000fffffU 
                                                 & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc 
                                                    >> 2U))] 
                                               >> 7U))),5);
        bufp->chgCData(oldp+2,((vlSelfRef.tb_without_hazards__DOT__dut__DOT__imem_inst__DOT__memory
                                [(0x000fffffU & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc 
                                                 >> 2U))] 
                                >> 0x00000019U)),7);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[31]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[30]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[29]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[28]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[27]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[26]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[25]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[24]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[23]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[22]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[21]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[20]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[19]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[18]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[17]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[16]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[15]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[14]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[13]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[12]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[11]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[10]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[9]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[8]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[7]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[6]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[5]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[4]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[3]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[2]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[1]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf[0]),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[5U])))) {
        bufp->chgBit(oldp+35,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__stall));
        bufp->chgIData(oldp+36,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__imm_1),32);
        bufp->chgBit(oldp+37,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__we_rf_1));
        bufp->chgCData(oldp+38,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_op_1),2);
        bufp->chgBit(oldp+39,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__mem_to_reg_1));
        bufp->chgCData(oldp+40,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rmask_1),2);
        bufp->chgCData(oldp+41,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__wmask_1),2);
        bufp->chgBit(oldp+42,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__mem_wen_1));
        bufp->chgBit(oldp+43,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__load_unsigned_1));
        bufp->chgBit(oldp+44,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__branch_1));
        bufp->chgBit(oldp+45,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__jump_1));
        bufp->chgBit(oldp+46,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__jump_reg_1));
        bufp->chgCData(oldp+47,(vlSelfRef.__VdfgRegularize_hebeb780c_0_2),5);
        bufp->chgCData(oldp+48,(vlSelfRef.__VdfgRegularize_hebeb780c_0_3),5);
        bufp->chgCData(oldp+49,(vlSelfRef.__VdfgRegularize_hebeb780c_0_0),7);
        bufp->chgCData(oldp+50,(vlSelfRef.__VdfgRegularize_hebeb780c_0_1),3);
        bufp->chgIData(oldp+51,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__mem_rdata_2),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+52,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc_next),32);
        bufp->chgIData(oldp+53,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc),32);
        bufp->chgBit(oldp+54,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__flush));
        bufp->chgIData(oldp+55,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2),32);
        bufp->chgIData(oldp+56,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__pc_2),32);
        bufp->chgIData(oldp+57,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__imm_2),32);
        bufp->chgIData(oldp+58,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rd1_2),32);
        bufp->chgIData(oldp+59,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rd2_2),32);
        bufp->chgBit(oldp+60,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__we_rf_2));
        bufp->chgCData(oldp+61,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_op_2),2);
        bufp->chgBit(oldp+62,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__mem_to_reg_2));
        bufp->chgCData(oldp+63,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rmask_2),2);
        bufp->chgCData(oldp+64,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__wmask_2),2);
        bufp->chgBit(oldp+65,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__mem_wen_2));
        bufp->chgBit(oldp+66,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__load_unsigned_2));
        bufp->chgBit(oldp+67,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__branch_2));
        bufp->chgBit(oldp+68,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__jump_2));
        bufp->chgBit(oldp+69,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__jump_reg_2));
        bufp->chgCData(oldp+70,((0x0000001fU & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2 
                                                >> 0x0000000fU))),5);
        bufp->chgCData(oldp+71,((0x0000001fU & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2 
                                                >> 0x00000014U))),5);
        bufp->chgCData(oldp+72,((0x0000001fU & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2 
                                                >> 7U))),5);
        bufp->chgCData(oldp+73,((0x0000007fU & vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2)),7);
        bufp->chgCData(oldp+74,((7U & (vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2 
                                       >> 0x0000000cU))),3);
        bufp->chgCData(oldp+75,((vlSelfRef.tb_without_hazards__DOT__dut__DOT__inst_2 
                                 >> 0x00000019U)),7);
        bufp->chgCData(oldp+76,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__alu_operation),4);
        bufp->chgIData(oldp+77,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__result),32);
        bufp->chgBit(oldp+78,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__branch_taken_2));
        bufp->chgIData(oldp+79,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__forwarded_rs1_2),32);
        bufp->chgIData(oldp+80,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__forwarded_rs2_2),32);
        bufp->chgIData(oldp+81,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__op_A),32);
        bufp->chgIData(oldp+82,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_srcB_2),32);
        bufp->chgBit(oldp+83,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__we_rf_3));
        bufp->chgCData(oldp+84,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__waddr_rf_3),5);
        bufp->chgIData(oldp+85,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__wd_rf),32);
        bufp->chgBit(oldp+86,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__mem_to_reg_3));
        bufp->chgIData(oldp+87,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_out_3),32);
        bufp->chgIData(oldp+88,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__mem_rdata_3),32);
        bufp->chgBit(oldp+89,((0U == vlSelfRef.tb_without_hazards__DOT__dut__DOT__alu_inst__DOT__result)));
        bufp->chgBit(oldp+90,((vlSelfRef.tb_without_hazards__DOT__dut__DOT__forwarded_rs1_2 
                               == vlSelfRef.tb_without_hazards__DOT__dut__DOT__forwarded_rs2_2)));
        bufp->chgBit(oldp+91,(VL_LTS_III(32, vlSelfRef.tb_without_hazards__DOT__dut__DOT__forwarded_rs1_2, vlSelfRef.tb_without_hazards__DOT__dut__DOT__forwarded_rs2_2)));
        bufp->chgBit(oldp+92,((vlSelfRef.tb_without_hazards__DOT__dut__DOT__forwarded_rs1_2 
                               < vlSelfRef.tb_without_hazards__DOT__dut__DOT__forwarded_rs2_2)));
    }
    bufp->chgBit(oldp+93,(vlSelfRef.tb_without_hazards__DOT__clk));
    bufp->chgBit(oldp+94,(vlSelfRef.tb_without_hazards__DOT__rst));
    bufp->chgIData(oldp+95,((vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf
                             [vlSelfRef.__VdfgRegularize_hebeb780c_0_2] 
                             & (- (IData)((0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)))))),32);
    bufp->chgIData(oldp+96,((vlSelfRef.tb_without_hazards__DOT__dut__DOT__rf_inst__DOT__rf
                             [vlSelfRef.__VdfgRegularize_hebeb780c_0_3] 
                             & (- (IData)((0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3)))))),32);
    bufp->chgIData(oldp+97,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word),32);
    bufp->chgSData(oldp+98,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__half_word),16);
    bufp->chgCData(oldp+99,(vlSelfRef.tb_without_hazards__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__byte_val),8);
}

void Vtb_without_hazards___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_without_hazards___024root__trace_cleanup\n"); );
    // Body
    Vtb_without_hazards___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_without_hazards___024root*>(voidSelf);
    Vtb_without_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
