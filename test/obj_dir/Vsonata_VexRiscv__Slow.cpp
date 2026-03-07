// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsonata.h for the primary calling header

#include "Vsonata__pch.h"
#include "Vsonata_VexRiscv.h"
#include "Vsonata__Syms.h"

// Parameter definitions for Vsonata_VexRiscv
constexpr CData/*1:0*/ Vsonata_VexRiscv::BranchCtrlEnum_INC;
constexpr CData/*1:0*/ Vsonata_VexRiscv::BranchCtrlEnum_B;
constexpr CData/*1:0*/ Vsonata_VexRiscv::BranchCtrlEnum_JAL;
constexpr CData/*1:0*/ Vsonata_VexRiscv::BranchCtrlEnum_JALR;
constexpr CData/*2:0*/ Vsonata_VexRiscv::EnvCtrlEnum_NONE;
constexpr CData/*2:0*/ Vsonata_VexRiscv::EnvCtrlEnum_XRET;
constexpr CData/*2:0*/ Vsonata_VexRiscv::EnvCtrlEnum_WFI;
constexpr CData/*2:0*/ Vsonata_VexRiscv::EnvCtrlEnum_ECALL;
constexpr CData/*2:0*/ Vsonata_VexRiscv::EnvCtrlEnum_EBREAK;
constexpr CData/*1:0*/ Vsonata_VexRiscv::ShiftCtrlEnum_DISABLE_1;
constexpr CData/*1:0*/ Vsonata_VexRiscv::ShiftCtrlEnum_SLL_1;
constexpr CData/*1:0*/ Vsonata_VexRiscv::ShiftCtrlEnum_SRL_1;
constexpr CData/*1:0*/ Vsonata_VexRiscv::ShiftCtrlEnum_SRA_1;
constexpr CData/*1:0*/ Vsonata_VexRiscv::AluBitwiseCtrlEnum_XOR_1;
constexpr CData/*1:0*/ Vsonata_VexRiscv::AluBitwiseCtrlEnum_OR_1;
constexpr CData/*1:0*/ Vsonata_VexRiscv::AluBitwiseCtrlEnum_AND_1;
constexpr CData/*1:0*/ Vsonata_VexRiscv::AluCtrlEnum_ADD_SUB;
constexpr CData/*1:0*/ Vsonata_VexRiscv::AluCtrlEnum_SLT_SLTU;
constexpr CData/*1:0*/ Vsonata_VexRiscv::AluCtrlEnum_BITWISE;
constexpr CData/*1:0*/ Vsonata_VexRiscv::Src2CtrlEnum_RS;
constexpr CData/*1:0*/ Vsonata_VexRiscv::Src2CtrlEnum_IMI;
constexpr CData/*1:0*/ Vsonata_VexRiscv::Src2CtrlEnum_IMS;
constexpr CData/*1:0*/ Vsonata_VexRiscv::Src2CtrlEnum_PC;
constexpr CData/*1:0*/ Vsonata_VexRiscv::Src1CtrlEnum_RS;
constexpr CData/*1:0*/ Vsonata_VexRiscv::Src1CtrlEnum_IMU;
constexpr CData/*1:0*/ Vsonata_VexRiscv::Src1CtrlEnum_PC_INCREMENT;
constexpr CData/*1:0*/ Vsonata_VexRiscv::Src1CtrlEnum_URS1;
constexpr CData/*1:0*/ Vsonata_VexRiscv::DebugDmToHartOp_DATA;
constexpr CData/*1:0*/ Vsonata_VexRiscv::DebugDmToHartOp_EXECUTE;
constexpr CData/*1:0*/ Vsonata_VexRiscv::DebugDmToHartOp_REG_WRITE;
constexpr CData/*1:0*/ Vsonata_VexRiscv::DebugDmToHartOp_REG_READ;
constexpr CData/*2:0*/ Vsonata_VexRiscv::MmuPlugin_shared_State_IDLE;
constexpr CData/*2:0*/ Vsonata_VexRiscv::MmuPlugin_shared_State_L1_CMD;
constexpr CData/*2:0*/ Vsonata_VexRiscv::MmuPlugin_shared_State_L1_RSP;
constexpr CData/*2:0*/ Vsonata_VexRiscv::MmuPlugin_shared_State_L0_CMD;
constexpr CData/*2:0*/ Vsonata_VexRiscv::MmuPlugin_shared_State_L0_RSP;
constexpr CData/*1:0*/ Vsonata_VexRiscv::CsrPlugin_dcsr_stepLogic_enumDef_BOOT;
constexpr CData/*1:0*/ Vsonata_VexRiscv::CsrPlugin_dcsr_stepLogic_enumDef_IDLE;
constexpr CData/*1:0*/ Vsonata_VexRiscv::CsrPlugin_dcsr_stepLogic_enumDef_SINGLE;
constexpr CData/*1:0*/ Vsonata_VexRiscv::CsrPlugin_dcsr_stepLogic_enumDef_WAIT_1;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_0_data__DOT__clockCrossing;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_0_data__DOT__wrMaskEnable;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_1_data__DOT__clockCrossing;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_1_data__DOT__wrMaskEnable;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_2_data__DOT__clockCrossing;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_2_data__DOT__wrMaskEnable;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_3_data__DOT__clockCrossing;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_3_data__DOT__wrMaskEnable;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_4_data__DOT__clockCrossing;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_4_data__DOT__wrMaskEnable;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_5_data__DOT__clockCrossing;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_5_data__DOT__wrMaskEnable;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_6_data__DOT__clockCrossing;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_6_data__DOT__wrMaskEnable;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_7_data__DOT__clockCrossing;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_7_data__DOT__wrMaskEnable;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_8_data__DOT__clockCrossing;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_8_data__DOT__wrMaskEnable;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_9_data__DOT__clockCrossing;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_9_data__DOT__wrMaskEnable;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_10_data__DOT__clockCrossing;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_10_data__DOT__wrMaskEnable;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_11_data__DOT__clockCrossing;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_11_data__DOT__wrMaskEnable;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_12_data__DOT__clockCrossing;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_12_data__DOT__wrMaskEnable;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_13_data__DOT__clockCrossing;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_13_data__DOT__wrMaskEnable;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_14_data__DOT__clockCrossing;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_14_data__DOT__wrMaskEnable;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_15_data__DOT__clockCrossing;
constexpr CData/*0:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_15_data__DOT__wrMaskEnable;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_0_data__DOT__wordCount;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_0_data__DOT__wordWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_0_data__DOT__technology;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_0_data__DOT__wrAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_0_data__DOT__wrDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_0_data__DOT__wrMaskWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_0_data__DOT__rdAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_0_data__DOT__rdDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_0_data__DOT__COL_WIDTH;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_1_data__DOT__wordCount;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_1_data__DOT__wordWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_1_data__DOT__technology;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_1_data__DOT__wrAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_1_data__DOT__wrDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_1_data__DOT__wrMaskWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_1_data__DOT__rdAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_1_data__DOT__rdDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_1_data__DOT__COL_WIDTH;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_2_data__DOT__wordCount;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_2_data__DOT__wordWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_2_data__DOT__technology;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_2_data__DOT__wrAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_2_data__DOT__wrDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_2_data__DOT__wrMaskWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_2_data__DOT__rdAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_2_data__DOT__rdDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_2_data__DOT__COL_WIDTH;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_3_data__DOT__wordCount;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_3_data__DOT__wordWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_3_data__DOT__technology;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_3_data__DOT__wrAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_3_data__DOT__wrDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_3_data__DOT__wrMaskWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_3_data__DOT__rdAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_3_data__DOT__rdDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_3_data__DOT__COL_WIDTH;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_4_data__DOT__wordCount;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_4_data__DOT__wordWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_4_data__DOT__technology;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_4_data__DOT__wrAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_4_data__DOT__wrDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_4_data__DOT__wrMaskWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_4_data__DOT__rdAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_4_data__DOT__rdDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_4_data__DOT__COL_WIDTH;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_5_data__DOT__wordCount;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_5_data__DOT__wordWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_5_data__DOT__technology;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_5_data__DOT__wrAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_5_data__DOT__wrDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_5_data__DOT__wrMaskWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_5_data__DOT__rdAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_5_data__DOT__rdDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_5_data__DOT__COL_WIDTH;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_6_data__DOT__wordCount;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_6_data__DOT__wordWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_6_data__DOT__technology;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_6_data__DOT__wrAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_6_data__DOT__wrDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_6_data__DOT__wrMaskWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_6_data__DOT__rdAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_6_data__DOT__rdDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_6_data__DOT__COL_WIDTH;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_7_data__DOT__wordCount;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_7_data__DOT__wordWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_7_data__DOT__technology;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_7_data__DOT__wrAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_7_data__DOT__wrDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_7_data__DOT__wrMaskWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_7_data__DOT__rdAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_7_data__DOT__rdDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_7_data__DOT__COL_WIDTH;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_8_data__DOT__wordCount;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_8_data__DOT__wordWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_8_data__DOT__technology;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_8_data__DOT__wrAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_8_data__DOT__wrDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_8_data__DOT__wrMaskWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_8_data__DOT__rdAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_8_data__DOT__rdDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_8_data__DOT__COL_WIDTH;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_9_data__DOT__wordCount;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_9_data__DOT__wordWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_9_data__DOT__technology;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_9_data__DOT__wrAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_9_data__DOT__wrDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_9_data__DOT__wrMaskWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_9_data__DOT__rdAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_9_data__DOT__rdDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_9_data__DOT__COL_WIDTH;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_10_data__DOT__wordCount;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_10_data__DOT__wordWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_10_data__DOT__technology;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_10_data__DOT__wrAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_10_data__DOT__wrDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_10_data__DOT__wrMaskWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_10_data__DOT__rdAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_10_data__DOT__rdDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_10_data__DOT__COL_WIDTH;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_11_data__DOT__wordCount;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_11_data__DOT__wordWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_11_data__DOT__technology;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_11_data__DOT__wrAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_11_data__DOT__wrDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_11_data__DOT__wrMaskWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_11_data__DOT__rdAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_11_data__DOT__rdDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_11_data__DOT__COL_WIDTH;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_12_data__DOT__wordCount;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_12_data__DOT__wordWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_12_data__DOT__technology;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_12_data__DOT__wrAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_12_data__DOT__wrDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_12_data__DOT__wrMaskWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_12_data__DOT__rdAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_12_data__DOT__rdDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_12_data__DOT__COL_WIDTH;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_13_data__DOT__wordCount;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_13_data__DOT__wordWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_13_data__DOT__technology;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_13_data__DOT__wrAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_13_data__DOT__wrDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_13_data__DOT__wrMaskWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_13_data__DOT__rdAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_13_data__DOT__rdDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_13_data__DOT__COL_WIDTH;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_14_data__DOT__wordCount;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_14_data__DOT__wordWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_14_data__DOT__technology;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_14_data__DOT__wrAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_14_data__DOT__wrDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_14_data__DOT__wrMaskWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_14_data__DOT__rdAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_14_data__DOT__rdDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_14_data__DOT__COL_WIDTH;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_15_data__DOT__wordCount;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_15_data__DOT__wordWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_15_data__DOT__technology;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_15_data__DOT__wrAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_15_data__DOT__wrDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_15_data__DOT__wrMaskWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_15_data__DOT__rdAddressWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_15_data__DOT__rdDataWidth;
constexpr IData/*31:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_15_data__DOT__COL_WIDTH;
constexpr QData/*63:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_0_data__DOT__readUnderWrite;
constexpr QData/*63:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_1_data__DOT__readUnderWrite;
constexpr QData/*63:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_2_data__DOT__readUnderWrite;
constexpr QData/*63:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_3_data__DOT__readUnderWrite;
constexpr QData/*63:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_4_data__DOT__readUnderWrite;
constexpr QData/*63:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_5_data__DOT__readUnderWrite;
constexpr QData/*63:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_6_data__DOT__readUnderWrite;
constexpr QData/*63:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_7_data__DOT__readUnderWrite;
constexpr QData/*63:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_8_data__DOT__readUnderWrite;
constexpr QData/*63:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_9_data__DOT__readUnderWrite;
constexpr QData/*63:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_10_data__DOT__readUnderWrite;
constexpr QData/*63:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_11_data__DOT__readUnderWrite;
constexpr QData/*63:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_12_data__DOT__readUnderWrite;
constexpr QData/*63:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_13_data__DOT__readUnderWrite;
constexpr QData/*63:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_14_data__DOT__readUnderWrite;
constexpr QData/*63:0*/ Vsonata_VexRiscv::dataCache_1__DOT__ways_15_data__DOT__readUnderWrite;


void Vsonata_VexRiscv___ctor_var_reset(Vsonata_VexRiscv* vlSelf);

Vsonata_VexRiscv::Vsonata_VexRiscv(Vsonata__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsonata_VexRiscv___ctor_var_reset(this);
}

void Vsonata_VexRiscv::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsonata_VexRiscv::~Vsonata_VexRiscv() {
}
