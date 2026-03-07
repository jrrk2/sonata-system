// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsonata.h for the primary calling header

#include "Vsonata__pch.h"
#include "Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.h"
#include "Vsonata__Syms.h"

extern const VlUnpacked<CData/*0:0*/, 8> Vsonata__ConstPool__TABLE_ha8c1a675_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsonata__ConstPool__TABLE_haf626fae_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vsonata__ConstPool__TABLE_hb53dced1_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsonata__ConstPool__TABLE_h64e87499_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vsonata__ConstPool__TABLE_h2578492e_0;

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___ico_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__0(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___ico_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_0;
    __VdfgRegularize_h09b8325e_1_0 = 0;
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_1;
    __VdfgRegularize_h09b8325e_1_1 = 0;
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_2;
    __VdfgRegularize_h09b8325e_1_2 = 0;
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_3;
    __VdfgRegularize_h09b8325e_1_3 = 0;
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_4;
    __VdfgRegularize_h09b8325e_1_4 = 0;
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_5;
    __VdfgRegularize_h09b8325e_1_5 = 0;
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_6;
    __VdfgRegularize_h09b8325e_1_6 = 0;
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_7;
    __VdfgRegularize_h09b8325e_1_7 = 0;
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_8;
    __VdfgRegularize_h09b8325e_1_8 = 0;
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_9;
    __VdfgRegularize_h09b8325e_1_9 = 0;
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_10;
    __VdfgRegularize_h09b8325e_1_10 = 0;
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_11;
    __VdfgRegularize_h09b8325e_1_11 = 0;
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_12;
    __VdfgRegularize_h09b8325e_1_12 = 0;
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_13;
    __VdfgRegularize_h09b8325e_1_13 = 0;
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_14;
    __VdfgRegularize_h09b8325e_1_14 = 0;
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*2:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*4:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.externalInterruptS 
        = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_iep_regNext;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.externalInterrupt 
        = vlSelf->cores_0_cpu_externalInterrupt_plic_target_iep_regNext;
    vlSelf->bufferCC_7__DOT__io_dataIn = vlSelf->bufferCC_7_io_dataIn;
    vlSelf->bufferCC_8__DOT__io_dataIn = vlSelf->bufferCC_8_io_dataIn;
    vlSelf->bufferCC_8__DOT__debugCd_logic_outputReset 
        = vlSelf->debugCd_logic_outputReset;
    vlSelf->privilegedDebug_logic_dm__DOT__debugCd_logic_outputReset 
        = vlSelf->debugCd_logic_outputReset;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_target_buffercc__DOT__io_dataIn 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_target;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__bufferCC_7__DOT__io_dataIn 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__bufferCC_7_io_dataIn;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target_buffercc__DOT__io_dataIn 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target;
    vlSelf->clint_logic__DOT__systemCd_logic_outputReset 
        = vlSelf->systemCd_logic_outputReset;
    vlSelf->bufferCC_9__DOT__io_dataIn = vlSelf->bufferCC_9_io_dataIn;
    vlSelf->clintWishboneBridge_logic_bridge__DOT__systemCd_logic_outputReset 
        = vlSelf->systemCd_logic_outputReset;
    vlSelf->plicWishboneBridge_logic_bridge__DOT__systemCd_logic_outputReset 
        = vlSelf->systemCd_logic_outputReset;
    vlSelf->peripheralBridge_logic__DOT__systemCd_logic_outputReset 
        = vlSelf->systemCd_logic_outputReset;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_rsp_payload_last 
        = vlSelf->_zz_io_output_rsp_payload_last;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_rsp_payload_fragment_source 
        = vlSelf->_zz_io_output_rsp_payload_fragment_source;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_rsp_payload_fragment_opcode 
        = vlSelf->_zz_io_output_rsp_payload_fragment_opcode;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_rsp_payload_fragment_data 
        = vlSelf->_zz_io_output_rsp_payload_fragment_data;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_rsp_payload_fragment_context 
        = vlSelf->_zz_io_output_rsp_payload_fragment_context;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_0_payload_fragment_source 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_inputs_0_payload_fragment_source;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_1_payload_fragment_source 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_inputs_1_payload_fragment_source;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_1_payload_fragment_context 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_inputs_1_payload_fragment_context;
    vlSelf->privilegedDebug_logic_withTap_tunnel_io_jtag_tdo 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_tdoUnbufferd_regNext;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_jtag_tdo 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_tdoUnbufferd_regNext;
    vlSelf->clint_logic__DOT__io_bus_rsp_valid = vlSelf->clint_logic__DOT___zz_io_bus_rsp_valid_1;
    vlSelf->clint_logic__DOT___zz_io_bus_rsp_valid 
        = vlSelf->clint_logic__DOT___zz_io_bus_rsp_valid_1;
    vlSelf->clintWishboneBridge_logic_bridge_io_input_DAT_MISO 
        = vlSelf->clint_logic__DOT___zz_io_bus_rsp_payload_fragment_data;
    vlSelf->clint_logic__DOT__io_bus_rsp_payload_fragment_data 
        = vlSelf->clint_logic__DOT___zz_io_bus_rsp_payload_fragment_data;
    vlSelf->clintWishboneBridge_logic_bridge__DOT__io_input_DAT_MISO 
        = vlSelf->clint_logic__DOT___zz_io_bus_rsp_payload_fragment_data;
    vlSelf->_zz_plic_logic_bmb_rsp_valid = vlSelf->_zz_plic_logic_bmb_rsp_valid_1;
    vlSelf->plicWishboneBridge_logic_bridge_io_output_rsp_ready 
        = vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_rsp_ready;
    vlSelf->plicWishboneBridge_logic_bridge_io_input_DAT_MISO 
        = vlSelf->_zz_plic_logic_bmb_rsp_payload_fragment_data;
    vlSelf->plicWishboneBridge_logic_bridge__DOT__io_input_DAT_MISO 
        = vlSelf->_zz_plic_logic_bmb_rsp_payload_fragment_data;
    vlSelf->peripheralBridge_logic_io_output_CYC = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rValid;
    vlSelf->peripheralBridge_logic_io_output_WE = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_opcode;
    vlSelf->peripheralBridge_logic__DOT__io_output_CYC 
        = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rValid;
    vlSelf->peripheralBridge_logic__DOT__io_output_WE 
        = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_opcode;
    vlSelf->peripheralBridge_logic__DOT__rsp_ready 
        = vlSelf->peripheralBridge_logic__DOT__rsp_rValidN;
    vlSelf->peripheralBridge_logic__DOT__rsp_payload_fragment_source 
        = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_source;
    vlSelf->peripheralBridge_logic__DOT__rsp_payload_fragment_context 
        = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_context;
    vlSelf->peripheralBridge_logic__DOT__inputCmd_payload_fragment_address 
        = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_address;
    vlSelf->peripheralBridge_logic__DOT__inputCmd_valid 
        = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rValid;
    vlSelf->peripheralBridge_logic__DOT__inputCmd_payload_last 
        = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_last;
    vlSelf->peripheralBridge_logic__DOT__inputCmd_payload_fragment_source 
        = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_source;
    vlSelf->peripheralBridge_logic__DOT__inputCmd_payload_fragment_opcode 
        = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_opcode;
    vlSelf->peripheralBridge_logic__DOT__inputCmd_payload_fragment_length 
        = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_length;
    vlSelf->peripheralBridge_logic__DOT__inputCmd_payload_fragment_mask 
        = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_mask;
    vlSelf->peripheralBridge_logic__DOT__inputCmd_payload_fragment_context 
        = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_context;
    vlSelf->peripheralBridge_logic_io_output_DAT_MOSI 
        = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_data;
    vlSelf->peripheralBridge_logic__DOT__io_output_DAT_MOSI 
        = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_data;
    vlSelf->peripheralBridge_logic__DOT__inputCmd_payload_fragment_data 
        = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_data;
    vlSelf->peripheralBridge_logic_io_output_BTE = vlSelf->peripheralBridge_logic__DOT__io_output_BTE;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_payload_fragment_opcode 
        = vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_payload_fragment_opcode;
    vlSelf->clint_logic_io_timerInterrupt = vlSelf->clint_logic__DOT__logic_harts_0_timerInterrupt;
    vlSelf->clint_logic__DOT__io_timerInterrupt = vlSelf->clint_logic__DOT__logic_harts_0_timerInterrupt;
    vlSelf->clint_logic_io_softwareInterrupt = vlSelf->clint_logic__DOT__logic_harts_0_softwareInterrupt;
    vlSelf->clint_logic__DOT__io_softwareInterrupt 
        = vlSelf->clint_logic__DOT__logic_harts_0_softwareInterrupt;
    vlSelf->privilegedDebug_logic_dm_io_harts_0_ackReset 
        = vlSelf->privilegedDebug_logic_dm__DOT___zz_io_harts_0_ackReset;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_ackReset 
        = vlSelf->privilegedDebug_logic_dm__DOT___zz_io_harts_0_ackReset;
    vlSelf->privilegedDebug_logic_dm_io_harts_0_haltReq 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_harts_0_haltReq;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_haltReq 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_harts_0_haltReq;
    vlSelf->clint_logic__DOT__io_time = vlSelf->clint_logic__DOT__logic_time;
    vlSelf->clint_logic__DOT___zz_factory_rsp_payload_fragment_data 
        = vlSelf->clint_logic__DOT__logic_time;
    vlSelf->iArbiter_bmb_cmd_valid = vlSelf->cores_0_cpu_iBus_cmd_rValid;
    vlSelf->cores_0_cpu_iBus_cmd_halfPipe_valid = vlSelf->cores_0_cpu_iBus_cmd_rValid;
    vlSelf->cores_0_cpu_iBus_connector_decoder_cmd_valid 
        = vlSelf->cores_0_cpu_iBus_cmd_rValid;
    vlSelf->iArbiter_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_valid 
        = vlSelf->cores_0_cpu_iBus_cmd_rValid;
    vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_m2sPipe_valid 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rValid;
    vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_m2sPipe_payload_last 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_last;
    vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_m2sPipe_payload_fragment_opcode 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_opcode;
    vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_m2sPipe_payload_fragment_address 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_address;
    vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_m2sPipe_payload_fragment_length 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_length;
    vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_m2sPipe_payload_fragment_data 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_data;
    vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_m2sPipe_payload_fragment_mask 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_mask;
    vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_m2sPipe_payload_fragment_context 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_context;
    vlSelf->iArbiter_bmb_decoder__DOT__io_outputs_0_cmd_valid 
        = vlSelf->iArbiter_bmb_cmd_rValid;
    vlSelf->iArbiter_bmb_decoder__DOT__io_outputs_0_cmd_payload_last 
        = vlSelf->iArbiter_bmb_cmd_rData_last;
    vlSelf->iArbiter_bmb_decoder__DOT__io_outputs_0_cmd_payload_fragment_opcode 
        = vlSelf->iArbiter_bmb_cmd_rData_fragment_opcode;
    vlSelf->iArbiter_bmb_decoder__DOT__io_outputs_0_cmd_payload_fragment_address 
        = vlSelf->iArbiter_bmb_cmd_rData_fragment_address;
    vlSelf->iArbiter_bmb_decoder__DOT__io_outputs_0_cmd_payload_fragment_length 
        = vlSelf->iArbiter_bmb_cmd_rData_fragment_length;
    vlSelf->_zz_cores_0_cpu_iBus_rsp_valid = vlSelf->_zz_cores_0_cpu_iBus_rsp_valid_1;
    vlSelf->cores_0_cpu_iBus_rsp_payload_fragment_opcode 
        = vlSelf->_zz_cores_0_cpu_iBus_rsp_payload_fragment_opcode;
    vlSelf->bufferCC_7_io_dataOut = vlSelf->bufferCC_7__DOT__buffers_1;
    vlSelf->bufferCC_7__DOT__io_dataOut = vlSelf->bufferCC_7__DOT__buffers_1;
    vlSelf->bufferCC_8_io_dataOut = vlSelf->bufferCC_8__DOT__buffers_1;
    vlSelf->bufferCC_8__DOT__io_dataOut = vlSelf->bufferCC_8__DOT__buffers_1;
    vlSelf->bufferCC_9__DOT__io_dataOut = vlSelf->bufferCC_9__DOT__buffers_1;
    vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_valid 
        = vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_valid_1;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_payload_fragment_context 
        = vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_payload_fragment_context;
    vlSelf->plic_logic_bridge_coherencyStall_willOverflowIfInc 
        = vlSelf->plic_logic_bridge_coherencyStall_value;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_1_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_62;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_0 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_0;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_2_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_63;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_1 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_1;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_3_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_64;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_2 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_2;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_4_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_65;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_3 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_3;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_5_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_66;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_4 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_4;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_6_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_67;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_5 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_5;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_7_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_68;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_6 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_6;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_8_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_69;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_7 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_7;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_9_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_70;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_8 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_8;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_10_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_71;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_9 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_9;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_11_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_72;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_10 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_10;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_12_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_73;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_11 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_11;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_13_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_74;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_12 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_12;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_14_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_75;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_13 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_13;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_15_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_76;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_14 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_14;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_16_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_77;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_15 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_15;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_17_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_78;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_16 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_16;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_18_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_79;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_17 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_17;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_19_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_80;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_18 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_18;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_20_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_81;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_19 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_19;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_21_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_82;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_20 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_20;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_22_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_83;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_21 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_21;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_23_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_84;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_22 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_22;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_24_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_85;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_23 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_23;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_25_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_86;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_24 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_24;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_26_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_87;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_25 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_25;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_27_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_88;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_26 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_26;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_28_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_89;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_27 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_27;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_29_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_90;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_28 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_28;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_30_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_91;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_29 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_29;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_31_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_92;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_30 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_30;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_1_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_62;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_0 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_0;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_2_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_63;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_1 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_1;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_3_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_64;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_2 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_2;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_4_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_65;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_3 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_3;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_5_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_66;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_4 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_4;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_6_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_67;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_5 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_5;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_7_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_68;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_6 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_6;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_8_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_69;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_7 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_7;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_9_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_70;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_8 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_8;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_10_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_71;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_9 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_9;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_11_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_72;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_10 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_10;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_12_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_73;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_11 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_11;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_13_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_74;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_12 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_12;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_14_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_75;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_13 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_13;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_15_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_76;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_14 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_14;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_16_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_77;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_15 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_15;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_17_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_78;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_16 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_16;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_18_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_79;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_17 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_17;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_19_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_80;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_18 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_18;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_20_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_81;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_19 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_19;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_21_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_82;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_20 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_20;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_22_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_83;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_21 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_21;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_23_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_84;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_22 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_22;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_24_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_85;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_23 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_23;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_25_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_86;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_24 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_24;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_26_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_87;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_25 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_25;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_27_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_88;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_26 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_26;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_28_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_89;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_27 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_27;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_29_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_90;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_28 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_28;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_30_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_91;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_29 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_29;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_31_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_92;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_30 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_30;
    vlSelf->dBusCoherent_bmb_cmd_valid = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rValid;
    vlSelf->dBusCoherent_bmb_cmd_ready = vlSelf->dBusCoherent_bmb_cmd_rValidN;
    vlSelf->dBusCoherent_bmb_cmd_payload_last = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_last;
    vlSelf->dBusCoherent_bmb_cmd_payload_fragment_opcode 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_opcode;
    vlSelf->dBusCoherent_bmb_cmd_payload_fragment_address 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_address;
    vlSelf->dBusCoherent_bmb_cmd_payload_fragment_length 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_length;
    vlSelf->dBusCoherent_bmb_cmd_payload_fragment_data 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_data;
    vlSelf->dBusCoherent_bmb_cmd_payload_fragment_mask 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_mask;
    vlSelf->dBusCoherent_bmb_cmd_payload_fragment_context 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_context;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_m2sPipe_valid 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rValid;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_m2sPipe_payload_last 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_last;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_m2sPipe_payload_fragment_opcode 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_opcode;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_m2sPipe_payload_fragment_address 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_address;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_m2sPipe_payload_fragment_length 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_length;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_m2sPipe_payload_fragment_data 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_data;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_m2sPipe_payload_fragment_mask 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_mask;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_m2sPipe_payload_fragment_context 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_context;
    vlSelf->cores_0_cpu_dBus_connector_decoder_cmd_ready 
        = vlSelf->dBusCoherent_bmb_cmd_rValidN;
    vlSelf->cores_0_cpu_dBus_connector_decoder_cmd_valid 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rValid;
    vlSelf->cores_0_cpu_dBus_connector_decoder_cmd_payload_last 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_last;
    vlSelf->cores_0_cpu_dBus_connector_decoder_cmd_payload_fragment_opcode 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_opcode;
    vlSelf->cores_0_cpu_dBus_connector_decoder_cmd_payload_fragment_address 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_address;
    vlSelf->cores_0_cpu_dBus_connector_decoder_cmd_payload_fragment_length 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_length;
    vlSelf->cores_0_cpu_dBus_connector_decoder_cmd_payload_fragment_data 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_data;
    vlSelf->cores_0_cpu_dBus_connector_decoder_cmd_payload_fragment_mask 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_mask;
    vlSelf->cores_0_cpu_dBus_connector_decoder_cmd_payload_fragment_context 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_context;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_valid 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rValid;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_ready 
        = vlSelf->dBusCoherent_bmb_cmd_rValidN;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_last 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_last;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_opcode 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_opcode;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_address 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_address;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_length 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_length;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_data 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_data;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_mask 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_mask;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_context 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_context;
    vlSelf->dBusNonCoherent_bmb_cmd_valid = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rValid;
    vlSelf->dBusNonCoherent_bmb_cmd_ready = vlSelf->dBusNonCoherent_bmb_cmd_rValidN;
    vlSelf->dBusNonCoherent_bmb_cmd_payload_last = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_last;
    vlSelf->dBusNonCoherent_bmb_cmd_payload_fragment_opcode 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_opcode;
    vlSelf->dBusNonCoherent_bmb_cmd_payload_fragment_address 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_address;
    vlSelf->dBusNonCoherent_bmb_cmd_payload_fragment_length 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_length;
    vlSelf->dBusNonCoherent_bmb_cmd_payload_fragment_data 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_data;
    vlSelf->dBusNonCoherent_bmb_cmd_payload_fragment_mask 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_mask;
    vlSelf->dBusNonCoherent_bmb_cmd_payload_fragment_context 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_context;
    vlSelf->dBusCoherent_bmb_cmd_s2mPipe_m2sPipe_valid 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rValid;
    vlSelf->dBusCoherent_bmb_cmd_s2mPipe_m2sPipe_payload_last 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_last;
    vlSelf->dBusCoherent_bmb_cmd_s2mPipe_m2sPipe_payload_fragment_opcode 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_opcode;
    vlSelf->dBusCoherent_bmb_cmd_s2mPipe_m2sPipe_payload_fragment_address 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_address;
    vlSelf->dBusCoherent_bmb_cmd_s2mPipe_m2sPipe_payload_fragment_length 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_length;
    vlSelf->dBusCoherent_bmb_cmd_s2mPipe_m2sPipe_payload_fragment_data 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_data;
    vlSelf->dBusCoherent_bmb_cmd_s2mPipe_m2sPipe_payload_fragment_mask 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_mask;
    vlSelf->dBusCoherent_bmb_cmd_s2mPipe_m2sPipe_payload_fragment_context 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_context;
    vlSelf->dBusCoherent_bmb_connector_decoder_cmd_ready 
        = vlSelf->dBusNonCoherent_bmb_cmd_rValidN;
    vlSelf->dBusCoherent_bmb_connector_decoder_cmd_valid 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rValid;
    vlSelf->dBusCoherent_bmb_connector_decoder_cmd_payload_last 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_last;
    vlSelf->dBusCoherent_bmb_connector_decoder_cmd_payload_fragment_opcode 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_opcode;
    vlSelf->dBusCoherent_bmb_connector_decoder_cmd_payload_fragment_address 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_address;
    vlSelf->dBusCoherent_bmb_connector_decoder_cmd_payload_fragment_length 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_length;
    vlSelf->dBusCoherent_bmb_connector_decoder_cmd_payload_fragment_data 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_data;
    vlSelf->dBusCoherent_bmb_connector_decoder_cmd_payload_fragment_mask 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_mask;
    vlSelf->dBusCoherent_bmb_connector_decoder_cmd_payload_fragment_context 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_context;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_valid 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rValid;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_ready 
        = vlSelf->dBusNonCoherent_bmb_cmd_rValidN;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_last 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_last;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_opcode 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_opcode;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_address 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_address;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_length 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_length;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_data 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_data;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_mask 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_mask;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_context 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_context;
    vlSelf->cores_0_cpu_iBus_connector_decoder_rsp_valid 
        = vlSelf->_zz_iArbiter_bmb_rsp_valid_1;
    vlSelf->iArbiter_bmb_rsp_valid = vlSelf->_zz_iArbiter_bmb_rsp_valid_1;
    vlSelf->iArbiter_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_valid 
        = vlSelf->_zz_iArbiter_bmb_rsp_valid_1;
    vlSelf->_zz_iArbiter_bmb_rsp_valid = vlSelf->_zz_iArbiter_bmb_rsp_valid_1;
    vlSelf->cores_0_cpu_dBus_connector_decoder_rsp_valid 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_valid_1;
    vlSelf->dBusCoherent_bmb_rsp_valid = vlSelf->_zz_dBusNonCoherent_bmb_rsp_valid_1;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_valid 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_valid_1;
    vlSelf->dBusCoherent_bmb_connector_decoder_rsp_valid 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_valid_1;
    vlSelf->dBusNonCoherent_bmb_rsp_valid = vlSelf->_zz_dBusNonCoherent_bmb_rsp_valid_1;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_valid 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_valid_1;
    vlSelf->_zz_dBusNonCoherent_bmb_rsp_valid = vlSelf->_zz_dBusNonCoherent_bmb_rsp_valid_1;
    vlSelf->when_PlicGateway_l21 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_1)));
    vlSelf->when_PlicGateway_l21_1 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_3)));
    vlSelf->when_PlicGateway_l21_2 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_5)));
    vlSelf->when_PlicGateway_l21_3 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_7)));
    vlSelf->when_PlicGateway_l21_4 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_9)));
    vlSelf->when_PlicGateway_l21_5 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_11)));
    vlSelf->when_PlicGateway_l21_6 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_13)));
    vlSelf->when_PlicGateway_l21_7 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_15)));
    vlSelf->when_PlicGateway_l21_8 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_17)));
    vlSelf->when_PlicGateway_l21_9 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_19)));
    vlSelf->when_PlicGateway_l21_10 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_21)));
    vlSelf->when_PlicGateway_l21_11 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_23)));
    vlSelf->when_PlicGateway_l21_12 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_25)));
    vlSelf->when_PlicGateway_l21_13 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_27)));
    vlSelf->when_PlicGateway_l21_14 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_29)));
    vlSelf->when_PlicGateway_l21_15 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_31)));
    vlSelf->when_PlicGateway_l21_16 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_33)));
    vlSelf->when_PlicGateway_l21_17 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_35)));
    vlSelf->when_PlicGateway_l21_18 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_37)));
    vlSelf->when_PlicGateway_l21_19 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_39)));
    vlSelf->when_PlicGateway_l21_20 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_41)));
    vlSelf->when_PlicGateway_l21_21 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_43)));
    vlSelf->when_PlicGateway_l21_22 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_45)));
    vlSelf->when_PlicGateway_l21_23 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_47)));
    vlSelf->when_PlicGateway_l21_24 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_49)));
    vlSelf->when_PlicGateway_l21_25 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_51)));
    vlSelf->when_PlicGateway_l21_26 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_53)));
    vlSelf->when_PlicGateway_l21_27 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_55)));
    vlSelf->when_PlicGateway_l21_28 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_57)));
    vlSelf->when_PlicGateway_l21_29 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_59)));
    vlSelf->when_PlicGateway_l21_30 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_61)));
    vlSelf->peripheralBridge_logic_io_input_rsp_valid 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rValid;
    vlSelf->peripheralBridge_logic__DOT__io_input_rsp_valid 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rValid;
    vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_m2sPipe_valid 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rValid;
    vlSelf->plicWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_mask 
        = vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_cmd_payload_fragment_mask;
    vlSelf->plic_logic_bmb_cmd_payload_fragment_mask 
        = vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_cmd_payload_fragment_mask;
    vlSelf->cores_0_cpu_dBus_connector_decoder_rsp_payload_last 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_last;
    vlSelf->dBusCoherent_bmb_rsp_payload_last = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_last;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_payload_last 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_last;
    vlSelf->dBusCoherent_bmb_connector_decoder_rsp_payload_last 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_last;
    vlSelf->dBusNonCoherent_bmb_rsp_payload_last = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_last;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_payload_last 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_last;
    vlSelf->cores_0_cpu_dBus_connector_decoder_rsp_payload_fragment_opcode 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_opcode;
    vlSelf->dBusCoherent_bmb_rsp_payload_fragment_opcode 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_opcode;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_payload_fragment_opcode 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_opcode;
    vlSelf->dBusCoherent_bmb_connector_decoder_rsp_payload_fragment_opcode 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_opcode;
    vlSelf->dBusNonCoherent_bmb_rsp_payload_fragment_opcode 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_opcode;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_payload_fragment_opcode 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_opcode;
    vlSelf->cores_0_cpu_dBus_connector_decoder_rsp_payload_fragment_data 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_data;
    vlSelf->dBusCoherent_bmb_rsp_payload_fragment_data 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_data;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_payload_fragment_data 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_data;
    vlSelf->dBusCoherent_bmb_connector_decoder_rsp_payload_fragment_data 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_data;
    vlSelf->dBusNonCoherent_bmb_rsp_payload_fragment_data 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_data;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_payload_fragment_data 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_data;
    vlSelf->cores_0_cpu_dBus_connector_decoder_rsp_payload_fragment_context 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_context;
    vlSelf->dBusCoherent_bmb_rsp_payload_fragment_context 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_context;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_payload_fragment_context 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_context;
    vlSelf->dBusCoherent_bmb_connector_decoder_rsp_payload_fragment_context 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_context;
    vlSelf->dBusNonCoherent_bmb_rsp_payload_fragment_context 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_context;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_payload_fragment_context 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_context;
    vlSelf->iArbiter_bmb_cmd_payload_last = vlSelf->cores_0_cpu_iBus_cmd_rData_last;
    vlSelf->cores_0_cpu_iBus_cmd_halfPipe_payload_last 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_last;
    vlSelf->cores_0_cpu_iBus_connector_decoder_cmd_payload_last 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_last;
    vlSelf->iArbiter_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_last 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_last;
    vlSelf->iArbiter_bmb_cmd_payload_fragment_opcode 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_fragment_opcode;
    vlSelf->cores_0_cpu_iBus_cmd_halfPipe_payload_fragment_opcode 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_fragment_opcode;
    vlSelf->cores_0_cpu_iBus_connector_decoder_cmd_payload_fragment_opcode 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_fragment_opcode;
    vlSelf->iArbiter_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_opcode 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_fragment_opcode;
    vlSelf->iArbiter_bmb_cmd_payload_fragment_address 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_fragment_address;
    vlSelf->cores_0_cpu_iBus_cmd_halfPipe_payload_fragment_address 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_fragment_address;
    vlSelf->cores_0_cpu_iBus_connector_decoder_cmd_payload_fragment_address 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_fragment_address;
    vlSelf->iArbiter_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_address 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_fragment_address;
    vlSelf->iArbiter_bmb_cmd_payload_fragment_length 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_fragment_length;
    vlSelf->cores_0_cpu_iBus_cmd_halfPipe_payload_fragment_length 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_fragment_length;
    vlSelf->cores_0_cpu_iBus_connector_decoder_cmd_payload_fragment_length 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_fragment_length;
    vlSelf->iArbiter_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_length 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_fragment_length;
    vlSelf->cores_0_cpu_iBus_connector_decoder_rsp_payload_last 
        = vlSelf->_zz_iArbiter_bmb_rsp_payload_last;
    vlSelf->iArbiter_bmb_rsp_payload_last = vlSelf->_zz_iArbiter_bmb_rsp_payload_last;
    vlSelf->iArbiter_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_payload_last 
        = vlSelf->_zz_iArbiter_bmb_rsp_payload_last;
    vlSelf->cores_0_cpu_iBus_rsp_payload_last = vlSelf->_zz_cores_0_cpu_iBus_rsp_payload_last;
    vlSelf->cores_0_cpu_iBus_connector_decoder_rsp_payload_fragment_opcode 
        = vlSelf->_zz_iArbiter_bmb_rsp_payload_fragment_opcode;
    vlSelf->iArbiter_bmb_rsp_payload_fragment_opcode 
        = vlSelf->_zz_iArbiter_bmb_rsp_payload_fragment_opcode;
    vlSelf->iArbiter_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_payload_fragment_opcode 
        = vlSelf->_zz_iArbiter_bmb_rsp_payload_fragment_opcode;
    vlSelf->cores_0_cpu_iBus_connector_decoder_rsp_payload_fragment_data 
        = vlSelf->_zz_iArbiter_bmb_rsp_payload_fragment_data;
    vlSelf->iArbiter_bmb_rsp_payload_fragment_data 
        = vlSelf->_zz_iArbiter_bmb_rsp_payload_fragment_data;
    vlSelf->iArbiter_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_payload_fragment_data 
        = vlSelf->_zz_iArbiter_bmb_rsp_payload_fragment_data;
    vlSelf->iArbiter_bmb_decoder_io_input_rsp_payload_last 
        = vlSelf->_zz_io_output_rsp_payload_last;
    vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_payload_last 
        = vlSelf->_zz_io_output_rsp_payload_last;
    vlSelf->peripheralBridge_bmb_arbiter_io_inputs_0_rsp_payload_last 
        = vlSelf->_zz_io_output_rsp_payload_last;
    vlSelf->iArbiter_bmb_decoder__DOT__io_input_rsp_payload_last 
        = vlSelf->_zz_io_output_rsp_payload_last;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_rsp_payload_last 
        = vlSelf->_zz_io_output_rsp_payload_last;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_rsp_payload_last 
        = vlSelf->_zz_io_output_rsp_payload_last;
    vlSelf->iArbiter_bmb_decoder_io_input_rsp_payload_fragment_opcode 
        = vlSelf->_zz_io_output_rsp_payload_fragment_opcode;
    vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_payload_fragment_opcode 
        = vlSelf->_zz_io_output_rsp_payload_fragment_opcode;
    vlSelf->peripheralBridge_bmb_arbiter_io_inputs_0_rsp_payload_fragment_opcode 
        = vlSelf->_zz_io_output_rsp_payload_fragment_opcode;
    vlSelf->iArbiter_bmb_decoder__DOT__io_input_rsp_payload_fragment_opcode 
        = vlSelf->_zz_io_output_rsp_payload_fragment_opcode;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_rsp_payload_fragment_opcode 
        = vlSelf->_zz_io_output_rsp_payload_fragment_opcode;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_rsp_payload_fragment_opcode 
        = vlSelf->_zz_io_output_rsp_payload_fragment_opcode;
    vlSelf->iArbiter_bmb_decoder_io_input_rsp_payload_fragment_data 
        = vlSelf->_zz_io_output_rsp_payload_fragment_data;
    vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_payload_fragment_data 
        = vlSelf->_zz_io_output_rsp_payload_fragment_data;
    vlSelf->peripheralBridge_bmb_arbiter_io_inputs_0_rsp_payload_fragment_data 
        = vlSelf->_zz_io_output_rsp_payload_fragment_data;
    vlSelf->iArbiter_bmb_decoder__DOT__io_input_rsp_payload_fragment_data 
        = vlSelf->_zz_io_output_rsp_payload_fragment_data;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_rsp_payload_fragment_data 
        = vlSelf->_zz_io_output_rsp_payload_fragment_data;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_rsp_payload_fragment_data 
        = vlSelf->_zz_io_output_rsp_payload_fragment_data;
    vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_payload_fragment_context 
        = vlSelf->_zz_io_output_rsp_payload_fragment_context;
    vlSelf->peripheralBridge_bmb_arbiter_io_inputs_0_rsp_payload_fragment_context 
        = vlSelf->_zz_io_output_rsp_payload_fragment_context;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_rsp_payload_fragment_context 
        = vlSelf->_zz_io_output_rsp_payload_fragment_context;
    vlSelf->peripheralBridge_logic_io_input_rsp_payload_last 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_last;
    vlSelf->peripheralBridge_logic__DOT__io_input_rsp_payload_last 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_last;
    vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_m2sPipe_payload_last 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_last;
    vlSelf->peripheralBridge_logic_io_input_rsp_payload_fragment_source 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_fragment_source;
    vlSelf->peripheralBridge_logic__DOT__io_input_rsp_payload_fragment_source 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_fragment_source;
    vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_m2sPipe_payload_fragment_source 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_fragment_source;
    vlSelf->peripheralBridge_logic_io_input_rsp_payload_fragment_opcode 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_fragment_opcode;
    vlSelf->peripheralBridge_logic__DOT__io_input_rsp_payload_fragment_opcode 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_fragment_opcode;
    vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_m2sPipe_payload_fragment_opcode 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_fragment_opcode;
    vlSelf->peripheralBridge_logic_io_input_rsp_payload_fragment_data 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_fragment_data;
    vlSelf->peripheralBridge_logic__DOT__io_input_rsp_payload_fragment_data 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_fragment_data;
    vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_m2sPipe_payload_fragment_data 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_fragment_data;
    vlSelf->peripheralBridge_logic_io_input_rsp_payload_fragment_context 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_fragment_context;
    vlSelf->peripheralBridge_logic__DOT__io_input_rsp_payload_fragment_context 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_fragment_context;
    vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_m2sPipe_payload_fragment_context 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_fragment_context;
    vlSelf->privilegedDebug_logic_dm_io_ndmreset = vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_ndmreset;
    vlSelf->privilegedDebug_logic_dm__DOT__io_ndmreset 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_ndmreset;
    vlSelf->plicWishboneBridge_logic_bridge_io_output_cmd_payload_last 
        = vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_cmd_payload_last;
    vlSelf->plic_logic_bmb_cmd_payload_last = vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_cmd_payload_last;
    vlSelf->plicWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_length 
        = vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_cmd_payload_fragment_length;
    vlSelf->plic_logic_bmb_cmd_payload_fragment_length 
        = vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_cmd_payload_fragment_length;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_bus_cmd_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rValid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_bus_cmd_payload_write 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_write;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_bus_cmd_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_bus_cmd_payload_address 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_address;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_bus_cmd_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rValid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_bus_cmd_payload_write 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_write;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_bus_cmd_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_bus_cmd_payload_address 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_address;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_bus_cmd_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rValid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_bus_cmd_payload_write 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_write;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_bus_cmd_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_bus_cmd_payload_address 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_address;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_cmd_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rValid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_cmd_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rValid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_cmd_ready 
        = vlSelf->privilegedDebug_logic_dm__DOT__io_ctrl_cmd_ready;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_cmd_payload_write 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_write;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_cmd_payload_write 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_write;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_cmd_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_cmd_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_cmd_payload_address 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_address;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_cmd_payload_address 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_address;
    vlSelf->privilegedDebug_logic_dm__DOT__io_ctrl_rsp_valid 
        = vlSelf->privilegedDebug_logic_dm__DOT__factory_rspBuffer_valid;
    vlSelf->privilegedDebug_logic_dm__DOT__io_ctrl_rsp_payload_error 
        = vlSelf->privilegedDebug_logic_dm__DOT__factory_rspBuffer_payload_error;
    vlSelf->privilegedDebug_logic_dm__DOT__io_ctrl_rsp_payload_data 
        = vlSelf->privilegedDebug_logic_dm__DOT__factory_rspBuffer_payload_data;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_args_regno 
        = (0xffffU & vlSelf->privilegedDebug_logic_dm__DOT__logic_command_data);
    vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_command_access_args_regno 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_command_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_updateData 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_store;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_isBypass 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_instruction;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_instruction_tdo 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_tdoShifter;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_captureData 
        = (0x7071U | ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiStat_value) 
                      << 0xaU));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__when_JtagTunnel_l30 
        = (1U & (~ ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_shiftBuffer) 
                    >> 0xdU)));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle_io_output_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_m2sPipe_valid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__io_output_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_m2sPipe_valid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle_io_output_payload_error 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_m2sPipe_payload_error;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__io_output_payload_error 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_m2sPipe_payload_error;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__outputArea_target 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_target_buffercc__DOT__buffers_1;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_target_buffercc_io_dataOut 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_target_buffercc__DOT__buffers_1;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_target_buffercc__DOT__io_dataOut 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_target_buffercc__DOT__buffers_1;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_ctrl_tdi 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_tdiBuffer;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_ctrl_tdi 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_tdiBuffer;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_captureData_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_rspLogic_buffer;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiRsp_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_m2sPipe_payload_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle_io_output_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_m2sPipe_payload_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__io_output_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_m2sPipe_payload_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_payload_write 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_data_write;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle_io_output_payload_write 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_data_write;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__io_output_payload_write 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_data_write;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__outputArea_flow_payload_write 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_data_write;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_data_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle_io_output_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_data_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__io_output_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_data_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__outputArea_flow_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_data_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_payload_address 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_data_address;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle_io_output_payload_address 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_data_address;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__io_output_payload_address 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_data_address;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__outputArea_flow_payload_address 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_data_address;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_payload_error 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_data_error;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_data_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__bufferCC_7_io_dataOut 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__bufferCC_7__DOT__buffers_1;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__bufferCC_7__DOT__io_dataOut 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__bufferCC_7__DOT__buffers_1;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_target 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target_buffercc__DOT__buffers_1;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target_buffercc_io_dataOut 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target_buffercc__DOT__buffers_1;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target_buffercc__DOT__io_dataOut 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target_buffercc__DOT__buffers_1;
    vlSelf->clint_logic__DOT__io_bus_rsp_payload_last 
        = vlSelf->clint_logic__DOT___zz_io_bus_rsp_payload_last;
    vlSelf->clint_logic__DOT__io_bus_rsp_payload_fragment_opcode 
        = vlSelf->clint_logic__DOT___zz_io_bus_rsp_payload_fragment_opcode;
    vlSelf->dBusCoherent_bmb_cmd_s2mPipe_valid = (1U 
                                                  & ((~ (IData)(vlSelf->dBusCoherent_bmb_cmd_rValidN)) 
                                                     | (IData)(vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rValid)));
    vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_valid = 
        (1U & ((~ (IData)(vlSelf->dBusNonCoherent_bmb_cmd_rValidN)) 
               | (IData)(vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rValid)));
    vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_abstractcs_cmdErr 
        = ((~ (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_data 
               >> 8U)) & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_cmdErr));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_valid 
        = ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target_buffercc__DOT__buffers_1) 
           != (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_hit));
    if (vlSelf->dBusCoherent_bmb_cmd_rValidN) {
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_last 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_last;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_opcode 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_opcode;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_address 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_address;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_length 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_length;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_data 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_data;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_mask 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_mask;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_context 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_context;
    } else {
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_last 
            = vlSelf->dBusCoherent_bmb_cmd_rData_last;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_opcode 
            = vlSelf->dBusCoherent_bmb_cmd_rData_fragment_opcode;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_address 
            = vlSelf->dBusCoherent_bmb_cmd_rData_fragment_address;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_length 
            = vlSelf->dBusCoherent_bmb_cmd_rData_fragment_length;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_data 
            = vlSelf->dBusCoherent_bmb_cmd_rData_fragment_data;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_mask 
            = vlSelf->dBusCoherent_bmb_cmd_rData_fragment_mask;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_context 
            = vlSelf->dBusCoherent_bmb_cmd_rData_fragment_context;
    }
    if (vlSelf->dBusNonCoherent_bmb_cmd_rValidN) {
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_last 
            = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_last;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_opcode 
            = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_opcode;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_address 
            = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_address;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_length 
            = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_length;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_data 
            = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_data;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_mask 
            = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_mask;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_context 
            = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_context;
    } else {
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_last 
            = vlSelf->dBusNonCoherent_bmb_cmd_rData_last;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_opcode 
            = vlSelf->dBusNonCoherent_bmb_cmd_rData_fragment_opcode;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_address 
            = vlSelf->dBusNonCoherent_bmb_cmd_rData_fragment_address;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_length 
            = vlSelf->dBusNonCoherent_bmb_cmd_rData_fragment_length;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_data 
            = vlSelf->dBusNonCoherent_bmb_cmd_rData_fragment_data;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_mask 
            = vlSelf->dBusNonCoherent_bmb_cmd_rData_fragment_mask;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_context 
            = vlSelf->dBusNonCoherent_bmb_cmd_rData_fragment_context;
    }
    vlSelf->privilegedDebug_systemReset = vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_ndmreset;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__logic_systemLogic_bus_rsp_ccToggle_tunnel_privilegedDebug_logic_withTap_tunnel_toplevel_debugCd_logic_outputReset_syncronized 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__bufferCC_7__DOT__buffers_1;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_cmd_payload_fragment_data 
        = vlSelf->peripheralBridge_bmb_arbiter_io_inputs_1_cmd_payload_fragment_data;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_cmd_payload_fragment_mask 
        = vlSelf->peripheralBridge_bmb_arbiter_io_inputs_1_cmd_payload_fragment_mask;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_cmd_ready 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rValidN;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__systemCd_logic_outputReset 
        = vlSelf->systemCd_logic_outputReset;
    vlSelf->clint_logic_io_bus_rsp_valid = vlSelf->clint_logic__DOT___zz_io_bus_rsp_valid_1;
    vlSelf->clint_logic_io_bus_rsp_payload_fragment_data 
        = vlSelf->clint_logic__DOT___zz_io_bus_rsp_payload_fragment_data;
    vlSelf->plic_logic_bmb_rsp_valid = vlSelf->_zz_plic_logic_bmb_rsp_valid_1;
    vlSelf->plic_logic_bmb_rsp_payload_fragment_data 
        = vlSelf->_zz_plic_logic_bmb_rsp_payload_fragment_data;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_payload_last 
        = vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_payload_last;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_payload_fragment_data 
        = vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_payload_fragment_data;
    vlSelf->cores_0_cpu_logic_cpu_dBus_rsp_payload_error 
        = vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_payload_fragment_opcode;
    vlSelf->cores_0_cpu_logic_cpu_timerInterrupt = vlSelf->clint_logic__DOT__logic_harts_0_timerInterrupt;
    vlSelf->cores_0_cpu_logic_cpu_softwareInterrupt 
        = vlSelf->clint_logic__DOT__logic_harts_0_softwareInterrupt;
    vlSelf->cores_0_cpu_debugRiscv_ackReset = vlSelf->privilegedDebug_logic_dm__DOT___zz_io_harts_0_ackReset;
    vlSelf->iArbiter_bmb_cmd_halfPipe_valid = vlSelf->iArbiter_bmb_cmd_rValid;
    vlSelf->iArbiter_bmb_cmd_halfPipe_payload_last 
        = vlSelf->iArbiter_bmb_cmd_rData_last;
    vlSelf->iArbiter_bmb_cmd_halfPipe_payload_fragment_opcode 
        = vlSelf->iArbiter_bmb_cmd_rData_fragment_opcode;
    vlSelf->iArbiter_bmb_cmd_halfPipe_payload_fragment_address 
        = vlSelf->iArbiter_bmb_cmd_rData_fragment_address;
    vlSelf->iArbiter_bmb_cmd_halfPipe_payload_fragment_length 
        = vlSelf->iArbiter_bmb_cmd_rData_fragment_length;
    vlSelf->debugCd_logic_inputResetAdapter_stuff_syncTrigger 
        = vlSelf->bufferCC_7__DOT__buffers_1;
    vlSelf->when_ClockDomainGenerator_l222 = (0xfffU 
                                              != (IData)(vlSelf->debugCd_logic_holdingLogic_resetCounter));
    vlSelf->when_ClockDomainGenerator_l222_1 = (0x3fU 
                                                != (IData)(vlSelf->systemCd_logic_holdingLogic_resetCounter));
    vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_valid 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rValid;
    vlSelf->_zz_when_Stream_l372 = vlSelf->_zz_when_Stream_l372_1;
    vlSelf->plic_logic_bmb_rsp_payload_last = vlSelf->_zz_plic_logic_bmb_rsp_payload_last;
    vlSelf->plic_logic_bmb_rsp_payload_fragment_opcode 
        = vlSelf->_zz_plic_logic_bmb_rsp_payload_fragment_opcode;
    vlSelf->peripheralBridge_bmb_arbiter_io_inputs_1_rsp_payload_last 
        = vlSelf->_zz_io_output_rsp_payload_last;
    vlSelf->peripheralBridge_bmb_arbiter_io_inputs_1_rsp_payload_fragment_opcode 
        = vlSelf->_zz_io_output_rsp_payload_fragment_opcode;
    vlSelf->peripheralBridge_bmb_arbiter_io_inputs_1_rsp_payload_fragment_data 
        = vlSelf->_zz_io_output_rsp_payload_fragment_data;
    vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_last 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rData_last;
    vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_source 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rData_fragment_source;
    vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_opcode 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rData_fragment_opcode;
    vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_address 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rData_fragment_address;
    vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_length 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rData_fragment_length;
    vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_data 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rData_fragment_data;
    vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_mask 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rData_fragment_mask;
    vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_context 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rData_fragment_context;
    vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rValid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_valid 
        = vlSelf->privilegedDebug_logic_dm__DOT__factory_rspBuffer_valid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_payload_error 
        = vlSelf->privilegedDebug_logic_dm__DOT__factory_rspBuffer_payload_error;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_payload_data 
        = vlSelf->privilegedDebug_logic_dm__DOT__factory_rspBuffer_payload_data;
    vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_last 
        = vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_cmd_payload_last;
    vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_length 
        = vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_cmd_payload_fragment_length;
    vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_mask 
        = vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_cmd_payload_fragment_mask;
    vlSelf->clint_logic__DOT__when_BusSlaveFactory_l1041_2 
        = (1U & ((IData)(vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_cmd_payload_fragment_mask) 
                 >> 1U));
    vlSelf->clint_logic__DOT__when_BusSlaveFactory_l1041_3 
        = (1U & ((IData)(vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_cmd_payload_fragment_mask) 
                 >> 2U));
    vlSelf->clint_logic__DOT__when_BusSlaveFactory_l1041_4 
        = (1U & ((IData)(vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_cmd_payload_fragment_mask) 
                 >> 3U));
    vlSelf->clint_logic_io_bus_rsp_payload_last = vlSelf->clint_logic__DOT___zz_io_bus_rsp_payload_last;
    vlSelf->clint_logic_io_bus_rsp_payload_fragment_opcode 
        = vlSelf->clint_logic__DOT___zz_io_bus_rsp_payload_fragment_opcode;
    vlSelf->peripheralBridge_logic__DOT__halt = (1U 
                                                 & (~ (IData)(vlSelf->peripheralBridge_logic__DOT__rsp_rValidN)));
    vlSelf->when_Stream_l372_6 = (1U & (~ (IData)(vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rValid)));
    vlSelf->systemCd_logic_inputResetAdapter_stuff_syncTrigger 
        = vlSelf->bufferCC_8__DOT__buffers_1;
    vlSelf->bufferCC_9_io_dataOut = vlSelf->bufferCC_9__DOT__buffers_1;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_m2sPipe_ready 
        = vlSelf->dBusCoherent_bmb_cmd_rValidN;
    vlSelf->when_Stream_l372_1 = (1U & (~ (IData)(vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rValid)));
    vlSelf->dBusCoherent_bmb_cmd_s2mPipe_m2sPipe_ready 
        = vlSelf->dBusNonCoherent_bmb_cmd_rValidN;
    vlSelf->when_Stream_l372_4 = (1U & (~ (IData)(vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rValid)));
    vlSelf->when_Stream_l372_8 = (1U & (~ (IData)(vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rValid)));
    vlSelf->peripheralBridge_logic__DOT__when_Stream_l372 
        = (1U & (~ (IData)(vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rValid)));
    vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_valid 
        = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__io_ctrl_cmd_ready) 
           & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rValid));
    vlSelf->privilegedDebug_logic_dm__DOT__when_BusSlaveFactory_l379_2 
        = (1U & (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_data 
                 >> 0x1cU));
    vlSelf->privilegedDebug_logic_dm__DOT__factory_askRead 
        = ((~ (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_write)) 
           & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rValid));
    vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_valid 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rValid;
    vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_payload_last 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_last;
    vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_payload_fragment_opcode 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_opcode;
    vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_payload_fragment_address 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_address;
    vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_payload_fragment_length 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_length;
    vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_payload_fragment_data 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_data;
    vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_payload_fragment_mask 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_mask;
    vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_payload_fragment_context 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_context;
    vlSelf->iArbiter_bmb_decoder_io_outputs_0_cmd_valid 
        = vlSelf->iArbiter_bmb_cmd_rValid;
    vlSelf->iArbiter_bmb_decoder_io_outputs_0_cmd_payload_last 
        = vlSelf->iArbiter_bmb_cmd_rData_last;
    vlSelf->iArbiter_bmb_decoder_io_outputs_0_cmd_payload_fragment_opcode 
        = vlSelf->iArbiter_bmb_cmd_rData_fragment_opcode;
    vlSelf->iArbiter_bmb_decoder_io_outputs_0_cmd_payload_fragment_address 
        = vlSelf->iArbiter_bmb_cmd_rData_fragment_address;
    vlSelf->iArbiter_bmb_decoder_io_outputs_0_cmd_payload_fragment_length 
        = vlSelf->iArbiter_bmb_cmd_rData_fragment_length;
    vlSelf->privilegedDebug_logic_dm_io_ctrl_cmd_ready 
        = vlSelf->privilegedDebug_logic_dm__DOT__io_ctrl_cmd_ready;
    vlSelf->privilegedDebug_logic_dm_io_ctrl_rsp_valid 
        = vlSelf->privilegedDebug_logic_dm__DOT__factory_rspBuffer_valid;
    vlSelf->privilegedDebug_logic_dm_io_ctrl_rsp_payload_error 
        = vlSelf->privilegedDebug_logic_dm__DOT__factory_rspBuffer_payload_error;
    vlSelf->privilegedDebug_logic_dm_io_ctrl_rsp_payload_data 
        = vlSelf->privilegedDebug_logic_dm__DOT__factory_rspBuffer_payload_data;
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
    vlSelf->clint_logic__DOT__when_BusSlaveFactory_l1041 
        = (1U & (IData)(vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_cmd_payload_fragment_mask));
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_valid 
        = vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_valid_1;
    vlSelf->when_DataCache_l535 = vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_payload_fragment_context;
    vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_valid 
        = ((~ (IData)(vlSelf->_zz_io_output_rsp_payload_fragment_source)) 
           & (IData)(vlSelf->_zz_when_Stream_l372_1));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_tdoIr 
        = (1U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_instructionShift));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_isBypass 
        = (0x3fU == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_instruction));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_cmd_ready 
        = vlSelf->privilegedDebug_logic_dm__DOT__io_ctrl_cmd_ready;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__when_Stream_l372 
        = (1U & (~ (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rValid)));
    vlSelf->cores_0_cpu_logic_cpu_debugBus_hartToDm_payload_address 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_hartToDm_payload_address;
    vlSelf->debugPort_tdo = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_tdoUnbufferd_regNext;
    vlSelf->cores_0_cpu_debugRiscv_dmToHart_payload_address 
        = vlSelf->toplevel_privilegedDebug_logic_dm_io_harts_0_dmToHart_regNext_payload_address;
    vlSelf->cores_0_cpu_debugRiscv_dmToHart_payload_data 
        = vlSelf->toplevel_privilegedDebug_logic_dm_io_harts_0_dmToHart_regNext_payload_data;
    vlSelf->cores_0_cpu_debugRiscv_dmToHart_payload_size 
        = vlSelf->toplevel_privilegedDebug_logic_dm_io_harts_0_dmToHart_regNext_payload_size;
    vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_ready 
        = (1U & (~ (IData)(vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rValid)));
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_ready 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rValidN;
    vlSelf->cores_0_cpu_iBus_cmd_ready = (1U & (~ (IData)(vlSelf->cores_0_cpu_iBus_cmd_rValid)));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__when_DebugTransportModuleJtag_l30 
        = (0U == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiStat_value));
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.systemCd_logic_outputReset 
        = vlSelf->systemCd_logic_outputReset;
    vlSelf->cores_0_cpu_logic_cpu_stoptime = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.stoptime;
    vlSelf->iArbiter_bmb_cmd_ready = (1U & (~ (IData)(vlSelf->iArbiter_bmb_cmd_rValid)));
    vlSelf->iArbiter_bmb_decoder_io_input_rsp_valid 
        = ((IData)(vlSelf->_zz_io_output_rsp_payload_fragment_source) 
           & (IData)(vlSelf->_zz_when_Stream_l372_1));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__idcodeArea_ctrl_enable 
        = (1U == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_instruction));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__idcodeArea_ctrl_tdo 
        = (1U & vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__idcodeArea_shifter);
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_tdo 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_tdoShifter;
    vlSelf->when_Stream_l372_9 = (1U & (~ (IData)(vlSelf->_zz_when_Stream_l372_1)));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_valid 
        = ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_target_buffercc__DOT__buffers_1) 
           != (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__outputArea_hit));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__debugCd_logic_outputReset 
        = vlSelf->debugCd_logic_outputReset;
    vlSelf->cores_0_cpu_debugRiscv_haltReq = vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_harts_0_haltReq;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_progbufX_mem_spinal_port1 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_progbufX_mem
        [vlSelf->privilegedDebug_logic_dm__DOT__logic_command_executionCounter];
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_shift 
        = (0xbU == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state));
    vlSelf->privilegedDebug_logic_dm__DOT__when_BusSlaveFactory_l379_1 
        = (1U & (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_data 
                 >> 0x1eU));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiRsp_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_m2sPipe_valid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiRsp_payload_error 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_m2sPipe_payload_error;
    vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_data;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSelHiNew 
        = (0x3ffU & (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_data 
                     >> 6U));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSelLoNew 
        = (0x3ffU & (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_data 
                     >> 0x10U));
    vlSelf->privilegedDebug_logic_dm__DOT__switch_DebugModule_l287 
        = (vlSelf->privilegedDebug_logic_dm__DOT__logic_command_data 
           >> 0x18U);
    vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_args_postExec 
        = (1U & (vlSelf->privilegedDebug_logic_dm__DOT__logic_command_data 
                 >> 0x12U));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_args_write 
        = (1U & (vlSelf->privilegedDebug_logic_dm__DOT__logic_command_data 
                 >> 0x10U));
    vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_toHarts_payload_data_1 
        = (0xf8000U & (vlSelf->privilegedDebug_logic_dm__DOT__logic_command_data 
                       << 0xfU));
    vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_toHarts_payload_data_3 
        = (0xf80U & (vlSelf->privilegedDebug_logic_dm__DOT__logic_command_data 
                     << 7U));
    __Vtableidx5 = vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_command_wantStart 
        = Vsonata__ConstPool__TABLE_ha8c1a675_0[__Vtableidx5];
    vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_write 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_write;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_rspSel 
        = vlSelf->_zz_io_output_rsp_payload_fragment_source;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_args_aarpostincrement 
        = (1U & (vlSelf->privilegedDebug_logic_dm__DOT__logic_command_data 
                 >> 0x13U));
    vlSelf->privilegedDebug_logic_dm__DOT__when_BusSlaveFactory_l379 
        = (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_data 
           >> 0x1fU);
    vlSelf->cores_0_cpu_logic_cpu_debugBus_regSuccess 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_regSuccess;
    vlSelf->when_Stream_l372_7 = (1U & (~ (IData)(vlSelf->_zz_dBusNonCoherent_bmb_rsp_valid_1)));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_noError 
        = (0U == (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_cmdErr));
    vlSelf->privilegedDebug_logic_dm__DOT___zz_factory_cmdToRsp_payload_data 
        = vlSelf->privilegedDebug_logic_dm__DOT___zz_factory_cmdToRsp_payload_data_1;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_updateData_op 
        = (3U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_store));
    vlSelf->cores_0_cpu_debugRiscv_dmToHart_valid = vlSelf->toplevel_privilegedDebug_logic_dm_io_harts_0_dmToHart_regNext_valid;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_args_aarsize 
        = (7U & (vlSelf->privilegedDebug_logic_dm__DOT__logic_command_data 
                 >> 0x14U));
    vlSelf->when_Stream_l372_5 = (1U & (~ (IData)(vlSelf->_zz_iArbiter_bmb_rsp_valid_1)));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_capture 
        = (0xaU == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state));
    vlSelf->peripheral_BTE = vlSelf->peripheralBridge_logic__DOT__io_output_BTE;
    vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_progbufX_mem_port 
        = (1U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_address));
    vlSelf->clint_logic__DOT___zz_factory_rsp_ready 
        = (1U & (~ ((IData)(vlSelf->clint_logic__DOT__factory_readHaltTrigger) 
                    | (IData)(vlSelf->clint_logic__DOT__factory_writeHaltTrigger))));
    vlSelf->when_BusSlaveFactory_l1041_39 = (1U & ((IData)(vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_cmd_payload_fragment_mask) 
                                                   >> 1U));
    vlSelf->when_BusSlaveFactory_l1041_47 = (1U & ((IData)(vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_cmd_payload_fragment_mask) 
                                                   >> 2U));
    vlSelf->when_BusSlaveFactory_l1041_55 = (1U & ((IData)(vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_cmd_payload_fragment_mask) 
                                                   >> 3U));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_args_transfer 
        = (1U & (vlSelf->privilegedDebug_logic_dm__DOT__logic_command_data 
                 >> 0x11U));
    vlSelf->clint_logic__DOT__when_Stream_l372 = (1U 
                                                  & (~ (IData)(vlSelf->clint_logic__DOT___zz_io_bus_rsp_valid_1)));
    vlSelf->cores_0_cpu_debugRiscv_dmToHart_payload_op 
        = vlSelf->toplevel_privilegedDebug_logic_dm_io_harts_0_dmToHart_regNext_payload_op;
    vlSelf->clintWishboneBridge_logic_bridge_io_output_rsp_ready 
        = vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_rsp_ready;
    vlSelf->clintWishbone_DAT_MISO = vlSelf->clint_logic__DOT___zz_io_bus_rsp_payload_fragment_data;
    vlSelf->plicWishbone_DAT_MISO = vlSelf->_zz_plic_logic_bmb_rsp_payload_fragment_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_reset 
        = (0U == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state));
    vlSelf->when_Stream_l372_3 = (1U & (~ (IData)(vlSelf->_zz_cores_0_cpu_iBus_rsp_valid_1)));
    vlSelf->cores_0_cpu_iBus_rsp_payload_fragment_data 
        = vlSelf->_zz_cores_0_cpu_iBus_rsp_payload_fragment_data;
    vlSelf->when_Stream_l372_2 = (1U & (~ (IData)(vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_valid_1)));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_transferFloat 
        = (1U & (vlSelf->privilegedDebug_logic_dm__DOT__logic_command_data 
                 >> 5U));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_ctrl_enable 
        = (0x10U == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_instruction));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_ctrl_enable 
        = (0x11U == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_instruction));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_resumeReady 
        = ((~ (IData)(vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_harts_0_resumeReady)) 
           & (IData)(vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_harts_0_resumeReady_1));
    vlSelf->plic_logic_bmb_rsp_ready = vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_rsp_ready;
    vlSelf->when_Stream_l372 = (1U & (~ (IData)(vlSelf->_zz_plic_logic_bmb_rsp_valid_1)));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_update 
        = (0xfU == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state));
    vlSelf->when_PlicMapper_l122 = vlSelf->plic_logic_bridge_coherencyStall_value;
    vlSelf->cores_0_cpu_logic_cpu_iBus_rsp_payload_error 
        = vlSelf->_zz_cores_0_cpu_iBus_rsp_payload_fragment_opcode;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_62;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_2 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_63;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_4 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_64;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_6 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_65;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_8 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_66;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_10 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_67;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_12 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_68;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_14 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_69;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_16 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_70;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_18 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_71;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_20 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_72;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_22 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_73;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_24 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_74;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_26 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_75;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_28 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_76;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_30 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_77;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_32 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_78;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_34 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_79;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_36 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_80;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_38 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_81;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_40 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_82;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_42 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_83;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_44 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_84;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_46 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_85;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_48 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_86;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_50 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_87;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_52 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_88;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_54 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_89;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_56 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_90;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_58 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_91;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_60 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_92;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_threshold 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_threshold;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_threshold 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_threshold;
    vlSelf->when_BusSlaveFactory_l1041 = (1U & (IData)(vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_cmd_payload_fragment_mask));
    vlSelf->peripheralBridge_logic__DOT__beatCount 
        = (0xfU & ((IData)(vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_length) 
                   >> 2U));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_iep 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_threshold) 
           < (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_iep 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_threshold) 
           < (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_enable 
        = (0x23U == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_instruction));
    vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_address;
    vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l205 
        = ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rValid) 
           & ((4U <= (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_address)) 
              & (5U > (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_address))));
    vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_rsp_fire 
        = ((IData)(vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_rsp_ready) 
           & (IData)(vlSelf->clint_logic__DOT___zz_io_bus_rsp_valid_1));
    vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_rsp_fire 
        = ((IData)(vlSelf->_zz_plic_logic_bmb_rsp_valid_1) 
           & (IData)(vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_rsp_ready));
    vlSelf->privilegedDebug_logic_dm__DOT__factory_askWrite 
        = ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_write) 
           & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rValid));
    vlSelf->clint_logic_io_time = vlSelf->clint_logic__DOT__logic_time;
    vlSelf->cores_0_cpu_iBus_rsp_valid = vlSelf->_zz_cores_0_cpu_iBus_rsp_valid_1;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz___05Fzz_maskProposal_0_2_2 
        = (((IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__maskLocked_0) 
            << 1U) | (IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__maskLocked_1));
    vlSelf->peripheral_DAT_MOSI = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_data;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSel 
        = (((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSelHi) 
            << 0xaU) | (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSelLo));
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz_maskProposal_0 
        = (((IData)(vlSelf->iArbiter_bmb_cmd_rValid) 
            << 1U) | (IData)(vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rValid));
    vlSelf->peripheral_SEL = ((IData)(vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_opcode)
                               ? (IData)(vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_mask)
                               : 0xfU);
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_3_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_2) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_5));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_2_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_1) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_3));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_5_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_4) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_9));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_4_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_3) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_7));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_7_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_6) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_13));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_6_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_5) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_11));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_9_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_8) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_17));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_8_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_7) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_15));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_11_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_10) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_21));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_10_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_9) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_19));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_13_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_12) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_25));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_12_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_11) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_23));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_15_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_14) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_29));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_14_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_13) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_27));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_17_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_16) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_33));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_16_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_15) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_31));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_19_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_18) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_37));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_18_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_17) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_35));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_21_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_20) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_41));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_20_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_19) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_39));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_23_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_22) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_45));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_22_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_21) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_43));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_25_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_24) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_49));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_24_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_23) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_47));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_27_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_26) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_53));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_26_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_25) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_51));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_29_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_28) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_57));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_28_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_27) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_55));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_31_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_30) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_61));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_30_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_29) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_59));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_3_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_2) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_5));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_2_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_1) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_3));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_5_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_4) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_9));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_4_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_3) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_7));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_7_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_6) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_13));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_6_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_5) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_11));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_9_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_8) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_17));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_8_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_7) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_15));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_11_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_10) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_21));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_10_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_9) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_19));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_13_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_12) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_25));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_12_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_11) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_23));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_15_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_14) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_29));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_14_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_13) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_27));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_17_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_16) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_33));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_16_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_15) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_31));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_19_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_18) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_37));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_18_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_17) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_35));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_21_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_20) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_41));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_20_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_19) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_39));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_23_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_22) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_45));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_22_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_21) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_43));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_25_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_24) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_49));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_24_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_23) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_47));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_27_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_26) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_53));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_26_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_25) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_51));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_29_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_28) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_57));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_28_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_27) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_55));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_31_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_30) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_61));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_30_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_29) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_59));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_1_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_0) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_1));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_1_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_0) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_1));
    vlSelf->peripheral_WE = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_opcode;
    __VdfgRegularize_h09b8325e_1_0 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_64) 
                                      <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_63));
    __VdfgRegularize_h09b8325e_1_1 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_66) 
                                      <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_65));
    __VdfgRegularize_h09b8325e_1_2 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_68) 
                                      <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_67));
    __VdfgRegularize_h09b8325e_1_3 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_70) 
                                      <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_69));
    __VdfgRegularize_h09b8325e_1_4 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_72) 
                                      <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_71));
    __VdfgRegularize_h09b8325e_1_5 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_74) 
                                      <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_73));
    __VdfgRegularize_h09b8325e_1_6 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_76) 
                                      <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_75));
    __VdfgRegularize_h09b8325e_1_7 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_78) 
                                      <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_77));
    __VdfgRegularize_h09b8325e_1_8 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_80) 
                                      <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_79));
    __VdfgRegularize_h09b8325e_1_9 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_82) 
                                      <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_81));
    __VdfgRegularize_h09b8325e_1_10 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_84) 
                                       <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_83));
    __VdfgRegularize_h09b8325e_1_11 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_86) 
                                       <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_85));
    __VdfgRegularize_h09b8325e_1_12 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_88) 
                                       <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_87));
    __VdfgRegularize_h09b8325e_1_13 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_90) 
                                       <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_89));
    __VdfgRegularize_h09b8325e_1_14 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_92) 
                                       <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_91));
    vlSelf->peripheral_CYC = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rValid;
    vlSelf->peripheral_STB = ((IData)(vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rValid) 
                              & (IData)(vlSelf->peripheralBridge_logic__DOT__rsp_rValidN));
    vlSelf->peripheralBridge_logic__DOT___zz_io_output_ADR_2 
        = (0x3fU & ((IData)(vlSelf->peripheralBridge_logic__DOT__beatCounter) 
                    << 2U));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__idcodeArea_ctrl_tdi 
        = vlSelf->debugPort_tdi;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_jtag_tdi 
        = vlSelf->debugPort_tdi;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_jtag_tck 
        = vlSelf->debugPort_tck;
    vlSelf->bufferCC_7__DOT__debugCd_external_clk = vlSelf->debugCd_external_clk;
    vlSelf->bufferCC_8__DOT__debugCd_external_clk = vlSelf->debugCd_external_clk;
    vlSelf->privilegedDebug_logic_dm__DOT__debugCd_external_clk 
        = vlSelf->debugCd_external_clk;
    vlSelf->clint_logic__DOT__debugCd_external_clk 
        = vlSelf->debugCd_external_clk;
    vlSelf->bufferCC_9__DOT__debugCd_external_clk = vlSelf->debugCd_external_clk;
    vlSelf->clintWishboneBridge_logic_bridge__DOT__debugCd_external_clk 
        = vlSelf->debugCd_external_clk;
    vlSelf->plicWishboneBridge_logic_bridge__DOT__debugCd_external_clk 
        = vlSelf->debugCd_external_clk;
    vlSelf->peripheralBridge_logic__DOT__debugCd_external_clk 
        = vlSelf->debugCd_external_clk;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__debugCd_external_clk 
        = vlSelf->debugCd_external_clk;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__debugCd_external_clk 
        = vlSelf->debugCd_external_clk;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugCd_external_clk 
        = vlSelf->debugCd_external_clk;
    if (vlSelf->debugPort_tms) {
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_jtag_tms = 1U;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext = 0U;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_2 = 0U;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_5 = 8U;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_6 = 7U;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_7 = 8U;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_9 = 2U;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_12 = 0xfU;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_13 = 0xeU;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_14 = 0xfU;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_3 = 5U;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_10 = 0xcU;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_1 = 9U;
    } else {
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_jtag_tms = 0U;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext = 1U;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_2 = 3U;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_5 = 6U;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_6 = 6U;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_7 = 4U;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_9 = 0xaU;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_12 = 0xdU;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_13 = 0xdU;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_14 = 0xbU;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_3 = 4U;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_10 = 0xbU;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_1 = 1U;
    }
    vlSelf->bufferCC_7__DOT__debugCd_external_reset 
        = vlSelf->debugCd_external_reset;
    vlSelf->peripheralBridge_logic__DOT__io_output_ERR 
        = vlSelf->peripheral_ERR;
    vlSelf->_zz_when_PlicGateway_l21 = (1U & (vlSelf->interrupts 
                                              >> 1U));
    vlSelf->_zz_when_PlicGateway_l21_2 = (1U & (vlSelf->interrupts 
                                                >> 2U));
    vlSelf->_zz_when_PlicGateway_l21_4 = (1U & (vlSelf->interrupts 
                                                >> 3U));
    vlSelf->_zz_when_PlicGateway_l21_6 = (1U & (vlSelf->interrupts 
                                                >> 4U));
    vlSelf->_zz_when_PlicGateway_l21_8 = (1U & (vlSelf->interrupts 
                                                >> 5U));
    vlSelf->_zz_when_PlicGateway_l21_10 = (1U & (vlSelf->interrupts 
                                                 >> 6U));
    vlSelf->_zz_when_PlicGateway_l21_12 = (1U & (vlSelf->interrupts 
                                                 >> 7U));
    vlSelf->_zz_when_PlicGateway_l21_14 = (1U & (vlSelf->interrupts 
                                                 >> 8U));
    vlSelf->_zz_when_PlicGateway_l21_16 = (1U & (vlSelf->interrupts 
                                                 >> 9U));
    vlSelf->_zz_when_PlicGateway_l21_18 = (1U & (vlSelf->interrupts 
                                                 >> 0xaU));
    vlSelf->_zz_when_PlicGateway_l21_20 = (1U & (vlSelf->interrupts 
                                                 >> 0xbU));
    vlSelf->_zz_when_PlicGateway_l21_22 = (1U & (vlSelf->interrupts 
                                                 >> 0xcU));
    vlSelf->_zz_when_PlicGateway_l21_24 = (1U & (vlSelf->interrupts 
                                                 >> 0xdU));
    vlSelf->_zz_when_PlicGateway_l21_26 = (1U & (vlSelf->interrupts 
                                                 >> 0xeU));
    vlSelf->_zz_when_PlicGateway_l21_28 = (1U & (vlSelf->interrupts 
                                                 >> 0xfU));
    vlSelf->_zz_when_PlicGateway_l21_30 = (1U & (vlSelf->interrupts 
                                                 >> 0x10U));
    vlSelf->_zz_when_PlicGateway_l21_32 = (1U & (vlSelf->interrupts 
                                                 >> 0x11U));
    vlSelf->_zz_when_PlicGateway_l21_34 = (1U & (vlSelf->interrupts 
                                                 >> 0x12U));
    vlSelf->_zz_when_PlicGateway_l21_36 = (1U & (vlSelf->interrupts 
                                                 >> 0x13U));
    vlSelf->_zz_when_PlicGateway_l21_38 = (1U & (vlSelf->interrupts 
                                                 >> 0x14U));
    vlSelf->_zz_when_PlicGateway_l21_40 = (1U & (vlSelf->interrupts 
                                                 >> 0x15U));
    vlSelf->_zz_when_PlicGateway_l21_42 = (1U & (vlSelf->interrupts 
                                                 >> 0x16U));
    vlSelf->_zz_when_PlicGateway_l21_44 = (1U & (vlSelf->interrupts 
                                                 >> 0x17U));
    vlSelf->_zz_when_PlicGateway_l21_46 = (1U & (vlSelf->interrupts 
                                                 >> 0x18U));
    vlSelf->_zz_when_PlicGateway_l21_48 = (1U & (vlSelf->interrupts 
                                                 >> 0x19U));
    vlSelf->_zz_when_PlicGateway_l21_50 = (1U & (vlSelf->interrupts 
                                                 >> 0x1aU));
    vlSelf->_zz_when_PlicGateway_l21_52 = (1U & (vlSelf->interrupts 
                                                 >> 0x1bU));
    vlSelf->_zz_when_PlicGateway_l21_54 = (1U & (vlSelf->interrupts 
                                                 >> 0x1cU));
    vlSelf->_zz_when_PlicGateway_l21_56 = (1U & (vlSelf->interrupts 
                                                 >> 0x1dU));
    vlSelf->_zz_when_PlicGateway_l21_58 = (1U & (vlSelf->interrupts 
                                                 >> 0x1eU));
    vlSelf->_zz_when_PlicGateway_l21_60 = (vlSelf->interrupts 
                                           >> 0x1fU);
    vlSelf->bufferCC_9__DOT__privilegedDebug_systemReset 
        = vlSelf->privilegedDebug_systemReset;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target_buffercc__DOT__logic_systemLogic_bus_rsp_ccToggle_tunnel_privilegedDebug_logic_withTap_tunnel_toplevel_debugCd_logic_outputReset_syncronized 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__logic_systemLogic_bus_rsp_ccToggle_tunnel_privilegedDebug_logic_withTap_tunnel_toplevel_debugCd_logic_outputReset_syncronized;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_1_payload_fragment_data 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_cmd_payload_fragment_data;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_1_payload_fragment_mask 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_cmd_payload_fragment_mask;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_output_ready 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_cmd_ready;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__systemCd_logic_outputReset 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__systemCd_logic_outputReset;
    vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_rsp_valid 
        = vlSelf->clint_logic_io_bus_rsp_valid;
    vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_rsp_payload_fragment_data 
        = vlSelf->clint_logic_io_bus_rsp_payload_fragment_data;
    vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_rsp_valid 
        = vlSelf->plic_logic_bmb_rsp_valid;
    vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_rsp_payload_fragment_data 
        = vlSelf->plic_logic_bmb_rsp_payload_fragment_data;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.dBus_rsp_payload_last 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_payload_last;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.dBus_rsp_payload_data 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_payload_fragment_data;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.dBus_rsp_payload_error 
        = vlSelf->cores_0_cpu_logic_cpu_dBus_rsp_payload_error;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.timerInterrupt 
        = vlSelf->cores_0_cpu_logic_cpu_timerInterrupt;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.softwareInterrupt 
        = vlSelf->cores_0_cpu_logic_cpu_softwareInterrupt;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_ackReset 
        = vlSelf->cores_0_cpu_debugRiscv_ackReset;
    vlSelf->iArbiter_bmb_decoder__DOT__io_input_cmd_valid 
        = vlSelf->iArbiter_bmb_cmd_halfPipe_valid;
    vlSelf->iArbiter_bmb_decoder__DOT__io_input_cmd_payload_last 
        = vlSelf->iArbiter_bmb_cmd_halfPipe_payload_last;
    vlSelf->iArbiter_bmb_decoder__DOT__io_input_cmd_payload_fragment_opcode 
        = vlSelf->iArbiter_bmb_cmd_halfPipe_payload_fragment_opcode;
    vlSelf->iArbiter_bmb_decoder__DOT__io_input_cmd_payload_fragment_address 
        = vlSelf->iArbiter_bmb_cmd_halfPipe_payload_fragment_address;
    vlSelf->iArbiter_bmb_decoder__DOT__io_input_cmd_payload_fragment_length 
        = vlSelf->iArbiter_bmb_cmd_halfPipe_payload_fragment_length;
    vlSelf->debugCd_logic_inputResetTrigger = 0U;
    if (vlSelf->debugCd_logic_inputResetAdapter_stuff_syncTrigger) {
        vlSelf->debugCd_logic_inputResetTrigger = 1U;
    }
    vlSelf->debugCd_logic_outputResetUnbuffered = 0U;
    if (vlSelf->when_ClockDomainGenerator_l222) {
        vlSelf->debugCd_logic_outputResetUnbuffered = 1U;
    }
    vlSelf->systemCd_logic_outputResetUnbuffered = 0U;
    if (vlSelf->when_ClockDomainGenerator_l222_1) {
        vlSelf->systemCd_logic_outputResetUnbuffered = 1U;
    }
    vlSelf->peripheralBridge_logic__DOT__io_input_cmd_valid 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_valid;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_rsp_valid 
        = vlSelf->_zz_when_Stream_l372;
    vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_rsp_payload_last 
        = vlSelf->plic_logic_bmb_rsp_payload_last;
    vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_rsp_payload_fragment_opcode 
        = vlSelf->plic_logic_bmb_rsp_payload_fragment_opcode;
    vlSelf->iArbiter_bmb_decoder__DOT__io_outputs_0_rsp_payload_last 
        = vlSelf->peripheralBridge_bmb_arbiter_io_inputs_1_rsp_payload_last;
    vlSelf->iArbiter_bmb_decoder__DOT__io_outputs_0_rsp_payload_fragment_opcode 
        = vlSelf->peripheralBridge_bmb_arbiter_io_inputs_1_rsp_payload_fragment_opcode;
    vlSelf->iArbiter_bmb_decoder__DOT__io_outputs_0_rsp_payload_fragment_data 
        = vlSelf->peripheralBridge_bmb_arbiter_io_inputs_1_rsp_payload_fragment_data;
    vlSelf->peripheralBridge_logic__DOT__io_input_cmd_payload_last 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_last;
    vlSelf->peripheralBridge_logic__DOT__io_input_cmd_payload_fragment_source 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_source;
    vlSelf->peripheralBridge_logic__DOT__io_input_cmd_payload_fragment_opcode 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_opcode;
    vlSelf->peripheralBridge_logic__DOT__io_input_cmd_payload_fragment_address 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_address;
    vlSelf->peripheralBridge_logic__DOT__io_input_cmd_payload_fragment_length 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_length;
    vlSelf->peripheralBridge_logic__DOT__io_input_cmd_payload_fragment_data 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_data;
    vlSelf->peripheralBridge_logic__DOT__io_input_cmd_payload_fragment_mask 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_mask;
    vlSelf->peripheralBridge_logic__DOT__io_input_cmd_payload_fragment_context 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_context;
    vlSelf->privilegedDebug_logic_dm__DOT__io_ctrl_cmd_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_valid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__io_input_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_valid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__io_input_payload_error 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_payload_error;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__io_input_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_payload_data;
    vlSelf->clint_logic__DOT__io_bus_cmd_payload_last 
        = vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_last;
    vlSelf->clint_logic__DOT__io_bus_cmd_payload_fragment_length 
        = vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_length;
    vlSelf->clint_logic__DOT__io_bus_cmd_payload_fragment_mask 
        = vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_mask;
    vlSelf->clint_logic__DOT__when_BusSlaveFactory_l1041_6 
        = vlSelf->clint_logic__DOT__when_BusSlaveFactory_l1041_2;
    vlSelf->clint_logic__DOT__when_BusSlaveFactory_l1041_7 
        = vlSelf->clint_logic__DOT__when_BusSlaveFactory_l1041_3;
    vlSelf->clint_logic__DOT__when_BusSlaveFactory_l1041_8 
        = vlSelf->clint_logic__DOT__when_BusSlaveFactory_l1041_4;
    vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_rsp_payload_last 
        = vlSelf->clint_logic_io_bus_rsp_payload_last;
    vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_rsp_payload_fragment_opcode 
        = vlSelf->clint_logic_io_bus_rsp_payload_fragment_opcode;
    vlSelf->systemCd_logic_inputResetTrigger = 0U;
    if (vlSelf->systemCd_logic_inputResetAdapter_stuff_syncTrigger) {
        vlSelf->systemCd_logic_inputResetTrigger = 1U;
    }
    if (vlSelf->bufferCC_9_io_dataOut) {
        vlSelf->systemCd_logic_inputResetTrigger = 1U;
    }
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_ready 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_m2sPipe_ready;
    if (vlSelf->when_Stream_l372_1) {
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_ready = 1U;
    }
    vlSelf->dBusCoherent_bmb_cmd_s2mPipe_ready = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_m2sPipe_ready;
    if (vlSelf->when_Stream_l372_4) {
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_ready = 1U;
    }
    vlSelf->privilegedDebug_logic_dm__DOT__io_ctrl_cmd_fire 
        = vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_valid;
    vlSelf->privilegedDebug_logic_dm__DOT__factory_doRead 
        = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__factory_askRead) 
           & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__io_ctrl_cmd_ready));
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_valid 
        = vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_valid;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_payload_last 
        = vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_payload_last;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_payload_fragment_opcode 
        = vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_payload_fragment_opcode;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_payload_fragment_address 
        = vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_payload_fragment_address;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_payload_fragment_length 
        = vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_payload_fragment_length;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_payload_fragment_data 
        = vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_payload_fragment_data;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_payload_fragment_mask 
        = vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_payload_fragment_mask;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_payload_fragment_context 
        = vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_payload_fragment_context;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_cmd_valid 
        = vlSelf->iArbiter_bmb_decoder_io_outputs_0_cmd_valid;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_cmd_payload_last 
        = vlSelf->iArbiter_bmb_decoder_io_outputs_0_cmd_payload_last;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_cmd_payload_fragment_opcode 
        = vlSelf->iArbiter_bmb_decoder_io_outputs_0_cmd_payload_fragment_opcode;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_cmd_payload_fragment_address 
        = vlSelf->iArbiter_bmb_decoder_io_outputs_0_cmd_payload_fragment_address;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_cmd_payload_fragment_length 
        = vlSelf->iArbiter_bmb_decoder_io_outputs_0_cmd_payload_fragment_length;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_bus_cmd_ready 
        = vlSelf->privilegedDebug_logic_dm_io_ctrl_cmd_ready;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_bus_rsp_valid 
        = vlSelf->privilegedDebug_logic_dm_io_ctrl_rsp_valid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_bus_rsp_payload_error 
        = vlSelf->privilegedDebug_logic_dm_io_ctrl_rsp_payload_error;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_bus_rsp_payload_data 
        = vlSelf->privilegedDebug_logic_dm_io_ctrl_rsp_payload_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__io_input_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_payload_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_updateData_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_payload_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__io_input_payload_address 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_payload_address;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_updateData_address 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_payload_address;
    vlSelf->clint_logic__DOT__when_BusSlaveFactory_l1041_1 
        = vlSelf->clint_logic__DOT__when_BusSlaveFactory_l1041;
    vlSelf->clint_logic__DOT__when_BusSlaveFactory_l1041_5 
        = vlSelf->clint_logic__DOT__when_BusSlaveFactory_l1041;
    vlSelf->cores_0_cpu_logic_cpu_dBus_rsp_valid = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_valid;
    if (vlSelf->when_DataCache_l535) {
        vlSelf->cores_0_cpu_logic_cpu_dBus_rsp_valid = 0U;
    }
    vlSelf->peripheralBridge_bmb_arbiter_io_inputs_0_rsp_valid 
        = vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_valid;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_rsp_valid 
        = vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_valid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_ready 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_cmd_ready;
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__when_Stream_l372) {
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_ready = 1U;
    }
    vlSelf->privilegedDebug_logic_dm__DOT__logic_fromHarts_payload_address 
        = vlSelf->cores_0_cpu_logic_cpu_debugBus_hartToDm_payload_address;
    vlSelf->cores_0_cpu_debugRiscv_hartToDm_payload_address 
        = vlSelf->cores_0_cpu_logic_cpu_debugBus_hartToDm_payload_address;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_dmToHart_payload_address 
        = vlSelf->cores_0_cpu_debugRiscv_dmToHart_payload_address;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_dmToHart_payload_data 
        = vlSelf->cores_0_cpu_debugRiscv_dmToHart_payload_data;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_dmToHart_payload_size 
        = vlSelf->cores_0_cpu_debugRiscv_dmToHart_payload_size;
    vlSelf->peripheralBridge_logic_io_input_cmd_ready 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_ready;
    vlSelf->peripheralBridge_logic__DOT__io_input_cmd_ready 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_ready;
    vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_ready 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_ready;
    if (vlSelf->when_Stream_l372_8) {
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_ready = 1U;
    }
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.dBus_cmd_ready 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_ready;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.iBus_cmd_ready 
        = vlSelf->cores_0_cpu_iBus_cmd_ready;
    vlSelf->privilegedDebug_logic_clintStop = vlSelf->cores_0_cpu_logic_cpu_stoptime;
    vlSelf->cores_0_cpu_iBus_cmd_halfPipe_ready = vlSelf->iArbiter_bmb_cmd_ready;
    vlSelf->cores_0_cpu_iBus_connector_decoder_cmd_ready 
        = vlSelf->iArbiter_bmb_cmd_ready;
    vlSelf->iArbiter_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_ready 
        = vlSelf->iArbiter_bmb_cmd_ready;
    vlSelf->cores_0_cpu_iBus_cmd_halfPipe_fire = ((IData)(vlSelf->iArbiter_bmb_cmd_ready) 
                                                  & (IData)(vlSelf->cores_0_cpu_iBus_cmd_rValid));
    vlSelf->iArbiter_bmb_decoder__DOT__io_input_rsp_valid 
        = vlSelf->iArbiter_bmb_decoder_io_input_rsp_valid;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_rsp_valid 
        = vlSelf->iArbiter_bmb_decoder_io_input_rsp_valid;
    vlSelf->peripheralBridge_bmb_arbiter_io_inputs_1_rsp_valid 
        = vlSelf->iArbiter_bmb_decoder_io_input_rsp_valid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle_io_output_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_valid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__io_output_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_valid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__outputArea_flow_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_valid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__debugCd_logic_outputReset 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__debugCd_logic_outputReset;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_haltReq 
        = vlSelf->cores_0_cpu_debugRiscv_haltReq;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_instruction_shift 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_shift;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__idcodeArea_ctrl_shift 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_shift;
    vlSelf->privilegedDebug_logic_dm__DOT__io_ctrl_cmd_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_data;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSelNew 
        = (((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSelHiNew) 
            << 0xaU) | (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSelLoNew));
    vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_toHarts_payload_data 
        = vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_toHarts_payload_data_1;
    vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_toHarts_payload_data_2 
        = vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_toHarts_payload_data_3;
    vlSelf->privilegedDebug_logic_dm__DOT__io_ctrl_cmd_payload_write 
        = vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_write;
    vlSelf->privilegedDebug_logic_dm__DOT__when_BusSlaveFactory_l393 
        = (1U & (~ (IData)(vlSelf->privilegedDebug_logic_dm__DOT__when_BusSlaveFactory_l379)));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_selected_regSuccess 
        = vlSelf->cores_0_cpu_logic_cpu_debugBus_regSuccess;
    vlSelf->cores_0_cpu_debugRiscv_regSuccess = vlSelf->cores_0_cpu_logic_cpu_debugBus_regSuccess;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT___zz_logic_jtagLogic_dmi_updateData_op 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_updateData_op;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_payload_write 
        = (2U == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_updateData_op));
    if (vlSelf->peripheralBridge_logic__DOT__rsp_rValidN) {
        vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_payload_fragment_source 
            = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_source;
        vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_payload_fragment_opcode 
            = vlSelf->peripheralBridge_logic__DOT__rsp_payload_fragment_opcode;
        vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_payload_fragment_context 
            = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_context;
    } else {
        vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_payload_fragment_source 
            = vlSelf->peripheralBridge_logic__DOT__rsp_rData_fragment_source;
        vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_payload_fragment_opcode 
            = vlSelf->peripheralBridge_logic__DOT__rsp_rData_fragment_opcode;
        vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_payload_fragment_context 
            = vlSelf->peripheralBridge_logic__DOT__rsp_rData_fragment_context;
    }
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_dmToHart_valid 
        = vlSelf->cores_0_cpu_debugRiscv_dmToHart_valid;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_size = 0U;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_size 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_args_aarsize;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_instruction_capture 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_capture;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__idcodeArea_ctrl_capture 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_capture;
    vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_abstractAuto_trigger 
        = vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_progbufX_mem_port;
    vlSelf->when_BusSlaveFactory_l1041_40 = vlSelf->when_BusSlaveFactory_l1041_39;
    vlSelf->when_BusSlaveFactory_l1041_41 = vlSelf->when_BusSlaveFactory_l1041_39;
    vlSelf->when_BusSlaveFactory_l1041_42 = vlSelf->when_BusSlaveFactory_l1041_39;
    vlSelf->when_BusSlaveFactory_l1041_43 = vlSelf->when_BusSlaveFactory_l1041_39;
    vlSelf->when_BusSlaveFactory_l1041_44 = vlSelf->when_BusSlaveFactory_l1041_39;
    vlSelf->when_BusSlaveFactory_l1041_45 = vlSelf->when_BusSlaveFactory_l1041_39;
    vlSelf->when_BusSlaveFactory_l1041_46 = vlSelf->when_BusSlaveFactory_l1041_39;
    vlSelf->when_BusSlaveFactory_l1041_71 = vlSelf->when_BusSlaveFactory_l1041_39;
    vlSelf->when_BusSlaveFactory_l1041_72 = vlSelf->when_BusSlaveFactory_l1041_39;
    vlSelf->when_BusSlaveFactory_l1041_73 = vlSelf->when_BusSlaveFactory_l1041_39;
    vlSelf->when_BusSlaveFactory_l1041_74 = vlSelf->when_BusSlaveFactory_l1041_39;
    vlSelf->when_BusSlaveFactory_l1041_75 = vlSelf->when_BusSlaveFactory_l1041_39;
    vlSelf->when_BusSlaveFactory_l1041_76 = vlSelf->when_BusSlaveFactory_l1041_39;
    vlSelf->when_BusSlaveFactory_l1041_77 = vlSelf->when_BusSlaveFactory_l1041_39;
    vlSelf->when_BusSlaveFactory_l1041_78 = vlSelf->when_BusSlaveFactory_l1041_39;
    vlSelf->when_BusSlaveFactory_l1041_48 = vlSelf->when_BusSlaveFactory_l1041_47;
    vlSelf->when_BusSlaveFactory_l1041_49 = vlSelf->when_BusSlaveFactory_l1041_47;
    vlSelf->when_BusSlaveFactory_l1041_50 = vlSelf->when_BusSlaveFactory_l1041_47;
    vlSelf->when_BusSlaveFactory_l1041_51 = vlSelf->when_BusSlaveFactory_l1041_47;
    vlSelf->when_BusSlaveFactory_l1041_52 = vlSelf->when_BusSlaveFactory_l1041_47;
    vlSelf->when_BusSlaveFactory_l1041_53 = vlSelf->when_BusSlaveFactory_l1041_47;
    vlSelf->when_BusSlaveFactory_l1041_54 = vlSelf->when_BusSlaveFactory_l1041_47;
    vlSelf->when_BusSlaveFactory_l1041_79 = vlSelf->when_BusSlaveFactory_l1041_47;
    vlSelf->when_BusSlaveFactory_l1041_80 = vlSelf->when_BusSlaveFactory_l1041_47;
    vlSelf->when_BusSlaveFactory_l1041_81 = vlSelf->when_BusSlaveFactory_l1041_47;
    vlSelf->when_BusSlaveFactory_l1041_82 = vlSelf->when_BusSlaveFactory_l1041_47;
    vlSelf->when_BusSlaveFactory_l1041_83 = vlSelf->when_BusSlaveFactory_l1041_47;
    vlSelf->when_BusSlaveFactory_l1041_84 = vlSelf->when_BusSlaveFactory_l1041_47;
    vlSelf->when_BusSlaveFactory_l1041_85 = vlSelf->when_BusSlaveFactory_l1041_47;
    vlSelf->when_BusSlaveFactory_l1041_86 = vlSelf->when_BusSlaveFactory_l1041_47;
    vlSelf->when_BusSlaveFactory_l1041_56 = vlSelf->when_BusSlaveFactory_l1041_55;
    vlSelf->when_BusSlaveFactory_l1041_57 = vlSelf->when_BusSlaveFactory_l1041_55;
    vlSelf->when_BusSlaveFactory_l1041_58 = vlSelf->when_BusSlaveFactory_l1041_55;
    vlSelf->when_BusSlaveFactory_l1041_59 = vlSelf->when_BusSlaveFactory_l1041_55;
    vlSelf->when_BusSlaveFactory_l1041_60 = vlSelf->when_BusSlaveFactory_l1041_55;
    vlSelf->when_BusSlaveFactory_l1041_61 = vlSelf->when_BusSlaveFactory_l1041_55;
    vlSelf->when_BusSlaveFactory_l1041_62 = vlSelf->when_BusSlaveFactory_l1041_55;
    vlSelf->when_BusSlaveFactory_l1041_87 = vlSelf->when_BusSlaveFactory_l1041_55;
    vlSelf->when_BusSlaveFactory_l1041_88 = vlSelf->when_BusSlaveFactory_l1041_55;
    vlSelf->when_BusSlaveFactory_l1041_89 = vlSelf->when_BusSlaveFactory_l1041_55;
    vlSelf->when_BusSlaveFactory_l1041_90 = vlSelf->when_BusSlaveFactory_l1041_55;
    vlSelf->when_BusSlaveFactory_l1041_91 = vlSelf->when_BusSlaveFactory_l1041_55;
    vlSelf->when_BusSlaveFactory_l1041_92 = vlSelf->when_BusSlaveFactory_l1041_55;
    vlSelf->when_BusSlaveFactory_l1041_93 = vlSelf->when_BusSlaveFactory_l1041_55;
    vlSelf->when_BusSlaveFactory_l1041_94 = vlSelf->when_BusSlaveFactory_l1041_55;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_dmToHart_payload_op 
        = vlSelf->cores_0_cpu_debugRiscv_dmToHart_payload_op;
    vlSelf->clint_logic__DOT__io_bus_rsp_ready = vlSelf->clintWishboneBridge_logic_bridge_io_output_rsp_ready;
    vlSelf->clint_logic__DOT___zz_factory_rsp_ready_1 
        = vlSelf->clintWishboneBridge_logic_bridge_io_output_rsp_ready;
    if (vlSelf->clint_logic__DOT__when_Stream_l372) {
        vlSelf->clint_logic__DOT___zz_factory_rsp_ready_1 = 1U;
    }
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
    vlSelf->_zz_cores_0_cpu_iBus_connector_decoder_rsp_ready 
        = vlSelf->cores_0_cpu_iBus_rsp_ready;
    if (vlSelf->when_Stream_l372_3) {
        vlSelf->_zz_cores_0_cpu_iBus_connector_decoder_rsp_ready = 1U;
    }
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.iBus_rsp_payload_data 
        = vlSelf->cores_0_cpu_iBus_rsp_payload_fragment_data;
    vlSelf->_zz_cores_0_cpu_dBus_connector_decoder_rsp_ready 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_ready;
    if (vlSelf->when_Stream_l372_2) {
        vlSelf->_zz_cores_0_cpu_dBus_connector_decoder_rsp_ready = 1U;
    }
    vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l296 
        = (1U & (~ (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_transferFloat)));
    vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_command_access_notSupported_1 
        = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_transferFloat)
            ? 0U : (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSelAarsizeLimit));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__when_JtagTunnel_l53 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_ctrl_enable;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__when_JtagTunnel_l53_1 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_ctrl_enable;
    vlSelf->_zz_plic_logic_bus_rsp_ready_1 = vlSelf->plic_logic_bmb_rsp_ready;
    if (vlSelf->when_Stream_l372) {
        vlSelf->_zz_plic_logic_bus_rsp_ready_1 = 1U;
    }
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_instruction_update 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_update;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__idcodeArea_ctrl_update 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_update;
    vlSelf->plic_logic_bus_readHaltTrigger = 0U;
    if (vlSelf->when_PlicMapper_l122) {
        vlSelf->plic_logic_bus_readHaltTrigger = 1U;
    }
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.iBus_rsp_payload_error 
        = vlSelf->cores_0_cpu_logic_cpu_iBus_rsp_payload_error;
    vlSelf->when_BusSlaveFactory_l1041_1 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_2 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_3 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_4 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_5 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_6 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_7 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_8 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_9 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_10 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_11 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_12 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_13 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_14 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_15 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_16 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_17 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_18 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_19 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_20 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_21 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_22 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_23 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_24 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_25 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_26 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_27 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_28 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_29 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_30 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_31 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_32 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_33 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_34 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_35 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_36 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_37 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_38 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_63 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_64 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_65 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_66 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_67 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_68 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_69 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->when_BusSlaveFactory_l1041_70 = vlSelf->when_BusSlaveFactory_l1041;
    vlSelf->peripheralBridge_logic__DOT__rsp_payload_last 
        = ((IData)(vlSelf->peripheralBridge_logic__DOT__beatCounter) 
           == (IData)(vlSelf->peripheralBridge_logic__DOT__beatCount));
    vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_payload_last 
        = ((IData)(vlSelf->peripheralBridge_logic__DOT__rsp_rValidN)
            ? (IData)(vlSelf->peripheralBridge_logic__DOT__rsp_payload_last)
            : (IData)(vlSelf->peripheralBridge_logic__DOT__rsp_rData_last));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_claim 
        = ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_iep)
            ? (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_bestRequest_id)
            : 0U);
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_claim 
        = ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_iep)
            ? (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id)
            : 0U);
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_instruction_enable 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_enable;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_sendShift = 0U;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_tdoDr = 0U;
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__idcodeArea_ctrl_enable) {
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_tdoDr 
            = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__idcodeArea_ctrl_tdo;
    }
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_sendCapture = 0U;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_sendUpdate = 0U;
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_enable) {
        if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_shift) {
            vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_sendShift = 1U;
        }
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_tdoDr 
            = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_tdo;
        if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_capture) {
            vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_sendCapture = 1U;
        }
        if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_instruction_update) {
            if ((0x2000U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_shiftBuffer))) {
                vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_sendUpdate = 1U;
            }
        }
    }
    vlSelf->privilegedDebug_logic_dm__DOT__io_ctrl_cmd_payload_address 
        = vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_address = 0U;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_data = 0U;
    if (vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l205) {
        vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_address = 0U;
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
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dataX_trigged = 0U;
    if (vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l205) {
        vlSelf->privilegedDebug_logic_dm__DOT__logic_dataX_trigged = 1U;
    }
    vlSelf->clintWishboneBridge_logic_bridge_io_input_ACK 
        = vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_rsp_fire;
    vlSelf->clintWishboneBridge_logic_bridge__DOT__io_input_ACK 
        = vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_rsp_fire;
    vlSelf->clintWishbone_ACK = vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_rsp_fire;
    vlSelf->plicWishboneBridge_logic_bridge_io_input_ACK 
        = vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_rsp_fire;
    vlSelf->plicWishboneBridge_logic_bridge__DOT__io_input_ACK 
        = vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_rsp_fire;
    vlSelf->plicWishbone_ACK = vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_rsp_fire;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_progbufX_trigged 
        = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__factory_askWrite) 
           & (0x20U == (0x70U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_address))));
    vlSelf->privilegedDebug_logic_dm__DOT__factory_doWrite 
        = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__factory_askWrite) 
           & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__io_ctrl_cmd_ready));
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.utime 
        = vlSelf->clint_logic_io_time;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.iBus_rsp_valid 
        = vlSelf->cores_0_cpu_iBus_rsp_valid;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz___05Fzz_maskProposal_0_2_1 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz___05Fzz_maskProposal_0_2_2;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_anyNonExistent 
        = (1U <= vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSel);
    vlSelf->privilegedDebug_logic_dm__DOT___zz_when_DebugModule_l143 
        = (0x7fffU & (vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSel 
                      >> 5U));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_sel 
        = (0U == vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSel);
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz_maskProposal_0_1 
        = (0xfU & (((IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz_maskProposal_0) 
                    << 2U) | (IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz_maskProposal_0)));
    vlSelf->peripheralBridge_logic_io_output_SEL = vlSelf->peripheral_SEL;
    vlSelf->peripheralBridge_logic__DOT__io_output_SEL 
        = vlSelf->peripheral_SEL;
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_1_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_0_valid) 
                    & ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_62) 
                       <= (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_0_priority)))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_1_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_0_valid) 
                    & ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_62) 
                       <= (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_0_priority)))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_3 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_3_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_2_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_0))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_3 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_3_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_2_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_0))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_6 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_5_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_4_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_1))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_6 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_5_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_4_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_1))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_9 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_7_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_6_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_2))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_9 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_7_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_6_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_2))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_12 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_9_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_8_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_3))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_12 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_9_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_8_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_3))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_15 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_11_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_10_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_4))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_15 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_11_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_10_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_4))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_18 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_13_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_12_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_5))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_18 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_13_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_12_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_5))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_21 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_15_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_14_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_6))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_21 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_15_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_14_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_6))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_24 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_17_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_16_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_7))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_24 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_17_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_16_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_7))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_27 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_19_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_18_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_8))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_27 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_19_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_18_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_8))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_30 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_21_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_20_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_9))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_30 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_21_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_20_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_9))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_33 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_23_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_22_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_10))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_33 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_23_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_22_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_10))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_36 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_25_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_24_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_11))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_36 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_25_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_24_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_11))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_39 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_27_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_26_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_12))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_39 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_27_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_26_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_12))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_42 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_29_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_28_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_13))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_42 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_29_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_28_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_13))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_45 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_31_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_30_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_14))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_45 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_31_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_30_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_14))));
    vlSelf->peripheralBridge_logic_io_output_STB = vlSelf->peripheral_STB;
    vlSelf->peripheralBridge_logic__DOT__io_output_STB 
        = vlSelf->peripheral_STB;
    vlSelf->peripheralBridge_logic__DOT___zz_io_output_ADR_1 
        = vlSelf->peripheralBridge_logic__DOT___zz_io_output_ADR_2;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_instruction_tdi 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_jtag_tdi;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_jtag_tck 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_jtag_tck;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__debugCd_external_clk 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__debugCd_external_clk;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__debugCd_external_clk 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__debugCd_external_clk;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_4 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_3;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_11 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_10;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_8 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_1;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_15 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT___zz_tap_fsm_stateNext_1;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_0_valid 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_valid;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_0_payload_last 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_payload_last;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_0_payload_fragment_opcode 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_payload_fragment_opcode;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_0_payload_fragment_address 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_payload_fragment_address;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_0_payload_fragment_length 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_payload_fragment_length;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_0_payload_fragment_data 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_payload_fragment_data;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_0_payload_fragment_mask 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_payload_fragment_mask;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_0_payload_fragment_context 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_payload_fragment_context;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_1_valid 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_cmd_valid;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_1_payload_last 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_cmd_payload_last;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_1_payload_fragment_opcode 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_cmd_payload_fragment_opcode;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_1_payload_fragment_address 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_cmd_payload_fragment_address;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_1_payload_fragment_length 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_cmd_payload_fragment_length;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_bus_cmd_ready 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_bus_cmd_ready;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_bus_rsp_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_bus_rsp_valid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_bus_rsp_payload_error 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_bus_rsp_payload_error;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_bus_rsp_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_bus_rsp_payload_data;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.dBus_rsp_valid 
        = vlSelf->cores_0_cpu_logic_cpu_dBus_rsp_valid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_fire 
        = ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_valid) 
           & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_ready));
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_hartToDm_payload_address 
        = vlSelf->cores_0_cpu_debugRiscv_hartToDm_payload_address;
    if (vlSelf->privilegedDebug_logic_clintStop) {
        vlSelf->clint_logic__DOT__io_stop = 1U;
        vlSelf->clint_logic__DOT__logic_stop = 0U;
        vlSelf->clint_logic__DOT__logic_stop = 1U;
    } else {
        vlSelf->clint_logic__DOT__io_stop = 0U;
        vlSelf->clint_logic__DOT__logic_stop = 0U;
    }
    vlSelf->iArbiter_bmb_decoder__DOT__io_outputs_0_rsp_valid 
        = vlSelf->peripheralBridge_bmb_arbiter_io_inputs_1_rsp_valid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__debugCd_logic_outputReset 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__debugCd_logic_outputReset;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__debugCd_logic_outputReset 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__debugCd_logic_outputReset;
    vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l102 
        = (0U == vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSelNew);
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_regSuccess 
        = vlSelf->cores_0_cpu_debugRiscv_regSuccess;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__io_input_payload_write 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_payload_write;
    vlSelf->privilegedDebug_logic_dm_io_harts_0_dmToHart_payload_size 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_size;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_dmToHart_payload_size 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_size;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_takeWhen_payload_size 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_size;
    vlSelf->clint_logic_io_bus_cmd_ready = ((IData)(vlSelf->clint_logic__DOT___zz_factory_rsp_ready) 
                                            & (IData)(vlSelf->clint_logic__DOT___zz_factory_rsp_ready_1));
    vlSelf->cores_0_cpu_iBus_connector_decoder_rsp_ready 
        = vlSelf->_zz_cores_0_cpu_iBus_connector_decoder_rsp_ready;
    vlSelf->iArbiter_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_ready 
        = vlSelf->_zz_cores_0_cpu_iBus_connector_decoder_rsp_ready;
    vlSelf->iArbiter_bmb_rsp_ready = vlSelf->_zz_cores_0_cpu_iBus_connector_decoder_rsp_ready;
    vlSelf->cores_0_cpu_dBus_connector_decoder_rsp_ready 
        = vlSelf->_zz_cores_0_cpu_dBus_connector_decoder_rsp_ready;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_ready 
        = vlSelf->_zz_cores_0_cpu_dBus_connector_decoder_rsp_ready;
    vlSelf->dBusCoherent_bmb_rsp_ready = vlSelf->_zz_cores_0_cpu_dBus_connector_decoder_rsp_ready;
    vlSelf->dBusCoherent_bmb_connector_decoder_rsp_ready 
        = vlSelf->_zz_cores_0_cpu_dBus_connector_decoder_rsp_ready;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_ready 
        = vlSelf->_zz_cores_0_cpu_dBus_connector_decoder_rsp_ready;
    vlSelf->dBusNonCoherent_bmb_rsp_ready = vlSelf->_zz_cores_0_cpu_dBus_connector_decoder_rsp_ready;
    vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_command_access_notSupported 
        = vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_command_access_notSupported_1;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_tdoBuffer = 0U;
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__when_JtagTunnel_l53) {
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_tdoBuffer 
            = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_ctrl_tdo;
    }
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__when_JtagTunnel_l53_1) {
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_tdoBuffer 
            = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_ctrl_tdo;
    }
    vlSelf->_zz_plic_logic_bus_rsp_ready = (1U & (~ 
                                                  ((IData)(vlSelf->plic_logic_bus_readHaltTrigger) 
                                                   | (IData)(vlSelf->plic_logic_bus_writeHaltTrigger))));
    if (vlSelf->peripheralBridge_logic__DOT__rsp_payload_last) {
        vlSelf->peripheralBridge_logic__DOT__beatLast = 1U;
        vlSelf->peripheral_CTI = ((0U == (IData)(vlSelf->peripheralBridge_logic__DOT__beatCount))
                                   ? 0U : 7U);
    } else {
        vlSelf->peripheralBridge_logic__DOT__beatLast = 0U;
        vlSelf->peripheral_CTI = 2U;
    }
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_ctrl_shift 
        = ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_ctrl_enable) 
           & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_sendShift));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_ctrl_shift 
        = ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_ctrl_enable) 
           & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tap_sendShift));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_tdoUnbufferd 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_bypass;
    if ((4U == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state))) {
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_tdoUnbufferd 
            = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_tdoIr;
    } else if ((0xbU == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_fsm_state))) {
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_tdoUnbufferd 
            = ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_isBypass)
                ? (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_bypass)
                : (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tap_tdoDr));
    }
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
    vlSelf->privilegedDebug_logic_dm_io_harts_0_dmToHart_payload_address 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_address;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_dmToHart_payload_address 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_address;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_takeWhen_payload_address 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_address;
    vlSelf->privilegedDebug_logic_dm_io_harts_0_dmToHart_payload_data 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_data;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_dmToHart_payload_data 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_data;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_takeWhen_payload_data 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_data;
    vlSelf->privilegedDebug_logic_dm_io_harts_0_dmToHart_payload_op 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_op;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_dmToHart_payload_op 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_op;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_takeWhen_payload_op 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_op;
    vlSelf->privilegedDebug_logic_dm__DOT___zz_1 = 0U;
    if (vlSelf->privilegedDebug_logic_dm__DOT__logic_progbufX_trigged) {
        vlSelf->privilegedDebug_logic_dm__DOT___zz_1 = 1U;
    }
    vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l266 
        = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_busy) 
           & (((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_progbufX_trigged) 
               | (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dataX_trigged)) 
              & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_noError)));
    __Vtableidx2 = (((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address) 
                     << 2U) | (((IData)(vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l205) 
                                << 1U) | (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_progbufX_trigged)));
    vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_error 
        = Vsonata__ConstPool__TABLE_h64e87499_0[__Vtableidx2];
    vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractAuto_trigger 
        = (((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_progbufX_trigged) 
            & ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractAuto_autoexecProgbuf) 
               >> (IData)(vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_progbufX_mem_port))) 
           | ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractAuto_autoexecdata) 
              & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dataX_trigged)));
    vlSelf->privilegedDebug_logic_dm__DOT__when_BusSlaveFactory_l341 = 0U;
    if ((0x16U == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address))) {
        if (vlSelf->privilegedDebug_logic_dm__DOT__factory_doWrite) {
            vlSelf->privilegedDebug_logic_dm__DOT__when_BusSlaveFactory_l341 = 1U;
        }
    }
    vlSelf->privilegedDebug_logic_dm__DOT__when_BusSlaveFactory_l391 = 0U;
    vlSelf->privilegedDebug_logic_dm__DOT__when_BusSlaveFactory_l377_2 = 0U;
    vlSelf->privilegedDebug_logic_dm__DOT__when_BusSlaveFactory_l377_1 = 0U;
    vlSelf->privilegedDebug_logic_dm__DOT__when_BusSlaveFactory_l377 = 0U;
    if ((0x10U == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address))) {
        if (vlSelf->privilegedDebug_logic_dm__DOT__factory_doWrite) {
            vlSelf->privilegedDebug_logic_dm__DOT__when_BusSlaveFactory_l391 = 1U;
            vlSelf->privilegedDebug_logic_dm__DOT__when_BusSlaveFactory_l377_2 = 1U;
            vlSelf->privilegedDebug_logic_dm__DOT__when_BusSlaveFactory_l377_1 = 1U;
            vlSelf->privilegedDebug_logic_dm__DOT__when_BusSlaveFactory_l377 = 1U;
        }
    }
    vlSelf->privilegedDebug_logic_dm__DOT__logic_command_commandRequest = 0U;
    if ((0x17U == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address))) {
        if (vlSelf->privilegedDebug_logic_dm__DOT__factory_doWrite) {
            vlSelf->privilegedDebug_logic_dm__DOT__logic_command_commandRequest = 1U;
        }
    }
    vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l143 
        = (0U == (IData)(vlSelf->privilegedDebug_logic_dm__DOT___zz_when_DebugModule_l143));
    vlSelf->privilegedDebug_logic_dm_io_harts_0_dmToHart_valid 
        = ((~ ((~ (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_sel)) 
               & (0U != (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_op)))) 
           & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_valid));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_allResumeAck 
        = (1U & ((~ (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_sel)) 
                 | (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_resumeReady)));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_anyResumeAck 
        = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_sel) 
           & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_resumeReady));
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz___05Fzz_maskProposal_0_2 
        = (0xfU & ((IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz_maskProposal_0_1) 
                   - (IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz___05Fzz_maskProposal_0_2_1)));
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_82 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_0_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_1 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_0_priority;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_2 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_0_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_82 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_1_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_1 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_62;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_2 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_1_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_82 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_0_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_1 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_0_priority;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_2 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_0_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_82 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_1_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_1 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_62;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_2 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_1_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_3) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_83 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_2_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_4 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_63;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_5 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_2_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_83 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_3_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_4 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_64;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_5 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_3_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_3) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_83 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_2_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_4 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_63;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_5 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_2_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_83 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_3_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_4 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_64;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_5 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_3_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_6) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_84 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_4_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_7 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_65;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_8 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_4_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_84 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_5_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_7 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_66;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_8 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_5_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_6) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_84 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_4_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_7 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_65;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_8 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_4_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_84 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_5_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_7 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_66;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_8 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_5_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_9) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_85 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_6_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_10 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_67;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_11 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_6_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_85 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_7_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_10 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_68;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_11 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_7_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_9) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_85 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_6_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_10 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_67;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_11 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_6_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_85 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_7_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_10 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_68;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_11 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_7_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_12) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_86 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_8_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_13 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_69;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_14 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_8_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_86 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_9_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_13 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_70;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_14 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_9_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_12) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_86 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_8_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_13 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_69;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_14 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_8_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_86 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_9_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_13 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_70;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_14 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_9_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_15) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_87 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_10_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_16 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_71;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_17 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_10_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_87 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_11_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_16 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_72;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_17 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_11_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_15) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_87 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_10_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_16 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_71;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_17 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_10_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_87 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_11_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_16 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_72;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_17 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_11_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_18) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_88 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_12_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_19 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_73;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_20 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_12_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_88 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_13_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_19 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_74;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_20 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_13_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_18) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_88 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_12_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_19 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_73;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_20 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_12_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_88 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_13_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_19 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_74;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_20 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_13_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_21) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_89 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_14_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_22 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_75;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_23 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_14_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_89 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_15_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_22 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_76;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_23 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_15_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_21) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_89 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_14_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_22 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_75;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_23 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_14_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_89 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_15_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_22 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_76;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_23 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_15_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_24) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_90 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_16_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_25 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_77;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_26 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_16_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_90 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_17_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_25 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_78;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_26 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_17_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_24) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_90 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_16_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_25 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_77;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_26 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_16_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_90 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_17_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_25 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_78;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_26 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_17_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_27) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_91 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_18_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_28 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_79;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_29 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_18_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_91 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_19_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_28 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_80;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_29 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_19_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_27) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_91 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_18_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_28 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_79;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_29 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_18_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_91 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_19_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_28 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_80;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_29 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_19_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_30) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_92 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_20_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_31 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_81;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_32 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_20_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_92 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_21_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_31 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_82;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_32 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_21_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_30) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_92 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_20_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_31 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_81;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_32 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_20_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_92 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_21_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_31 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_82;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_32 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_21_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_33) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_93 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_22_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_34 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_83;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_35 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_22_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_93 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_23_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_34 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_84;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_35 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_23_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_33) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_93 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_22_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_34 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_83;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_35 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_22_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_93 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_23_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_34 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_84;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_35 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_23_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_36) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_94 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_24_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_37 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_85;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_38 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_24_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_94 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_25_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_37 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_86;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_38 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_25_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_36) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_94 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_24_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_37 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_85;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_38 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_24_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_94 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_25_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_37 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_86;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_38 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_25_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_39) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_95 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_26_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_40 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_87;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_41 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_26_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_95 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_27_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_40 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_88;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_41 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_27_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_39) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_95 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_26_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_40 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_87;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_41 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_26_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_95 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_27_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_40 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_88;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_41 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_27_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_42) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_96 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_28_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_43 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_89;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_44 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_28_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_96 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_29_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_43 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_90;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_44 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_29_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_42) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_96 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_28_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_43 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_89;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_44 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_28_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_96 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_29_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_43 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_90;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_44 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_29_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_45) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_97 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_30_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_46 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_91;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_47 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_30_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_97 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_31_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_46 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_92;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_47 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_31_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_45) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_97 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_30_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_46 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_91;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_47 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_30_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_97 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_31_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_46 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_92;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_47 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_31_valid;
    }
    vlSelf->peripheralBridge_logic__DOT___zz_io_output_ADR 
        = (0xfffU & (vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_address 
                     + (IData)(vlSelf->peripheralBridge_logic__DOT___zz_io_output_ADR_1)));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__io_jtag_tck 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_jtag_tck;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__io_jtag_tck 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_jtag_tck;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__debugCd_external_clk 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__debugCd_external_clk;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__debugCd_external_clk 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__debugCd_external_clk;
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
    vlSelf->clint_logic__DOT__when_Clint_l39 = (1U 
                                                & (~ (IData)(vlSelf->clint_logic__DOT__logic_stop)));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_target_buffercc__DOT__debugCd_logic_outputReset 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__debugCd_logic_outputReset;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__bufferCC_7__DOT__debugCd_logic_outputReset 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__debugCd_logic_outputReset;
    vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_cmd_ready 
        = vlSelf->clint_logic_io_bus_cmd_ready;
    vlSelf->clint_logic__DOT__io_bus_cmd_ready = vlSelf->clint_logic_io_bus_cmd_ready;
    vlSelf->clint_logic__DOT__factory_rsp_ready = vlSelf->clint_logic_io_bus_cmd_ready;
    vlSelf->_zz_io_input_rsp_ready = vlSelf->iArbiter_bmb_rsp_ready;
    if (vlSelf->when_Stream_l372_5) {
        vlSelf->_zz_io_input_rsp_ready = 1U;
    }
    vlSelf->_zz_peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_ready 
        = vlSelf->dBusNonCoherent_bmb_rsp_ready;
    if (vlSelf->when_Stream_l372_7) {
        vlSelf->_zz_peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_ready = 1U;
    }
    vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_notSupported 
        = (((IData)(vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_command_access_notSupported) 
            < (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_args_aarsize)) 
           | ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_args_aarpostincrement) 
              | ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_args_transfer) 
                 & (0x80U != (0x7ffU & (vlSelf->privilegedDebug_logic_dm__DOT__logic_command_data 
                                        >> 5U))))));
    vlSelf->plic_logic_bmb_cmd_ready = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_ready) 
                                        & (IData)(vlSelf->_zz_plic_logic_bus_rsp_ready_1));
    vlSelf->peripheralBridge_logic_io_output_CTI = vlSelf->peripheral_CTI;
    vlSelf->peripheralBridge_logic__DOT__io_output_CTI 
        = vlSelf->peripheral_CTI;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_captureValid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dtmcs_logic_ctrl_capture;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_captureValid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_logic_ctrl_capture;
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
    __Vtableidx6 = (((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiRsp_payload_error) 
                     << 4U) | (((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiRsp_valid) 
                                << 3U) | (((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_updateData_op) 
                                           << 1U) | (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_updateValid))));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiStat_failure 
        = Vsonata__ConstPool__TABLE_h2578492e_0[__Vtableidx6];
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
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_haltClear = 0U;
    if (vlSelf->privilegedDebug_logic_dm__DOT__when_BusSlaveFactory_l391) {
        if (vlSelf->privilegedDebug_logic_dm__DOT__when_BusSlaveFactory_l393) {
            vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_haltClear 
                = vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_dmcontrol_haltClear;
        }
    }
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_ackhavereset = 0U;
    if (vlSelf->privilegedDebug_logic_dm__DOT__when_BusSlaveFactory_l377_2) {
        if (vlSelf->privilegedDebug_logic_dm__DOT__when_BusSlaveFactory_l379_2) {
            vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_ackhavereset 
                = vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_dmcontrol_ackhavereset;
        }
    }
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_haltSet = 0U;
    if (vlSelf->privilegedDebug_logic_dm__DOT__when_BusSlaveFactory_l377) {
        if (vlSelf->privilegedDebug_logic_dm__DOT__when_BusSlaveFactory_l379) {
            vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_haltSet 
                = vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_dmcontrol_haltSet;
        }
    }
    vlSelf->privilegedDebug_logic_dm__DOT__logic_command_request 
        = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_commandRequest) 
           | (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractAuto_trigger));
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_dmToHart_valid 
        = vlSelf->privilegedDebug_logic_dm_io_harts_0_dmToHart_valid;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_takeWhen_valid 
        = vlSelf->privilegedDebug_logic_dm_io_harts_0_dmToHart_valid;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz_maskProposal_0_2 
        = ((~ (IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz___05Fzz_maskProposal_0_2)) 
           & (IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz_maskProposal_0_1));
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
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_51 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_11)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_8) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_10) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_7)))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_51 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_11)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_8) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_10) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_7)))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_54 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_17)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_14) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_16) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_13)))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_54 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_17)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_14) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_16) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_13)))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_57 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_23)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_20) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_22) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_19)))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_57 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_23)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_20) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_22) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_19)))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_60 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_29)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_26) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_28) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_25)))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_60 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_29)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_26) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_28) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_25)))));
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
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_66 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_41)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_38) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_40) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_37)))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_66 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_41)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_38) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_40) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_37)))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_69 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_47)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_44) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_46) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_43)))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_69 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_47)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_44) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_46) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_43)))));
    vlSelf->peripheral_ADR = (0x3fffffffU & ((0x3ffffc00U 
                                              & (vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_address 
                                                 >> 2U)) 
                                             | ((IData)(vlSelf->peripheralBridge_logic__DOT___zz_io_output_ADR) 
                                                >> 2U)));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__bufferCC_7__DOT__io_jtag_tck 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__io_jtag_tck;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target_buffercc__DOT__io_jtag_tck 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__io_jtag_tck;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_target_buffercc__DOT__debugCd_external_clk 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__debugCd_external_clk;
    vlSelf->iArbiter_bmb_decoder__DOT__io_input_rsp_ready 
        = vlSelf->_zz_io_input_rsp_ready;
    vlSelf->iArbiter_bmb_decoder__DOT__io_outputs_0_rsp_ready 
        = vlSelf->_zz_io_input_rsp_ready;
    vlSelf->iArbiter_bmb_decoder_io_outputs_0_rsp_ready 
        = vlSelf->_zz_io_input_rsp_ready;
    vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_ready 
        = vlSelf->_zz_peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_ready;
    vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_cmd_ready 
        = vlSelf->plic_logic_bmb_cmd_ready;
    vlSelf->plic_logic_bus_rsp_ready = vlSelf->plic_logic_bmb_cmd_ready;
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
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_resumeReq = 0U;
    if (vlSelf->privilegedDebug_logic_dm__DOT__when_BusSlaveFactory_l377_1) {
        if (vlSelf->privilegedDebug_logic_dm__DOT__when_BusSlaveFactory_l379_1) {
            vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_resumeReq 
                = vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_dmcontrol_resumeReq;
        }
    }
    if (vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_haltSet) {
        vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_resumeReq = 0U;
    }
    vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l260 
        = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_request) 
           & ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_busy) 
              & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_noError)));
    vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l275 
        = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_request) 
           & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_noError));
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz_maskProposal_0_3 
        = (3U & (((IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz_maskProposal_0_2) 
                  >> 2U) | (IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz_maskProposal_0_2)));
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
    vlSelf->peripheralBridge_logic_io_output_ADR = vlSelf->peripheral_ADR;
    vlSelf->peripheralBridge_logic__DOT__io_output_ADR 
        = vlSelf->peripheral_ADR;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_rsp_ready 
        = vlSelf->iArbiter_bmb_decoder_io_outputs_0_rsp_ready;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_rsp_ready 
        = vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_ready;
    vlSelf->peripheralBridge_bmb_arbiter__DOT___zz_io_output_rsp_ready 
        = ((IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_rspSel)
            ? (IData)(vlSelf->iArbiter_bmb_decoder_io_outputs_0_rsp_ready)
            : (IData)(vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_ready));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__io_input_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_valid;
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
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_resume_cmd_valid = 0U;
    if (vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l102) {
        vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_resume_cmd_valid 
            = vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_resumeReq;
    }
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__maskProposal_1 
        = (1U & ((IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz_maskProposal_0_3) 
                 >> 1U));
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__maskProposal_0 
        = (1U & (IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz_maskProposal_0_3));
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
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_rsp_ready 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT___zz_io_output_rsp_ready;
    vlSelf->peripheralBridge_bmb_arbiter_io_output_rsp_ready 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT___zz_io_output_rsp_ready;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmi_captureData_op 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiStat_value_aheadValue;
    vlSelf->privilegedDebug_logic_dm_io_harts_0_resume_cmd_valid 
        = vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_resume_cmd_valid;
    vlSelf->cores_0_cpu_debugRiscv_resume_cmd_valid 
        = vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_resume_cmd_valid;
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
    vlSelf->_zz_io_input_rsp_ready_1 = vlSelf->peripheralBridge_bmb_arbiter_io_output_rsp_ready;
    if (vlSelf->when_Stream_l372_9) {
        vlSelf->_zz_io_input_rsp_ready_1 = 1U;
    }
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_resume_cmd_valid 
        = vlSelf->cores_0_cpu_debugRiscv_resume_cmd_valid;
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
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_data 
            = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_data;
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_mask 
            = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_mask;
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_opcode 
            = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_opcode;
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_address 
            = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_address;
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_length 
            = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_length;
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_context 
            = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_context;
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_last 
            = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_last;
    } else {
        vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_output_payload_fragment_source 
            = vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_inputs_1_payload_fragment_source;
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_data = 0U;
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_mask = 0U;
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_opcode 
            = vlSelf->iArbiter_bmb_cmd_rData_fragment_opcode;
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_address 
            = vlSelf->iArbiter_bmb_cmd_rData_fragment_address;
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_length 
            = vlSelf->iArbiter_bmb_cmd_rData_fragment_length;
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_context 
            = vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_inputs_1_payload_fragment_context;
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_last 
            = vlSelf->iArbiter_bmb_cmd_rData_last;
    }
    if (vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rValidN) {
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_source 
            = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_source;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_data 
            = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_data;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_mask 
            = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_mask;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_opcode 
            = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_opcode;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_address 
            = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_address;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_length 
            = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_length;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_context 
            = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_context;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_last 
            = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_last;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_m2sPipe_ready 
            = vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__maskRouted_0;
    } else {
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_source 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rData_fragment_source;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_data 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rData_fragment_data;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_mask 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rData_fragment_mask;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_opcode 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rData_fragment_opcode;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_address 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rData_fragment_address;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_length 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rData_fragment_length;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_context 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rData_fragment_context;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_last 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rData_last;
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
    vlSelf->peripheralBridge_logic__DOT__io_input_rsp_ready 
        = vlSelf->_zz_io_input_rsp_ready_1;
    vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_m2sPipe_ready 
        = vlSelf->_zz_io_input_rsp_ready_1;
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
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_cmd_payload_fragment_data 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_data;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_output_payload_fragment_data 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_data;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_output_payload_fragment_data 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_data;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_cmd_payload_fragment_mask 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_mask;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_output_payload_fragment_mask 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_mask;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_output_payload_fragment_mask 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_mask;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_cmd_payload_fragment_opcode 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_opcode;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_output_payload_fragment_opcode 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_opcode;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_output_payload_fragment_opcode 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_opcode;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_cmd_payload_fragment_address 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_address;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_output_payload_fragment_address 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_address;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_output_payload_fragment_address 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_address;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_cmd_payload_fragment_length 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_length;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_output_payload_fragment_length 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_length;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_output_payload_fragment_length 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_length;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_cmd_payload_fragment_context 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_context;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_output_payload_fragment_context 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_context;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_output_payload_fragment_context 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_context;
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
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_cmd_payload_last 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_last;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_output_payload_last 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_last;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_output_payload_last 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_last;
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
    vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_ready 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_m2sPipe_ready;
    if (vlSelf->peripheralBridge_logic__DOT__when_Stream_l372) {
        vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_ready = 1U;
    }
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__when_Stream_l671 
        = ((IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_output_fire) 
           & (IData)(vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_last));
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

extern const VlUnpacked<CData/*5:0*/, 8> Vsonata__ConstPool__TABLE_h27ae0913_0;

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___ico_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__1(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___ico_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__1\n"); );
    // Init
    CData/*0:0*/ peripheralBridge_logic__DOT____VdfgRegularize_ha73a16a8_0_0;
    peripheralBridge_logic__DOT____VdfgRegularize_ha73a16a8_0_0 = 0;
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_uncached 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.dBus_cmd_payload_uncached;
    vlSelf->cores_0_cpu_logic_cpu_iBus_cmd_payload_size 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.iBus_cmd_payload_size;
    vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_valid = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.dBus_cmd_valid;
    vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_address 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.dBus_cmd_payload_address;
    vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_data 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.dBus_cmd_payload_data;
    vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_mask 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.dBus_cmd_payload_mask;
    vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_last 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.dBus_cmd_payload_last;
    vlSelf->cores_0_cpu_logic_cpu_debugBus_hartToDm_payload_data 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_hartToDm_payload_data;
    vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_size 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.dBus_cmd_payload_size;
    vlSelf->cores_0_cpu_logic_cpu_iBus_cmd_valid = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.iBus_cmd_valid;
    vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_wr 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.dBus_cmd_payload_wr;
    vlSelf->cores_0_cpu_logic_cpu_debugBus_redo = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_redo;
    vlSelf->cores_0_cpu_logic_cpu_debugBus_unavailable 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_unavailable;
    vlSelf->cores_0_cpu_logic_cpu_debugBus_haveReset 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_haveReset;
    vlSelf->cores_0_cpu_logic_cpu_debugBus_running 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_running;
    vlSelf->cores_0_cpu_logic_cpu_iBus_cmd_payload_address 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.iBus_cmd_payload_address;
    vlSelf->cores_0_cpu_logic_cpu_debugBus_resume_rsp_valid 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_resume_rsp_valid;
    vlSelf->cores_0_cpu_logic_cpu_debugBus_halted = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_halted;
    vlSelf->cores_0_cpu_logic_cpu_debugBus_ebreak = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_ebreak;
    vlSelf->cores_0_cpu_logic_cpu_debugBus_exception 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_exception;
    vlSelf->cores_0_cpu_logic_cpu_debugBus_commit = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_commit;
    vlSelf->cores_0_cpu_logic_cpu_debugBus_hartToDm_valid 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_hartToDm_valid;
    vlSelf->plicWishboneBridge_logic_bridge__DOT__io_input_ADR 
        = vlSelf->plicWishbone_ADR;
    vlSelf->plic_logic_bmb_cmd_payload_fragment_address 
        = (0x3fffffU & (vlSelf->plicWishbone_ADR << 2U));
    vlSelf->peripheralBridge_logic__DOT__io_output_DAT_MISO 
        = vlSelf->peripheral_DAT_MISO;
    vlSelf->peripheralBridge_logic__DOT__rsp_payload_fragment_data 
        = vlSelf->peripheral_DAT_MISO;
    vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_payload_fragment_data 
        = ((IData)(vlSelf->peripheralBridge_logic__DOT__rsp_rValidN)
            ? vlSelf->peripheral_DAT_MISO : vlSelf->peripheralBridge_logic__DOT__rsp_rData_fragment_data);
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
    vlSelf->clintWishboneBridge_logic_bridge__DOT__io_input_STB 
        = vlSelf->clintWishbone_STB;
    vlSelf->plicWishboneBridge_logic_bridge__DOT__io_input_STB 
        = vlSelf->plicWishbone_STB;
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
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_valid 
        = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_valid;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_valid 
        = (1U & ((~ (IData)(vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rValidN)) 
                 | (IData)(vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_valid)));
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_payload_fragment_address 
        = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_address;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_payload_fragment_data 
        = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_data;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_payload_fragment_mask 
        = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_mask;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_payload_last 
        = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_last;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_fromHarts_payload_data 
        = vlSelf->cores_0_cpu_logic_cpu_debugBus_hartToDm_payload_data;
    vlSelf->cores_0_cpu_debugRiscv_hartToDm_payload_data 
        = vlSelf->cores_0_cpu_logic_cpu_debugBus_hartToDm_payload_data;
    __Vtableidx1 = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_size;
    vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_payload_fragment_length 
        = Vsonata__ConstPool__TABLE_h27ae0913_0[__Vtableidx1];
    if (vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rValidN) {
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_address 
            = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_address;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_data 
            = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_data;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_mask 
            = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_mask;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_last 
            = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_last;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_opcode 
            = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_wr;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_context 
            = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_wr;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_length 
            = vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_payload_fragment_length;
    } else {
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_address 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rData_fragment_address;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_data 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rData_fragment_data;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_mask 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rData_fragment_mask;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_last 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rData_last;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_opcode 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rData_fragment_opcode;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_context 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rData_fragment_context;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_length 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rData_fragment_length;
    }
    vlSelf->cores_0_cpu_iBus_cmd_valid = vlSelf->cores_0_cpu_logic_cpu_iBus_cmd_valid;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_payload_fragment_opcode 
        = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_wr;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_payload_fragment_context 
        = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_wr;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_withoutWriteBuffer_busCmdContext_isWrite 
        = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_wr;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_selected_redo 
        = vlSelf->cores_0_cpu_logic_cpu_debugBus_redo;
    vlSelf->cores_0_cpu_debugRiscv_redo = vlSelf->cores_0_cpu_logic_cpu_debugBus_redo;
    vlSelf->cores_0_cpu_debugRiscv_unavailable = vlSelf->cores_0_cpu_logic_cpu_debugBus_unavailable;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_allUnavail 
        = (1U & ((~ (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_sel)) 
                 | (IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_unavailable)));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_anyUnavail 
        = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_sel) 
           & (IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_unavailable));
    vlSelf->cores_0_cpu_debugRiscv_haveReset = vlSelf->cores_0_cpu_logic_cpu_debugBus_haveReset;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_allHaveReset 
        = (1U & ((~ (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_sel)) 
                 | (IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_haveReset)));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_anyHaveReset 
        = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_sel) 
           & (IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_haveReset));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_selected_running 
        = vlSelf->cores_0_cpu_logic_cpu_debugBus_running;
    vlSelf->cores_0_cpu_debugRiscv_running = vlSelf->cores_0_cpu_logic_cpu_debugBus_running;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_anyRunning 
        = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_sel) 
           & (IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_running));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_allRunning 
        = (1U & ((~ (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_sel)) 
                 | (IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_running)));
    vlSelf->cores_0_cpu_iBus_cmd_payload_fragment_address 
        = vlSelf->cores_0_cpu_logic_cpu_iBus_cmd_payload_address;
    vlSelf->cores_0_cpu_debugRiscv_resume_rsp_valid 
        = vlSelf->cores_0_cpu_logic_cpu_debugBus_resume_rsp_valid;
    vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l276 
        = (1U & (~ (IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_halted)));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_selected_halted 
        = vlSelf->cores_0_cpu_logic_cpu_debugBus_halted;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_allHalted 
        = (1U & ((~ (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_sel)) 
                 | (IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_halted)));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_anyHalted 
        = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_sel) 
           & (IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_halted));
    vlSelf->cores_0_cpu_debugRiscv_halted = vlSelf->cores_0_cpu_logic_cpu_debugBus_halted;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_selected_ebreak 
        = vlSelf->cores_0_cpu_logic_cpu_debugBus_ebreak;
    vlSelf->cores_0_cpu_debugRiscv_ebreak = vlSelf->cores_0_cpu_logic_cpu_debugBus_ebreak;
    vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l263 
        = vlSelf->cores_0_cpu_logic_cpu_debugBus_exception;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_selected_exception 
        = vlSelf->cores_0_cpu_logic_cpu_debugBus_exception;
    vlSelf->cores_0_cpu_debugRiscv_exception = vlSelf->cores_0_cpu_logic_cpu_debugBus_exception;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_selected_commit 
        = vlSelf->cores_0_cpu_logic_cpu_debugBus_commit;
    vlSelf->cores_0_cpu_debugRiscv_commit = vlSelf->cores_0_cpu_logic_cpu_debugBus_commit;
    vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l350 
        = ((IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_commit) 
           | (IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_regSuccess));
    vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l366 
        = ((IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_ebreak) 
           | ((IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_commit) 
              | (IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_exception)));
    vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l370 
        = ((IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_redo) 
           | ((~ (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_executionCounter)) 
              & (IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_commit)));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_fromHarts_valid 
        = vlSelf->cores_0_cpu_logic_cpu_debugBus_hartToDm_valid;
    vlSelf->cores_0_cpu_debugRiscv_hartToDm_valid = vlSelf->cores_0_cpu_logic_cpu_debugBus_hartToDm_valid;
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
    vlSelf->clint_logic__DOT__io_bus_cmd_payload_fragment_data 
        = vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_data;
    vlSelf->plic_logic_bridge_targetMapping_1_targetCompletion_payload 
        = vlSelf->plic_logic_bridge_targetMapping_0_targetCompletion_payload;
    vlSelf->clint_logic__DOT__io_bus_cmd_payload_fragment_opcode 
        = vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_opcode;
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
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_hartToDm_payload_data 
        = vlSelf->cores_0_cpu_debugRiscv_hartToDm_payload_data;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_payload_fragment_length 
        = vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_payload_fragment_length;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_redo 
        = vlSelf->cores_0_cpu_debugRiscv_redo;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_unavailable 
        = vlSelf->cores_0_cpu_debugRiscv_unavailable;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_haveReset 
        = vlSelf->cores_0_cpu_debugRiscv_haveReset;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_running 
        = vlSelf->cores_0_cpu_debugRiscv_running;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_resume_rsp_valid 
        = vlSelf->cores_0_cpu_debugRiscv_resume_rsp_valid;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_halted 
        = vlSelf->cores_0_cpu_debugRiscv_halted;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_haltsum_value = 0U;
    if (vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l143) {
        vlSelf->privilegedDebug_logic_dm__DOT__logic_haltsum_value 
            = ((0xfffffffeU & vlSelf->privilegedDebug_logic_dm__DOT__logic_haltsum_value) 
               | (IData)(vlSelf->cores_0_cpu_debugRiscv_halted));
    }
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_ebreak 
        = vlSelf->cores_0_cpu_debugRiscv_ebreak;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_exception 
        = vlSelf->cores_0_cpu_debugRiscv_exception;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_commit 
        = vlSelf->cores_0_cpu_debugRiscv_commit;
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
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_hartToDm_valid 
        = vlSelf->cores_0_cpu_debugRiscv_hartToDm_valid;
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
    vlSelf->privilegedDebug_logic_dm__DOT__when_StateMachine_l253 
        = ((1U != (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg)) 
           & (1U == (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateNext)));
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

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__1(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__1\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_uncached 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.dBus_cmd_payload_uncached;
    vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_address 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.dBus_cmd_payload_address;
    vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_data 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.dBus_cmd_payload_data;
    vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_mask 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.dBus_cmd_payload_mask;
    vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_last 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.dBus_cmd_payload_last;
    vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_size 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.dBus_cmd_payload_size;
    vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_wr 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.dBus_cmd_payload_wr;
    vlSelf->cores_0_cpu_logic_cpu_debugBus_unavailable 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_unavailable;
    vlSelf->cores_0_cpu_logic_cpu_debugBus_hartToDm_payload_data 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_hartToDm_payload_data;
    vlSelf->cores_0_cpu_logic_cpu_iBus_cmd_payload_address 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.iBus_cmd_payload_address;
    __Vtableidx1 = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_size;
    vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_payload_fragment_length 
        = Vsonata__ConstPool__TABLE_h27ae0913_0[__Vtableidx1];
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_withoutWriteBuffer_busCmdContext_isWrite 
        = vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_payload_wr;
    vlSelf->cores_0_cpu_debugRiscv_unavailable = vlSelf->cores_0_cpu_logic_cpu_debugBus_unavailable;
    vlSelf->cores_0_cpu_debugRiscv_hartToDm_payload_data 
        = vlSelf->cores_0_cpu_logic_cpu_debugBus_hartToDm_payload_data;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_unavailable 
        = vlSelf->cores_0_cpu_debugRiscv_unavailable;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_hartToDm_payload_data 
        = vlSelf->cores_0_cpu_debugRiscv_hartToDm_payload_data;
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__2(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__2\n"); );
    // Init
    CData/*0:0*/ __Vdlyvdim0__privilegedDebug_logic_dm__DOT__logic_progbufX_mem__v0;
    __Vdlyvdim0__privilegedDebug_logic_dm__DOT__logic_progbufX_mem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__privilegedDebug_logic_dm__DOT__logic_progbufX_mem__v0;
    __Vdlyvval__privilegedDebug_logic_dm__DOT__logic_progbufX_mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__privilegedDebug_logic_dm__DOT__logic_progbufX_mem__v0;
    __Vdlyvset__privilegedDebug_logic_dm__DOT__logic_progbufX_mem__v0 = 0;
    // Body
    __Vdlyvset__privilegedDebug_logic_dm__DOT__logic_progbufX_mem__v0 = 0U;
    if (vlSelf->when_ClockDomainGenerator_l222) {
        vlSelf->debugCd_logic_holdingLogic_resetCounter 
            = (0xfffU & ((IData)(1U) + (IData)(vlSelf->debugCd_logic_holdingLogic_resetCounter)));
    }
    if (vlSelf->debugCd_logic_inputResetTrigger) {
        vlSelf->debugCd_logic_holdingLogic_resetCounter = 0U;
    }
    if (vlSelf->when_ClockDomainGenerator_l222_1) {
        vlSelf->systemCd_logic_holdingLogic_resetCounter 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->systemCd_logic_holdingLogic_resetCounter)));
    }
    if (vlSelf->systemCd_logic_inputResetTrigger) {
        vlSelf->systemCd_logic_holdingLogic_resetCounter = 0U;
    }
    if (vlSelf->privilegedDebug_logic_dm__DOT___zz_1) {
        __Vdlyvval__privilegedDebug_logic_dm__DOT__logic_progbufX_mem__v0 
            = vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_data;
        __Vdlyvset__privilegedDebug_logic_dm__DOT__logic_progbufX_mem__v0 = 1U;
        __Vdlyvdim0__privilegedDebug_logic_dm__DOT__logic_progbufX_mem__v0 
            = vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_progbufX_mem_port;
    }
    if ((4U & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg))) {
        if ((2U & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg))) {
            if ((1U & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg))) {
                if (vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l366) {
                    vlSelf->privilegedDebug_logic_dm__DOT__logic_command_executionCounter 
                        = (1U & ((IData)(1U) + (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_executionCounter)));
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg) 
                         >> 1U)))) {
        if ((1U & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg))) {
            vlSelf->privilegedDebug_logic_dm__DOT__logic_command_executionCounter = 0U;
        }
    }
    if (vlSelf->peripheralBridge_logic__DOT__rsp_ready) {
        vlSelf->peripheralBridge_logic__DOT__rsp_rData_fragment_opcode 
            = vlSelf->peripheralBridge_logic__DOT__rsp_payload_fragment_opcode;
        vlSelf->peripheralBridge_logic__DOT__rsp_rData_fragment_context 
            = vlSelf->peripheralBridge_logic__DOT__rsp_payload_fragment_context;
        vlSelf->peripheralBridge_logic__DOT__rsp_rData_fragment_data 
            = vlSelf->peripheralBridge_logic__DOT__rsp_payload_fragment_data;
        vlSelf->peripheralBridge_logic__DOT__rsp_rData_fragment_source 
            = vlSelf->peripheralBridge_logic__DOT__rsp_payload_fragment_source;
        vlSelf->peripheralBridge_logic__DOT__rsp_rData_last 
            = vlSelf->peripheralBridge_logic__DOT__rsp_payload_last;
    }
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_valid) {
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_data_data 
            = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_payload_data;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_data_error 
            = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_payload_error;
    }
    vlSelf->toplevel_privilegedDebug_logic_dm_io_harts_0_dmToHart_regNext_payload_size 
        = vlSelf->privilegedDebug_logic_dm_io_harts_0_dmToHart_payload_size;
    vlSelf->toplevel_privilegedDebug_logic_dm_io_harts_0_dmToHart_regNext_payload_data 
        = vlSelf->privilegedDebug_logic_dm_io_harts_0_dmToHart_payload_data;
    vlSelf->toplevel_privilegedDebug_logic_dm_io_harts_0_dmToHart_regNext_payload_address 
        = vlSelf->privilegedDebug_logic_dm_io_harts_0_dmToHart_payload_address;
    if (vlSelf->dBusNonCoherent_bmb_cmd_ready) {
        vlSelf->dBusNonCoherent_bmb_cmd_rData_fragment_context 
            = vlSelf->dBusNonCoherent_bmb_cmd_payload_fragment_context;
        vlSelf->dBusNonCoherent_bmb_cmd_rData_fragment_mask 
            = vlSelf->dBusNonCoherent_bmb_cmd_payload_fragment_mask;
        vlSelf->dBusNonCoherent_bmb_cmd_rData_fragment_data 
            = vlSelf->dBusNonCoherent_bmb_cmd_payload_fragment_data;
        vlSelf->dBusNonCoherent_bmb_cmd_rData_fragment_length 
            = vlSelf->dBusNonCoherent_bmb_cmd_payload_fragment_length;
        vlSelf->dBusNonCoherent_bmb_cmd_rData_fragment_address 
            = vlSelf->dBusNonCoherent_bmb_cmd_payload_fragment_address;
        vlSelf->dBusNonCoherent_bmb_cmd_rData_last 
            = vlSelf->dBusNonCoherent_bmb_cmd_payload_last;
        vlSelf->dBusNonCoherent_bmb_cmd_rData_fragment_opcode 
            = vlSelf->dBusNonCoherent_bmb_cmd_payload_fragment_opcode;
    }
    if (vlSelf->dBusCoherent_bmb_cmd_ready) {
        vlSelf->dBusCoherent_bmb_cmd_rData_fragment_context 
            = vlSelf->dBusCoherent_bmb_cmd_payload_fragment_context;
        vlSelf->dBusCoherent_bmb_cmd_rData_fragment_mask 
            = vlSelf->dBusCoherent_bmb_cmd_payload_fragment_mask;
        vlSelf->dBusCoherent_bmb_cmd_rData_fragment_data 
            = vlSelf->dBusCoherent_bmb_cmd_payload_fragment_data;
        vlSelf->dBusCoherent_bmb_cmd_rData_fragment_address 
            = vlSelf->dBusCoherent_bmb_cmd_payload_fragment_address;
        vlSelf->dBusCoherent_bmb_cmd_rData_fragment_length 
            = vlSelf->dBusCoherent_bmb_cmd_payload_fragment_length;
        vlSelf->dBusCoherent_bmb_cmd_rData_last = vlSelf->dBusCoherent_bmb_cmd_payload_last;
        vlSelf->dBusCoherent_bmb_cmd_rData_fragment_opcode 
            = vlSelf->dBusCoherent_bmb_cmd_payload_fragment_opcode;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority_6) {
        vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_valid 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_valid;
        vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority_4;
        vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id 
            = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_80)
                ? ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_72)
                    ? ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_48)
                        ? (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_82)
                        : (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_83))
                    : ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_51)
                        ? (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_84)
                        : (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_85)))
                : ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_74)
                    ? ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_54)
                        ? (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_86)
                        : (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_87))
                    : ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_57)
                        ? (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_88)
                        : (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_89))));
    } else {
        vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_valid 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_valid_1;
        vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority 
            = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority_5;
        vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id 
            = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_81)
                ? ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_76)
                    ? ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_60)
                        ? (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_90)
                        : (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_91))
                    : ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_63)
                        ? (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_92)
                        : (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_93)))
                : ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_78)
                    ? ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_66)
                        ? (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_94)
                        : (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_95))
                    : ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_69)
                        ? (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_96)
                        : (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_97))));
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority_6) {
        vlSelf->cores_0_cpu_externalInterrupt_plic_target_bestRequest_valid 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_valid;
        vlSelf->cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority_4;
        vlSelf->cores_0_cpu_externalInterrupt_plic_target_bestRequest_id 
            = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_80)
                ? ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_72)
                    ? ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_48)
                        ? (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_82)
                        : (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_83))
                    : ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_51)
                        ? (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_84)
                        : (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_85)))
                : ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_74)
                    ? ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_54)
                        ? (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_86)
                        : (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_87))
                    : ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_57)
                        ? (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_88)
                        : (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_89))));
    } else {
        vlSelf->cores_0_cpu_externalInterrupt_plic_target_bestRequest_valid 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_valid_1;
        vlSelf->cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority 
            = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority_5;
        vlSelf->cores_0_cpu_externalInterrupt_plic_target_bestRequest_id 
            = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_81)
                ? ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_76)
                    ? ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_60)
                        ? (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_90)
                        : (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_91))
                    : ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_63)
                        ? (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_92)
                        : (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_93)))
                : ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_78)
                    ? ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_66)
                        ? (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_94)
                        : (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_95))
                    : ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_69)
                        ? (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_96)
                        : (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_97))));
    }
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__outputArea_hit 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__outputArea_target;
    if (vlSelf->peripheralBridge_logic__DOT__io_input_cmd_ready) {
        vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_last 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_last;
        vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_source 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_source;
        vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_context 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_context;
        vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_length 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_length;
        vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_data 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_data;
        vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_mask 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_mask;
        vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_opcode 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_opcode;
        vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_address 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_address;
    }
    if (vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_ready) {
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rData_fragment_mask 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_payload_fragment_mask;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rData_fragment_data 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_payload_fragment_data;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rData_fragment_length 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_payload_fragment_length;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rData_fragment_address 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_payload_fragment_address;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rData_last 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_payload_last;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rData_fragment_opcode 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_payload_fragment_opcode;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rData_fragment_context 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_payload_fragment_context;
    }
    if (vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_ready) {
        vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_fragment_context 
            = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_payload_fragment_context;
        vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_fragment_data 
            = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_payload_fragment_data;
        vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_fragment_opcode 
            = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_payload_fragment_opcode;
        vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_fragment_source 
            = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_payload_fragment_source;
        vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_last 
            = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_payload_last;
    }
    if (vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_ready) {
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rData_fragment_context 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_context;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rData_fragment_mask 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_mask;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rData_fragment_data 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_data;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rData_fragment_source 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_source;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rData_last 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_last;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rData_fragment_opcode 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_opcode;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rData_fragment_address 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_address;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rData_fragment_length 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_length;
    }
    vlSelf->privilegedDebug_logic_dm__DOT__factory_rspBuffer_payload_error 
        = vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_error;
    if (vlSelf->cores_0_cpu_iBus_cmd_ready) {
        vlSelf->cores_0_cpu_iBus_cmd_rData_last = vlSelf->cores_0_cpu_iBus_cmd_payload_last;
        vlSelf->cores_0_cpu_iBus_cmd_rData_fragment_opcode 
            = vlSelf->cores_0_cpu_iBus_cmd_payload_fragment_opcode;
        vlSelf->cores_0_cpu_iBus_cmd_rData_fragment_length 
            = vlSelf->cores_0_cpu_iBus_cmd_payload_fragment_length;
        vlSelf->cores_0_cpu_iBus_cmd_rData_fragment_address 
            = vlSelf->cores_0_cpu_iBus_cmd_payload_fragment_address;
    }
    if (vlSelf->_zz_io_input_rsp_ready_1) {
        vlSelf->_zz_io_output_rsp_payload_fragment_context 
            = vlSelf->peripheralBridge_logic_io_input_rsp_payload_fragment_context;
        vlSelf->_zz_io_output_rsp_payload_fragment_data 
            = vlSelf->peripheralBridge_logic_io_input_rsp_payload_fragment_data;
        vlSelf->_zz_io_output_rsp_payload_fragment_opcode 
            = vlSelf->peripheralBridge_logic_io_input_rsp_payload_fragment_opcode;
        vlSelf->_zz_io_output_rsp_payload_last = vlSelf->peripheralBridge_logic_io_input_rsp_payload_last;
        vlSelf->_zz_io_output_rsp_payload_fragment_source 
            = vlSelf->peripheralBridge_logic_io_input_rsp_payload_fragment_source;
    }
    if (vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_ready) {
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_context 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_context;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_mask 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_mask;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_data 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_data;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_length 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_length;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_address 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_address;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_opcode 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_fragment_opcode;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_last 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_payload_last;
    }
    if (vlSelf->dBusCoherent_bmb_cmd_s2mPipe_ready) {
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_context 
            = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_context;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_mask 
            = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_mask;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_data 
            = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_data;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_length 
            = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_length;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_address 
            = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_address;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_opcode 
            = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_opcode;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_last 
            = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_last;
    }
    if (vlSelf->_zz_io_input_rsp_ready) {
        vlSelf->_zz_iArbiter_bmb_rsp_payload_fragment_data 
            = vlSelf->iArbiter_bmb_decoder_io_input_rsp_payload_fragment_data;
        vlSelf->_zz_iArbiter_bmb_rsp_payload_fragment_opcode 
            = vlSelf->iArbiter_bmb_decoder_io_input_rsp_payload_fragment_opcode;
        vlSelf->_zz_iArbiter_bmb_rsp_payload_last = vlSelf->iArbiter_bmb_decoder_io_input_rsp_payload_last;
    }
    if (vlSelf->_zz_cores_0_cpu_iBus_connector_decoder_rsp_ready) {
        vlSelf->_zz_cores_0_cpu_iBus_rsp_payload_last 
            = vlSelf->cores_0_cpu_iBus_connector_decoder_rsp_payload_last;
        vlSelf->_zz_cores_0_cpu_iBus_rsp_payload_fragment_data 
            = vlSelf->cores_0_cpu_iBus_connector_decoder_rsp_payload_fragment_data;
        vlSelf->_zz_cores_0_cpu_iBus_rsp_payload_fragment_opcode 
            = vlSelf->cores_0_cpu_iBus_connector_decoder_rsp_payload_fragment_opcode;
    }
    vlSelf->privilegedDebug_logic_dm__DOT__factory_rspBuffer_payload_data 
        = vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_data;
    if (vlSelf->clint_logic__DOT___zz_factory_rsp_ready_1) {
        vlSelf->clint_logic__DOT___zz_io_bus_rsp_payload_last 
            = vlSelf->clint_logic__DOT__factory_rsp_payload_last;
        vlSelf->clint_logic__DOT___zz_io_bus_rsp_payload_fragment_opcode 
            = vlSelf->clint_logic__DOT__factory_rsp_payload_fragment_opcode;
        vlSelf->clint_logic__DOT___zz_io_bus_rsp_payload_fragment_data 
            = vlSelf->clint_logic__DOT__factory_rsp_payload_fragment_data;
    }
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_target_buffercc__DOT__buffers_1 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_target_buffercc__DOT__buffers_0;
    if (vlSelf->_zz_cores_0_cpu_dBus_connector_decoder_rsp_ready) {
        vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_payload_last 
            = vlSelf->cores_0_cpu_dBus_connector_decoder_rsp_payload_last;
        vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_payload_fragment_data 
            = vlSelf->cores_0_cpu_dBus_connector_decoder_rsp_payload_fragment_data;
        vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_payload_fragment_opcode 
            = vlSelf->cores_0_cpu_dBus_connector_decoder_rsp_payload_fragment_opcode;
        vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_payload_fragment_context 
            = vlSelf->cores_0_cpu_dBus_connector_decoder_rsp_payload_fragment_context;
    }
    if (vlSelf->_zz_peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_ready) {
        vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_context 
            = vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_payload_fragment_context;
        vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_data 
            = vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_payload_fragment_data;
        vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_opcode 
            = vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_payload_fragment_opcode;
        vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_last 
            = vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_payload_last;
    }
    if (vlSelf->privilegedDebug_logic_dm__DOT__logic_fromHarts_valid) {
        vlSelf->privilegedDebug_logic_dm__DOT___zz_factory_cmdToRsp_payload_data_1 
            = vlSelf->privilegedDebug_logic_dm__DOT__logic_fromHarts_payload_data;
    }
    if (vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_ready) {
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_data 
            = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_data;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_mask 
            = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_mask;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_context 
            = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_context;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_address 
            = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_address;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_opcode 
            = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_opcode;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_length 
            = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_length;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_last 
            = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_last;
    }
    if (vlSelf->iArbiter_bmb_cmd_ready) {
        vlSelf->iArbiter_bmb_cmd_rData_fragment_length 
            = vlSelf->iArbiter_bmb_cmd_payload_fragment_length;
        vlSelf->iArbiter_bmb_cmd_rData_fragment_address 
            = vlSelf->iArbiter_bmb_cmd_payload_fragment_address;
        vlSelf->iArbiter_bmb_cmd_rData_fragment_opcode 
            = vlSelf->iArbiter_bmb_cmd_payload_fragment_opcode;
        vlSelf->iArbiter_bmb_cmd_rData_last = vlSelf->iArbiter_bmb_cmd_payload_last;
    }
    if (vlSelf->_zz_plic_logic_bus_rsp_ready_1) {
        vlSelf->_zz_plic_logic_bmb_rsp_payload_last 
            = vlSelf->plic_logic_bus_rsp_payload_last;
        vlSelf->_zz_plic_logic_bmb_rsp_payload_fragment_opcode 
            = vlSelf->plic_logic_bus_rsp_payload_fragment_opcode;
        vlSelf->_zz_plic_logic_bmb_rsp_payload_fragment_data 
            = vlSelf->plic_logic_bus_rsp_payload_fragment_data;
    }
    vlSelf->toplevel_privilegedDebug_logic_dm_io_harts_0_dmToHart_regNext_payload_op 
        = vlSelf->privilegedDebug_logic_dm_io_harts_0_dmToHart_payload_op;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_iep_regNext 
        = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_iep;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_iep_regNext 
        = vlSelf->cores_0_cpu_externalInterrupt_plic_target_iep;
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_fire) {
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_data 
            = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_payload_data;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_write 
            = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_payload_write;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_address 
            = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_payload_address;
    }
    vlSelf->clint_logic__DOT__logic_harts_0_timerInterrupt 
        = (vlSelf->clint_logic__DOT__logic_harts_0_cmp 
           <= vlSelf->clint_logic__DOT__logic_time);
    vlSelf->privilegedDebug_logic_dm__DOT___zz_io_harts_0_ackReset 
        = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_sel) 
           & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_ackhavereset));
    if (vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rValidN) {
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rData_fragment_mask 
            = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_mask;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rData_fragment_data 
            = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_data;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rData_fragment_context 
            = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_context;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rData_fragment_length 
            = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_length;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rData_fragment_address 
            = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_address;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rData_fragment_opcode 
            = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_opcode;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rData_last 
            = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_last;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rData_fragment_source 
            = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_source;
    }
    if ((0x17U == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address))) {
        if (vlSelf->privilegedDebug_logic_dm__DOT__factory_doWrite) {
            vlSelf->privilegedDebug_logic_dm__DOT__logic_command_data 
                = vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_data;
        }
    }
    if (__Vdlyvset__privilegedDebug_logic_dm__DOT__logic_progbufX_mem__v0) {
        vlSelf->privilegedDebug_logic_dm__DOT__logic_progbufX_mem[__Vdlyvdim0__privilegedDebug_logic_dm__DOT__logic_progbufX_mem__v0] 
            = __Vdlyvval__privilegedDebug_logic_dm__DOT__logic_progbufX_mem__v0;
    }
    vlSelf->when_ClockDomainGenerator_l222 = (0xfffU 
                                              != (IData)(vlSelf->debugCd_logic_holdingLogic_resetCounter));
    vlSelf->when_ClockDomainGenerator_l222_1 = (0x3fU 
                                                != (IData)(vlSelf->systemCd_logic_holdingLogic_resetCounter));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_progbufX_mem_spinal_port1 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_progbufX_mem
        [vlSelf->privilegedDebug_logic_dm__DOT__logic_command_executionCounter];
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_data_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__outputArea_flow_payload_error 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_data_error;
    vlSelf->cores_0_cpu_debugRiscv_dmToHart_payload_size 
        = vlSelf->toplevel_privilegedDebug_logic_dm_io_harts_0_dmToHart_regNext_payload_size;
    vlSelf->cores_0_cpu_debugRiscv_dmToHart_payload_data 
        = vlSelf->toplevel_privilegedDebug_logic_dm_io_harts_0_dmToHart_regNext_payload_data;
    vlSelf->cores_0_cpu_debugRiscv_dmToHart_payload_address 
        = vlSelf->toplevel_privilegedDebug_logic_dm_io_harts_0_dmToHart_regNext_payload_address;
    vlSelf->peripheralBridge_logic__DOT__inputCmd_payload_last 
        = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_last;
    vlSelf->peripheralBridge_logic_io_input_rsp_payload_fragment_context 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_fragment_context;
    vlSelf->peripheralBridge_logic__DOT__io_input_rsp_payload_fragment_context 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_fragment_context;
    vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_m2sPipe_payload_fragment_context 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_fragment_context;
    vlSelf->peripheralBridge_logic_io_input_rsp_payload_fragment_data 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_fragment_data;
    vlSelf->peripheralBridge_logic__DOT__io_input_rsp_payload_fragment_data 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_fragment_data;
    vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_m2sPipe_payload_fragment_data 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_fragment_data;
    vlSelf->peripheralBridge_logic_io_input_rsp_payload_fragment_opcode 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_fragment_opcode;
    vlSelf->peripheralBridge_logic__DOT__io_input_rsp_payload_fragment_opcode 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_fragment_opcode;
    vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_m2sPipe_payload_fragment_opcode 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_fragment_opcode;
    vlSelf->peripheralBridge_logic_io_input_rsp_payload_fragment_source 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_fragment_source;
    vlSelf->peripheralBridge_logic__DOT__io_input_rsp_payload_fragment_source 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_fragment_source;
    vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_m2sPipe_payload_fragment_source 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_fragment_source;
    vlSelf->peripheralBridge_logic_io_input_rsp_payload_last 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_last;
    vlSelf->peripheralBridge_logic__DOT__io_input_rsp_payload_last 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_last;
    vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_m2sPipe_payload_last 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rData_last;
    vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_context 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rData_fragment_context;
    vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_mask 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rData_fragment_mask;
    vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_data 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rData_fragment_data;
    vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_source 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rData_fragment_source;
    vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_last 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rData_last;
    vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_opcode 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rData_fragment_opcode;
    vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_address 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rData_fragment_address;
    vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_length 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rData_fragment_length;
    vlSelf->privilegedDebug_logic_dm__DOT__io_ctrl_rsp_payload_error 
        = vlSelf->privilegedDebug_logic_dm__DOT__factory_rspBuffer_payload_error;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_payload_error 
        = vlSelf->privilegedDebug_logic_dm__DOT__factory_rspBuffer_payload_error;
    vlSelf->privilegedDebug_logic_dm_io_ctrl_rsp_payload_error 
        = vlSelf->privilegedDebug_logic_dm__DOT__factory_rspBuffer_payload_error;
    vlSelf->iArbiter_bmb_cmd_payload_last = vlSelf->cores_0_cpu_iBus_cmd_rData_last;
    vlSelf->cores_0_cpu_iBus_cmd_halfPipe_payload_last 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_last;
    vlSelf->cores_0_cpu_iBus_connector_decoder_cmd_payload_last 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_last;
    vlSelf->iArbiter_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_last 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_last;
    vlSelf->iArbiter_bmb_cmd_payload_fragment_opcode 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_fragment_opcode;
    vlSelf->cores_0_cpu_iBus_cmd_halfPipe_payload_fragment_opcode 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_fragment_opcode;
    vlSelf->cores_0_cpu_iBus_connector_decoder_cmd_payload_fragment_opcode 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_fragment_opcode;
    vlSelf->iArbiter_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_opcode 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_fragment_opcode;
    vlSelf->iArbiter_bmb_cmd_payload_fragment_length 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_fragment_length;
    vlSelf->cores_0_cpu_iBus_cmd_halfPipe_payload_fragment_length 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_fragment_length;
    vlSelf->cores_0_cpu_iBus_connector_decoder_cmd_payload_fragment_length 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_fragment_length;
    vlSelf->iArbiter_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_length 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_fragment_length;
    vlSelf->peripheralBridge_logic__DOT__rsp_payload_fragment_source 
        = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_source;
    vlSelf->peripheralBridge_logic__DOT__inputCmd_payload_fragment_source 
        = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_source;
    vlSelf->peripheralBridge_logic__DOT__rsp_payload_fragment_context 
        = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_context;
    vlSelf->peripheralBridge_logic__DOT__inputCmd_payload_fragment_context 
        = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_context;
    vlSelf->iArbiter_bmb_cmd_payload_fragment_address 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_fragment_address;
    vlSelf->cores_0_cpu_iBus_cmd_halfPipe_payload_fragment_address 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_fragment_address;
    vlSelf->cores_0_cpu_iBus_connector_decoder_cmd_payload_fragment_address 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_fragment_address;
    vlSelf->iArbiter_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_address 
        = vlSelf->cores_0_cpu_iBus_cmd_rData_fragment_address;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_rsp_payload_fragment_context 
        = vlSelf->_zz_io_output_rsp_payload_fragment_context;
    vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_payload_fragment_context 
        = vlSelf->_zz_io_output_rsp_payload_fragment_context;
    vlSelf->peripheralBridge_bmb_arbiter_io_inputs_0_rsp_payload_fragment_context 
        = vlSelf->_zz_io_output_rsp_payload_fragment_context;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_rsp_payload_fragment_context 
        = vlSelf->_zz_io_output_rsp_payload_fragment_context;
    vlSelf->dBusCoherent_bmb_cmd_payload_fragment_context 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_context;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_m2sPipe_payload_fragment_context 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_context;
    vlSelf->cores_0_cpu_dBus_connector_decoder_cmd_payload_fragment_context 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_context;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_context 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_context;
    vlSelf->dBusCoherent_bmb_cmd_payload_fragment_mask 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_mask;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_m2sPipe_payload_fragment_mask 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_mask;
    vlSelf->cores_0_cpu_dBus_connector_decoder_cmd_payload_fragment_mask 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_mask;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_mask 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_mask;
    vlSelf->dBusCoherent_bmb_cmd_payload_fragment_data 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_data;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_m2sPipe_payload_fragment_data 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_data;
    vlSelf->cores_0_cpu_dBus_connector_decoder_cmd_payload_fragment_data 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_data;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_data 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_data;
    vlSelf->dBusNonCoherent_bmb_cmd_payload_fragment_context 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_context;
    vlSelf->dBusCoherent_bmb_cmd_s2mPipe_m2sPipe_payload_fragment_context 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_context;
    vlSelf->dBusCoherent_bmb_connector_decoder_cmd_payload_fragment_context 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_context;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_context 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_context;
    vlSelf->dBusCoherent_bmb_cmd_payload_fragment_length 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_length;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_m2sPipe_payload_fragment_length 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_length;
    vlSelf->cores_0_cpu_dBus_connector_decoder_cmd_payload_fragment_length 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_length;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_length 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_length;
    vlSelf->dBusNonCoherent_bmb_cmd_payload_fragment_mask 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_mask;
    vlSelf->dBusCoherent_bmb_cmd_s2mPipe_m2sPipe_payload_fragment_mask 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_mask;
    vlSelf->dBusCoherent_bmb_connector_decoder_cmd_payload_fragment_mask 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_mask;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_mask 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_mask;
    vlSelf->dBusCoherent_bmb_cmd_payload_fragment_address 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_address;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_m2sPipe_payload_fragment_address 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_address;
    vlSelf->cores_0_cpu_dBus_connector_decoder_cmd_payload_fragment_address 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_address;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_address 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_address;
    vlSelf->dBusCoherent_bmb_cmd_payload_fragment_opcode 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_opcode;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_m2sPipe_payload_fragment_opcode 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_opcode;
    vlSelf->cores_0_cpu_dBus_connector_decoder_cmd_payload_fragment_opcode 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_opcode;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_opcode 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_opcode;
    vlSelf->dBusCoherent_bmb_cmd_payload_last = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_last;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_m2sPipe_payload_last 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_last;
    vlSelf->cores_0_cpu_dBus_connector_decoder_cmd_payload_last 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_last;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_last 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_last;
    vlSelf->dBusNonCoherent_bmb_cmd_payload_fragment_data 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_data;
    vlSelf->dBusCoherent_bmb_cmd_s2mPipe_m2sPipe_payload_fragment_data 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_data;
    vlSelf->dBusCoherent_bmb_connector_decoder_cmd_payload_fragment_data 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_data;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_data 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_data;
    vlSelf->dBusNonCoherent_bmb_cmd_payload_fragment_length 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_length;
    vlSelf->dBusCoherent_bmb_cmd_s2mPipe_m2sPipe_payload_fragment_length 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_length;
    vlSelf->dBusCoherent_bmb_connector_decoder_cmd_payload_fragment_length 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_length;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_length 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_length;
    vlSelf->dBusNonCoherent_bmb_cmd_payload_fragment_address 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_address;
    vlSelf->dBusCoherent_bmb_cmd_s2mPipe_m2sPipe_payload_fragment_address 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_address;
    vlSelf->dBusCoherent_bmb_connector_decoder_cmd_payload_fragment_address 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_address;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_address 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_address;
    vlSelf->dBusNonCoherent_bmb_cmd_payload_fragment_opcode 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_opcode;
    vlSelf->dBusCoherent_bmb_cmd_s2mPipe_m2sPipe_payload_fragment_opcode 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_opcode;
    vlSelf->dBusCoherent_bmb_connector_decoder_cmd_payload_fragment_opcode 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_opcode;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_fragment_opcode 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_opcode;
    vlSelf->dBusNonCoherent_bmb_cmd_payload_last = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_last;
    vlSelf->dBusCoherent_bmb_cmd_s2mPipe_m2sPipe_payload_last 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_last;
    vlSelf->dBusCoherent_bmb_connector_decoder_cmd_payload_last 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_last;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_payload_last 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_last;
    vlSelf->cores_0_cpu_iBus_connector_decoder_rsp_payload_fragment_data 
        = vlSelf->_zz_iArbiter_bmb_rsp_payload_fragment_data;
    vlSelf->iArbiter_bmb_rsp_payload_fragment_data 
        = vlSelf->_zz_iArbiter_bmb_rsp_payload_fragment_data;
    vlSelf->iArbiter_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_payload_fragment_data 
        = vlSelf->_zz_iArbiter_bmb_rsp_payload_fragment_data;
    vlSelf->cores_0_cpu_iBus_connector_decoder_rsp_payload_fragment_opcode 
        = vlSelf->_zz_iArbiter_bmb_rsp_payload_fragment_opcode;
    vlSelf->iArbiter_bmb_rsp_payload_fragment_opcode 
        = vlSelf->_zz_iArbiter_bmb_rsp_payload_fragment_opcode;
    vlSelf->iArbiter_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_payload_fragment_opcode 
        = vlSelf->_zz_iArbiter_bmb_rsp_payload_fragment_opcode;
    vlSelf->cores_0_cpu_iBus_connector_decoder_rsp_payload_last 
        = vlSelf->_zz_iArbiter_bmb_rsp_payload_last;
    vlSelf->iArbiter_bmb_rsp_payload_last = vlSelf->_zz_iArbiter_bmb_rsp_payload_last;
    vlSelf->iArbiter_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_payload_last 
        = vlSelf->_zz_iArbiter_bmb_rsp_payload_last;
    vlSelf->cores_0_cpu_iBus_rsp_payload_last = vlSelf->_zz_cores_0_cpu_iBus_rsp_payload_last;
    vlSelf->privilegedDebug_logic_dm__DOT__io_ctrl_rsp_payload_data 
        = vlSelf->privilegedDebug_logic_dm__DOT__factory_rspBuffer_payload_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_payload_data 
        = vlSelf->privilegedDebug_logic_dm__DOT__factory_rspBuffer_payload_data;
    vlSelf->privilegedDebug_logic_dm_io_ctrl_rsp_payload_data 
        = vlSelf->privilegedDebug_logic_dm__DOT__factory_rspBuffer_payload_data;
    vlSelf->clint_logic__DOT__io_bus_rsp_payload_last 
        = vlSelf->clint_logic__DOT___zz_io_bus_rsp_payload_last;
    vlSelf->clint_logic_io_bus_rsp_payload_last = vlSelf->clint_logic__DOT___zz_io_bus_rsp_payload_last;
    vlSelf->clint_logic__DOT__io_bus_rsp_payload_fragment_opcode 
        = vlSelf->clint_logic__DOT___zz_io_bus_rsp_payload_fragment_opcode;
    vlSelf->clint_logic_io_bus_rsp_payload_fragment_opcode 
        = vlSelf->clint_logic__DOT___zz_io_bus_rsp_payload_fragment_opcode;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_target_buffercc__DOT__buffers_0 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_target;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__outputArea_target 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_target_buffercc__DOT__buffers_1;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_target_buffercc_io_dataOut 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_target_buffercc__DOT__buffers_1;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_target_buffercc__DOT__io_dataOut 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_target_buffercc__DOT__buffers_1;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_payload_last 
        = vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_payload_last;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_payload_fragment_data 
        = vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_payload_fragment_data;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_rsp_payload_fragment_data 
        = vlSelf->_zz_io_output_rsp_payload_fragment_data;
    vlSelf->iArbiter_bmb_decoder_io_input_rsp_payload_fragment_data 
        = vlSelf->_zz_io_output_rsp_payload_fragment_data;
    vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_payload_fragment_data 
        = vlSelf->_zz_io_output_rsp_payload_fragment_data;
    vlSelf->peripheralBridge_bmb_arbiter_io_inputs_0_rsp_payload_fragment_data 
        = vlSelf->_zz_io_output_rsp_payload_fragment_data;
    vlSelf->iArbiter_bmb_decoder__DOT__io_input_rsp_payload_fragment_data 
        = vlSelf->_zz_io_output_rsp_payload_fragment_data;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_rsp_payload_fragment_data 
        = vlSelf->_zz_io_output_rsp_payload_fragment_data;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_rsp_payload_fragment_data 
        = vlSelf->_zz_io_output_rsp_payload_fragment_data;
    vlSelf->peripheralBridge_bmb_arbiter_io_inputs_1_rsp_payload_fragment_data 
        = vlSelf->_zz_io_output_rsp_payload_fragment_data;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_rsp_payload_fragment_opcode 
        = vlSelf->_zz_io_output_rsp_payload_fragment_opcode;
    vlSelf->iArbiter_bmb_decoder_io_input_rsp_payload_fragment_opcode 
        = vlSelf->_zz_io_output_rsp_payload_fragment_opcode;
    vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_payload_fragment_opcode 
        = vlSelf->_zz_io_output_rsp_payload_fragment_opcode;
    vlSelf->peripheralBridge_bmb_arbiter_io_inputs_0_rsp_payload_fragment_opcode 
        = vlSelf->_zz_io_output_rsp_payload_fragment_opcode;
    vlSelf->iArbiter_bmb_decoder__DOT__io_input_rsp_payload_fragment_opcode 
        = vlSelf->_zz_io_output_rsp_payload_fragment_opcode;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_rsp_payload_fragment_opcode 
        = vlSelf->_zz_io_output_rsp_payload_fragment_opcode;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_rsp_payload_fragment_opcode 
        = vlSelf->_zz_io_output_rsp_payload_fragment_opcode;
    vlSelf->peripheralBridge_bmb_arbiter_io_inputs_1_rsp_payload_fragment_opcode 
        = vlSelf->_zz_io_output_rsp_payload_fragment_opcode;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_rsp_payload_last 
        = vlSelf->_zz_io_output_rsp_payload_last;
    vlSelf->iArbiter_bmb_decoder_io_input_rsp_payload_last 
        = vlSelf->_zz_io_output_rsp_payload_last;
    vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_payload_last 
        = vlSelf->_zz_io_output_rsp_payload_last;
    vlSelf->peripheralBridge_bmb_arbiter_io_inputs_0_rsp_payload_last 
        = vlSelf->_zz_io_output_rsp_payload_last;
    vlSelf->iArbiter_bmb_decoder__DOT__io_input_rsp_payload_last 
        = vlSelf->_zz_io_output_rsp_payload_last;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_rsp_payload_last 
        = vlSelf->_zz_io_output_rsp_payload_last;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_rsp_payload_last 
        = vlSelf->_zz_io_output_rsp_payload_last;
    vlSelf->peripheralBridge_bmb_arbiter_io_inputs_1_rsp_payload_last 
        = vlSelf->_zz_io_output_rsp_payload_last;
    vlSelf->cores_0_cpu_dBus_connector_decoder_rsp_payload_fragment_context 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_context;
    vlSelf->dBusCoherent_bmb_rsp_payload_fragment_context 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_context;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_payload_fragment_context 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_context;
    vlSelf->dBusCoherent_bmb_connector_decoder_rsp_payload_fragment_context 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_context;
    vlSelf->dBusNonCoherent_bmb_rsp_payload_fragment_context 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_context;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_payload_fragment_context 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_context;
    vlSelf->cores_0_cpu_dBus_connector_decoder_rsp_payload_fragment_data 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_data;
    vlSelf->dBusCoherent_bmb_rsp_payload_fragment_data 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_data;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_payload_fragment_data 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_data;
    vlSelf->dBusCoherent_bmb_connector_decoder_rsp_payload_fragment_data 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_data;
    vlSelf->dBusNonCoherent_bmb_rsp_payload_fragment_data 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_data;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_payload_fragment_data 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_data;
    vlSelf->cores_0_cpu_dBus_connector_decoder_rsp_payload_fragment_opcode 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_opcode;
    vlSelf->dBusCoherent_bmb_rsp_payload_fragment_opcode 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_opcode;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_payload_fragment_opcode 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_opcode;
    vlSelf->dBusCoherent_bmb_connector_decoder_rsp_payload_fragment_opcode 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_opcode;
    vlSelf->dBusNonCoherent_bmb_rsp_payload_fragment_opcode 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_opcode;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_payload_fragment_opcode 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_fragment_opcode;
    vlSelf->cores_0_cpu_dBus_connector_decoder_rsp_payload_last 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_last;
    vlSelf->dBusCoherent_bmb_rsp_payload_last = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_last;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_payload_last 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_last;
    vlSelf->dBusCoherent_bmb_connector_decoder_rsp_payload_last 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_last;
    vlSelf->dBusNonCoherent_bmb_rsp_payload_last = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_last;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_payload_last 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_payload_last;
    vlSelf->privilegedDebug_logic_dm__DOT___zz_factory_cmdToRsp_payload_data 
        = vlSelf->privilegedDebug_logic_dm__DOT___zz_factory_cmdToRsp_payload_data_1;
    vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_m2sPipe_payload_fragment_data 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_data;
    vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_payload_fragment_data 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_data;
    vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_m2sPipe_payload_fragment_mask 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_mask;
    vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_payload_fragment_mask 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_mask;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_payload_fragment_opcode 
        = vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_payload_fragment_opcode;
    vlSelf->cores_0_cpu_logic_cpu_dBus_rsp_payload_error 
        = vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_payload_fragment_opcode;
    vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_m2sPipe_payload_fragment_context 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_context;
    vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_payload_fragment_context 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_context;
    vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_m2sPipe_payload_fragment_address 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_address;
    vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_payload_fragment_address 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_address;
    vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_m2sPipe_payload_fragment_opcode 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_opcode;
    vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_payload_fragment_opcode 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_opcode;
    vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_m2sPipe_payload_fragment_length 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_length;
    vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_payload_fragment_length 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_length;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_payload_fragment_context 
        = vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_payload_fragment_context;
    vlSelf->when_DataCache_l535 = vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_payload_fragment_context;
    vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_m2sPipe_payload_last 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_last;
    vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_payload_last 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_last;
    vlSelf->iArbiter_bmb_decoder__DOT__io_outputs_0_cmd_payload_fragment_length 
        = vlSelf->iArbiter_bmb_cmd_rData_fragment_length;
    vlSelf->iArbiter_bmb_cmd_halfPipe_payload_fragment_length 
        = vlSelf->iArbiter_bmb_cmd_rData_fragment_length;
    vlSelf->iArbiter_bmb_decoder_io_outputs_0_cmd_payload_fragment_length 
        = vlSelf->iArbiter_bmb_cmd_rData_fragment_length;
    vlSelf->iArbiter_bmb_decoder__DOT__io_outputs_0_cmd_payload_fragment_address 
        = vlSelf->iArbiter_bmb_cmd_rData_fragment_address;
    vlSelf->iArbiter_bmb_cmd_halfPipe_payload_fragment_address 
        = vlSelf->iArbiter_bmb_cmd_rData_fragment_address;
    vlSelf->iArbiter_bmb_decoder_io_outputs_0_cmd_payload_fragment_address 
        = vlSelf->iArbiter_bmb_cmd_rData_fragment_address;
    vlSelf->iArbiter_bmb_decoder__DOT__io_outputs_0_cmd_payload_fragment_opcode 
        = vlSelf->iArbiter_bmb_cmd_rData_fragment_opcode;
    vlSelf->iArbiter_bmb_cmd_halfPipe_payload_fragment_opcode 
        = vlSelf->iArbiter_bmb_cmd_rData_fragment_opcode;
    vlSelf->iArbiter_bmb_decoder_io_outputs_0_cmd_payload_fragment_opcode 
        = vlSelf->iArbiter_bmb_cmd_rData_fragment_opcode;
    vlSelf->plic_logic_bmb_rsp_payload_last = vlSelf->_zz_plic_logic_bmb_rsp_payload_last;
    vlSelf->plic_logic_bmb_rsp_payload_fragment_opcode 
        = vlSelf->_zz_plic_logic_bmb_rsp_payload_fragment_opcode;
    vlSelf->cores_0_cpu_debugRiscv_dmToHart_payload_op 
        = vlSelf->toplevel_privilegedDebug_logic_dm_io_harts_0_dmToHart_regNext_payload_op;
    vlSelf->iArbiter_bmb_decoder__DOT__io_outputs_0_cmd_payload_last 
        = vlSelf->iArbiter_bmb_cmd_rData_last;
    vlSelf->iArbiter_bmb_cmd_halfPipe_payload_last 
        = vlSelf->iArbiter_bmb_cmd_rData_last;
    vlSelf->iArbiter_bmb_decoder_io_outputs_0_cmd_payload_last 
        = vlSelf->iArbiter_bmb_cmd_rData_last;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_rsp_payload_fragment_source 
        = vlSelf->_zz_io_output_rsp_payload_fragment_source;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_rspSel 
        = vlSelf->_zz_io_output_rsp_payload_fragment_source;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.externalInterruptS 
        = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_iep_regNext;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.externalInterrupt 
        = vlSelf->cores_0_cpu_externalInterrupt_plic_target_iep_regNext;
    vlSelf->cores_0_cpu_iBus_rsp_payload_fragment_data 
        = vlSelf->_zz_cores_0_cpu_iBus_rsp_payload_fragment_data;
    vlSelf->clintWishboneBridge_logic_bridge_io_input_DAT_MISO 
        = vlSelf->clint_logic__DOT___zz_io_bus_rsp_payload_fragment_data;
    vlSelf->clint_logic__DOT__io_bus_rsp_payload_fragment_data 
        = vlSelf->clint_logic__DOT___zz_io_bus_rsp_payload_fragment_data;
    vlSelf->clintWishboneBridge_logic_bridge__DOT__io_input_DAT_MISO 
        = vlSelf->clint_logic__DOT___zz_io_bus_rsp_payload_fragment_data;
    vlSelf->clint_logic_io_bus_rsp_payload_fragment_data 
        = vlSelf->clint_logic__DOT___zz_io_bus_rsp_payload_fragment_data;
    vlSelf->clintWishbone_DAT_MISO = vlSelf->clint_logic__DOT___zz_io_bus_rsp_payload_fragment_data;
    vlSelf->cores_0_cpu_iBus_rsp_payload_fragment_opcode 
        = vlSelf->_zz_cores_0_cpu_iBus_rsp_payload_fragment_opcode;
    vlSelf->cores_0_cpu_logic_cpu_iBus_rsp_payload_error 
        = vlSelf->_zz_cores_0_cpu_iBus_rsp_payload_fragment_opcode;
    vlSelf->peripheralBridge_logic__DOT__inputCmd_payload_fragment_length 
        = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_length;
    vlSelf->peripheralBridge_logic__DOT__beatCount 
        = (0xfU & ((IData)(vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_length) 
                   >> 2U));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_bus_cmd_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_bus_cmd_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_bus_cmd_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_cmd_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_cmd_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_data;
    vlSelf->privilegedDebug_logic_dm__DOT__when_BusSlaveFactory_l379_2 
        = (1U & (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_data 
                 >> 0x1cU));
    vlSelf->privilegedDebug_logic_dm__DOT__when_BusSlaveFactory_l379_1 
        = (1U & (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_data 
                 >> 0x1eU));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSelHiNew 
        = (0x3ffU & (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_data 
                     >> 6U));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSelLoNew 
        = (0x3ffU & (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_data 
                     >> 0x10U));
    vlSelf->privilegedDebug_logic_dm__DOT__when_BusSlaveFactory_l379 
        = (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_data 
           >> 0x1fU);
    vlSelf->plicWishboneBridge_logic_bridge_io_input_DAT_MISO 
        = vlSelf->_zz_plic_logic_bmb_rsp_payload_fragment_data;
    vlSelf->plicWishboneBridge_logic_bridge__DOT__io_input_DAT_MISO 
        = vlSelf->_zz_plic_logic_bmb_rsp_payload_fragment_data;
    vlSelf->plic_logic_bmb_rsp_payload_fragment_data 
        = vlSelf->_zz_plic_logic_bmb_rsp_payload_fragment_data;
    vlSelf->plicWishbone_DAT_MISO = vlSelf->_zz_plic_logic_bmb_rsp_payload_fragment_data;
    vlSelf->clint_logic_io_timerInterrupt = vlSelf->clint_logic__DOT__logic_harts_0_timerInterrupt;
    vlSelf->clint_logic__DOT__io_timerInterrupt = vlSelf->clint_logic__DOT__logic_harts_0_timerInterrupt;
    vlSelf->cores_0_cpu_logic_cpu_timerInterrupt = vlSelf->clint_logic__DOT__logic_harts_0_timerInterrupt;
    if (vlSelf->clint_logic__DOT__when_BmbSlaveFactory_l77_2) {
        if (vlSelf->clint_logic__DOT__factory_doWrite) {
            if (vlSelf->clint_logic__DOT__when_BusSlaveFactory_l1041_1) {
                vlSelf->clint_logic__DOT__logic_harts_0_cmp 
                    = ((0xffffffffffffff00ULL & vlSelf->clint_logic__DOT__logic_harts_0_cmp) 
                       | (IData)((IData)((0xffU & vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_data))));
            }
            if (vlSelf->clint_logic__DOT__when_BusSlaveFactory_l1041_2) {
                vlSelf->clint_logic__DOT__logic_harts_0_cmp 
                    = ((0xffffffffffff00ffULL & vlSelf->clint_logic__DOT__logic_harts_0_cmp) 
                       | ((QData)((IData)((0xffU & 
                                           (vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_data 
                                            >> 8U)))) 
                          << 8U));
            }
            if (vlSelf->clint_logic__DOT__when_BusSlaveFactory_l1041_3) {
                vlSelf->clint_logic__DOT__logic_harts_0_cmp 
                    = ((0xffffffffff00ffffULL & vlSelf->clint_logic__DOT__logic_harts_0_cmp) 
                       | ((QData)((IData)((0xffU & 
                                           (vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_data 
                                            >> 0x10U)))) 
                          << 0x10U));
            }
            if (vlSelf->clint_logic__DOT__when_BusSlaveFactory_l1041_4) {
                vlSelf->clint_logic__DOT__logic_harts_0_cmp 
                    = ((0xffffffff00ffffffULL & vlSelf->clint_logic__DOT__logic_harts_0_cmp) 
                       | ((QData)((IData)((vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_data 
                                           >> 0x18U))) 
                          << 0x18U));
            }
        }
    }
    if (vlSelf->clint_logic__DOT__when_BmbSlaveFactory_l77_3) {
        if (vlSelf->clint_logic__DOT__factory_doWrite) {
            if (vlSelf->clint_logic__DOT__when_BusSlaveFactory_l1041_5) {
                vlSelf->clint_logic__DOT__logic_harts_0_cmp 
                    = ((0xffffff00ffffffffULL & vlSelf->clint_logic__DOT__logic_harts_0_cmp) 
                       | ((QData)((IData)((0xffU & vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_data))) 
                          << 0x20U));
            }
            if (vlSelf->clint_logic__DOT__when_BusSlaveFactory_l1041_6) {
                vlSelf->clint_logic__DOT__logic_harts_0_cmp 
                    = ((0xffff00ffffffffffULL & vlSelf->clint_logic__DOT__logic_harts_0_cmp) 
                       | ((QData)((IData)((0xffU & 
                                           (vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_data 
                                            >> 8U)))) 
                          << 0x28U));
            }
            if (vlSelf->clint_logic__DOT__when_BusSlaveFactory_l1041_7) {
                vlSelf->clint_logic__DOT__logic_harts_0_cmp 
                    = ((0xff00ffffffffffffULL & vlSelf->clint_logic__DOT__logic_harts_0_cmp) 
                       | ((QData)((IData)((0xffU & 
                                           (vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_data 
                                            >> 0x10U)))) 
                          << 0x30U));
            }
            if (vlSelf->clint_logic__DOT__when_BusSlaveFactory_l1041_8) {
                vlSelf->clint_logic__DOT__logic_harts_0_cmp 
                    = ((0xffffffffffffffULL & vlSelf->clint_logic__DOT__logic_harts_0_cmp) 
                       | ((QData)((IData)((vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_data 
                                           >> 0x18U))) 
                          << 0x38U));
            }
        }
    }
    vlSelf->privilegedDebug_logic_dm_io_harts_0_ackReset 
        = vlSelf->privilegedDebug_logic_dm__DOT___zz_io_harts_0_ackReset;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_ackReset 
        = vlSelf->privilegedDebug_logic_dm__DOT___zz_io_harts_0_ackReset;
    vlSelf->cores_0_cpu_debugRiscv_ackReset = vlSelf->privilegedDebug_logic_dm__DOT___zz_io_harts_0_ackReset;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_bus_cmd_payload_write 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_write;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_bus_cmd_payload_write 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_write;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_bus_cmd_payload_write 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_write;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_cmd_payload_write 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_write;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_cmd_payload_write 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_write;
    vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_write 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_write;
    vlSelf->peripheralBridge_logic_io_output_DAT_MOSI 
        = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_data;
    vlSelf->peripheralBridge_logic__DOT__io_output_DAT_MOSI 
        = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_data;
    vlSelf->peripheralBridge_logic__DOT__inputCmd_payload_fragment_data 
        = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_data;
    vlSelf->peripheral_DAT_MOSI = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_bus_cmd_payload_address 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_address;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_bus_cmd_payload_address 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_address;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_bus_cmd_payload_address 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_address;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_cmd_payload_address 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_address;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_cmd_payload_address 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_address;
    vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_progbufX_mem_port 
        = (1U & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rData_address));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_args_regno 
        = (0xffffU & vlSelf->privilegedDebug_logic_dm__DOT__logic_command_data);
    vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_command_access_args_regno 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_command_data;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_args_postExec 
        = (1U & (vlSelf->privilegedDebug_logic_dm__DOT__logic_command_data 
                 >> 0x12U));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_args_write 
        = (1U & (vlSelf->privilegedDebug_logic_dm__DOT__logic_command_data 
                 >> 0x10U));
    vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_toHarts_payload_data_1 
        = (0xf8000U & (vlSelf->privilegedDebug_logic_dm__DOT__logic_command_data 
                       << 0xfU));
    vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_toHarts_payload_data_3 
        = (0xf80U & (vlSelf->privilegedDebug_logic_dm__DOT__logic_command_data 
                     << 7U));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_args_aarpostincrement 
        = (1U & (vlSelf->privilegedDebug_logic_dm__DOT__logic_command_data 
                 >> 0x13U));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_args_aarsize 
        = (7U & (vlSelf->privilegedDebug_logic_dm__DOT__logic_command_data 
                 >> 0x14U));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_args_transfer 
        = (1U & (vlSelf->privilegedDebug_logic_dm__DOT__logic_command_data 
                 >> 0x11U));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_transferFloat 
        = (1U & (vlSelf->privilegedDebug_logic_dm__DOT__logic_command_data 
                 >> 5U));
    vlSelf->peripheralBridge_logic__DOT__inputCmd_payload_fragment_mask 
        = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_mask;
    if (vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_opcode) {
        vlSelf->peripheralBridge_logic_io_output_WE = 1U;
        vlSelf->peripheralBridge_logic__DOT__io_output_WE = 1U;
        vlSelf->peripheralBridge_logic__DOT__inputCmd_payload_fragment_opcode = 1U;
        vlSelf->peripheral_SEL = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_mask;
        vlSelf->peripheral_WE = 1U;
    } else {
        vlSelf->peripheralBridge_logic_io_output_WE = 0U;
        vlSelf->peripheralBridge_logic__DOT__io_output_WE = 0U;
        vlSelf->peripheralBridge_logic__DOT__inputCmd_payload_fragment_opcode = 0U;
        vlSelf->peripheral_SEL = 0xfU;
        vlSelf->peripheral_WE = 0U;
    }
    vlSelf->peripheralBridge_logic__DOT__inputCmd_payload_fragment_address 
        = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_address;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_dmToHart_payload_size 
        = vlSelf->cores_0_cpu_debugRiscv_dmToHart_payload_size;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_dmToHart_payload_data 
        = vlSelf->cores_0_cpu_debugRiscv_dmToHart_payload_data;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_dmToHart_payload_address 
        = vlSelf->cores_0_cpu_debugRiscv_dmToHart_payload_address;
    vlSelf->peripheralBridge_logic__DOT__io_input_cmd_payload_fragment_context 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_context;
    vlSelf->peripheralBridge_logic__DOT__io_input_cmd_payload_fragment_mask 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_mask;
    vlSelf->peripheralBridge_logic__DOT__io_input_cmd_payload_fragment_data 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_data;
    vlSelf->peripheralBridge_logic__DOT__io_input_cmd_payload_fragment_source 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_source;
    vlSelf->peripheralBridge_logic__DOT__io_input_cmd_payload_last 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_last;
    vlSelf->peripheralBridge_logic__DOT__io_input_cmd_payload_fragment_opcode 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_opcode;
    vlSelf->peripheralBridge_logic__DOT__io_input_cmd_payload_fragment_address 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_address;
    vlSelf->peripheralBridge_logic__DOT__io_input_cmd_payload_fragment_length 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_payload_fragment_length;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__io_input_payload_error 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_payload_error;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_bus_rsp_payload_error 
        = vlSelf->privilegedDebug_logic_dm_io_ctrl_rsp_payload_error;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__io_input_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_payload_data;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_bus_rsp_payload_data 
        = vlSelf->privilegedDebug_logic_dm_io_ctrl_rsp_payload_data;
    vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_rsp_payload_last 
        = vlSelf->clint_logic_io_bus_rsp_payload_last;
    vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_rsp_payload_fragment_opcode 
        = vlSelf->clint_logic_io_bus_rsp_payload_fragment_opcode;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.dBus_rsp_payload_last 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_payload_last;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.dBus_rsp_payload_data 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_payload_fragment_data;
    vlSelf->iArbiter_bmb_decoder__DOT__io_outputs_0_rsp_payload_fragment_data 
        = vlSelf->peripheralBridge_bmb_arbiter_io_inputs_1_rsp_payload_fragment_data;
    vlSelf->iArbiter_bmb_decoder__DOT__io_outputs_0_rsp_payload_fragment_opcode 
        = vlSelf->peripheralBridge_bmb_arbiter_io_inputs_1_rsp_payload_fragment_opcode;
    vlSelf->iArbiter_bmb_decoder__DOT__io_outputs_0_rsp_payload_last 
        = vlSelf->peripheralBridge_bmb_arbiter_io_inputs_1_rsp_payload_last;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_payload_fragment_data 
        = vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_payload_fragment_data;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_payload_fragment_mask 
        = vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_payload_fragment_mask;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_payload_fragment_context 
        = vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_payload_fragment_context;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_payload_fragment_address 
        = vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_payload_fragment_address;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_payload_fragment_opcode 
        = vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_payload_fragment_opcode;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_payload_fragment_length 
        = vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_payload_fragment_length;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_payload_last 
        = vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_payload_last;
    vlSelf->iArbiter_bmb_decoder__DOT__io_input_cmd_payload_fragment_length 
        = vlSelf->iArbiter_bmb_cmd_halfPipe_payload_fragment_length;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_cmd_payload_fragment_length 
        = vlSelf->iArbiter_bmb_decoder_io_outputs_0_cmd_payload_fragment_length;
    vlSelf->iArbiter_bmb_decoder__DOT__io_input_cmd_payload_fragment_address 
        = vlSelf->iArbiter_bmb_cmd_halfPipe_payload_fragment_address;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_cmd_payload_fragment_address 
        = vlSelf->iArbiter_bmb_decoder_io_outputs_0_cmd_payload_fragment_address;
    vlSelf->iArbiter_bmb_decoder__DOT__io_input_cmd_payload_fragment_opcode 
        = vlSelf->iArbiter_bmb_cmd_halfPipe_payload_fragment_opcode;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_cmd_payload_fragment_opcode 
        = vlSelf->iArbiter_bmb_decoder_io_outputs_0_cmd_payload_fragment_opcode;
    vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_rsp_payload_last 
        = vlSelf->plic_logic_bmb_rsp_payload_last;
    vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_rsp_payload_fragment_opcode 
        = vlSelf->plic_logic_bmb_rsp_payload_fragment_opcode;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_dmToHart_payload_op 
        = vlSelf->cores_0_cpu_debugRiscv_dmToHart_payload_op;
    vlSelf->iArbiter_bmb_decoder__DOT__io_input_cmd_payload_last 
        = vlSelf->iArbiter_bmb_cmd_halfPipe_payload_last;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_cmd_payload_last 
        = vlSelf->iArbiter_bmb_decoder_io_outputs_0_cmd_payload_last;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.iBus_rsp_payload_data 
        = vlSelf->cores_0_cpu_iBus_rsp_payload_fragment_data;
    vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_rsp_payload_fragment_data 
        = vlSelf->clint_logic_io_bus_rsp_payload_fragment_data;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSelNew 
        = (((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSelHiNew) 
            << 0xaU) | (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSelLoNew));
    vlSelf->privilegedDebug_logic_dm__DOT__when_BusSlaveFactory_l393 
        = (1U & (~ (IData)(vlSelf->privilegedDebug_logic_dm__DOT__when_BusSlaveFactory_l379)));
    vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_rsp_payload_fragment_data 
        = vlSelf->plic_logic_bmb_rsp_payload_fragment_data;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.timerInterrupt 
        = vlSelf->cores_0_cpu_logic_cpu_timerInterrupt;
    vlSelf->privilegedDebug_logic_dm__DOT__io_ctrl_cmd_payload_write 
        = vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_write;
    vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_abstractAuto_trigger 
        = vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_progbufX_mem_port;
    vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_toHarts_payload_data 
        = vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_toHarts_payload_data_1;
    vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_toHarts_payload_data_2 
        = vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_toHarts_payload_data_3;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_size = 0U;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_size 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_args_aarsize;
    vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l296 
        = (1U & (~ (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_transferFloat)));
    vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_command_access_notSupported_1 
        = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_transferFloat)
            ? 0U : (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSelAarsizeLimit));
    vlSelf->peripheralBridge_logic_io_output_SEL = vlSelf->peripheral_SEL;
    vlSelf->peripheralBridge_logic__DOT__io_output_SEL 
        = vlSelf->peripheral_SEL;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_bus_rsp_payload_error 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_bus_rsp_payload_error;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_bus_rsp_payload_data 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_bus_rsp_payload_data;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_0_payload_fragment_data 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_payload_fragment_data;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_0_payload_fragment_mask 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_payload_fragment_mask;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_0_payload_fragment_context 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_payload_fragment_context;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_0_payload_fragment_address 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_payload_fragment_address;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_0_payload_fragment_opcode 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_payload_fragment_opcode;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_0_payload_fragment_length 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_payload_fragment_length;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_0_payload_last 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_payload_last;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_1_payload_fragment_length 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_cmd_payload_fragment_length;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_1_payload_fragment_address 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_cmd_payload_fragment_address;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_1_payload_fragment_opcode 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_cmd_payload_fragment_opcode;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_1_payload_last 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_cmd_payload_last;
    vlSelf->privilegedDebug_logic_dm_io_harts_0_dmToHart_payload_size 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_size;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_dmToHart_payload_size 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_size;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_takeWhen_payload_size 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_toHarts_payload_size;
    vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_command_access_notSupported 
        = vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_command_access_notSupported_1;
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__4(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__4\n"); );
    // Body
    vlSelf->__Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target;
    if (vlSelf->debugCd_logic_outputReset) {
        vlSelf->__Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target = 0U;
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rValid = 0U;
    } else {
        if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_valid) {
            vlSelf->__Vdly__privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target 
                = (1U & (~ (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__inputArea_target)));
        }
        if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_ready) {
            vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rValid 
                = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_valid;
        }
    }
    vlSelf->privilegedDebug_logic_dm__DOT__factory_rspBuffer_valid 
        = ((1U & (~ (IData)(vlSelf->debugCd_logic_outputReset))) 
           && (IData)(vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_valid));
    vlSelf->toplevel_privilegedDebug_logic_dm_io_harts_0_dmToHart_regNext_valid 
        = ((1U & (~ (IData)(vlSelf->debugCd_logic_outputReset))) 
           && (IData)(vlSelf->privilegedDebug_logic_dm_io_harts_0_dmToHart_valid));
    vlSelf->bufferCC_8__DOT__buffers_1 = ((IData)(vlSelf->debugCd_logic_outputReset) 
                                          || (IData)(vlSelf->bufferCC_8__DOT__buffers_0));
    vlSelf->privilegedDebug_logic_dm__DOT__io_ctrl_rsp_valid 
        = vlSelf->privilegedDebug_logic_dm__DOT__factory_rspBuffer_valid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_valid 
        = vlSelf->privilegedDebug_logic_dm__DOT__factory_rspBuffer_valid;
    vlSelf->privilegedDebug_logic_dm_io_ctrl_rsp_valid 
        = vlSelf->privilegedDebug_logic_dm__DOT__factory_rspBuffer_valid;
    vlSelf->cores_0_cpu_debugRiscv_dmToHart_valid = vlSelf->toplevel_privilegedDebug_logic_dm_io_harts_0_dmToHart_regNext_valid;
    vlSelf->bufferCC_8_io_dataOut = vlSelf->bufferCC_8__DOT__buffers_1;
    vlSelf->bufferCC_8__DOT__io_dataOut = vlSelf->bufferCC_8__DOT__buffers_1;
    vlSelf->systemCd_logic_inputResetAdapter_stuff_syncTrigger 
        = vlSelf->bufferCC_8__DOT__buffers_1;
    vlSelf->bufferCC_8__DOT__buffers_0 = ((IData)(vlSelf->debugCd_logic_outputReset) 
                                          || (IData)(vlSelf->bufferCC_8_io_dataIn));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_bus_cmd_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rValid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel_io_bus_cmd_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rValid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_bus_cmd_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rValid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_cmd_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rValid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_cmd_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rValid;
    vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rValid;
    vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_valid 
        = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__io_ctrl_cmd_ready) 
           & (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rValid));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__when_Stream_l372 
        = (1U & (~ (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_rValid)));
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__io_input_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_valid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_bus_rsp_valid 
        = vlSelf->privilegedDebug_logic_dm_io_ctrl_rsp_valid;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_dmToHart_valid 
        = vlSelf->cores_0_cpu_debugRiscv_dmToHart_valid;
    vlSelf->privilegedDebug_logic_dm__DOT__io_ctrl_cmd_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_valid;
    vlSelf->privilegedDebug_logic_dm__DOT__io_ctrl_cmd_fire 
        = vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_valid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_ready 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_cmd_ready;
    if (vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__when_Stream_l372) {
        vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_ready = 1U;
    }
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__io_bus_rsp_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__io_bus_rsp_valid;
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__5(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__5\n"); );
    // Body
    vlSelf->cores_0_cpu_logic_cpu_stoptime = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.stoptime;
    vlSelf->cores_0_cpu_logic_cpu_dBus_cmd_valid = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.dBus_cmd_valid;
    vlSelf->cores_0_cpu_logic_cpu_iBus_cmd_valid = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.iBus_cmd_valid;
    vlSelf->cores_0_cpu_logic_cpu_debugBus_haveReset 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_haveReset;
    vlSelf->cores_0_cpu_logic_cpu_debugBus_running 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_running;
    vlSelf->cores_0_cpu_logic_cpu_debugBus_resume_rsp_valid 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_resume_rsp_valid;
    vlSelf->cores_0_cpu_logic_cpu_debugBus_halted = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_halted;
    vlSelf->cores_0_cpu_logic_cpu_debugBus_redo = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_redo;
    vlSelf->privilegedDebug_logic_clintStop = vlSelf->cores_0_cpu_logic_cpu_stoptime;
    vlSelf->cores_0_cpu_debugRiscv_haveReset = vlSelf->cores_0_cpu_logic_cpu_debugBus_haveReset;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_selected_running 
        = vlSelf->cores_0_cpu_logic_cpu_debugBus_running;
    vlSelf->cores_0_cpu_debugRiscv_running = vlSelf->cores_0_cpu_logic_cpu_debugBus_running;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_selected_halted 
        = vlSelf->cores_0_cpu_logic_cpu_debugBus_halted;
    vlSelf->cores_0_cpu_debugRiscv_halted = vlSelf->cores_0_cpu_logic_cpu_debugBus_halted;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_selected_redo 
        = vlSelf->cores_0_cpu_logic_cpu_debugBus_redo;
    vlSelf->cores_0_cpu_debugRiscv_redo = vlSelf->cores_0_cpu_logic_cpu_debugBus_redo;
    if (vlSelf->privilegedDebug_logic_clintStop) {
        vlSelf->clint_logic__DOT__io_stop = 1U;
        vlSelf->clint_logic__DOT__logic_stop = 0U;
        vlSelf->clint_logic__DOT__logic_stop = 1U;
    } else {
        vlSelf->clint_logic__DOT__io_stop = 0U;
        vlSelf->clint_logic__DOT__logic_stop = 0U;
    }
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_haveReset 
        = vlSelf->cores_0_cpu_debugRiscv_haveReset;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_running 
        = vlSelf->cores_0_cpu_debugRiscv_running;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_halted 
        = vlSelf->cores_0_cpu_debugRiscv_halted;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_redo 
        = vlSelf->cores_0_cpu_debugRiscv_redo;
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__6(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__6\n"); );
    // Init
    CData/*2:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    if (vlSelf->privilegedDebug_logic_dm__DOT__dmactive) {
        if (vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l102) {
            vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_harts_0_haltReq 
                = (((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_harts_0_haltReq) 
                    | (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_haltSet)) 
                   & (~ (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_haltClear)));
        }
        if (vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_resume_cmd_valid) {
            vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_harts_0_resumeReady_1 = 1U;
            vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_harts_0_resumeReady = 1U;
        }
        if (vlSelf->cores_0_cpu_debugRiscv_resume_rsp_valid) {
            vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_harts_0_resumeReady = 0U;
        }
        if ((0x10U == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address))) {
            if (vlSelf->privilegedDebug_logic_dm__DOT__factory_doWrite) {
                vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_ndmreset 
                    = (1U & (vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_data 
                             >> 1U));
                vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSelLo 
                    = (0x3ffU & (vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_data 
                                 >> 0x10U));
                vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSelHi 
                    = (0x3ffU & (vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_data 
                                 >> 6U));
            }
        }
        if ((0x10U != (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address))) {
            if ((0x18U == (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address))) {
                if (vlSelf->privilegedDebug_logic_dm__DOT__factory_doWrite) {
                    vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractAuto_autoexecProgbuf 
                        = (3U & (vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_data 
                                 >> 0x10U));
                    vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractAuto_autoexecdata 
                        = (1U & vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_data);
                }
            }
        }
        if (vlSelf->privilegedDebug_logic_dm__DOT__when_BusSlaveFactory_l341) {
            vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_cmdErr 
                = vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_abstractcs_cmdErr;
        }
        if (vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l260) {
            vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_cmdErr = 1U;
        }
        if (vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l263) {
            vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_cmdErr = 3U;
        }
        if (vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l266) {
            vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_cmdErr = 1U;
        }
        if ((1U & (~ ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg))) {
                if ((1U & (~ (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg)))) {
                    if ((0U == (IData)(vlSelf->privilegedDebug_logic_dm__DOT__switch_DebugModule_l287))) {
                        if (vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_notSupported) {
                            vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_cmdErr = 2U;
                        }
                    } else {
                        vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_cmdErr = 2U;
                    }
                }
            } else if ((1U & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg))) {
                if (vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l275) {
                    if (vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l276) {
                        vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_cmdErr = 4U;
                    } else {
                        vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_busy = 1U;
                    }
                }
            }
        }
        if (vlSelf->privilegedDebug_logic_dm__DOT__when_StateMachine_l253) {
            vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_busy = 0U;
        }
        vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg 
            = vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateNext;
    } else {
        vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_harts_0_haltReq = 0U;
        vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_harts_0_resumeReady_1 = 0U;
        vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_harts_0_resumeReady = 0U;
        vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_ndmreset = 0U;
        vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractAuto_autoexecProgbuf = 0U;
        vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractAuto_autoexecdata = 0U;
        vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_cmdErr = 0U;
        vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_busy = 0U;
        vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSelLo = 0U;
        vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSelHi = 0U;
        vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg = 0U;
    }
    vlSelf->privilegedDebug_logic_dm_io_harts_0_haltReq 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_harts_0_haltReq;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_haltReq 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_harts_0_haltReq;
    vlSelf->cores_0_cpu_debugRiscv_haltReq = vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_harts_0_haltReq;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_resumeReady 
        = ((~ (IData)(vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_harts_0_resumeReady)) 
           & (IData)(vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_harts_0_resumeReady_1));
    vlSelf->privilegedDebug_logic_dm_io_ndmreset = vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_ndmreset;
    vlSelf->privilegedDebug_logic_dm__DOT__io_ndmreset 
        = vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_ndmreset;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_noError 
        = (0U == (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_abstractcs_cmdErr));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSel 
        = (((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSelHi) 
            << 0xaU) | (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSelLo));
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_haltReq 
        = vlSelf->cores_0_cpu_debugRiscv_haltReq;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_anyNonExistent 
        = (1U <= vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSel);
    vlSelf->privilegedDebug_logic_dm__DOT___zz_when_DebugModule_l143 
        = (0x7fffU & (vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSel 
                      >> 5U));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_sel 
        = (0U == vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSel);
    __Vtableidx5 = vlSelf->privilegedDebug_logic_dm__DOT__logic_command_stateReg;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_command_wantStart 
        = Vsonata__ConstPool__TABLE_ha8c1a675_0[__Vtableidx5];
    vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l143 
        = (0U == (IData)(vlSelf->privilegedDebug_logic_dm__DOT___zz_when_DebugModule_l143));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_allResumeAck 
        = (1U & ((~ (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_sel)) 
                 | (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_resumeReady)));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_dmstatus_anyResumeAck 
        = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_sel) 
           & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_harts_0_resumeReady));
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__7(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__7\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_0;
    __VdfgRegularize_h09b8325e_1_0 = 0;
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_1;
    __VdfgRegularize_h09b8325e_1_1 = 0;
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_2;
    __VdfgRegularize_h09b8325e_1_2 = 0;
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_3;
    __VdfgRegularize_h09b8325e_1_3 = 0;
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_4;
    __VdfgRegularize_h09b8325e_1_4 = 0;
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_5;
    __VdfgRegularize_h09b8325e_1_5 = 0;
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_6;
    __VdfgRegularize_h09b8325e_1_6 = 0;
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_7;
    __VdfgRegularize_h09b8325e_1_7 = 0;
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_8;
    __VdfgRegularize_h09b8325e_1_8 = 0;
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_9;
    __VdfgRegularize_h09b8325e_1_9 = 0;
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_10;
    __VdfgRegularize_h09b8325e_1_10 = 0;
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_11;
    __VdfgRegularize_h09b8325e_1_11 = 0;
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_12;
    __VdfgRegularize_h09b8325e_1_12 = 0;
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_13;
    __VdfgRegularize_h09b8325e_1_13 = 0;
    CData/*0:0*/ __VdfgRegularize_h09b8325e_1_14;
    __VdfgRegularize_h09b8325e_1_14 = 0;
    QData/*63:0*/ __Vdly__clint_logic__DOT__logic_time;
    __Vdly__clint_logic__DOT__logic_time = 0;
    CData/*3:0*/ __Vdly__peripheralBridge_logic__DOT__beatCounter;
    __Vdly__peripheralBridge_logic__DOT__beatCounter = 0;
    // Body
    __Vdly__clint_logic__DOT__logic_time = vlSelf->clint_logic__DOT__logic_time;
    __Vdly__peripheralBridge_logic__DOT__beatCounter 
        = vlSelf->peripheralBridge_logic__DOT__beatCounter;
    if (vlSelf->systemCd_logic_outputReset) {
        __Vdly__clint_logic__DOT__logic_time = 0ULL;
        __Vdly__peripheralBridge_logic__DOT__beatCounter = 0U;
        vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rValid = 0U;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rValid = 0U;
        vlSelf->cores_0_cpu_iBus_cmd_rValid = 0U;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rValid = 0U;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rValid = 0U;
        vlSelf->clint_logic__DOT__logic_harts_0_softwareInterrupt = 0U;
        vlSelf->_zz_when_Stream_l372_1 = 0U;
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rValidN = 1U;
        vlSelf->dBusCoherent_bmb_cmd_rValidN = 1U;
        vlSelf->dBusNonCoherent_bmb_cmd_rValidN = 1U;
        vlSelf->_zz_when_PlicGateway_l21_61 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_59 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_25 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_23 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_21 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_19 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_17 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_15 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_13 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_1 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_3 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_5 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_7 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_9 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_11 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_29 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_31 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_33 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_35 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_27 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_39 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_41 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_43 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_45 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_37 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_49 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_51 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_53 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_55 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_47 = 0U;
        vlSelf->_zz_when_PlicGateway_l21_57 = 0U;
        vlSelf->_zz_dBusNonCoherent_bmb_rsp_valid_1 = 0U;
        vlSelf->_zz_iArbiter_bmb_rsp_valid_1 = 0U;
        vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_valid_1 = 0U;
        vlSelf->clintWishboneBridge_logic_bridge__DOT___zz_io_output_cmd_valid = 0U;
        vlSelf->plicWishboneBridge_logic_bridge__DOT___zz_io_output_cmd_valid = 0U;
        vlSelf->clint_logic__DOT___zz_io_bus_rsp_valid_1 = 0U;
        vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__locked = 0U;
        vlSelf->_zz_cores_0_cpu_iBus_rsp_valid_1 = 0U;
        vlSelf->_zz_plic_logic_bmb_rsp_valid_1 = 0U;
        vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__maskLocked_1 = 1U;
        vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__maskLocked_0 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_threshold = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_threshold = 0U;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rValid = 0U;
        vlSelf->iArbiter_bmb_cmd_rValid = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_29 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_28 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_27 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_26 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_25 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_24 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_22 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_21 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_20 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_19 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_18 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_17 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_16 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_14 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_13 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_12 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_11 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_10 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_9 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_8 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_6 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_5 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_4 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_3 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_2 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_1 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_30 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_1 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_2 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_3 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_4 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_5 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_6 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_7 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_8 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_9 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_10 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_11 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_12 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_13 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_14 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_15 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_16 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_17 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_18 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_19 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_20 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_21 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_22 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_23 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_24 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_25 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_26 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_27 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_28 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_29 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_30 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_0 = 0U;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_0 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_23 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_15 = 0U;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_7 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_61 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_59 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_27 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_25 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_21 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_19 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_17 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_15 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_13 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_9 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_5 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_7 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_11 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_3 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_29 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_31 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_23 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_35 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_37 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_39 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_41 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_33 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_45 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_47 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_49 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_51 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_43 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_53 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_55 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_57 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_1 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_92 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_91 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_90 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_89 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_88 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_87 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_86 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_85 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_84 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_82 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_81 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_80 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_79 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_78 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_77 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_76 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_75 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_74 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_73 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_72 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_71 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_70 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_69 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_68 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_67 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_66 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_65 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_64 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_63 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_83 = 0U;
        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_62 = 0U;
        vlSelf->peripheralBridge_logic__DOT__rsp_rValidN = 1U;
        vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rValid = 0U;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rValidN = 1U;
    } else {
        if (vlSelf->clint_logic__DOT__when_Clint_l39) {
            __Vdly__clint_logic__DOT__logic_time = 
                (1ULL + vlSelf->clint_logic__DOT__logic_time);
        }
        if (vlSelf->peripheralBridge_logic__DOT__when_BmbToWishbone_l29) {
            __Vdly__peripheralBridge_logic__DOT__beatCounter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->peripheralBridge_logic__DOT__beatCounter)));
            if (vlSelf->peripheralBridge_logic__DOT__when_BmbToWishbone_l31) {
                __Vdly__peripheralBridge_logic__DOT__beatCounter = 0U;
            }
        }
        if (vlSelf->cores_0_cpu_iBus_cmd_valid) {
            vlSelf->cores_0_cpu_iBus_cmd_rValid = 1U;
        }
        if (vlSelf->cores_0_cpu_iBus_cmd_halfPipe_fire) {
            vlSelf->cores_0_cpu_iBus_cmd_rValid = 0U;
        }
        if ((0U == (IData)(vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_address))) {
            if (vlSelf->clint_logic__DOT__factory_doWrite) {
                if (vlSelf->clint_logic__DOT__when_BusSlaveFactory_l1041) {
                    vlSelf->clint_logic__DOT__logic_harts_0_softwareInterrupt 
                        = (1U & vlSelf->clintWishboneBridge_logic_bridge_io_output_cmd_payload_fragment_data);
                }
            }
        }
        if (vlSelf->_zz_io_input_rsp_ready_1) {
            vlSelf->_zz_when_Stream_l372_1 = vlSelf->peripheralBridge_logic_io_input_rsp_valid;
        }
        if (vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_valid) {
            vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rValidN = 0U;
        }
        if (vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_ready) {
            vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rValid 
                = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_valid;
            vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rValidN = 1U;
        }
        if (vlSelf->dBusCoherent_bmb_cmd_valid) {
            vlSelf->dBusCoherent_bmb_cmd_rValidN = 0U;
        }
        if (vlSelf->dBusCoherent_bmb_cmd_s2mPipe_ready) {
            vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rValid 
                = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_valid;
            vlSelf->dBusCoherent_bmb_cmd_rValidN = 1U;
        }
        if (vlSelf->dBusNonCoherent_bmb_cmd_valid) {
            vlSelf->dBusNonCoherent_bmb_cmd_rValidN = 0U;
        }
        if (vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_ready) {
            vlSelf->dBusNonCoherent_bmb_cmd_rValidN = 1U;
            vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rValid 
                = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_valid;
        }
        if (vlSelf->when_PlicGateway_l21_30) {
            vlSelf->_zz_when_PlicGateway_l21_61 = vlSelf->_zz_when_PlicGateway_l21_60;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_61 
                = vlSelf->_zz_when_PlicGateway_l21_60;
        }
        if (vlSelf->when_PlicGateway_l21_29) {
            vlSelf->_zz_when_PlicGateway_l21_59 = vlSelf->_zz_when_PlicGateway_l21_58;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_59 
                = vlSelf->_zz_when_PlicGateway_l21_58;
        }
        if (vlSelf->when_PlicGateway_l21_12) {
            vlSelf->_zz_when_PlicGateway_l21_25 = vlSelf->_zz_when_PlicGateway_l21_24;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_25 
                = vlSelf->_zz_when_PlicGateway_l21_24;
        }
        if (vlSelf->when_PlicGateway_l21_11) {
            vlSelf->_zz_when_PlicGateway_l21_23 = vlSelf->_zz_when_PlicGateway_l21_22;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_23 
                = vlSelf->_zz_when_PlicGateway_l21_22;
        }
        if (vlSelf->when_PlicGateway_l21_10) {
            vlSelf->_zz_when_PlicGateway_l21_21 = vlSelf->_zz_when_PlicGateway_l21_20;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_21 
                = vlSelf->_zz_when_PlicGateway_l21_20;
        }
        if (vlSelf->when_PlicGateway_l21_9) {
            vlSelf->_zz_when_PlicGateway_l21_19 = vlSelf->_zz_when_PlicGateway_l21_18;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_19 
                = vlSelf->_zz_when_PlicGateway_l21_18;
        }
        if (vlSelf->when_PlicGateway_l21_8) {
            vlSelf->_zz_when_PlicGateway_l21_17 = vlSelf->_zz_when_PlicGateway_l21_16;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_17 
                = vlSelf->_zz_when_PlicGateway_l21_16;
        }
        if (vlSelf->when_PlicGateway_l21_7) {
            vlSelf->_zz_when_PlicGateway_l21_15 = vlSelf->_zz_when_PlicGateway_l21_14;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_15 
                = vlSelf->_zz_when_PlicGateway_l21_14;
        }
        if (vlSelf->when_PlicGateway_l21_6) {
            vlSelf->_zz_when_PlicGateway_l21_13 = vlSelf->_zz_when_PlicGateway_l21_12;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_13 
                = vlSelf->_zz_when_PlicGateway_l21_12;
        }
        if (vlSelf->when_PlicGateway_l21) {
            vlSelf->_zz_when_PlicGateway_l21_1 = vlSelf->_zz_when_PlicGateway_l21;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_1 
                = vlSelf->_zz_when_PlicGateway_l21;
        }
        if (vlSelf->when_PlicGateway_l21_1) {
            vlSelf->_zz_when_PlicGateway_l21_3 = vlSelf->_zz_when_PlicGateway_l21_2;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_3 
                = vlSelf->_zz_when_PlicGateway_l21_2;
        }
        if (vlSelf->when_PlicGateway_l21_2) {
            vlSelf->_zz_when_PlicGateway_l21_5 = vlSelf->_zz_when_PlicGateway_l21_4;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_5 
                = vlSelf->_zz_when_PlicGateway_l21_4;
        }
        if (vlSelf->when_PlicGateway_l21_3) {
            vlSelf->_zz_when_PlicGateway_l21_7 = vlSelf->_zz_when_PlicGateway_l21_6;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_7 
                = vlSelf->_zz_when_PlicGateway_l21_6;
        }
        if (vlSelf->when_PlicGateway_l21_4) {
            vlSelf->_zz_when_PlicGateway_l21_9 = vlSelf->_zz_when_PlicGateway_l21_8;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_9 
                = vlSelf->_zz_when_PlicGateway_l21_8;
        }
        if (vlSelf->when_PlicGateway_l21_5) {
            vlSelf->_zz_when_PlicGateway_l21_11 = vlSelf->_zz_when_PlicGateway_l21_10;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_11 
                = vlSelf->_zz_when_PlicGateway_l21_10;
        }
        if (vlSelf->when_PlicGateway_l21_14) {
            vlSelf->_zz_when_PlicGateway_l21_29 = vlSelf->_zz_when_PlicGateway_l21_28;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_29 
                = vlSelf->_zz_when_PlicGateway_l21_28;
        }
        if (vlSelf->when_PlicGateway_l21_15) {
            vlSelf->_zz_when_PlicGateway_l21_31 = vlSelf->_zz_when_PlicGateway_l21_30;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_31 
                = vlSelf->_zz_when_PlicGateway_l21_30;
        }
        if (vlSelf->when_PlicGateway_l21_16) {
            vlSelf->_zz_when_PlicGateway_l21_33 = vlSelf->_zz_when_PlicGateway_l21_32;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_33 
                = vlSelf->_zz_when_PlicGateway_l21_32;
        }
        if (vlSelf->when_PlicGateway_l21_17) {
            vlSelf->_zz_when_PlicGateway_l21_35 = vlSelf->_zz_when_PlicGateway_l21_34;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_35 
                = vlSelf->_zz_when_PlicGateway_l21_34;
        }
        if (vlSelf->when_PlicGateway_l21_13) {
            vlSelf->_zz_when_PlicGateway_l21_27 = vlSelf->_zz_when_PlicGateway_l21_26;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_27 
                = vlSelf->_zz_when_PlicGateway_l21_26;
        }
        if (vlSelf->when_PlicGateway_l21_19) {
            vlSelf->_zz_when_PlicGateway_l21_39 = vlSelf->_zz_when_PlicGateway_l21_38;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_39 
                = vlSelf->_zz_when_PlicGateway_l21_38;
        }
        if (vlSelf->when_PlicGateway_l21_20) {
            vlSelf->_zz_when_PlicGateway_l21_41 = vlSelf->_zz_when_PlicGateway_l21_40;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_41 
                = vlSelf->_zz_when_PlicGateway_l21_40;
        }
        if (vlSelf->when_PlicGateway_l21_21) {
            vlSelf->_zz_when_PlicGateway_l21_43 = vlSelf->_zz_when_PlicGateway_l21_42;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_43 
                = vlSelf->_zz_when_PlicGateway_l21_42;
        }
        if (vlSelf->when_PlicGateway_l21_22) {
            vlSelf->_zz_when_PlicGateway_l21_45 = vlSelf->_zz_when_PlicGateway_l21_44;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_45 
                = vlSelf->_zz_when_PlicGateway_l21_44;
        }
        if (vlSelf->when_PlicGateway_l21_18) {
            vlSelf->_zz_when_PlicGateway_l21_37 = vlSelf->_zz_when_PlicGateway_l21_36;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_37 
                = vlSelf->_zz_when_PlicGateway_l21_36;
        }
        if (vlSelf->when_PlicGateway_l21_24) {
            vlSelf->_zz_when_PlicGateway_l21_49 = vlSelf->_zz_when_PlicGateway_l21_48;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_49 
                = vlSelf->_zz_when_PlicGateway_l21_48;
        }
        if (vlSelf->when_PlicGateway_l21_25) {
            vlSelf->_zz_when_PlicGateway_l21_51 = vlSelf->_zz_when_PlicGateway_l21_50;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_51 
                = vlSelf->_zz_when_PlicGateway_l21_50;
        }
        if (vlSelf->when_PlicGateway_l21_26) {
            vlSelf->_zz_when_PlicGateway_l21_53 = vlSelf->_zz_when_PlicGateway_l21_52;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_53 
                = vlSelf->_zz_when_PlicGateway_l21_52;
        }
        if (vlSelf->when_PlicGateway_l21_27) {
            vlSelf->_zz_when_PlicGateway_l21_55 = vlSelf->_zz_when_PlicGateway_l21_54;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_55 
                = vlSelf->_zz_when_PlicGateway_l21_54;
        }
        if (vlSelf->when_PlicGateway_l21_23) {
            vlSelf->_zz_when_PlicGateway_l21_47 = vlSelf->_zz_when_PlicGateway_l21_46;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_47 
                = vlSelf->_zz_when_PlicGateway_l21_46;
        }
        if (vlSelf->when_PlicGateway_l21_28) {
            vlSelf->_zz_when_PlicGateway_l21_57 = vlSelf->_zz_when_PlicGateway_l21_56;
            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_57 
                = vlSelf->_zz_when_PlicGateway_l21_56;
        }
        if (vlSelf->plic_logic_bridge_completion_valid) {
            if ((0x10U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                if ((8U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                    if ((4U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                        if ((2U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                                vlSelf->_zz_when_PlicGateway_l21_61 = 0U;
                            }
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_completion_payload)))) {
                                vlSelf->_zz_when_PlicGateway_l21_59 = 0U;
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_completion_payload) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_completion_payload)))) {
                                vlSelf->_zz_when_PlicGateway_l21_55 = 0U;
                            }
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                                vlSelf->_zz_when_PlicGateway_l21_57 = 0U;
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_completion_payload) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_completion_payload) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                                vlSelf->_zz_when_PlicGateway_l21_49 = 0U;
                            }
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_completion_payload)))) {
                                vlSelf->_zz_when_PlicGateway_l21_47 = 0U;
                            }
                        }
                        if ((2U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_completion_payload)))) {
                                vlSelf->_zz_when_PlicGateway_l21_51 = 0U;
                            }
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                                vlSelf->_zz_when_PlicGateway_l21_53 = 0U;
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_completion_payload) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_completion_payload) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_completion_payload) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_completion_payload)))) {
                                vlSelf->_zz_when_PlicGateway_l21_31 = 0U;
                            }
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                                vlSelf->_zz_when_PlicGateway_l21_33 = 0U;
                            }
                        }
                        if ((2U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_completion_payload)))) {
                                vlSelf->_zz_when_PlicGateway_l21_35 = 0U;
                            }
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                                vlSelf->_zz_when_PlicGateway_l21_37 = 0U;
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                        if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_completion_payload) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_completion_payload)))) {
                                vlSelf->_zz_when_PlicGateway_l21_39 = 0U;
                            }
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                                vlSelf->_zz_when_PlicGateway_l21_41 = 0U;
                            }
                        }
                        if ((2U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_completion_payload)))) {
                                vlSelf->_zz_when_PlicGateway_l21_43 = 0U;
                            }
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                                vlSelf->_zz_when_PlicGateway_l21_45 = 0U;
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_completion_payload) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                    if ((4U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                        if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_completion_payload) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                                vlSelf->_zz_when_PlicGateway_l21_25 = 0U;
                            }
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_completion_payload)))) {
                                vlSelf->_zz_when_PlicGateway_l21_23 = 0U;
                            }
                        }
                        if ((2U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                                vlSelf->_zz_when_PlicGateway_l21_29 = 0U;
                            }
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_completion_payload)))) {
                                vlSelf->_zz_when_PlicGateway_l21_27 = 0U;
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_completion_payload) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                                vlSelf->_zz_when_PlicGateway_l21_21 = 0U;
                            }
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_completion_payload)))) {
                                vlSelf->_zz_when_PlicGateway_l21_19 = 0U;
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_completion_payload) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                                vlSelf->_zz_when_PlicGateway_l21_17 = 0U;
                            }
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_completion_payload)))) {
                                vlSelf->_zz_when_PlicGateway_l21_15 = 0U;
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_completion_payload) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                        if ((2U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                                vlSelf->_zz_when_PlicGateway_l21_13 = 0U;
                            }
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_completion_payload)))) {
                                vlSelf->_zz_when_PlicGateway_l21_11 = 0U;
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_completion_payload) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_completion_payload)))) {
                                vlSelf->_zz_when_PlicGateway_l21_7 = 0U;
                            }
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                                vlSelf->_zz_when_PlicGateway_l21_9 = 0U;
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_completion_payload) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_completion_payload) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                                vlSelf->_zz_when_PlicGateway_l21_1 = 0U;
                            }
                        }
                        if ((2U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_completion_payload)))) {
                                vlSelf->_zz_when_PlicGateway_l21_3 = 0U;
                            }
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_completion_payload))) {
                                vlSelf->_zz_when_PlicGateway_l21_5 = 0U;
                            }
                        }
                    }
                }
            }
        }
        if (vlSelf->_zz_peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_ready) {
            vlSelf->_zz_dBusNonCoherent_bmb_rsp_valid_1 
                = vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_valid;
        }
        if (vlSelf->_zz_io_input_rsp_ready) {
            vlSelf->_zz_iArbiter_bmb_rsp_valid_1 = vlSelf->iArbiter_bmb_decoder_io_input_rsp_valid;
        }
        if (vlSelf->_zz_cores_0_cpu_dBus_connector_decoder_rsp_ready) {
            vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_valid_1 
                = vlSelf->cores_0_cpu_dBus_connector_decoder_rsp_valid;
        }
        if (vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_cmd_fire) {
            vlSelf->clintWishboneBridge_logic_bridge__DOT___zz_io_output_cmd_valid = 1U;
        }
        if (vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_rsp_fire) {
            vlSelf->clintWishboneBridge_logic_bridge__DOT___zz_io_output_cmd_valid = 0U;
        }
        if (vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_cmd_fire) {
            vlSelf->plicWishboneBridge_logic_bridge__DOT___zz_io_output_cmd_valid = 1U;
        }
        if (vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_rsp_fire) {
            vlSelf->plicWishboneBridge_logic_bridge__DOT___zz_io_output_cmd_valid = 0U;
        }
        if (vlSelf->clint_logic__DOT___zz_factory_rsp_ready_1) {
            vlSelf->clint_logic__DOT___zz_io_bus_rsp_valid_1 
                = ((IData)(vlSelf->clint_logic__DOT__factory_rsp_valid) 
                   & (IData)(vlSelf->clint_logic__DOT___zz_factory_rsp_ready));
        }
        if (vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_output_valid) {
            vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__locked = 1U;
            vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__maskLocked_1 
                = vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__maskRouted_1;
            vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__maskLocked_0 
                = vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__maskRouted_0;
        }
        if (vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__when_Stream_l671) {
            vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__locked = 0U;
        }
        if (vlSelf->_zz_cores_0_cpu_iBus_connector_decoder_rsp_ready) {
            vlSelf->_zz_cores_0_cpu_iBus_rsp_valid_1 
                = vlSelf->cores_0_cpu_iBus_connector_decoder_rsp_valid;
        }
        if (vlSelf->_zz_plic_logic_bus_rsp_ready_1) {
            vlSelf->_zz_plic_logic_bmb_rsp_valid_1 
                = ((IData)(vlSelf->plic_logic_bus_rsp_valid) 
                   & (IData)(vlSelf->_zz_plic_logic_bus_rsp_ready));
        }
        if ((1U & (~ ((((((((4U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address) 
                            | (8U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                           | (0xcU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                          | (0x10U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                         | (0x14U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                        | (0x18U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                       | (0x1cU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                      | (0x20U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address))))) {
            if ((1U & (~ ((((((((0x24U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address) 
                                | (0x28U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                               | (0x2cU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                              | (0x30U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                             | (0x34U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                            | (0x38U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                           | (0x3cU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                          | (0x40U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address))))) {
                if ((1U & (~ ((((((((0x44U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address) 
                                    | (0x48U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                                   | (0x4cU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                                  | (0x50U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                                 | (0x54U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                                | (0x58U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                               | (0x5cU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                              | (0x60U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address))))) {
                    if (((((((((0x64U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address) 
                               | (0x68U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                              | (0x6cU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                             | (0x70U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                            | (0x74U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                           | (0x78U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                          | (0x7cU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                         | (0x200000U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address))) {
                        if ((0x64U != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                            if ((0x68U != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                if ((0x6cU != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                    if ((0x70U != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                        if ((0x74U 
                                             != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                            if ((0x78U 
                                                 != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                                if (
                                                    (0x7cU 
                                                     != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                                    if (vlSelf->plic_logic_bus_doWrite) {
                                                        if (vlSelf->when_BusSlaveFactory_l1041_31) {
                                                            vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_threshold 
                                                                = 
                                                                (3U 
                                                                 & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                                                        }
                                                    }
                                                }
                                                if (
                                                    (0x7cU 
                                                     == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                                    if (vlSelf->plic_logic_bus_doWrite) {
                                                        if (vlSelf->when_BusSlaveFactory_l1041_30) {
                                                            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_92 
                                                                = 
                                                                (3U 
                                                                 & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                                                        }
                                                    }
                                                }
                                            }
                                            if ((0x78U 
                                                 == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                                if (vlSelf->plic_logic_bus_doWrite) {
                                                    if (vlSelf->when_BusSlaveFactory_l1041_29) {
                                                        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_91 
                                                            = 
                                                            (3U 
                                                             & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                                                    }
                                                }
                                            }
                                        }
                                        if ((0x74U 
                                             == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                            if (vlSelf->plic_logic_bus_doWrite) {
                                                if (vlSelf->when_BusSlaveFactory_l1041_28) {
                                                    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_90 
                                                        = 
                                                        (3U 
                                                         & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                                                }
                                            }
                                        }
                                    }
                                    if ((0x70U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                        if (vlSelf->plic_logic_bus_doWrite) {
                                            if (vlSelf->when_BusSlaveFactory_l1041_27) {
                                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_89 
                                                    = 
                                                    (3U 
                                                     & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                                            }
                                        }
                                    }
                                }
                                if ((0x6cU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                    if (vlSelf->plic_logic_bus_doWrite) {
                                        if (vlSelf->when_BusSlaveFactory_l1041_26) {
                                            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_88 
                                                = (3U 
                                                   & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                                        }
                                    }
                                }
                            }
                            if ((0x68U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                if (vlSelf->plic_logic_bus_doWrite) {
                                    if (vlSelf->when_BusSlaveFactory_l1041_25) {
                                        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_87 
                                            = (3U & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                                    }
                                }
                            }
                        }
                        if ((0x64U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                            if (vlSelf->plic_logic_bus_doWrite) {
                                if (vlSelf->when_BusSlaveFactory_l1041_24) {
                                    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_86 
                                        = (3U & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                                }
                            }
                        }
                    }
                    if ((1U & (~ ((((((((0x64U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address) 
                                        | (0x68U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                                       | (0x6cU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                                      | (0x70U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                                     | (0x74U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                                    | (0x78U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                                   | (0x7cU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                                  | (0x200000U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address))))) {
                        if ((0x2000U != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                            if ((0x201000U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                if (vlSelf->plic_logic_bus_doWrite) {
                                    if (vlSelf->when_BusSlaveFactory_l1041_63) {
                                        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_threshold 
                                            = (3U & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                                    }
                                }
                            }
                            if ((0x201000U != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                if ((0x2080U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                    if (vlSelf->plic_logic_bus_doWrite) {
                                        if (vlSelf->when_BusSlaveFactory_l1041_65) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_1 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 2U));
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_66) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_2 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 3U));
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_67) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_3 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 4U));
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_68) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_4 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 5U));
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_69) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_5 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 6U));
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_70) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_6 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 7U));
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_71) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_7 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 8U));
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_72) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_8 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 9U));
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_73) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_9 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 0xaU));
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_74) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_10 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 0xbU));
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_75) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_11 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 0xcU));
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_76) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_12 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 0xdU));
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_77) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_13 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 0xeU));
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_78) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_14 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 0xfU));
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_79) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_15 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 0x10U));
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_80) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_16 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 0x11U));
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_81) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_17 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 0x12U));
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_82) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_18 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 0x13U));
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_83) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_19 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 0x14U));
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_84) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_20 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 0x15U));
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_85) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_21 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 0x16U));
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_86) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_22 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 0x17U));
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_87) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_23 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 0x18U));
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_88) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_24 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 0x19U));
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_89) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_25 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 0x1aU));
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_90) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_26 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 0x1bU));
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_91) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_27 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 0x1cU));
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_92) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_28 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 0x1dU));
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_93) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_29 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 0x1eU));
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_94) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_30 
                                                = (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                   >> 0x1fU);
                                        }
                                        if (vlSelf->when_BusSlaveFactory_l1041_64) {
                                            vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_0 
                                                = (1U 
                                                   & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                      >> 1U));
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x2000U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                            if (vlSelf->plic_logic_bus_doWrite) {
                                if (vlSelf->when_BusSlaveFactory_l1041_61) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_29 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 0x1eU));
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_60) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_28 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 0x1dU));
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_59) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_27 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 0x1cU));
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_58) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_26 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 0x1bU));
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_57) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_25 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 0x1aU));
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_56) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_24 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 0x19U));
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_54) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_22 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 0x17U));
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_53) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_21 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 0x16U));
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_52) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_20 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 0x15U));
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_51) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_19 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 0x14U));
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_50) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_18 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 0x13U));
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_49) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_17 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 0x12U));
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_48) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_16 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 0x11U));
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_46) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_14 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 0xfU));
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_45) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_13 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 0xeU));
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_44) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_12 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 0xdU));
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_43) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_11 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 0xcU));
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_42) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_10 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 0xbU));
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_41) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_9 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 0xaU));
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_40) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_8 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 9U));
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_38) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_6 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 7U));
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_37) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_5 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 6U));
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_36) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_4 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 5U));
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_35) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_3 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 4U));
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_34) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_2 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 3U));
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_33) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_1 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 2U));
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_62) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_30 
                                        = (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                           >> 0x1fU);
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_32) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_0 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 1U));
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_55) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_23 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 0x18U));
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_47) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_15 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 0x10U));
                                }
                                if (vlSelf->when_BusSlaveFactory_l1041_39) {
                                    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_7 
                                        = (1U & (vlSelf->plic_logic_bmb_cmd_payload_fragment_data 
                                                 >> 8U));
                                }
                            }
                        }
                    }
                }
                if (((((((((0x44U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address) 
                           | (0x48U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                          | (0x4cU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                         | (0x50U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                        | (0x54U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                       | (0x58U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                      | (0x5cU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                     | (0x60U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address))) {
                    if ((0x44U != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                        if ((0x48U != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                            if ((0x4cU != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                if ((0x50U != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                    if ((0x54U != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                        if ((0x58U 
                                             != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                            if ((0x5cU 
                                                 != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                                if (vlSelf->plic_logic_bus_doWrite) {
                                                    if (vlSelf->when_BusSlaveFactory_l1041_23) {
                                                        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_85 
                                                            = 
                                                            (3U 
                                                             & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                                                    }
                                                }
                                            }
                                            if ((0x5cU 
                                                 == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                                if (vlSelf->plic_logic_bus_doWrite) {
                                                    if (vlSelf->when_BusSlaveFactory_l1041_22) {
                                                        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_84 
                                                            = 
                                                            (3U 
                                                             & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                                                    }
                                                }
                                            }
                                        }
                                        if ((0x58U 
                                             == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                            if (vlSelf->plic_logic_bus_doWrite) {
                                                if (vlSelf->when_BusSlaveFactory_l1041_21) {
                                                    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_83 
                                                        = 
                                                        (3U 
                                                         & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                                                }
                                            }
                                        }
                                    }
                                    if ((0x54U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                        if (vlSelf->plic_logic_bus_doWrite) {
                                            if (vlSelf->when_BusSlaveFactory_l1041_20) {
                                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_82 
                                                    = 
                                                    (3U 
                                                     & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                                            }
                                        }
                                    }
                                }
                                if ((0x50U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                    if (vlSelf->plic_logic_bus_doWrite) {
                                        if (vlSelf->when_BusSlaveFactory_l1041_19) {
                                            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_81 
                                                = (3U 
                                                   & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                                        }
                                    }
                                }
                            }
                            if ((0x4cU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                if (vlSelf->plic_logic_bus_doWrite) {
                                    if (vlSelf->when_BusSlaveFactory_l1041_18) {
                                        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_80 
                                            = (3U & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                                    }
                                }
                            }
                        }
                        if ((0x48U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                            if (vlSelf->plic_logic_bus_doWrite) {
                                if (vlSelf->when_BusSlaveFactory_l1041_17) {
                                    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_79 
                                        = (3U & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                                }
                            }
                        }
                    }
                    if ((0x44U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                        if (vlSelf->plic_logic_bus_doWrite) {
                            if (vlSelf->when_BusSlaveFactory_l1041_16) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_78 
                                    = (3U & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                            }
                        }
                    }
                }
            }
            if (((((((((0x24U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address) 
                       | (0x28U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                      | (0x2cU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                     | (0x30U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                    | (0x34U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                   | (0x38U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                  | (0x3cU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                 | (0x40U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address))) {
                if ((0x24U != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                    if ((0x28U != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                        if ((0x2cU != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                            if ((0x30U != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                if ((0x34U != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                    if ((0x38U != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                        if ((0x3cU 
                                             != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                            if (vlSelf->plic_logic_bus_doWrite) {
                                                if (vlSelf->when_BusSlaveFactory_l1041_15) {
                                                    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_77 
                                                        = 
                                                        (3U 
                                                         & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                                                }
                                            }
                                        }
                                        if ((0x3cU 
                                             == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                            if (vlSelf->plic_logic_bus_doWrite) {
                                                if (vlSelf->when_BusSlaveFactory_l1041_14) {
                                                    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_76 
                                                        = 
                                                        (3U 
                                                         & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                                                }
                                            }
                                        }
                                    }
                                    if ((0x38U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                        if (vlSelf->plic_logic_bus_doWrite) {
                                            if (vlSelf->when_BusSlaveFactory_l1041_13) {
                                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_75 
                                                    = 
                                                    (3U 
                                                     & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                                            }
                                        }
                                    }
                                }
                                if ((0x34U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                    if (vlSelf->plic_logic_bus_doWrite) {
                                        if (vlSelf->when_BusSlaveFactory_l1041_12) {
                                            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_74 
                                                = (3U 
                                                   & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                                        }
                                    }
                                }
                            }
                            if ((0x30U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                if (vlSelf->plic_logic_bus_doWrite) {
                                    if (vlSelf->when_BusSlaveFactory_l1041_11) {
                                        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_73 
                                            = (3U & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                                    }
                                }
                            }
                        }
                        if ((0x2cU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                            if (vlSelf->plic_logic_bus_doWrite) {
                                if (vlSelf->when_BusSlaveFactory_l1041_10) {
                                    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_72 
                                        = (3U & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                                }
                            }
                        }
                    }
                    if ((0x28U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                        if (vlSelf->plic_logic_bus_doWrite) {
                            if (vlSelf->when_BusSlaveFactory_l1041_9) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_71 
                                    = (3U & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                            }
                        }
                    }
                }
                if ((0x24U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                    if (vlSelf->plic_logic_bus_doWrite) {
                        if (vlSelf->when_BusSlaveFactory_l1041_8) {
                            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_70 
                                = (3U & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                        }
                    }
                }
            }
        }
        if (vlSelf->iArbiter_bmb_cmd_valid) {
            vlSelf->iArbiter_bmb_cmd_rValid = 1U;
        }
        if (vlSelf->iArbiter_bmb_cmd_halfPipe_fire) {
            vlSelf->iArbiter_bmb_cmd_rValid = 0U;
        }
        if (vlSelf->plic_logic_bridge_claim_valid) {
            if ((0x10U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                if ((8U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                    if ((4U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                        if ((2U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_61 = 0U;
                            }
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_claim_payload)))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_59 = 0U;
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_claim_payload) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_claim_payload)))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_55 = 0U;
                            }
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_57 = 0U;
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_claim_payload) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_claim_payload) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_claim_payload)))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_47 = 0U;
                            }
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_49 = 0U;
                            }
                        }
                        if ((2U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_claim_payload)))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_51 = 0U;
                            }
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_53 = 0U;
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_claim_payload) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_claim_payload) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_claim_payload) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_claim_payload)))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_31 = 0U;
                            }
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_33 = 0U;
                            }
                        }
                        if ((2U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_claim_payload)))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_35 = 0U;
                            }
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_37 = 0U;
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                        if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_claim_payload) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_claim_payload)))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_39 = 0U;
                            }
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_41 = 0U;
                            }
                        }
                        if ((2U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_45 = 0U;
                            }
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_claim_payload)))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_43 = 0U;
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_claim_payload) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                    if ((4U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                        if ((2U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_claim_payload)))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_27 = 0U;
                            }
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_29 = 0U;
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_claim_payload) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_25 = 0U;
                            }
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_claim_payload)))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_23 = 0U;
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_claim_payload) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_21 = 0U;
                            }
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_claim_payload)))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_19 = 0U;
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_claim_payload) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_17 = 0U;
                            }
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_claim_payload)))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_15 = 0U;
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_claim_payload) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                        if ((2U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_13 = 0U;
                            }
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_claim_payload)))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_11 = 0U;
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_claim_payload) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_9 = 0U;
                            }
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_claim_payload)))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_7 = 0U;
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_claim_payload) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_5 = 0U;
                            }
                            if ((1U & (~ (IData)(vlSelf->plic_logic_bridge_claim_payload)))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_3 = 0U;
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelf->plic_logic_bridge_claim_payload) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->plic_logic_bridge_claim_payload))) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_1 = 0U;
                            }
                        }
                    }
                }
            }
        }
        if (((((((((4U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address) 
                   | (8U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                  | (0xcU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                 | (0x10U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
                | (0x14U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
               | (0x18U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
              | (0x1cU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) 
             | (0x20U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address))) {
            if ((4U != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                if ((8U != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                    if ((0xcU != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                        if ((0x10U != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                            if ((0x14U != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                if ((0x18U != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                    if ((0x1cU != vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                        if (vlSelf->plic_logic_bus_doWrite) {
                                            if (vlSelf->when_BusSlaveFactory_l1041_7) {
                                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_69 
                                                    = 
                                                    (3U 
                                                     & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                                            }
                                        }
                                    }
                                    if ((0x1cU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                        if (vlSelf->plic_logic_bus_doWrite) {
                                            if (vlSelf->when_BusSlaveFactory_l1041_6) {
                                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_68 
                                                    = 
                                                    (3U 
                                                     & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                                            }
                                        }
                                    }
                                }
                                if ((0x18U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                    if (vlSelf->plic_logic_bus_doWrite) {
                                        if (vlSelf->when_BusSlaveFactory_l1041_5) {
                                            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_67 
                                                = (3U 
                                                   & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                                        }
                                    }
                                }
                            }
                            if ((0x14U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                                if (vlSelf->plic_logic_bus_doWrite) {
                                    if (vlSelf->when_BusSlaveFactory_l1041_4) {
                                        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_66 
                                            = (3U & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                                    }
                                }
                            }
                        }
                        if ((0x10U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                            if (vlSelf->plic_logic_bus_doWrite) {
                                if (vlSelf->when_BusSlaveFactory_l1041_3) {
                                    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_65 
                                        = (3U & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                                }
                            }
                        }
                    }
                    if ((0xcU == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                        if (vlSelf->plic_logic_bus_doWrite) {
                            if (vlSelf->when_BusSlaveFactory_l1041_2) {
                                vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_64 
                                    = (3U & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                            }
                        }
                    }
                }
                if ((8U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                    if (vlSelf->plic_logic_bus_doWrite) {
                        if (vlSelf->when_BusSlaveFactory_l1041_1) {
                            vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_63 
                                = (3U & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                        }
                    }
                }
            }
            if ((4U == vlSelf->plic_logic_bmb_cmd_payload_fragment_address)) {
                if (vlSelf->plic_logic_bus_doWrite) {
                    if (vlSelf->when_BusSlaveFactory_l1041) {
                        vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_62 
                            = (3U & vlSelf->plic_logic_bmb_cmd_payload_fragment_data);
                    }
                }
            }
        }
        if (vlSelf->peripheralBridge_logic__DOT__rsp_valid) {
            vlSelf->peripheralBridge_logic__DOT__rsp_rValidN = 0U;
        }
        if (vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_ready) {
            vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rValid 
                = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_valid;
            vlSelf->peripheralBridge_logic__DOT__rsp_rValidN = 1U;
        }
        if (vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_valid) {
            vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rValid = 1U;
        }
        if (vlSelf->peripheralBridge_logic__DOT__inputCmd_fire) {
            vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rValid = 0U;
        }
        if (vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_valid) {
            vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rValidN = 0U;
        }
        if (vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_ready) {
            vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rValid 
                = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_valid;
            vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rValidN = 1U;
        }
    }
    vlSelf->plic_logic_bridge_coherencyStall_value 
        = ((1U & (~ (IData)(vlSelf->systemCd_logic_outputReset))) 
           && (IData)(vlSelf->plic_logic_bridge_coherencyStall_valueNext));
    vlSelf->clint_logic__DOT__logic_time = __Vdly__clint_logic__DOT__logic_time;
    vlSelf->peripheralBridge_logic__DOT__beatCounter 
        = __Vdly__peripheralBridge_logic__DOT__beatCounter;
    vlSelf->clint_logic__DOT__io_time = vlSelf->clint_logic__DOT__logic_time;
    vlSelf->clint_logic__DOT___zz_factory_rsp_payload_fragment_data 
        = vlSelf->clint_logic__DOT__logic_time;
    vlSelf->clint_logic_io_time = vlSelf->clint_logic__DOT__logic_time;
    vlSelf->peripheralBridge_logic__DOT___zz_io_output_ADR_2 
        = (0x3fU & ((IData)(vlSelf->peripheralBridge_logic__DOT__beatCounter) 
                    << 2U));
    vlSelf->peripheralBridge_logic_io_input_rsp_valid 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rValid;
    vlSelf->peripheralBridge_logic__DOT__io_input_rsp_valid 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rValid;
    vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_m2sPipe_valid 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rValid;
    vlSelf->peripheralBridge_logic__DOT__when_Stream_l372 
        = (1U & (~ (IData)(vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_rValid)));
    vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_valid 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rValid;
    vlSelf->when_Stream_l372_8 = (1U & (~ (IData)(vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_rValid)));
    vlSelf->iArbiter_bmb_cmd_valid = vlSelf->cores_0_cpu_iBus_cmd_rValid;
    vlSelf->cores_0_cpu_iBus_cmd_halfPipe_valid = vlSelf->cores_0_cpu_iBus_cmd_rValid;
    vlSelf->cores_0_cpu_iBus_connector_decoder_cmd_valid 
        = vlSelf->cores_0_cpu_iBus_cmd_rValid;
    vlSelf->iArbiter_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_valid 
        = vlSelf->cores_0_cpu_iBus_cmd_rValid;
    vlSelf->cores_0_cpu_iBus_cmd_ready = (1U & (~ (IData)(vlSelf->cores_0_cpu_iBus_cmd_rValid)));
    vlSelf->dBusCoherent_bmb_cmd_valid = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rValid;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_m2sPipe_valid 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rValid;
    vlSelf->cores_0_cpu_dBus_connector_decoder_cmd_valid 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rValid;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_valid 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rValid;
    vlSelf->when_Stream_l372_1 = (1U & (~ (IData)(vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rValid)));
    vlSelf->dBusNonCoherent_bmb_cmd_valid = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rValid;
    vlSelf->dBusCoherent_bmb_cmd_s2mPipe_m2sPipe_valid 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rValid;
    vlSelf->dBusCoherent_bmb_connector_decoder_cmd_valid 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rValid;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_valid 
        = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rValid;
    vlSelf->when_Stream_l372_4 = (1U & (~ (IData)(vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rValid)));
    vlSelf->clint_logic_io_softwareInterrupt = vlSelf->clint_logic__DOT__logic_harts_0_softwareInterrupt;
    vlSelf->clint_logic__DOT__io_softwareInterrupt 
        = vlSelf->clint_logic__DOT__logic_harts_0_softwareInterrupt;
    vlSelf->cores_0_cpu_logic_cpu_softwareInterrupt 
        = vlSelf->clint_logic__DOT__logic_harts_0_softwareInterrupt;
    vlSelf->_zz_when_Stream_l372 = vlSelf->_zz_when_Stream_l372_1;
    vlSelf->when_Stream_l372_9 = (1U & (~ (IData)(vlSelf->_zz_when_Stream_l372_1)));
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_ready 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_rValidN;
    vlSelf->dBusCoherent_bmb_cmd_ready = vlSelf->dBusCoherent_bmb_cmd_rValidN;
    vlSelf->cores_0_cpu_dBus_connector_decoder_cmd_ready 
        = vlSelf->dBusCoherent_bmb_cmd_rValidN;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_ready 
        = vlSelf->dBusCoherent_bmb_cmd_rValidN;
    vlSelf->dBusCoherent_bmb_cmd_s2mPipe_valid = (1U 
                                                  & ((~ (IData)(vlSelf->dBusCoherent_bmb_cmd_rValidN)) 
                                                     | (IData)(vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rValid)));
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_m2sPipe_ready 
        = vlSelf->dBusCoherent_bmb_cmd_rValidN;
    vlSelf->dBusNonCoherent_bmb_cmd_ready = vlSelf->dBusNonCoherent_bmb_cmd_rValidN;
    vlSelf->dBusCoherent_bmb_connector_decoder_cmd_ready 
        = vlSelf->dBusNonCoherent_bmb_cmd_rValidN;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_ready 
        = vlSelf->dBusNonCoherent_bmb_cmd_rValidN;
    vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_valid = 
        (1U & ((~ (IData)(vlSelf->dBusNonCoherent_bmb_cmd_rValidN)) 
               | (IData)(vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rValid)));
    vlSelf->dBusCoherent_bmb_cmd_s2mPipe_m2sPipe_ready 
        = vlSelf->dBusNonCoherent_bmb_cmd_rValidN;
    vlSelf->when_PlicGateway_l21_30 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_61)));
    vlSelf->when_PlicGateway_l21_29 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_59)));
    vlSelf->when_PlicGateway_l21_12 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_25)));
    vlSelf->when_PlicGateway_l21_11 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_23)));
    vlSelf->when_PlicGateway_l21_10 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_21)));
    vlSelf->when_PlicGateway_l21_9 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_19)));
    vlSelf->when_PlicGateway_l21_8 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_17)));
    vlSelf->when_PlicGateway_l21_7 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_15)));
    vlSelf->when_PlicGateway_l21_6 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_13)));
    vlSelf->when_PlicGateway_l21 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_1)));
    vlSelf->when_PlicGateway_l21_1 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_3)));
    vlSelf->when_PlicGateway_l21_2 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_5)));
    vlSelf->when_PlicGateway_l21_3 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_7)));
    vlSelf->when_PlicGateway_l21_4 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_9)));
    vlSelf->when_PlicGateway_l21_5 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_11)));
    vlSelf->when_PlicGateway_l21_14 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_29)));
    vlSelf->when_PlicGateway_l21_15 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_31)));
    vlSelf->when_PlicGateway_l21_16 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_33)));
    vlSelf->when_PlicGateway_l21_17 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_35)));
    vlSelf->when_PlicGateway_l21_13 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_27)));
    vlSelf->when_PlicGateway_l21_19 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_39)));
    vlSelf->when_PlicGateway_l21_20 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_41)));
    vlSelf->when_PlicGateway_l21_21 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_43)));
    vlSelf->when_PlicGateway_l21_22 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_45)));
    vlSelf->when_PlicGateway_l21_18 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_37)));
    vlSelf->when_PlicGateway_l21_24 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_49)));
    vlSelf->when_PlicGateway_l21_25 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_51)));
    vlSelf->when_PlicGateway_l21_26 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_53)));
    vlSelf->when_PlicGateway_l21_27 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_55)));
    vlSelf->when_PlicGateway_l21_23 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_47)));
    vlSelf->when_PlicGateway_l21_28 = (1U & (~ (IData)(vlSelf->_zz_when_PlicGateway_l21_57)));
    vlSelf->cores_0_cpu_dBus_connector_decoder_rsp_valid 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_valid_1;
    vlSelf->dBusCoherent_bmb_rsp_valid = vlSelf->_zz_dBusNonCoherent_bmb_rsp_valid_1;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_valid 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_valid_1;
    vlSelf->dBusCoherent_bmb_connector_decoder_rsp_valid 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_valid_1;
    vlSelf->dBusNonCoherent_bmb_rsp_valid = vlSelf->_zz_dBusNonCoherent_bmb_rsp_valid_1;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_valid 
        = vlSelf->_zz_dBusNonCoherent_bmb_rsp_valid_1;
    vlSelf->_zz_dBusNonCoherent_bmb_rsp_valid = vlSelf->_zz_dBusNonCoherent_bmb_rsp_valid_1;
    vlSelf->when_Stream_l372_7 = (1U & (~ (IData)(vlSelf->_zz_dBusNonCoherent_bmb_rsp_valid_1)));
    vlSelf->cores_0_cpu_iBus_connector_decoder_rsp_valid 
        = vlSelf->_zz_iArbiter_bmb_rsp_valid_1;
    vlSelf->iArbiter_bmb_rsp_valid = vlSelf->_zz_iArbiter_bmb_rsp_valid_1;
    vlSelf->iArbiter_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_valid 
        = vlSelf->_zz_iArbiter_bmb_rsp_valid_1;
    vlSelf->_zz_iArbiter_bmb_rsp_valid = vlSelf->_zz_iArbiter_bmb_rsp_valid_1;
    vlSelf->when_Stream_l372_5 = (1U & (~ (IData)(vlSelf->_zz_iArbiter_bmb_rsp_valid_1)));
    vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_valid 
        = vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_valid_1;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_valid 
        = vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_valid_1;
    vlSelf->when_Stream_l372_2 = (1U & (~ (IData)(vlSelf->_zz_toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_valid_1)));
    vlSelf->plic_logic_bridge_coherencyStall_willOverflowIfInc 
        = vlSelf->plic_logic_bridge_coherencyStall_value;
    vlSelf->when_PlicMapper_l122 = vlSelf->plic_logic_bridge_coherencyStall_value;
    vlSelf->clint_logic__DOT__io_bus_rsp_valid = vlSelf->clint_logic__DOT___zz_io_bus_rsp_valid_1;
    vlSelf->clint_logic__DOT___zz_io_bus_rsp_valid 
        = vlSelf->clint_logic__DOT___zz_io_bus_rsp_valid_1;
    vlSelf->clint_logic_io_bus_rsp_valid = vlSelf->clint_logic__DOT___zz_io_bus_rsp_valid_1;
    vlSelf->clint_logic__DOT__when_Stream_l372 = (1U 
                                                  & (~ (IData)(vlSelf->clint_logic__DOT___zz_io_bus_rsp_valid_1)));
    vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_rsp_fire 
        = ((IData)(vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_rsp_ready) 
           & (IData)(vlSelf->clint_logic__DOT___zz_io_bus_rsp_valid_1));
    vlSelf->_zz_cores_0_cpu_iBus_rsp_valid = vlSelf->_zz_cores_0_cpu_iBus_rsp_valid_1;
    vlSelf->when_Stream_l372_3 = (1U & (~ (IData)(vlSelf->_zz_cores_0_cpu_iBus_rsp_valid_1)));
    vlSelf->cores_0_cpu_iBus_rsp_valid = vlSelf->_zz_cores_0_cpu_iBus_rsp_valid_1;
    vlSelf->_zz_plic_logic_bmb_rsp_valid = vlSelf->_zz_plic_logic_bmb_rsp_valid_1;
    vlSelf->plic_logic_bmb_rsp_valid = vlSelf->_zz_plic_logic_bmb_rsp_valid_1;
    vlSelf->when_Stream_l372 = (1U & (~ (IData)(vlSelf->_zz_plic_logic_bmb_rsp_valid_1)));
    vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_rsp_fire 
        = ((IData)(vlSelf->_zz_plic_logic_bmb_rsp_valid_1) 
           & (IData)(vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_rsp_ready));
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz___05Fzz_maskProposal_0_2_2 
        = (((IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__maskLocked_0) 
            << 1U) | (IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__maskLocked_1));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_threshold 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_threshold;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_threshold 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_threshold;
    vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_m2sPipe_valid 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rValid;
    vlSelf->when_Stream_l372_6 = (1U & (~ (IData)(vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rValid)));
    vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_valid 
        = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rValid;
    vlSelf->iArbiter_bmb_decoder__DOT__io_outputs_0_cmd_valid 
        = vlSelf->iArbiter_bmb_cmd_rValid;
    vlSelf->iArbiter_bmb_cmd_halfPipe_valid = vlSelf->iArbiter_bmb_cmd_rValid;
    vlSelf->iArbiter_bmb_decoder_io_outputs_0_cmd_valid 
        = vlSelf->iArbiter_bmb_cmd_rValid;
    vlSelf->iArbiter_bmb_cmd_ready = (1U & (~ (IData)(vlSelf->iArbiter_bmb_cmd_rValid)));
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz_maskProposal_0 
        = (((IData)(vlSelf->iArbiter_bmb_cmd_rValid) 
            << 1U) | (IData)(vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rValid));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_29 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_29;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_28 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_28;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_27 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_27;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_26 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_26;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_25 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_25;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_24 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_24;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_22 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_22;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_21 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_21;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_20 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_20;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_19 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_19;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_18 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_18;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_17 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_17;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_16 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_16;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_14 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_14;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_13 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_13;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_12 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_12;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_11 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_11;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_10 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_10;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_9 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_9;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_8 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_8;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_6 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_6;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_5 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_5;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_4 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_4;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_3 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_3;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_2 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_2;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_1 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_1;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_30 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_30;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_1 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_1;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_2 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_2;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_3 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_3;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_4 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_4;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_5 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_5;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_6 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_6;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_7 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_7;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_8 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_8;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_9 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_9;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_10 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_10;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_11 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_11;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_12 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_12;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_13 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_13;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_14 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_14;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_15 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_15;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_16 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_16;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_17 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_17;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_18 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_18;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_19 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_19;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_20 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_20;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_21 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_21;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_22 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_22;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_23 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_23;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_24 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_24;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_25 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_25;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_26 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_26;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_27 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_27;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_28 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_28;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_29 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_29;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_30 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_30;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_0 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_0;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_0 
        = vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_0;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_23 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_23;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_15 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_15;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_ie_7 
        = vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_7;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_31_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_30) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_61));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_31_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_30) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_61));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_30_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_29) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_59));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_30_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_29) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_59));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_14_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_13) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_27));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_14_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_13) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_27));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_13_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_12) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_25));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_13_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_12) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_25));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_11_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_10) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_21));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_11_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_10) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_21));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_10_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_9) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_19));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_10_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_9) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_19));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_9_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_8) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_17));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_9_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_8) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_17));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_8_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_7) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_15));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_8_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_7) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_15));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_7_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_6) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_13));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_7_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_6) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_13));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_5_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_4) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_9));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_5_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_4) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_9));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_3_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_2) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_5));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_3_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_2) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_5));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_4_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_3) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_7));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_4_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_3) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_7));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_6_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_5) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_11));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_6_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_5) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_11));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_2_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_1) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_3));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_2_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_1) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_3));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_15_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_14) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_29));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_15_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_14) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_29));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_16_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_15) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_31));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_16_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_15) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_31));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_12_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_11) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_23));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_12_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_11) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_23));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_18_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_17) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_35));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_18_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_17) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_35));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_19_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_18) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_37));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_19_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_18) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_37));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_20_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_19) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_39));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_20_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_19) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_39));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_21_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_20) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_41));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_21_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_20) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_41));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_17_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_16) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_33));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_17_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_16) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_33));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_23_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_22) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_45));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_23_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_22) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_45));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_24_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_23) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_47));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_24_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_23) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_47));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_25_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_24) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_49));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_25_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_24) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_49));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_26_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_25) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_51));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_26_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_25) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_51));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_22_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_21) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_43));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_22_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_21) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_43));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_27_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_26) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_53));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_27_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_26) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_53));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_28_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_27) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_55));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_28_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_27) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_55));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_29_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_28) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_57));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_29_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_28) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_57));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_1_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_ie_0) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_1));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_1_valid 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_ie_0) 
           & (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_1));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_31_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_92;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_31_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_92;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_60 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_92;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_30_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_91;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_30_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_91;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_58 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_91;
    __VdfgRegularize_h09b8325e_1_14 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_92) 
                                       <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_91));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_29_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_90;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_29_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_90;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_56 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_90;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_28_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_89;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_28_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_89;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_54 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_89;
    __VdfgRegularize_h09b8325e_1_13 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_90) 
                                       <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_89));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_27_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_88;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_27_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_88;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_52 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_88;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_26_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_87;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_26_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_87;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_50 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_87;
    __VdfgRegularize_h09b8325e_1_12 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_88) 
                                       <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_87));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_25_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_86;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_25_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_86;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_48 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_86;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_24_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_85;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_24_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_85;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_46 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_85;
    __VdfgRegularize_h09b8325e_1_11 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_86) 
                                       <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_85));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_23_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_84;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_23_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_84;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_44 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_84;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_21_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_82;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_21_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_82;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_40 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_82;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_20_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_81;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_20_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_81;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_38 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_81;
    __VdfgRegularize_h09b8325e_1_9 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_82) 
                                      <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_81));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_19_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_80;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_19_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_80;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_36 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_80;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_18_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_79;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_18_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_79;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_34 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_79;
    __VdfgRegularize_h09b8325e_1_8 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_80) 
                                      <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_79));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_17_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_78;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_17_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_78;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_32 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_78;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_16_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_77;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_16_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_77;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_30 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_77;
    __VdfgRegularize_h09b8325e_1_7 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_78) 
                                      <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_77));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_15_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_76;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_15_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_76;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_28 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_76;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_14_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_75;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_14_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_75;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_26 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_75;
    __VdfgRegularize_h09b8325e_1_6 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_76) 
                                      <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_75));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_13_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_74;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_13_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_74;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_24 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_74;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_12_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_73;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_12_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_73;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_22 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_73;
    __VdfgRegularize_h09b8325e_1_5 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_74) 
                                      <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_73));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_11_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_72;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_11_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_72;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_20 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_72;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_10_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_71;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_10_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_71;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_18 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_71;
    __VdfgRegularize_h09b8325e_1_4 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_72) 
                                      <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_71));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_9_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_70;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_9_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_70;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_16 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_70;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_8_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_69;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_8_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_69;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_14 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_69;
    __VdfgRegularize_h09b8325e_1_3 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_70) 
                                      <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_69));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_7_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_68;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_7_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_68;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_12 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_68;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_6_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_67;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_6_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_67;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_10 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_67;
    __VdfgRegularize_h09b8325e_1_2 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_68) 
                                      <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_67));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_5_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_66;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_5_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_66;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_8 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_66;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_4_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_65;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_4_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_65;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_6 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_65;
    __VdfgRegularize_h09b8325e_1_1 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_66) 
                                      <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_65));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_3_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_64;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_3_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_64;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_4 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_64;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_2_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_63;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_2_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_63;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_2 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_63;
    __VdfgRegularize_h09b8325e_1_0 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_64) 
                                      <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_63));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_22_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_83;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_22_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_83;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_42 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_83;
    __VdfgRegularize_h09b8325e_1_10 = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_84) 
                                       <= (IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_83));
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_1_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_62;
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_1_priority 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_62;
    vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data 
        = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_62;
    vlSelf->peripheralBridge_logic__DOT__rsp_ready 
        = vlSelf->peripheralBridge_logic__DOT__rsp_rValidN;
    vlSelf->peripheralBridge_logic__DOT__halt = (1U 
                                                 & (~ (IData)(vlSelf->peripheralBridge_logic__DOT__rsp_rValidN)));
    vlSelf->peripheralBridge_logic_io_output_CYC = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rValid;
    vlSelf->peripheralBridge_logic__DOT__io_output_CYC 
        = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rValid;
    vlSelf->peripheralBridge_logic__DOT__inputCmd_valid 
        = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rValid;
    vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_ready 
        = (1U & (~ (IData)(vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rValid)));
    vlSelf->peripheral_CYC = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rValid;
    vlSelf->peripheral_STB = ((IData)(vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rValid) 
                              & (IData)(vlSelf->peripheralBridge_logic__DOT__rsp_rValidN));
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_cmd_ready 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rValidN;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.utime 
        = vlSelf->clint_logic_io_time;
    vlSelf->peripheralBridge_logic__DOT___zz_io_output_ADR_1 
        = vlSelf->peripheralBridge_logic__DOT___zz_io_output_ADR_2;
    vlSelf->peripheralBridge_logic__DOT__io_input_cmd_valid 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_valid;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.iBus_cmd_ready 
        = vlSelf->cores_0_cpu_iBus_cmd_ready;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.softwareInterrupt 
        = vlSelf->cores_0_cpu_logic_cpu_softwareInterrupt;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_rsp_valid 
        = vlSelf->_zz_when_Stream_l372;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.dBus_cmd_ready 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_ready;
    vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_ready 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_m2sPipe_ready;
    if (vlSelf->when_Stream_l372_1) {
        vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_ready = 1U;
    }
    vlSelf->dBusCoherent_bmb_cmd_s2mPipe_ready = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_m2sPipe_ready;
    if (vlSelf->when_Stream_l372_4) {
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_ready = 1U;
    }
    vlSelf->_zz_cores_0_cpu_dBus_connector_decoder_rsp_ready 
        = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_ready;
    if (vlSelf->when_Stream_l372_2) {
        vlSelf->_zz_cores_0_cpu_dBus_connector_decoder_rsp_ready = 1U;
    }
    vlSelf->plic_logic_bus_readHaltTrigger = 0U;
    if (vlSelf->when_PlicMapper_l122) {
        vlSelf->plic_logic_bus_readHaltTrigger = 1U;
    }
    vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_rsp_valid 
        = vlSelf->clint_logic_io_bus_rsp_valid;
    vlSelf->clint_logic__DOT___zz_factory_rsp_ready_1 
        = vlSelf->clintWishboneBridge_logic_bridge_io_output_rsp_ready;
    if (vlSelf->clint_logic__DOT__when_Stream_l372) {
        vlSelf->clint_logic__DOT___zz_factory_rsp_ready_1 = 1U;
    }
    vlSelf->clintWishboneBridge_logic_bridge_io_input_ACK 
        = vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_rsp_fire;
    vlSelf->clintWishboneBridge_logic_bridge__DOT__io_input_ACK 
        = vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_rsp_fire;
    vlSelf->clintWishbone_ACK = vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_rsp_fire;
    vlSelf->_zz_cores_0_cpu_iBus_connector_decoder_rsp_ready 
        = vlSelf->cores_0_cpu_iBus_rsp_ready;
    if (vlSelf->when_Stream_l372_3) {
        vlSelf->_zz_cores_0_cpu_iBus_connector_decoder_rsp_ready = 1U;
    }
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.iBus_rsp_valid 
        = vlSelf->cores_0_cpu_iBus_rsp_valid;
    vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_rsp_valid 
        = vlSelf->plic_logic_bmb_rsp_valid;
    vlSelf->_zz_plic_logic_bus_rsp_ready_1 = vlSelf->plic_logic_bmb_rsp_ready;
    if (vlSelf->when_Stream_l372) {
        vlSelf->_zz_plic_logic_bus_rsp_ready_1 = 1U;
    }
    vlSelf->plicWishboneBridge_logic_bridge_io_input_ACK 
        = vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_rsp_fire;
    vlSelf->plicWishboneBridge_logic_bridge__DOT__io_input_ACK 
        = vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_rsp_fire;
    vlSelf->plicWishbone_ACK = vlSelf->plicWishboneBridge_logic_bridge__DOT__io_output_rsp_fire;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz___05Fzz_maskProposal_0_2_1 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz___05Fzz_maskProposal_0_2_2;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_valid 
        = vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_cmd_valid;
    vlSelf->iArbiter_bmb_decoder__DOT__io_input_cmd_valid 
        = vlSelf->iArbiter_bmb_cmd_halfPipe_valid;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_cmd_valid 
        = vlSelf->iArbiter_bmb_decoder_io_outputs_0_cmd_valid;
    vlSelf->cores_0_cpu_iBus_cmd_halfPipe_ready = vlSelf->iArbiter_bmb_cmd_ready;
    vlSelf->cores_0_cpu_iBus_connector_decoder_cmd_ready 
        = vlSelf->iArbiter_bmb_cmd_ready;
    vlSelf->iArbiter_bmb_slaveModel_arbiterGen_oneToOne_arbiter_cmd_ready 
        = vlSelf->iArbiter_bmb_cmd_ready;
    vlSelf->cores_0_cpu_iBus_cmd_halfPipe_fire = ((IData)(vlSelf->iArbiter_bmb_cmd_ready) 
                                                  & (IData)(vlSelf->cores_0_cpu_iBus_cmd_rValid));
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz_maskProposal_0_1 
        = (0xfU & (((IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz_maskProposal_0) 
                    << 2U) | (IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz_maskProposal_0)));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_1_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_0_valid) 
                    & ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_62) 
                       <= (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_0_priority)))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_1_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_0_valid) 
                    & ((IData)(vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_62) 
                       <= (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_0_priority)))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_45 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_31_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_30_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_14))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_45 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_31_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_30_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_14))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_42 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_29_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_28_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_13))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_42 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_29_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_28_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_13))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_39 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_27_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_26_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_12))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_39 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_27_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_26_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_12))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_36 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_25_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_24_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_11))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_36 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_25_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_24_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_11))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_30 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_21_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_20_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_9))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_30 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_21_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_20_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_9))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_27 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_19_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_18_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_8))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_27 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_19_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_18_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_8))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_24 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_17_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_16_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_7))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_24 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_17_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_16_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_7))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_21 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_15_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_14_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_6))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_21 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_15_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_14_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_6))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_18 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_13_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_12_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_5))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_18 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_13_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_12_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_5))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_15 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_11_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_10_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_4))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_15 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_11_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_10_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_4))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_12 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_9_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_8_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_3))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_12 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_9_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_8_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_3))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_9 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_7_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_6_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_2))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_9 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_7_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_6_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_2))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_6 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_5_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_4_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_1))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_6 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_5_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_4_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_1))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_3 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_3_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_2_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_0))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_3 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_3_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_2_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_0))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_33 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_23_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_22_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_10))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_33 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_23_valid)) 
                 | ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_22_valid) 
                    & (IData)(__VdfgRegularize_h09b8325e_1_10))));
    vlSelf->peripheralBridge_logic_io_input_cmd_ready 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_ready;
    vlSelf->peripheralBridge_logic__DOT__io_input_cmd_ready 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_ready;
    vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_ready 
        = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_m2sPipe_ready;
    if (vlSelf->when_Stream_l372_8) {
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_ready = 1U;
    }
    vlSelf->peripheralBridge_logic_io_output_STB = vlSelf->peripheral_STB;
    vlSelf->peripheralBridge_logic__DOT__io_output_STB 
        = vlSelf->peripheral_STB;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_output_ready 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_cmd_ready;
    vlSelf->cores_0_cpu_dBus_connector_decoder_rsp_ready 
        = vlSelf->_zz_cores_0_cpu_dBus_connector_decoder_rsp_ready;
    vlSelf->dBusCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_ready 
        = vlSelf->_zz_cores_0_cpu_dBus_connector_decoder_rsp_ready;
    vlSelf->dBusCoherent_bmb_rsp_ready = vlSelf->_zz_cores_0_cpu_dBus_connector_decoder_rsp_ready;
    vlSelf->dBusCoherent_bmb_connector_decoder_rsp_ready 
        = vlSelf->_zz_cores_0_cpu_dBus_connector_decoder_rsp_ready;
    vlSelf->dBusNonCoherent_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_ready 
        = vlSelf->_zz_cores_0_cpu_dBus_connector_decoder_rsp_ready;
    vlSelf->dBusNonCoherent_bmb_rsp_ready = vlSelf->_zz_cores_0_cpu_dBus_connector_decoder_rsp_ready;
    vlSelf->_zz_plic_logic_bus_rsp_ready = (1U & (~ 
                                                  ((IData)(vlSelf->plic_logic_bus_readHaltTrigger) 
                                                   | (IData)(vlSelf->plic_logic_bus_writeHaltTrigger))));
    vlSelf->clint_logic_io_bus_cmd_ready = ((IData)(vlSelf->clint_logic__DOT___zz_factory_rsp_ready) 
                                            & (IData)(vlSelf->clint_logic__DOT___zz_factory_rsp_ready_1));
    vlSelf->cores_0_cpu_iBus_connector_decoder_rsp_ready 
        = vlSelf->_zz_cores_0_cpu_iBus_connector_decoder_rsp_ready;
    vlSelf->iArbiter_bmb_slaveModel_arbiterGen_oneToOne_arbiter_rsp_ready 
        = vlSelf->_zz_cores_0_cpu_iBus_connector_decoder_rsp_ready;
    vlSelf->iArbiter_bmb_rsp_ready = vlSelf->_zz_cores_0_cpu_iBus_connector_decoder_rsp_ready;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_0_valid 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_cmd_valid;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_inputs_1_valid 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_cmd_valid;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz___05Fzz_maskProposal_0_2 
        = (0xfU & ((IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz_maskProposal_0_1) 
                   - (IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz___05Fzz_maskProposal_0_2_1)));
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_82 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_0_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_1 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_0_priority;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_2 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_0_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_82 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_1_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_1 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_62;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_2 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_1_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_82 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_0_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_1 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_0_priority;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_2 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_0_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_82 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_1_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_1 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_62;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_2 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_1_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_45) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_97 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_30_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_46 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_91;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_47 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_30_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_97 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_31_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_46 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_92;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_47 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_31_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_45) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_97 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_30_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_46 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_91;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_47 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_30_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_97 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_31_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_46 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_92;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_47 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_31_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_42) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_96 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_28_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_43 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_89;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_44 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_28_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_96 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_29_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_43 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_90;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_44 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_29_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_42) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_96 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_28_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_43 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_89;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_44 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_28_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_96 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_29_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_43 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_90;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_44 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_29_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_39) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_95 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_26_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_40 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_87;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_41 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_26_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_95 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_27_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_40 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_88;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_41 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_27_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_39) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_95 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_26_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_40 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_87;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_41 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_26_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_95 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_27_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_40 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_88;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_41 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_27_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_36) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_94 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_24_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_37 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_85;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_38 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_24_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_94 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_25_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_37 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_86;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_38 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_25_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_36) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_94 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_24_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_37 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_85;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_38 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_24_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_94 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_25_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_37 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_86;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_38 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_25_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_30) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_92 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_20_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_31 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_81;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_32 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_20_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_92 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_21_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_31 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_82;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_32 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_21_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_30) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_92 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_20_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_31 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_81;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_32 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_20_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_92 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_21_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_31 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_82;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_32 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_21_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_27) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_91 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_18_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_28 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_79;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_29 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_18_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_91 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_19_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_28 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_80;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_29 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_19_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_27) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_91 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_18_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_28 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_79;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_29 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_18_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_91 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_19_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_28 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_80;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_29 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_19_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_24) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_90 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_16_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_25 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_77;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_26 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_16_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_90 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_17_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_25 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_78;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_26 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_17_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_24) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_90 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_16_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_25 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_77;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_26 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_16_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_90 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_17_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_25 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_78;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_26 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_17_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_21) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_89 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_14_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_22 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_75;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_23 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_14_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_89 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_15_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_22 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_76;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_23 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_15_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_21) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_89 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_14_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_22 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_75;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_23 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_14_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_89 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_15_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_22 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_76;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_23 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_15_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_18) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_88 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_12_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_19 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_73;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_20 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_12_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_88 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_13_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_19 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_74;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_20 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_13_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_18) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_88 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_12_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_19 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_73;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_20 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_12_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_88 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_13_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_19 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_74;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_20 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_13_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_15) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_87 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_10_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_16 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_71;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_17 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_10_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_87 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_11_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_16 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_72;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_17 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_11_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_15) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_87 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_10_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_16 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_71;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_17 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_10_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_87 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_11_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_16 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_72;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_17 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_11_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_12) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_86 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_8_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_13 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_69;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_14 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_8_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_86 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_9_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_13 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_70;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_14 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_9_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_12) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_86 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_8_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_13 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_69;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_14 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_8_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_86 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_9_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_13 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_70;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_14 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_9_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_9) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_85 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_6_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_10 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_67;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_11 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_6_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_85 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_7_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_10 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_68;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_11 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_7_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_9) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_85 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_6_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_10 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_67;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_11 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_6_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_85 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_7_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_10 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_68;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_11 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_7_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_6) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_84 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_4_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_7 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_65;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_8 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_4_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_84 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_5_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_7 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_66;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_8 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_5_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_6) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_84 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_4_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_7 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_65;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_8 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_4_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_84 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_5_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_7 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_66;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_8 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_5_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_3) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_83 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_2_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_4 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_63;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_5 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_2_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_83 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_3_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_4 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_64;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_5 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_3_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_3) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_83 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_2_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_4 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_63;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_5 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_2_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_83 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_3_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_4 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_64;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_5 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_3_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_33) {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_93 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_22_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_34 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_83;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_35 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_22_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_93 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_23_id;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_34 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_84;
        vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_35 
            = vlSelf->cores_0_cpu_externalInterrupt_plic_target_requests_23_valid;
    }
    if (vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_33) {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_93 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_22_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_34 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_83;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_35 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_22_valid;
    } else {
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_93 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_23_id;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_34 
            = vlSelf->_zz_plic_logic_bus_rsp_payload_fragment_data_84;
        vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_35 
            = vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_requests_23_valid;
    }
    vlSelf->_zz_peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_ready 
        = vlSelf->dBusNonCoherent_bmb_rsp_ready;
    if (vlSelf->when_Stream_l372_7) {
        vlSelf->_zz_peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_ready = 1U;
    }
    vlSelf->plic_logic_bmb_cmd_ready = ((IData)(vlSelf->_zz_plic_logic_bus_rsp_ready) 
                                        & (IData)(vlSelf->_zz_plic_logic_bus_rsp_ready_1));
    vlSelf->clintWishboneBridge_logic_bridge__DOT__io_output_cmd_ready 
        = vlSelf->clint_logic_io_bus_cmd_ready;
    vlSelf->clint_logic__DOT__io_bus_cmd_ready = vlSelf->clint_logic_io_bus_cmd_ready;
    vlSelf->clint_logic__DOT__factory_rsp_ready = vlSelf->clint_logic_io_bus_cmd_ready;
    vlSelf->_zz_io_input_rsp_ready = vlSelf->iArbiter_bmb_rsp_ready;
    if (vlSelf->when_Stream_l372_5) {
        vlSelf->_zz_io_input_rsp_ready = 1U;
    }
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz_maskProposal_0_2 
        = ((~ (IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz___05Fzz_maskProposal_0_2)) 
           & (IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT___zz_maskProposal_0_1));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_69 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_47)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_44) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_46) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_43)))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_69 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_47)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_44) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_46) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_43)))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_66 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_41)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_38) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_40) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_37)))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_66 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_41)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_38) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_40) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_37)))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_60 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_29)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_26) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_28) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_25)))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_60 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_29)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_26) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_28) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_25)))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_57 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_23)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_20) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_22) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_19)))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_57 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_23)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_20) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_22) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_19)))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_54 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_17)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_14) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_16) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_13)))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_54 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_17)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_14) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_16) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_13)))));
    vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_51 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_11)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_8) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_10) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_bestRequest_id_7)))));
    vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_51 
        = (1U & ((~ (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_11)) 
                 | ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_8) 
                    & ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_10) 
                       <= (IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id_7)))));
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__16(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__16\n"); );
    // Body
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_valid 
        = ((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__inputArea_target_buffercc__DOT__buffers_1) 
           != (IData)(vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__outputArea_hit));
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_ackReset 
        = vlSelf->cores_0_cpu_debugRiscv_ackReset;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.iBus_rsp_payload_error 
        = vlSelf->cores_0_cpu_logic_cpu_iBus_rsp_payload_error;
    vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l102 
        = (0U == vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_hartSelNew);
    vlSelf->privilegedDebug_logic_dm__DOT__switch_DebugModule_l287 
        = (vlSelf->privilegedDebug_logic_dm__DOT__logic_command_data 
           >> 0x18U);
    vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_notSupported 
        = (((IData)(vlSelf->privilegedDebug_logic_dm__DOT___zz_logic_command_access_notSupported) 
            < (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_args_aarsize)) 
           | ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_args_aarpostincrement) 
              | ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_command_access_args_transfer) 
                 & (0x80U != (0x7ffU & (vlSelf->privilegedDebug_logic_dm__DOT__logic_command_data 
                                        >> 5U))))));
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.dBus_rsp_payload_error 
        = vlSelf->cores_0_cpu_logic_cpu_dBus_rsp_payload_error;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle_io_output_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_valid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__io_output_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_valid;
    vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_jtagLogic_dmiCmd_ccToggle__DOT__outputArea_flow_valid 
        = vlSelf->privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__tunnel_logic_jtagLogic_dmiCmd_ccToggle_io_output_toStream_valid;
    vlSelf->systemCd_logic_outputReset = vlSelf->systemCd_logic_outputResetUnbuffered;
    vlSelf->systemCd_logic_outputResetUnbuffered = 0U;
    if (vlSelf->when_ClockDomainGenerator_l222_1) {
        vlSelf->systemCd_logic_outputResetUnbuffered = 1U;
    }
    vlSelf->clint_logic__DOT__systemCd_logic_outputReset 
        = vlSelf->systemCd_logic_outputReset;
    vlSelf->clintWishboneBridge_logic_bridge__DOT__systemCd_logic_outputReset 
        = vlSelf->systemCd_logic_outputReset;
    vlSelf->plicWishboneBridge_logic_bridge__DOT__systemCd_logic_outputReset 
        = vlSelf->systemCd_logic_outputReset;
    vlSelf->peripheralBridge_logic__DOT__systemCd_logic_outputReset 
        = vlSelf->systemCd_logic_outputReset;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__systemCd_logic_outputReset 
        = vlSelf->systemCd_logic_outputReset;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.systemCd_logic_outputReset 
        = vlSelf->systemCd_logic_outputReset;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__systemCd_logic_outputReset 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT__systemCd_logic_outputReset;
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__2(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__2\n"); );
    // Body
    vlSelf->cores_0_cpu_logic_cpu_debugBus_ebreak = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_ebreak;
    vlSelf->cores_0_cpu_logic_cpu_debugBus_exception 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_exception;
    vlSelf->cores_0_cpu_logic_cpu_debugBus_commit = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_commit;
    vlSelf->cores_0_cpu_logic_cpu_debugBus_hartToDm_valid 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_hartToDm_valid;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_selected_ebreak 
        = vlSelf->cores_0_cpu_logic_cpu_debugBus_ebreak;
    vlSelf->cores_0_cpu_debugRiscv_ebreak = vlSelf->cores_0_cpu_logic_cpu_debugBus_ebreak;
    vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l263 
        = vlSelf->cores_0_cpu_logic_cpu_debugBus_exception;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_selected_exception 
        = vlSelf->cores_0_cpu_logic_cpu_debugBus_exception;
    vlSelf->cores_0_cpu_debugRiscv_exception = vlSelf->cores_0_cpu_logic_cpu_debugBus_exception;
    vlSelf->privilegedDebug_logic_dm__DOT__logic_selected_commit 
        = vlSelf->cores_0_cpu_logic_cpu_debugBus_commit;
    vlSelf->cores_0_cpu_debugRiscv_commit = vlSelf->cores_0_cpu_logic_cpu_debugBus_commit;
    vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l350 
        = ((IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_commit) 
           | (IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_regSuccess));
    vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l366 
        = ((IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_ebreak) 
           | ((IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_commit) 
              | (IData)(vlSelf->cores_0_cpu_logic_cpu_debugBus_exception)));
    vlSelf->privilegedDebug_logic_dm__DOT__logic_fromHarts_valid 
        = vlSelf->cores_0_cpu_logic_cpu_debugBus_hartToDm_valid;
    vlSelf->cores_0_cpu_debugRiscv_hartToDm_valid = vlSelf->cores_0_cpu_logic_cpu_debugBus_hartToDm_valid;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_ebreak 
        = vlSelf->cores_0_cpu_debugRiscv_ebreak;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_exception 
        = vlSelf->cores_0_cpu_debugRiscv_exception;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_commit 
        = vlSelf->cores_0_cpu_debugRiscv_commit;
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_hartToDm_valid 
        = vlSelf->cores_0_cpu_debugRiscv_hartToDm_valid;
}

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__6(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__6\n"); );
    // Body
    vlSelf->peripheralBridge_logic__DOT__rsp_payload_last 
        = ((IData)(vlSelf->peripheralBridge_logic__DOT__beatCounter) 
           == (IData)(vlSelf->peripheralBridge_logic__DOT__beatCount));
    vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_valid 
        = ((~ (IData)(vlSelf->_zz_io_output_rsp_payload_fragment_source)) 
           & (IData)(vlSelf->_zz_when_Stream_l372_1));
    vlSelf->iArbiter_bmb_decoder_io_input_rsp_valid 
        = ((IData)(vlSelf->_zz_io_output_rsp_payload_fragment_source) 
           & (IData)(vlSelf->_zz_when_Stream_l372_1));
    if (vlSelf->dBusCoherent_bmb_cmd_rValidN) {
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_last 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_last;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_opcode 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_opcode;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_address 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_address;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_length 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_length;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_data 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_data;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_mask 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_mask;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_context 
            = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_cmd_s2mPipe_rData_fragment_context;
    } else {
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_last 
            = vlSelf->dBusCoherent_bmb_cmd_rData_last;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_opcode 
            = vlSelf->dBusCoherent_bmb_cmd_rData_fragment_opcode;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_address 
            = vlSelf->dBusCoherent_bmb_cmd_rData_fragment_address;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_length 
            = vlSelf->dBusCoherent_bmb_cmd_rData_fragment_length;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_data 
            = vlSelf->dBusCoherent_bmb_cmd_rData_fragment_data;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_mask 
            = vlSelf->dBusCoherent_bmb_cmd_rData_fragment_mask;
        vlSelf->dBusCoherent_bmb_cmd_s2mPipe_payload_fragment_context 
            = vlSelf->dBusCoherent_bmb_cmd_rData_fragment_context;
    }
    if (vlSelf->dBusNonCoherent_bmb_cmd_rValidN) {
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_last 
            = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_last;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_opcode 
            = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_opcode;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_address 
            = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_address;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_length 
            = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_length;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_data 
            = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_data;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_mask 
            = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_mask;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_context 
            = vlSelf->dBusCoherent_bmb_cmd_s2mPipe_rData_fragment_context;
    } else {
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_last 
            = vlSelf->dBusNonCoherent_bmb_cmd_rData_last;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_opcode 
            = vlSelf->dBusNonCoherent_bmb_cmd_rData_fragment_opcode;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_address 
            = vlSelf->dBusNonCoherent_bmb_cmd_rData_fragment_address;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_length 
            = vlSelf->dBusNonCoherent_bmb_cmd_rData_fragment_length;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_data 
            = vlSelf->dBusNonCoherent_bmb_cmd_rData_fragment_data;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_mask 
            = vlSelf->dBusNonCoherent_bmb_cmd_rData_fragment_mask;
        vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_payload_fragment_context 
            = vlSelf->dBusNonCoherent_bmb_cmd_rData_fragment_context;
    }
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_iep 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalInterrupt_plic_target_threshold) 
           < (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_bestRequest_priority));
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_iep 
        = ((IData)(vlSelf->_zz_cores_0_cpu_externalSupervisorInterrupt_plic_target_threshold) 
           < (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_priority));
    if (vlSelf->peripheralBridge_logic__DOT__rsp_rValidN) {
        vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_payload_fragment_source 
            = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_source;
        vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_payload_fragment_opcode 
            = vlSelf->peripheralBridge_logic__DOT__rsp_payload_fragment_opcode;
        vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_payload_fragment_context 
            = vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_context;
        vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_payload_last 
            = vlSelf->peripheralBridge_logic__DOT__rsp_payload_last;
    } else {
        vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_payload_fragment_source 
            = vlSelf->peripheralBridge_logic__DOT__rsp_rData_fragment_source;
        vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_payload_fragment_opcode 
            = vlSelf->peripheralBridge_logic__DOT__rsp_rData_fragment_opcode;
        vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_payload_fragment_context 
            = vlSelf->peripheralBridge_logic__DOT__rsp_rData_fragment_context;
        vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_payload_last 
            = vlSelf->peripheralBridge_logic__DOT__rsp_rData_last;
    }
    vlSelf->cores_0_cpu_logic_cpu_dBus_rsp_valid = vlSelf->toplevel_cores_0_cpu_logic_cpu_dBus_Bridge_bus_rsp_valid;
    if (vlSelf->when_DataCache_l535) {
        vlSelf->cores_0_cpu_logic_cpu_dBus_rsp_valid = 0U;
    }
    vlSelf->peripheralBridge_logic__DOT___zz_io_output_ADR 
        = (0xfffU & (vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_address 
                     + (IData)(vlSelf->peripheralBridge_logic__DOT___zz_io_output_ADR_1)));
    vlSelf->peripheralBridge_bmb_arbiter__DOT___zz_io_output_rsp_ready 
        = ((IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_rspSel)
            ? (IData)(vlSelf->iArbiter_bmb_decoder_io_outputs_0_rsp_ready)
            : (IData)(vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_ready));
    if (vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__maskRouted_0) {
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_data 
            = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_data;
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_mask 
            = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_mask;
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_opcode 
            = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_opcode;
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_address 
            = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_address;
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_length 
            = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_length;
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_context 
            = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_fragment_context;
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_last 
            = vlSelf->dBusNonCoherent_bmb_cmd_s2mPipe_rData_last;
    } else {
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_data = 0U;
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_mask = 0U;
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_opcode 
            = vlSelf->iArbiter_bmb_cmd_rData_fragment_opcode;
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_address 
            = vlSelf->iArbiter_bmb_cmd_rData_fragment_address;
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_length 
            = vlSelf->iArbiter_bmb_cmd_rData_fragment_length;
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_context 
            = vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_inputs_1_payload_fragment_context;
        vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_last 
            = vlSelf->iArbiter_bmb_cmd_rData_last;
    }
    if (vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rValidN) {
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_source 
            = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_source;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_data 
            = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_data;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_mask 
            = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_mask;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_opcode 
            = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_opcode;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_address 
            = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_address;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_length 
            = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_length;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_context 
            = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_context;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_last 
            = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_last;
    } else {
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_source 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rData_fragment_source;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_data 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rData_fragment_data;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_mask 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rData_fragment_mask;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_opcode 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rData_fragment_opcode;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_address 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rData_fragment_address;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_length 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rData_fragment_length;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_fragment_context 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rData_fragment_context;
        vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_s2mPipe_payload_last 
            = vlSelf->toplevel_peripheralBridge_bmb_arbiter_io_output_cmd_rData_last;
    }
    if (vlSelf->peripheralBridge_logic__DOT__rsp_payload_last) {
        vlSelf->peripheralBridge_logic__DOT__beatLast = 1U;
        vlSelf->peripheral_CTI = ((0U == (IData)(vlSelf->peripheralBridge_logic__DOT__beatCount))
                                   ? 0U : 7U);
    } else {
        vlSelf->peripheralBridge_logic__DOT__beatLast = 0U;
        vlSelf->peripheral_CTI = 2U;
    }
    vlSelf->peripheralBridge_bmb_arbiter_io_inputs_0_rsp_valid 
        = vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_valid;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_0_rsp_valid 
        = vlSelf->peripheralBridge_bmb_slaveModel_arbiterGen_logic_sorted_0_decoder_rsp_valid;
    vlSelf->iArbiter_bmb_decoder__DOT__io_input_rsp_valid 
        = vlSelf->iArbiter_bmb_decoder_io_input_rsp_valid;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_inputs_1_rsp_valid 
        = vlSelf->iArbiter_bmb_decoder_io_input_rsp_valid;
    vlSelf->peripheralBridge_bmb_arbiter_io_inputs_1_rsp_valid 
        = vlSelf->iArbiter_bmb_decoder_io_input_rsp_valid;
    vlSelf->cores_0_cpu_externalInterrupt_plic_target_claim 
        = ((IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_iep)
            ? (IData)(vlSelf->cores_0_cpu_externalInterrupt_plic_target_bestRequest_id)
            : 0U);
    vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_claim 
        = ((IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_iep)
            ? (IData)(vlSelf->cores_0_cpu_externalSupervisorInterrupt_plic_target_bestRequest_id)
            : 0U);
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.dBus_rsp_valid 
        = vlSelf->cores_0_cpu_logic_cpu_dBus_rsp_valid;
    vlSelf->peripheral_ADR = (0x3fffffffU & ((0x3ffffc00U 
                                              & (vlSelf->peripheralBridge_logic__DOT__io_input_cmd_rData_fragment_address 
                                                 >> 2U)) 
                                             | ((IData)(vlSelf->peripheralBridge_logic__DOT___zz_io_output_ADR) 
                                                >> 2U)));
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_rsp_ready 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT___zz_io_output_rsp_ready;
    vlSelf->peripheralBridge_bmb_arbiter_io_output_rsp_ready 
        = vlSelf->peripheralBridge_bmb_arbiter__DOT___zz_io_output_rsp_ready;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_cmd_payload_fragment_data 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_data;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_output_payload_fragment_data 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_data;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_output_payload_fragment_data 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_data;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_cmd_payload_fragment_mask 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_mask;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_output_payload_fragment_mask 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_mask;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_output_payload_fragment_mask 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_mask;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_cmd_payload_fragment_opcode 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_opcode;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_output_payload_fragment_opcode 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_opcode;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_output_payload_fragment_opcode 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_opcode;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_cmd_payload_fragment_address 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_address;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_output_payload_fragment_address 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_address;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_output_payload_fragment_address 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_address;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_cmd_payload_fragment_length 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_length;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_output_payload_fragment_length 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_length;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_output_payload_fragment_length 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_length;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_cmd_payload_fragment_context 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_context;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_output_payload_fragment_context 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_context;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_output_payload_fragment_context 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_fragment_context;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__io_output_cmd_payload_last 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_last;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter_io_output_payload_last 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_last;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_output_payload_last 
        = vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_last;
    vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__when_Stream_l671 
        = ((IData)(vlSelf->peripheralBridge_bmb_arbiter__DOT__memory_arbiter__DOT__io_output_fire) 
           & (IData)(vlSelf->peripheralBridge_bmb_arbiter_io_output_cmd_payload_last));
    vlSelf->peripheralBridge_logic_io_output_CTI = vlSelf->peripheral_CTI;
    vlSelf->peripheralBridge_logic__DOT__io_output_CTI 
        = vlSelf->peripheral_CTI;
    vlSelf->iArbiter_bmb_decoder__DOT__io_outputs_0_rsp_valid 
        = vlSelf->peripheralBridge_bmb_arbiter_io_inputs_1_rsp_valid;
    vlSelf->peripheralBridge_logic_io_output_ADR = vlSelf->peripheral_ADR;
    vlSelf->peripheralBridge_logic__DOT__io_output_ADR 
        = vlSelf->peripheral_ADR;
    vlSelf->_zz_io_input_rsp_ready_1 = vlSelf->peripheralBridge_bmb_arbiter_io_output_rsp_ready;
    if (vlSelf->when_Stream_l372_9) {
        vlSelf->_zz_io_input_rsp_ready_1 = 1U;
    }
    vlSelf->peripheralBridge_logic__DOT__io_input_rsp_ready 
        = vlSelf->_zz_io_input_rsp_ready_1;
    vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_m2sPipe_ready 
        = vlSelf->_zz_io_input_rsp_ready_1;
    vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_ready 
        = vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_m2sPipe_ready;
    if (vlSelf->peripheralBridge_logic__DOT__when_Stream_l372) {
        vlSelf->peripheralBridge_logic__DOT__rsp_s2mPipe_ready = 1U;
    }
}
