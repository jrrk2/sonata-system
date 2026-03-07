// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsonata.h for the primary calling header

#include "Vsonata__pch.h"
#include "Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.h"

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__0(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__0\n"); );
    // Init
    CData/*5:0*/ __Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tap_instructionShift;
    __Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tap_instructionShift = 0;
    IData/*31:0*/ __Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_store;
    __Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_store = 0;
    QData/*40:0*/ __Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_store;
    __Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_store = 0;
    SData/*13:0*/ __Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_shiftBuffer;
    __Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_shiftBuffer = 0;
    // Body
    vlSelf->__Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_target 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_target;
    __Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_store 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_store;
    __Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_store 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_store;
    __Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_shiftBuffer 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_shiftBuffer;
    __Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tap_instructionShift 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_instructionShift;
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_valid) {
        vlSelf->__Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_target 
            = (1U & (~ (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_target)));
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_data_write 
            = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_payload_write;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_data_data 
            = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_payload_data;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_data_address 
            = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_payload_address;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_pending = 1U;
    }
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__idcodeArea_ctrl_enable) {
        if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__idcodeArea_ctrl_shift) {
            vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__idcodeArea_shifter 
                = (IData)((0x1ffffffffULL & ((0x7fffffff80000000ULL 
                                              & ((QData)((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__idcodeArea_ctrl_tdi)) 
                                                 << 0x1fU)) 
                                             | ((QData)((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__idcodeArea_shifter)) 
                                                >> 1U))));
        }
    }
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__idcodeArea_ctrl_capture) {
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__idcodeArea_shifter = 0x10003fffU;
    }
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_ctrl_enable) {
        if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_ctrl_capture) {
            __Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_store 
                = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_captureData;
        }
        if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_ctrl_shift) {
            __Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_store 
                = (IData)((0x1ffffffffULL & ((0x7fffffff80000000ULL 
                                              & ((QData)((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_ctrl_tdi)) 
                                                 << 0x1fU)) 
                                             | ((QData)((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_store)) 
                                                >> 1U))));
        }
    }
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_ctrl_enable) {
        if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_ctrl_capture) {
            __Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_store 
                = (((QData)((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_captureData_padding)) 
                    << 0x22U) | (((QData)((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_captureData_data)) 
                                  << 2U) | (QData)((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_captureData_op))));
        }
        if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_ctrl_shift) {
            __Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_store 
                = (0x1ffffffffffULL & ((0x7fffff0000000000ULL 
                                        & ((QData)((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_ctrl_tdi)) 
                                           << 0x28U)) 
                                       | (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_store 
                                          >> 1U)));
        }
    }
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_valid) {
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_m2sPipe_payload_data 
            = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_payload_data;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_m2sPipe_payload_error 
            = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_payload_error;
    }
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_bypass 
        = vlSelf->debugPort_tdi;
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiRsp_valid) {
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_rspLogic_buffer 
            = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiRsp_payload_data;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_pending = 0U;
    }
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiStat_value 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiStat_value_aheadValue;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_tdoShifter 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_tdoBuffer_delay_3;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_tdiBuffer 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_instruction_tdi_delay_8;
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_reset) {
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_instruction = 0U;
    }
    if ((8U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state))) {
        if ((1U & (~ ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state))) {
                if ((1U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state))) {
                    __Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tap_instructionShift 
                        = (0x3fU & ((0x7fffffe0U & 
                                     ((IData)(vlSelf->debugPort_tdi) 
                                      << 5U)) | ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_instructionShift) 
                                                 >> 1U)));
                }
            } else if ((1U & (~ (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state)))) {
                vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_instruction 
                    = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_instructionShift;
            }
        }
    } else if ((4U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state))) {
        if ((1U & (~ ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state)))) {
                __Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tap_instructionShift 
                    = (0x3fU & ((0x7fffffe0U & ((IData)(vlSelf->debugPort_tdi) 
                                                << 5U)) 
                                | ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_instructionShift) 
                                   >> 1U)));
            }
        }
    } else if ((2U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state))) {
        if ((1U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state))) {
            __Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tap_instructionShift 
                = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_instructionShift;
        }
    }
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__when_JtagTap_l121) {
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_instruction = 1U;
    }
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_store 
        = __Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_store;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_store 
        = __Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_store;
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_enable) {
        if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_shift) {
            __Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_shiftBuffer 
                = (0x3fffU & ((0x7fffe000U & ((IData)(vlSelf->debugPort_tdi) 
                                              << 0xdU)) 
                              | ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_shiftBuffer) 
                                 >> 1U)));
        }
        if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_update) {
            if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__when_JtagTunnel_l30) {
                vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_instruction 
                    = (0x3fU & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_shiftBuffer));
            }
        }
    }
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_shiftBuffer 
        = __Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_shiftBuffer;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_instructionShift 
        = __Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tap_instructionShift;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__idcodeArea_ctrl_tdo 
        = (1U & vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__idcodeArea_shifter);
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_updateData 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_store;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_ctrl_tdo 
        = (1U & vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_store);
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_ctrl_tdo 
        = (1U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_store));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_payload_data 
        = (IData)((vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_store 
                   >> 2U));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_payload_address 
        = (0x7fU & (IData)((vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_store 
                            >> 0x22U)));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_updateData_op 
        = (3U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_store));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiRsp_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_m2sPipe_payload_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle_io_output_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_m2sPipe_payload_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__io_output_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_m2sPipe_payload_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_captureData_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_rspLogic_buffer;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle_io_output_payload_write 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_data_write;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__io_output_payload_write 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_data_write;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__outputArea_flow_payload_write 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_data_write;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle_io_output_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_data_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__io_output_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_data_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__outputArea_flow_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_data_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle_io_output_payload_address 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_data_address;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__io_output_payload_address 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_data_address;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__outputArea_flow_payload_address 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_data_address;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_captureData 
        = (0x7071U | ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiStat_value) 
                      << 0xaU));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__when_DebugTransportModuleJtag_l30 
        = (0U == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiStat_value));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle_io_output_payload_error 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_m2sPipe_payload_error;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__io_output_payload_error 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_m2sPipe_payload_error;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiRsp_payload_error 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_m2sPipe_payload_error;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_instruction_tdo 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_tdoShifter;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_tdo 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_tdoShifter;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_tdoBuffer_delay_3 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_tdoBuffer_delay_2;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_ctrl_tdi 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_tdiBuffer;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_ctrl_tdi 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_tdiBuffer;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_instruction_tdi_delay_8 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_instruction_tdi_delay_7;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__when_JtagTunnel_l30 
        = (1U & (~ ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_shiftBuffer) 
                    >> 0xdU)));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_ctrl_enable 
        = (0x10U == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_instruction));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_ctrl_enable 
        = (0x11U == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_instruction));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_tdoIr 
        = (1U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_instructionShift));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_isBypass 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_instruction;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_isBypass 
        = (0x3fU == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_instruction));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__idcodeArea_ctrl_enable 
        = (1U == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_instruction));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_enable 
        = (0x23U == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_instruction));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_stateNext;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_stateNext 
        = ((8U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state))
            ? ((4U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state))
                ? ((2U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state))
                    ? ((1U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state))
                        ? (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_15)
                        : (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_14))
                    : ((1U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state))
                        ? (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_13)
                        : (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_12)))
                : ((2U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state))
                    ? ((1U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state))
                        ? (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_11)
                        : (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_10))
                    : ((1U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state))
                        ? (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_9)
                        : (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_8))))
            : ((4U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state))
                ? ((2U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state))
                    ? ((1U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state))
                        ? (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_7)
                        : (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_6))
                    : ((1U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state))
                        ? (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_5)
                        : (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_4)))
                : ((2U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state))
                    ? ((1U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state))
                        ? (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_3)
                        : (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_2))
                    : ((1U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state))
                        ? (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_1)
                        : (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext)))));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__io_input_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_payload_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_updateData_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_payload_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__io_input_payload_address 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_payload_address;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_updateData_address 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_payload_address;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT___zz_logic_jtagLogic_dmi_updateData_op 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_updateData_op;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_payload_write 
        = (2U == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_updateData_op));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__when_JtagTunnel_l53 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_ctrl_enable;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__when_JtagTunnel_l53_1 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_ctrl_enable;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_instruction_enable 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_enable;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_tdoDr = 0U;
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__idcodeArea_ctrl_enable) {
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_tdoDr 
            = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__idcodeArea_ctrl_tdo;
    }
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__io_input_payload_write 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_payload_write;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_tdoBuffer_delay_2 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_tdoBuffer_delay_1;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_instruction_tdi_delay_7 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_instruction_tdi_delay_6;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_tdoUnbufferd 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_bypass;
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_enable) {
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_tdoDr 
            = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_tdo;
    }
    if ((4U == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state))) {
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_tdoUnbufferd 
            = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_tdoIr;
    } else if ((0xbU == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state))) {
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_tdoUnbufferd 
            = ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_isBypass)
                ? (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_bypass)
                : (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_tdoDr));
    }
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_shift 
        = (0xbU == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_capture 
        = (0xaU == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_reset 
        = (0U == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_update 
        = (0xfU == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_instruction_shift 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_shift;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__idcodeArea_ctrl_shift 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_shift;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_sendShift = 0U;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_instruction_capture 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_capture;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__idcodeArea_ctrl_capture 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_capture;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_sendCapture = 0U;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_instruction_reset 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_reset;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__when_JtagTap_l121 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_reset;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__idcodeArea_ctrl_reset 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_reset;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_ctrl_reset 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_reset;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_ctrl_reset 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_reset;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_instruction_update 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_update;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__idcodeArea_ctrl_update 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_update;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_sendUpdate = 0U;
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_enable) {
        if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_shift) {
            vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_sendShift = 1U;
        }
        if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_capture) {
            vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_sendCapture = 1U;
        }
        if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_update) {
            if ((0x2000U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_shiftBuffer))) {
                vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_sendUpdate = 1U;
            }
        }
    }
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_tdoBuffer_delay_1 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_tdoBuffer;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_instruction_tdi_delay_6 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_instruction_tdi_delay_5;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_ctrl_shift 
        = ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_ctrl_enable) 
           & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_sendShift));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_ctrl_shift 
        = ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_ctrl_enable) 
           & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_sendShift));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_ctrl_capture 
        = ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_ctrl_enable) 
           & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_sendCapture));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_ctrl_capture 
        = ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_ctrl_enable) 
           & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_sendCapture));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_updateValid 
        = ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_ctrl_enable) 
           & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_sendUpdate));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_updateValid 
        = ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_ctrl_enable) 
           & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_sendUpdate));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_tdoBuffer = 0U;
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__when_JtagTunnel_l53) {
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_tdoBuffer 
            = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_ctrl_tdo;
    }
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__when_JtagTunnel_l53_1) {
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_tdoBuffer 
            = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_ctrl_tdo;
    }
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_captureValid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_ctrl_capture;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_captureValid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_ctrl_capture;
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_trigger_dmiHardReset) {
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_pending = 0U;
    }
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__when_DebugTransportModuleJtag_l78 
        = ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_ctrl_capture) 
           & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_pending));
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_updateValid) {
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_ctrl_update = 1U;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_trigger_dmiCmd = 0U;
        if ((0U != (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_updateData_op))) {
            if ((1U == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_updateData_op))) {
                vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_trigger_dmiCmd = 1U;
            } else if ((2U == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_updateData_op))) {
                vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_trigger_dmiCmd = 1U;
            }
        }
    } else {
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_ctrl_update = 0U;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_trigger_dmiCmd = 0U;
    }
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_ctrl_update 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_updateValid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_trigger_dmiReset 
        = (((vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_store 
             >> 0x10U) & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_updateValid)) 
           | (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_reset));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_trigger_dmiHardReset 
        = (((vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_store 
             >> 0x11U) & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_updateValid)) 
           | (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_reset));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_instruction_tdi_delay_5 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_instruction_tdi_delay_4;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiStat_busy = 0U;
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__when_DebugTransportModuleJtag_l78) {
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiStat_busy = 1U;
    }
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_trigger_dmiCmd;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiStat_clear = 0U;
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_trigger_dmiReset) {
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiStat_clear = 1U;
    }
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_trigger_dmiHardReset) {
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiStat_clear = 1U;
    }
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__io_input_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_valid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_instruction_tdi_delay_4 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_instruction_tdi_delay_3;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_instruction_tdi_delay_3 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_instruction_tdi_delay_2;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_instruction_tdi_delay_2 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_instruction_tdi_delay_1;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_instruction_tdi_delay_1 
        = vlSelf->debugPort_tdi;
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__3(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__3\n"); );
    // Body
    vlSelf->peripheralBridge_logic__DOT__io_output_ERR 
        = vlSelf->peripheral_ERR;
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__8(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__8\n"); );
    // Body
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_48 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_5)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_2) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_4) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_1)))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_48 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_5)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_2) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_4) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_1)))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_63 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_35)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_32) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_34) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_31)))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_63 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_35)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_32) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_34) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_31)))));
    vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_ready 
        = vlSelf->_zz_peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_ready;
    vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_cmd_ready 
        = vlSelf->plic_logic_bmb_cmd_ready;
    vlSelf->plic_logic_bus_rsp_ready = vlSelf->plic_logic_bmb_cmd_ready;
    vlSelf->iArbiter_bmb_decoder__DOT__io_input_rsp_ready 
        = vlSelf->_zz_io_input_rsp_ready;
    vlSelf->iArbiter_bmb_decoder__DOT__io_outputs_0_rsp_ready 
        = vlSelf->_zz_io_input_rsp_ready;
    vlSelf->iArbiter_bmb_decoder_io_outputs_0_rsp_ready 
        = vlSelf->_zz_io_input_rsp_ready;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz_maskProposal_0_3 
        = (3U & (((IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz_maskProposal_0_2) 
                  >> 2U) | (IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz_maskProposal_0_2)));
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_69) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_70 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_43;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_71 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_44;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_70 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_46;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_71 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_47;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_69) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_70 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_43;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_71 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_44;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_70 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_46;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_71 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_47;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_66) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_67 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_37;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_68 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_38;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_67 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_40;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_68 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_41;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_66) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_67 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_37;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_68 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_38;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_67 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_40;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_68 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_41;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_60) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_61 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_25;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_62 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_26;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_61 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_28;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_62 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_29;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_60) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_61 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_25;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_62 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_26;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_61 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_28;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_62 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_29;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_57) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_58 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_19;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_59 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_20;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_58 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_22;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_59 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_23;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_57) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_58 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_19;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_59 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_20;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_58 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_22;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_59 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_23;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_54) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_55 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_13;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_56 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_14;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_55 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_16;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_56 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_17;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_54) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_55 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_13;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_56 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_14;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_55 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_16;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_56 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_17;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_51) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_52 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_7;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_53 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_8;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_52 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_10;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_53 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_11;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_51) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_52 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_7;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_53 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_8;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_52 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_10;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_53 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_11;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_48) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_49 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_1;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_50 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_2;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_49 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_4;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_50 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_5;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_48) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_49 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_1;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_50 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_2;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_49 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_4;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_50 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_5;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_63) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_64 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_31;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_65 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_32;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_64 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_34;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_65 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_35;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_63) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_64 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_31;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_65 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_32;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_64 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_34;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_65 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_35;
    }
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_rsp_ready 
        = vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_ready;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_rsp_ready 
        = vlSelf->iArbiter_bmb_decoder_io_outputs_0_rsp_ready;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__maskProposal_1 
        = (1U & ((IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz_maskProposal_0_3) 
                 >> 1U));
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__maskProposal_0 
        = (1U & (IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz_maskProposal_0_3));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_78 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_71)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_68) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_70) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_67)))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_78 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_71)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_68) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_70) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_67)))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_74 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_59)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_56) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_58) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_55)))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_74 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_59)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_56) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_58) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_55)))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_72 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_53)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_50) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_52) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_49)))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_72 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_53)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_50) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_52) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_49)))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_76 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_65)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_62) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_64) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_61)))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_76 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_65)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_62) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_64) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_61)))));
    if (vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__locked) {
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_source 
            = vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__maskLocked_1;
        vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__maskRouted_0 
            = vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__maskLocked_0;
    } else {
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_source 
            = vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__maskProposal_1;
        vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__maskRouted_0 
            = vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__maskProposal_0;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_78) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority_3 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_67;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_79 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_68;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority_3 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_70;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_79 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_71;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_78) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority_3 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_67;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_79 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_68;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority_3 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_70;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_79 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_71;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_74) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority_1 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_55;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_75 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_56;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority_1 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_58;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_75 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_59;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_74) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority_1 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_55;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_75 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_56;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority_1 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_58;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_75 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_59;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_72) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_49;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_73 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_50;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_52;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_73 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_53;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_72) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_49;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_73 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_50;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_52;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_73 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_53;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_76) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority_2 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_61;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_77 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_62;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority_2 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_64;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_77 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_65;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_76) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority_2 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_61;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_77 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_62;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority_2 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_64;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_77 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_65;
    }
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_cmd_payload_fragment_source 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_source;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_chosen 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_source;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_chosen 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_source;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__maskRouted_1 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_source;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz_io_chosen 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_source;
    vlSelf->peripheralBridge_bmb_arbiter_io_inputs_1_cmd_ready 
        = ((IData)(vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_source) 
           & (IData)(vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rValidN));
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_chosenOH 
        = (((IData)(vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_source) 
            << 1U) | (IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__maskRouted_0));
    if (vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__maskRouted_0) {
        vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_output_payload_fragment_source 
            = vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_inputs_0_payload_fragment_source;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_m2sPipe_ready 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rValidN;
    } else {
        vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_output_payload_fragment_source 
            = vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_inputs_1_payload_fragment_source;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_m2sPipe_ready = 0U;
    }
    vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_valid 
        = (((IData)(vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rValid) 
            & (IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__maskRouted_0)) 
           | ((IData)(vlSelf->iArbiter_bmb_cmd_rValid) 
              & (IData)(vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_source)));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_80 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_75)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_73) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority_1) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority)))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_80 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_75)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_73) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority_1) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority)))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_81 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_79)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_77) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority_3) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority_2)))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_81 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_79)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_77) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority_3) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority_2)))));
    vlSelf->iArbiter_bmb_decoder__DOT__io_outputs_0_cmd_ready 
        = vlSelf->peripheralBridge_bmb_arbiter_io_inputs_1_cmd_ready;
    vlSelf->iArbiter_bmb_decoder_io_input_cmd_ready 
        = vlSelf->peripheralBridge_bmb_arbiter_io_inputs_1_cmd_ready;
    vlSelf->iArbiter_bmb_cmd_halfPipe_ready = vlSelf->peripheralBridge_bmb_arbiter_io_inputs_1_cmd_ready;
    vlSelf->iArbiter_bmb_decoder__DOT__io_input_cmd_ready 
        = vlSelf->peripheralBridge_bmb_arbiter_io_inputs_1_cmd_ready;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_cmd_ready 
        = vlSelf->peripheralBridge_bmb_arbiter_io_inputs_1_cmd_ready;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_inputs_1_ready 
        = vlSelf->peripheralBridge_bmb_arbiter_io_inputs_1_cmd_ready;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_1_ready 
        = vlSelf->peripheralBridge_bmb_arbiter_io_inputs_1_cmd_ready;
    vlSelf->iArbiter_bmb_cmd_halfPipe_fire = ((IData)(vlSelf->iArbiter_bmb_cmd_rValid) 
                                              & (IData)(vlSelf->peripheralBridge_bmb_arbiter_io_inputs_1_cmd_ready));
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_chosenOH 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_chosenOH;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_output_payload_fragment_source 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_output_payload_fragment_source;
    vlSelf->peripheralBridge_bmb_arbiter__DOT___zz_io_output_cmd_payload_fragment_source 
        = (((IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_output_payload_fragment_source) 
            << 1U) | (IData)(vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_source));
    vlSelf->peripheralBridge_bmb_arbiter_io_inputs_0_cmd_ready 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_m2sPipe_ready;
    vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_ready 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_m2sPipe_ready;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_ready 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_m2sPipe_ready;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_inputs_0_ready 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_m2sPipe_ready;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_0_ready 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_m2sPipe_ready;
    vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_ready = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_m2sPipe_ready;
    if (vlSelf->when_Stream_l372_6) {
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_ready = 1U;
    }
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_cmd_valid 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_valid;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_output_valid 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_valid;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_output_valid 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_valid;
    vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_valid 
        = (1U & ((~ (IData)(vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rValidN)) 
                 | (IData)(vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_valid)));
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_output_fire 
        = ((IData)(vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_valid) 
           & (IData)(vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rValidN));
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_80) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority_4 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_valid 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_73;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority_4 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority_1;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_valid 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_75;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_80) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority_4 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_valid 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_73;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority_4 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority_1;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_valid 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_75;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_81) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority_5 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority_2;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_valid_1 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_77;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority_5 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority_3;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_valid_1 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_79;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_81) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority_5 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority_2;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_valid_1 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_77;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority_5 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority_3;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_valid_1 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_79;
    }
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority_6 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_valid_1)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_valid) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority_5) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority_4)))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority_6 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_valid_1)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_valid) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority_5) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority_4)))));
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__9(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__9\n"); );
    // Body
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_hit 
        = ((1U & (~ (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__logic_systemLogic_bus_rsp_ccToggle_tunnel_privilegedDebug_logic_withTap_tunnel_toplevel_debugCd_logic_outputReset_syncronized))) 
           && (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_target));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_m2sPipe_valid 
        = ((1U & (~ (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__logic_systemLogic_bus_rsp_ccToggle_tunnel_privilegedDebug_logic_withTap_tunnel_toplevel_debugCd_logic_outputReset_syncronized))) 
           && (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_valid));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target_buffercc__DOT__buffers_1 
        = ((1U & (~ (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__logic_systemLogic_bus_rsp_ccToggle_tunnel_privilegedDebug_logic_withTap_tunnel_toplevel_debugCd_logic_outputReset_syncronized))) 
           && (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target_buffercc__DOT__buffers_0));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle_io_output_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_m2sPipe_valid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__io_output_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_m2sPipe_valid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiRsp_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_m2sPipe_valid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_target 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target_buffercc__DOT__buffers_1;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target_buffercc_io_dataOut 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target_buffercc__DOT__buffers_1;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target_buffercc__DOT__io_dataOut 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target_buffercc__DOT__buffers_1;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_valid 
        = ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target_buffercc__DOT__buffers_1) 
           != (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_hit));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target_buffercc__DOT__buffers_0 
        = ((1U & (~ (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__logic_systemLogic_bus_rsp_ccToggle_tunnel_privilegedDebug_logic_withTap_tunnel_toplevel_debugCd_logic_outputReset_syncronized))) 
           && (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target));
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__10(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__10\n"); );
    // Body
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_tdoUnbufferd_regNext 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_tdoUnbufferd;
    vlSelf->privilegedDebug_logic_withTap_tunnel_io_jtag_tdo 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_tdoUnbufferd_regNext;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_jtag_tdo 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_tdoUnbufferd_regNext;
    vlSelf->debugPort_tdo = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_tdoUnbufferd_regNext;
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__11(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__11\n"); );
    // Body
    vlSelf->bufferCC_9__DOT__buffers_1 = ((IData)(vlSelf->privilegedDebug_systemReset) 
                                          || (IData)(vlSelf->bufferCC_9__DOT__buffers_0));
    vlSelf->bufferCC_9__DOT__io_dataOut = vlSelf->bufferCC_9__DOT__buffers_1;
    vlSelf->bufferCC_9_io_dataOut = vlSelf->bufferCC_9__DOT__buffers_1;
    vlSelf->bufferCC_9__DOT__buffers_0 = ((IData)(vlSelf->privilegedDebug_systemReset) 
                                          || (IData)(vlSelf->bufferCC_9_io_dataIn));
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__12(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__12\n"); );
    // Body
    vlSelf->bufferCC_7__DOT__buffers_1 = ((IData)(vlSelf->debugCd_external_reset) 
                                          || (IData)(vlSelf->bufferCC_7__DOT__buffers_0));
    vlSelf->bufferCC_7_io_dataOut = vlSelf->bufferCC_7__DOT__buffers_1;
    vlSelf->bufferCC_7__DOT__io_dataOut = vlSelf->bufferCC_7__DOT__buffers_1;
    vlSelf->debugCd_logic_inputResetAdapter_stuff_syncTrigger 
        = vlSelf->bufferCC_7__DOT__buffers_1;
    vlSelf->bufferCC_7__DOT__buffers_0 = ((IData)(vlSelf->debugCd_external_reset) 
                                          || (IData)(vlSelf->bufferCC_7_io_dataIn));
    vlSelf->debugCd_logic_inputResetTrigger = 0U;
    if (vlSelf->debugCd_logic_inputResetAdapter_stuff_syncTrigger) {
        vlSelf->debugCd_logic_inputResetTrigger = 1U;
    }
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__13(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__13\n"); );
    // Body
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__bufferCC_7__DOT__buffers_1 
        = ((IData)(vlSelf->debugCd_logic_outputReset) 
           || (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__bufferCC_7__DOT__buffers_0));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__bufferCC_7_io_dataOut 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__bufferCC_7__DOT__buffers_1;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__bufferCC_7__DOT__io_dataOut 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__bufferCC_7__DOT__buffers_1;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__logic_systemLogic_bus_rsp_ccToggle_tunnel_privilegedDebug_logic_withTap_tunnel_toplevel_debugCd_logic_outputReset_syncronized 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__bufferCC_7__DOT__buffers_1;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__bufferCC_7__DOT__buffers_0 
        = ((IData)(vlSelf->debugCd_logic_outputReset) 
           || (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__bufferCC_7_io_dataIn));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target_buffercc__DOT__logic_systemLogic_bus_rsp_ccToggle_tunnel_privilegedDebug_logic_withTap_tunnel_toplevel_debugCd_logic_outputReset_syncronized 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__logic_systemLogic_bus_rsp_ccToggle_tunnel_privilegedDebug_logic_withTap_tunnel_toplevel_debugCd_logic_outputReset_syncronized;
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__14(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__14\n"); );
    // Body
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_payload_fragment_mask 
        = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_mask;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_payload_fragment_data 
        = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_data;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_payload_fragment_length 
        = vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_payload_fragment_length;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_payload_fragment_address 
        = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_address;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_payload_last 
        = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_last;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_payload_fragment_opcode 
        = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_wr;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_payload_fragment_context 
        = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_wr;
    vlSelf->cores_0_cpu_iBus_cmd_payload_fragment_address 
        = vlSelf->cores_0_cpu_logic_cpu_iBus_cmd_payload_address;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_fromHarts_payload_data 
        = vlSelf->cores_0_cpu_logic_cpu_debugBus_hartToDm_payload_data;
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__15(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__15\n"); );
    // Body
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_data_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_payload_write 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_data_write;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_payload_address 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_data_address;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_target 
        = vlSelf->__Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_target;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_target_buffercc__DOT__io_dataIn 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_target;
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__0(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__0\n"); );
    // Body
    vlSelf->clintWishboneBridge_logic_bridge__DOT__io_input_WE 
        = vlSelf->clintWishbone_WE;
    vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_cmd_payload_fragment_opcode 
        = vlSelf->clintWishbone_WE;
    vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_opcode 
        = vlSelf->clintWishbone_WE;
    vlSelf->plicWishboneBridge_logic_bridge__DOT__io_input_WE 
        = vlSelf->plicWishbone_WE;
    vlSelf->plicWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_opcode 
        = vlSelf->plicWishbone_WE;
    vlSelf->plic_logic_bmb_cmd_payload_fragment_opcode 
        = vlSelf->plicWishbone_WE;
    vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_cmd_payload_fragment_opcode 
        = vlSelf->plicWishbone_WE;
    vlSelf->clintWishboneBridge_logic_bridge__DOT__io_input_DAT_MOSI 
        = vlSelf->clintWishbone_DAT_MOSI;
    vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_cmd_payload_fragment_data 
        = vlSelf->clintWishbone_DAT_MOSI;
    vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_data 
        = vlSelf->clintWishbone_DAT_MOSI;
    vlSelf->plicWishboneBridge_logic_bridge__DOT__io_input_DAT_MOSI 
        = vlSelf->plicWishbone_DAT_MOSI;
    vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
        = vlSelf->plicWishbone_DAT_MOSI;
    vlSelf->plicWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_data 
        = vlSelf->plicWishbone_DAT_MOSI;
    vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_cmd_payload_fragment_data 
        = vlSelf->plicWishbone_DAT_MOSI;
    vlSelf->plic_logic_bridge_targetMapping_0_targetCompletion_payload 
        = (0x1fU & vlSelf->plicWishbone_DAT_MOSI);
    vlSelf->peripheralBridge_logic__DOT__io_output_DAT_MISO 
        = vlSelf->peripheral_DAT_MISO;
    vlSelf->peripheralBridge_logic__DOT__rsp_payload_fragment_data 
        = vlSelf->peripheral_DAT_MISO;
    vlSelf->clint_logic__DOT__io_bus_cmd_payload_fragment_opcode 
        = vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_opcode;
    vlSelf->clint_logic__DOT__io_bus_cmd_payload_fragment_data 
        = vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_data;
    vlSelf->plic_logic_bridge_targetMapping_1_targetCompletion_payload 
        = vlSelf->plic_logic_bridge_targetMapping_0_targetCompletion_payload;
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__1(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__1\n"); );
    // Body
    vlSelf->privilegedDebug_logic_dm__DOT__factory_askRead 
        = ((~ (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_write)) 
           & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rValid));
    vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l205 
        = ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rValid) 
           & ((4U <= (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_address)) 
              & (5U > (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_address))));
    vlSelf->privilegedDebug_logic_dm__DOT__factory_askWrite 
        = ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_write) 
           & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rValid));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_fire 
        = ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_valid) 
           & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_ready));
    vlSelf->privilegedDebug_logic_dm__DOT__factory_doRead 
        = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__factory_askRead) 
           & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__io_ctrl_cmd_ready));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_address = 0U;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dataX_trigged = 0U;
    if (vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l205) {
        vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_address = 0U;
        vlSelf->privilegedDebug_logic_dm__DOT__logic_dataX_trigged = 1U;
    }
    vlSelf->privilegedDebug_logic_dm__DOT__logic_progbufX_trigged 
        = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__factory_askWrite) 
           & (0x20U == (0x70U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_address))));
    vlSelf->privilegedDebug_logic_dm_io_harts_0_dmToHart_payload_address 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_address;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_dmToHart_payload_address 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_address;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_takeWhen_payload_address 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_address;
    vlSelf->privilegedDebug_logic_dm__DOT___zz_1 = 0U;
    if (vlSelf->privilegedDebug_logic_dm__DOT__logic_progbufX_trigged) {
        vlSelf->privilegedDebug_logic_dm__DOT___zz_1 = 1U;
    }
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__17(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__17\n"); );
    // Body
    vlSelf->_zz_when_PlicGateway_l21_60 = (vlSelf->interrupts 
                                           >> 0x1fU);
    vlSelf->_zz_when_PlicGateway_l21_58 = (1U & (vlSelf->interrupts 
                                                 >> 0x1eU));
    vlSelf->_zz_when_PlicGateway_l21_26 = (1U & (vlSelf->interrupts 
                                                 >> 0xeU));
    vlSelf->_zz_when_PlicGateway_l21_24 = (1U & (vlSelf->interrupts 
                                                 >> 0xdU));
    vlSelf->_zz_when_PlicGateway_l21_20 = (1U & (vlSelf->interrupts 
                                                 >> 0xbU));
    vlSelf->_zz_when_PlicGateway_l21_18 = (1U & (vlSelf->interrupts 
                                                 >> 0xaU));
    vlSelf->_zz_when_PlicGateway_l21_16 = (1U & (vlSelf->interrupts 
                                                 >> 9U));
    vlSelf->_zz_when_PlicGateway_l21_14 = (1U & (vlSelf->interrupts 
                                                 >> 8U));
    vlSelf->_zz_when_PlicGateway_l21_12 = (1U & (vlSelf->interrupts 
                                                 >> 7U));
    vlSelf->_zz_when_PlicGateway_l21_8 = (1U & (vlSelf->interrupts 
                                                >> 5U));
    vlSelf->_zz_when_PlicGateway_l21_4 = (1U & (vlSelf->interrupts 
                                                >> 3U));
    vlSelf->_zz_when_PlicGateway_l21_6 = (1U & (vlSelf->interrupts 
                                                >> 4U));
    vlSelf->_zz_when_PlicGateway_l21_10 = (1U & (vlSelf->interrupts 
                                                 >> 6U));
    vlSelf->_zz_when_PlicGateway_l21_2 = (1U & (vlSelf->interrupts 
                                                >> 2U));
    vlSelf->_zz_when_PlicGateway_l21_28 = (1U & (vlSelf->interrupts 
                                                 >> 0xfU));
    vlSelf->_zz_when_PlicGateway_l21_30 = (1U & (vlSelf->interrupts 
                                                 >> 0x10U));
    vlSelf->_zz_when_PlicGateway_l21_22 = (1U & (vlSelf->interrupts 
                                                 >> 0xcU));
    vlSelf->_zz_when_PlicGateway_l21_34 = (1U & (vlSelf->interrupts 
                                                 >> 0x12U));
    vlSelf->_zz_when_PlicGateway_l21_36 = (1U & (vlSelf->interrupts 
                                                 >> 0x13U));
    vlSelf->_zz_when_PlicGateway_l21_38 = (1U & (vlSelf->interrupts 
                                                 >> 0x14U));
    vlSelf->_zz_when_PlicGateway_l21_40 = (1U & (vlSelf->interrupts 
                                                 >> 0x15U));
    vlSelf->_zz_when_PlicGateway_l21_32 = (1U & (vlSelf->interrupts 
                                                 >> 0x11U));
    vlSelf->_zz_when_PlicGateway_l21_44 = (1U & (vlSelf->interrupts 
                                                 >> 0x17U));
    vlSelf->_zz_when_PlicGateway_l21_46 = (1U & (vlSelf->interrupts 
                                                 >> 0x18U));
    vlSelf->_zz_when_PlicGateway_l21_48 = (1U & (vlSelf->interrupts 
                                                 >> 0x19U));
    vlSelf->_zz_when_PlicGateway_l21_50 = (1U & (vlSelf->interrupts 
                                                 >> 0x1aU));
    vlSelf->_zz_when_PlicGateway_l21_42 = (1U & (vlSelf->interrupts 
                                                 >> 0x16U));
    vlSelf->_zz_when_PlicGateway_l21_52 = (1U & (vlSelf->interrupts 
                                                 >> 0x1bU));
    vlSelf->_zz_when_PlicGateway_l21_54 = (1U & (vlSelf->interrupts 
                                                 >> 0x1cU));
    vlSelf->_zz_when_PlicGateway_l21_56 = (1U & (vlSelf->interrupts 
                                                 >> 0x1dU));
    vlSelf->_zz_when_PlicGateway_l21 = (1U & (vlSelf->interrupts 
                                              >> 1U));
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__18(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__18\n"); );
    // Body
    vlSelf->cores_0_cpu_debugRiscv_resume_rsp_valid 
        = vlSelf->cores_0_cpu_logic_cpu_debugBus_resume_rsp_valid;
    vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l276 
        = (1U & (~ (IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_halted)));
    vlSelf->clint_logic__DOT__when_Clint_l39 = (1U 
                                                & (~ (IData)(vlSelf->clint_logic__DOT__logic_stop)));
    vlSelf->cores_0_cpu_iBus_cmd_valid = vlSelf->cores_0_cpu_logic_cpu_iBus_cmd_valid;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_valid 
        = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_valid;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_resume_rsp_valid 
        = vlSelf->cores_0_cpu_debugRiscv_resume_rsp_valid;
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__3(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__3\n"); );
    // Body
    vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_abstractcs_cmdErr 
        = ((~ (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_data 
               >> 8U)) & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_cmdErr));
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__19(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__19\n"); );
    // Body
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target 
        = vlSelf->__Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target;
    if (vlSelf->debugCd_logic_outputReset) {
        vlSelf->privilegedDebug_logic_dm__DOT__dmactive = 0U;
    } else if ((0x10U == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address))) {
        if (vlSelf->privilegedDebug_logic_dm__DOT__factory_doWrite) {
            vlSelf->privilegedDebug_logic_dm__DOT__dmactive 
                = (1U & vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_data);
        }
    }
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target_buffercc__DOT__io_dataIn 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target;
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__4(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__4\n"); );
    // Body
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_anyRunning 
        = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_sel) 
           & (IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_running));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_allHaveReset 
        = (1U & ((~ (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_sel)) 
                 | (IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_haveReset)));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_allRunning 
        = (1U & ((~ (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_sel)) 
                 | (IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_running)));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_anyHaveReset 
        = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_sel) 
           & (IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_haveReset));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_allHalted 
        = (1U & ((~ (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_sel)) 
                 | (IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_halted)));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_anyHalted 
        = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_sel) 
           & (IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_halted));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_haltsum_value = 0U;
    if (vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l143) {
        vlSelf->privilegedDebug_logic_dm__DOT__logic_haltsum_value 
            = ((0xfffffffeU & vlSelf->privilegedDebug_logic_dm__DOT__logic_haltsum_value) 
               | (IData)(vlSelf->cores_0_cpu_debugRiscv_halted));
    }
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__5(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__5\n"); );
    // Body
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_allUnavail 
        = (1U & ((~ (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_sel)) 
                 | (IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_unavailable)));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_anyUnavail 
        = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_sel) 
           & (IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_unavailable));
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__7(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__7\n"); );
    // Body
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_valid 
        = (1U & ((~ (IData)(vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rValidN)) 
                 | (IData)(vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_valid)));
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__8(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__8\n"); );
    // Body
    if (vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rValidN) {
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_last 
            = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_last;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_opcode 
            = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_wr;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_address 
            = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_address;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_data 
            = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_data;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_mask 
            = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_mask;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_context 
            = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_wr;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_length 
            = vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_payload_fragment_length;
    } else {
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_last 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rData_last;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_opcode 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rData_fragment_opcode;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_address 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rData_fragment_address;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_data 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rData_fragment_data;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_mask 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rData_fragment_mask;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_context 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rData_fragment_context;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_length 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rData_fragment_length;
    }
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__9(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__9\n"); );
    // Body
    vlSelf->clintWishboneBridge_logic_bridge__DOT__io_input_STB 
        = vlSelf->clintWishbone_STB;
    vlSelf->plicWishboneBridge_logic_bridge__DOT__io_input_STB 
        = vlSelf->plicWishbone_STB;
}

extern const VlUnpacked<CData/*0:0*/, 32> Vsonata__ConstPool__TABLE_h2578492e_0;

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__10(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__10\n"); );
    // Init
    CData/*4:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    __Vtableidx6 = (((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiRsp_payload_error) 
                     << 4U) | (((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiRsp_valid) 
                                << 3U) | (((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_updateData_op) 
                                           << 1U) | (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_updateValid))));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiStat_failure 
        = Vsonata__ConstPool__TABLE_h2578492e_0[__Vtableidx6];
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiStat_value_aheadValue 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiStat_value;
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__when_DebugTransportModuleJtag_l30) {
        if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiStat_failure) {
            vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiStat_value_aheadValue = 2U;
        }
        if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiStat_busy) {
            vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiStat_value_aheadValue = 3U;
        }
    }
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiStat_clear) {
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiStat_value_aheadValue = 0U;
    }
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_captureData_op 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiStat_value_aheadValue;
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__11(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__11\n"); );
    // Body
    vlSelf->systemCd_logic_inputResetTrigger = 0U;
    if (vlSelf->systemCd_logic_inputResetAdapter_stuff_syncTrigger) {
        vlSelf->systemCd_logic_inputResetTrigger = 1U;
    }
    if (vlSelf->bufferCC_9_io_dataOut) {
        vlSelf->systemCd_logic_inputResetTrigger = 1U;
    }
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__20(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__20\n"); );
    // Body
    vlSelf->privilegedDebug_systemReset = vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_ndmreset;
    vlSelf->bufferCC_9__DOT__privilegedDebug_systemReset 
        = vlSelf->privilegedDebug_systemReset;
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__12(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__12\n"); );
    // Body
    vlSelf->bufferCC_7__DOT__debugCd_external_reset 
        = vlSelf->debugCd_external_reset;
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__13(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__13\n"); );
    // Body
    vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_payload_fragment_data 
        = ((IData)(vlSelf->peripheralBridge_logic__DOT__rsp_rValidN)
            ? vlSelf->peripheral_DAT_MISO : vlSelf->peripheralBridge_logic__DOT__rsp_rData_fragment_data);
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__14(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__14\n"); );
    // Init
    CData/*0:0*/ peripheralBridge_logic__DOT____VdfgRegularize_ha73a16a8_0_0;
    peripheralBridge_logic__DOT____VdfgRegularize_ha73a16a8_0_0 = 0;
    // Body
    vlSelf->plicWishboneBridge_logic_bridge__DOT__io_input_ADR 
        = vlSelf->plicWishbone_ADR;
    vlSelf->plic_logic_bmb_cmd_payload_fragment_address 
        = (0x3fffffU & (vlSelf->plicWishbone_ADR << 2U));
    vlSelf->clintWishboneBridge_logic_bridge__DOT__io_input_ADR 
        = vlSelf->clintWishbone_ADR;
    vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_address 
        = (0xffffU & ((IData)(vlSelf->clintWishbone_ADR) 
                      << 2U));
    vlSelf->clintWishboneBridge_logic_bridge__DOT__io_input_CYC 
        = vlSelf->clintWishbone_CYC;
    vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_valid 
        = ((IData)(vlSelf->clintWishbone_CYC) & ((~ (IData)(vlSelf->clintWishboneBridge_logic_bridge__DOT___zz_io_output_cmd_valid)) 
                                                 & (IData)(vlSelf->clintWishbone_STB)));
    vlSelf->plicWishboneBridge_logic_bridge__DOT__io_input_CYC 
        = vlSelf->plicWishbone_CYC;
    vlSelf->plic_logic_bus_rsp_valid = ((IData)(vlSelf->plicWishbone_CYC) 
                                        & ((~ (IData)(vlSelf->plicWishboneBridge_logic_bridge__DOT___zz_io_output_cmd_valid)) 
                                           & (IData)(vlSelf->plicWishbone_STB)));
    vlSelf->peripheralBridge_logic__DOT__io_output_ACK 
        = vlSelf->peripheral_ACK;
    vlSelf->peripheralBridge_logic__DOT__inputCmd_ready 
        = ((IData)(vlSelf->peripheral_ACK) & ((IData)(vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_opcode) 
                                              | (IData)(vlSelf->peripheralBridge_logic__DOT__rsp_payload_last)));
    peripheralBridge_logic__DOT____VdfgRegularize_ha73a16a8_0_0 
        = ((IData)(vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rValid) 
           & (IData)(vlSelf->peripheral_ACK));
    vlSelf->plicWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_address 
        = vlSelf->plic_logic_bmb_cmd_payload_fragment_address;
    vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_cmd_payload_fragment_address 
        = vlSelf->plic_logic_bmb_cmd_payload_fragment_address;
    vlSelf->plic_logic_bus_rsp_payload_fragment_data = 0U;
    if (((((((((4U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address) 
               | (0x1000U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
              | (8U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
             | (0xcU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
            | (0x10U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
           | (0x14U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
          | (0x18U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
         | (0x1cU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address))) {
        if ((4U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
            vlSelf->plic_logic_bus_rsp_payload_fragment_data 
                = ((0xfffffffcU & vlSelf->plic_logic_bus_rsp_payload_fragment_data) 
                   | (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data));
        } else if ((0x1000U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
            vlSelf->plic_logic_bus_rsp_payload_fragment_data 
                = ((0xffffffe1U & vlSelf->plic_logic_bus_rsp_payload_fragment_data) 
                   | (((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_7) 
                       << 4U) | (((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_5) 
                                  << 3U) | (((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_3) 
                                             << 2U) 
                                            | ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_1) 
                                               << 1U)))));
            vlSelf->plic_logic_bus_rsp_payload_fragment_data 
                = ((0xfffffe1fU & vlSelf->plic_logic_bus_rsp_payload_fragment_data) 
                   | (((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_15) 
                       << 8U) | (((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_13) 
                                  << 7U) | (((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_11) 
                                             << 6U) 
                                            | ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_9) 
                                               << 5U)))));
            vlSelf->plic_logic_bus_rsp_payload_fragment_data 
                = ((0xffffe1ffU & vlSelf->plic_logic_bus_rsp_payload_fragment_data) 
                   | (((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_23) 
                       << 0xcU) | (((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_21) 
                                    << 0xbU) | (((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_19) 
                                                 << 0xaU) 
                                                | ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_17) 
                                                   << 9U)))));
            vlSelf->plic_logic_bus_rsp_payload_fragment_data 
                = ((0xfffe1fffU & vlSelf->plic_logic_bus_rsp_payload_fragment_data) 
                   | (((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_31) 
                       << 0x10U) | (((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_29) 
                                     << 0xfU) | (((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_27) 
                                                  << 0xeU) 
                                                 | ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_25) 
                                                    << 0xdU)))));
            vlSelf->plic_logic_bus_rsp_payload_fragment_data 
                = ((0xffe1ffffU & vlSelf->plic_logic_bus_rsp_payload_fragment_data) 
                   | (((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_39) 
                       << 0x14U) | (((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_37) 
                                     << 0x13U) | (((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_35) 
                                                   << 0x12U) 
                                                  | ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_33) 
                                                     << 0x11U)))));
            vlSelf->plic_logic_bus_rsp_payload_fragment_data 
                = ((0xfe1fffffU & vlSelf->plic_logic_bus_rsp_payload_fragment_data) 
                   | (((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_47) 
                       << 0x18U) | (((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_45) 
                                     << 0x17U) | (((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_43) 
                                                   << 0x16U) 
                                                  | ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_41) 
                                                     << 0x15U)))));
            vlSelf->plic_logic_bus_rsp_payload_fragment_data 
                = ((0xe1ffffffU & vlSelf->plic_logic_bus_rsp_payload_fragment_data) 
                   | (((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_55) 
                       << 0x1cU) | (((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_53) 
                                     << 0x1bU) | (((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_51) 
                                                   << 0x1aU) 
                                                  | ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_49) 
                                                     << 0x19U)))));
            vlSelf->plic_logic_bus_rsp_payload_fragment_data 
                = ((0x1fffffffU & vlSelf->plic_logic_bus_rsp_payload_fragment_data) 
                   | (((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_61) 
                       << 0x1fU) | (((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_59) 
                                     << 0x1eU) | ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_57) 
                                                  << 0x1dU))));
        } else {
            vlSelf->plic_logic_bus_rsp_payload_fragment_data 
                = ((0xfffffffcU & vlSelf->plic_logic_bus_rsp_payload_fragment_data) 
                   | ((8U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)
                       ? (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_2)
                       : ((0xcU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)
                           ? (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_4)
                           : ((0x10U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)
                               ? (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_6)
                               : ((0x14U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)
                                   ? (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_8)
                                   : ((0x18U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)
                                       ? (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_10)
                                       : (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_12)))))));
        }
    } else if (((((((((0x20U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address) 
                      | (0x24U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                     | (0x28U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                    | (0x2cU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                   | (0x30U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                  | (0x34U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                 | (0x38U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                | (0x3cU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address))) {
        vlSelf->plic_logic_bus_rsp_payload_fragment_data 
            = ((0xfffffffcU & vlSelf->plic_logic_bus_rsp_payload_fragment_data) 
               | ((0x20U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)
                   ? (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_14)
                   : ((0x24U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)
                       ? (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_16)
                       : ((0x28U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)
                           ? (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_18)
                           : ((0x2cU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)
                               ? (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_20)
                               : ((0x30U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)
                                   ? (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_22)
                                   : ((0x34U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)
                                       ? (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_24)
                                       : ((0x38U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)
                                           ? (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_26)
                                           : (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_28)))))))));
    } else if (((((((((0x40U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address) 
                      | (0x44U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                     | (0x48U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                    | (0x4cU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                   | (0x50U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                  | (0x54U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                 | (0x58U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                | (0x5cU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address))) {
        vlSelf->plic_logic_bus_rsp_payload_fragment_data 
            = ((0xfffffffcU & vlSelf->plic_logic_bus_rsp_payload_fragment_data) 
               | ((0x40U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)
                   ? (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_30)
                   : ((0x44U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)
                       ? (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_32)
                       : ((0x48U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)
                           ? (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_34)
                           : ((0x4cU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)
                               ? (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_36)
                               : ((0x50U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)
                                   ? (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_38)
                                   : ((0x54U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)
                                       ? (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_40)
                                       : ((0x58U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)
                                           ? (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_42)
                                           : (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_44)))))))));
    } else if (((((((((0x60U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address) 
                      | (0x64U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                     | (0x68U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                    | (0x6cU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                   | (0x70U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                  | (0x74U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                 | (0x78U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                | (0x7cU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address))) {
        vlSelf->plic_logic_bus_rsp_payload_fragment_data 
            = ((0xfffffffcU & vlSelf->plic_logic_bus_rsp_payload_fragment_data) 
               | ((0x60U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)
                   ? (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_46)
                   : ((0x64U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)
                       ? (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_48)
                       : ((0x68U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)
                           ? (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_50)
                           : ((0x6cU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)
                               ? (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_52)
                               : ((0x70U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)
                                   ? (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_54)
                                   : ((0x74U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)
                                       ? (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_56)
                                       : ((0x78U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)
                                           ? (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_58)
                                           : (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_60)))))))));
    } else if ((0x200000U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
        vlSelf->plic_logic_bus_rsp_payload_fragment_data 
            = ((0xfffffffcU & vlSelf->plic_logic_bus_rsp_payload_fragment_data) 
               | (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_threshold));
    } else if ((0x200004U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
        vlSelf->plic_logic_bus_rsp_payload_fragment_data 
            = ((0xffffffe0U & vlSelf->plic_logic_bus_rsp_payload_fragment_data) 
               | (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_claim));
    } else if ((0x2000U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
        vlSelf->plic_logic_bus_rsp_payload_fragment_data 
            = ((0xfffe0001U & vlSelf->plic_logic_bus_rsp_payload_fragment_data) 
               | ((((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_15) 
                    << 0x10U) | (((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_14) 
                                  << 0xfU) | (((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_13) 
                                               << 0xeU) 
                                              | ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_12) 
                                                 << 0xdU)))) 
                  | ((((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_11) 
                       << 0xcU) | (((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_10) 
                                    << 0xbU) | (((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_9) 
                                                 << 0xaU) 
                                                | ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_8) 
                                                   << 9U)))) 
                     | ((((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_7) 
                          << 8U) | (((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_6) 
                                     << 7U) | (((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_5) 
                                                << 6U) 
                                               | ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_4) 
                                                  << 5U)))) 
                        | (((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_3) 
                            << 4U) | (((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_2) 
                                       << 3U) | (((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_1) 
                                                  << 2U) 
                                                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_0) 
                                                    << 1U))))))));
        vlSelf->plic_logic_bus_rsp_payload_fragment_data 
            = ((0x1ffffU & vlSelf->plic_logic_bus_rsp_payload_fragment_data) 
               | ((((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_30) 
                    << 0x1fU) | (((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_29) 
                                  << 0x1eU) | ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_28) 
                                               << 0x1dU))) 
                  | ((((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_27) 
                       << 0x1cU) | (((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_26) 
                                     << 0x1bU) | (((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_25) 
                                                   << 0x1aU) 
                                                  | ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_24) 
                                                     << 0x19U)))) 
                     | ((((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_23) 
                          << 0x18U) | (((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_22) 
                                        << 0x17U) | 
                                       (((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_21) 
                                         << 0x16U) 
                                        | ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_20) 
                                           << 0x15U)))) 
                        | (((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_19) 
                            << 0x14U) | (((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_18) 
                                          << 0x13U) 
                                         | (((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_17) 
                                             << 0x12U) 
                                            | ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_16) 
                                               << 0x11U))))))));
    } else if ((0x201000U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
        vlSelf->plic_logic_bus_rsp_payload_fragment_data 
            = ((0xfffffffcU & vlSelf->plic_logic_bus_rsp_payload_fragment_data) 
               | (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_threshold));
    } else if ((0x201004U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
        vlSelf->plic_logic_bus_rsp_payload_fragment_data 
            = ((0xffffffe0U & vlSelf->plic_logic_bus_rsp_payload_fragment_data) 
               | (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_claim));
    } else if ((0x2080U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
        vlSelf->plic_logic_bus_rsp_payload_fragment_data 
            = ((0xfffe0001U & vlSelf->plic_logic_bus_rsp_payload_fragment_data) 
               | ((((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_15) 
                    << 0x10U) | (((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_14) 
                                  << 0xfU) | (((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_13) 
                                               << 0xeU) 
                                              | ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_12) 
                                                 << 0xdU)))) 
                  | ((((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_11) 
                       << 0xcU) | (((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_10) 
                                    << 0xbU) | (((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_9) 
                                                 << 0xaU) 
                                                | ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_8) 
                                                   << 9U)))) 
                     | ((((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_7) 
                          << 8U) | (((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_6) 
                                     << 7U) | (((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_5) 
                                                << 6U) 
                                               | ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_4) 
                                                  << 5U)))) 
                        | (((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_3) 
                            << 4U) | (((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_2) 
                                       << 3U) | (((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_1) 
                                                  << 2U) 
                                                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_0) 
                                                    << 1U))))))));
        vlSelf->plic_logic_bus_rsp_payload_fragment_data 
            = ((0x1ffffU & vlSelf->plic_logic_bus_rsp_payload_fragment_data) 
               | ((((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_30) 
                    << 0x1fU) | (((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_29) 
                                  << 0x1eU) | ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_28) 
                                               << 0x1dU))) 
                  | ((((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_27) 
                       << 0x1cU) | (((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_26) 
                                     << 0x1bU) | (((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_25) 
                                                   << 0x1aU) 
                                                  | ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_24) 
                                                     << 0x19U)))) 
                     | ((((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_23) 
                          << 0x18U) | (((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_22) 
                                        << 0x17U) | 
                                       (((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_21) 
                                         << 0x16U) 
                                        | ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_20) 
                                           << 0x15U)))) 
                        | (((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_19) 
                            << 0x14U) | (((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_18) 
                                          << 0x13U) 
                                         | (((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_17) 
                                             << 0x12U) 
                                            | ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_16) 
                                               << 0x11U))))))));
    }
    vlSelf->clint_logic__DOT__io_bus_cmd_payload_fragment_address 
        = vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_address;
    vlSelf->clint_logic__DOT__when_BmbSlaveFactory_l77_2 
        = (0x4000U == (0xfffcU & (IData)(vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_address)));
    vlSelf->clint_logic__DOT__when_BmbSlaveFactory_l77_3 
        = (0x4004U == (0xfffcU & (IData)(vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_address)));
    vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_cmd_payload_fragment_address 
        = vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_address;
    vlSelf->clint_logic__DOT__when_BmbSlaveFactory_l77 
        = (0xbff8U == (0xfffcU & (IData)(vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_address)));
    vlSelf->clint_logic__DOT__when_BmbSlaveFactory_l77_1 
        = (0xbffcU == (0xfffcU & (IData)(vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_address)));
    vlSelf->clint_logic__DOT__io_bus_cmd_valid = vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_valid;
    vlSelf->clint_logic__DOT__factory_rsp_valid = vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_valid;
    vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_cmd_valid 
        = vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_valid;
    vlSelf->clint_logic__DOT__factory_askWrite = ((IData)(vlSelf->clintWishbone_WE) 
                                                  & (IData)(vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_valid));
    vlSelf->clint_logic__DOT__factory_askRead = ((~ (IData)(vlSelf->clintWishbone_WE)) 
                                                 & (IData)(vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_valid));
    vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_cmd_fire 
        = ((IData)(vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_valid) 
           & (IData)(vlSelf->clint_logic_io_bus_cmd_ready));
    vlSelf->plicWishboneBridge_logic_bridge_io_output_cmd_valid 
        = vlSelf->plic_logic_bus_rsp_valid;
    vlSelf->plic_logic_bmb_cmd_valid = vlSelf->plic_logic_bus_rsp_valid;
    vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_cmd_valid 
        = vlSelf->plic_logic_bus_rsp_valid;
    vlSelf->plic_logic_bus_askWrite = ((IData)(vlSelf->plicWishbone_WE) 
                                       & (IData)(vlSelf->plic_logic_bus_rsp_valid));
    vlSelf->plic_logic_bus_askRead = ((~ (IData)(vlSelf->plicWishbone_WE)) 
                                      & (IData)(vlSelf->plic_logic_bus_rsp_valid));
    vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_cmd_fire 
        = ((IData)(vlSelf->plic_logic_bus_rsp_valid) 
           & (IData)(vlSelf->plic_logic_bmb_cmd_ready));
    vlSelf->peripheralBridge_logic__DOT__inputCmd_fire 
        = ((IData)(vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rValid) 
           & (IData)(vlSelf->peripheralBridge_logic__DOT__inputCmd_ready));
    vlSelf->peripheralBridge_logic__DOT__when_BmbToWishbone_l31 
        = ((IData)(vlSelf->peripheralBridge_logic__DOT__inputCmd_ready) 
           & (IData)(vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_last));
    vlSelf->peripheralBridge_logic__DOT__when_BmbToWishbone_l29 
        = ((IData)(vlSelf->peripheralBridge_logic__DOT__rsp_rValidN) 
           & (IData)(peripheralBridge_logic__DOT____VdfgRegularize_ha73a16a8_0_0));
    vlSelf->peripheralBridge_logic__DOT__rsp_valid 
        = ((IData)(peripheralBridge_logic__DOT____VdfgRegularize_ha73a16a8_0_0) 
           & ((IData)(vlSelf->peripheralBridge_logic__DOT__rsp_rValidN) 
              & ((~ (IData)(vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_opcode)) 
                 | (IData)(vlSelf->peripheralBridge_logic__DOT__rsp_payload_last))));
    vlSelf->clint_logic__DOT__factory_rsp_payload_fragment_data = 0U;
    if ((0U == (IData)(vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_address))) {
        vlSelf->clint_logic__DOT__factory_rsp_payload_fragment_data 
            = ((0xfffffffeU & vlSelf->clint_logic__DOT__factory_rsp_payload_fragment_data) 
               | (IData)(vlSelf->clint_logic__DOT__logic_harts_0_softwareInterrupt));
    }
    if (vlSelf->clint_logic__DOT__when_BmbSlaveFactory_l77) {
        vlSelf->clint_logic__DOT__factory_rsp_payload_fragment_data 
            = (IData)(vlSelf->clint_logic__DOT__logic_time);
    }
    if (vlSelf->clint_logic__DOT__when_BmbSlaveFactory_l77_1) {
        vlSelf->clint_logic__DOT__factory_rsp_payload_fragment_data 
            = (IData)((vlSelf->clint_logic__DOT__logic_time 
                       >> 0x20U));
    }
    vlSelf->clint_logic__DOT__io_bus_cmd_fire = vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_cmd_fire;
    vlSelf->clint_logic__DOT__factory_doWrite = ((IData)(vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_cmd_fire) 
                                                 & (IData)(vlSelf->clintWishbone_WE));
    vlSelf->clint_logic__DOT__factory_doRead = ((~ (IData)(vlSelf->clintWishbone_WE)) 
                                                & (IData)(vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_cmd_fire));
    vlSelf->plic_logic_bridge_coherencyStall_willIncrement = 0U;
    if (vlSelf->when_PlicMapper_l122) {
        vlSelf->plic_logic_bridge_coherencyStall_willIncrement = 1U;
    }
    if (vlSelf->when_BmbSlaveFactory_l77) {
        if (vlSelf->plic_logic_bus_askWrite) {
            vlSelf->plic_logic_bridge_coherencyStall_willIncrement = 1U;
        }
        if (vlSelf->plic_logic_bus_askRead) {
            vlSelf->plic_logic_bridge_coherencyStall_willIncrement = 1U;
        }
    }
    vlSelf->plic_logic_bmb_cmd_fire = vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_cmd_fire;
    vlSelf->plic_logic_bus_doRead = ((~ (IData)(vlSelf->plicWishbone_WE)) 
                                     & (IData)(vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_cmd_fire));
    vlSelf->plic_logic_bus_doWrite = ((IData)(vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_cmd_fire) 
                                      & (IData)(vlSelf->plicWishbone_WE));
    vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_valid 
        = ((IData)(vlSelf->peripheralBridge_logic__DOT__halt) 
           | (IData)(vlSelf->peripheralBridge_logic__DOT__rsp_valid));
    vlSelf->clint_logic__DOT__when_BmbSlaveFactory_l33 
        = ((IData)(vlSelf->clint_logic__DOT__factory_doWrite) 
           & (IData)(vlSelf->clint_logic__DOT__factory_writeErrorFlag));
    vlSelf->clint_logic__DOT__when_BmbSlaveFactory_l35 
        = ((IData)(vlSelf->clint_logic__DOT__factory_doRead) 
           & (IData)(vlSelf->clint_logic__DOT__factory_readErrorFlag));
    vlSelf->plic_logic_bridge_coherencyStall_willOverflow 
        = ((IData)(vlSelf->plic_logic_bridge_coherencyStall_value) 
           & (IData)(vlSelf->plic_logic_bridge_coherencyStall_willIncrement));
    vlSelf->plic_logic_bridge_coherencyStall_valueNext 
        = (1U & ((IData)(vlSelf->plic_logic_bridge_coherencyStall_value) 
                 + (IData)(vlSelf->plic_logic_bridge_coherencyStall_willIncrement)));
    if (vlSelf->plic_logic_bridge_coherencyStall_willClear) {
        vlSelf->plic_logic_bridge_coherencyStall_valueNext = 0U;
    }
    vlSelf->plic_logic_bridge_claim_valid = 0U;
    vlSelf->plic_logic_bridge_claim_payload = 0U;
    vlSelf->when_BmbSlaveFactory_l35 = ((IData)(vlSelf->plic_logic_bus_doRead) 
                                        & (IData)(vlSelf->plic_logic_bus_readErrorFlag));
    vlSelf->when_BmbSlaveFactory_l33 = ((IData)(vlSelf->plic_logic_bus_doWrite) 
                                        & (IData)(vlSelf->plic_logic_bus_writeErrorFlag));
    vlSelf->plic_logic_bridge_targetMapping_0_targetCompletion_valid = 0U;
    if ((0x200004U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
        if (vlSelf->plic_logic_bus_doRead) {
            vlSelf->plic_logic_bridge_claim_valid = 1U;
            vlSelf->plic_logic_bridge_claim_payload 
                = vlSelf->cores_0_cpu_externalInterrupt_plic_target_claim;
        }
        if (vlSelf->plic_logic_bus_doWrite) {
            vlSelf->plic_logic_bridge_targetMapping_0_targetCompletion_valid = 1U;
        }
    } else if ((0x201004U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
        if (vlSelf->plic_logic_bus_doRead) {
            vlSelf->plic_logic_bridge_claim_valid = 1U;
            vlSelf->plic_logic_bridge_claim_payload 
                = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_claim;
        }
    }
    vlSelf->plic_logic_bridge_targetMapping_1_targetCompletion_valid = 0U;
    if ((0x201004U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
        if (vlSelf->plic_logic_bus_doWrite) {
            vlSelf->plic_logic_bridge_targetMapping_1_targetCompletion_valid = 1U;
        }
    }
    vlSelf->clint_logic__DOT__factory_rsp_payload_fragment_opcode 
        = ((IData)(vlSelf->clint_logic__DOT__when_BmbSlaveFactory_l33) 
           || (IData)(vlSelf->clint_logic__DOT__when_BmbSlaveFactory_l35));
    vlSelf->plic_logic_bus_rsp_payload_fragment_opcode 
        = ((IData)(vlSelf->when_BmbSlaveFactory_l33) 
           || (IData)(vlSelf->when_BmbSlaveFactory_l35));
    vlSelf->plic_logic_bridge_completion_valid = 0U;
    if (vlSelf->plic_logic_bridge_targetMapping_0_targetCompletion_valid) {
        vlSelf->plic_logic_bridge_completion_valid = 1U;
        vlSelf->plic_logic_bridge_completion_payload = 0U;
        vlSelf->plic_logic_bridge_completion_payload 
            = vlSelf->plic_logic_bridge_targetMapping_0_targetCompletion_payload;
    } else {
        vlSelf->plic_logic_bridge_completion_payload = 0U;
    }
    if (vlSelf->plic_logic_bridge_targetMapping_1_targetCompletion_valid) {
        vlSelf->plic_logic_bridge_completion_valid = 1U;
        vlSelf->plic_logic_bridge_completion_payload 
            = vlSelf->plic_logic_bridge_targetMapping_1_targetCompletion_payload;
    }
}

extern const VlUnpacked<CData/*0:0*/, 64> Vsonata__ConstPool__TABLE_haf626fae_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vsonata__ConstPool__TABLE_hb53dced1_0;

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__15(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__15\n"); );
    // Init
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    __Vtableidx3 = (((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg) 
                     << 3U) | (((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_busy) 
                                << 2U) | (((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_write) 
                                           << 1U) | (IData)(vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l205))));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_valid 
        = Vsonata__ConstPool__TABLE_haf626fae_0[__Vtableidx3];
    __Vtableidx4 = (((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg) 
                     << 1U) | (IData)(vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l205));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_op 
        = Vsonata__ConstPool__TABLE_hb53dced1_0[__Vtableidx4];
    vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l266 
        = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_busy) 
           & (((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_progbufX_trigged) 
               | (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dataX_trigged)) 
              & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_noError)));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractAuto_trigger 
        = (((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_progbufX_trigged) 
            & ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractAuto_autoexecProgbuf) 
               >> (IData)(vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_progbufX_mem_port))) 
           | ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractAuto_autoexecdata) 
              & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dataX_trigged)));
    vlSelf->privilegedDebug_logic_dm_io_harts_0_dmToHart_payload_op 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_op;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_dmToHart_payload_op 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_op;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_takeWhen_payload_op 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_op;
    vlSelf->privilegedDebug_logic_dm_io_harts_0_dmToHart_valid 
        = ((~ ((~ (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_sel)) 
               & (0U != (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_op)))) 
           & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_valid));
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_dmToHart_valid 
        = vlSelf->privilegedDebug_logic_dm_io_harts_0_dmToHart_valid;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_takeWhen_valid 
        = vlSelf->privilegedDebug_logic_dm_io_harts_0_dmToHart_valid;
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__16(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__16\n"); );
    // Body
    vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l370 
        = ((IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_redo) 
           | ((~ (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_executionCounter)) 
              & (IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_commit)));
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__21(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__21\n"); );
    // Body
    vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_address;
    vlSelf->privilegedDebug_logic_dm__DOT__io_ctrl_cmd_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_data;
    vlSelf->debugCd_logic_outputReset = vlSelf->debugCd_logic_outputResetUnbuffered;
    vlSelf->privilegedDebug_logic_dm__DOT__io_ctrl_cmd_payload_address 
        = vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address;
    vlSelf->debugCd_logic_outputResetUnbuffered = 0U;
    if (vlSelf->when_ClockDomainGenerator_l222) {
        vlSelf->debugCd_logic_outputResetUnbuffered = 1U;
    }
    vlSelf->bufferCC_8__DOT__debugCd_logic_outputReset 
        = vlSelf->debugCd_logic_outputReset;
    vlSelf->privilegedDebug_logic_dm__DOT__debugCd_logic_outputReset 
        = vlSelf->debugCd_logic_outputReset;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__debugCd_logic_outputReset 
        = vlSelf->debugCd_logic_outputReset;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__debugCd_logic_outputReset 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__debugCd_logic_outputReset;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__debugCd_logic_outputReset 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__debugCd_logic_outputReset;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__debugCd_logic_outputReset 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__debugCd_logic_outputReset;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_target_buffercc__DOT__debugCd_logic_outputReset 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__debugCd_logic_outputReset;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__bufferCC_7__DOT__debugCd_logic_outputReset 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__debugCd_logic_outputReset;
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__18(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__18\n"); );
    // Body
    vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_data = 0U;
    if (vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l205) {
        vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_data 
            = vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_data;
    }
    if ((4U & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg))) {
        if ((2U & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg))) {
            if ((1U & (~ (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg)))) {
                vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_data 
                    = vlSelf->privilegedDebug_logic_dm__DOT__logic_progbufX_mem_spinal_port1;
            }
        } else if ((1U & (~ (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg)))) {
            vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_data 
                = (0x7b402073U | (IData)(vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_toHarts_payload_data_3));
        }
    } else if ((2U & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg))) {
        if ((1U & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg))) {
            vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_data 
                = (0x7b401073U | vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_toHarts_payload_data_1);
        }
    }
    vlSelf->privilegedDebug_logic_dm__DOT__logic_command_request 
        = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_commandRequest) 
           | (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractAuto_trigger));
    vlSelf->privilegedDebug_logic_dm_io_harts_0_dmToHart_payload_data 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_data;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_dmToHart_payload_data 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_data;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_takeWhen_payload_data 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_data;
    vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l260 
        = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_request) 
           & ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_busy) 
              & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_noError)));
    vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l275 
        = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_request) 
           & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_noError));
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__19(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__19\n"); );
    // Body
    vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data = 0U;
    if (vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l205) {
        vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data 
            = vlSelf->privilegedDebug_logic_dm__DOT___zz_factory_cmdToRsp_payload_data;
    }
    if ((0x40U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address))) {
        if ((1U & (~ ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address)))) {
                                vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data 
                                    = vlSelf->privilegedDebug_logic_dm__DOT__logic_haltsum_value;
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address))) {
        if ((0x10U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address))) {
            if ((8U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address))) {
                if ((1U & (~ ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address)))) {
                            vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data 
                                = ((0x1fffffffU & vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data) 
                                   | ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_sbcs_sbversion) 
                                      << 0x1dU));
                            vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data 
                                = ((0xfff1ffffU & vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data) 
                                   | ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_sbcs_sbaccess) 
                                      << 0x11U));
                        }
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address))) {
        if ((8U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address))) {
            if ((1U & (~ ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address)))) {
                        vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data 
                            = ((0xfffffffeU & vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data) 
                               | (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractAuto_autoexecdata));
                        vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data 
                            = ((0xfffcffffU & vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data) 
                               | ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractAuto_autoexecProgbuf) 
                                  << 0x10U));
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address))) {
            if ((2U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address))) {
                if ((1U & (~ (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address)))) {
                    vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data 
                        = ((0xfffffff0U & vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data) 
                           | (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_dataCount));
                    vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data 
                        = ((0xfffff8ffU & vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data) 
                           | ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_cmdErr) 
                              << 8U));
                    vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data 
                        = ((0xffffefffU & vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data) 
                           | ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_busy) 
                              << 0xcU));
                    vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data 
                        = ((0xe0ffffffU & vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data) 
                           | ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_progBufSize) 
                              << 0x18U));
                }
            }
        } else if ((2U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address))) {
            if ((1U & (~ (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address)))) {
                vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data 
                    = ((0xfffffff0U & vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data) 
                       | (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_hartInfo_dataaddr));
                vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data 
                    = ((0xfffe0fffU & vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data) 
                       | (((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_hartInfo_dataaccess) 
                           << 0x10U) | ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_hartInfo_datasize) 
                                        << 0xcU)));
                vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data 
                    = ((0xff0fffffU & vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data) 
                       | ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_hartInfo_nscratch) 
                          << 0x14U));
            }
        } else if ((1U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address))) {
            vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data 
                = ((0xfffffff0U & vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data) 
                   | (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_version));
            vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data 
                = ((0xfffff87fU & vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data) 
                   | (((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_anyRunning) 
                       << 0xaU) | (((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_allHalted) 
                                    << 9U) | (((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_anyHalted) 
                                               << 8U) 
                                              | ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_authenticated) 
                                                 << 7U)))));
            vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data 
                = ((0xfff007ffU & vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data) 
                   | (((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_allHaveReset) 
                       << 0x13U) | ((((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_anyHaveReset) 
                                      << 0x12U) | (
                                                   ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_allResumeAck) 
                                                    << 0x11U) 
                                                   | (((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_anyResumeAck) 
                                                       << 0x10U) 
                                                      | ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_anyNonExistent) 
                                                         << 0xfU)))) 
                                    | (((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_anyNonExistent) 
                                        << 0xeU) | 
                                       (((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_allUnavail) 
                                         << 0xdU) | 
                                        (((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_anyUnavail) 
                                          << 0xcU) 
                                         | ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_allRunning) 
                                            << 0xbU)))))));
            vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data 
                = ((0xffbfffffU & vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data) 
                   | ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_impebreak) 
                      << 0x16U));
        } else {
            vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data 
                = ((0xfffffffcU & vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data) 
                   | (((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_ndmreset) 
                       << 1U) | (IData)(vlSelf->privilegedDebug_logic_dm__DOT__dmactive)));
            vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data 
                = ((0xfc00003fU & vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data) 
                   | (((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSelLo) 
                       << 0x10U) | ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSelHi) 
                                    << 6U)));
        }
    }
    vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateNext 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg;
    if ((4U & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg))) {
        if ((2U & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg))) {
            if ((1U & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg))) {
                if (vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l366) {
                    vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateNext = 1U;
                }
                if (vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l370) {
                    vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateNext = 6U;
                }
            } else {
                vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateNext = 7U;
            }
        } else if ((1U & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg))) {
            if (vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l350) {
                vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateNext = 1U;
                if (vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_args_postExec) {
                    vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateNext = 6U;
                }
            }
        } else {
            vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateNext = 5U;
        }
    } else if ((2U & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg))) {
        if ((1U & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg))) {
            vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateNext = 5U;
        } else {
            vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateNext = 1U;
            if ((0U == (IData)(vlSelf->privilegedDebug_logic_dm__DOT__switch_DebugModule_l287))) {
                if ((1U & (~ (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_notSupported)))) {
                    if (vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_args_postExec) {
                        vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateNext = 6U;
                    }
                    if (vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_args_transfer) {
                        if (vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l296) {
                            vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateNext 
                                = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_args_write)
                                    ? 4U : 3U);
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg))) {
        if (vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l275) {
            if (vlSelf->cores_0_cpu_debugRiscv_halted) {
                vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateNext = 2U;
            }
        }
    }
    if (vlSelf->privilegedDebug_logic_dm__DOT__logic_command_wantStart) {
        vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateNext = 1U;
    }
    if (vlSelf->privilegedDebug_logic_dm__DOT__logic_command_wantKill) {
        vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateNext = 0U;
    }
    vlSelf->privilegedDebug_logic_dm__DOT__when_StateMachine_l253 
        = ((1U != (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg)) 
           & (1U == (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateNext)));
}
