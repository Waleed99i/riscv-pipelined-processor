// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_cpu__Syms.h"


VL_ATTR_COLD void Vtb_cpu___024root__trace_init_sub__TOP__0(Vtb_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root__trace_init_sub__TOP__0\n"); );
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "tb_cpu", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+93,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+94,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+93,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+94,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+35,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+54,0,"flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"inst_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"pc_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"imm_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+37,0,"we_rf_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+38,0,"alu_op_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+39,0,"mem_to_reg_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"rmask_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"wmask_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+42,0,"mem_wen_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+43,0,"load_unsigned_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+44,0,"branch_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+45,0,"jump_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+46,0,"jump_reg_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"rs1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"rs2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"rd_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"opcode_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"funct3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"funct7_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+95,0,"rd1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"rd2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"inst_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"pc_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"imm_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"rd1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"rd2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"we_rf_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+61,0,"alu_op_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+62,0,"mem_to_reg_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"rmask_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"wmask_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+65,0,"mem_wen_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+66,0,"load_unsigned_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+67,0,"branch_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+68,0,"jump_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+69,0,"jump_reg_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"rs1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+71,0,"rs2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"rd_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+73,0,"opcode_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"funct3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+75,0,"funct7_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"alu_operation_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+77,0,"alu_out_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"mem_rdata_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"branch_taken_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"forwarded_rs1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+80,0,"forwarded_rs2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"alu_srcA_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"alu_srcB_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+83,0,"we_rf_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"waddr_rf_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"wd_rf_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+86,0,"mem_to_reg_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"alu_out_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+88,0,"mem_rdata_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "alu_ctrl_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+61,0,"alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"func3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+75,0,"func7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"alu_operation",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "alu_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"op_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"op_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"alu_operation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+77,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+89,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "branch_cmp_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+80,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"br_cond",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"branch_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+100,0,"BEQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+101,0,"BNE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+102,0,"BLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+103,0,"BGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+104,0,"BLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+105,0,"BGEU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+90,0,"eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+91,0,"lt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+92,0,"ltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "dmem_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+93,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+65,0,"mem_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+77,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"rmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"wmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+66,0,"load_unsigned",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+80,0,"mem_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"mem_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+97,0,"current_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"half_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+99,0,"byte_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "imem_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "immgen_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"immediate",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "rf_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+93,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+83,0,"we_rf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"waddr_rf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"wd_rf",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+95,0,"rd1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"rd2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "rf", VerilatedTracePrefixType::ARRAY_UNPACKED, 31, 0);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+3+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (31 - i), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_cpu___024root__trace_init_dtype_sub____0(Vtb_cpu___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_cpu___024root__trace_init_dtype____0(Vtb_cpu___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root__trace_init_dtype____0\n"); );
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_cpu___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_cpu___024root__trace_init_dtype_sub____0(Vtb_cpu___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root__trace_init_dtype_sub____0\n"); );
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 31, 0);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (31 - i), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_cpu___024root__trace_init_top(Vtb_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root__trace_init_top\n"); );
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_cpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_cpu___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_cpu___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_cpu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_cpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_cpu___024root__trace_register(Vtb_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root__trace_register\n"); );
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_cpu___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_cpu___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_cpu___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_cpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_cpu___024root__trace_const_0_sub_0(Vtb_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_cpu___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root__trace_const_0\n"); );
    // Body
    Vtb_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_cpu___024root*>(voidSelf);
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_cpu___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_cpu___024root__trace_const_0_sub_0(Vtb_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root__trace_const_0_sub_0\n"); );
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+100,(0U),3);
    bufp->fullCData(oldp+101,(1U),3);
    bufp->fullCData(oldp+102,(4U),3);
    bufp->fullCData(oldp+103,(5U),3);
    bufp->fullCData(oldp+104,(6U),3);
    bufp->fullCData(oldp+105,(7U),3);
}

VL_ATTR_COLD void Vtb_cpu___024root__trace_full_0_sub_0(Vtb_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_cpu___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root__trace_full_0\n"); );
    // Body
    Vtb_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_cpu___024root*>(voidSelf);
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_cpu___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_cpu___024root__trace_full_0_sub_0(Vtb_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root__trace_full_0_sub_0\n"); );
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+0,(vlSelfRef.tb_cpu__DOT__dut__DOT__imem_inst__DOT__memory
                            [(0x000fffffU & (vlSelfRef.tb_cpu__DOT__dut__DOT__pc 
                                             >> 2U))]),32);
    bufp->fullCData(oldp+1,((0x0000001fU & (vlSelfRef.tb_cpu__DOT__dut__DOT__imem_inst__DOT__memory
                                            [(0x000fffffU 
                                              & (vlSelfRef.tb_cpu__DOT__dut__DOT__pc 
                                                 >> 2U))] 
                                            >> 7U))),5);
    bufp->fullCData(oldp+2,((vlSelfRef.tb_cpu__DOT__dut__DOT__imem_inst__DOT__memory
                             [(0x000fffffU & (vlSelfRef.tb_cpu__DOT__dut__DOT__pc 
                                              >> 2U))] 
                             >> 0x00000019U)),7);
    bufp->fullIData(oldp+3,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[31]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[30]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[29]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[28]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[27]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[26]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[25]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[24]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[23]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[22]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[21]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[20]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[19]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[18]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[17]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[16]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[15]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[14]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[13]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[12]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[11]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[10]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[9]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[8]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[7]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[6]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[5]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[4]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[3]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[2]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[1]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf[0]),32);
    bufp->fullBit(oldp+35,(vlSelfRef.tb_cpu__DOT__dut__DOT__stall));
    bufp->fullIData(oldp+36,(vlSelfRef.tb_cpu__DOT__dut__DOT__imm_1),32);
    bufp->fullBit(oldp+37,(vlSelfRef.tb_cpu__DOT__dut__DOT__we_rf_1));
    bufp->fullCData(oldp+38,(vlSelfRef.tb_cpu__DOT__dut__DOT__alu_op_1),2);
    bufp->fullBit(oldp+39,(vlSelfRef.tb_cpu__DOT__dut__DOT__mem_to_reg_1));
    bufp->fullCData(oldp+40,(vlSelfRef.tb_cpu__DOT__dut__DOT__rmask_1),2);
    bufp->fullCData(oldp+41,(vlSelfRef.tb_cpu__DOT__dut__DOT__wmask_1),2);
    bufp->fullBit(oldp+42,(vlSelfRef.tb_cpu__DOT__dut__DOT__mem_wen_1));
    bufp->fullBit(oldp+43,(vlSelfRef.tb_cpu__DOT__dut__DOT__load_unsigned_1));
    bufp->fullBit(oldp+44,(vlSelfRef.tb_cpu__DOT__dut__DOT__branch_1));
    bufp->fullBit(oldp+45,(vlSelfRef.tb_cpu__DOT__dut__DOT__jump_1));
    bufp->fullBit(oldp+46,(vlSelfRef.tb_cpu__DOT__dut__DOT__jump_reg_1));
    bufp->fullCData(oldp+47,(vlSelfRef.__VdfgRegularize_hebeb780c_0_2),5);
    bufp->fullCData(oldp+48,(vlSelfRef.__VdfgRegularize_hebeb780c_0_3),5);
    bufp->fullCData(oldp+49,(vlSelfRef.__VdfgRegularize_hebeb780c_0_0),7);
    bufp->fullCData(oldp+50,(vlSelfRef.__VdfgRegularize_hebeb780c_0_1),3);
    bufp->fullIData(oldp+51,(vlSelfRef.tb_cpu__DOT__dut__DOT__mem_rdata_2),32);
    bufp->fullIData(oldp+52,(vlSelfRef.tb_cpu__DOT__dut__DOT__pc_next),32);
    bufp->fullIData(oldp+53,(vlSelfRef.tb_cpu__DOT__dut__DOT__pc),32);
    bufp->fullBit(oldp+54,(vlSelfRef.tb_cpu__DOT__dut__DOT__flush));
    bufp->fullIData(oldp+55,(vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2),32);
    bufp->fullIData(oldp+56,(vlSelfRef.tb_cpu__DOT__dut__DOT__pc_2),32);
    bufp->fullIData(oldp+57,(vlSelfRef.tb_cpu__DOT__dut__DOT__imm_2),32);
    bufp->fullIData(oldp+58,(vlSelfRef.tb_cpu__DOT__dut__DOT__rd1_2),32);
    bufp->fullIData(oldp+59,(vlSelfRef.tb_cpu__DOT__dut__DOT__rd2_2),32);
    bufp->fullBit(oldp+60,(vlSelfRef.tb_cpu__DOT__dut__DOT__we_rf_2));
    bufp->fullCData(oldp+61,(vlSelfRef.tb_cpu__DOT__dut__DOT__alu_op_2),2);
    bufp->fullBit(oldp+62,(vlSelfRef.tb_cpu__DOT__dut__DOT__mem_to_reg_2));
    bufp->fullCData(oldp+63,(vlSelfRef.tb_cpu__DOT__dut__DOT__rmask_2),2);
    bufp->fullCData(oldp+64,(vlSelfRef.tb_cpu__DOT__dut__DOT__wmask_2),2);
    bufp->fullBit(oldp+65,(vlSelfRef.tb_cpu__DOT__dut__DOT__mem_wen_2));
    bufp->fullBit(oldp+66,(vlSelfRef.tb_cpu__DOT__dut__DOT__load_unsigned_2));
    bufp->fullBit(oldp+67,(vlSelfRef.tb_cpu__DOT__dut__DOT__branch_2));
    bufp->fullBit(oldp+68,(vlSelfRef.tb_cpu__DOT__dut__DOT__jump_2));
    bufp->fullBit(oldp+69,(vlSelfRef.tb_cpu__DOT__dut__DOT__jump_reg_2));
    bufp->fullCData(oldp+70,((0x0000001fU & (vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2 
                                             >> 0x0000000fU))),5);
    bufp->fullCData(oldp+71,((0x0000001fU & (vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2 
                                             >> 0x00000014U))),5);
    bufp->fullCData(oldp+72,((0x0000001fU & (vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2 
                                             >> 7U))),5);
    bufp->fullCData(oldp+73,((0x0000007fU & vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2)),7);
    bufp->fullCData(oldp+74,((7U & (vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2 
                                    >> 0x0000000cU))),3);
    bufp->fullCData(oldp+75,((vlSelfRef.tb_cpu__DOT__dut__DOT__inst_2 
                              >> 0x00000019U)),7);
    bufp->fullCData(oldp+76,(vlSelfRef.tb_cpu__DOT__dut__DOT__alu_inst__DOT__alu_operation),4);
    bufp->fullIData(oldp+77,(vlSelfRef.tb_cpu__DOT__dut__DOT__alu_inst__DOT__result),32);
    bufp->fullBit(oldp+78,(vlSelfRef.tb_cpu__DOT__dut__DOT__branch_taken_2));
    bufp->fullIData(oldp+79,(vlSelfRef.tb_cpu__DOT__dut__DOT__forwarded_rs1_2),32);
    bufp->fullIData(oldp+80,(vlSelfRef.tb_cpu__DOT__dut__DOT__forwarded_rs2_2),32);
    bufp->fullIData(oldp+81,(vlSelfRef.tb_cpu__DOT__dut__DOT__alu_inst__DOT__op_A),32);
    bufp->fullIData(oldp+82,(vlSelfRef.tb_cpu__DOT__dut__DOT__alu_srcB_2),32);
    bufp->fullBit(oldp+83,(vlSelfRef.tb_cpu__DOT__dut__DOT__we_rf_3));
    bufp->fullCData(oldp+84,(vlSelfRef.tb_cpu__DOT__dut__DOT__waddr_rf_3),5);
    bufp->fullIData(oldp+85,(vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__wd_rf),32);
    bufp->fullBit(oldp+86,(vlSelfRef.tb_cpu__DOT__dut__DOT__mem_to_reg_3));
    bufp->fullIData(oldp+87,(vlSelfRef.tb_cpu__DOT__dut__DOT__alu_out_3),32);
    bufp->fullIData(oldp+88,(vlSelfRef.tb_cpu__DOT__dut__DOT__mem_rdata_3),32);
    bufp->fullBit(oldp+89,((0U == vlSelfRef.tb_cpu__DOT__dut__DOT__alu_inst__DOT__result)));
    bufp->fullBit(oldp+90,((vlSelfRef.tb_cpu__DOT__dut__DOT__forwarded_rs1_2 
                            == vlSelfRef.tb_cpu__DOT__dut__DOT__forwarded_rs2_2)));
    bufp->fullBit(oldp+91,(VL_LTS_III(32, vlSelfRef.tb_cpu__DOT__dut__DOT__forwarded_rs1_2, vlSelfRef.tb_cpu__DOT__dut__DOT__forwarded_rs2_2)));
    bufp->fullBit(oldp+92,((vlSelfRef.tb_cpu__DOT__dut__DOT__forwarded_rs1_2 
                            < vlSelfRef.tb_cpu__DOT__dut__DOT__forwarded_rs2_2)));
    bufp->fullBit(oldp+93,(vlSelfRef.tb_cpu__DOT__clk));
    bufp->fullBit(oldp+94,(vlSelfRef.tb_cpu__DOT__rst));
    bufp->fullIData(oldp+95,((vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf
                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_2] 
                              & (- (IData)((0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)))))),32);
    bufp->fullIData(oldp+96,((vlSelfRef.tb_cpu__DOT__dut__DOT__rf_inst__DOT__rf
                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_3] 
                              & (- (IData)((0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3)))))),32);
    bufp->fullIData(oldp+97,(vlSelfRef.tb_cpu__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__current_word),32);
    bufp->fullSData(oldp+98,(vlSelfRef.tb_cpu__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__half_word),16);
    bufp->fullCData(oldp+99,(vlSelfRef.tb_cpu__DOT__dut__DOT__dmem_inst__DOT__unnamedblk1__DOT__byte_val),8);
}
