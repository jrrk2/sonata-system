// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsonata.h for the primary calling header

#include "Vsonata__pch.h"
#include "Vsonata_VexRiscv.h"

VL_INLINE_OPT void Vsonata_VexRiscv___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__1(Vsonata_VexRiscv* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsonata_VexRiscv___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__1\n"); );
    // Body
    vlSelf->CsrPlugin_inject_cmd_toStream_payload_size 
        = vlSelf->debugBus_dmToHart_payload_size;
    vlSelf->CsrPlugin_inject_cmd_payload_size = vlSelf->debugBus_dmToHart_payload_size;
    vlSelf->CsrPlugin_inject_cmd_toStream_payload_data 
        = vlSelf->debugBus_dmToHart_payload_data;
    vlSelf->CsrPlugin_inject_cmd_payload_data = vlSelf->debugBus_dmToHart_payload_data;
    vlSelf->CsrPlugin_inject_cmd_toStream_payload_address 
        = vlSelf->debugBus_dmToHart_payload_address;
    vlSelf->CsrPlugin_inject_cmd_payload_address = vlSelf->debugBus_dmToHart_payload_address;
    vlSelf->CsrPlugin_inject_cmd_toStream_payload_op 
        = vlSelf->debugBus_dmToHart_payload_op;
    vlSelf->CsrPlugin_inject_cmd_payload_op = vlSelf->debugBus_dmToHart_payload_op;
    vlSelf->IBusCachedPlugin_cache__DOT__io_mem_rsp_payload_data 
        = vlSelf->iBus_rsp_payload_data;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_0_payload_data 
        = vlSelf->iBus_rsp_payload_data;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_1_payload_data 
        = vlSelf->iBus_rsp_payload_data;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_2_payload_data 
        = vlSelf->iBus_rsp_payload_data;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_3_payload_data 
        = vlSelf->iBus_rsp_payload_data;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_4_payload_data 
        = vlSelf->iBus_rsp_payload_data;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_5_payload_data 
        = vlSelf->iBus_rsp_payload_data;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_6_payload_data 
        = vlSelf->iBus_rsp_payload_data;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_7_payload_data 
        = vlSelf->iBus_rsp_payload_data;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_8_payload_data 
        = vlSelf->iBus_rsp_payload_data;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_9_payload_data 
        = vlSelf->iBus_rsp_payload_data;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_10_payload_data 
        = vlSelf->iBus_rsp_payload_data;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_11_payload_data 
        = vlSelf->iBus_rsp_payload_data;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_12_payload_data 
        = vlSelf->iBus_rsp_payload_data;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_13_payload_data 
        = vlSelf->iBus_rsp_payload_data;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_14_payload_data 
        = vlSelf->iBus_rsp_payload_data;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_15_payload_data 
        = vlSelf->iBus_rsp_payload_data;
}

VL_INLINE_OPT void Vsonata_VexRiscv___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__2(Vsonata_VexRiscv* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsonata_VexRiscv___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__2\n"); );
    // Init
    CData/*0:0*/ __Vdly__CsrPlugin_sstatus_SPIE;
    __Vdly__CsrPlugin_sstatus_SPIE = 0;
    CData/*1:0*/ __Vdly__CsrPlugin_dcsr_prv;
    __Vdly__CsrPlugin_dcsr_prv = 0;
    IData/*31:0*/ __Vdly__DBusCachedPlugin_rspCounter;
    __Vdly__DBusCachedPlugin_rspCounter = 0;
    IData/*31:0*/ __Vdly__IBusCachedPlugin_rspCounter;
    __Vdly__IBusCachedPlugin_rspCounter = 0;
    CData/*0:0*/ __Vdly__CsrPlugin_mstatus_MIE;
    __Vdly__CsrPlugin_mstatus_MIE = 0;
    QData/*63:0*/ __Vdly__CounterPlugin_instret;
    __Vdly__CounterPlugin_instret = 0;
    CData/*2:0*/ __Vdly__IBusCachedPlugin_injector_port_state;
    __Vdly__IBusCachedPlugin_injector_port_state = 0;
    CData/*3:0*/ __Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex;
    __Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex = 0;
    CData/*0:0*/ __Vdly__dataCache_1__DOT__stageB_lrSc_reserved;
    __Vdly__dataCache_1__DOT__stageB_lrSc_reserved = 0;
    CData/*0:0*/ __Vdly__dataCache_1__DOT__stageB_flusher_waitDone;
    __Vdly__dataCache_1__DOT__stageB_flusher_waitDone = 0;
    CData/*6:0*/ __Vdly__dataCache_1__DOT__stageB_flusher_counter;
    __Vdly__dataCache_1__DOT__stageB_flusher_counter = 0;
    CData/*0:0*/ __Vdly__dataCache_1__DOT__stageB_flusher_start;
    __Vdly__dataCache_1__DOT__stageB_flusher_start = 0;
    CData/*0:0*/ __Vdly__dataCache_1__DOT__loader_error;
    __Vdly__dataCache_1__DOT__loader_error = 0;
    // Body
    __Vdly__DBusCachedPlugin_rspCounter = vlSelf->DBusCachedPlugin_rspCounter;
    __Vdly__CounterPlugin_instret = vlSelf->CounterPlugin_instret;
    __Vdly__IBusCachedPlugin_rspCounter = vlSelf->IBusCachedPlugin_rspCounter;
    __Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wordIndex;
    vlSelf->__Vdly__MmuPlugin_shared_state_1 = vlSelf->MmuPlugin_shared_state_1;
    __Vdly__IBusCachedPlugin_injector_port_state = vlSelf->IBusCachedPlugin_injector_port_state;
    __Vdly__CsrPlugin_mstatus_MIE = vlSelf->CsrPlugin_mstatus_MIE;
    __Vdly__CsrPlugin_sstatus_SPIE = vlSelf->CsrPlugin_sstatus_SPIE;
    __Vdly__dataCache_1__DOT__loader_error = vlSelf->dataCache_1__DOT__loader_error;
    __Vdly__dataCache_1__DOT__stageB_flusher_start 
        = vlSelf->dataCache_1__DOT__stageB_flusher_start;
    __Vdly__dataCache_1__DOT__stageB_flusher_waitDone 
        = vlSelf->dataCache_1__DOT__stageB_flusher_waitDone;
    __Vdly__dataCache_1__DOT__stageB_flusher_counter 
        = vlSelf->dataCache_1__DOT__stageB_flusher_counter;
    __Vdly__CsrPlugin_dcsr_prv = vlSelf->CsrPlugin_dcsr_prv;
    __Vdly__dataCache_1__DOT__stageB_lrSc_reserved 
        = vlSelf->dataCache_1__DOT__stageB_lrSc_reserved;
    vlSelf->_zz_5 = vlSelf->systemCd_logic_outputReset;
    vlSelf->IBusCachedPlugin_fetchPc_booted = (1U & 
                                               (~ (IData)(vlSelf->systemCd_logic_outputReset)));
    vlSelf->CsrPlugin_running_aheadValue_regNext = 
        ((1U & (~ (IData)(vlSelf->systemCd_logic_outputReset))) 
         && (IData)(vlSelf->CsrPlugin_running_aheadValue));
    vlSelf->CsrPlugin_lastStageWasWfi = ((1U & (~ (IData)(vlSelf->systemCd_logic_outputReset))) 
                                         && ((IData)(vlSelf->writeBack_arbitration_isFiring) 
                                             & (2U 
                                                == (IData)(vlSelf->writeBack_ENV_CTRL))));
    vlSelf->HazardSimplePlugin_writeBackBuffer_valid 
        = ((1U & (~ (IData)(vlSelf->systemCd_logic_outputReset))) 
           && (IData)(vlSelf->HazardSimplePlugin_writeBackWrites_valid));
    vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode 
        = ((1U & (~ (IData)(vlSelf->systemCd_logic_outputReset))) 
           && ((1U & (~ (IData)(vlSelf->when_CsrPlugin_l1403))) 
               && (IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValids_decode)));
    vlSelf->execute_CsrPlugin_wfiWake = ((1U & (~ (IData)(vlSelf->systemCd_logic_outputReset))) 
                                         && (((IData)(vlSelf->_zz_when_CsrPlugin_l1446_5) 
                                              | ((IData)(vlSelf->_zz_when_CsrPlugin_l1446_4) 
                                                 | ((IData)(vlSelf->_zz_when_CsrPlugin_l1446_3) 
                                                    | ((IData)(vlSelf->_zz_when_CsrPlugin_l1446_2) 
                                                       | ((IData)(vlSelf->_zz_when_CsrPlugin_l1446_1) 
                                                          | (IData)(vlSelf->_zz_when_CsrPlugin_l1446)))))) 
                                             | (IData)(vlSelf->CsrPlugin_thirdPartyWake)));
    vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute 
        = ((1U & (~ (IData)(vlSelf->systemCd_logic_outputReset))) 
           && ((IData)(vlSelf->when_CsrPlugin_l1403_1)
                ? ((IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValids_decode) 
                   & (~ (IData)(vlSelf->decode_arbitration_isStuck)))
                : (IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValids_execute)));
    vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory 
        = ((1U & (~ (IData)(vlSelf->systemCd_logic_outputReset))) 
           && ((IData)(vlSelf->when_CsrPlugin_l1403_2)
                ? ((IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValids_execute) 
                   & (~ (IData)(vlSelf->execute_arbitration_isStuck)))
                : (IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValids_memory)));
    vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack 
        = ((1U & (~ (IData)(vlSelf->systemCd_logic_outputReset))) 
           && ((IData)(vlSelf->when_CsrPlugin_l1403_3) 
               && ((IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValids_memory) 
                   & (~ (IData)(vlSelf->memory_arbitration_isStuck)))));
    vlSelf->stoptime = ((1U & (~ (IData)(vlSelf->systemCd_logic_outputReset))) 
                        && ((IData)(vlSelf->debugMode) 
                            & (IData)(vlSelf->CsrPlugin_dcsr_stoptime)));
    if (vlSelf->systemCd_logic_outputReset) {
        vlSelf->CounterPlugin_cycle = 0ULL;
        __Vdly__DBusCachedPlugin_rspCounter = 0U;
        __Vdly__CounterPlugin_instret = 0ULL;
        __Vdly__IBusCachedPlugin_rspCounter = 0U;
        __Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex = 0U;
        vlSelf->__Vdly__MmuPlugin_shared_state_1 = 0U;
        __Vdly__IBusCachedPlugin_injector_port_state = 0U;
        __Vdly__CsrPlugin_mstatus_MIE = 0U;
        __Vdly__CsrPlugin_sstatus_SPIE = 0U;
        __Vdly__dataCache_1__DOT__loader_error = 0U;
        __Vdly__dataCache_1__DOT__stageB_flusher_waitDone = 0U;
        __Vdly__dataCache_1__DOT__stageB_flusher_counter = 0U;
        __Vdly__dataCache_1__DOT__stageB_flusher_start = 1U;
        __Vdly__dataCache_1__DOT__stageB_lrSc_reserved = 0U;
        vlSelf->IBusCachedPlugin_fetchPc_correctionReg = 0U;
        vlSelf->MmuPlugin_ports_1_entryToReplace_value = 0U;
        vlSelf->MmuPlugin_ports_0_entryToReplace_value = 0U;
        vlSelf->CsrPlugin_trigger_decodeBreak_timeout_counter_value = 0U;
        vlSelf->memory_MulDivIterativePlugin_div_counter_value = 0U;
        vlSelf->CsrPlugin_timeout_counter_value = 0U;
        vlSelf->CsrPlugin_inject_cmd_toStream_rValid = 0U;
        vlSelf->IBusCachedPlugin_fetchPc_inc = 0U;
        vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_s2mPipe_rValid = 0U;
        vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_1_input_valid_1 = 0U;
        vlSelf->CsrPlugin_inject_pending = 0U;
        vlSelf->dataCache_1__DOT__memCmdSent = 0U;
        vlSelf->execute_to_memory_IS_DBUS_SHARING = 0U;
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_cmdSent = 0U;
        vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid = 0U;
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_flushPending = 1U;
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_valid = 0U;
        vlSelf->_zz_debugBus_haveReset = 0U;
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value = 0U;
        vlSelf->dataCache_1__DOT__loader_killReg = 0U;
        vlSelf->IBusCachedPlugin_fetchPc_pcReg = 0U;
        vlSelf->MmuPlugin_ports_0_dirty = 0U;
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_hadError = 0U;
        vlSelf->dataCache_1__DOT__loader_waysAllocator = 1U;
        vlSelf->dataCache_1__DOT__loader_counter_value = 0U;
        vlSelf->MmuPlugin_ports_1_dirty = 0U;
        vlSelf->_zz_CsrPlugin_doResume = 0U;
        vlSelf->CsrPlugin_mideleg_SS = 0U;
        vlSelf->CsrPlugin_mideleg_SE = 0U;
        vlSelf->CsrPlugin_mideleg_ST = 0U;
        vlSelf->CsrPlugin_mie_MSIE = 0U;
        vlSelf->CsrPlugin_mie_MTIE = 0U;
        vlSelf->CsrPlugin_mie_MEIE = 0U;
        vlSelf->CsrPlugin_trigger_slots_0_tdata1_size = 0U;
        vlSelf->CsrPlugin_trigger_slots_0_tdata1_dmode = 0U;
        vlSelf->CsrPlugin_trigger_slots_0_tdata1_hit = 0U;
        vlSelf->CsrPlugin_dcsr_stepie = 0U;
        vlSelf->CsrPlugin_dcsr_stopcount = 0U;
        vlSelf->CsrPlugin_medeleg_SPF = 0U;
        vlSelf->CsrPlugin_medeleg_LPF = 0U;
        vlSelf->CsrPlugin_medeleg_IPF = 0U;
        vlSelf->CsrPlugin_medeleg_ES = 0U;
        vlSelf->CsrPlugin_medeleg_EU = 0U;
        vlSelf->CsrPlugin_medeleg_SAM = 0U;
        vlSelf->CsrPlugin_medeleg_LAF = 0U;
        vlSelf->CsrPlugin_medeleg_LAM = 0U;
        vlSelf->CsrPlugin_medeleg_BP = 0U;
        vlSelf->CsrPlugin_medeleg_II = 0U;
        vlSelf->CsrPlugin_medeleg_IAF = 0U;
        vlSelf->CsrPlugin_medeleg_IAM = 0U;
        vlSelf->CsrPlugin_medeleg_SAF = 0U;
        vlSelf->CsrPlugin_dcsr_ebreaku = 0U;
        vlSelf->CsrPlugin_dcsr_ebreaks = 0U;
        vlSelf->CsrPlugin_dcsr_ebreakm = 0U;
        vlSelf->CsrPlugin_trigger_slots_0_tdata1_execute = 0U;
        vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_5 = 0U;
        vlSelf->CsrPlugin_trigger_slots_0_tdata1_action = 0U;
        vlSelf->CsrPlugin_trigger_slots_0_tdata1_u = 0U;
        vlSelf->CsrPlugin_trigger_slots_0_tdata1_s = 0U;
        vlSelf->CsrPlugin_trigger_slots_0_tdata1_m = 0U;
        vlSelf->CsrPlugin_pipelineLiberator_pcValids_2 = 0U;
        vlSelf->CsrPlugin_sie_SSIE = 0U;
        vlSelf->CsrPlugin_sie_STIE = 0U;
        vlSelf->CsrPlugin_sie_SEIE = 0U;
        vlSelf->MmuPlugin_status_mxr = 0U;
        vlSelf->MmuPlugin_status_sum = 0U;
        vlSelf->MmuPlugin_status_mprv = 0U;
        vlSelf->CsrPlugin_sip_SSIP = 0U;
        vlSelf->CsrPlugin_sip_STIP = 0U;
        vlSelf->CsrPlugin_sip_SEIP_SOFT = 0U;
        vlSelf->MmuPlugin_satp_mode = 0U;
        vlSelf->CsrPlugin_interrupt_valid = 0U;
        vlSelf->CounterPlugin_inhibitCY = 0U;
        vlSelf->CounterPlugin_inhibitIR = 0U;
        vlSelf->MmuPlugin_ports_0_cache_0_valid = 0U;
        vlSelf->MmuPlugin_ports_0_cache_1_valid = 0U;
        vlSelf->MmuPlugin_ports_0_cache_2_valid = 0U;
        vlSelf->MmuPlugin_ports_0_cache_3_valid = 0U;
        vlSelf->MmuPlugin_ports_1_cache_2_valid = 0U;
        vlSelf->MmuPlugin_ports_1_cache_0_valid = 0U;
        vlSelf->MmuPlugin_ports_1_cache_1_valid = 0U;
        vlSelf->MmuPlugin_ports_1_cache_3_valid = 0U;
        vlSelf->memory_to_writeBack_IS_DBUS_SHARING = 0U;
        vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_2_output_m2sPipe_valid = 0U;
        vlSelf->_zz_CsrPlugin_privilege = 3U;
        __Vdly__CsrPlugin_dcsr_prv = 3U;
        vlSelf->CsrPlugin_dcsr_cause = 0U;
        vlSelf->writeBack_arbitration_isValid = 0U;
        vlSelf->dataCache_1__DOT__loader_valid = 0U;
        vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_rValidN = 1U;
        vlSelf->CsrPlugin_mstatus_MPIE = 0U;
        vlSelf->CsrPlugin_sstatus_SIE = 0U;
        vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_4 = 0U;
        vlSelf->CsrPlugin_pipelineLiberator_pcValids_1 = 0U;
        vlSelf->CsrPlugin_dcsr_stoptime = 0U;
        vlSelf->CsrPlugin_doHalt = 0U;
        vlSelf->CsrPlugin_timeout_state = 0U;
        vlSelf->CsrPlugin_trigger_decodeBreak_timeout_state = 0U;
        vlSelf->CsrPlugin_dcsr_step = 0U;
        vlSelf->CsrPlugin_mstatus_MPP = 3U;
        vlSelf->CsrPlugin_sstatus_SPP = 1U;
        vlSelf->memory_arbitration_isValid = 0U;
        vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_3 = 0U;
        vlSelf->CsrPlugin_pipelineLiberator_pcValids_0 = 0U;
        vlSelf->CsrPlugin_dcsr_stepLogic_stateReg = 0U;
        vlSelf->execute_arbitration_isValid = 0U;
        vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_2 = 0U;
        vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_1 = 0U;
        vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_0 = 0U;
    } else {
        vlSelf->CounterPlugin_cycle = (vlSelf->CounterPlugin_cycle 
                                       + vlSelf->_zz_CounterPlugin_cycle);
        if (vlSelf->dBus_rsp_valid) {
            __Vdly__DBusCachedPlugin_rspCounter = ((IData)(1U) 
                                                   + vlSelf->DBusCachedPlugin_rspCounter);
        }
        if (vlSelf->writeBack_arbitration_isFiring) {
            __Vdly__CounterPlugin_instret = (vlSelf->CounterPlugin_instret 
                                             + vlSelf->_zz_CounterPlugin_instret);
        }
        if ((4U & (IData)(vlSelf->MmuPlugin_shared_state_1))) {
            if (vlSelf->MmuPlugin_shared_dBusRspStaged_valid) {
                vlSelf->__Vdly__MmuPlugin_shared_state_1 = 0U;
                if (vlSelf->MmuPlugin_shared_dBusRspStaged_payload_redo) {
                    vlSelf->__Vdly__MmuPlugin_shared_state_1 = 3U;
                }
            }
        } else if ((2U & (IData)(vlSelf->MmuPlugin_shared_state_1))) {
            if ((1U & (IData)(vlSelf->MmuPlugin_shared_state_1))) {
                if (vlSelf->MmuPlugin_dBusAccess_cmd_ready) {
                    vlSelf->__Vdly__MmuPlugin_shared_state_1 = 4U;
                }
            } else if (vlSelf->MmuPlugin_shared_dBusRspStaged_valid) {
                vlSelf->__Vdly__MmuPlugin_shared_state_1 = 3U;
                if (vlSelf->when_MmuPlugin_l250) {
                    vlSelf->__Vdly__MmuPlugin_shared_state_1 = 0U;
                }
                if (vlSelf->MmuPlugin_shared_dBusRspStaged_payload_redo) {
                    vlSelf->__Vdly__MmuPlugin_shared_state_1 = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelf->MmuPlugin_shared_state_1))) {
            if (vlSelf->MmuPlugin_dBusAccess_cmd_ready) {
                vlSelf->__Vdly__MmuPlugin_shared_state_1 = 2U;
            }
        } else if (vlSelf->when_MmuPlugin_l223) {
            vlSelf->__Vdly__MmuPlugin_shared_state_1 = 1U;
        }
        if ((4U & (IData)(vlSelf->IBusCachedPlugin_injector_port_state))) {
            if ((1U & (~ ((IData)(vlSelf->IBusCachedPlugin_injector_port_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->IBusCachedPlugin_injector_port_state)))) {
                    __Vdly__IBusCachedPlugin_injector_port_state = 0U;
                }
            }
        } else if ((2U & (IData)(vlSelf->IBusCachedPlugin_injector_port_state))) {
            if ((1U & (IData)(vlSelf->IBusCachedPlugin_injector_port_state))) {
                if (vlSelf->when_Fetcher_l391) {
                    __Vdly__IBusCachedPlugin_injector_port_state = 4U;
                }
            } else {
                __Vdly__IBusCachedPlugin_injector_port_state = 3U;
            }
        } else if ((1U & (IData)(vlSelf->IBusCachedPlugin_injector_port_state))) {
            __Vdly__IBusCachedPlugin_injector_port_state = 2U;
        } else if (vlSelf->CsrPlugin_injectionPort_valid) {
            __Vdly__IBusCachedPlugin_injector_port_state = 1U;
        }
        if (vlSelf->when_CsrPlugin_l1534) {
            if (vlSelf->when_CsrPlugin_l1542) {
                if ((1U != (IData)(vlSelf->CsrPlugin_targetPrivilege))) {
                    if ((3U == (IData)(vlSelf->CsrPlugin_targetPrivilege))) {
                        __Vdly__CsrPlugin_mstatus_MIE = 0U;
                    }
                }
            }
        }
        if (vlSelf->when_CsrPlugin_l1600) {
            if ((3U == (IData)(vlSelf->switch_CsrPlugin_l1604))) {
                __Vdly__CsrPlugin_mstatus_MIE = vlSelf->CsrPlugin_mstatus_MPIE;
            }
        }
        if (vlSelf->when_CsrPlugin_l1534) {
            if (vlSelf->when_CsrPlugin_l1542) {
                if ((1U == (IData)(vlSelf->CsrPlugin_targetPrivilege))) {
                    __Vdly__CsrPlugin_sstatus_SPIE 
                        = vlSelf->CsrPlugin_sstatus_SIE;
                }
            }
        }
        if (vlSelf->when_CsrPlugin_l1600) {
            if ((3U != (IData)(vlSelf->switch_CsrPlugin_l1604))) {
                if ((1U == (IData)(vlSelf->switch_CsrPlugin_l1604))) {
                    __Vdly__CsrPlugin_sstatus_SPIE = 1U;
                }
            }
        }
        if (vlSelf->dataCache_1__DOT__when_DataCache_l1097) {
            __Vdly__dataCache_1__DOT__loader_error 
                = ((IData)(vlSelf->dataCache_1__DOT__loader_error) 
                   | (IData)(vlSelf->dBus_rsp_regNext_payload_error));
        }
        if (vlSelf->dataCache_1__DOT__io_cpu_flush_ready) {
            __Vdly__dataCache_1__DOT__stageB_flusher_waitDone = 0U;
        }
        if (vlSelf->dataCache_1__DOT__when_DataCache_l855) {
            if (vlSelf->dataCache_1__DOT__when_DataCache_l861) {
                __Vdly__dataCache_1__DOT__stageB_flusher_counter 
                    = (0x7fU & ((IData)(1U) + (IData)(vlSelf->dataCache_1__DOT__stageB_flusher_counter)));
                if (vlSelf->dataCache_1__DOT__when_DataCache_l863) {
                    __Vdly__dataCache_1__DOT__stageB_flusher_counter 
                        = (0x40U | (IData)(__Vdly__dataCache_1__DOT__stageB_flusher_counter));
                }
            }
        }
        __Vdly__dataCache_1__DOT__stageB_flusher_start 
            = (((((((~ (IData)(vlSelf->dataCache_1__DOT__stageB_flusher_waitDone)) 
                    & (~ (IData)(vlSelf->dataCache_1__DOT__stageB_flusher_start))) 
                   & (IData)(vlSelf->dataCache_1_io_cpu_flush_valid)) 
                  & (~ (IData)(vlSelf->dataCache_1_io_cpu_execute_isValid))) 
                 & (~ (IData)(vlSelf->dataCache_1_io_cpu_memory_isValid))) 
                & (~ (IData)(vlSelf->dataCache_1_io_cpu_writeBack_isValid))) 
               & (~ (IData)(vlSelf->dataCache_1__DOT__io_cpu_redo)));
        if (vlSelf->dataCache_1__DOT__stageB_flusher_start) {
            __Vdly__dataCache_1__DOT__stageB_flusher_waitDone = 1U;
            __Vdly__dataCache_1__DOT__stageB_flusher_counter = 0U;
            if (vlSelf->dataCache_1__DOT__when_DataCache_l877) {
                __Vdly__dataCache_1__DOT__stageB_flusher_counter 
                    = vlSelf->dataCache_1_io_cpu_flush_payload_lineId;
            }
        }
        if (vlSelf->dataCache_1__DOT__when_DataCache_l885) {
            if (vlSelf->dataCache_1__DOT__stageB_request_isLrsc) {
                __Vdly__dataCache_1__DOT__stageB_lrSc_reserved = 1U;
            }
            if (vlSelf->dataCache_1__DOT__stageB_request_wr) {
                __Vdly__dataCache_1__DOT__stageB_lrSc_reserved = 0U;
            }
        }
        if (vlSelf->dataCache_1_io_cpu_writeBack_isValid) {
            if (vlSelf->dataCache_1__DOT__when_DataCache_l1072) {
                __Vdly__dataCache_1__DOT__stageB_lrSc_reserved 
                    = vlSelf->dataCache_1__DOT__stageB_lrSc_reserved;
            }
        }
        if (vlSelf->IBusCachedPlugin_fetchPc_correction) {
            vlSelf->IBusCachedPlugin_fetchPc_correctionReg = 1U;
        }
        vlSelf->MmuPlugin_ports_1_entryToReplace_value 
            = vlSelf->MmuPlugin_ports_1_entryToReplace_valueNext;
        vlSelf->MmuPlugin_ports_0_entryToReplace_value 
            = vlSelf->MmuPlugin_ports_0_entryToReplace_valueNext;
        vlSelf->CsrPlugin_trigger_decodeBreak_timeout_counter_value 
            = vlSelf->CsrPlugin_trigger_decodeBreak_timeout_counter_valueNext;
        vlSelf->memory_MulDivIterativePlugin_div_counter_value 
            = vlSelf->memory_MulDivIterativePlugin_div_counter_valueNext;
        vlSelf->CsrPlugin_timeout_counter_value = vlSelf->CsrPlugin_timeout_counter_valueNext;
        if (vlSelf->CsrPlugin_inject_cmd_toStream_ready) {
            vlSelf->CsrPlugin_inject_cmd_toStream_rValid 
                = vlSelf->CsrPlugin_inject_cmd_toStream_valid;
        }
        if (vlSelf->when_Fetcher_l133) {
            vlSelf->IBusCachedPlugin_fetchPc_inc = 0U;
        }
        if (vlSelf->IBusCachedPlugin_fetchPc_output_fire) {
            vlSelf->IBusCachedPlugin_fetchPc_correctionReg = 0U;
            vlSelf->IBusCachedPlugin_fetchPc_inc = 1U;
        }
        if (vlSelf->when_Fetcher_l133_1) {
            vlSelf->IBusCachedPlugin_fetchPc_inc = 0U;
        }
        if (vlSelf->IBusCachedPlugin_iBusRsp_flush) {
            vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_1_input_valid_1 = 0U;
            vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid = 0U;
            vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_2_output_m2sPipe_valid = 0U;
        }
        if (vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready) {
            vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_1_input_valid_1 
                = vlSelf->IBusCachedPlugin_iBusRsp_stages_0_output_valid;
        }
        if (vlSelf->when_CsrPlugin_l804) {
            vlSelf->CsrPlugin_inject_pending = 1U;
        }
        if (vlSelf->when_CsrPlugin_l804_1) {
            vlSelf->CsrPlugin_inject_pending = 0U;
        }
        if (vlSelf->dataCache_1__DOT__io_mem_cmd_fire) {
            vlSelf->dataCache_1__DOT__memCmdSent = 1U;
        }
        if (vlSelf->dataCache_1__DOT__when_DataCache_l689) {
            vlSelf->dataCache_1__DOT__memCmdSent = 0U;
        }
        if (vlSelf->when_Pipeline_l124_56) {
            vlSelf->execute_to_memory_IS_DBUS_SHARING 
                = vlSelf->execute_IS_DBUS_SHARING;
        }
        if (vlSelf->IBusCachedPlugin_cache__DOT__io_mem_cmd_fire) {
            vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_cmdSent = 1U;
        }
        if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_fire) {
            vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_cmdSent = 0U;
            vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_valid = 0U;
            vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_hadError = 0U;
        }
        if (vlSelf->iBus_rsp_valid) {
            __Vdly__IBusCachedPlugin_rspCounter = ((IData)(1U) 
                                                   + vlSelf->IBusCachedPlugin_rspCounter);
            __Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wordIndex)));
            if (vlSelf->iBus_rsp_payload_error) {
                vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_hadError = 1U;
            }
        }
        if (vlSelf->IBusCachedPlugin_iBusRsp_stages_1_output_ready) {
            vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid 
                = ((IData)(vlSelf->IBusCachedPlugin_iBusRsp_stages_1_output_valid) 
                   & (~ (IData)(vlSelf->IBusCachedPlugin_iBusRsp_flush)));
        }
        if (vlSelf->IBusCachedPlugin_cache_io_flush) {
            vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_flushPending = 1U;
        }
        if (vlSelf->IBusCachedPlugin_cache__DOT__when_InstructionCache_l351) {
            vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_flushPending = 0U;
        }
        if (vlSelf->IBusCachedPlugin_cache_io_cpu_fill_valid) {
            vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_valid = 1U;
        }
        if (vlSelf->CsrPlugin_reseting) {
            vlSelf->_zz_debugBus_haveReset = 1U;
        }
        if (vlSelf->debugBus_ackReset) {
            vlSelf->_zz_debugBus_haveReset = 0U;
        }
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value 
            = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_valueNext;
        if (vlSelf->dataCache_1__DOT__loader_kill) {
            vlSelf->dataCache_1__DOT__loader_killReg = 1U;
        }
        if (vlSelf->when_Fetcher_l160) {
            vlSelf->IBusCachedPlugin_fetchPc_pcReg 
                = vlSelf->IBusCachedPlugin_fetchPc_pc;
        }
        if (vlSelf->when_MmuPlugin_l117) {
            vlSelf->MmuPlugin_ports_0_dirty = 0U;
        }
        if (vlSelf->dataCache_1__DOT__when_DataCache_l1125) {
            vlSelf->dataCache_1__DOT__loader_waysAllocator 
                = (0xffffU & vlSelf->dataCache_1__DOT___zz_loader_waysAllocator);
        }
        vlSelf->dataCache_1__DOT__loader_counter_value 
            = vlSelf->dataCache_1__DOT__loader_counter_valueNext;
        if (vlSelf->when_MmuPlugin_l117_1) {
            vlSelf->MmuPlugin_ports_1_dirty = 0U;
        }
        if (vlSelf->debugBus_resume_cmd_valid) {
            vlSelf->_zz_CsrPlugin_doResume = 1U;
        }
        if (vlSelf->debugBus_resume_rsp_valid) {
            vlSelf->_zz_CsrPlugin_doResume = 0U;
        }
        if (vlSelf->execute_CsrPlugin_csr_771) {
            if (vlSelf->execute_CsrPlugin_writeEnable) {
                vlSelf->CsrPlugin_mideleg_SS = (1U 
                                                & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                   >> 1U));
                vlSelf->CsrPlugin_mideleg_SE = (1U 
                                                & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                   >> 9U));
                vlSelf->CsrPlugin_mideleg_ST = (1U 
                                                & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                   >> 5U));
            }
        }
        if (vlSelf->execute_CsrPlugin_csr_772) {
            if (vlSelf->execute_CsrPlugin_writeEnable) {
                vlSelf->CsrPlugin_mie_MSIE = (1U & 
                                              (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                               >> 3U));
                vlSelf->CsrPlugin_mie_MTIE = (1U & 
                                              (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                               >> 7U));
                vlSelf->CsrPlugin_mie_MEIE = (1U & 
                                              (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                               >> 0xbU));
                vlSelf->CsrPlugin_sie_SSIE = (1U & 
                                              (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                               >> 1U));
                vlSelf->CsrPlugin_sie_STIE = (1U & 
                                              (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                               >> 5U));
                vlSelf->CsrPlugin_sie_SEIE = (1U & 
                                              (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                               >> 9U));
            }
        }
        if (vlSelf->when_CsrPlugin_l988) {
            vlSelf->CsrPlugin_trigger_slots_0_tdata1_hit = 1U;
        }
        if (vlSelf->execute_CsrPlugin_csr_1953) {
            if (vlSelf->execute_CsrPlugin_writeEnable) {
                if (vlSelf->CsrPlugin_trigger_slots_0_selected) {
                    vlSelf->CsrPlugin_trigger_slots_0_tdata1_size 
                        = (3U & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                 >> 0x10U));
                    vlSelf->CsrPlugin_trigger_slots_0_tdata1_dmode 
                        = (1U & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                 >> 0x1bU));
                    vlSelf->CsrPlugin_trigger_slots_0_tdata1_hit 
                        = (1U & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                 >> 0x14U));
                    vlSelf->CsrPlugin_trigger_slots_0_tdata1_execute 
                        = (1U & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                 >> 2U));
                    vlSelf->CsrPlugin_trigger_slots_0_tdata1_action 
                        = (0xfU & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                   >> 0xcU));
                    vlSelf->CsrPlugin_trigger_slots_0_tdata1_u 
                        = (1U & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                 >> 3U));
                    vlSelf->CsrPlugin_trigger_slots_0_tdata1_s 
                        = (1U & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                 >> 4U));
                    vlSelf->CsrPlugin_trigger_slots_0_tdata1_m 
                        = (1U & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                 >> 6U));
                }
            }
        }
        if (vlSelf->execute_CsrPlugin_csr_770) {
            if (vlSelf->execute_CsrPlugin_writeEnable) {
                vlSelf->CsrPlugin_medeleg_SPF = (1U 
                                                 & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                    >> 0xfU));
                vlSelf->CsrPlugin_medeleg_LPF = (1U 
                                                 & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                    >> 0xdU));
                vlSelf->CsrPlugin_medeleg_IPF = (1U 
                                                 & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                    >> 0xcU));
                vlSelf->CsrPlugin_medeleg_ES = (1U 
                                                & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                   >> 9U));
                vlSelf->CsrPlugin_medeleg_EU = (1U 
                                                & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                   >> 8U));
                vlSelf->CsrPlugin_medeleg_SAM = (1U 
                                                 & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                    >> 6U));
                vlSelf->CsrPlugin_medeleg_LAF = (1U 
                                                 & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                    >> 5U));
                vlSelf->CsrPlugin_medeleg_LAM = (1U 
                                                 & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                    >> 4U));
                vlSelf->CsrPlugin_medeleg_BP = (1U 
                                                & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                   >> 3U));
                vlSelf->CsrPlugin_medeleg_II = (1U 
                                                & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                   >> 2U));
                vlSelf->CsrPlugin_medeleg_IAF = (1U 
                                                 & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                    >> 1U));
                vlSelf->CsrPlugin_medeleg_IAM = (1U 
                                                 & vlSelf->CsrPlugin_csrMapping_writeDataSignal);
                vlSelf->CsrPlugin_medeleg_SAF = (1U 
                                                 & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                    >> 7U));
            }
        }
        if (vlSelf->IBusCachedPlugin_fetchPc_flushed) {
            vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_5 = 0U;
        }
        if (vlSelf->when_Fetcher_l331_5) {
            vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_5 
                = vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_4;
        }
        if (vlSelf->CsrPlugin_pipelineLiberator_active) {
            if (vlSelf->when_CsrPlugin_l1479_2) {
                vlSelf->CsrPlugin_pipelineLiberator_pcValids_2 
                    = vlSelf->CsrPlugin_pipelineLiberator_pcValids_1;
            }
            if (vlSelf->when_CsrPlugin_l1479_1) {
                vlSelf->CsrPlugin_pipelineLiberator_pcValids_1 
                    = vlSelf->CsrPlugin_pipelineLiberator_pcValids_0;
            }
            if (vlSelf->when_CsrPlugin_l1479) {
                vlSelf->CsrPlugin_pipelineLiberator_pcValids_0 = 1U;
            }
        }
        if (vlSelf->when_CsrPlugin_l1484) {
            vlSelf->CsrPlugin_pipelineLiberator_pcValids_2 = 0U;
            vlSelf->CsrPlugin_pipelineLiberator_pcValids_1 = 0U;
            vlSelf->CsrPlugin_pipelineLiberator_pcValids_0 = 0U;
        }
        if (vlSelf->execute_CsrPlugin_csr_260) {
            if (vlSelf->execute_CsrPlugin_writeEnable) {
                vlSelf->CsrPlugin_sie_SSIE = (1U & 
                                              (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                               >> 1U));
                vlSelf->CsrPlugin_sie_STIE = (1U & 
                                              (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                               >> 5U));
                vlSelf->CsrPlugin_sie_SEIE = (1U & 
                                              (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                               >> 9U));
            }
        }
        if (vlSelf->CsrPlugin_xretAwayFromMachine) {
            vlSelf->MmuPlugin_status_mprv = 0U;
        }
        if (vlSelf->execute_CsrPlugin_csr_768) {
            if (vlSelf->execute_CsrPlugin_writeEnable) {
                __Vdly__CsrPlugin_mstatus_MIE = (1U 
                                                 & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                    >> 3U));
                __Vdly__CsrPlugin_sstatus_SPIE = (1U 
                                                  & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                     >> 5U));
                vlSelf->MmuPlugin_status_mxr = (1U 
                                                & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                   >> 0x13U));
                vlSelf->MmuPlugin_status_sum = (1U 
                                                & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                   >> 0x12U));
                vlSelf->MmuPlugin_status_mprv = (1U 
                                                 & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                    >> 0x11U));
            }
        }
        if (vlSelf->execute_CsrPlugin_csr_836) {
            if (vlSelf->execute_CsrPlugin_writeEnable) {
                vlSelf->CsrPlugin_sip_SSIP = (1U & 
                                              (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                               >> 1U));
                vlSelf->CsrPlugin_sip_STIP = (1U & 
                                              (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                               >> 5U));
                vlSelf->CsrPlugin_sip_SEIP_SOFT = (1U 
                                                   & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                      >> 9U));
            }
        }
        if (vlSelf->execute_CsrPlugin_csr_324) {
            if (vlSelf->execute_CsrPlugin_writeEnable) {
                vlSelf->CsrPlugin_sip_SSIP = (1U & 
                                              (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                               >> 1U));
                vlSelf->CsrPlugin_sip_STIP = (1U & 
                                              (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                               >> 5U));
                vlSelf->CsrPlugin_sip_SEIP_SOFT = (1U 
                                                   & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                      >> 9U));
            }
        }
        vlSelf->CsrPlugin_interrupt_valid = 0U;
        if (vlSelf->when_CsrPlugin_l1440) {
            if (vlSelf->when_CsrPlugin_l1446) {
                vlSelf->CsrPlugin_interrupt_valid = 1U;
            }
            if (vlSelf->when_CsrPlugin_l1446_1) {
                vlSelf->CsrPlugin_interrupt_valid = 1U;
            }
            if (vlSelf->when_CsrPlugin_l1446_2) {
                vlSelf->CsrPlugin_interrupt_valid = 1U;
            }
        }
        if (vlSelf->when_CsrPlugin_l1440_1) {
            if (vlSelf->when_CsrPlugin_l1446_3) {
                vlSelf->CsrPlugin_interrupt_valid = 1U;
            }
            if (vlSelf->when_CsrPlugin_l1446_4) {
                vlSelf->CsrPlugin_interrupt_valid = 1U;
            }
            if (vlSelf->when_CsrPlugin_l1446_5) {
                vlSelf->CsrPlugin_interrupt_valid = 1U;
            }
            if (vlSelf->when_CsrPlugin_l1446_6) {
                vlSelf->CsrPlugin_interrupt_valid = 1U;
            }
            if (vlSelf->when_CsrPlugin_l1446_7) {
                vlSelf->CsrPlugin_interrupt_valid = 1U;
            }
            if (vlSelf->when_CsrPlugin_l1446_8) {
                vlSelf->CsrPlugin_interrupt_valid = 1U;
            }
        }
        if (vlSelf->when_CsrPlugin_l1459) {
            vlSelf->CsrPlugin_interrupt_valid = 0U;
        }
        if (vlSelf->CsrPlugin_doHalt) {
            vlSelf->CsrPlugin_interrupt_valid = 1U;
        }
        if (vlSelf->CsrPlugin_interruptJump) {
            vlSelf->CsrPlugin_interrupt_valid = 0U;
        }
        if (vlSelf->execute_CsrPlugin_csr_800) {
            if (vlSelf->execute_CsrPlugin_writeEnable) {
                vlSelf->CounterPlugin_inhibitCY = (1U 
                                                   & vlSelf->CsrPlugin_csrMapping_writeDataSignal);
                vlSelf->CounterPlugin_inhibitIR = (1U 
                                                   & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                      >> 2U));
            }
        }
        if (vlSelf->contextSwitching) {
            if (vlSelf->MmuPlugin_ports_0_cache_0_exception) {
                vlSelf->MmuPlugin_ports_0_cache_0_valid = 0U;
            }
            if (vlSelf->MmuPlugin_ports_0_cache_1_exception) {
                vlSelf->MmuPlugin_ports_0_cache_1_valid = 0U;
            }
            if (vlSelf->MmuPlugin_ports_0_cache_2_exception) {
                vlSelf->MmuPlugin_ports_0_cache_2_valid = 0U;
            }
            if (vlSelf->MmuPlugin_ports_0_cache_3_exception) {
                vlSelf->MmuPlugin_ports_0_cache_3_valid = 0U;
            }
            if (vlSelf->MmuPlugin_ports_1_cache_2_exception) {
                vlSelf->MmuPlugin_ports_1_cache_2_valid = 0U;
            }
            if (vlSelf->MmuPlugin_ports_1_cache_0_exception) {
                vlSelf->MmuPlugin_ports_1_cache_0_valid = 0U;
            }
            if (vlSelf->MmuPlugin_ports_1_cache_1_exception) {
                vlSelf->MmuPlugin_ports_1_cache_1_valid = 0U;
            }
            if (vlSelf->MmuPlugin_ports_1_cache_3_exception) {
                vlSelf->MmuPlugin_ports_1_cache_3_valid = 0U;
            }
        }
        if (vlSelf->when_MmuPlugin_l279) {
            if (vlSelf->when_MmuPlugin_l281) {
                vlSelf->MmuPlugin_ports_0_dirty = 1U;
                if (vlSelf->when_MmuPlugin_l287) {
                    vlSelf->MmuPlugin_ports_0_cache_0_valid = 1U;
                }
                if (vlSelf->when_MmuPlugin_l287_1) {
                    vlSelf->MmuPlugin_ports_0_cache_1_valid = 1U;
                }
                if (vlSelf->when_MmuPlugin_l287_2) {
                    vlSelf->MmuPlugin_ports_0_cache_2_valid = 1U;
                }
                if (vlSelf->when_MmuPlugin_l287_3) {
                    vlSelf->MmuPlugin_ports_0_cache_3_valid = 1U;
                }
            }
            if (vlSelf->when_MmuPlugin_l281_1) {
                vlSelf->MmuPlugin_ports_1_dirty = 1U;
                if (vlSelf->when_MmuPlugin_l287_6) {
                    vlSelf->MmuPlugin_ports_1_cache_2_valid = 1U;
                }
                if (vlSelf->when_MmuPlugin_l287_4) {
                    vlSelf->MmuPlugin_ports_1_cache_0_valid = 1U;
                }
                if (vlSelf->when_MmuPlugin_l287_5) {
                    vlSelf->MmuPlugin_ports_1_cache_1_valid = 1U;
                }
                if (vlSelf->when_MmuPlugin_l287_7) {
                    vlSelf->MmuPlugin_ports_1_cache_3_valid = 1U;
                }
            }
        }
        if (vlSelf->when_MmuPlugin_l311) {
            vlSelf->MmuPlugin_ports_0_cache_0_valid = 0U;
            vlSelf->MmuPlugin_ports_0_cache_1_valid = 0U;
            vlSelf->MmuPlugin_ports_0_cache_2_valid = 0U;
            vlSelf->MmuPlugin_ports_0_cache_3_valid = 0U;
            vlSelf->MmuPlugin_ports_1_cache_2_valid = 0U;
            vlSelf->MmuPlugin_ports_1_cache_0_valid = 0U;
            vlSelf->MmuPlugin_ports_1_cache_1_valid = 0U;
            vlSelf->MmuPlugin_ports_1_cache_3_valid = 0U;
        }
        if (vlSelf->execute_CsrPlugin_csr_384) {
            if (vlSelf->execute_CsrPlugin_writeEnable) {
                vlSelf->MmuPlugin_satp_mode = (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                               >> 0x1fU);
                vlSelf->MmuPlugin_ports_0_cache_0_valid = 0U;
                vlSelf->MmuPlugin_ports_0_cache_1_valid = 0U;
                vlSelf->MmuPlugin_ports_0_cache_2_valid = 0U;
                vlSelf->MmuPlugin_ports_0_cache_3_valid = 0U;
                vlSelf->MmuPlugin_ports_1_cache_2_valid = 0U;
                vlSelf->MmuPlugin_ports_1_cache_0_valid = 0U;
                vlSelf->MmuPlugin_ports_1_cache_1_valid = 0U;
                vlSelf->MmuPlugin_ports_1_cache_3_valid = 0U;
            }
        }
        if (vlSelf->when_Pipeline_l124_57) {
            vlSelf->memory_to_writeBack_IS_DBUS_SHARING 
                = vlSelf->memory_IS_DBUS_SHARING;
        }
        if (vlSelf->MmuPlugin_dBusAccess_rsp_valid) {
            vlSelf->memory_to_writeBack_IS_DBUS_SHARING = 0U;
            vlSelf->memory_to_writeBack_IS_DBUS_SHARING = 0U;
        }
        if (vlSelf->IBusCachedPlugin_iBusRsp_stages_2_output_ready) {
            vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_2_output_m2sPipe_valid 
                = ((IData)(vlSelf->IBusCachedPlugin_iBusRsp_stages_2_output_valid) 
                   & (~ (IData)(vlSelf->IBusCachedPlugin_iBusRsp_flush)));
        }
        if (vlSelf->CsrPlugin_trigger_decodeBreak_enabled) {
            if (vlSelf->CsrPlugin_trigger_decodeBreak_timeout_state) {
                vlSelf->CsrPlugin_dcsr_cause = 2U;
                __Vdly__CsrPlugin_dcsr_prv = vlSelf->CsrPlugin_privilege;
                vlSelf->_zz_CsrPlugin_privilege = 3U;
            }
        }
        if (vlSelf->execute_CsrPlugin_csr_1968) {
            if (vlSelf->execute_CsrPlugin_writeEnable) {
                vlSelf->CsrPlugin_dcsr_stepie = (1U 
                                                 & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                    >> 0xbU));
                vlSelf->CsrPlugin_dcsr_stopcount = 
                    (1U & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                           >> 0xaU));
                vlSelf->CsrPlugin_dcsr_ebreaku = (1U 
                                                  & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                     >> 0xcU));
                vlSelf->CsrPlugin_dcsr_ebreaks = (1U 
                                                  & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                     >> 0xdU));
                vlSelf->CsrPlugin_dcsr_ebreakm = (1U 
                                                  & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                     >> 0xfU));
            }
        }
        if (vlSelf->when_CsrPlugin_l1534) {
            if (vlSelf->when_CsrPlugin_l1542) {
                vlSelf->_zz_CsrPlugin_privilege = vlSelf->CsrPlugin_targetPrivilege;
            } else {
                if (vlSelf->when_CsrPlugin_l1572) {
                    vlSelf->CsrPlugin_dcsr_cause = 3U;
                    __Vdly__CsrPlugin_dcsr_prv = vlSelf->CsrPlugin_privilege;
                    if (vlSelf->CsrPlugin_dcsr_step) {
                        vlSelf->CsrPlugin_dcsr_cause = 4U;
                    }
                    if (vlSelf->CsrPlugin_trapCauseEbreakDebug) {
                        vlSelf->CsrPlugin_dcsr_cause = 1U;
                    }
                }
                vlSelf->_zz_CsrPlugin_privilege = 3U;
            }
        }
        if (vlSelf->execute_CsrPlugin_csr_1968) {
            if (vlSelf->execute_CsrPlugin_writeEnable) {
                __Vdly__CsrPlugin_dcsr_prv = (3U & vlSelf->CsrPlugin_csrMapping_writeDataSignal);
                vlSelf->CsrPlugin_dcsr_stoptime = (1U 
                                                   & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                      >> 9U));
                vlSelf->CsrPlugin_dcsr_step = (1U & 
                                               (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                >> 2U));
            }
        }
        if (vlSelf->when_CsrPlugin_l1600) {
            if ((3U == (IData)(vlSelf->switch_CsrPlugin_l1604))) {
                vlSelf->_zz_CsrPlugin_privilege = vlSelf->CsrPlugin_mstatus_MPP;
            } else if ((1U == (IData)(vlSelf->switch_CsrPlugin_l1604))) {
                vlSelf->_zz_CsrPlugin_privilege = vlSelf->CsrPlugin_sstatus_SPP;
            }
        }
        if (vlSelf->when_CsrPlugin_l1534) {
            if (vlSelf->when_CsrPlugin_l1542) {
                if ((1U != (IData)(vlSelf->CsrPlugin_targetPrivilege))) {
                    if ((3U == (IData)(vlSelf->CsrPlugin_targetPrivilege))) {
                        vlSelf->CsrPlugin_mstatus_MPIE 
                            = vlSelf->CsrPlugin_mstatus_MIE;
                        vlSelf->CsrPlugin_mstatus_MPP 
                            = vlSelf->CsrPlugin_privilege;
                    }
                }
                if ((1U == (IData)(vlSelf->CsrPlugin_targetPrivilege))) {
                    vlSelf->CsrPlugin_sstatus_SIE = 0U;
                    vlSelf->CsrPlugin_sstatus_SPP = 
                        (1U & (IData)(vlSelf->CsrPlugin_privilege));
                }
            }
        }
        if (vlSelf->when_CsrPlugin_l1600) {
            if ((3U == (IData)(vlSelf->switch_CsrPlugin_l1604))) {
                vlSelf->CsrPlugin_mstatus_MPIE = 1U;
                vlSelf->CsrPlugin_mstatus_MPP = 0U;
            }
            if ((3U != (IData)(vlSelf->switch_CsrPlugin_l1604))) {
                if ((1U == (IData)(vlSelf->switch_CsrPlugin_l1604))) {
                    vlSelf->CsrPlugin_sstatus_SIE = vlSelf->CsrPlugin_sstatus_SPIE;
                    vlSelf->CsrPlugin_sstatus_SPP = 0U;
                }
            }
        }
        if (vlSelf->execute_CsrPlugin_csr_768) {
            if (vlSelf->execute_CsrPlugin_writeEnable) {
                vlSelf->CsrPlugin_mstatus_MPIE = (1U 
                                                  & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                     >> 7U));
                vlSelf->CsrPlugin_sstatus_SIE = (1U 
                                                 & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                    >> 1U));
                if ((3U == (IData)(vlSelf->switch_CsrPlugin_l1167))) {
                    vlSelf->CsrPlugin_mstatus_MPP = 3U;
                } else if ((1U == (IData)(vlSelf->switch_CsrPlugin_l1167))) {
                    vlSelf->CsrPlugin_mstatus_MPP = 1U;
                } else if ((0U == (IData)(vlSelf->switch_CsrPlugin_l1167))) {
                    vlSelf->CsrPlugin_mstatus_MPP = 0U;
                }
                vlSelf->CsrPlugin_sstatus_SPP = (1U 
                                                 & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                    >> 8U));
            }
        }
        if (vlSelf->execute_CsrPlugin_csr_256) {
            if (vlSelf->execute_CsrPlugin_writeEnable) {
                __Vdly__CsrPlugin_sstatus_SPIE = (1U 
                                                  & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                     >> 5U));
                vlSelf->MmuPlugin_status_mxr = (1U 
                                                & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                   >> 0x13U));
                vlSelf->MmuPlugin_status_sum = (1U 
                                                & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                   >> 0x12U));
                vlSelf->MmuPlugin_status_mprv = (1U 
                                                 & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                    >> 0x11U));
                vlSelf->CsrPlugin_sstatus_SIE = (1U 
                                                 & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                    >> 1U));
                vlSelf->CsrPlugin_sstatus_SPP = (1U 
                                                 & (vlSelf->CsrPlugin_csrMapping_writeDataSignal 
                                                    >> 8U));
            }
        }
        if (vlSelf->CsrPlugin_doResume) {
            vlSelf->_zz_CsrPlugin_privilege = vlSelf->CsrPlugin_dcsr_prv;
        }
        if (vlSelf->when_Pipeline_l151_2) {
            vlSelf->writeBack_arbitration_isValid = 0U;
        }
        if (vlSelf->when_Pipeline_l154_2) {
            vlSelf->writeBack_arbitration_isValid = vlSelf->memory_arbitration_isValid;
        }
        if (vlSelf->dataCache_1__DOT__stageB_loaderValid) {
            vlSelf->dataCache_1__DOT__loader_valid = 1U;
        }
        if (vlSelf->dataCache_1__DOT__loader_done) {
            __Vdly__dataCache_1__DOT__loader_error = 0U;
            vlSelf->dataCache_1__DOT__loader_killReg = 0U;
            vlSelf->dataCache_1__DOT__loader_valid = 0U;
        }
        if (vlSelf->dataCache_1_io_mem_cmd_valid) {
            vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_rValidN = 0U;
        }
        if (vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_s2mPipe_ready) {
            vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_s2mPipe_rValid 
                = vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_s2mPipe_valid;
            vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_rValidN = 1U;
        }
        if (vlSelf->IBusCachedPlugin_fetchPc_flushed) {
            vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_5 = 0U;
            vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_4 = 0U;
        }
        if (vlSelf->when_Fetcher_l331_4) {
            vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_4 
                = vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_3;
        }
        if (vlSelf->when_CsrPlugin_l747) {
            vlSelf->CsrPlugin_doHalt = 1U;
        }
        if (vlSelf->CsrPlugin_enterHalt) {
            vlSelf->CsrPlugin_doHalt = 0U;
        }
        if (vlSelf->CsrPlugin_timeout_counter_willOverflow) {
            vlSelf->CsrPlugin_timeout_state = 1U;
        }
        if (vlSelf->when_CsrPlugin_l753) {
            vlSelf->CsrPlugin_timeout_state = 0U;
        }
        if (vlSelf->CsrPlugin_inject_cmd_valid) {
            vlSelf->CsrPlugin_timeout_state = 0U;
        }
        if ((1U != (IData)(vlSelf->CsrPlugin_dcsr_stepLogic_stateReg))) {
            if ((2U == (IData)(vlSelf->CsrPlugin_dcsr_stepLogic_stateReg))) {
                vlSelf->CsrPlugin_timeout_state = 0U;
                if (vlSelf->when_CsrPlugin_l836) {
                    vlSelf->CsrPlugin_doHalt = 1U;
                }
            } else if ((3U == (IData)(vlSelf->CsrPlugin_dcsr_stepLogic_stateReg))) {
                if ((1U & (~ (IData)(vlSelf->when_CsrPlugin_l848)))) {
                    if (vlSelf->writeBack_arbitration_isFiring) {
                        vlSelf->CsrPlugin_doHalt = 1U;
                    }
                }
            }
        }
        if (vlSelf->CsrPlugin_trigger_decodeBreak_timeout_counter_willOverflow) {
            vlSelf->CsrPlugin_trigger_decodeBreak_timeout_state = 1U;
        }
        if (vlSelf->when_Utils_l669) {
            vlSelf->CsrPlugin_trigger_decodeBreak_timeout_state = 0U;
        }
        if (vlSelf->when_Pipeline_l151_1) {
            vlSelf->memory_arbitration_isValid = 0U;
        }
        if (vlSelf->when_Pipeline_l154_1) {
            vlSelf->memory_arbitration_isValid = vlSelf->execute_arbitration_isValid;
        }
        if (vlSelf->IBusCachedPlugin_fetchPc_flushed) {
            vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_4 = 0U;
            vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_3 = 0U;
        }
        if (vlSelf->when_Fetcher_l331_3) {
            vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_3 
                = vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_2;
        }
        vlSelf->CsrPlugin_dcsr_stepLogic_stateReg = vlSelf->CsrPlugin_dcsr_stepLogic_stateNext;
        if (vlSelf->when_Pipeline_l151) {
            vlSelf->execute_arbitration_isValid = 0U;
        }
        if (vlSelf->when_Pipeline_l154) {
            vlSelf->execute_arbitration_isValid = vlSelf->decode_arbitration_isValid;
        }
        if (vlSelf->IBusCachedPlugin_fetchPc_flushed) {
            vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_3 = 0U;
            vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_2 = 0U;
        }
        if (vlSelf->when_Fetcher_l331_2) {
            vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_2 
                = vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_1;
        }
        if (vlSelf->IBusCachedPlugin_fetchPc_flushed) {
            vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_2 = 0U;
            vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_1 = 0U;
        }
        if (vlSelf->when_Fetcher_l331_1) {
            vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_1 
                = vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_0;
        }
        if (vlSelf->IBusCachedPlugin_fetchPc_flushed) {
            vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_1 = 0U;
            vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_0 = 0U;
        }
        if (vlSelf->when_Fetcher_l331) {
            vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_0 = 1U;
        }
    }
    vlSelf->CsrPlugin_running = ((IData)(vlSelf->systemCd_logic_outputReset) 
                                 || (IData)(vlSelf->CsrPlugin_running_aheadValue));
    vlSelf->dBus_rsp_regNext_valid = ((1U & (~ (IData)(vlSelf->systemCd_logic_outputReset))) 
                                      && (IData)(vlSelf->dBus_rsp_valid));
    vlSelf->CsrPlugin_hadException = ((1U & (~ (IData)(vlSelf->systemCd_logic_outputReset))) 
                                      && (IData)(vlSelf->CsrPlugin_exception));
    vlSelf->DBusCachedPlugin_rspCounter = __Vdly__DBusCachedPlugin_rspCounter;
    vlSelf->CounterPlugin_instret = __Vdly__CounterPlugin_instret;
    vlSelf->IBusCachedPlugin_rspCounter = __Vdly__IBusCachedPlugin_rspCounter;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wordIndex 
        = __Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex;
    vlSelf->IBusCachedPlugin_injector_port_state = __Vdly__IBusCachedPlugin_injector_port_state;
    vlSelf->dataCache_1__DOT__loader_error = __Vdly__dataCache_1__DOT__loader_error;
    vlSelf->dataCache_1__DOT__stageB_flusher_start 
        = __Vdly__dataCache_1__DOT__stageB_flusher_start;
    vlSelf->dataCache_1__DOT__stageB_flusher_waitDone 
        = __Vdly__dataCache_1__DOT__stageB_flusher_waitDone;
    vlSelf->dataCache_1__DOT__stageB_flusher_counter 
        = __Vdly__dataCache_1__DOT__stageB_flusher_counter;
    vlSelf->dataCache_1__DOT__stageB_lrSc_reserved 
        = __Vdly__dataCache_1__DOT__stageB_lrSc_reserved;
    vlSelf->CsrPlugin_dcsr_prv = __Vdly__CsrPlugin_dcsr_prv;
    vlSelf->IBusCachedPlugin_cache__DOT__when_InstructionCache_l401 
        = (0xfU == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wordIndex));
    vlSelf->MmuPlugin_shared_dBusRspStaged_valid = 
        ((1U & (~ (IData)(vlSelf->systemCd_logic_outputReset))) 
         && (IData)(vlSelf->MmuPlugin_dBusAccess_rsp_valid));
    vlSelf->IBusCachedPlugin_cache__DOT___zz_when_Fetcher_l411 
        = vlSelf->IBusCachedPlugin_injector_port_state;
    vlSelf->IBusCachedPlugin_cache__DOT__when_Fetcher_l411 
        = (0U != (IData)(vlSelf->IBusCachedPlugin_injector_port_state));
    vlSelf->CsrPlugin_injectionPort_ready = 0U;
    if ((4U == (IData)(vlSelf->IBusCachedPlugin_injector_port_state))) {
        vlSelf->CsrPlugin_injectionPort_ready = 1U;
    }
    vlSelf->dataCache_1__DOT__io_cpu_flush_ready = 
        ((IData)(vlSelf->dataCache_1__DOT__stageB_flusher_waitDone) 
         & ((IData)(vlSelf->dataCache_1__DOT__stageB_flusher_counter) 
            >> 6U));
    vlSelf->dataCache_1__DOT__when_DataCache_l855 = 
        (1U & (~ ((IData)(vlSelf->dataCache_1__DOT__stageB_flusher_counter) 
                  >> 6U)));
    vlSelf->dataCache_1_io_cpu_writeBack_exclusiveOk 
        = vlSelf->dataCache_1__DOT__stageB_lrSc_reserved;
    vlSelf->dataCache_1__DOT__io_cpu_writeBack_exclusiveOk 
        = vlSelf->dataCache_1__DOT__stageB_lrSc_reserved;
    vlSelf->_zz_writeBack_DBusCachedPlugin_rspRf = 
        (1U & (~ (IData)(vlSelf->dataCache_1__DOT__stageB_lrSc_reserved)));
    vlSelf->CsrPlugin_trigger_decodeBreak_timeout_counter_willOverflowIfInc 
        = (2U == (IData)(vlSelf->CsrPlugin_trigger_decodeBreak_timeout_counter_value));
    vlSelf->when_MulDivIterativePlugin_l126 = (0x20U 
                                               == (IData)(vlSelf->memory_MulDivIterativePlugin_div_counter_value));
    vlSelf->memory_MulDivIterativePlugin_div_counter_willOverflowIfInc 
        = (0x21U == (IData)(vlSelf->memory_MulDivIterativePlugin_div_counter_value));
    vlSelf->CsrPlugin_timeout_counter_willOverflowIfInc 
        = (6U == (IData)(vlSelf->CsrPlugin_timeout_counter_value));
    vlSelf->CsrPlugin_inject_buffer_valid = vlSelf->CsrPlugin_inject_cmd_toStream_rValid;
    vlSelf->when_Stream_l372_1 = (1U & (~ (IData)(vlSelf->CsrPlugin_inject_cmd_toStream_rValid)));
    vlSelf->_zz_IBusCachedPlugin_fetchPc_pc_1 = ((IData)(vlSelf->IBusCachedPlugin_fetchPc_inc) 
                                                 << 2U);
    vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_valid 
        = vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_s2mPipe_rValid;
    vlSelf->when_Stream_l372 = (1U & (~ (IData)(vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_s2mPipe_rValid)));
    vlSelf->dBus_cmd_valid = vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_s2mPipe_rValid;
    vlSelf->IBusCachedPlugin_iBusRsp_stages_1_input_valid 
        = vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_1_input_valid_1;
    vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_1_input_valid 
        = vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_1_input_valid_1;
    vlSelf->IBusCachedPlugin_cache_io_cpu_prefetch_isValid 
        = ((~ (IData)(vlSelf->IBusCachedPlugin_s0_tightlyCoupledHit)) 
           & (IData)(vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_1_input_valid_1));
    vlSelf->dataCache_1__DOT__when_DataCache_l1037 
        = (1U & (~ (IData)(vlSelf->dataCache_1__DOT__memCmdSent)));
    vlSelf->memory_IS_DBUS_SHARING = vlSelf->execute_to_memory_IS_DBUS_SHARING;
    vlSelf->IBusCachedPlugin_iBusRsp_stages_2_input_valid 
        = vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid;
    vlSelf->IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid 
        = vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid;
    vlSelf->IBusCachedPlugin_iBusRsp_stages_2_output_valid 
        = ((IData)(vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_2_input_ready) 
           & (IData)(vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid));
    vlSelf->CsrPlugin_exceptionPendings_0 = vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode;
    vlSelf->iBus_cmd_valid = ((~ (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_cmdSent)) 
                              & (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_valid));
    vlSelf->IBusCachedPlugin_cache__DOT__when_Utils_l578 
        = (1U & (~ (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_valid)));
    vlSelf->debugBus_haveReset = vlSelf->_zz_debugBus_haveReset;
    vlSelf->CsrPlugin_reseting = vlSelf->systemCd_logic_outputReset;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willOverflowIfInc 
        = (0xfU == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value));
    vlSelf->IBusCachedPlugin_iBusRsp_stages_1_output_payload 
        = vlSelf->IBusCachedPlugin_fetchPc_pcReg;
    vlSelf->IBusCachedPlugin_mmuBus_cmd_0_virtualAddress 
        = vlSelf->IBusCachedPlugin_fetchPc_pcReg;
    vlSelf->IBusCachedPlugin_iBusRsp_stages_1_input_payload 
        = vlSelf->IBusCachedPlugin_fetchPc_pcReg;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_0_dataMem 
        = (0x3ffU & (vlSelf->IBusCachedPlugin_fetchPc_pcReg 
                     >> 2U));
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_0_tag_valid 
        = (0x3fU & (vlSelf->IBusCachedPlugin_fetchPc_pcReg 
                    >> 6U));
    vlSelf->_zz_MmuPlugin_ports_0_cacheHitsCalc = (vlSelf->IBusCachedPlugin_fetchPc_pcReg 
                                                   >> 0x16U);
    vlSelf->_zz_MmuPlugin_ports_0_cacheHitsCalc_1 = 
        (0x3ffU & (vlSelf->IBusCachedPlugin_fetchPc_pcReg 
                   >> 0xcU));
    vlSelf->dataCache_1__DOT___zz_loader_waysAllocator 
        = (((IData)(vlSelf->dataCache_1__DOT__loader_waysAllocator) 
            << 1U) | (1U & ((IData)(vlSelf->dataCache_1__DOT__loader_waysAllocator) 
                            >> 0xfU)));
    vlSelf->dataCache_1__DOT__loader_counter_willOverflowIfInc 
        = (0xfU == (IData)(vlSelf->dataCache_1__DOT__loader_counter_value));
    vlSelf->when_CsrPlugin_l1665 = (1U & (~ (IData)(vlSelf->execute_CsrPlugin_wfiWake)));
    vlSelf->CsrPlugin_doResume = ((IData)(vlSelf->CsrPlugin_forceResume) 
                                  | (IData)(vlSelf->_zz_CsrPlugin_doResume));
    vlSelf->when_CsrPlugin_l1360_12 = vlSelf->CsrPlugin_medeleg_SPF;
    vlSelf->when_CsrPlugin_l1360_11 = vlSelf->CsrPlugin_medeleg_LPF;
    vlSelf->when_CsrPlugin_l1360_10 = vlSelf->CsrPlugin_medeleg_IPF;
    vlSelf->when_CsrPlugin_l1360_9 = vlSelf->CsrPlugin_medeleg_ES;
    vlSelf->when_CsrPlugin_l1360_8 = vlSelf->CsrPlugin_medeleg_EU;
    vlSelf->when_CsrPlugin_l1360_6 = vlSelf->CsrPlugin_medeleg_SAM;
    vlSelf->when_CsrPlugin_l1360_5 = vlSelf->CsrPlugin_medeleg_LAF;
    vlSelf->when_CsrPlugin_l1360_4 = vlSelf->CsrPlugin_medeleg_LAM;
    vlSelf->when_CsrPlugin_l1360_3 = vlSelf->CsrPlugin_medeleg_BP;
    vlSelf->when_CsrPlugin_l1360_2 = vlSelf->CsrPlugin_medeleg_II;
    vlSelf->when_CsrPlugin_l1360_1 = vlSelf->CsrPlugin_medeleg_IAF;
    vlSelf->when_CsrPlugin_l1360 = vlSelf->CsrPlugin_medeleg_IAM;
    vlSelf->when_CsrPlugin_l1360_7 = vlSelf->CsrPlugin_medeleg_SAF;
    vlSelf->IBusCachedPlugin_pcValids_3 = vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_5;
    vlSelf->CsrPlugin_trigger_slots_0_tdata1_read = 0U;
    if (vlSelf->CsrPlugin_trigger_slots_0_selected) {
        vlSelf->CsrPlugin_trigger_slots_0_tdata1_read 
            = ((0xffffffe3U & vlSelf->CsrPlugin_trigger_slots_0_tdata1_read) 
               | (((IData)(vlSelf->CsrPlugin_trigger_slots_0_tdata1_s) 
                   << 4U) | (((IData)(vlSelf->CsrPlugin_trigger_slots_0_tdata1_u) 
                              << 3U) | ((IData)(vlSelf->CsrPlugin_trigger_slots_0_tdata1_execute) 
                                        << 2U))));
        vlSelf->CsrPlugin_trigger_slots_0_tdata1_read 
            = ((0xffffffbfU & vlSelf->CsrPlugin_trigger_slots_0_tdata1_read) 
               | ((IData)(vlSelf->CsrPlugin_trigger_slots_0_tdata1_m) 
                  << 6U));
        vlSelf->CsrPlugin_trigger_slots_0_tdata1_read 
            = ((0xf7ffffffU & vlSelf->CsrPlugin_trigger_slots_0_tdata1_read) 
               | ((IData)(vlSelf->CsrPlugin_trigger_slots_0_tdata1_dmode) 
                  << 0x1bU));
        vlSelf->CsrPlugin_trigger_slots_0_tdata1_read 
            = ((0xffff0fffU & vlSelf->CsrPlugin_trigger_slots_0_tdata1_read) 
               | ((IData)(vlSelf->CsrPlugin_trigger_slots_0_tdata1_action) 
                  << 0xcU));
        vlSelf->CsrPlugin_trigger_slots_0_tdata1_read 
            = ((0xffefffffU & vlSelf->CsrPlugin_trigger_slots_0_tdata1_read) 
               | ((IData)(vlSelf->CsrPlugin_trigger_slots_0_tdata1_hit) 
                  << 0x14U));
        vlSelf->CsrPlugin_trigger_slots_0_tdata1_read 
            = ((0xfffcffffU & vlSelf->CsrPlugin_trigger_slots_0_tdata1_read) 
               | ((IData)(vlSelf->CsrPlugin_trigger_slots_0_tdata1_size) 
                  << 0x10U));
        vlSelf->CsrPlugin_trigger_slots_0_tdata1_read 
            = ((0xfffffffU & vlSelf->CsrPlugin_trigger_slots_0_tdata1_read) 
               | ((IData)(vlSelf->CsrPlugin_trigger_slots_0_tdata1_tpe) 
                  << 0x1cU));
        vlSelf->CsrPlugin_trigger_slots_0_tdata1_read 
            = (0x1800000U | (0xfe1fffffU & vlSelf->CsrPlugin_trigger_slots_0_tdata1_read));
    }
    vlSelf->CsrPlugin_exceptionPendings_1 = vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute;
    vlSelf->CsrPlugin_exceptionPendings_2 = vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory;
    vlSelf->_zz_when_CsrPlugin_l1446_1 = ((IData)(vlSelf->CsrPlugin_sie_SSIE) 
                                          & (IData)(vlSelf->CsrPlugin_sip_SSIP));
    vlSelf->_zz_when_CsrPlugin_l1446 = ((IData)(vlSelf->CsrPlugin_sie_STIE) 
                                        & (IData)(vlSelf->CsrPlugin_sip_STIP));
    vlSelf->CsrPlugin_exceptionPendings_3 = vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack;
    vlSelf->when_CsrPlugin_l1490 = ((IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack) 
                                    | ((IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute) 
                                       | (IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory)));
    vlSelf->when_CsrPlugin_l1572 = vlSelf->CsrPlugin_running;
    vlSelf->debugBus_running = vlSelf->CsrPlugin_running;
    vlSelf->debugMode = (1U & (~ (IData)(vlSelf->CsrPlugin_running)));
    vlSelf->dataCache_1__DOT__io_mem_rsp_valid = vlSelf->dBus_rsp_regNext_valid;
    vlSelf->writeBack_IS_DBUS_SHARING = vlSelf->memory_to_writeBack_IS_DBUS_SHARING;
    vlSelf->IBusCachedPlugin_iBusRsp_stages_3_input_valid 
        = vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_2_output_m2sPipe_valid;
    vlSelf->IBusCachedPlugin_iBusRsp_stages_2_output_m2sPipe_valid 
        = vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_2_output_m2sPipe_valid;
    vlSelf->when_Fetcher_l242 = ((IData)(vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_1_input_valid_1) 
                                 | ((IData)(vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid) 
                                    | (IData)(vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_2_output_m2sPipe_valid)));
    vlSelf->lastStageIsValid = vlSelf->writeBack_arbitration_isValid;
    vlSelf->dataCache_1_io_cpu_execute_refilling = vlSelf->dataCache_1__DOT__loader_valid;
    vlSelf->dataCache_1__DOT__io_cpu_execute_refilling 
        = vlSelf->dataCache_1__DOT__loader_valid;
    vlSelf->when_DBusCachedPlugin_l624 = (1U & (~ (IData)(vlSelf->dataCache_1__DOT__loader_valid)));
    vlSelf->dataCache_1__DOT__when_DataCache_l1097 
        = ((IData)(vlSelf->dataCache_1__DOT__loader_valid) 
           & ((IData)(vlSelf->dBus_rsp_regNext_valid) 
              & (IData)(vlSelf->dataCache_1__DOT__rspLast)));
    vlSelf->dataCache_1__DOT__io_mem_cmd_ready = vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_rValidN;
    vlSelf->CsrPlugin_mstatus_MIE = __Vdly__CsrPlugin_mstatus_MIE;
    vlSelf->CsrPlugin_sstatus_SPIE = __Vdly__CsrPlugin_sstatus_SPIE;
    vlSelf->dataCache_1_io_cpu_flush_ready = vlSelf->dataCache_1__DOT__io_cpu_flush_ready;
    vlSelf->dataCache_1__DOT__io_cpu_execute_haltIt = 0U;
    vlSelf->when_MulDivIterativePlugin_l151 = vlSelf->when_MulDivIterativePlugin_l126;
    vlSelf->_zz_IBusCachedPlugin_fetchPc_pc = vlSelf->_zz_IBusCachedPlugin_fetchPc_pc_1;
    vlSelf->IBusCachedPlugin_cache__DOT__io_cpu_prefetch_isValid 
        = vlSelf->IBusCachedPlugin_cache_io_cpu_prefetch_isValid;
    vlSelf->IBusCachedPlugin_mmuBus_cmd_0_isValid = vlSelf->IBusCachedPlugin_cache_io_cpu_prefetch_isValid;
    vlSelf->DBusCachedPlugin_mmuBus_cmd_1_bypassTranslation = 0U;
    if (vlSelf->memory_IS_DBUS_SHARING) {
        vlSelf->DBusCachedPlugin_mmuBus_cmd_1_bypassTranslation = 1U;
    }
    vlSelf->IBusCachedPlugin_cache_io_mem_cmd_valid 
        = vlSelf->iBus_cmd_valid;
    vlSelf->IBusCachedPlugin_cache__DOT__io_mem_cmd_valid 
        = vlSelf->iBus_cmd_valid;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__when_Utils_l578) {
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT__io_cpu_prefetch_pc 
        = vlSelf->IBusCachedPlugin_iBusRsp_stages_1_input_payload;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_1_dataMem 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_0_dataMem;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_2_dataMem 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_0_dataMem;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_3_dataMem 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_0_dataMem;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_4_dataMem 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_0_dataMem;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_5_dataMem 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_0_dataMem;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_6_dataMem 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_0_dataMem;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_7_dataMem 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_0_dataMem;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_8_dataMem 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_0_dataMem;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_9_dataMem 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_0_dataMem;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_10_dataMem 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_0_dataMem;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_11_dataMem 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_0_dataMem;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_12_dataMem 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_0_dataMem;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_13_dataMem 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_0_dataMem;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_14_dataMem 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_0_dataMem;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_15_dataMem 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_0_dataMem;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_1_tag_valid 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_0_tag_valid;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_2_tag_valid 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_0_tag_valid;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_3_tag_valid 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_0_tag_valid;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_4_tag_valid 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_0_tag_valid;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_5_tag_valid 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_0_tag_valid;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_6_tag_valid 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_0_tag_valid;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_7_tag_valid 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_0_tag_valid;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_8_tag_valid 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_0_tag_valid;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_9_tag_valid 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_0_tag_valid;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_10_tag_valid 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_0_tag_valid;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_11_tag_valid 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_0_tag_valid;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_12_tag_valid 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_0_tag_valid;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_13_tag_valid 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_0_tag_valid;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_14_tag_valid 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_0_tag_valid;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_15_tag_valid 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_0_tag_valid;
    vlSelf->debugBus_resume_rsp_valid = 0U;
    if (vlSelf->CsrPlugin_doResume) {
        vlSelf->debugBus_resume_rsp_valid = 1U;
    }
    vlSelf->when_CsrPlugin_l1446_1 = ((IData)(vlSelf->_zz_when_CsrPlugin_l1446_1) 
                                      & (IData)(vlSelf->CsrPlugin_mideleg_SS));
    vlSelf->when_CsrPlugin_l1446_4 = ((~ (IData)(vlSelf->CsrPlugin_mideleg_SS)) 
                                      & (IData)(vlSelf->_zz_when_CsrPlugin_l1446_1));
    vlSelf->when_CsrPlugin_l1446 = ((IData)(vlSelf->_zz_when_CsrPlugin_l1446) 
                                    & (IData)(vlSelf->CsrPlugin_mideleg_ST));
    vlSelf->when_CsrPlugin_l1446_3 = ((~ (IData)(vlSelf->CsrPlugin_mideleg_ST)) 
                                      & (IData)(vlSelf->_zz_when_CsrPlugin_l1446));
    vlSelf->CsrPlugin_pipelineLiberator_done = vlSelf->CsrPlugin_pipelineLiberator_pcValids_2;
    if (vlSelf->when_CsrPlugin_l1490) {
        vlSelf->CsrPlugin_pipelineLiberator_done = 0U;
    }
    if (vlSelf->CsrPlugin_hadException) {
        vlSelf->CsrPlugin_pipelineLiberator_done = 0U;
    }
    vlSelf->CsrPlugin_timeout_counter_willOverflow 
        = ((IData)(vlSelf->CsrPlugin_timeout_counter_willOverflowIfInc) 
           & (IData)(vlSelf->CsrPlugin_timeout_counter_willIncrement));
    vlSelf->BranchPlugin_inDebugNoFetchFlag = 0U;
    vlSelf->CounterPlugin_dbgCtrEn = (1U & (~ ((IData)(vlSelf->debugMode) 
                                               & (IData)(vlSelf->CsrPlugin_dcsr_stopcount))));
    if (vlSelf->debugMode) {
        vlSelf->when_CsrPlugin_l729 = 1U;
        vlSelf->debugBus_halted = 1U;
        vlSelf->CsrPlugin_allowInterrupts = 1U;
        vlSelf->BranchPlugin_inDebugNoFetchFlag = 1U;
        vlSelf->CsrPlugin_allowInterrupts = 0U;
    } else {
        vlSelf->when_CsrPlugin_l729 = 0U;
        vlSelf->debugBus_halted = 0U;
        vlSelf->CsrPlugin_allowInterrupts = 1U;
    }
    vlSelf->IBusCachedPlugin_incomingInstruction = 0U;
    if (vlSelf->when_Fetcher_l242) {
        vlSelf->IBusCachedPlugin_incomingInstruction = 1U;
    }
    vlSelf->CsrPlugin_trigger_decodeBreak_timeout_counter_willOverflow 
        = ((IData)(vlSelf->CsrPlugin_trigger_decodeBreak_timeout_counter_willOverflowIfInc) 
           & (IData)(vlSelf->CsrPlugin_trigger_decodeBreak_timeout_counter_willIncrement));
    vlSelf->CsrPlugin_privilege = vlSelf->_zz_CsrPlugin_privilege;
    if (vlSelf->CsrPlugin_forceMachineWire) {
        vlSelf->CsrPlugin_privilege = 3U;
    }
    vlSelf->dataCache_1__DOT__when_DataCache_l1125 
        = vlSelf->when_DBusCachedPlugin_l624;
    vlSelf->dataCache_1__DOT__loader_counter_willIncrement = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l1097) {
        vlSelf->dataCache_1__DOT__loader_counter_willIncrement = 1U;
    }
    if (vlSelf->dataCache_1__DOT__when_DataCache_l855) {
        vlSelf->dataCache_1__DOT__io_cpu_execute_haltIt = 1U;
    }
    vlSelf->dataCache_1_io_cpu_execute_haltIt = vlSelf->dataCache_1__DOT__io_cpu_execute_haltIt;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_lineLoader_wayToAllocate_valueNext_1 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willOverflow 
        = ((IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willOverflowIfInc) 
           & (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement));
    vlSelf->IBusCachedPlugin_cache__DOT___zz_lineLoader_wayToAllocate_valueNext 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement;
    vlSelf->IBusCachedPlugin_pcValids_2 = vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_4;
    vlSelf->debugBus_redo = ((IData)(vlSelf->CsrPlugin_inject_pending) 
                             & (IData)(vlSelf->CsrPlugin_timeout_state));
    vlSelf->when_CsrPlugin_l848 = ((~ (IData)(vlSelf->CsrPlugin_doHalt)) 
                                   & (IData)(vlSelf->CsrPlugin_timeout_state));
    vlSelf->_zz_CounterPlugin_cycle_1 = ((IData)(vlSelf->CounterPlugin_dbgCtrEn) 
                                         & (~ (IData)(vlSelf->CounterPlugin_inhibitCY)));
    vlSelf->_zz_CounterPlugin_instret_1 = ((IData)(vlSelf->CounterPlugin_dbgCtrEn) 
                                           & (~ (IData)(vlSelf->CounterPlugin_inhibitIR)));
    vlSelf->CsrPlugin_interruptJump = ((IData)(vlSelf->CsrPlugin_interrupt_valid) 
                                       & ((IData)(vlSelf->CsrPlugin_allowInterrupts) 
                                          & (IData)(vlSelf->CsrPlugin_pipelineLiberator_done)));
    vlSelf->when_CsrPlugin_l1459 = ((~ (IData)(vlSelf->CsrPlugin_dcsr_stepie)) 
                                    & (IData)(vlSelf->CsrPlugin_dcsr_step));
    vlSelf->when_CsrPlugin_l830 = ((IData)(vlSelf->CsrPlugin_dcsr_step) 
                                   & (IData)(vlSelf->debugBus_resume_rsp_valid));
    vlSelf->when_CsrPlugin_l1612 = (3U > (IData)(vlSelf->CsrPlugin_mstatus_MPP));
    vlSelf->when_MmuPlugin_l134 = (1U & ((~ (IData)(vlSelf->MmuPlugin_status_mprv)) 
                                         | (3U == (IData)(vlSelf->CsrPlugin_mstatus_MPP))));
    vlSelf->when_CsrPlugin_l1440 = (((IData)(vlSelf->CsrPlugin_sstatus_SIE) 
                                     & (1U == (IData)(vlSelf->CsrPlugin_privilege))) 
                                    | (1U > (IData)(vlSelf->CsrPlugin_privilege)));
    vlSelf->when_CsrPlugin_l1440_1 = ((IData)(vlSelf->CsrPlugin_mstatus_MIE) 
                                      | (3U > (IData)(vlSelf->CsrPlugin_privilege)));
    vlSelf->__VdfgRegularize_h16d7421c_8_38 = ((~ (IData)(vlSelf->MmuPlugin_status_sum)) 
                                               & (1U 
                                                  == (IData)(vlSelf->CsrPlugin_privilege)));
    vlSelf->when_CsrPlugin_l1521 = ((1U == (IData)(vlSelf->CsrPlugin_privilege)) 
                                    & (IData)(vlSelf->CsrPlugin_dcsr_ebreaks));
    if ((0U == (IData)(vlSelf->CsrPlugin_privilege))) {
        vlSelf->IBusCachedPlugin_cache_io_cpu_decode_isUser = 1U;
        vlSelf->_zz_CsrPlugin_trigger_slots_0_tdata1_privilegeHit 
            = vlSelf->CsrPlugin_trigger_slots_0_tdata1_u;
    } else {
        vlSelf->IBusCachedPlugin_cache_io_cpu_decode_isUser = 0U;
        vlSelf->_zz_CsrPlugin_trigger_slots_0_tdata1_privilegeHit 
            = ((1U == (IData)(vlSelf->CsrPlugin_privilege))
                ? (IData)(vlSelf->CsrPlugin_trigger_slots_0_tdata1_s)
                : ((3U == (IData)(vlSelf->CsrPlugin_privilege)) 
                   && (IData)(vlSelf->CsrPlugin_trigger_slots_0_tdata1_m)));
    }
    vlSelf->when_CounterPlugin_l161 = (3U != (IData)(vlSelf->CsrPlugin_privilege));
    vlSelf->when_MmuPlugin_l132 = (3U == (IData)(vlSelf->CsrPlugin_privilege));
    vlSelf->execute_CsrPlugin_blockedBySideEffects 
        = ((IData)(vlSelf->memory_arbitration_isValid) 
           | (IData)(vlSelf->writeBack_arbitration_isValid));
    vlSelf->dataCache_1__DOT___zz_loader_counter_valueNext_1 
        = vlSelf->dataCache_1__DOT__loader_counter_willIncrement;
    vlSelf->dataCache_1__DOT___zz_loader_counter_valueNext 
        = vlSelf->dataCache_1__DOT__loader_counter_willIncrement;
    vlSelf->dataCache_1__DOT__loader_done = ((IData)(vlSelf->dataCache_1__DOT__loader_counter_willOverflowIfInc) 
                                             & (IData)(vlSelf->dataCache_1__DOT__loader_counter_willIncrement));
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_valueNext 
        = (0xfU & ((IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value) 
                   + (IData)(vlSelf->IBusCachedPlugin_cache__DOT___zz_lineLoader_wayToAllocate_valueNext)));
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willClear) {
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_valueNext = 0U;
    }
    vlSelf->_zz_CounterPlugin_cycle = (QData)((IData)(vlSelf->_zz_CounterPlugin_cycle_1));
    vlSelf->_zz_CounterPlugin_instret = (QData)((IData)(vlSelf->_zz_CounterPlugin_instret_1));
    vlSelf->when_CsrPlugin_l1534 = ((IData)(vlSelf->CsrPlugin_hadException) 
                                    | (IData)(vlSelf->CsrPlugin_interruptJump));
    vlSelf->IBusCachedPlugin_cache__DOT__io_cpu_decode_isUser 
        = vlSelf->IBusCachedPlugin_cache_io_cpu_decode_isUser;
    vlSelf->dataCache_1_io_cpu_writeBack_isUser = vlSelf->IBusCachedPlugin_cache_io_cpu_decode_isUser;
    vlSelf->when_CsrPlugin_l1520 = ((IData)(vlSelf->IBusCachedPlugin_cache_io_cpu_decode_isUser) 
                                    & (IData)(vlSelf->CsrPlugin_dcsr_ebreaku));
    vlSelf->CsrPlugin_trigger_slots_0_tdata1_privilegeHit 
        = ((IData)(vlSelf->CsrPlugin_running) & (IData)(vlSelf->_zz_CsrPlugin_trigger_slots_0_tdata1_privilegeHit));
    vlSelf->when_MmuPlugin_l132_1 = vlSelf->when_MmuPlugin_l132;
    vlSelf->when_MmuPlugin_l131 = ((~ (IData)(vlSelf->MmuPlugin_status_mprv)) 
                                   & (IData)(vlSelf->when_MmuPlugin_l132));
    vlSelf->when_CsrPlugin_l1519 = ((IData)(vlSelf->when_MmuPlugin_l132) 
                                    & (IData)(vlSelf->CsrPlugin_dcsr_ebreakm));
    vlSelf->when_CounterPlugin_l90 = (1U & ((~ ((IData)(vlSelf->when_MmuPlugin_l132) 
                                                | (1U 
                                                   == (IData)(vlSelf->CsrPlugin_privilege)))) 
                                            | (IData)(vlSelf->when_CounterPlugin_l92)));
    vlSelf->CsrPlugin_csrMapping_hazardFree = (1U & 
                                               (~ (IData)(vlSelf->execute_CsrPlugin_blockedBySideEffects)));
    vlSelf->dataCache_1__DOT__loader_counter_valueNext 
        = (0xfU & ((IData)(vlSelf->dataCache_1__DOT__loader_counter_value) 
                   + (IData)(vlSelf->dataCache_1__DOT___zz_loader_counter_valueNext)));
    if (vlSelf->dataCache_1__DOT__loader_counter_willClear) {
        vlSelf->dataCache_1__DOT__loader_counter_valueNext = 0U;
    }
    vlSelf->dataCache_1__DOT__loader_counter_willOverflow 
        = vlSelf->dataCache_1__DOT__loader_done;
    vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_data_valid = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l855) {
        vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_data_valid = 0U;
        vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_way = 0U;
        vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_way = 0xffffU;
    } else {
        vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_way = 0U;
    }
    if (vlSelf->dataCache_1__DOT__loader_done) {
        vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_data_valid 
            = (1U & (~ ((IData)(vlSelf->dataCache_1__DOT__loader_kill) 
                        | (IData)(vlSelf->dataCache_1__DOT__loader_killReg))));
        vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_way 
            = vlSelf->dataCache_1__DOT__loader_waysAllocator;
    }
    vlSelf->IBusCachedPlugin_pcValids_1 = vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_3;
    vlSelf->CsrPlugin_dcsr_stepLogic_wantStart = 0U;
    if ((1U != (IData)(vlSelf->CsrPlugin_dcsr_stepLogic_stateReg))) {
        if ((2U != (IData)(vlSelf->CsrPlugin_dcsr_stepLogic_stateReg))) {
            if ((3U != (IData)(vlSelf->CsrPlugin_dcsr_stepLogic_stateReg))) {
                vlSelf->CsrPlugin_dcsr_stepLogic_wantStart = 1U;
            }
        }
    }
    vlSelf->dataCache_1__DOT__io_cpu_writeBack_isUser 
        = vlSelf->dataCache_1_io_cpu_writeBack_isUser;
    vlSelf->CsrPlugin_trigger_slots_0_tdata2_enabled 
        = ((IData)(vlSelf->CsrPlugin_running) & ((1U 
                                                  == (IData)(vlSelf->CsrPlugin_trigger_slots_0_tdata1_action)) 
                                                 & ((~ (IData)(vlSelf->CsrPlugin_trigger_slots_0_chainBroken)) 
                                                    & (IData)(vlSelf->CsrPlugin_trigger_slots_0_tdata1_privilegeHit))));
    vlSelf->MmuPlugin_ports_0_requireMmuLockupCalc 
        = ((~ (IData)(vlSelf->IBusCachedPlugin_mmuBus_cmd_0_bypassTranslation)) 
           & (IData)(vlSelf->MmuPlugin_satp_mode));
    if (vlSelf->when_MmuPlugin_l131) {
        vlSelf->MmuPlugin_ports_0_requireMmuLockupCalc = 0U;
    }
    if (vlSelf->when_MmuPlugin_l132) {
        vlSelf->MmuPlugin_ports_0_requireMmuLockupCalc = 0U;
    }
    vlSelf->when_MmuPlugin_l131_1 = vlSelf->when_MmuPlugin_l131;
    vlSelf->when_CounterPlugin_l90_1 = vlSelf->when_CounterPlugin_l90;
    vlSelf->when_CsrPlugin_l753 = ((IData)(vlSelf->writeBack_arbitration_isValid) 
                                   | ((IData)(vlSelf->execute_arbitration_isValid) 
                                      | (IData)(vlSelf->memory_arbitration_isValid)));
    vlSelf->when_DBusCachedPlugin_l623 = (1U & (~ ((IData)(vlSelf->writeBack_arbitration_isValid) 
                                                   | ((IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack) 
                                                      | ((IData)(vlSelf->memory_arbitration_isValid) 
                                                         | ((IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory) 
                                                            | ((IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute) 
                                                               | (IData)(vlSelf->execute_arbitration_isValid))))))));
    vlSelf->when_DBusCachedPlugin_l414 = ((IData)(vlSelf->dataCache_1__DOT__loader_valid) 
                                          & (IData)(vlSelf->execute_arbitration_isValid));
    vlSelf->execute_arbitration_haltByOther = 0U;
    if (vlSelf->when_DBusCachedPlugin_l414) {
        vlSelf->execute_arbitration_haltByOther = 1U;
    }
    vlSelf->IBusCachedPlugin_pcValids_0 = vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_2;
    vlSelf->when_Fetcher_l322 = (1U & (~ (IData)(vlSelf->IBusCachedPlugin_injector_nextPcCalc_valids_2)));
    vlSelf->IBusCachedPlugin_iBusRsp_readyForError = 1U;
    if (vlSelf->when_Fetcher_l322) {
        vlSelf->IBusCachedPlugin_iBusRsp_readyForError = 0U;
    }
}

VL_INLINE_OPT void Vsonata_VexRiscv___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__3(Vsonata_VexRiscv* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsonata_VexRiscv___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__3\n"); );
    // Body
    vlSelf->IBusCachedPlugin_cache__DOT__io_mem_cmd_ready 
        = vlSelf->iBus_cmd_ready;
    vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_ready 
        = vlSelf->dBus_cmd_ready;
    vlSelf->IBusCachedPlugin_cache__DOT__io_mem_rsp_valid 
        = vlSelf->iBus_rsp_valid;
}

VL_INLINE_OPT void Vsonata_VexRiscv___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__4(Vsonata_VexRiscv* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsonata_VexRiscv___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__4\n"); );
    // Init
    CData/*0:0*/ dataCache_1__DOT____VdfgRegularize_h7f3e83cb_2_1;
    dataCache_1__DOT____VdfgRegularize_h7f3e83cb_2_1 = 0;
    // Body
    vlSelf->dataCache_1_io_cpu_flush_payload_lineId 
        = (0x3fU & (vlSelf->decode_to_execute_RS1 >> 6U));
    vlSelf->writeBack_ENV_CTRL = vlSelf->memory_to_writeBack_ENV_CTRL;
    vlSelf->switch_CsrPlugin_l1604 = (3U & (vlSelf->memory_to_writeBack_INSTRUCTION 
                                            >> 0x1cU));
    vlSelf->MmuPlugin_shared_dBusRspStaged_payload_redo 
        = vlSelf->MmuPlugin_dBusAccess_rsp_payload_redo;
    vlSelf->dBus_rsp_regNext_payload_error = vlSelf->dBus_rsp_payload_error;
    vlSelf->dataCache_1__DOT__io_cpu_flush_payload_lineId 
        = vlSelf->dataCache_1_io_cpu_flush_payload_lineId;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l827) {
        vlSelf->dataCache_1__DOT__stageB_request_isLrsc 
            = vlSelf->dataCache_1__DOT__stageA_request_isLrsc;
        vlSelf->dataCache_1__DOT__stageB_request_wr 
            = vlSelf->dataCache_1__DOT__stageA_request_wr;
    }
    if (vlSelf->when_CsrPlugin_l1813_23) {
        vlSelf->execute_CsrPlugin_csr_771 = (0x303U 
                                             == (vlSelf->decode_INSTRUCTION 
                                                 >> 0x14U));
    }
    if (vlSelf->when_CsrPlugin_l1813_22) {
        vlSelf->execute_CsrPlugin_csr_770 = (0x302U 
                                             == (vlSelf->decode_INSTRUCTION 
                                                 >> 0x14U));
    }
    if (vlSelf->when_CsrPlugin_l1813_8) {
        vlSelf->execute_CsrPlugin_csr_1953 = (0x7a1U 
                                              == (vlSelf->decode_INSTRUCTION 
                                                  >> 0x14U));
    }
    if (vlSelf->when_CsrPlugin_l1813_25) {
        vlSelf->execute_CsrPlugin_csr_260 = (0x104U 
                                             == (vlSelf->decode_INSTRUCTION 
                                                 >> 0x14U));
    }
    if (vlSelf->when_CsrPlugin_l1813_16) {
        vlSelf->execute_CsrPlugin_csr_772 = (0x304U 
                                             == (vlSelf->decode_INSTRUCTION 
                                                 >> 0x14U));
    }
    if (vlSelf->when_CsrPlugin_l1813_24) {
        vlSelf->execute_CsrPlugin_csr_324 = (0x144U 
                                             == (vlSelf->decode_INSTRUCTION 
                                                 >> 0x14U));
    }
    if (vlSelf->when_CsrPlugin_l1813_15) {
        vlSelf->execute_CsrPlugin_csr_836 = (0x344U 
                                             == (vlSelf->decode_INSTRUCTION 
                                                 >> 0x14U));
    }
    if (vlSelf->when_CsrPlugin_l1813_31) {
        vlSelf->execute_CsrPlugin_csr_800 = (0x320U 
                                             == (vlSelf->decode_INSTRUCTION 
                                                 >> 0x14U));
    }
    if (vlSelf->when_MmuPlugin_l279) {
        if (vlSelf->when_MmuPlugin_l281) {
            if (vlSelf->when_MmuPlugin_l287) {
                vlSelf->MmuPlugin_ports_0_cache_0_exception 
                    = (1U & (((IData)(vlSelf->MmuPlugin_shared_dBusRsp_exception) 
                              | ((2U == (IData)(vlSelf->MmuPlugin_shared_state_1)) 
                                 & (0U != (IData)(vlSelf->MmuPlugin_shared_dBusRsp_pte_PPN0)))) 
                             | (~ (IData)(vlSelf->MmuPlugin_shared_dBusRsp_pte_A))));
            }
            if (vlSelf->when_MmuPlugin_l287_1) {
                vlSelf->MmuPlugin_ports_0_cache_1_exception 
                    = (1U & (((IData)(vlSelf->MmuPlugin_shared_dBusRsp_exception) 
                              | ((2U == (IData)(vlSelf->MmuPlugin_shared_state_1)) 
                                 & (0U != (IData)(vlSelf->MmuPlugin_shared_dBusRsp_pte_PPN0)))) 
                             | (~ (IData)(vlSelf->MmuPlugin_shared_dBusRsp_pte_A))));
            }
            if (vlSelf->when_MmuPlugin_l287_2) {
                vlSelf->MmuPlugin_ports_0_cache_2_exception 
                    = (1U & (((IData)(vlSelf->MmuPlugin_shared_dBusRsp_exception) 
                              | ((2U == (IData)(vlSelf->MmuPlugin_shared_state_1)) 
                                 & (0U != (IData)(vlSelf->MmuPlugin_shared_dBusRsp_pte_PPN0)))) 
                             | (~ (IData)(vlSelf->MmuPlugin_shared_dBusRsp_pte_A))));
            }
            if (vlSelf->when_MmuPlugin_l287_3) {
                vlSelf->MmuPlugin_ports_0_cache_3_exception 
                    = (1U & (((IData)(vlSelf->MmuPlugin_shared_dBusRsp_exception) 
                              | ((2U == (IData)(vlSelf->MmuPlugin_shared_state_1)) 
                                 & (0U != (IData)(vlSelf->MmuPlugin_shared_dBusRsp_pte_PPN0)))) 
                             | (~ (IData)(vlSelf->MmuPlugin_shared_dBusRsp_pte_A))));
            }
        }
        if (vlSelf->when_MmuPlugin_l281_1) {
            if (vlSelf->when_MmuPlugin_l287_6) {
                vlSelf->MmuPlugin_ports_1_cache_2_exception 
                    = (1U & (((IData)(vlSelf->MmuPlugin_shared_dBusRsp_exception) 
                              | ((2U == (IData)(vlSelf->MmuPlugin_shared_state_1)) 
                                 & (0U != (IData)(vlSelf->MmuPlugin_shared_dBusRsp_pte_PPN0)))) 
                             | (~ (IData)(vlSelf->MmuPlugin_shared_dBusRsp_pte_A))));
            }
            if (vlSelf->when_MmuPlugin_l287_4) {
                vlSelf->MmuPlugin_ports_1_cache_0_exception 
                    = (1U & (((IData)(vlSelf->MmuPlugin_shared_dBusRsp_exception) 
                              | ((2U == (IData)(vlSelf->MmuPlugin_shared_state_1)) 
                                 & (0U != (IData)(vlSelf->MmuPlugin_shared_dBusRsp_pte_PPN0)))) 
                             | (~ (IData)(vlSelf->MmuPlugin_shared_dBusRsp_pte_A))));
            }
            if (vlSelf->when_MmuPlugin_l287_5) {
                vlSelf->MmuPlugin_ports_1_cache_1_exception 
                    = (1U & (((IData)(vlSelf->MmuPlugin_shared_dBusRsp_exception) 
                              | ((2U == (IData)(vlSelf->MmuPlugin_shared_state_1)) 
                                 & (0U != (IData)(vlSelf->MmuPlugin_shared_dBusRsp_pte_PPN0)))) 
                             | (~ (IData)(vlSelf->MmuPlugin_shared_dBusRsp_pte_A))));
            }
            if (vlSelf->when_MmuPlugin_l287_7) {
                vlSelf->MmuPlugin_ports_1_cache_3_exception 
                    = (1U & (((IData)(vlSelf->MmuPlugin_shared_dBusRsp_exception) 
                              | ((2U == (IData)(vlSelf->MmuPlugin_shared_state_1)) 
                                 & (0U != (IData)(vlSelf->MmuPlugin_shared_dBusRsp_pte_PPN0)))) 
                             | (~ (IData)(vlSelf->MmuPlugin_shared_dBusRsp_pte_A))));
            }
        }
    }
    if (vlSelf->when_CsrPlugin_l1813_2) {
        vlSelf->execute_CsrPlugin_csr_384 = (0x180U 
                                             == (vlSelf->decode_INSTRUCTION 
                                                 >> 0x14U));
    }
    if (vlSelf->when_CsrPlugin_l1813_5) {
        vlSelf->execute_CsrPlugin_csr_1968 = (0x7b0U 
                                              == (vlSelf->decode_INSTRUCTION 
                                                  >> 0x14U));
    }
    if (vlSelf->when_CsrPlugin_l1813_1) {
        vlSelf->execute_CsrPlugin_csr_256 = (0x100U 
                                             == (vlSelf->decode_INSTRUCTION 
                                                 >> 0x14U));
    }
    if (vlSelf->when_CsrPlugin_l1813) {
        vlSelf->execute_CsrPlugin_csr_768 = (0x300U 
                                             == (vlSelf->decode_INSTRUCTION 
                                                 >> 0x14U));
    }
    vlSelf->when_MmuPlugin_l281 = (1U & (IData)(vlSelf->MmuPlugin_shared_portSortedOh));
    vlSelf->MmuPlugin_shared_dBusRsp_pte_A = (1U & 
                                              (vlSelf->MmuPlugin_shared_dBusRspStaged_payload_data 
                                               >> 6U));
    vlSelf->MmuPlugin_shared_dBusRsp_pte_PPN0 = (0x3ffU 
                                                 & (vlSelf->MmuPlugin_shared_dBusRspStaged_payload_data 
                                                    >> 0xaU));
    vlSelf->MmuPlugin_shared_dBusRsp_exception = (1U 
                                                  & ((~ (IData)(vlSelf->MmuPlugin_shared_dBusRsp_pte_V)) 
                                                     | (((~ (IData)(vlSelf->MmuPlugin_shared_dBusRsp_pte_R)) 
                                                         & (IData)(vlSelf->MmuPlugin_shared_dBusRsp_pte_W)) 
                                                        | (IData)(vlSelf->MmuPlugin_shared_dBusRspStaged_payload_error))));
    vlSelf->when_MmuPlugin_l281_1 = (1U & ((IData)(vlSelf->MmuPlugin_shared_portSortedOh) 
                                           >> 1U));
    vlSelf->decode_INSTRUCTION = vlSelf->IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen;
    vlSelf->dataCache_1__DOT__io_mem_rsp_payload_error 
        = vlSelf->dBus_rsp_regNext_payload_error;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l776) {
        vlSelf->dataCache_1__DOT__stageA_request_isLrsc 
            = vlSelf->dataCache_1_io_cpu_execute_args_isLrsc;
        vlSelf->dataCache_1__DOT__stageA_request_wr 
            = vlSelf->dataCache_1_io_cpu_execute_args_wr;
    }
    vlSelf->dataCache_1_io_cpu_writeBack_isWrite = vlSelf->dataCache_1__DOT__stageB_request_wr;
    vlSelf->dataCache_1__DOT__io_cpu_writeBack_isWrite 
        = vlSelf->dataCache_1__DOT__stageB_request_wr;
    dataCache_1__DOT____VdfgRegularize_h7f3e83cb_2_1 
        = (1U & ((~ (IData)(vlSelf->dataCache_1__DOT__stageB_request_wr)) 
                 | (IData)(vlSelf->dataCache_1__DOT__stageB_request_isAmo)));
    vlSelf->dataCache_1__DOT__when_DataCache_l931 = 
        ((IData)(vlSelf->dataCache_1__DOT__stageB_request_wr) 
         & (IData)(vlSelf->dataCache_1__DOT__stageB_waysHit));
    vlSelf->dataCache_1__DOT__when_DataCache_l1009 
        = ((IData)(vlSelf->dataCache_1__DOT__stageB_waysHit) 
           | ((~ (IData)(vlSelf->dataCache_1__DOT__stageB_request_isAmo)) 
              & (IData)(vlSelf->dataCache_1__DOT__stageB_request_wr)));
    vlSelf->_zz_MmuPlugin_ports_0_cacheLine_exception 
        = ((0U == (IData)(vlSelf->_zz_MmuPlugin_ports_0_cacheLine_valid_3))
            ? (IData)(vlSelf->MmuPlugin_ports_0_cache_0_exception)
            : ((1U == (IData)(vlSelf->_zz_MmuPlugin_ports_0_cacheLine_valid_3))
                ? (IData)(vlSelf->MmuPlugin_ports_0_cache_1_exception)
                : ((2U == (IData)(vlSelf->_zz_MmuPlugin_ports_0_cacheLine_valid_3))
                    ? (IData)(vlSelf->MmuPlugin_ports_0_cache_2_exception)
                    : (IData)(vlSelf->MmuPlugin_ports_0_cache_3_exception))));
    vlSelf->_zz_MmuPlugin_ports_1_cacheLine_exception 
        = ((0U == (IData)(vlSelf->_zz_MmuPlugin_ports_1_cacheLine_valid_3))
            ? (IData)(vlSelf->MmuPlugin_ports_1_cache_0_exception)
            : ((1U == (IData)(vlSelf->_zz_MmuPlugin_ports_1_cacheLine_valid_3))
                ? (IData)(vlSelf->MmuPlugin_ports_1_cache_1_exception)
                : ((2U == (IData)(vlSelf->_zz_MmuPlugin_ports_1_cacheLine_valid_3))
                    ? (IData)(vlSelf->MmuPlugin_ports_1_cache_2_exception)
                    : (IData)(vlSelf->MmuPlugin_ports_1_cache_3_exception))));
    vlSelf->when_MmuPlugin_l250 = ((IData)(vlSelf->MmuPlugin_shared_dBusRsp_leaf) 
                                   | (IData)(vlSelf->MmuPlugin_shared_dBusRsp_exception));
    vlSelf->dataCache_1__DOT__when_DataCache_l1025 
        = ((IData)(dataCache_1__DOT____VdfgRegularize_h7f3e83cb_2_1) 
           & (0U != ((IData)(vlSelf->dataCache_1__DOT__stageB_dataColisions) 
                     & (IData)(vlSelf->dataCache_1__DOT__stageB_waysHits))));
    vlSelf->dataCache_1__DOT__stageB_badPermissions 
        = (((~ (IData)(vlSelf->dataCache_1__DOT__stageB_mmuRsp_allowWrite)) 
            & (IData)(vlSelf->dataCache_1__DOT__stageB_request_wr)) 
           | ((~ (IData)(vlSelf->dataCache_1__DOT__stageB_mmuRsp_allowRead)) 
              & (IData)(dataCache_1__DOT____VdfgRegularize_h7f3e83cb_2_1)));
    vlSelf->MmuPlugin_ports_0_cacheLine_exception = vlSelf->_zz_MmuPlugin_ports_0_cacheLine_exception;
    vlSelf->MmuPlugin_ports_1_cacheLine_exception = vlSelf->_zz_MmuPlugin_ports_1_cacheLine_exception;
    vlSelf->dataCache_1__DOT__io_cpu_memory_isWrite 
        = vlSelf->dataCache_1__DOT__stageA_request_wr;
    vlSelf->dataCache_1_io_cpu_memory_isWrite = vlSelf->dataCache_1__DOT__stageA_request_wr;
}

VL_INLINE_OPT void Vsonata_VexRiscv___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__5(Vsonata_VexRiscv* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsonata_VexRiscv___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__5\n"); );
    // Body
    vlSelf->IBusCachedPlugin_cache__DOT__io_mem_rsp_payload_error 
        = vlSelf->iBus_rsp_payload_error;
    vlSelf->IBusCachedPlugin_cache__DOT__systemCd_logic_outputReset 
        = vlSelf->systemCd_logic_outputReset;
    vlSelf->dataCache_1__DOT__systemCd_logic_outputReset 
        = vlSelf->systemCd_logic_outputReset;
    vlSelf->systemCd_logic_outputReset_buffercc__DOT__io_dataIn 
        = vlSelf->systemCd_logic_outputReset;
    vlSelf->systemCd_logic_outputReset_buffercc__DOT__systemCd_logic_outputReset 
        = vlSelf->systemCd_logic_outputReset;
}

VL_INLINE_OPT void Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__0(Vsonata_VexRiscv* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__0\n"); );
    // Body
    vlSelf->when_CsrPlugin_l768 = ((IData)(vlSelf->debugBus_dmToHart_valid) 
                                   & (0U == (IData)(vlSelf->debugBus_dmToHart_payload_op)));
    vlSelf->CsrPlugin_inject_cmd_valid = ((IData)(vlSelf->debugBus_dmToHart_valid) 
                                          & ((1U == (IData)(vlSelf->debugBus_dmToHart_payload_op)) 
                                             | ((3U 
                                                 == (IData)(vlSelf->debugBus_dmToHart_payload_op)) 
                                                | (2U 
                                                   == (IData)(vlSelf->debugBus_dmToHart_payload_op)))));
    vlSelf->CsrPlugin_inject_cmd_toStream_valid = vlSelf->CsrPlugin_inject_cmd_valid;
    vlSelf->when_CsrPlugin_l804 = ((IData)(vlSelf->CsrPlugin_inject_cmd_valid) 
                                   & (1U == (IData)(vlSelf->debugBus_dmToHart_payload_op)));
}

extern const VlUnpacked<CData/*0:0*/, 64> Vsonata__ConstPool__TABLE_hce48e6ba_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsonata__ConstPool__TABLE_hffffca49_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsonata__ConstPool__TABLE_h79590d48_0;
extern const VlUnpacked<CData/*3:0*/, 32> Vsonata__ConstPool__TABLE_h4a9576a0_0;

VL_INLINE_OPT void Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__1(Vsonata_VexRiscv* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__1\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_h16d7421c_8_35;
    __VdfgRegularize_h16d7421c_8_35 = 0;
    CData/*0:0*/ __VdfgRegularize_h16d7421c_8_36;
    __VdfgRegularize_h16d7421c_8_36 = 0;
    CData/*0:0*/ __VdfgRegularize_h16d7421c_8_37;
    __VdfgRegularize_h16d7421c_8_37 = 0;
    CData/*5:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*4:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*5:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*6:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    // Body
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_0_payload_address 
        = ((0x3f0U & (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_address 
                      >> 2U)) | (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wordIndex));
    vlSelf->lastStageRegFileWrite_payload_address = vlSelf->HazardSimplePlugin_writeBackWrites_payload_address;
    vlSelf->CsrPlugin_injectionPort_valid = ((IData)(vlSelf->CsrPlugin_inject_cmd_toStream_rValid) 
                                             & (1U 
                                                == (IData)(vlSelf->CsrPlugin_inject_cmd_toStream_rData_op)));
    vlSelf->IBusCachedPlugin_cache_io_cpu_fetch_isValid 
        = ((~ (IData)(vlSelf->IBusCachedPlugin_s1_tightlyCoupledHit)) 
           & (IData)(vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid));
    vlSelf->IBusCachedPlugin_mmuBus_rsp_refilling = 
        ((IData)(vlSelf->MmuPlugin_ports_0_requireMmuLockup) 
         & ((~ (IData)(vlSelf->MmuPlugin_ports_0_cacheHit)) 
            | (IData)(vlSelf->MmuPlugin_ports_0_dirty)));
    vlSelf->DBusCachedPlugin_mmuBus_rsp_refilling = 
        ((IData)(vlSelf->MmuPlugin_ports_1_requireMmuLockup) 
         & ((~ (IData)(vlSelf->MmuPlugin_ports_1_cacheHit)) 
            | (IData)(vlSelf->MmuPlugin_ports_1_dirty)));
    vlSelf->_zz_when_CsrPlugin_l1446_4 = ((IData)(vlSelf->CsrPlugin_mie_MSIE) 
                                          & (IData)(vlSelf->CsrPlugin_mip_MSIP));
    vlSelf->_zz_when_CsrPlugin_l1446_3 = ((IData)(vlSelf->CsrPlugin_mie_MTIE) 
                                          & (IData)(vlSelf->CsrPlugin_mip_MTIP));
    vlSelf->_zz_when_CsrPlugin_l1446_5 = ((IData)(vlSelf->CsrPlugin_mie_MEIE) 
                                          & (IData)(vlSelf->CsrPlugin_mip_MEIP));
    vlSelf->IBusCachedPlugin_mmuBus_rsp_allowRead = 
        ((IData)(vlSelf->IBusCachedPlugin_mmuBus_rsp_bypassTranslation) 
         | ((IData)(vlSelf->_zz_MmuPlugin_ports_0_cacheLine_allowRead) 
            | ((IData)(vlSelf->MmuPlugin_status_mxr) 
               & (IData)(vlSelf->_zz_MmuPlugin_ports_0_cacheLine_allowExecute))));
    vlSelf->DBusCachedPlugin_mmuBus_rsp_allowRead = 
        ((IData)(vlSelf->DBusCachedPlugin_mmuBus_rsp_bypassTranslation) 
         | ((IData)(vlSelf->_zz_MmuPlugin_ports_1_cacheLine_allowRead) 
            | ((IData)(vlSelf->MmuPlugin_status_mxr) 
               & (IData)(vlSelf->_zz_MmuPlugin_ports_1_cacheLine_allowExecute))));
    vlSelf->CsrPlugin_sip_SEIP_OR = ((IData)(vlSelf->CsrPlugin_sip_SEIP_INPUT) 
                                     | (IData)(vlSelf->CsrPlugin_sip_SEIP_SOFT));
    vlSelf->_zz_MmuPlugin_ports_0_cacheLine_valid_4 
        = ((0U == (IData)(vlSelf->_zz_MmuPlugin_ports_0_cacheLine_valid_3))
            ? (IData)(vlSelf->MmuPlugin_ports_0_cache_0_valid)
            : ((1U == (IData)(vlSelf->_zz_MmuPlugin_ports_0_cacheLine_valid_3))
                ? (IData)(vlSelf->MmuPlugin_ports_0_cache_1_valid)
                : ((2U == (IData)(vlSelf->_zz_MmuPlugin_ports_0_cacheLine_valid_3))
                    ? (IData)(vlSelf->MmuPlugin_ports_0_cache_2_valid)
                    : (IData)(vlSelf->MmuPlugin_ports_0_cache_3_valid))));
    vlSelf->_zz_MmuPlugin_ports_1_cacheLine_valid_4 
        = ((0U == (IData)(vlSelf->_zz_MmuPlugin_ports_1_cacheLine_valid_3))
            ? (IData)(vlSelf->MmuPlugin_ports_1_cache_0_valid)
            : ((1U == (IData)(vlSelf->_zz_MmuPlugin_ports_1_cacheLine_valid_3))
                ? (IData)(vlSelf->MmuPlugin_ports_1_cache_1_valid)
                : ((2U == (IData)(vlSelf->_zz_MmuPlugin_ports_1_cacheLine_valid_3))
                    ? (IData)(vlSelf->MmuPlugin_ports_1_cache_2_valid)
                    : (IData)(vlSelf->MmuPlugin_ports_1_cache_3_valid))));
    vlSelf->MmuPlugin_ports_1_cacheHitsCalc = ((((IData)(vlSelf->MmuPlugin_ports_1_cache_3_valid) 
                                                 & (((IData)(vlSelf->MmuPlugin_ports_1_cache_3_virtualAddress_1) 
                                                     == (IData)(vlSelf->_zz_MmuPlugin_ports_1_cacheHitsCalc)) 
                                                    & ((IData)(vlSelf->MmuPlugin_ports_1_cache_3_superPage) 
                                                       | ((IData)(vlSelf->MmuPlugin_ports_1_cache_3_virtualAddress_0) 
                                                          == (IData)(vlSelf->_zz_MmuPlugin_ports_1_cacheHitsCalc_1))))) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->MmuPlugin_ports_1_cache_2_valid) 
                                                    & (((IData)(vlSelf->MmuPlugin_ports_1_cache_2_virtualAddress_1) 
                                                        == (IData)(vlSelf->_zz_MmuPlugin_ports_1_cacheHitsCalc)) 
                                                       & ((IData)(vlSelf->MmuPlugin_ports_1_cache_2_superPage) 
                                                          | ((IData)(vlSelf->MmuPlugin_ports_1_cache_2_virtualAddress_0) 
                                                             == (IData)(vlSelf->_zz_MmuPlugin_ports_1_cacheHitsCalc_1))))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->MmuPlugin_ports_1_cache_1_valid) 
                                                       & ((IData)(vlSelf->_zz_MmuPlugin_ports_1_cacheHitsCalc_2) 
                                                          & ((IData)(vlSelf->MmuPlugin_ports_1_cache_1_superPage) 
                                                             | (IData)(vlSelf->_zz_MmuPlugin_ports_1_cacheHitsCalc_3)))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->MmuPlugin_ports_1_cache_0_valid) 
                                                        & ((IData)(vlSelf->_zz_MmuPlugin_ports_1_cacheHitsCalc_4) 
                                                           & ((IData)(vlSelf->MmuPlugin_ports_1_cache_0_superPage) 
                                                              | (IData)(vlSelf->_zz_MmuPlugin_ports_1_cacheHitsCalc_5)))))));
    vlSelf->when_CsrPlugin_l1862 = ((IData)(vlSelf->CsrPlugin_running) 
                                    & (0x7bU == (IData)(vlSelf->_zz_when_CsrPlugin_l1862)));
    vlSelf->IBusCachedPlugin_cache_io_cpu_decode_isValid 
        = ((~ (IData)(vlSelf->IBusCachedPlugin_s2_tightlyCoupledHit)) 
           & (IData)(vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_2_output_m2sPipe_valid));
    vlSelf->when_MulPlugin_l147 = ((IData)(vlSelf->memory_to_writeBack_IS_MUL) 
                                   & (IData)(vlSelf->writeBack_arbitration_isValid));
    vlSelf->when_HazardSimplePlugin_l45 = ((IData)(vlSelf->memory_to_writeBack_REGFILE_WRITE_VALID) 
                                           & (IData)(vlSelf->writeBack_arbitration_isValid));
    vlSelf->when_DBusCachedPlugin_l552 = ((IData)(vlSelf->memory_to_writeBack_MEMORY_ENABLE) 
                                          & (IData)(vlSelf->writeBack_arbitration_isValid));
    vlSelf->CsrPlugin_trapCause = vlSelf->CsrPlugin_interrupt_code;
    vlSelf->dataCache_1__DOT__when_DataCache_l1129 
        = ((~ (IData)(vlSelf->dataCache_1__DOT__loader_valid_regNext)) 
           & (IData)(vlSelf->dataCache_1__DOT__loader_valid));
    vlSelf->writeBack_DBusCachedPlugin_rspRf = vlSelf->writeBack_DBusCachedPlugin_rspShifted;
    if (vlSelf->when_DBusCachedPlugin_l589) {
        vlSelf->writeBack_DBusCachedPlugin_rspRf = vlSelf->_zz_writeBack_DBusCachedPlugin_rspRf;
    }
    vlSelf->_zz_MmuPlugin_ports_0_cacheHitsCalc_2 = 
        ((IData)(vlSelf->MmuPlugin_ports_0_cache_1_virtualAddress_1) 
         == (IData)(vlSelf->_zz_MmuPlugin_ports_0_cacheHitsCalc));
    vlSelf->_zz_MmuPlugin_ports_0_cacheHitsCalc_4 = 
        ((IData)(vlSelf->MmuPlugin_ports_0_cache_0_virtualAddress_1) 
         == (IData)(vlSelf->_zz_MmuPlugin_ports_0_cacheHitsCalc));
    vlSelf->_zz_MmuPlugin_ports_0_cacheHitsCalc_3 = 
        ((IData)(vlSelf->MmuPlugin_ports_0_cache_1_virtualAddress_0) 
         == (IData)(vlSelf->_zz_MmuPlugin_ports_0_cacheHitsCalc_1));
    vlSelf->_zz_MmuPlugin_ports_0_cacheHitsCalc_5 = 
        ((IData)(vlSelf->MmuPlugin_ports_0_cache_0_virtualAddress_0) 
         == (IData)(vlSelf->_zz_MmuPlugin_ports_0_cacheHitsCalc_1));
    vlSelf->CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 3U;
    if ((8U & (IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
        if ((4U & (IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
            if ((2U & (IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
                if ((1U & (IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
                    if (vlSelf->when_CsrPlugin_l1360_12) {
                        vlSelf->CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
                    }
                }
            } else if ((1U & (IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
                if (vlSelf->when_CsrPlugin_l1360_11) {
                    vlSelf->CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
                }
            } else if (vlSelf->when_CsrPlugin_l1360_10) {
                vlSelf->CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
            }
        } else if ((1U & (~ ((IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionContext_code) 
                             >> 1U)))) {
            if ((1U & (IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
                if (vlSelf->when_CsrPlugin_l1360_9) {
                    vlSelf->CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
                }
            } else if (vlSelf->when_CsrPlugin_l1360_8) {
                vlSelf->CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
            }
        }
    } else if ((4U & (IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
        if ((2U & (IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
            if ((1U & (IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
                if (vlSelf->when_CsrPlugin_l1360_7) {
                    vlSelf->CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
                }
            } else if (vlSelf->when_CsrPlugin_l1360_6) {
                vlSelf->CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
            }
        } else if ((1U & (IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
            if (vlSelf->when_CsrPlugin_l1360_5) {
                vlSelf->CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
            }
        } else if (vlSelf->when_CsrPlugin_l1360_4) {
            vlSelf->CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
        }
    } else if ((2U & (IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
        if ((1U & (IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
            if (vlSelf->when_CsrPlugin_l1360_3) {
                vlSelf->CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
            }
        } else if (vlSelf->when_CsrPlugin_l1360_2) {
            vlSelf->CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
        }
    } else if ((1U & (IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionContext_code))) {
        if (vlSelf->when_CsrPlugin_l1360_1) {
            vlSelf->CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
        }
    } else if (vlSelf->when_CsrPlugin_l1360) {
        vlSelf->CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped = 1U;
    }
    vlSelf->dataCache_1_io_cpu_writeBack_isValid = 
        ((IData)(vlSelf->writeBack_arbitration_isValid) 
         & (IData)(vlSelf->writeBack_MEMORY_ENABLE));
    if (vlSelf->writeBack_IS_DBUS_SHARING) {
        vlSelf->dataCache_1_io_cpu_writeBack_isValid = 1U;
    }
    if (vlSelf->writeBack_arbitration_haltByOther) {
        vlSelf->dataCache_1_io_cpu_writeBack_isValid = 0U;
    }
    vlSelf->when_CsrPlugin_l1600 = ((IData)(vlSelf->writeBack_arbitration_isValid) 
                                    & (1U == (IData)(vlSelf->memory_to_writeBack_ENV_CTRL)));
    vlSelf->when_CsrPlugin_l1692 = ((IData)(vlSelf->CsrPlugin_privilege) 
                                    < (3U & (vlSelf->decode_to_execute_INSTRUCTION 
                                             >> 0x1cU)));
    vlSelf->dataCache_1_io_cpu_memory_isValid = ((IData)(vlSelf->memory_arbitration_isValid) 
                                                 & (IData)(vlSelf->memory_MEMORY_ENABLE));
    if (vlSelf->memory_IS_DBUS_SHARING) {
        vlSelf->dataCache_1_io_cpu_memory_isValid = 1U;
    }
    vlSelf->when_HazardSimplePlugin_l45_1 = ((IData)(vlSelf->execute_to_memory_REGFILE_WRITE_VALID) 
                                             & (IData)(vlSelf->memory_arbitration_isValid));
    vlSelf->when_MulDivIterativePlugin_l128 = ((IData)(vlSelf->execute_to_memory_IS_DIV) 
                                               & (IData)(vlSelf->memory_arbitration_isValid));
    vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_address = 0U;
    vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_data_address = 0U;
    __Vtableidx5 = (((IData)(vlSelf->when_CsrPlugin_l1521) 
                     << 5U) | (((IData)(vlSelf->when_CsrPlugin_l1520) 
                                << 4U) | (((IData)(vlSelf->when_CsrPlugin_l1519) 
                                           << 3U) | 
                                          (((IData)(vlSelf->debugMode) 
                                            << 2U) 
                                           | (((IData)(vlSelf->when_CsrPlugin_l1517) 
                                               << 1U) 
                                              | (IData)(vlSelf->CsrPlugin_hadException))))));
    vlSelf->CsrPlugin_trapCauseEbreakDebug = Vsonata__ConstPool__TABLE_hce48e6ba_0
        [__Vtableidx5];
    vlSelf->when_CsrPlugin_l1699 = ((IData)(vlSelf->execute_arbitration_isValid) 
                                    & (3U == (IData)(vlSelf->decode_to_execute_ENV_CTRL)));
    vlSelf->when_CsrPlugin_l1709 = ((IData)(vlSelf->execute_arbitration_isValid) 
                                    & ((4U == (IData)(vlSelf->decode_to_execute_ENV_CTRL)) 
                                       & (IData)(vlSelf->CsrPlugin_allowEbreakException)));
    vlSelf->when_CsrPlugin_l1691 = ((IData)(vlSelf->execute_arbitration_isValid) 
                                    & (1U == (IData)(vlSelf->decode_to_execute_ENV_CTRL)));
    vlSelf->when_CsrPlugin_l1735 = ((IData)(vlSelf->execute_arbitration_isValid) 
                                    & ((IData)(vlSelf->decode_to_execute_IS_CSR) 
                                       | (IData)(vlSelf->decode_to_execute_RESCHEDULE_NEXT)));
    vlSelf->when_CsrPlugin_l1663 = ((IData)(vlSelf->execute_arbitration_isValid) 
                                    & (2U == (IData)(vlSelf->decode_to_execute_ENV_CTRL)));
    vlSelf->dataCache_1_io_cpu_flush_valid = ((IData)(vlSelf->decode_to_execute_MEMORY_MANAGMENT) 
                                              & (IData)(vlSelf->execute_arbitration_isValid));
    vlSelf->when_HazardSimplePlugin_l45_2 = ((IData)(vlSelf->decode_to_execute_REGFILE_WRITE_VALID) 
                                             & (IData)(vlSelf->execute_arbitration_isValid));
    vlSelf->when_CsrPlugin_l1304 = ((IData)(vlSelf->decode_to_execute_RESCHEDULE_NEXT) 
                                    & (IData)(vlSelf->execute_arbitration_isValid));
    vlSelf->when_CsrPlugin_l1731 = ((IData)(vlSelf->decode_to_execute_IS_CSR) 
                                    & (IData)(vlSelf->execute_arbitration_isValid));
    vlSelf->BranchPlugin_jumpInterface_valid = ((IData)(vlSelf->_zz_execute_BRANCH_DO_1) 
                                                & (IData)(vlSelf->execute_arbitration_isValid));
    vlSelf->BranchPlugin_branchExceptionPort_valid 
        = (((IData)(vlSelf->execute_arbitration_isValid) 
            & (IData)(vlSelf->execute_BRANCH_DO)) & 
           (vlSelf->BranchPlugin_jumpInterface_payload 
            >> 1U));
    if (vlSelf->when_BranchPlugin_l223) {
        vlSelf->BranchPlugin_branchExceptionPort_valid = 0U;
    }
    vlSelf->CsrPlugin_trigger_slots_0_tdata2_execute_hit 
        = ((IData)(vlSelf->CsrPlugin_trigger_slots_0_tdata2_enabled) 
           & ((IData)(vlSelf->CsrPlugin_trigger_slots_0_tdata1_execute) 
              & (vlSelf->CsrPlugin_trigger_slots_0_tdata2_value 
                 == vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_2_output_m2sPipe_payload)));
    vlSelf->when_MmuPlugin_l211 = ((~ (IData)(vlSelf->MmuPlugin_shared_dBusRspStaged_payload_redo)) 
                                   & (IData)(vlSelf->MmuPlugin_shared_dBusRspStaged_valid));
    vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_data_error = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l855) {
        vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_address 
            = (0x3fU & (IData)(vlSelf->dataCache_1__DOT__stageB_flusher_counter));
    }
    vlSelf->dataCache_1__DOT__when_DataCache_l1004 
        = ((IData)(vlSelf->_zz_writeBack_DBusCachedPlugin_rspRf) 
           & (IData)(vlSelf->dataCache_1__DOT__stageB_request_isLrsc));
    vlSelf->dataCache_1__DOT__when_DataCache_l1014 
        = (1U & ((~ (IData)(vlSelf->dataCache_1__DOT__stageB_request_wr)) 
                 | (IData)(vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_rValidN)));
    vlSelf->dataCache_1__DOT__when_DataCache_l1000 
        = ((IData)(vlSelf->dataCache_1__DOT__stageB_request_wr)
            ? (IData)(vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_rValidN)
            : ((IData)(vlSelf->dBus_rsp_regNext_valid) 
               & (IData)(vlSelf->dataCache_1__DOT__rspSync)));
    vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_18 = 0U;
    vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_17 = 0U;
    vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_7 = 0U;
    vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_20 = 0U;
    vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_11 = 0U;
    vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_26 = 0U;
    vlSelf->CsrPlugin_csrMapping_doForceFailCsr = 0U;
    if (vlSelf->execute_CsrPlugin_csr_800) {
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_26 
            = ((0xfffffffeU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_26) 
               | (IData)(vlSelf->CounterPlugin_inhibitCY));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_26 
            = ((0xfffffffbU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_26) 
               | ((IData)(vlSelf->CounterPlugin_inhibitIR) 
                  << 2U));
        if (vlSelf->when_CounterPlugin_l161) {
            vlSelf->CsrPlugin_csrMapping_doForceFailCsr = 1U;
        }
    }
    if (vlSelf->execute_CsrPlugin_csr_3073) {
        if (vlSelf->when_CounterPlugin_l90) {
            vlSelf->CsrPlugin_csrMapping_doForceFailCsr = 1U;
        }
        if (vlSelf->when_CounterPlugin_l92) {
            vlSelf->CsrPlugin_csrMapping_doForceFailCsr = 1U;
        }
        if (vlSelf->when_CounterPlugin_l92_1) {
            vlSelf->CsrPlugin_csrMapping_doForceFailCsr = 1U;
        }
        if (vlSelf->when_CounterPlugin_l92_2) {
            vlSelf->CsrPlugin_csrMapping_doForceFailCsr = 1U;
        }
    }
    vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_2 = 0U;
    vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_5 = 0U;
    vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_1 = 0U;
    vlSelf->_zz_CsrPlugin_csrMapping_readDataInit = 0U;
    vlSelf->IBusCachedPlugin_mmuBus_rsp_exception = 
        ((IData)(vlSelf->MmuPlugin_ports_0_requireMmuLockup) 
         & ((~ (IData)(vlSelf->MmuPlugin_ports_0_dirty)) 
            & ((IData)(vlSelf->MmuPlugin_ports_0_cacheHit) 
               & ((IData)(vlSelf->_zz_MmuPlugin_ports_0_cacheLine_exception) 
                  | (((IData)(vlSelf->_zz_MmuPlugin_ports_0_cacheLine_allowUser) 
                      & (IData)(vlSelf->__VdfgRegularize_h16d7421c_8_38)) 
                     | ((~ (IData)(vlSelf->_zz_MmuPlugin_ports_0_cacheLine_allowUser)) 
                        & (IData)(vlSelf->IBusCachedPlugin_cache_io_cpu_decode_isUser)))))));
    vlSelf->DBusCachedPlugin_mmuBus_rsp_exception = 
        ((IData)(vlSelf->MmuPlugin_ports_1_requireMmuLockup) 
         & ((~ (IData)(vlSelf->MmuPlugin_ports_1_dirty)) 
            & ((IData)(vlSelf->MmuPlugin_ports_1_cacheHit) 
               & ((IData)(vlSelf->_zz_MmuPlugin_ports_1_cacheLine_exception) 
                  | (((IData)(vlSelf->_zz_MmuPlugin_ports_1_cacheLine_allowUser) 
                      & (IData)(vlSelf->__VdfgRegularize_h16d7421c_8_38)) 
                     | ((~ (IData)(vlSelf->_zz_MmuPlugin_ports_1_cacheLine_allowUser)) 
                        & (IData)(vlSelf->IBusCachedPlugin_cache_io_cpu_decode_isUser)))))));
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_1_payload_address 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_0_payload_address;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_2_payload_address 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_0_payload_address;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_3_payload_address 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_0_payload_address;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_4_payload_address 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_0_payload_address;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_5_payload_address 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_0_payload_address;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_6_payload_address 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_0_payload_address;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_7_payload_address 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_0_payload_address;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_8_payload_address 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_0_payload_address;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_9_payload_address 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_0_payload_address;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_10_payload_address 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_0_payload_address;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_11_payload_address 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_0_payload_address;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_12_payload_address 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_0_payload_address;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_13_payload_address 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_0_payload_address;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_14_payload_address 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_0_payload_address;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_15_payload_address 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_0_payload_address;
    vlSelf->CsrPlugin_inject_buffer_ready = ((IData)(vlSelf->CsrPlugin_injectionPort_valid) 
                                             & (IData)(vlSelf->CsrPlugin_injectionPort_ready));
    vlSelf->IBusCachedPlugin_cache__DOT__io_cpu_fetch_isValid 
        = vlSelf->IBusCachedPlugin_cache_io_cpu_fetch_isValid;
    vlSelf->IBusCachedPlugin_mmuBus_cmd_1_isValid = vlSelf->IBusCachedPlugin_cache_io_cpu_fetch_isValid;
    vlSelf->IBusCachedPlugin_cache__DOT__when_InstructionCache_l351 
        = ((~ ((IData)(vlSelf->IBusCachedPlugin_cache_io_cpu_fetch_isValid) 
               | (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_valid))) 
           & (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_flushPending));
    __VdfgRegularize_h16d7421c_8_36 = ((IData)(vlSelf->IBusCachedPlugin_cache_io_cpu_fetch_isValid) 
                                       & ((IData)(vlSelf->MmuPlugin_ports_0_requireMmuLockup) 
                                          & ((~ (IData)(vlSelf->MmuPlugin_ports_0_dirty)) 
                                             & (~ (IData)(vlSelf->MmuPlugin_ports_0_cacheHit)))));
    vlSelf->IBusCachedPlugin_cache__DOT__io_cpu_fetch_mmuRsp_refilling 
        = vlSelf->IBusCachedPlugin_mmuBus_rsp_refilling;
    vlSelf->dataCache_1__DOT__io_cpu_memory_mmuRsp_refilling 
        = vlSelf->DBusCachedPlugin_mmuBus_rsp_refilling;
    vlSelf->when_CsrPlugin_l1446_7 = vlSelf->_zz_when_CsrPlugin_l1446_4;
    vlSelf->when_CsrPlugin_l1446_6 = vlSelf->_zz_when_CsrPlugin_l1446_3;
    vlSelf->when_CsrPlugin_l1446_8 = vlSelf->_zz_when_CsrPlugin_l1446_5;
    vlSelf->IBusCachedPlugin_cache__DOT__io_cpu_fetch_mmuRsp_allowRead 
        = vlSelf->IBusCachedPlugin_mmuBus_rsp_allowRead;
    vlSelf->dataCache_1__DOT__io_cpu_memory_mmuRsp_allowRead 
        = vlSelf->DBusCachedPlugin_mmuBus_rsp_allowRead;
    vlSelf->_zz_when_CsrPlugin_l1446_2 = ((IData)(vlSelf->CsrPlugin_sip_SEIP_OR) 
                                          & (IData)(vlSelf->CsrPlugin_sie_SEIE));
    vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_19 = 0U;
    vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_10 = 0U;
    vlSelf->MmuPlugin_ports_0_cacheLine_valid = vlSelf->_zz_MmuPlugin_ports_0_cacheLine_valid_4;
    vlSelf->MmuPlugin_ports_1_cacheLine_valid = vlSelf->_zz_MmuPlugin_ports_1_cacheLine_valid_4;
    vlSelf->IBusCachedPlugin_cache__DOT__io_cpu_decode_isValid 
        = vlSelf->IBusCachedPlugin_cache_io_cpu_decode_isValid;
    vlSelf->when_IBusCachedPlugin_l245 = ((IData)(vlSelf->IBusCachedPlugin_cache_io_cpu_decode_isValid) 
                                          & ((~ (IData)(vlSelf->IBusCachedPlugin_rsp_issueDetected)) 
                                             & (IData)(vlSelf->IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling)));
    vlSelf->when_HazardSimplePlugin_l57 = vlSelf->when_HazardSimplePlugin_l45;
    vlSelf->when_DBusCachedPlugin_l599 = vlSelf->when_DBusCachedPlugin_l552;
    vlSelf->MmuPlugin_dBusAccess_rsp_payload_data = vlSelf->writeBack_DBusCachedPlugin_rspRf;
    vlSelf->_zz_writeBack_DBusCachedPlugin_rspFormated 
        = (1U & ((~ (vlSelf->memory_to_writeBack_INSTRUCTION 
                     >> 0xeU)) & (vlSelf->writeBack_DBusCachedPlugin_rspRf 
                                  >> 7U)));
    vlSelf->_zz_writeBack_DBusCachedPlugin_rspFormated_2 
        = (1U & ((~ (vlSelf->memory_to_writeBack_INSTRUCTION 
                     >> 0xeU)) & (vlSelf->writeBack_DBusCachedPlugin_rspRf 
                                  >> 0xfU)));
    vlSelf->MmuPlugin_ports_0_cacheHitsCalc = ((((IData)(vlSelf->MmuPlugin_ports_0_cache_3_valid) 
                                                 & (((IData)(vlSelf->MmuPlugin_ports_0_cache_3_virtualAddress_1) 
                                                     == (IData)(vlSelf->_zz_MmuPlugin_ports_0_cacheHitsCalc)) 
                                                    & ((IData)(vlSelf->MmuPlugin_ports_0_cache_3_superPage) 
                                                       | ((IData)(vlSelf->MmuPlugin_ports_0_cache_3_virtualAddress_0) 
                                                          == (IData)(vlSelf->_zz_MmuPlugin_ports_0_cacheHitsCalc_1))))) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->MmuPlugin_ports_0_cache_2_valid) 
                                                    & (((IData)(vlSelf->MmuPlugin_ports_0_cache_2_virtualAddress_1) 
                                                        == (IData)(vlSelf->_zz_MmuPlugin_ports_0_cacheHitsCalc)) 
                                                       & ((IData)(vlSelf->MmuPlugin_ports_0_cache_2_superPage) 
                                                          | ((IData)(vlSelf->MmuPlugin_ports_0_cache_2_virtualAddress_0) 
                                                             == (IData)(vlSelf->_zz_MmuPlugin_ports_0_cacheHitsCalc_1))))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->MmuPlugin_ports_0_cache_1_valid) 
                                                       & ((IData)(vlSelf->_zz_MmuPlugin_ports_0_cacheHitsCalc_2) 
                                                          & ((IData)(vlSelf->MmuPlugin_ports_0_cache_1_superPage) 
                                                             | (IData)(vlSelf->_zz_MmuPlugin_ports_0_cacheHitsCalc_3)))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->MmuPlugin_ports_0_cache_0_valid) 
                                                        & ((IData)(vlSelf->_zz_MmuPlugin_ports_0_cacheHitsCalc_4) 
                                                           & ((IData)(vlSelf->MmuPlugin_ports_0_cache_0_superPage) 
                                                              | (IData)(vlSelf->_zz_MmuPlugin_ports_0_cacheHitsCalc_5)))))));
    vlSelf->CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilege 
        = (((IData)(vlSelf->CsrPlugin_privilege) < (IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped))
            ? (IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped)
            : (IData)(vlSelf->CsrPlugin_privilege));
    vlSelf->dataCache_1__DOT__io_cpu_writeBack_isValid 
        = vlSelf->dataCache_1_io_cpu_writeBack_isValid;
    vlSelf->dataCache_1_io_cpu_writeBack_unalignedAccess 
        = ((IData)(vlSelf->dataCache_1__DOT__stageB_unaligned) 
           & (IData)(vlSelf->dataCache_1_io_cpu_writeBack_isValid));
    vlSelf->dataCache_1__DOT__io_mem_cmd_payload_address 
        = vlSelf->dataCache_1__DOT__stageB_mmuRsp_physicalAddress;
    vlSelf->dataCache_1__DOT__io_mem_cmd_payload_wr 
        = vlSelf->dataCache_1__DOT__stageB_request_wr;
    vlSelf->dataCache_1__DOT__io_mem_cmd_payload_size 
        = vlSelf->dataCache_1__DOT__stageB_request_size;
    vlSelf->dataCache_1__DOT__stageB_cpuWriteToCache = 0U;
    if (vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_rValidN) {
        vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_s2mPipe_payload_uncached 
            = vlSelf->dataCache_1__DOT__stageB_mmuRsp_isIoAccess;
        vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_s2mPipe_payload_data 
            = vlSelf->dataCache_1__DOT__stageB_requestDataBypass;
        vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_s2mPipe_payload_mask 
            = vlSelf->dataCache_1__DOT__stageB_mask;
        vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_s2mPipe_payload_last 
            = vlSelf->dataCache_1__DOT__io_mem_cmd_payload_last;
    } else {
        vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_s2mPipe_payload_uncached 
            = vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_rData_uncached;
        vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_s2mPipe_payload_data 
            = vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_rData_data;
        vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_s2mPipe_payload_mask 
            = vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_rData_mask;
        vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_s2mPipe_payload_last 
            = vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_rData_last;
    }
    if (vlSelf->dataCache_1_io_cpu_writeBack_isValid) {
        if ((1U & (~ (IData)(vlSelf->dataCache_1__DOT__stageB_isExternalAmo)))) {
            if ((1U & (~ (IData)(vlSelf->dataCache_1__DOT__when_DataCache_l996)))) {
                if ((1U & (~ (IData)(vlSelf->dataCache_1__DOT__when_DataCache_l1009)))) {
                    vlSelf->dataCache_1__DOT__io_mem_cmd_payload_address 
                        = (0xffffffc0U & vlSelf->dataCache_1__DOT__io_mem_cmd_payload_address);
                }
            }
        }
    }
    vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_s2mPipe_payload_address 
        = ((IData)(vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_rValidN)
            ? vlSelf->dataCache_1__DOT__io_mem_cmd_payload_address
            : vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_rData_address);
    if (vlSelf->dataCache_1_io_cpu_writeBack_isValid) {
        if ((1U & (~ (IData)(vlSelf->dataCache_1__DOT__stageB_isExternalAmo)))) {
            if ((1U & (~ (IData)(vlSelf->dataCache_1__DOT__when_DataCache_l996)))) {
                if ((1U & (~ (IData)(vlSelf->dataCache_1__DOT__when_DataCache_l1009)))) {
                    vlSelf->dataCache_1__DOT__io_mem_cmd_payload_wr = 0U;
                }
            }
        }
    }
    vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_s2mPipe_payload_wr 
        = ((IData)(vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_rValidN)
            ? (IData)(vlSelf->dataCache_1__DOT__io_mem_cmd_payload_wr)
            : (IData)(vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_rData_wr));
    if (vlSelf->dataCache_1_io_cpu_writeBack_isValid) {
        if ((1U & (~ (IData)(vlSelf->dataCache_1__DOT__stageB_isExternalAmo)))) {
            if ((1U & (~ (IData)(vlSelf->dataCache_1__DOT__when_DataCache_l996)))) {
                if ((1U & (~ (IData)(vlSelf->dataCache_1__DOT__when_DataCache_l1009)))) {
                    vlSelf->dataCache_1__DOT__io_mem_cmd_payload_size = 6U;
                }
            }
        }
    }
    vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_s2mPipe_payload_size 
        = ((IData)(vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_rValidN)
            ? (IData)(vlSelf->dataCache_1__DOT__io_mem_cmd_payload_size)
            : (IData)(vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_rData_size));
    __Vtableidx9 = (((IData)(vlSelf->dataCache_1__DOT__when_DataCache_l1129) 
                     << 6U) | (((IData)(vlSelf->dataCache_1__DOT__when_DataCache_l1081) 
                                << 5U) | (((IData)(vlSelf->dataCache_1__DOT__when_DataCache_l1025) 
                                           << 4U) | 
                                          (((IData)(vlSelf->dataCache_1__DOT__when_DataCache_l1009) 
                                            << 3U) 
                                           | ((4U & 
                                               ((~ (IData)(vlSelf->dataCache_1__DOT__when_DataCache_l996)) 
                                                << 2U)) 
                                              | (((IData)(vlSelf->dataCache_1__DOT__stageB_isExternalAmo) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->dataCache_1_io_cpu_writeBack_isValid)))))));
    vlSelf->dataCache_1__DOT__io_cpu_redo = Vsonata__ConstPool__TABLE_hffffca49_0
        [__Vtableidx9];
    vlSelf->dataCache_1__DOT__stageB_loadStoreFault 
        = ((IData)(vlSelf->dataCache_1_io_cpu_writeBack_isValid) 
           & ((IData)(vlSelf->dataCache_1__DOT__stageB_mmuRsp_exception) 
              | (IData)(vlSelf->dataCache_1__DOT__stageB_badPermissions)));
    vlSelf->CsrPlugin_xretAwayFromMachine = 0U;
    vlSelf->CsrPlugin_jumpInterface_valid = 0U;
    vlSelf->when_CsrPlugin_l1861 = vlSelf->when_CsrPlugin_l1692;
    vlSelf->dataCache_1__DOT__io_cpu_memory_isValid 
        = vlSelf->dataCache_1_io_cpu_memory_isValid;
    vlSelf->DBusCachedPlugin_mmuBus_cmd_1_isValid = vlSelf->dataCache_1_io_cpu_memory_isValid;
    __VdfgRegularize_h16d7421c_8_37 = ((IData)(vlSelf->MmuPlugin_ports_1_requireMmuLockup) 
                                       & ((IData)(vlSelf->dataCache_1_io_cpu_memory_isValid) 
                                          & ((~ (IData)(vlSelf->MmuPlugin_ports_1_dirty)) 
                                             & (~ (IData)(vlSelf->MmuPlugin_ports_1_cacheHit)))));
    vlSelf->when_HazardSimplePlugin_l57_1 = vlSelf->when_HazardSimplePlugin_l45_1;
    vlSelf->memory_MulDivIterativePlugin_div_counter_willIncrement = 0U;
    vlSelf->_zz_decode_RS2 = vlSelf->memory_REGFILE_WRITE_DATA;
    vlSelf->memory_arbitration_haltItself = 0U;
    if (vlSelf->when_MulDivIterativePlugin_l128) {
        if (vlSelf->when_MulDivIterativePlugin_l132) {
            vlSelf->memory_MulDivIterativePlugin_div_counter_willIncrement = 1U;
        }
        vlSelf->_zz_decode_RS2 = vlSelf->memory_MulDivIterativePlugin_div_result;
        if (vlSelf->when_MulDivIterativePlugin_l129) {
            vlSelf->memory_arbitration_haltItself = 1U;
        }
    }
    vlSelf->when_CsrPlugin_l1533 = ((IData)(vlSelf->CsrPlugin_doHalt) 
                                    | ((IData)(vlSelf->CsrPlugin_trapCauseEbreakDebug) 
                                       | ((IData)(vlSelf->debugMode) 
                                          | ((~ (IData)(vlSelf->CsrPlugin_hadException)) 
                                             & (IData)(vlSelf->CsrPlugin_doHalt)))));
    vlSelf->execute_CsrPlugin_illegalInstruction = 0U;
    if (vlSelf->when_CsrPlugin_l1691) {
        if (vlSelf->when_CsrPlugin_l1692) {
            vlSelf->execute_CsrPlugin_illegalInstruction = 1U;
        }
    }
    vlSelf->when_CsrPlugin_l1671 = ((IData)(vlSelf->when_CsrPlugin_l1600) 
                                    | (((IData)(vlSelf->memory_arbitration_isValid) 
                                        & (1U == (IData)(vlSelf->execute_to_memory_ENV_CTRL))) 
                                       | (IData)(vlSelf->when_CsrPlugin_l1691)));
    vlSelf->CsrPlugin_inWfi = 0U;
    vlSelf->dataCache_1__DOT__io_cpu_flush_valid = vlSelf->dataCache_1_io_cpu_flush_valid;
    vlSelf->dataCache_1__DOT__when_DataCache_l863 = 
        ((IData)(vlSelf->dataCache_1_io_cpu_flush_payload_singleLine) 
         & (IData)(vlSelf->dataCache_1_io_cpu_flush_valid));
    vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_cpu_flush_isStall 
        = ((~ (IData)(vlSelf->dataCache_1__DOT__io_cpu_flush_ready)) 
           & (IData)(vlSelf->dataCache_1_io_cpu_flush_valid));
    vlSelf->when_HazardSimplePlugin_l57_2 = vlSelf->when_HazardSimplePlugin_l45_2;
    vlSelf->when_CsrPlugin_l1869 = (1U & (~ (IData)(vlSelf->when_CsrPlugin_l1731)));
    vlSelf->when_CsrPlugin_l1846 = ((IData)(vlSelf->when_CsrPlugin_l1731) 
                                    & ((0xe8U == (vlSelf->decode_to_execute_INSTRUCTION 
                                                  >> 0x16U)) 
                                       | (0x3bU == 
                                          (vlSelf->decode_to_execute_INSTRUCTION 
                                           >> 0x18U))));
    vlSelf->when_MmuPlugin_l279 = ((IData)(vlSelf->when_MmuPlugin_l211) 
                                   & (IData)(vlSelf->when_MmuPlugin_l250));
    if (vlSelf->dataCache_1__DOT__loader_done) {
        vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_address 
            = (0x3fU & (vlSelf->dataCache_1__DOT__stageB_mmuRsp_physicalAddress 
                        >> 6U));
        vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_data_address 
            = (vlSelf->dataCache_1__DOT__stageB_mmuRsp_physicalAddress 
               >> 0xcU);
        vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_data_error 
            = ((IData)(vlSelf->dataCache_1__DOT__loader_error) 
               | ((IData)(vlSelf->dBus_rsp_regNext_valid) 
                  & (IData)(vlSelf->dBus_rsp_regNext_payload_error)));
    }
    vlSelf->dataCache_1__DOT___zz_ways_0_tags_port 
        = ((vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_data_address 
            << 2U) | (((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_data_error) 
                       << 1U) | (IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_data_valid)));
    vlSelf->dataCache_1__DOT__when_DataCache_l1030 
        = vlSelf->dataCache_1__DOT__when_DataCache_l1004;
    if (vlSelf->execute_CsrPlugin_csr_770) {
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_17 
            = ((0xfffffff0U & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_17) 
               | (((IData)(vlSelf->CsrPlugin_medeleg_BP) 
                   << 3U) | (((IData)(vlSelf->CsrPlugin_medeleg_II) 
                              << 2U) | (((IData)(vlSelf->CsrPlugin_medeleg_IAF) 
                                         << 1U) | (IData)(vlSelf->CsrPlugin_medeleg_IAM)))));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_17 
            = ((0xffffff0fU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_17) 
               | (((IData)(vlSelf->CsrPlugin_medeleg_SAF) 
                   << 7U) | (((IData)(vlSelf->CsrPlugin_medeleg_SAM) 
                              << 6U) | (((IData)(vlSelf->CsrPlugin_medeleg_LAF) 
                                         << 5U) | ((IData)(vlSelf->CsrPlugin_medeleg_LAM) 
                                                   << 4U)))));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_17 
            = ((0xfffffcffU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_17) 
               | (((IData)(vlSelf->CsrPlugin_medeleg_ES) 
                   << 9U) | ((IData)(vlSelf->CsrPlugin_medeleg_EU) 
                             << 8U)));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_17 
            = ((0xffffcfffU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_17) 
               | (((IData)(vlSelf->CsrPlugin_medeleg_LPF) 
                   << 0xdU) | ((IData)(vlSelf->CsrPlugin_medeleg_IPF) 
                               << 0xcU)));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_17 
            = ((0xffff7fffU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_17) 
               | ((IData)(vlSelf->CsrPlugin_medeleg_SPF) 
                  << 0xfU));
    }
    if (vlSelf->execute_CsrPlugin_csr_771) {
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_18 
            = ((0xfffffdffU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_18) 
               | ((IData)(vlSelf->CsrPlugin_mideleg_SE) 
                  << 9U));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_18 
            = ((0xffffffdfU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_18) 
               | ((IData)(vlSelf->CsrPlugin_mideleg_ST) 
                  << 5U));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_18 
            = ((0xfffffffdU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_18) 
               | ((IData)(vlSelf->CsrPlugin_mideleg_SS) 
                  << 1U));
    }
    vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_45 
        = (vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_17 
           | vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_18);
    if (vlSelf->execute_CsrPlugin_csr_1953) {
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_7 
            = vlSelf->CsrPlugin_trigger_slots_0_tdata1_read;
    }
    vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_34 
        = (vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_7 
           | vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_8);
    if (vlSelf->execute_CsrPlugin_csr_772) {
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_11 
            = ((0xfffff7ffU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_11) 
               | ((IData)(vlSelf->CsrPlugin_mie_MEIE) 
                  << 0xbU));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_11 
            = ((0xffffff7fU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_11) 
               | ((IData)(vlSelf->CsrPlugin_mie_MTIE) 
                  << 7U));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_11 
            = ((0xfffffff7U & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_11) 
               | ((IData)(vlSelf->CsrPlugin_mie_MSIE) 
                  << 3U));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_11 
            = ((0xfffffdffU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_11) 
               | ((IData)(vlSelf->CsrPlugin_sie_SEIE) 
                  << 9U));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_11 
            = ((0xffffffdfU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_11) 
               | ((IData)(vlSelf->CsrPlugin_sie_STIE) 
                  << 5U));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_11 
            = ((0xfffffffdU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_11) 
               | ((IData)(vlSelf->CsrPlugin_sie_SSIE) 
                  << 1U));
    }
    vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_42 
        = (vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_11 
           | vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_12);
    vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_49 
        = (vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_25 
           | vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_26);
    if (vlSelf->execute_CsrPlugin_csr_384) {
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_2 
            = (((IData)(vlSelf->MmuPlugin_satp_mode) 
                << 0x1fU) | (((IData)(vlSelf->MmuPlugin_satp_asid) 
                              << 0x16U) | vlSelf->MmuPlugin_satp_ppn));
    }
    vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_30 
        = (vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_2 
           | vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_3);
    if (vlSelf->execute_CsrPlugin_csr_1968) {
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_5 
            = ((0xfffffff7U & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_5) 
               | ((IData)(vlSelf->CsrPlugin_dcsr_nmip) 
                  << 3U));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_5 
            = ((0xfffffe3fU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_5) 
               | ((IData)(vlSelf->CsrPlugin_dcsr_cause) 
                  << 6U));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_5 
            = ((0xfffffffU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_5) 
               | ((IData)(vlSelf->CsrPlugin_dcsr_xdebugver) 
                  << 0x1cU));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_5 
            = ((0xffffffefU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_5) 
               | ((IData)(vlSelf->CsrPlugin_dcsr_mprven) 
                  << 4U));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_5 
            = ((0xfffffff8U & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_5) 
               | (((IData)(vlSelf->CsrPlugin_dcsr_step) 
                   << 2U) | (IData)(vlSelf->CsrPlugin_dcsr_prv)));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_5 
            = ((0xfffff1ffU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_5) 
               | (((IData)(vlSelf->CsrPlugin_dcsr_stepie) 
                   << 0xbU) | (((IData)(vlSelf->CsrPlugin_dcsr_stopcount) 
                                << 0xaU) | ((IData)(vlSelf->CsrPlugin_dcsr_stoptime) 
                                            << 9U))));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_5 
            = ((0xffff7fffU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_5) 
               | ((IData)(vlSelf->CsrPlugin_dcsr_ebreakm) 
                  << 0xfU));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_5 
            = ((0xffffcfffU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_5) 
               | (((IData)(vlSelf->CsrPlugin_dcsr_ebreaks) 
                   << 0xdU) | ((IData)(vlSelf->CsrPlugin_dcsr_ebreaku) 
                               << 0xcU)));
    }
    vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_31 
        = (vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_4 
           | vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_5);
    if (vlSelf->execute_CsrPlugin_csr_768) {
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit 
            = ((0xfff1ffffU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit) 
               | (((IData)(vlSelf->MmuPlugin_status_mxr) 
                   << 0x13U) | (((IData)(vlSelf->MmuPlugin_status_sum) 
                                 << 0x12U) | ((IData)(vlSelf->MmuPlugin_status_mprv) 
                                              << 0x11U))));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit 
            = ((0xffffff7fU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit) 
               | ((IData)(vlSelf->CsrPlugin_mstatus_MPIE) 
                  << 7U));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit 
            = ((0xfffffff7U & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit) 
               | ((IData)(vlSelf->CsrPlugin_mstatus_MIE) 
                  << 3U));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit 
            = ((0xffffe7ffU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit) 
               | ((IData)(vlSelf->CsrPlugin_mstatus_MPP) 
                  << 0xbU));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit 
            = ((0xfffffeffU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit) 
               | ((IData)(vlSelf->CsrPlugin_sstatus_SPP) 
                  << 8U));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit 
            = ((0xffffffdfU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit) 
               | ((IData)(vlSelf->CsrPlugin_sstatus_SPIE) 
                  << 5U));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit 
            = ((0xfffffffdU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit) 
               | ((IData)(vlSelf->CsrPlugin_sstatus_SIE) 
                  << 1U));
    }
    if (vlSelf->execute_CsrPlugin_csr_256) {
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_1 
            = ((0xfff1ffffU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_1) 
               | (((IData)(vlSelf->MmuPlugin_status_mxr) 
                   << 0x13U) | (((IData)(vlSelf->MmuPlugin_status_sum) 
                                 << 0x12U) | ((IData)(vlSelf->MmuPlugin_status_mprv) 
                                              << 0x11U))));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_1 
            = ((0xfffffeffU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_1) 
               | ((IData)(vlSelf->CsrPlugin_sstatus_SPP) 
                  << 8U));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_1 
            = ((0xffffffdfU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_1) 
               | ((IData)(vlSelf->CsrPlugin_sstatus_SPIE) 
                  << 5U));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_1 
            = ((0xfffffffdU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_1) 
               | ((IData)(vlSelf->CsrPlugin_sstatus_SIE) 
                  << 1U));
    }
    vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_29 
        = (vlSelf->_zz_CsrPlugin_csrMapping_readDataInit 
           | vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_1);
    vlSelf->IBusCachedPlugin_cache__DOT__io_cpu_fetch_mmuRsp_exception 
        = vlSelf->IBusCachedPlugin_mmuBus_rsp_exception;
    vlSelf->dataCache_1__DOT__io_cpu_memory_mmuRsp_exception 
        = vlSelf->DBusCachedPlugin_mmuBus_rsp_exception;
    vlSelf->CsrPlugin_injectionPort_fire = vlSelf->CsrPlugin_inject_buffer_ready;
    vlSelf->CsrPlugin_inject_cmd_toStream_ready = vlSelf->CsrPlugin_inject_buffer_ready;
    if (vlSelf->when_Stream_l372_1) {
        vlSelf->CsrPlugin_inject_cmd_toStream_ready = 1U;
    }
    vlSelf->when_CsrPlugin_l1446_2 = ((IData)(vlSelf->_zz_when_CsrPlugin_l1446_2) 
                                      & (IData)(vlSelf->CsrPlugin_mideleg_SE));
    vlSelf->when_CsrPlugin_l1446_5 = ((~ (IData)(vlSelf->CsrPlugin_mideleg_SE)) 
                                      & (IData)(vlSelf->_zz_when_CsrPlugin_l1446_2));
    if (vlSelf->execute_CsrPlugin_csr_324) {
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_19 
            = ((0xffffffdfU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_19) 
               | ((IData)(vlSelf->CsrPlugin_sip_STIP) 
                  << 5U));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_19 
            = ((0xfffffffdU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_19) 
               | ((IData)(vlSelf->CsrPlugin_sip_SSIP) 
                  << 1U));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_19 
            = ((0xfffffdffU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_19) 
               | ((IData)(vlSelf->CsrPlugin_sip_SEIP_OR) 
                  << 9U));
    }
    if (vlSelf->execute_CsrPlugin_csr_260) {
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_20 
            = ((0xfffffdffU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_20) 
               | ((IData)(vlSelf->CsrPlugin_sie_SEIE) 
                  << 9U));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_20 
            = ((0xffffffdfU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_20) 
               | ((IData)(vlSelf->CsrPlugin_sie_STIE) 
                  << 5U));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_20 
            = ((0xfffffffdU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_20) 
               | ((IData)(vlSelf->CsrPlugin_sie_SSIE) 
                  << 1U));
    }
    vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_46 
        = (vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_19 
           | vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_20);
    if (vlSelf->execute_CsrPlugin_csr_836) {
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_10 
            = ((0xfffff7ffU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_10) 
               | ((IData)(vlSelf->CsrPlugin_mip_MEIP) 
                  << 0xbU));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_10 
            = ((0xffffff7fU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_10) 
               | ((IData)(vlSelf->CsrPlugin_mip_MTIP) 
                  << 7U));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_10 
            = ((0xfffffff7U & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_10) 
               | ((IData)(vlSelf->CsrPlugin_mip_MSIP) 
                  << 3U));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_10 
            = ((0xffffffdfU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_10) 
               | ((IData)(vlSelf->CsrPlugin_sip_STIP) 
                  << 5U));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_10 
            = ((0xfffffffdU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_10) 
               | ((IData)(vlSelf->CsrPlugin_sip_SSIP) 
                  << 1U));
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_10 
            = ((0xfffffdffU & vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_10) 
               | ((IData)(vlSelf->CsrPlugin_sip_SEIP_OR) 
                  << 9U));
    }
    vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_41 
        = (vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_10 
           | vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_9);
    vlSelf->IBusCachedPlugin_rsp_issueDetected_1 = vlSelf->IBusCachedPlugin_rsp_issueDetected;
    vlSelf->_zz_writeBack_DBusCachedPlugin_rspFormated_1 
        = (((- (IData)((IData)(vlSelf->_zz_writeBack_DBusCachedPlugin_rspFormated))) 
            << 8U) | (0xffU & vlSelf->writeBack_DBusCachedPlugin_rspRf));
    vlSelf->_zz_writeBack_DBusCachedPlugin_rspFormated_3 
        = (((- (IData)((IData)(vlSelf->_zz_writeBack_DBusCachedPlugin_rspFormated_2))) 
            << 0x10U) | (0xffffU & vlSelf->writeBack_DBusCachedPlugin_rspRf));
    vlSelf->CsrPlugin_targetPrivilege = vlSelf->CsrPlugin_interrupt_targetPrivilege;
    if (vlSelf->CsrPlugin_hadException) {
        vlSelf->CsrPlugin_trapCause = vlSelf->CsrPlugin_exceptionPortCtrl_exceptionContext_code;
        vlSelf->CsrPlugin_targetPrivilege = vlSelf->CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilege;
    }
    vlSelf->dataCache_1__DOT__io_cpu_writeBack_unalignedAccess 
        = vlSelf->dataCache_1_io_cpu_writeBack_unalignedAccess;
    vlSelf->dataCache_1_io_mem_cmd_payload_address 
        = vlSelf->dataCache_1__DOT__io_mem_cmd_payload_address;
    vlSelf->dataCache_1_io_mem_cmd_payload_wr = vlSelf->dataCache_1__DOT__io_mem_cmd_payload_wr;
    vlSelf->dataCache_1_io_mem_cmd_payload_size = vlSelf->dataCache_1__DOT__io_mem_cmd_payload_size;
    vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data = 0U;
    vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address = 0U;
    vlSelf->dataCache_1__DOT__dataWriteCmd_payload_mask = 0U;
    vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way = 0U;
    if (vlSelf->dataCache_1_io_cpu_writeBack_isValid) {
        if ((1U & (~ (IData)(vlSelf->dataCache_1__DOT__stageB_isExternalAmo)))) {
            if ((1U & (~ (IData)(vlSelf->dataCache_1__DOT__when_DataCache_l996)))) {
                if (vlSelf->dataCache_1__DOT__when_DataCache_l1009) {
                    vlSelf->dataCache_1__DOT__stageB_cpuWriteToCache = 1U;
                }
            }
        }
    }
    if (vlSelf->dataCache_1__DOT__stageB_cpuWriteToCache) {
        vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data 
            = vlSelf->dataCache_1__DOT__stageB_requestDataBypass;
        vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address 
            = (0x3ffU & (vlSelf->dataCache_1__DOT__stageB_mmuRsp_physicalAddress 
                         >> 2U));
        vlSelf->dataCache_1__DOT__dataWriteCmd_payload_mask = 0U;
        if (vlSelf->dataCache_1__DOT___zz_when) {
            vlSelf->dataCache_1__DOT__dataWriteCmd_payload_mask 
                = vlSelf->dataCache_1__DOT__stageB_mask;
        }
        vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way 
            = vlSelf->dataCache_1__DOT__stageB_waysHits;
    }
    vlSelf->MmuPlugin_dBusAccess_rsp_payload_redo = vlSelf->dataCache_1__DOT__io_cpu_redo;
    vlSelf->dataCache_1_io_cpu_redo = vlSelf->dataCache_1__DOT__io_cpu_redo;
    vlSelf->dataCache_1_io_cpu_writeBack_mmuException 
        = ((IData)(vlSelf->dataCache_1__DOT__stageB_loadStoreFault) 
           & (IData)(vlSelf->dataCache_1__DOT__stageB_mmuRsp_isPaging));
    vlSelf->dataCache_1__DOT__io_cpu_writeBack_accessError = 0U;
    vlSelf->dataCache_1__DOT__io_cpu_writeBack_accessError 
        = ((IData)(vlSelf->dataCache_1__DOT__stageB_bypassCache)
            ? (((~ (IData)(vlSelf->dataCache_1__DOT__stageB_request_wr)) 
                & (IData)(vlSelf->dBus_rsp_regNext_valid)) 
               & (IData)(vlSelf->dBus_rsp_regNext_payload_error))
            : ((0U != ((IData)(vlSelf->dataCache_1__DOT__stageB_waysHits) 
                       & (((IData)(vlSelf->dataCache_1__DOT__stageB_tagsReadRsp_15_error) 
                           << 0xfU) | (((IData)(vlSelf->dataCache_1__DOT__stageB_tagsReadRsp_14_error) 
                                        << 0xeU) | 
                                       (((IData)(vlSelf->dataCache_1__DOT__stageB_tagsReadRsp_13_error) 
                                         << 0xdU) | 
                                        (((IData)(vlSelf->dataCache_1__DOT__stageB_tagsReadRsp_12_error) 
                                          << 0xcU) 
                                         | (((IData)(vlSelf->dataCache_1__DOT__stageB_tagsReadRsp_11_error) 
                                             << 0xbU) 
                                            | (((IData)(vlSelf->dataCache_1__DOT__stageB_tagsReadRsp_10_error) 
                                                << 0xaU) 
                                               | (((IData)(vlSelf->dataCache_1__DOT__stageB_tagsReadRsp_9_error) 
                                                   << 9U) 
                                                  | (((IData)(vlSelf->dataCache_1__DOT___zz_io_cpu_writeBack_accessError) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->dataCache_1__DOT___zz_io_cpu_writeBack_accessError_1))))))))))) 
               | ((IData)(vlSelf->dataCache_1__DOT__stageB_loadStoreFault) 
                  & (~ (IData)(vlSelf->dataCache_1__DOT__stageB_mmuRsp_isPaging)))));
    if (vlSelf->when_CsrPlugin_l1534) {
        vlSelf->CsrPlugin_jumpInterface_valid = 1U;
    }
    if (vlSelf->when_CsrPlugin_l1600) {
        if ((3U == (IData)(vlSelf->switch_CsrPlugin_l1604))) {
            if (vlSelf->when_CsrPlugin_l1612) {
                vlSelf->CsrPlugin_xretAwayFromMachine = 1U;
            }
        } else if ((1U == (IData)(vlSelf->switch_CsrPlugin_l1604))) {
            vlSelf->CsrPlugin_xretAwayFromMachine = 1U;
        }
        vlSelf->CsrPlugin_jumpInterface_valid = 1U;
    }
    if (vlSelf->CsrPlugin_doResume) {
        vlSelf->CsrPlugin_jumpInterface_valid = 1U;
    }
    vlSelf->contextSwitching = vlSelf->CsrPlugin_jumpInterface_valid;
    if (vlSelf->execute_CsrPlugin_csr_3201) {
        if (vlSelf->when_CounterPlugin_l90_1) {
            vlSelf->CsrPlugin_csrMapping_doForceFailCsr = 1U;
        }
        if (vlSelf->when_CounterPlugin_l92_3) {
            vlSelf->CsrPlugin_csrMapping_doForceFailCsr = 1U;
        }
        if (vlSelf->when_CounterPlugin_l92_4) {
            vlSelf->CsrPlugin_csrMapping_doForceFailCsr = 1U;
        }
        if (vlSelf->when_CounterPlugin_l92_5) {
            vlSelf->CsrPlugin_csrMapping_doForceFailCsr = 1U;
        }
    }
    vlSelf->when_CsrPlugin_l1863 = vlSelf->CsrPlugin_csrMapping_doForceFailCsr;
    if (vlSelf->when_CsrPlugin_l1861) {
        vlSelf->when_CsrPlugin_l1863 = 1U;
    }
    if (vlSelf->when_CsrPlugin_l1862) {
        vlSelf->when_CsrPlugin_l1863 = 1U;
    }
    vlSelf->_zz_MmuPlugin_shared_refills = (((IData)(__VdfgRegularize_h16d7421c_8_37) 
                                             << 1U) 
                                            | (IData)(__VdfgRegularize_h16d7421c_8_36));
    vlSelf->_zz_MmuPlugin_shared_refills_1 = (((IData)(__VdfgRegularize_h16d7421c_8_36) 
                                               << 1U) 
                                              | (IData)(__VdfgRegularize_h16d7421c_8_37));
    vlSelf->_zz_memory_MulDivIterativePlugin_div_counter_valueNext_1 
        = vlSelf->memory_MulDivIterativePlugin_div_counter_willIncrement;
    vlSelf->_zz_memory_MulDivIterativePlugin_div_counter_valueNext 
        = vlSelf->memory_MulDivIterativePlugin_div_counter_willIncrement;
    vlSelf->memory_MulDivIterativePlugin_div_counter_willOverflow 
        = ((IData)(vlSelf->memory_MulDivIterativePlugin_div_counter_willOverflowIfInc) 
           & (IData)(vlSelf->memory_MulDivIterativePlugin_div_counter_willIncrement));
    vlSelf->CsrPlugin_trapEnterDebug = 0U;
    if (vlSelf->when_CsrPlugin_l1533) {
        vlSelf->CsrPlugin_trapEnterDebug = 1U;
    }
    vlSelf->dataCache_1__DOT__when_DataCache_l877 = vlSelf->dataCache_1__DOT__when_DataCache_l863;
    vlSelf->when_DBusCachedPlugin_l398 = ((IData)(vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_cpu_flush_isStall) 
                                          | (IData)(vlSelf->dataCache_1__DOT__io_cpu_execute_haltIt));
    vlSelf->HazardSimplePlugin_src0Hazard = 0U;
    if (vlSelf->when_HazardSimplePlugin_l57) {
        if (vlSelf->when_HazardSimplePlugin_l58) {
            if (vlSelf->when_HazardSimplePlugin_l48) {
                vlSelf->HazardSimplePlugin_src0Hazard = 1U;
            }
        }
    }
    if (vlSelf->when_HazardSimplePlugin_l57_1) {
        if (vlSelf->when_HazardSimplePlugin_l58_1) {
            if (vlSelf->when_HazardSimplePlugin_l48_1) {
                vlSelf->HazardSimplePlugin_src0Hazard = 1U;
            }
        }
    }
    if (vlSelf->when_HazardSimplePlugin_l57_2) {
        if (vlSelf->when_HazardSimplePlugin_l58_2) {
            if (vlSelf->when_HazardSimplePlugin_l48_2) {
                vlSelf->HazardSimplePlugin_src0Hazard = 1U;
            }
        }
    }
    if (vlSelf->when_HazardSimplePlugin_l105) {
        vlSelf->HazardSimplePlugin_src0Hazard = 0U;
    }
    vlSelf->HazardSimplePlugin_src1Hazard = 0U;
    if (vlSelf->when_HazardSimplePlugin_l57) {
        if (vlSelf->when_HazardSimplePlugin_l58) {
            if (vlSelf->when_HazardSimplePlugin_l51) {
                vlSelf->HazardSimplePlugin_src1Hazard = 1U;
            }
        }
    }
    if (vlSelf->when_HazardSimplePlugin_l57_1) {
        if (vlSelf->when_HazardSimplePlugin_l58_1) {
            if (vlSelf->when_HazardSimplePlugin_l51_1) {
                vlSelf->HazardSimplePlugin_src1Hazard = 1U;
            }
        }
    }
    if (vlSelf->when_HazardSimplePlugin_l57_2) {
        if (vlSelf->when_HazardSimplePlugin_l58_2) {
            if (vlSelf->when_HazardSimplePlugin_l51_2) {
                vlSelf->HazardSimplePlugin_src1Hazard = 1U;
            }
        }
    }
    if (vlSelf->when_HazardSimplePlugin_l108) {
        vlSelf->HazardSimplePlugin_src1Hazard = 0U;
    }
    vlSelf->MmuPlugin_ports_0_entryToReplace_willIncrement = 0U;
    vlSelf->MmuPlugin_ports_1_entryToReplace_willIncrement = 0U;
    if (vlSelf->when_MmuPlugin_l279) {
        if (vlSelf->when_MmuPlugin_l281) {
            vlSelf->MmuPlugin_ports_0_entryToReplace_willIncrement = 1U;
        }
        if (vlSelf->when_MmuPlugin_l281_1) {
            vlSelf->MmuPlugin_ports_1_entryToReplace_willIncrement = 1U;
        }
    }
    vlSelf->dataCache_1__DOT___zz_ways_1_tags_port 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tags_port;
    vlSelf->dataCache_1__DOT___zz_ways_2_tags_port 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tags_port;
    vlSelf->dataCache_1__DOT___zz_ways_3_tags_port 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tags_port;
    vlSelf->dataCache_1__DOT___zz_ways_4_tags_port 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tags_port;
    vlSelf->dataCache_1__DOT___zz_ways_5_tags_port 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tags_port;
    vlSelf->dataCache_1__DOT___zz_ways_6_tags_port 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tags_port;
    vlSelf->dataCache_1__DOT___zz_ways_7_tags_port 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tags_port;
    vlSelf->dataCache_1__DOT___zz_ways_8_tags_port 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tags_port;
    vlSelf->dataCache_1__DOT___zz_ways_9_tags_port 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tags_port;
    vlSelf->dataCache_1__DOT___zz_ways_10_tags_port 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tags_port;
    vlSelf->dataCache_1__DOT___zz_ways_11_tags_port 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tags_port;
    vlSelf->dataCache_1__DOT___zz_ways_12_tags_port 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tags_port;
    vlSelf->dataCache_1__DOT___zz_ways_13_tags_port 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tags_port;
    vlSelf->dataCache_1__DOT___zz_ways_14_tags_port 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tags_port;
    vlSelf->dataCache_1__DOT___zz_ways_15_tags_port 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tags_port;
    if (vlSelf->when_IBusCachedPlugin_l245) {
        vlSelf->IBusCachedPlugin_rsp_issueDetected_1 = 1U;
    }
    vlSelf->when_IBusCachedPlugin_l250 = ((IData)(vlSelf->IBusCachedPlugin_cache_io_cpu_decode_isValid) 
                                          & ((~ (IData)(vlSelf->IBusCachedPlugin_rsp_issueDetected_1)) 
                                             & (IData)(vlSelf->IBusCachedPlugin_cache_io_cpu_decode_mmuException)));
    vlSelf->writeBack_DBusCachedPlugin_rspFormated 
        = ((0U == (IData)(vlSelf->switch_Misc_l241))
            ? vlSelf->_zz_writeBack_DBusCachedPlugin_rspFormated_1
            : ((1U == (IData)(vlSelf->switch_Misc_l241))
                ? vlSelf->_zz_writeBack_DBusCachedPlugin_rspFormated_3
                : vlSelf->writeBack_DBusCachedPlugin_rspRf));
    vlSelf->CsrPlugin_xtvec_mode = 0U;
    vlSelf->CsrPlugin_xtvec_base = 0U;
    if ((1U == (IData)(vlSelf->CsrPlugin_targetPrivilege))) {
        vlSelf->CsrPlugin_xtvec_mode = vlSelf->CsrPlugin_stvec_mode;
        vlSelf->CsrPlugin_xtvec_base = vlSelf->CsrPlugin_stvec_base;
    } else if ((3U == (IData)(vlSelf->CsrPlugin_targetPrivilege))) {
        vlSelf->CsrPlugin_xtvec_mode = vlSelf->CsrPlugin_mtvec_mode;
        vlSelf->CsrPlugin_xtvec_base = vlSelf->CsrPlugin_mtvec_base;
    }
    if (vlSelf->dataCache_1__DOT__when_DataCache_l1097) {
        vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data 
            = vlSelf->dBus_rsp_regNext_payload_data;
        vlSelf->dataCache_1__DOT__ways_0_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_1_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_2_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_3_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_4_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_5_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_6_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_7_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_8_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_9_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_10_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_11_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_12_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_13_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_14_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_15_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address 
            = ((0x3f0U & (vlSelf->dataCache_1__DOT__stageB_mmuRsp_physicalAddress 
                          >> 2U)) | (IData)(vlSelf->dataCache_1__DOT__loader_counter_value));
        vlSelf->dataCache_1__DOT__ways_0_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_1_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_2_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_3_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_4_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_5_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_6_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_7_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_8_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_9_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_10_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_11_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_12_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_13_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_14_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_15_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__dataWriteCmd_payload_mask = 0xfU;
    } else {
        vlSelf->dataCache_1__DOT__ways_0_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_1_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_2_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_3_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_4_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_5_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_6_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_7_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_8_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_9_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_10_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_11_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_12_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_13_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_14_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_15_data__DOT__wr_data 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_data;
        vlSelf->dataCache_1__DOT__ways_0_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_1_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_2_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_3_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_4_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_5_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_6_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_7_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_8_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_9_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_10_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_11_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_12_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_13_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_14_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
        vlSelf->dataCache_1__DOT__ways_15_data__DOT__wr_addr 
            = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address;
    }
    vlSelf->dataCache_1__DOT__ways_0_data__DOT__wr_mask 
        = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_mask;
    vlSelf->dataCache_1__DOT__ways_1_data__DOT__wr_mask 
        = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_mask;
    vlSelf->dataCache_1__DOT__ways_2_data__DOT__wr_mask 
        = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_mask;
    vlSelf->dataCache_1__DOT__ways_3_data__DOT__wr_mask 
        = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_mask;
    vlSelf->dataCache_1__DOT__ways_4_data__DOT__wr_mask 
        = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_mask;
    vlSelf->dataCache_1__DOT__ways_5_data__DOT__wr_mask 
        = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_mask;
    vlSelf->dataCache_1__DOT__ways_6_data__DOT__wr_mask 
        = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_mask;
    vlSelf->dataCache_1__DOT__ways_7_data__DOT__wr_mask 
        = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_mask;
    vlSelf->dataCache_1__DOT__ways_8_data__DOT__wr_mask 
        = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_mask;
    vlSelf->dataCache_1__DOT__ways_9_data__DOT__wr_mask 
        = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_mask;
    vlSelf->dataCache_1__DOT__ways_10_data__DOT__wr_mask 
        = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_mask;
    vlSelf->dataCache_1__DOT__ways_11_data__DOT__wr_mask 
        = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_mask;
    vlSelf->dataCache_1__DOT__ways_12_data__DOT__wr_mask 
        = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_mask;
    vlSelf->dataCache_1__DOT__ways_13_data__DOT__wr_mask 
        = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_mask;
    vlSelf->dataCache_1__DOT__ways_14_data__DOT__wr_mask 
        = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_mask;
    vlSelf->dataCache_1__DOT__ways_15_data__DOT__wr_mask 
        = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_mask;
    vlSelf->dataCache_1__DOT___zz_stage0_dataColisions_1 
        = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_mask;
    vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_2 
        = vlSelf->dataCache_1__DOT__dataWriteCmd_payload_mask;
    vlSelf->DBusCachedPlugin_redoBranch_valid = 0U;
    vlSelf->dataCache_1__DOT__io_cpu_writeBack_mmuException 
        = vlSelf->dataCache_1_io_cpu_writeBack_mmuException;
    vlSelf->MmuPlugin_dBusAccess_rsp_payload_error 
        = ((IData)(vlSelf->dataCache_1__DOT__io_cpu_writeBack_accessError) 
           | (IData)(vlSelf->dataCache_1_io_cpu_writeBack_unalignedAccess));
    vlSelf->dataCache_1_io_cpu_writeBack_accessError 
        = vlSelf->dataCache_1__DOT__io_cpu_writeBack_accessError;
    vlSelf->dataCache_1__DOT__when_DataCache_l1072 
        = ((IData)(vlSelf->dataCache_1__DOT__when_DataCache_l1081) 
           | ((IData)(vlSelf->dataCache_1__DOT__io_cpu_writeBack_accessError) 
              | ((IData)(vlSelf->dataCache_1_io_cpu_writeBack_mmuException) 
                 | (IData)(vlSelf->dataCache_1_io_cpu_writeBack_unalignedAccess))));
    vlSelf->execute_CsrPlugin_readInstruction = (((IData)(vlSelf->execute_arbitration_isValid) 
                                                  & (IData)(vlSelf->execute_IS_CSR)) 
                                                 & (IData)(vlSelf->execute_CSR_READ_OPCODE));
    vlSelf->execute_CsrPlugin_writeInstruction = (((IData)(vlSelf->execute_arbitration_isValid) 
                                                   & (IData)(vlSelf->execute_IS_CSR)) 
                                                  & (IData)(vlSelf->execute_CSR_WRITE_OPCODE));
    vlSelf->_zz___05Fzz_MmuPlugin_shared_refills_2 
        = (3U & ((IData)(vlSelf->_zz_MmuPlugin_shared_refills_1) 
                 - (IData)(1U)));
    vlSelf->when_CsrPlugin_l1542 = (1U & (~ (IData)(vlSelf->CsrPlugin_trapEnterDebug)));
    vlSelf->debugBus_ebreak = 0U;
    vlSelf->debugBus_exception = ((IData)(vlSelf->debugMode) 
                                  & (IData)(vlSelf->CsrPlugin_hadException));
    vlSelf->execute_arbitration_haltItself = 0U;
    if (vlSelf->when_DBusCachedPlugin_l398) {
        vlSelf->execute_arbitration_haltItself = 1U;
    }
    if (vlSelf->when_CsrPlugin_l1663) {
        vlSelf->CsrPlugin_inWfi = 1U;
        if (vlSelf->when_CsrPlugin_l1665) {
            vlSelf->execute_arbitration_haltItself = 1U;
        }
    }
    if (vlSelf->when_CsrPlugin_l1735) {
        if (vlSelf->execute_CsrPlugin_blockedBySideEffects) {
            vlSelf->execute_arbitration_haltItself = 1U;
        }
    }
    vlSelf->_zz_MmuPlugin_ports_0_entryToReplace_valueNext_1 
        = vlSelf->MmuPlugin_ports_0_entryToReplace_willIncrement;
    vlSelf->_zz_MmuPlugin_ports_0_entryToReplace_valueNext 
        = vlSelf->MmuPlugin_ports_0_entryToReplace_willIncrement;
    vlSelf->_zz_MmuPlugin_ports_1_entryToReplace_valueNext_1 
        = vlSelf->MmuPlugin_ports_1_entryToReplace_willIncrement;
    vlSelf->_zz_MmuPlugin_ports_1_entryToReplace_valueNext 
        = vlSelf->MmuPlugin_ports_1_entryToReplace_willIncrement;
    vlSelf->IBusCachedPlugin_rsp_issueDetected_2 = vlSelf->IBusCachedPlugin_rsp_issueDetected_1;
    vlSelf->_zz_decode_RS2_2 = vlSelf->writeBack_REGFILE_WRITE_DATA;
    if (vlSelf->when_DBusCachedPlugin_l599) {
        vlSelf->_zz_decode_RS2_2 = vlSelf->writeBack_DBusCachedPlugin_rspFormated;
    }
    if (vlSelf->when_MulPlugin_l147) {
        vlSelf->_zz_decode_RS2_2 = ((0U == (IData)(vlSelf->switch_MulPlugin_l148))
                                     ? vlSelf->_zz___05Fzz_decode_RS2_2
                                     : vlSelf->_zz___05Fzz_decode_RS2_2_1);
    }
    vlSelf->CsrPlugin_jumpInterface_payload = 0U;
    vlSelf->writeBack_arbitration_flushIt = 0U;
    if (vlSelf->when_DBusCachedPlugin_l552) {
        if (vlSelf->dataCache_1_io_cpu_redo) {
            vlSelf->DBusCachedPlugin_redoBranch_valid = 1U;
        }
    }
    if (vlSelf->when_CsrPlugin_l1534) {
        if (vlSelf->CsrPlugin_trapEnterDebug) {
            if (vlSelf->debugMode) {
                vlSelf->debugBus_ebreak = vlSelf->CsrPlugin_trapCauseEbreakDebug;
                vlSelf->debugBus_exception = (1U & 
                                              (~ (IData)(vlSelf->CsrPlugin_trapCauseEbreakDebug)));
            }
        }
        vlSelf->CsrPlugin_jumpInterface_payload = (vlSelf->CsrPlugin_xtvec_base 
                                                   << 2U);
    }
    if (vlSelf->DBusCachedPlugin_redoBranch_valid) {
        vlSelf->writeBack_arbitration_flushIt = 1U;
    }
    vlSelf->DBusCachedPlugin_exceptionBus_payload_code = 0U;
    vlSelf->DBusCachedPlugin_exceptionBus_valid = 0U;
    if (vlSelf->when_DBusCachedPlugin_l552) {
        if (vlSelf->dataCache_1_io_cpu_writeBack_accessError) {
            vlSelf->DBusCachedPlugin_exceptionBus_payload_code 
                = vlSelf->_zz_DBusCachedPlugin_exceptionBus_payload_code;
            vlSelf->DBusCachedPlugin_exceptionBus_valid = 1U;
        }
        if (vlSelf->dataCache_1_io_cpu_writeBack_mmuException) {
            vlSelf->DBusCachedPlugin_exceptionBus_payload_code 
                = ((IData)(vlSelf->memory_to_writeBack_MEMORY_WR)
                    ? 0xfU : 0xdU);
            vlSelf->DBusCachedPlugin_exceptionBus_valid = 1U;
        }
        if (vlSelf->dataCache_1_io_cpu_writeBack_unalignedAccess) {
            vlSelf->DBusCachedPlugin_exceptionBus_payload_code 
                = vlSelf->_zz_DBusCachedPlugin_exceptionBus_payload_code_1;
            vlSelf->DBusCachedPlugin_exceptionBus_valid = 1U;
        }
        if (vlSelf->dataCache_1_io_cpu_redo) {
            vlSelf->DBusCachedPlugin_exceptionBus_valid = 0U;
        }
    }
    __Vtableidx8 = (((IData)(vlSelf->dataCache_1__DOT__when_DataCache_l1072) 
                     << 5U) | (((IData)(vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_rValidN) 
                                << 4U) | ((8U & ((~ (IData)(vlSelf->dataCache_1__DOT__when_DataCache_l1009)) 
                                                 << 3U)) 
                                          | ((4U & 
                                              ((~ (IData)(vlSelf->dataCache_1__DOT__when_DataCache_l996)) 
                                               << 2U)) 
                                             | (((IData)(vlSelf->dataCache_1__DOT__stageB_isExternalAmo) 
                                                 << 1U) 
                                                | (IData)(vlSelf->dataCache_1_io_cpu_writeBack_isValid))))));
    vlSelf->dataCache_1__DOT__stageB_loaderValid = 
        Vsonata__ConstPool__TABLE_h79590d48_0[__Vtableidx8];
    vlSelf->dataCache_1__DOT__io_mem_cmd_valid = 0U;
    vlSelf->dataCache_1__DOT__tagsWriteCmd_valid = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l855) {
        vlSelf->dataCache_1__DOT__tagsWriteCmd_valid = 1U;
    }
    if (vlSelf->dataCache_1_io_cpu_writeBack_isValid) {
        if ((1U & (~ (IData)(vlSelf->dataCache_1__DOT__stageB_isExternalAmo)))) {
            if (vlSelf->dataCache_1__DOT__when_DataCache_l996) {
                vlSelf->dataCache_1__DOT__io_mem_cmd_valid 
                    = (1U & (~ (IData)(vlSelf->dataCache_1__DOT__memCmdSent)));
                if (vlSelf->dataCache_1__DOT__when_DataCache_l1004) {
                    vlSelf->dataCache_1__DOT__io_mem_cmd_valid = 0U;
                }
            } else if (vlSelf->dataCache_1__DOT__when_DataCache_l1009) {
                if (vlSelf->dataCache_1__DOT__stageB_request_wr) {
                    vlSelf->dataCache_1__DOT__io_mem_cmd_valid = 1U;
                }
                if (vlSelf->dataCache_1__DOT__stageB_request_isAmo) {
                    if (vlSelf->dataCache_1__DOT__when_DataCache_l1017) {
                        vlSelf->dataCache_1__DOT__io_mem_cmd_valid = 0U;
                    }
                }
                if (vlSelf->dataCache_1__DOT__when_DataCache_l1025) {
                    vlSelf->dataCache_1__DOT__io_mem_cmd_valid = 0U;
                }
                if (vlSelf->dataCache_1__DOT__when_DataCache_l1030) {
                    vlSelf->dataCache_1__DOT__io_mem_cmd_valid = 0U;
                }
            } else if (vlSelf->dataCache_1__DOT__when_DataCache_l1037) {
                vlSelf->dataCache_1__DOT__io_mem_cmd_valid = 1U;
            }
        }
        if (vlSelf->dataCache_1__DOT__when_DataCache_l1072) {
            vlSelf->dataCache_1__DOT__io_mem_cmd_valid = 0U;
            vlSelf->dataCache_1__DOT__tagsWriteCmd_valid = 0U;
        }
    }
    if (vlSelf->dataCache_1__DOT__loader_done) {
        vlSelf->dataCache_1__DOT__tagsWriteCmd_valid = 1U;
    }
    vlSelf->dataCache_1__DOT__dataWriteCmd_valid = 0U;
    if (vlSelf->dataCache_1__DOT__stageB_cpuWriteToCache) {
        if (vlSelf->dataCache_1__DOT__when_DataCache_l931) {
            vlSelf->dataCache_1__DOT__dataWriteCmd_valid = 1U;
        }
    }
    if (vlSelf->dataCache_1__DOT__when_DataCache_l1097) {
        vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way 
            = vlSelf->dataCache_1__DOT__loader_waysAllocator;
    }
    if (vlSelf->dataCache_1_io_cpu_writeBack_isValid) {
        if ((1U & (~ (IData)(vlSelf->dataCache_1__DOT__stageB_isExternalAmo)))) {
            if ((1U & (~ (IData)(vlSelf->dataCache_1__DOT__when_DataCache_l996)))) {
                if (vlSelf->dataCache_1__DOT__when_DataCache_l1009) {
                    if (vlSelf->dataCache_1__DOT__stageB_request_isAmo) {
                        if (vlSelf->dataCache_1__DOT__when_DataCache_l1017) {
                            vlSelf->dataCache_1__DOT__dataWriteCmd_valid = 0U;
                        }
                    }
                    if (vlSelf->dataCache_1__DOT__when_DataCache_l1030) {
                        vlSelf->dataCache_1__DOT__dataWriteCmd_valid = 0U;
                    }
                }
            }
        }
        if (vlSelf->dataCache_1__DOT__when_DataCache_l1072) {
            vlSelf->dataCache_1__DOT__dataWriteCmd_valid = 0U;
        }
    }
    if (vlSelf->dataCache_1__DOT__when_DataCache_l1097) {
        vlSelf->dataCache_1__DOT__dataWriteCmd_valid = 1U;
    }
    vlSelf->dataCache_1__DOT__io_cpu_writeBack_haltIt = 1U;
    if (vlSelf->dataCache_1_io_cpu_writeBack_isValid) {
        if ((1U & (~ (IData)(vlSelf->dataCache_1__DOT__stageB_isExternalAmo)))) {
            if (vlSelf->dataCache_1__DOT__when_DataCache_l996) {
                if (vlSelf->dataCache_1__DOT__when_DataCache_l1000) {
                    vlSelf->dataCache_1__DOT__io_cpu_writeBack_haltIt = 0U;
                }
                if (vlSelf->dataCache_1__DOT__when_DataCache_l1004) {
                    vlSelf->dataCache_1__DOT__io_cpu_writeBack_haltIt = 0U;
                }
            } else if (vlSelf->dataCache_1__DOT__when_DataCache_l1009) {
                if (vlSelf->dataCache_1__DOT__when_DataCache_l1014) {
                    vlSelf->dataCache_1__DOT__io_cpu_writeBack_haltIt = 0U;
                }
                if (vlSelf->dataCache_1__DOT__stageB_request_isAmo) {
                    if (vlSelf->dataCache_1__DOT__when_DataCache_l1017) {
                        vlSelf->dataCache_1__DOT__io_cpu_writeBack_haltIt = 1U;
                    }
                }
                if (vlSelf->dataCache_1__DOT__when_DataCache_l1030) {
                    vlSelf->dataCache_1__DOT__io_cpu_writeBack_haltIt = 0U;
                }
            }
        }
        if (vlSelf->dataCache_1__DOT__when_DataCache_l1072) {
            vlSelf->dataCache_1__DOT__io_cpu_writeBack_haltIt = 0U;
        }
    }
    if (vlSelf->when_CsrPlugin_l1863) {
        vlSelf->execute_CsrPlugin_readInstruction = 0U;
        vlSelf->execute_CsrPlugin_writeInstruction = 0U;
    }
    vlSelf->when_CsrPlugin_l1853 = ((IData)(vlSelf->when_CsrPlugin_l1731) 
                                    & ((3U <= (0x1fU 
                                               & (vlSelf->decode_to_execute_INSTRUCTION 
                                                  >> 0x14U))) 
                                       & ((0xb00U == (IData)(vlSelf->_zz_when_CsrPlugin_l1853)) 
                                          | (((0xc00U 
                                               == (IData)(vlSelf->_zz_when_CsrPlugin_l1853)) 
                                              & ((~ (IData)(vlSelf->execute_CsrPlugin_writeInstruction)) 
                                                 & (IData)(vlSelf->when_MmuPlugin_l132))) 
                                             | (0x320U 
                                                == 
                                                (0xfe0U 
                                                 & (IData)(vlSelf->execute_CsrPlugin_csrAddress)))))));
    vlSelf->CsrPlugin_rescheduleLogic_rescheduleNext = 0U;
    if (vlSelf->when_CsrPlugin_l1304) {
        vlSelf->CsrPlugin_rescheduleLogic_rescheduleNext = 1U;
    }
    vlSelf->_zz_MmuPlugin_shared_refills_2 = ((~ (IData)(vlSelf->_zz___05Fzz_MmuPlugin_shared_refills_2)) 
                                              & (IData)(vlSelf->_zz_MmuPlugin_shared_refills_1));
    vlSelf->MmuPlugin_ports_0_entryToReplace_valueNext 
        = (3U & ((IData)(vlSelf->MmuPlugin_ports_0_entryToReplace_value) 
                 + (IData)(vlSelf->_zz_MmuPlugin_ports_0_entryToReplace_valueNext)));
    if (vlSelf->MmuPlugin_ports_0_entryToReplace_willClear) {
        vlSelf->MmuPlugin_ports_0_entryToReplace_valueNext = 0U;
    }
    vlSelf->MmuPlugin_ports_1_entryToReplace_valueNext 
        = (3U & ((IData)(vlSelf->MmuPlugin_ports_1_entryToReplace_value) 
                 + (IData)(vlSelf->_zz_MmuPlugin_ports_1_entryToReplace_valueNext)));
    if (vlSelf->MmuPlugin_ports_1_entryToReplace_willClear) {
        vlSelf->MmuPlugin_ports_1_entryToReplace_valueNext = 0U;
    }
    if (vlSelf->when_IBusCachedPlugin_l250) {
        vlSelf->IBusCachedPlugin_rsp_issueDetected_2 = 1U;
    }
    vlSelf->when_IBusCachedPlugin_l256 = ((IData)(vlSelf->IBusCachedPlugin_cache_io_cpu_decode_isValid) 
                                          & ((~ (IData)(vlSelf->IBusCachedPlugin_rsp_issueDetected_2)) 
                                             & (IData)(vlSelf->IBusCachedPlugin_cache_io_cpu_decode_cacheMiss)));
    vlSelf->HazardSimplePlugin_writeBackWrites_payload_data 
        = vlSelf->_zz_decode_RS2_2;
    vlSelf->lastStageRegFileWrite_payload_data = vlSelf->_zz_decode_RS2_2;
    if (vlSelf->when_CsrPlugin_l1600) {
        if ((3U == (IData)(vlSelf->switch_CsrPlugin_l1604))) {
            vlSelf->CsrPlugin_jumpInterface_payload 
                = vlSelf->CsrPlugin_mepc;
        } else if ((1U == (IData)(vlSelf->switch_CsrPlugin_l1604))) {
            vlSelf->CsrPlugin_jumpInterface_payload 
                = vlSelf->CsrPlugin_sepc;
        }
    }
    if (vlSelf->CsrPlugin_doResume) {
        vlSelf->CsrPlugin_jumpInterface_payload = vlSelf->CsrPlugin_dpc;
        vlSelf->writeBack_arbitration_flushIt = 1U;
    }
    vlSelf->writeBack_arbitration_isFlushed = vlSelf->writeBack_arbitration_flushIt;
    vlSelf->writeBack_arbitration_flushNext = 0U;
    if (vlSelf->DBusCachedPlugin_redoBranch_valid) {
        vlSelf->writeBack_arbitration_flushNext = 1U;
    }
    if (vlSelf->DBusCachedPlugin_exceptionBus_valid) {
        vlSelf->writeBack_arbitration_flushNext = 1U;
    }
    if (vlSelf->when_CsrPlugin_l1534) {
        vlSelf->writeBack_arbitration_flushNext = 1U;
    }
    vlSelf->dataCache_1__DOT__when_DataCache_l1132 
        = ((IData)(vlSelf->dataCache_1__DOT__loader_valid) 
           | (IData)(vlSelf->dataCache_1__DOT__stageB_loaderValid));
    vlSelf->dataCache_1_io_mem_cmd_valid = vlSelf->dataCache_1__DOT__io_mem_cmd_valid;
    vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_s2mPipe_valid 
        = (1U & ((~ (IData)(vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_rValidN)) 
                 | (IData)(vlSelf->dataCache_1__DOT__io_mem_cmd_valid)));
    vlSelf->dataCache_1__DOT__io_mem_cmd_fire = ((IData)(vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_rValidN) 
                                                 & (IData)(vlSelf->dataCache_1__DOT__io_mem_cmd_valid));
    vlSelf->dataCache_1__DOT__when_DataCache_l645_15 
        = ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_way) 
              >> 0xfU));
    vlSelf->dataCache_1__DOT__when_DataCache_l645_14 
        = ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_way) 
              >> 0xeU));
    vlSelf->dataCache_1__DOT__when_DataCache_l645_13 
        = ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_way) 
              >> 0xdU));
    vlSelf->dataCache_1__DOT__when_DataCache_l645_12 
        = ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_way) 
              >> 0xcU));
    vlSelf->dataCache_1__DOT__when_DataCache_l645_11 
        = ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_way) 
              >> 0xbU));
    vlSelf->dataCache_1__DOT__when_DataCache_l645_10 
        = ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_way) 
              >> 0xaU));
    vlSelf->dataCache_1__DOT__when_DataCache_l645_9 
        = ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_way) 
              >> 9U));
    vlSelf->dataCache_1__DOT__when_DataCache_l645_8 
        = ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_way) 
              >> 8U));
    vlSelf->dataCache_1__DOT__when_DataCache_l645_7 
        = ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_way) 
              >> 7U));
    vlSelf->dataCache_1__DOT__when_DataCache_l645_6 
        = ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_way) 
              >> 6U));
    vlSelf->dataCache_1__DOT__when_DataCache_l645_5 
        = ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_way) 
              >> 5U));
    vlSelf->dataCache_1__DOT__when_DataCache_l645_4 
        = ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_way) 
              >> 4U));
    vlSelf->dataCache_1__DOT__when_DataCache_l645_3 
        = ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_way) 
              >> 3U));
    vlSelf->dataCache_1__DOT__when_DataCache_l645_2 
        = ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_way) 
              >> 2U));
    vlSelf->dataCache_1__DOT__when_DataCache_l645_1 
        = ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_way) 
              >> 1U));
    vlSelf->dataCache_1__DOT__when_DataCache_l645 = 
        ((IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_valid) 
         & (IData)(vlSelf->dataCache_1__DOT__tagsWriteCmd_payload_way));
    vlSelf->dataCache_1__DOT___zz_stageA_dataColisions 
        = ((0xfffeU & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions)) 
           | ((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
               & ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                  == (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_1))) 
              & (0U != ((IData)(vlSelf->dataCache_1__DOT__stageA_mask) 
                        & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_2)))));
    vlSelf->dataCache_1__DOT___zz_stageA_dataColisions 
        = ((0xfffdU & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions)) 
           | (0xfffffffeU & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 1U) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_1)) 
                                 << 1U)) & ((0U != 
                                             ((IData)(vlSelf->dataCache_1__DOT__stageA_mask) 
                                              & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_2))) 
                                            << 1U))));
    vlSelf->dataCache_1__DOT___zz_stageA_dataColisions 
        = ((0xfffbU & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions)) 
           | (0xfffffffcU & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 2U) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_1)) 
                                 << 2U)) & ((0U != 
                                             ((IData)(vlSelf->dataCache_1__DOT__stageA_mask) 
                                              & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_2))) 
                                            << 2U))));
    vlSelf->dataCache_1__DOT___zz_stageA_dataColisions 
        = ((0xfff7U & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions)) 
           | (0xfffffff8U & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 3U) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_1)) 
                                 << 3U)) & ((0U != 
                                             ((IData)(vlSelf->dataCache_1__DOT__stageA_mask) 
                                              & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_2))) 
                                            << 3U))));
    vlSelf->dataCache_1__DOT___zz_stageA_dataColisions 
        = ((0xffefU & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions)) 
           | (0xfffffff0U & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 4U) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_1)) 
                                 << 4U)) & ((0U != 
                                             ((IData)(vlSelf->dataCache_1__DOT__stageA_mask) 
                                              & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_2))) 
                                            << 4U))));
    vlSelf->dataCache_1__DOT___zz_stageA_dataColisions 
        = ((0xffdfU & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions)) 
           | (0xffffffe0U & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 5U) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_1)) 
                                 << 5U)) & ((0U != 
                                             ((IData)(vlSelf->dataCache_1__DOT__stageA_mask) 
                                              & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_2))) 
                                            << 5U))));
    vlSelf->dataCache_1__DOT___zz_stageA_dataColisions 
        = ((0xffbfU & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions)) 
           | (0xffffffc0U & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 6U) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_1)) 
                                 << 6U)) & ((0U != 
                                             ((IData)(vlSelf->dataCache_1__DOT__stageA_mask) 
                                              & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_2))) 
                                            << 6U))));
    vlSelf->dataCache_1__DOT___zz_stageA_dataColisions 
        = ((0xff7fU & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions)) 
           | (0xffffff80U & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 7U) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_1)) 
                                 << 7U)) & ((0U != 
                                             ((IData)(vlSelf->dataCache_1__DOT__stageA_mask) 
                                              & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_2))) 
                                            << 7U))));
    vlSelf->dataCache_1__DOT___zz_stageA_dataColisions 
        = ((0xfeffU & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions)) 
           | (0xffffff00U & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 8U) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_1)) 
                                 << 8U)) & ((0U != 
                                             ((IData)(vlSelf->dataCache_1__DOT__stageA_mask) 
                                              & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_2))) 
                                            << 8U))));
    vlSelf->dataCache_1__DOT___zz_stageA_dataColisions 
        = ((0xfdffU & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions)) 
           | (0xfffffe00U & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 9U) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_1)) 
                                 << 9U)) & ((0U != 
                                             ((IData)(vlSelf->dataCache_1__DOT__stageA_mask) 
                                              & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_2))) 
                                            << 9U))));
    vlSelf->dataCache_1__DOT___zz_stageA_dataColisions 
        = ((0xfbffU & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions)) 
           | (0xfffffc00U & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 0xaU) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_1)) 
                                 << 0xaU)) & ((0U != 
                                               ((IData)(vlSelf->dataCache_1__DOT__stageA_mask) 
                                                & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_2))) 
                                              << 0xaU))));
    vlSelf->dataCache_1__DOT___zz_stageA_dataColisions 
        = ((0xf7ffU & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions)) 
           | (0xfffff800U & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 0xbU) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_1)) 
                                 << 0xbU)) & ((0U != 
                                               ((IData)(vlSelf->dataCache_1__DOT__stageA_mask) 
                                                & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_2))) 
                                              << 0xbU))));
    vlSelf->dataCache_1__DOT___zz_stageA_dataColisions 
        = ((0xefffU & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions)) 
           | (0xfffff000U & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 0xcU) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_1)) 
                                 << 0xcU)) & ((0U != 
                                               ((IData)(vlSelf->dataCache_1__DOT__stageA_mask) 
                                                & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_2))) 
                                              << 0xcU))));
    vlSelf->dataCache_1__DOT___zz_stageA_dataColisions 
        = ((0xdfffU & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions)) 
           | (0xffffe000U & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 0xdU) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_1)) 
                                 << 0xdU)) & ((0U != 
                                               ((IData)(vlSelf->dataCache_1__DOT__stageA_mask) 
                                                & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_2))) 
                                              << 0xdU))));
    vlSelf->dataCache_1__DOT___zz_stageA_dataColisions 
        = ((0xbfffU & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions)) 
           | (0xffffc000U & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 0xeU) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_1)) 
                                 << 0xeU)) & ((0U != 
                                               ((IData)(vlSelf->dataCache_1__DOT__stageA_mask) 
                                                & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_2))) 
                                              << 0xeU))));
    vlSelf->dataCache_1__DOT___zz_stageA_dataColisions 
        = ((0x7fffU & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions)) 
           | (0xffff8000U & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 0xfU) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_1)) 
                                 << 0xfU)) & ((0U != 
                                               ((IData)(vlSelf->dataCache_1__DOT__stageA_mask) 
                                                & (IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions_2))) 
                                              << 0xfU))));
    vlSelf->dataCache_1__DOT__when_DataCache_l648_15 
        = ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way) 
              >> 0xfU));
    vlSelf->dataCache_1__DOT__when_DataCache_l648_14 
        = ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way) 
              >> 0xeU));
    vlSelf->dataCache_1__DOT__when_DataCache_l648_13 
        = ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way) 
              >> 0xdU));
    vlSelf->dataCache_1__DOT__when_DataCache_l648_12 
        = ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way) 
              >> 0xcU));
    vlSelf->dataCache_1__DOT__when_DataCache_l648_11 
        = ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way) 
              >> 0xbU));
    vlSelf->dataCache_1__DOT__when_DataCache_l648_10 
        = ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way) 
              >> 0xaU));
    vlSelf->dataCache_1__DOT__when_DataCache_l648_9 
        = ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way) 
              >> 9U));
    vlSelf->dataCache_1__DOT__when_DataCache_l648_8 
        = ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way) 
              >> 8U));
    vlSelf->dataCache_1__DOT__when_DataCache_l648_7 
        = ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way) 
              >> 7U));
    vlSelf->dataCache_1__DOT__when_DataCache_l648_6 
        = ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way) 
              >> 6U));
    vlSelf->dataCache_1__DOT__when_DataCache_l648_5 
        = ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way) 
              >> 5U));
    vlSelf->dataCache_1__DOT__when_DataCache_l648_4 
        = ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way) 
              >> 4U));
    vlSelf->dataCache_1__DOT__when_DataCache_l648_3 
        = ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way) 
              >> 3U));
    vlSelf->dataCache_1__DOT__when_DataCache_l648_2 
        = ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way) 
              >> 2U));
    vlSelf->dataCache_1__DOT__when_DataCache_l648_1 
        = ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
           & ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way) 
              >> 1U));
    vlSelf->dataCache_1__DOT__when_DataCache_l648 = 
        ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
         & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way));
    vlSelf->dataCache_1_io_cpu_writeBack_haltIt = vlSelf->dataCache_1__DOT__io_cpu_writeBack_haltIt;
    vlSelf->MmuPlugin_dBusAccess_rsp_valid = ((IData)(vlSelf->memory_to_writeBack_IS_DBUS_SHARING) 
                                              & ((~ (IData)(vlSelf->dataCache_1__DOT__stageB_request_wr)) 
                                                 & ((~ (IData)(vlSelf->dataCache_1__DOT__io_cpu_writeBack_haltIt)) 
                                                    | (IData)(vlSelf->dataCache_1__DOT__io_cpu_redo))));
    vlSelf->when_DBusCachedPlugin_l572 = ((IData)(vlSelf->dataCache_1__DOT__io_cpu_writeBack_haltIt) 
                                          & (IData)(vlSelf->dataCache_1_io_cpu_writeBack_isValid));
    vlSelf->CsrPlugin_csrMapping_allowCsrSignal = 0U;
    if (vlSelf->when_CsrPlugin_l1846) {
        vlSelf->CsrPlugin_csrMapping_allowCsrSignal = 1U;
    }
    if (vlSelf->when_CsrPlugin_l1853) {
        vlSelf->CsrPlugin_csrMapping_allowCsrSignal = 1U;
    }
    vlSelf->CsrPlugin_redoInterface_valid = 0U;
    if (vlSelf->execute_CsrPlugin_csr_384) {
        if (vlSelf->execute_CsrPlugin_writeInstruction) {
            vlSelf->CsrPlugin_rescheduleLogic_rescheduleNext = 1U;
        }
    }
    vlSelf->_zz_MmuPlugin_shared_vpn_0 = ((2U & (IData)(vlSelf->_zz_MmuPlugin_shared_refills_2))
                                           ? vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload
                                           : vlSelf->execute_to_memory_MEMORY_VIRTUAL_ADDRESS);
    vlSelf->MmuPlugin_shared_refills = ((2U & ((IData)(vlSelf->_zz_MmuPlugin_shared_refills_2) 
                                               << 1U)) 
                                        | (1U & ((IData)(vlSelf->_zz_MmuPlugin_shared_refills_2) 
                                                 >> 1U)));
    vlSelf->IBusCachedPlugin_rsp_redoFetch = 0U;
    if (vlSelf->when_IBusCachedPlugin_l245) {
        vlSelf->IBusCachedPlugin_rsp_redoFetch = 1U;
    }
    vlSelf->IBusCachedPlugin_rsp_issueDetected_3 = vlSelf->IBusCachedPlugin_rsp_issueDetected_2;
    vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack 
        = vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack;
    if (vlSelf->DBusCachedPlugin_exceptionBus_valid) {
        vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack = 1U;
        vlSelf->writeBack_arbitration_removeIt = 0U;
        vlSelf->writeBack_arbitration_removeIt = 1U;
    } else {
        vlSelf->writeBack_arbitration_removeIt = 0U;
    }
    if (vlSelf->writeBack_arbitration_isFlushed) {
        vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack = 0U;
        vlSelf->writeBack_arbitration_removeIt = 1U;
    }
    if (vlSelf->when_CsrPlugin_l1600) {
        vlSelf->writeBack_arbitration_flushNext = 1U;
    }
    vlSelf->execute_arbitration_isFlushed = ((IData)(vlSelf->writeBack_arbitration_flushNext) 
                                             | ((IData)(vlSelf->memory_arbitration_flushNext) 
                                                | ((IData)(vlSelf->writeBack_arbitration_flushIt) 
                                                   | ((IData)(vlSelf->execute_arbitration_flushIt) 
                                                      | (IData)(vlSelf->memory_arbitration_flushIt)))));
    vlSelf->memory_arbitration_isFlushed = ((IData)(vlSelf->writeBack_arbitration_flushNext) 
                                            | ((IData)(vlSelf->memory_arbitration_flushIt) 
                                               | (IData)(vlSelf->writeBack_arbitration_flushIt)));
    vlSelf->dataCache_1__DOT__stageB_mmuRspFreeze = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l1132) {
        vlSelf->dataCache_1__DOT__stageB_mmuRspFreeze = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_1 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l645_15) {
        vlSelf->dataCache_1__DOT___zz_1 = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_2 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l645_14) {
        vlSelf->dataCache_1__DOT___zz_2 = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_3 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l645_13) {
        vlSelf->dataCache_1__DOT___zz_3 = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_4 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l645_12) {
        vlSelf->dataCache_1__DOT___zz_4 = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_5 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l645_11) {
        vlSelf->dataCache_1__DOT___zz_5 = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_6 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l645_10) {
        vlSelf->dataCache_1__DOT___zz_6 = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_7 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l645_9) {
        vlSelf->dataCache_1__DOT___zz_7 = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_8 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l645_8) {
        vlSelf->dataCache_1__DOT___zz_8 = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_9 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l645_7) {
        vlSelf->dataCache_1__DOT___zz_9 = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_10 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l645_6) {
        vlSelf->dataCache_1__DOT___zz_10 = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_11 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l645_5) {
        vlSelf->dataCache_1__DOT___zz_11 = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_12 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l645_4) {
        vlSelf->dataCache_1__DOT___zz_12 = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_13 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l645_3) {
        vlSelf->dataCache_1__DOT___zz_13 = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_14 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l645_2) {
        vlSelf->dataCache_1__DOT___zz_14 = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_15 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l645_1) {
        vlSelf->dataCache_1__DOT___zz_15 = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_16 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l645) {
        vlSelf->dataCache_1__DOT___zz_16 = 1U;
    }
    vlSelf->dataCache_1__DOT__stageA_dataColisions 
        = ((IData)(vlSelf->dataCache_1__DOT___zz_stageA_dataColisions) 
           | (IData)(vlSelf->dataCache_1__DOT__stage0_dataColisions_regNextWhen));
    vlSelf->dataCache_1__DOT___zz_wr_en = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l648_15) {
        vlSelf->dataCache_1__DOT___zz_wr_en = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_wr_en_1 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l648_14) {
        vlSelf->dataCache_1__DOT___zz_wr_en_1 = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_wr_en_2 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l648_13) {
        vlSelf->dataCache_1__DOT___zz_wr_en_2 = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_wr_en_3 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l648_12) {
        vlSelf->dataCache_1__DOT___zz_wr_en_3 = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_wr_en_4 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l648_11) {
        vlSelf->dataCache_1__DOT___zz_wr_en_4 = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_wr_en_5 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l648_10) {
        vlSelf->dataCache_1__DOT___zz_wr_en_5 = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_wr_en_6 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l648_9) {
        vlSelf->dataCache_1__DOT___zz_wr_en_6 = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_wr_en_7 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l648_8) {
        vlSelf->dataCache_1__DOT___zz_wr_en_7 = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_wr_en_8 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l648_7) {
        vlSelf->dataCache_1__DOT___zz_wr_en_8 = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_wr_en_9 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l648_6) {
        vlSelf->dataCache_1__DOT___zz_wr_en_9 = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_wr_en_10 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l648_5) {
        vlSelf->dataCache_1__DOT___zz_wr_en_10 = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_wr_en_11 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l648_4) {
        vlSelf->dataCache_1__DOT___zz_wr_en_11 = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_wr_en_12 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l648_3) {
        vlSelf->dataCache_1__DOT___zz_wr_en_12 = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_wr_en_13 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l648_2) {
        vlSelf->dataCache_1__DOT___zz_wr_en_13 = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_wr_en_14 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l648_1) {
        vlSelf->dataCache_1__DOT___zz_wr_en_14 = 1U;
    }
    vlSelf->dataCache_1__DOT___zz_wr_en_15 = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l648) {
        vlSelf->dataCache_1__DOT___zz_wr_en_15 = 1U;
    }
    vlSelf->writeBack_arbitration_haltItself = 0U;
    if (vlSelf->when_DBusCachedPlugin_l572) {
        vlSelf->writeBack_arbitration_haltItself = 1U;
    }
    vlSelf->execute_CsrPlugin_illegalAccess = 1U;
    if (vlSelf->execute_CsrPlugin_csr_768) {
        vlSelf->execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->execute_CsrPlugin_csr_256) {
        vlSelf->execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->execute_CsrPlugin_csr_384) {
        vlSelf->execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->execute_CsrPlugin_csr_1972) {
        vlSelf->execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->execute_CsrPlugin_csr_1969) {
        vlSelf->execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->execute_CsrPlugin_csr_1968) {
        vlSelf->execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->execute_CsrPlugin_csr_1952) {
        vlSelf->execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->execute_CsrPlugin_csr_1956) {
        if (vlSelf->execute_CSR_READ_OPCODE) {
            vlSelf->execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->execute_CsrPlugin_csr_1953) {
        vlSelf->execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->execute_CsrPlugin_csr_1954) {
        vlSelf->execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->execute_CsrPlugin_csr_3857) {
        if (vlSelf->execute_CSR_READ_OPCODE) {
            vlSelf->execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->execute_CsrPlugin_csr_3858) {
        if (vlSelf->execute_CSR_READ_OPCODE) {
            vlSelf->execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->execute_CsrPlugin_csr_3859) {
        if (vlSelf->execute_CSR_READ_OPCODE) {
            vlSelf->execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->execute_CsrPlugin_csr_3860) {
        if (vlSelf->execute_CSR_READ_OPCODE) {
            vlSelf->execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->execute_CsrPlugin_csr_769) {
        vlSelf->execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->execute_CsrPlugin_csr_836) {
        vlSelf->execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->execute_CsrPlugin_csr_772) {
        vlSelf->execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->execute_CsrPlugin_csr_773) {
        vlSelf->execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->execute_CsrPlugin_csr_833) {
        vlSelf->execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->execute_CsrPlugin_csr_832) {
        vlSelf->execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->execute_CsrPlugin_csr_834) {
        if (vlSelf->execute_CSR_READ_OPCODE) {
            vlSelf->execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->execute_CsrPlugin_csr_835) {
        if (vlSelf->execute_CSR_READ_OPCODE) {
            vlSelf->execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->execute_CsrPlugin_csr_770) {
        vlSelf->execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->execute_CsrPlugin_csr_771) {
        vlSelf->execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->execute_CsrPlugin_csr_324) {
        vlSelf->execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->execute_CsrPlugin_csr_260) {
        vlSelf->execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->execute_CsrPlugin_csr_261) {
        vlSelf->execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->execute_CsrPlugin_csr_321) {
        vlSelf->execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->execute_CsrPlugin_csr_320) {
        vlSelf->execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->execute_CsrPlugin_csr_322) {
        vlSelf->execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->execute_CsrPlugin_csr_323) {
        vlSelf->execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->execute_CsrPlugin_csr_800) {
        vlSelf->execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->execute_CsrPlugin_csr_3073) {
        if (vlSelf->execute_CSR_READ_OPCODE) {
            vlSelf->execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->execute_CsrPlugin_csr_3201) {
        if (vlSelf->execute_CSR_READ_OPCODE) {
            vlSelf->execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->CsrPlugin_csrMapping_allowCsrSignal) {
        vlSelf->execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->when_CsrPlugin_l1863) {
        vlSelf->execute_CsrPlugin_illegalAccess = 1U;
    }
    if (vlSelf->when_CsrPlugin_l1869) {
        vlSelf->execute_CsrPlugin_illegalAccess = 0U;
    }
    vlSelf->_zz_execute_to_memory_FORMAL_PC_NEXT = vlSelf->execute_FORMAL_PC_NEXT;
    if (vlSelf->CsrPlugin_rescheduleLogic_rescheduleNext) {
        vlSelf->CsrPlugin_redoInterface_valid = 1U;
    }
    if (vlSelf->CsrPlugin_redoInterface_valid) {
        vlSelf->_zz_execute_to_memory_FORMAL_PC_NEXT 
            = vlSelf->CsrPlugin_redoInterface_payload;
    }
    vlSelf->IBusCachedPlugin_jump_pcLoad_valid = ((IData)(vlSelf->BranchPlugin_jumpInterface_valid) 
                                                  | ((IData)(vlSelf->CsrPlugin_redoInterface_valid) 
                                                     | ((IData)(vlSelf->CsrPlugin_jumpInterface_valid) 
                                                        | (IData)(vlSelf->DBusCachedPlugin_redoBranch_valid))));
    vlSelf->_zz_IBusCachedPlugin_jump_pcLoad_payload 
        = (((IData)(vlSelf->CsrPlugin_redoInterface_valid) 
            << 3U) | (((IData)(vlSelf->BranchPlugin_jumpInterface_valid) 
                       << 2U) | (((IData)(vlSelf->CsrPlugin_jumpInterface_valid) 
                                  << 1U) | (IData)(vlSelf->DBusCachedPlugin_redoBranch_valid))));
    vlSelf->when_MmuPlugin_l223 = (0U != (IData)(vlSelf->MmuPlugin_shared_refills));
    vlSelf->_zz_MmuPlugin_shared_refills_3 = vlSelf->MmuPlugin_shared_refills;
    if (vlSelf->when_IBusCachedPlugin_l256) {
        vlSelf->IBusCachedPlugin_rsp_redoFetch = 1U;
    }
    vlSelf->IBusCachedPlugin_cache_io_cpu_fill_valid 
        = ((IData)(vlSelf->IBusCachedPlugin_rsp_redoFetch) 
           & (~ (IData)(vlSelf->IBusCachedPlugin_cache_io_cpu_decode_mmuRefilling)));
    if (vlSelf->when_IBusCachedPlugin_l256) {
        vlSelf->IBusCachedPlugin_rsp_issueDetected_3 = 1U;
        vlSelf->IBusCachedPlugin_cache_io_cpu_fill_valid = 1U;
    }
    vlSelf->IBusCachedPlugin_iBusRsp_redoFetch = 0U;
    if (vlSelf->IBusCachedPlugin_rsp_redoFetch) {
        vlSelf->IBusCachedPlugin_iBusRsp_redoFetch = 1U;
    }
    vlSelf->when_IBusCachedPlugin_l262 = ((IData)(vlSelf->IBusCachedPlugin_cache_io_cpu_decode_isValid) 
                                          & ((~ (IData)(vlSelf->IBusCachedPlugin_rsp_issueDetected_3)) 
                                             & (IData)(vlSelf->IBusCachedPlugin_cache_io_cpu_decode_error)));
    vlSelf->CsrPlugin_exception = ((IData)(vlSelf->CsrPlugin_allowException) 
                                   & (IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack));
    vlSelf->memory_arbitration_removeIt = 0U;
    if (vlSelf->DBusCachedPlugin_trigger_hitBefore) {
        vlSelf->memory_arbitration_removeIt = 1U;
    }
    vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValids_memory 
        = vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory;
    if (vlSelf->memory_arbitration_isFlushed) {
        vlSelf->memory_arbitration_removeIt = 1U;
        vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValids_memory = 0U;
    }
    vlSelf->dataCache_1__DOT__ways_15_data_wr_en = vlSelf->dataCache_1__DOT___zz_wr_en;
    vlSelf->dataCache_1__DOT__ways_14_data_wr_en = vlSelf->dataCache_1__DOT___zz_wr_en_1;
    vlSelf->dataCache_1__DOT__ways_13_data_wr_en = vlSelf->dataCache_1__DOT___zz_wr_en_2;
    vlSelf->dataCache_1__DOT__ways_12_data_wr_en = vlSelf->dataCache_1__DOT___zz_wr_en_3;
    vlSelf->dataCache_1__DOT__ways_11_data_wr_en = vlSelf->dataCache_1__DOT___zz_wr_en_4;
    vlSelf->dataCache_1__DOT__ways_10_data_wr_en = vlSelf->dataCache_1__DOT___zz_wr_en_5;
    vlSelf->dataCache_1__DOT__ways_9_data_wr_en = vlSelf->dataCache_1__DOT___zz_wr_en_6;
    vlSelf->dataCache_1__DOT__ways_8_data_wr_en = vlSelf->dataCache_1__DOT___zz_wr_en_7;
    vlSelf->dataCache_1__DOT__ways_7_data_wr_en = vlSelf->dataCache_1__DOT___zz_wr_en_8;
    vlSelf->dataCache_1__DOT__ways_6_data_wr_en = vlSelf->dataCache_1__DOT___zz_wr_en_9;
    vlSelf->dataCache_1__DOT__ways_5_data_wr_en = vlSelf->dataCache_1__DOT___zz_wr_en_10;
    vlSelf->dataCache_1__DOT__ways_4_data_wr_en = vlSelf->dataCache_1__DOT___zz_wr_en_11;
    vlSelf->dataCache_1__DOT__ways_3_data_wr_en = vlSelf->dataCache_1__DOT___zz_wr_en_12;
    vlSelf->dataCache_1__DOT__ways_2_data_wr_en = vlSelf->dataCache_1__DOT___zz_wr_en_13;
    vlSelf->dataCache_1__DOT__ways_1_data_wr_en = vlSelf->dataCache_1__DOT___zz_wr_en_14;
    vlSelf->dataCache_1__DOT__ways_0_data_wr_en = vlSelf->dataCache_1__DOT___zz_wr_en_15;
    vlSelf->writeBack_arbitration_isStuck = ((IData)(vlSelf->writeBack_arbitration_haltByOther) 
                                             | (IData)(vlSelf->writeBack_arbitration_haltItself));
    vlSelf->when_CsrPlugin_l1684 = ((IData)(vlSelf->execute_CsrPlugin_illegalAccess) 
                                    | (IData)(vlSelf->execute_CsrPlugin_illegalInstruction));
    vlSelf->_zz___05Fzz_IBusCachedPlugin_jump_pcLoad_payload_1 
        = (0xfU & ((IData)(vlSelf->_zz_IBusCachedPlugin_jump_pcLoad_payload) 
                   - (IData)(1U)));
    vlSelf->IBusCachedPlugin_cache__DOT__io_cpu_fill_valid 
        = vlSelf->IBusCachedPlugin_cache_io_cpu_fill_valid;
    vlSelf->IBusCachedPlugin_fetchPc_redo_valid = vlSelf->IBusCachedPlugin_iBusRsp_redoFetch;
    vlSelf->IBusCachedPlugin_decodeExceptionPort_payload_code = 0U;
    if (vlSelf->when_IBusCachedPlugin_l250) {
        vlSelf->IBusCachedPlugin_decodeExceptionPort_payload_code = 0xcU;
        vlSelf->IBusCachedPlugin_decodeExceptionPort_valid = 0U;
        vlSelf->IBusCachedPlugin_decodeExceptionPort_valid 
            = vlSelf->IBusCachedPlugin_iBusRsp_readyForError;
    } else {
        vlSelf->IBusCachedPlugin_decodeExceptionPort_valid = 0U;
    }
    vlSelf->IBusCachedPlugin_rsp_issueDetected_4 = vlSelf->IBusCachedPlugin_rsp_issueDetected_3;
    if (vlSelf->when_IBusCachedPlugin_l262) {
        vlSelf->IBusCachedPlugin_decodeExceptionPort_payload_code = 1U;
        vlSelf->IBusCachedPlugin_decodeExceptionPort_valid 
            = vlSelf->IBusCachedPlugin_iBusRsp_readyForError;
        vlSelf->IBusCachedPlugin_rsp_issueDetected_4 = 1U;
    }
    vlSelf->dataCache_1__DOT__ways_15_data__DOT__wr_en 
        = vlSelf->dataCache_1__DOT__ways_15_data_wr_en;
    vlSelf->dataCache_1__DOT__ways_14_data__DOT__wr_en 
        = vlSelf->dataCache_1__DOT__ways_14_data_wr_en;
    vlSelf->dataCache_1__DOT__ways_13_data__DOT__wr_en 
        = vlSelf->dataCache_1__DOT__ways_13_data_wr_en;
    vlSelf->dataCache_1__DOT__ways_12_data__DOT__wr_en 
        = vlSelf->dataCache_1__DOT__ways_12_data_wr_en;
    vlSelf->dataCache_1__DOT__ways_11_data__DOT__wr_en 
        = vlSelf->dataCache_1__DOT__ways_11_data_wr_en;
    vlSelf->dataCache_1__DOT__ways_10_data__DOT__wr_en 
        = vlSelf->dataCache_1__DOT__ways_10_data_wr_en;
    vlSelf->dataCache_1__DOT__ways_9_data__DOT__wr_en 
        = vlSelf->dataCache_1__DOT__ways_9_data_wr_en;
    vlSelf->dataCache_1__DOT__ways_8_data__DOT__wr_en 
        = vlSelf->dataCache_1__DOT__ways_8_data_wr_en;
    vlSelf->dataCache_1__DOT__ways_7_data__DOT__wr_en 
        = vlSelf->dataCache_1__DOT__ways_7_data_wr_en;
    vlSelf->dataCache_1__DOT__ways_6_data__DOT__wr_en 
        = vlSelf->dataCache_1__DOT__ways_6_data_wr_en;
    vlSelf->dataCache_1__DOT__ways_5_data__DOT__wr_en 
        = vlSelf->dataCache_1__DOT__ways_5_data_wr_en;
    vlSelf->dataCache_1__DOT__ways_4_data__DOT__wr_en 
        = vlSelf->dataCache_1__DOT__ways_4_data_wr_en;
    vlSelf->dataCache_1__DOT__ways_3_data__DOT__wr_en 
        = vlSelf->dataCache_1__DOT__ways_3_data_wr_en;
    vlSelf->dataCache_1__DOT__ways_2_data__DOT__wr_en 
        = vlSelf->dataCache_1__DOT__ways_2_data_wr_en;
    vlSelf->dataCache_1__DOT__ways_1_data__DOT__wr_en 
        = vlSelf->dataCache_1__DOT__ways_1_data_wr_en;
    vlSelf->dataCache_1__DOT__ways_0_data__DOT__wr_en 
        = vlSelf->dataCache_1__DOT__ways_0_data_wr_en;
    vlSelf->dataCache_1__DOT__io_cpu_writeBack_isStuck 
        = vlSelf->writeBack_arbitration_isStuck;
    vlSelf->when_Fetcher_l331_5 = (1U & (~ (IData)(vlSelf->writeBack_arbitration_isStuck)));
    vlSelf->memory_arbitration_isStuckByOthers = ((IData)(vlSelf->memory_arbitration_haltByOther) 
                                                  | (IData)(vlSelf->writeBack_arbitration_isStuck));
    __Vtableidx6 = (((IData)(vlSelf->when_CsrPlugin_l1709) 
                     << 4U) | (((IData)(vlSelf->CsrPlugin_privilege) 
                                << 2U) | (((IData)(vlSelf->when_CsrPlugin_l1699) 
                                           << 1U) | (IData)(vlSelf->when_CsrPlugin_l1684))));
    vlSelf->CsrPlugin_selfException_payload_code = 
        Vsonata__ConstPool__TABLE_h4a9576a0_0[__Vtableidx6];
    vlSelf->CsrPlugin_selfException_valid = 0U;
    if (vlSelf->when_CsrPlugin_l1684) {
        vlSelf->CsrPlugin_selfException_valid = 1U;
    }
    if (vlSelf->when_CsrPlugin_l1699) {
        vlSelf->CsrPlugin_selfException_valid = 1U;
    }
    if (vlSelf->when_CsrPlugin_l1709) {
        vlSelf->CsrPlugin_selfException_valid = 1U;
    }
    vlSelf->_zz_IBusCachedPlugin_jump_pcLoad_payload_1 
        = ((~ (IData)(vlSelf->_zz___05Fzz_IBusCachedPlugin_jump_pcLoad_payload_1)) 
           & (IData)(vlSelf->_zz_IBusCachedPlugin_jump_pcLoad_payload));
    vlSelf->IBusCachedPlugin_fetchPc_flushed = 0U;
    vlSelf->IBusCachedPlugin_fetchPc_correction = 0U;
    if (vlSelf->IBusCachedPlugin_fetchPc_redo_valid) {
        vlSelf->IBusCachedPlugin_fetchPc_flushed = 1U;
        vlSelf->IBusCachedPlugin_fetchPc_correction = 1U;
    }
    vlSelf->when_IBusCachedPlugin_l273 = ((IData)(vlSelf->IBusCachedPlugin_rsp_iBusRspOutputHalt) 
                                          | (IData)(vlSelf->IBusCachedPlugin_rsp_issueDetected_4));
    vlSelf->when_CsrPlugin_l1403_3 = vlSelf->when_Fetcher_l331_5;
    vlSelf->when_CsrPlugin_l1479_2 = vlSelf->when_Fetcher_l331_5;
    vlSelf->when_Pipeline_l124_57 = vlSelf->when_Fetcher_l331_5;
    vlSelf->when_Pipeline_l124_5 = vlSelf->when_Fetcher_l331_5;
    vlSelf->when_Pipeline_l124_8 = vlSelf->when_Fetcher_l331_5;
    vlSelf->when_Pipeline_l124_15 = vlSelf->when_Fetcher_l331_5;
    vlSelf->when_Pipeline_l124_19 = vlSelf->when_Fetcher_l331_5;
    vlSelf->when_Pipeline_l124_25 = vlSelf->when_Fetcher_l331_5;
    vlSelf->when_Pipeline_l124_28 = vlSelf->when_Fetcher_l331_5;
    vlSelf->when_Pipeline_l124_36 = vlSelf->when_Fetcher_l331_5;
    vlSelf->when_Pipeline_l124_44 = vlSelf->when_Fetcher_l331_5;
    vlSelf->when_Pipeline_l124_54 = vlSelf->when_Fetcher_l331_5;
    vlSelf->when_Pipeline_l124_59 = vlSelf->when_Fetcher_l331_5;
    vlSelf->when_Pipeline_l124_64 = vlSelf->when_Fetcher_l331_5;
    vlSelf->when_Pipeline_l124_65 = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l827 = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826 = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_1 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_2 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_3 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_4 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_5 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_6 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_7 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_8 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_9 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_10 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_11 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_12 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_13 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_14 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_15 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_16 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_17 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_18 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_19 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_20 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_21 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_22 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_23 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_24 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_25 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_26 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_27 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_28 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_29 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_30 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l826_31 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l825 = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l825_1 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l825_2 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l825_3 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l825_4 
        = vlSelf->when_Fetcher_l331_5;
    vlSelf->dataCache_1__DOT__when_DataCache_l689 = vlSelf->when_Fetcher_l331_5;
    vlSelf->when_Pipeline_l151_2 = ((IData)(vlSelf->when_Fetcher_l331_5) 
                                    | (IData)(vlSelf->writeBack_arbitration_removeIt));
    vlSelf->when_Pipeline_l124_2 = ((IData)(vlSelf->when_Fetcher_l331_5) 
                                    & (~ (IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack)));
    vlSelf->dataCache_1__DOT__when_DataCache_l829 = 
        ((IData)(vlSelf->when_Fetcher_l331_5) & (~ (IData)(vlSelf->dataCache_1__DOT__stageB_mmuRspFreeze)));
    vlSelf->writeBack_arbitration_isMoving = ((IData)(vlSelf->when_Fetcher_l331_5) 
                                              & (~ (IData)(vlSelf->writeBack_arbitration_removeIt)));
    vlSelf->memory_arbitration_isStuck = ((IData)(vlSelf->memory_arbitration_haltItself) 
                                          | (IData)(vlSelf->memory_arbitration_isStuckByOthers));
    vlSelf->_zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code_2 
        = (((IData)(vlSelf->BranchPlugin_branchExceptionPort_valid) 
            << 1U) | (IData)(vlSelf->CsrPlugin_selfException_valid));
    vlSelf->_zz_when_2 = ((IData)(vlSelf->BranchPlugin_branchExceptionPort_valid) 
                          | (IData)(vlSelf->CsrPlugin_selfException_valid));
    vlSelf->_zz_IBusCachedPlugin_jump_pcLoad_payload_2 
        = (1U & ((IData)(vlSelf->_zz_IBusCachedPlugin_jump_pcLoad_payload_1) 
                 >> 3U));
    if (vlSelf->IBusCachedPlugin_jump_pcLoad_valid) {
        vlSelf->IBusCachedPlugin_fetchPc_flushed = 1U;
        vlSelf->IBusCachedPlugin_fetchPc_correction = 1U;
    }
    vlSelf->IBusCachedPlugin_fetchPc_corrected = ((IData)(vlSelf->IBusCachedPlugin_fetchPc_correction) 
                                                  | (IData)(vlSelf->IBusCachedPlugin_fetchPc_correctionReg));
    vlSelf->IBusCachedPlugin_iBusRsp_stages_3_halt = 0U;
    if (vlSelf->when_IBusCachedPlugin_l273) {
        vlSelf->IBusCachedPlugin_iBusRsp_stages_3_halt = 1U;
    }
    vlSelf->writeBack_arbitration_isFiring = ((IData)(vlSelf->writeBack_arbitration_isValid) 
                                              & (IData)(vlSelf->writeBack_arbitration_isMoving));
    vlSelf->dataCache_1__DOT__io_cpu_memory_isStuck 
        = vlSelf->memory_arbitration_isStuck;
    vlSelf->DBusCachedPlugin_mmuBus_cmd_1_isStuck = vlSelf->memory_arbitration_isStuck;
    vlSelf->when_MmuPlugin_l117_1 = (1U & (~ (IData)(vlSelf->memory_arbitration_isStuck)));
    vlSelf->__VdfgRegularize_h16d7421c_8_31 = ((IData)(vlSelf->memory_arbitration_isStuck) 
                                               | (IData)(vlSelf->writeBack_arbitration_isStuck));
    vlSelf->_zz___05Fzz_CsrPlugin_exceptionPortCtrl_exceptionContext_code_3_1 
        = (3U & ((IData)(vlSelf->_zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code_2) 
                 - (IData)(1U)));
    vlSelf->execute_arbitration_removeIt = 0U;
    vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValids_execute 
        = vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute;
    if (vlSelf->_zz_when_2) {
        vlSelf->execute_arbitration_removeIt = 1U;
    }
    if (vlSelf->execute_arbitration_isFlushed) {
        vlSelf->execute_arbitration_removeIt = 1U;
    }
    if (vlSelf->_zz_when_2) {
        vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValids_execute = 1U;
    }
    if (vlSelf->execute_arbitration_isFlushed) {
        vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValids_execute = 0U;
    }
    vlSelf->execute_arbitration_flushNext = 0U;
    if (vlSelf->CsrPlugin_rescheduleLogic_rescheduleNext) {
        vlSelf->execute_arbitration_flushNext = 1U;
    }
    if (vlSelf->_zz_when_2) {
        vlSelf->execute_arbitration_flushNext = 1U;
    }
    if (vlSelf->BranchPlugin_jumpInterface_valid) {
        vlSelf->_zz_execute_to_memory_FORMAL_PC_NEXT 
            = vlSelf->BranchPlugin_jumpInterface_payload;
        vlSelf->execute_arbitration_flushNext = 1U;
    }
    vlSelf->_zz_IBusCachedPlugin_jump_pcLoad_payload_4 
        = (1U & (((IData)(vlSelf->_zz_IBusCachedPlugin_jump_pcLoad_payload_1) 
                  >> 2U) | (IData)(vlSelf->_zz_IBusCachedPlugin_jump_pcLoad_payload_2)));
    vlSelf->_zz_IBusCachedPlugin_jump_pcLoad_payload_3 
        = (1U & (((IData)(vlSelf->_zz_IBusCachedPlugin_jump_pcLoad_payload_1) 
                  >> 1U) | (IData)(vlSelf->_zz_IBusCachedPlugin_jump_pcLoad_payload_2)));
    vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_3_input_ready 
        = (1U & (~ (IData)(vlSelf->IBusCachedPlugin_iBusRsp_stages_3_halt)));
    vlSelf->dataCache_1__DOT__io_cpu_writeBack_isFiring 
        = vlSelf->writeBack_arbitration_isFiring;
    vlSelf->lastStageIsFiring = vlSelf->writeBack_arbitration_isFiring;
    vlSelf->dataCache_1__DOT__when_DataCache_l885 = 
        ((IData)(vlSelf->writeBack_arbitration_isFiring) 
         & (IData)(vlSelf->dataCache_1_io_cpu_writeBack_isValid));
    vlSelf->HazardSimplePlugin_writeBackWrites_valid 
        = ((IData)(vlSelf->memory_to_writeBack_REGFILE_WRITE_VALID) 
           & (IData)(vlSelf->writeBack_arbitration_isFiring));
    vlSelf->debugBus_commit = ((IData)(vlSelf->debugMode) 
                               & (IData)(vlSelf->writeBack_arbitration_isFiring));
    vlSelf->when_Fetcher_l331_4 = vlSelf->when_MmuPlugin_l117_1;
    vlSelf->when_CsrPlugin_l1403_2 = vlSelf->when_MmuPlugin_l117_1;
    vlSelf->when_CsrPlugin_l1479_1 = vlSelf->when_MmuPlugin_l117_1;
    vlSelf->when_Pipeline_l124_56 = vlSelf->when_MmuPlugin_l117_1;
    vlSelf->when_MmuPlugin_l124_2 = vlSelf->when_MmuPlugin_l117_1;
    vlSelf->when_MmuPlugin_l124_3 = vlSelf->when_MmuPlugin_l117_1;
    vlSelf->when_MulDivIterativePlugin_l126_1 = vlSelf->when_MmuPlugin_l117_1;
    vlSelf->when_Pipeline_l124_1 = vlSelf->when_MmuPlugin_l117_1;
    vlSelf->when_Pipeline_l124_4 = vlSelf->when_MmuPlugin_l117_1;
    vlSelf->when_Pipeline_l124_7 = vlSelf->when_MmuPlugin_l117_1;
    vlSelf->when_Pipeline_l124_14 = vlSelf->when_MmuPlugin_l117_1;
    vlSelf->when_Pipeline_l124_18 = vlSelf->when_MmuPlugin_l117_1;
    vlSelf->when_Pipeline_l124_22 = vlSelf->when_MmuPlugin_l117_1;
    vlSelf->when_Pipeline_l124_24 = vlSelf->when_MmuPlugin_l117_1;
    vlSelf->when_Pipeline_l124_27 = vlSelf->when_MmuPlugin_l117_1;
    vlSelf->when_Pipeline_l124_35 = vlSelf->when_MmuPlugin_l117_1;
    vlSelf->when_Pipeline_l124_38 = vlSelf->when_MmuPlugin_l117_1;
    vlSelf->when_Pipeline_l124_43 = vlSelf->when_MmuPlugin_l117_1;
    vlSelf->when_Pipeline_l124_53 = vlSelf->when_MmuPlugin_l117_1;
    vlSelf->when_Pipeline_l124_55 = vlSelf->when_MmuPlugin_l117_1;
    vlSelf->when_Pipeline_l124_58 = vlSelf->when_MmuPlugin_l117_1;
    vlSelf->when_Pipeline_l124_60 = vlSelf->when_MmuPlugin_l117_1;
    vlSelf->when_Pipeline_l124_61 = vlSelf->when_MmuPlugin_l117_1;
    vlSelf->when_Pipeline_l124_62 = vlSelf->when_MmuPlugin_l117_1;
    vlSelf->when_Pipeline_l124_63 = vlSelf->when_MmuPlugin_l117_1;
    vlSelf->dataCache_1__DOT__when_DataCache_l776 = vlSelf->when_MmuPlugin_l117_1;
    vlSelf->dataCache_1__DOT__when_DataCache_l776_1 
        = vlSelf->when_MmuPlugin_l117_1;
    vlSelf->dataCache_1__DOT__when_DataCache_l776_2 
        = vlSelf->when_MmuPlugin_l117_1;
    vlSelf->dataCache_1__DOT__when_DataCache_l776_3 
        = vlSelf->when_MmuPlugin_l117_1;
    vlSelf->when_Pipeline_l151_1 = ((IData)(vlSelf->when_MmuPlugin_l117_1) 
                                    | (IData)(vlSelf->memory_arbitration_removeIt));
    vlSelf->when_Pipeline_l154_2 = ((IData)(vlSelf->when_MmuPlugin_l117_1) 
                                    & (~ (IData)(vlSelf->memory_arbitration_removeIt)));
    vlSelf->when_MulDivIterativePlugin_l162 = vlSelf->when_MmuPlugin_l117_1;
    __VdfgRegularize_h16d7421c_8_35 = ((IData)(vlSelf->when_MmuPlugin_l117_1) 
                                       & (IData)(vlSelf->memory_arbitration_isValid));
    vlSelf->execute_arbitration_isStuckByOthers = ((IData)(vlSelf->execute_arbitration_haltByOther) 
                                                   | (IData)(vlSelf->__VdfgRegularize_h16d7421c_8_31));
    vlSelf->_zz___05Fzz_CsrPlugin_exceptionPortCtrl_exceptionContext_code_3 
        = ((~ (IData)(vlSelf->_zz___05Fzz_CsrPlugin_exceptionPortCtrl_exceptionContext_code_3_1)) 
           & (IData)(vlSelf->_zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code_2));
    vlSelf->decode_arbitration_isFlushed = ((IData)(vlSelf->writeBack_arbitration_flushNext) 
                                            | ((IData)(vlSelf->execute_arbitration_flushNext) 
                                               | ((IData)(vlSelf->memory_arbitration_flushNext) 
                                                  | ((IData)(vlSelf->writeBack_arbitration_flushIt) 
                                                     | ((IData)(vlSelf->memory_arbitration_flushIt) 
                                                        | ((IData)(vlSelf->decode_arbitration_flushIt) 
                                                           | (IData)(vlSelf->execute_arbitration_flushIt)))))));
    vlSelf->_zz_IBusCachedPlugin_jump_pcLoad_payload_6 
        = (((IData)(vlSelf->_zz_IBusCachedPlugin_jump_pcLoad_payload_4) 
            << 1U) | (IData)(vlSelf->_zz_IBusCachedPlugin_jump_pcLoad_payload_3));
    vlSelf->IBusCachedPlugin_iBusRsp_output_valid = 
        ((IData)(vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_3_input_ready) 
         & (IData)(vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_2_output_m2sPipe_valid));
    vlSelf->lastStageRegFileWrite_valid = vlSelf->HazardSimplePlugin_writeBackWrites_valid;
    if (vlSelf->_zz_5) {
        vlSelf->lastStageRegFileWrite_payload_address = 0U;
        vlSelf->lastStageRegFileWrite_payload_data = 0U;
        vlSelf->lastStageRegFileWrite_valid = 1U;
    }
    vlSelf->when_CsrPlugin_l804_1 = ((IData)(vlSelf->debugBus_exception) 
                                     | ((IData)(vlSelf->debugBus_commit) 
                                        | ((IData)(vlSelf->debugBus_ebreak) 
                                           | (IData)(vlSelf->debugBus_redo))));
    vlSelf->DBusCachedPlugin_mmuBus_end = vlSelf->when_Pipeline_l151_1;
    vlSelf->memory_arbitration_isMoving = vlSelf->when_Pipeline_l154_2;
    vlSelf->memory_MulDivIterativePlugin_div_counter_willClear = 0U;
    if (vlSelf->when_MulDivIterativePlugin_l162) {
        vlSelf->memory_MulDivIterativePlugin_div_counter_willClear = 1U;
    }
    vlSelf->memory_arbitration_isFiring = ((~ (IData)(vlSelf->memory_arbitration_removeIt)) 
                                           & (IData)(__VdfgRegularize_h16d7421c_8_35));
    vlSelf->DBusCachedPlugin_trigger_valid = ((IData)(__VdfgRegularize_h16d7421c_8_35) 
                                              & ((~ (IData)(vlSelf->memory_arbitration_isFlushed)) 
                                                 & (IData)(vlSelf->execute_to_memory_MEMORY_ENABLE)));
    vlSelf->execute_arbitration_isStuck = ((IData)(vlSelf->execute_arbitration_haltItself) 
                                           | (IData)(vlSelf->execute_arbitration_isStuckByOthers));
    vlSelf->_zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code_3 
        = (1U & (IData)(vlSelf->_zz___05Fzz_CsrPlugin_exceptionPortCtrl_exceptionContext_code_3));
    vlSelf->_zz_IBusCachedPlugin_jump_pcLoad_payload_5 
        = ((0U == (IData)(vlSelf->_zz_IBusCachedPlugin_jump_pcLoad_payload_6))
            ? vlSelf->DBusCachedPlugin_redoBranch_payload
            : ((1U == (IData)(vlSelf->_zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                ? vlSelf->CsrPlugin_jumpInterface_payload
                : ((2U == (IData)(vlSelf->_zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                    ? vlSelf->BranchPlugin_jumpInterface_payload
                    : vlSelf->CsrPlugin_redoInterface_payload)));
    vlSelf->IBusCachedPlugin_iBusRsp_stages_3_output_valid 
        = vlSelf->IBusCachedPlugin_iBusRsp_output_valid;
    vlSelf->decode_arbitration_isValid = vlSelf->IBusCachedPlugin_iBusRsp_output_valid;
    if ((2U == (IData)(vlSelf->IBusCachedPlugin_injector_port_state))) {
        vlSelf->decode_arbitration_isValid = 1U;
    } else if ((3U == (IData)(vlSelf->IBusCachedPlugin_injector_port_state))) {
        vlSelf->decode_arbitration_isValid = 1U;
    }
    if (vlSelf->IBusCachedPlugin_forceNoDecodeCond) {
        vlSelf->decode_arbitration_isValid = 0U;
    }
    vlSelf->_zz_1 = 0U;
    if (vlSelf->lastStageRegFileWrite_valid) {
        vlSelf->_zz_1 = 1U;
    }
    vlSelf->memory_MulDivIterativePlugin_div_counter_valueNext 
        = ((IData)(vlSelf->memory_MulDivIterativePlugin_div_counter_willOverflow)
            ? 0U : (0x3fU & ((IData)(vlSelf->memory_MulDivIterativePlugin_div_counter_value) 
                             + (IData)(vlSelf->_zz_memory_MulDivIterativePlugin_div_counter_valueNext))));
    if (vlSelf->memory_MulDivIterativePlugin_div_counter_willClear) {
        vlSelf->memory_MulDivIterativePlugin_div_counter_valueNext = 0U;
    }
    vlSelf->DBusCachedPlugin_mmuBus_cmd_0_isStuck = vlSelf->execute_arbitration_isStuck;
    vlSelf->when_Fetcher_l331_3 = (1U & (~ (IData)(vlSelf->execute_arbitration_isStuck)));
    vlSelf->IBusCachedPlugin_jump_pcLoad_payload = vlSelf->_zz_IBusCachedPlugin_jump_pcLoad_payload_5;
    vlSelf->IBusCachedPlugin_cache_io_flush = ((IData)(vlSelf->decode_arbitration_isValid) 
                                               & (IData)(vlSelf->_zz___05Fzz_decode_IS_CSR_147));
    vlSelf->decodeExceptionPort_valid = ((~ (IData)(vlSelf->decode_LEGAL_INSTRUCTION)) 
                                         & (IData)(vlSelf->decode_arbitration_isValid));
    vlSelf->when_HazardSimplePlugin_l113 = ((IData)(vlSelf->decode_arbitration_isValid) 
                                            & ((IData)(vlSelf->HazardSimplePlugin_src0Hazard) 
                                               | (IData)(vlSelf->HazardSimplePlugin_src1Hazard)));
    vlSelf->CsrPlugin_pipelineLiberator_active = ((IData)(vlSelf->CsrPlugin_interrupt_valid) 
                                                  & ((IData)(vlSelf->CsrPlugin_allowInterrupts) 
                                                     & (IData)(vlSelf->decode_arbitration_isValid)));
    vlSelf->when_CsrPlugin_l1065 = (1U & (~ (IData)(vlSelf->decode_arbitration_isValid)));
    vlSelf->when_CsrPlugin_l1403_1 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1479 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_3 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_6 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_9 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_10 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_11 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_12 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_13 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_16 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_17 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_20 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_21 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_23 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_26 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_29 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_30 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_31 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_32 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_33 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_34 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_37 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_39 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_40 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_41 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_42 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_45 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_46 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_47 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_48 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_49 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_50 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_51 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l124_52 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_1 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_2 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_3 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_4 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_5 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_6 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_7 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_8 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_9 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_10 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_11 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_12 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_13 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_14 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_15 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_16 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_17 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_18 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_19 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_20 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_21 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_22 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_23 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_24 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_25 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_26 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_27 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_28 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_29 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_30 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_31 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_32 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_CsrPlugin_l1813_33 = vlSelf->when_Fetcher_l331_3;
    vlSelf->when_Pipeline_l151 = ((IData)(vlSelf->when_Fetcher_l331_3) 
                                  | (IData)(vlSelf->execute_arbitration_removeIt));
    vlSelf->execute_CsrPlugin_readEnable = ((IData)(vlSelf->when_Fetcher_l331_3) 
                                            & (IData)(vlSelf->execute_CsrPlugin_readInstruction));
    vlSelf->when_Pipeline_l154_1 = ((IData)(vlSelf->when_Fetcher_l331_3) 
                                    & (~ (IData)(vlSelf->execute_arbitration_removeIt)));
    vlSelf->execute_CsrPlugin_writeEnable = ((IData)(vlSelf->when_Fetcher_l331_3) 
                                             & (IData)(vlSelf->execute_CsrPlugin_writeInstruction));
    vlSelf->IBusCachedPlugin_fetchPc_pc = (vlSelf->IBusCachedPlugin_fetchPc_pcReg 
                                           + vlSelf->_zz_IBusCachedPlugin_fetchPc_pc);
    if (vlSelf->IBusCachedPlugin_fetchPc_redo_valid) {
        vlSelf->IBusCachedPlugin_fetchPc_pc = vlSelf->IBusCachedPlugin_fetchPc_redo_payload;
    }
    if (vlSelf->IBusCachedPlugin_jump_pcLoad_valid) {
        vlSelf->IBusCachedPlugin_fetchPc_pc = vlSelf->IBusCachedPlugin_jump_pcLoad_payload;
    }
    vlSelf->IBusCachedPlugin_fetchPc_pc = (0xfffffffcU 
                                           & vlSelf->IBusCachedPlugin_fetchPc_pc);
    vlSelf->IBusCachedPlugin_cache__DOT__io_flush = vlSelf->IBusCachedPlugin_cache_io_flush;
    vlSelf->IBusCachedPlugin_cache__DOT__io_cpu_prefetch_haltIt 
        = ((IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_valid) 
           | (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_flushPending));
    if (vlSelf->IBusCachedPlugin_cache__DOT__when_InstructionCache_l338) {
        vlSelf->IBusCachedPlugin_cache__DOT__io_cpu_prefetch_haltIt = 1U;
    }
    if (vlSelf->IBusCachedPlugin_cache__DOT__when_InstructionCache_l342) {
        vlSelf->IBusCachedPlugin_cache__DOT__io_cpu_prefetch_haltIt = 1U;
    }
    if (vlSelf->IBusCachedPlugin_cache_io_flush) {
        vlSelf->IBusCachedPlugin_cache__DOT__io_cpu_prefetch_haltIt = 1U;
    }
    vlSelf->_zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code 
        = (((IData)(vlSelf->decodeExceptionPort_valid) 
            << 1U) | (IData)(vlSelf->IBusCachedPlugin_decodeExceptionPort_valid));
    vlSelf->_zz_when_1 = ((IData)(vlSelf->decodeExceptionPort_valid) 
                          | (IData)(vlSelf->IBusCachedPlugin_decodeExceptionPort_valid));
    vlSelf->CsrPlugin_trigger_decodeBreak_enabled = 0U;
    if (vlSelf->CsrPlugin_trigger_slots_0_tdata2_execute_hit) {
        vlSelf->CsrPlugin_trigger_decodeBreak_enabled = 1U;
    }
    if (vlSelf->when_CsrPlugin_l1065) {
        vlSelf->CsrPlugin_trigger_decodeBreak_enabled = 0U;
    }
    vlSelf->execute_arbitration_isMoving = vlSelf->when_Pipeline_l154_1;
    vlSelf->execute_arbitration_isFiring = ((IData)(vlSelf->execute_arbitration_isValid) 
                                            & (IData)(vlSelf->when_Pipeline_l154_1));
    vlSelf->_zz_debugBus_hartToDm_valid = 0U;
    if (vlSelf->execute_CsrPlugin_csr_1972) {
        if (vlSelf->execute_CsrPlugin_writeEnable) {
            vlSelf->_zz_debugBus_hartToDm_valid = 1U;
        }
    }
    vlSelf->IBusCachedPlugin_fetchPc_output_payload 
        = vlSelf->IBusCachedPlugin_fetchPc_pc;
    vlSelf->IBusCachedPlugin_iBusRsp_stages_0_input_payload 
        = vlSelf->IBusCachedPlugin_fetchPc_pc;
    vlSelf->IBusCachedPlugin_iBusRsp_stages_0_output_payload 
        = vlSelf->IBusCachedPlugin_fetchPc_pc;
    vlSelf->IBusCachedPlugin_cache_io_cpu_prefetch_haltIt 
        = vlSelf->IBusCachedPlugin_cache__DOT__io_cpu_prefetch_haltIt;
    vlSelf->_zz___05Fzz_CsrPlugin_exceptionPortCtrl_exceptionContext_code_1_1 
        = (3U & ((IData)(vlSelf->_zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code) 
                 - (IData)(1U)));
    vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValids_decode 
        = vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode;
    if (vlSelf->_zz_when_1) {
        vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValids_decode = 1U;
    }
    vlSelf->CsrPlugin_trigger_decodeBreak_doIt = 0U;
    vlSelf->when_CsrPlugin_l836 = 0U;
    vlSelf->when_Utils_l669 = (1U & ((~ (IData)(vlSelf->CsrPlugin_trigger_decodeBreak_enabled)) 
                                     | (IData)(vlSelf->when_CsrPlugin_l753)));
    vlSelf->decode_arbitration_flushNext = 0U;
    if (vlSelf->CsrPlugin_trigger_decodeBreak_enabled) {
        vlSelf->CsrPlugin_running_aheadValue = vlSelf->CsrPlugin_running;
        if (vlSelf->CsrPlugin_trigger_decodeBreak_timeout_state) {
            vlSelf->CsrPlugin_trigger_decodeBreak_doIt = 1U;
            vlSelf->when_CsrPlugin_l836 = 1U;
            vlSelf->decode_arbitration_flushNext = 1U;
            vlSelf->CsrPlugin_running_aheadValue = 0U;
        }
    } else {
        vlSelf->CsrPlugin_running_aheadValue = vlSelf->CsrPlugin_running;
    }
    if (vlSelf->when_CsrPlugin_l1534) {
        vlSelf->when_CsrPlugin_l836 = 1U;
        if (vlSelf->CsrPlugin_trapEnterDebug) {
            vlSelf->CsrPlugin_running_aheadValue = 0U;
        }
    }
    if (vlSelf->CsrPlugin_doResume) {
        vlSelf->CsrPlugin_running_aheadValue = 1U;
    }
    vlSelf->decode_arbitration_removeIt = 0U;
    if (vlSelf->CsrPlugin_trigger_decodeBreak_enabled) {
        if (vlSelf->CsrPlugin_trigger_decodeBreak_timeout_state) {
            vlSelf->decode_arbitration_removeIt = 1U;
        }
    }
    if (vlSelf->_zz_when_1) {
        vlSelf->decode_arbitration_flushNext = 1U;
        vlSelf->decode_arbitration_removeIt = 1U;
    }
    if (vlSelf->decode_arbitration_isFlushed) {
        vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValids_decode = 0U;
        vlSelf->decode_arbitration_removeIt = 1U;
    }
    vlSelf->when_MmuPlugin_l311 = ((IData)(vlSelf->execute_arbitration_isValid) 
                                   & ((IData)(vlSelf->execute_arbitration_isFiring) 
                                      & (IData)(vlSelf->decode_to_execute_IS_SFENCE_VMA2)));
    vlSelf->debugBus_hartToDm_valid = vlSelf->_zz_debugBus_hartToDm_valid;
    vlSelf->_zz___05Fzz_CsrPlugin_exceptionPortCtrl_exceptionContext_code_1 
        = ((~ (IData)(vlSelf->_zz___05Fzz_CsrPlugin_exceptionPortCtrl_exceptionContext_code_1_1)) 
           & (IData)(vlSelf->_zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code));
    vlSelf->when_CsrPlugin_l1416 = ((IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack) 
                                    | ((IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValids_memory) 
                                       | ((IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValids_decode) 
                                          | (IData)(vlSelf->CsrPlugin_exceptionPortCtrl_exceptionValids_execute))));
    vlSelf->when_CsrPlugin_l988 = ((IData)(vlSelf->CsrPlugin_trigger_decodeBreak_doIt) 
                                   & (IData)(vlSelf->CsrPlugin_trigger_slots_0_tdata2_execute_hit));
    vlSelf->CsrPlugin_trigger_decodeBreak_timeout_stateRise = 0U;
    if (vlSelf->CsrPlugin_trigger_decodeBreak_timeout_counter_willOverflow) {
        vlSelf->CsrPlugin_trigger_decodeBreak_timeout_stateRise 
            = (1U & (~ (IData)(vlSelf->CsrPlugin_trigger_decodeBreak_timeout_state)));
        vlSelf->CsrPlugin_trigger_decodeBreak_timeout_counter_valueNext = 0U;
    } else {
        vlSelf->CsrPlugin_trigger_decodeBreak_timeout_counter_valueNext 
            = (3U & ((IData)(vlSelf->CsrPlugin_trigger_decodeBreak_timeout_counter_value) 
                     + (IData)(vlSelf->_zz_CsrPlugin_trigger_decodeBreak_timeout_counter_valueNext)));
    }
    vlSelf->CsrPlugin_trigger_decodeBreak_timeout_counter_willClear = 0U;
    if (vlSelf->when_Utils_l669) {
        vlSelf->CsrPlugin_trigger_decodeBreak_timeout_stateRise = 0U;
        vlSelf->CsrPlugin_trigger_decodeBreak_timeout_counter_willClear = 1U;
    }
    vlSelf->IBusCachedPlugin_externalFlush = ((IData)(vlSelf->writeBack_arbitration_flushNext) 
                                              | ((IData)(vlSelf->memory_arbitration_flushNext) 
                                                 | ((IData)(vlSelf->decode_arbitration_flushNext) 
                                                    | (IData)(vlSelf->execute_arbitration_flushNext))));
    vlSelf->CsrPlugin_enterHalt = ((~ (IData)(vlSelf->CsrPlugin_running_aheadValue)) 
                                   & (IData)(vlSelf->CsrPlugin_running_aheadValue_regNext));
    vlSelf->when_CsrPlugin_l1484 = (1U & ((~ (IData)(vlSelf->CsrPlugin_pipelineLiberator_active)) 
                                          | (IData)(vlSelf->decode_arbitration_removeIt)));
    vlSelf->_zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code_1 
        = (1U & (IData)(vlSelf->_zz___05Fzz_CsrPlugin_exceptionPortCtrl_exceptionContext_code_1));
    vlSelf->IBusCachedPlugin_fetcherHalt = 0U;
    if (vlSelf->when_CsrPlugin_l729) {
        vlSelf->IBusCachedPlugin_fetcherHalt = 1U;
    }
    if (vlSelf->when_CsrPlugin_l1416) {
        vlSelf->IBusCachedPlugin_fetcherHalt = 1U;
    }
    if (vlSelf->when_CsrPlugin_l1534) {
        vlSelf->IBusCachedPlugin_fetcherHalt = 1U;
    }
    if (vlSelf->when_CsrPlugin_l1600) {
        vlSelf->IBusCachedPlugin_fetcherHalt = 1U;
    }
    if (vlSelf->CsrPlugin_trigger_decodeBreak_timeout_counter_willClear) {
        vlSelf->CsrPlugin_trigger_decodeBreak_timeout_counter_valueNext = 0U;
    }
    vlSelf->IBusCachedPlugin_fetchPc_output_valid = 
        ((~ (IData)(vlSelf->IBusCachedPlugin_fetcherHalt)) 
         & (IData)(vlSelf->IBusCachedPlugin_fetchPc_booted));
    vlSelf->IBusCachedPlugin_iBusRsp_stages_0_input_valid 
        = vlSelf->IBusCachedPlugin_fetchPc_output_valid;
    vlSelf->IBusCachedPlugin_iBusRsp_stages_0_output_valid 
        = ((IData)(vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_0_input_ready) 
           & (IData)(vlSelf->IBusCachedPlugin_fetchPc_output_valid));
}

extern const VlUnpacked<CData/*0:0*/, 8> Vsonata__ConstPool__TABLE_h7aab630e_0;

VL_INLINE_OPT void Vsonata_VexRiscv___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__6(Vsonata_VexRiscv* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsonata_VexRiscv___nba_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__6\n"); );
    // Init
    CData/*2:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->when_MmuPlugin_l287 = (0U == (IData)(vlSelf->MmuPlugin_ports_0_entryToReplace_value));
    vlSelf->when_MmuPlugin_l287_1 = (1U == (IData)(vlSelf->MmuPlugin_ports_0_entryToReplace_value));
    vlSelf->when_MmuPlugin_l287_2 = (2U == (IData)(vlSelf->MmuPlugin_ports_0_entryToReplace_value));
    vlSelf->when_MmuPlugin_l287_3 = (3U == (IData)(vlSelf->MmuPlugin_ports_0_entryToReplace_value));
    vlSelf->when_MmuPlugin_l287_6 = (2U == (IData)(vlSelf->MmuPlugin_ports_1_entryToReplace_value));
    vlSelf->when_MmuPlugin_l287_4 = (0U == (IData)(vlSelf->MmuPlugin_ports_1_entryToReplace_value));
    vlSelf->when_MmuPlugin_l287_5 = (1U == (IData)(vlSelf->MmuPlugin_ports_1_entryToReplace_value));
    vlSelf->when_MmuPlugin_l287_7 = (3U == (IData)(vlSelf->MmuPlugin_ports_1_entryToReplace_value));
    vlSelf->MmuPlugin_shared_state_1 = vlSelf->__Vdly__MmuPlugin_shared_state_1;
    vlSelf->MmuPlugin_ports_0_entryToReplace_willOverflowIfInc 
        = vlSelf->when_MmuPlugin_l287_3;
    vlSelf->MmuPlugin_ports_1_entryToReplace_willOverflowIfInc 
        = vlSelf->when_MmuPlugin_l287_7;
    __Vtableidx2 = vlSelf->MmuPlugin_shared_state_1;
    vlSelf->MmuPlugin_dBusAccess_cmd_valid = Vsonata__ConstPool__TABLE_h7aab630e_0
        [__Vtableidx2];
    vlSelf->DBusCachedPlugin_forceDatapath = 0U;
    if (vlSelf->MmuPlugin_dBusAccess_cmd_valid) {
        if (vlSelf->when_DBusCachedPlugin_l623) {
            vlSelf->DBusCachedPlugin_forceDatapath = 1U;
        }
    }
}

VL_INLINE_OPT void Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__2(Vsonata_VexRiscv* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__2\n"); );
    // Body
    vlSelf->when_CsrPlugin_l747 = ((IData)(vlSelf->debugBus_haltReq) 
                                   & (IData)(vlSelf->CsrPlugin_running));
    vlSelf->when_CsrPlugin_l880 = ((IData)(vlSelf->debugMode) 
                                   | ((IData)(vlSelf->CsrPlugin_dcsr_step) 
                                      | (IData)(vlSelf->debugBus_haltReq)));
    vlSelf->CsrPlugin_thirdPartyWake = 0U;
    if (vlSelf->when_CsrPlugin_l880) {
        vlSelf->CsrPlugin_thirdPartyWake = 1U;
    }
}

VL_INLINE_OPT void Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__3(Vsonata_VexRiscv* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__3\n"); );
    // Body
    vlSelf->IBusCachedPlugin_cache__DOT__io_mem_cmd_fire 
        = ((IData)(vlSelf->iBus_cmd_valid) & (IData)(vlSelf->iBus_cmd_ready));
    if (vlSelf->iBus_rsp_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_15_valid 
            = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willOverflowIfInc;
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_14_valid 
            = (0xeU == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value));
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_13_valid 
            = (0xdU == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value));
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_12_valid 
            = (0xcU == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value));
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_11_valid 
            = (0xbU == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value));
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_10_valid 
            = (0xaU == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value));
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_9_valid 
            = (9U == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value));
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_8_valid 
            = (8U == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value));
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_7_valid 
            = (7U == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value));
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_6_valid 
            = (6U == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value));
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_5_valid 
            = (5U == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value));
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_4_valid 
            = (4U == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value));
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_3_valid 
            = (3U == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value));
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_2_valid 
            = (2U == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value));
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_1_valid 
            = (1U == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value));
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_0_valid 
            = (0U == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value));
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_fire = 0U;
        if (vlSelf->IBusCachedPlugin_cache__DOT__when_InstructionCache_l401) {
            vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_fire = 1U;
        }
    } else {
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_15_valid = 0U;
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_14_valid = 0U;
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_13_valid = 0U;
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_12_valid = 0U;
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_11_valid = 0U;
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_10_valid = 0U;
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_9_valid = 0U;
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_8_valid = 0U;
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_7_valid = 0U;
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_6_valid = 0U;
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_5_valid = 0U;
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_4_valid = 0U;
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_3_valid = 0U;
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_2_valid = 0U;
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_1_valid = 0U;
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_0_valid = 0U;
        vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_fire = 0U;
    }
    vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_s2mPipe_ready 
        = vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_ready;
    if (vlSelf->when_Stream_l372) {
        vlSelf->cores_0_cpu_logic_cpu_dataCache_1_io_mem_cmd_s2mPipe_ready = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_1 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_15_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_1 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_2 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_14_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_2 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_3 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_13_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_3 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_4 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_12_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_4 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_5 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_11_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_5 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_6 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_10_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_6 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_7 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_9_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_7 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_8 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_8_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_8 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_9 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_7_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_9 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_10 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_6_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_10 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_11 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_5_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_11 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_12 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_4_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_12 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_13 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_3_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_13 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_14 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_2_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_14 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_15 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_1_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_15 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_16 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_data_0_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_16 = 1U;
    }
}

VL_INLINE_OPT void Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__4(Vsonata_VexRiscv* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__4\n"); );
    // Body
    vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_27 = 0U;
    if (vlSelf->execute_CsrPlugin_csr_3073) {
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_27 
            = (IData)(vlSelf->utime);
    }
    vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_28 = 0U;
    if (vlSelf->execute_CsrPlugin_csr_3201) {
        vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_28 
            = (IData)((vlSelf->utime >> 0x20U));
    }
}

VL_INLINE_OPT void Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__5(Vsonata_VexRiscv* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__5\n"); );
    // Body
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_0_payload_data_error 
        = ((IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_hadError) 
           | (IData)(vlSelf->iBus_rsp_payload_error));
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_1_payload_data_error 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_0_payload_data_error;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_2_payload_data_error 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_0_payload_data_error;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_3_payload_data_error 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_0_payload_data_error;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_4_payload_data_error 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_0_payload_data_error;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_5_payload_data_error 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_0_payload_data_error;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_6_payload_data_error 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_0_payload_data_error;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_7_payload_data_error 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_0_payload_data_error;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_8_payload_data_error 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_0_payload_data_error;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_9_payload_data_error 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_0_payload_data_error;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_10_payload_data_error 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_0_payload_data_error;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_11_payload_data_error 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_0_payload_data_error;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_12_payload_data_error 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_0_payload_data_error;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_13_payload_data_error 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_0_payload_data_error;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_14_payload_data_error 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_0_payload_data_error;
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_15_payload_data_error 
        = vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_0_payload_data_error;
}

extern const VlUnpacked<CData/*0:0*/, 64> Vsonata__ConstPool__TABLE_hbafc4101_0;

VL_INLINE_OPT void Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__6(Vsonata_VexRiscv* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__6\n"); );
    // Init
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    __Vtableidx3 = (((IData)(vlSelf->CsrPlugin_dcsr_stepLogic_stateReg) 
                     << 4U) | (((IData)(vlSelf->CsrPlugin_inject_cmd_valid) 
                                << 3U) | (((IData)(vlSelf->when_CsrPlugin_l753) 
                                           << 2U) | 
                                          (((IData)(vlSelf->CsrPlugin_timeout_state) 
                                            << 1U) 
                                           | (IData)(vlSelf->CsrPlugin_timeout_counter_willOverflow)))));
    vlSelf->CsrPlugin_timeout_stateRise = Vsonata__ConstPool__TABLE_hbafc4101_0
        [__Vtableidx3];
    vlSelf->CsrPlugin_timeout_counter_willClear = 0U;
    if (vlSelf->when_CsrPlugin_l753) {
        vlSelf->CsrPlugin_timeout_counter_willClear = 1U;
    }
    if (vlSelf->CsrPlugin_inject_cmd_valid) {
        vlSelf->CsrPlugin_timeout_counter_willClear = 1U;
    }
    if ((1U != (IData)(vlSelf->CsrPlugin_dcsr_stepLogic_stateReg))) {
        if ((2U == (IData)(vlSelf->CsrPlugin_dcsr_stepLogic_stateReg))) {
            vlSelf->CsrPlugin_timeout_counter_willClear = 1U;
        }
    }
    vlSelf->CsrPlugin_timeout_counter_valueNext = ((IData)(vlSelf->CsrPlugin_timeout_counter_willOverflow)
                                                    ? 0U
                                                    : 
                                                   (7U 
                                                    & ((IData)(vlSelf->CsrPlugin_timeout_counter_value) 
                                                       + (IData)(vlSelf->_zz_CsrPlugin_timeout_counter_valueNext))));
    if (vlSelf->CsrPlugin_timeout_counter_willClear) {
        vlSelf->CsrPlugin_timeout_counter_valueNext = 0U;
    }
}

VL_INLINE_OPT void Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__7(Vsonata_VexRiscv* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__7\n"); );
    // Body
    vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port 
        = ((vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_0_payload_data_address 
            << 2U) | (((IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_0_payload_data_error) 
                       << 1U) | (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_0_payload_data_valid)));
    vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_1_tags_port 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_2_tags_port 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_3_tags_port 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_4_tags_port 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_5_tags_port 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_6_tags_port 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_7_tags_port 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_8_tags_port 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_9_tags_port 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_10_tags_port 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_11_tags_port 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_12_tags_port 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_13_tags_port 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_14_tags_port 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_15_tags_port 
        = vlSelf->IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port;
}

extern const VlUnpacked<CData/*0:0*/, 512> Vsonata__ConstPool__TABLE_h65d79110_0;
extern const VlUnpacked<CData/*1:0*/, 512> Vsonata__ConstPool__TABLE_h1f02f6c3_0;

VL_INLINE_OPT void Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__8(Vsonata_VexRiscv* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__8\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*8:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelf->MmuPlugin_ports_0_entryToReplace_willOverflow 
        = ((IData)(vlSelf->when_MmuPlugin_l287_3) & (IData)(vlSelf->MmuPlugin_ports_0_entryToReplace_willIncrement));
    vlSelf->MmuPlugin_ports_1_entryToReplace_willOverflow 
        = ((IData)(vlSelf->when_MmuPlugin_l287_7) & (IData)(vlSelf->MmuPlugin_ports_1_entryToReplace_willIncrement));
    vlSelf->IBusCachedPlugin_mmuBus_busy = ((0U != (IData)(vlSelf->MmuPlugin_shared_state_1)) 
                                            & (IData)(vlSelf->when_MmuPlugin_l281));
    vlSelf->MmuPlugin_dBusAccess_cmd_payload_address = 0U;
    if ((1U & (~ ((IData)(vlSelf->MmuPlugin_shared_state_1) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->MmuPlugin_shared_state_1))) {
            if ((1U & (IData)(vlSelf->MmuPlugin_shared_state_1))) {
                vlSelf->MmuPlugin_dBusAccess_cmd_payload_address 
                    = (((IData)(vlSelf->MmuPlugin_shared_pteBuffer_PPN1) 
                        << 0x16U) | (((IData)(vlSelf->MmuPlugin_shared_pteBuffer_PPN0) 
                                      << 0xcU) | ((IData)(vlSelf->MmuPlugin_shared_vpn_0) 
                                                  << 2U)));
            }
        } else if ((1U & (IData)(vlSelf->MmuPlugin_shared_state_1))) {
            vlSelf->MmuPlugin_dBusAccess_cmd_payload_address 
                = ((vlSelf->MmuPlugin_satp_ppn << 0xcU) 
                   | ((IData)(vlSelf->MmuPlugin_shared_vpn_1) 
                      << 2U));
        }
    }
    vlSelf->DBusCachedPlugin_mmuBus_busy = ((0U != (IData)(vlSelf->MmuPlugin_shared_state_1)) 
                                            & (IData)(vlSelf->when_MmuPlugin_l281_1));
    vlSelf->execute_MEMORY_AMO = vlSelf->decode_to_execute_MEMORY_AMO;
    vlSelf->dataCache_1_io_cpu_execute_args_wr = vlSelf->execute_MEMORY_WR;
    vlSelf->execute_MEMORY_LRSC = vlSelf->decode_to_execute_MEMORY_LRSC;
    vlSelf->dataCache_1_io_cpu_execute_args_size = vlSelf->execute_DBusCachedPlugin_size;
    vlSelf->dataCache_1_io_cpu_execute_isValid = ((IData)(vlSelf->execute_arbitration_isValid) 
                                                  & (IData)(vlSelf->execute_MEMORY_ENABLE));
    __Vtableidx1 = (((IData)(vlSelf->when_CsrPlugin_l1671) 
                     << 8U) | (((IData)(vlSelf->CsrPlugin_pipelineLiberator_active) 
                                << 7U) | (((IData)(vlSelf->CsrPlugin_rescheduleLogic_rescheduleNext) 
                                           << 6U) | 
                                          (((IData)(vlSelf->CsrPlugin_trigger_decodeBreak_enabled) 
                                            << 5U) 
                                           | (((IData)(vlSelf->decode_arbitration_isValid) 
                                               << 4U) 
                                              | (((IData)(vlSelf->CsrPlugin_dcsr_stepLogic_stateReg) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->when_HazardSimplePlugin_l113) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->MmuPlugin_dBusAccess_cmd_valid))))))));
    vlSelf->decode_arbitration_haltByOther = Vsonata__ConstPool__TABLE_h65d79110_0
        [__Vtableidx1];
    vlSelf->MmuPlugin_dBusAccess_cmd_ready = 0U;
    vlSelf->IBusCachedPlugin_iBusRsp_stages_1_halt = 0U;
    if (vlSelf->IBusCachedPlugin_cache_io_cpu_prefetch_haltIt) {
        vlSelf->IBusCachedPlugin_iBusRsp_stages_1_halt = 1U;
    }
    if (vlSelf->IBusCachedPlugin_mmuBus_busy) {
        vlSelf->IBusCachedPlugin_iBusRsp_stages_1_halt = 1U;
    }
    vlSelf->dataCache_1_io_cpu_execute_address = vlSelf->execute_SRC_ADD;
    if (vlSelf->MmuPlugin_dBusAccess_cmd_valid) {
        if (vlSelf->when_DBusCachedPlugin_l623) {
            vlSelf->execute_MEMORY_AMO = 0U;
            vlSelf->dataCache_1_io_cpu_execute_args_wr = 0U;
            vlSelf->execute_MEMORY_LRSC = 0U;
            vlSelf->dataCache_1_io_cpu_execute_args_size 
                = vlSelf->MmuPlugin_dBusAccess_cmd_payload_size;
            if (vlSelf->when_DBusCachedPlugin_l624) {
                vlSelf->dataCache_1_io_cpu_execute_isValid = 1U;
                vlSelf->MmuPlugin_dBusAccess_cmd_ready 
                    = vlSelf->when_Fetcher_l331_3;
            }
            vlSelf->dataCache_1_io_cpu_execute_address 
                = vlSelf->MmuPlugin_dBusAccess_cmd_payload_address;
        }
    }
    vlSelf->when_DBusCachedPlugin_l356 = ((IData)(vlSelf->DBusCachedPlugin_mmuBus_busy) 
                                          & ((IData)(vlSelf->decode_arbitration_isValid) 
                                             & (IData)(vlSelf->decode_MEMORY_ENABLE)));
    vlSelf->dataCache_1__DOT__io_cpu_execute_args_isAmo 
        = vlSelf->execute_MEMORY_AMO;
    vlSelf->dataCache_1__DOT__io_cpu_execute_args_wr 
        = vlSelf->dataCache_1_io_cpu_execute_args_wr;
    vlSelf->dataCache_1_io_cpu_execute_args_isLrsc = 0U;
    if (vlSelf->execute_MEMORY_LRSC) {
        vlSelf->dataCache_1_io_cpu_execute_args_isLrsc = 1U;
    }
    vlSelf->dataCache_1__DOT__io_cpu_execute_args_size 
        = vlSelf->dataCache_1_io_cpu_execute_args_size;
    vlSelf->dataCache_1__DOT___zz_stage0_mask = 0U;
    if ((0U == (IData)(vlSelf->dataCache_1_io_cpu_execute_args_size))) {
        vlSelf->dataCache_1__DOT___zz_stage0_mask = 1U;
    } else if ((1U == (IData)(vlSelf->dataCache_1_io_cpu_execute_args_size))) {
        vlSelf->dataCache_1__DOT___zz_stage0_mask = 3U;
    } else if ((2U == (IData)(vlSelf->dataCache_1_io_cpu_execute_args_size))) {
        vlSelf->dataCache_1__DOT___zz_stage0_mask = 0xfU;
    }
    vlSelf->dataCache_1__DOT__io_cpu_execute_isValid 
        = vlSelf->dataCache_1_io_cpu_execute_isValid;
    vlSelf->DBusCachedPlugin_mmuBus_cmd_0_isValid = vlSelf->dataCache_1_io_cpu_execute_isValid;
    vlSelf->dataCache_1__DOT__when_DataCache_l667 = 
        ((IData)(vlSelf->when_MmuPlugin_l117_1) & (IData)(vlSelf->dataCache_1_io_cpu_execute_isValid));
    vlSelf->decode_arbitration_isStuckByOthers = ((IData)(vlSelf->decode_arbitration_haltByOther) 
                                                  | ((IData)(vlSelf->execute_arbitration_isStuck) 
                                                     | (IData)(vlSelf->__VdfgRegularize_h16d7421c_8_31)));
    vlSelf->execute_IS_DBUS_SHARING = ((IData)(vlSelf->MmuPlugin_dBusAccess_cmd_ready) 
                                       & (IData)(vlSelf->MmuPlugin_dBusAccess_cmd_valid));
    vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_1_input_ready 
        = (1U & (~ (IData)(vlSelf->IBusCachedPlugin_iBusRsp_stages_1_halt)));
    vlSelf->dataCache_1__DOT__io_cpu_execute_address 
        = vlSelf->dataCache_1_io_cpu_execute_address;
    vlSelf->execute_MEMORY_VIRTUAL_ADDRESS = vlSelf->dataCache_1_io_cpu_execute_address;
    vlSelf->dataCache_1__DOT___zz_stage0_dataColisions 
        = (0x3ffU & (vlSelf->dataCache_1_io_cpu_execute_address 
                     >> 2U));
    vlSelf->decode_arbitration_haltItself = 0U;
    if (vlSelf->when_DBusCachedPlugin_l356) {
        vlSelf->decode_arbitration_haltItself = 1U;
    }
    if ((2U == (IData)(vlSelf->IBusCachedPlugin_injector_port_state))) {
        vlSelf->decode_arbitration_haltItself = 1U;
    }
    vlSelf->dataCache_1__DOT__io_cpu_execute_args_isLrsc 
        = vlSelf->dataCache_1_io_cpu_execute_args_isLrsc;
    vlSelf->dataCache_1__DOT__stage0_mask = (0xfU & 
                                             ((IData)(vlSelf->dataCache_1__DOT___zz_stage0_mask) 
                                              << (3U 
                                                  & vlSelf->dataCache_1_io_cpu_execute_address)));
    vlSelf->dataCache_1__DOT__tagsReadCmd_payload = 0U;
    vlSelf->dataCache_1__DOT__tagsReadCmd_valid = 0U;
    vlSelf->dataCache_1__DOT__dataReadCmd_payload = 0U;
    vlSelf->dataCache_1__DOT__dataReadCmd_valid = 0U;
    if (vlSelf->dataCache_1__DOT__when_DataCache_l667) {
        vlSelf->dataCache_1__DOT__tagsReadCmd_payload 
            = (0x3fU & (vlSelf->dataCache_1_io_cpu_execute_address 
                        >> 6U));
        vlSelf->dataCache_1__DOT__tagsReadCmd_valid = 1U;
        vlSelf->dataCache_1__DOT__dataReadCmd_payload 
            = (0x3ffU & (vlSelf->dataCache_1_io_cpu_execute_address 
                         >> 2U));
        vlSelf->dataCache_1__DOT__dataReadCmd_valid = 1U;
    }
    if (vlSelf->execute_IS_DBUS_SHARING) {
        vlSelf->MmuPlugin_dBusAccess_cmd_fire = 1U;
        vlSelf->DBusCachedPlugin_mmuBus_cmd_0_bypassTranslation = 0U;
        vlSelf->DBusCachedPlugin_mmuBus_cmd_0_bypassTranslation = 1U;
    } else {
        vlSelf->MmuPlugin_dBusAccess_cmd_fire = 0U;
        vlSelf->DBusCachedPlugin_mmuBus_cmd_0_bypassTranslation = 0U;
    }
    vlSelf->IBusCachedPlugin_iBusRsp_stages_1_output_valid 
        = ((IData)(vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_1_input_ready) 
           & (IData)(vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_1_input_valid_1));
    vlSelf->decode_arbitration_isStuck = ((IData)(vlSelf->decode_arbitration_haltItself) 
                                          | (IData)(vlSelf->decode_arbitration_isStuckByOthers));
    vlSelf->dataCache_1__DOT__stage0_dataColisions 
        = ((0xfffeU & (IData)(vlSelf->dataCache_1__DOT__stage0_dataColisions)) 
           | ((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
               & ((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                  == (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions))) 
              & (0U != ((IData)(vlSelf->dataCache_1__DOT__stage0_mask) 
                        & (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions_1)))));
    vlSelf->dataCache_1__DOT__stage0_dataColisions 
        = ((0xfffdU & (IData)(vlSelf->dataCache_1__DOT__stage0_dataColisions)) 
           | (0xfffffffeU & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 1U) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions)) 
                                 << 1U)) & ((0U != 
                                             ((IData)(vlSelf->dataCache_1__DOT__stage0_mask) 
                                              & (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions_1))) 
                                            << 1U))));
    vlSelf->dataCache_1__DOT__stage0_dataColisions 
        = ((0xfffbU & (IData)(vlSelf->dataCache_1__DOT__stage0_dataColisions)) 
           | (0xfffffffcU & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 2U) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions)) 
                                 << 2U)) & ((0U != 
                                             ((IData)(vlSelf->dataCache_1__DOT__stage0_mask) 
                                              & (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions_1))) 
                                            << 2U))));
    vlSelf->dataCache_1__DOT__stage0_dataColisions 
        = ((0xfff7U & (IData)(vlSelf->dataCache_1__DOT__stage0_dataColisions)) 
           | (0xfffffff8U & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 3U) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions)) 
                                 << 3U)) & ((0U != 
                                             ((IData)(vlSelf->dataCache_1__DOT__stage0_mask) 
                                              & (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions_1))) 
                                            << 3U))));
    vlSelf->dataCache_1__DOT__stage0_dataColisions 
        = ((0xffefU & (IData)(vlSelf->dataCache_1__DOT__stage0_dataColisions)) 
           | (0xfffffff0U & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 4U) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions)) 
                                 << 4U)) & ((0U != 
                                             ((IData)(vlSelf->dataCache_1__DOT__stage0_mask) 
                                              & (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions_1))) 
                                            << 4U))));
    vlSelf->dataCache_1__DOT__stage0_dataColisions 
        = ((0xffdfU & (IData)(vlSelf->dataCache_1__DOT__stage0_dataColisions)) 
           | (0xffffffe0U & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 5U) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions)) 
                                 << 5U)) & ((0U != 
                                             ((IData)(vlSelf->dataCache_1__DOT__stage0_mask) 
                                              & (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions_1))) 
                                            << 5U))));
    vlSelf->dataCache_1__DOT__stage0_dataColisions 
        = ((0xffbfU & (IData)(vlSelf->dataCache_1__DOT__stage0_dataColisions)) 
           | (0xffffffc0U & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 6U) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions)) 
                                 << 6U)) & ((0U != 
                                             ((IData)(vlSelf->dataCache_1__DOT__stage0_mask) 
                                              & (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions_1))) 
                                            << 6U))));
    vlSelf->dataCache_1__DOT__stage0_dataColisions 
        = ((0xff7fU & (IData)(vlSelf->dataCache_1__DOT__stage0_dataColisions)) 
           | (0xffffff80U & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 7U) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions)) 
                                 << 7U)) & ((0U != 
                                             ((IData)(vlSelf->dataCache_1__DOT__stage0_mask) 
                                              & (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions_1))) 
                                            << 7U))));
    vlSelf->dataCache_1__DOT__stage0_dataColisions 
        = ((0xfeffU & (IData)(vlSelf->dataCache_1__DOT__stage0_dataColisions)) 
           | (0xffffff00U & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 8U) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions)) 
                                 << 8U)) & ((0U != 
                                             ((IData)(vlSelf->dataCache_1__DOT__stage0_mask) 
                                              & (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions_1))) 
                                            << 8U))));
    vlSelf->dataCache_1__DOT__stage0_dataColisions 
        = ((0xfdffU & (IData)(vlSelf->dataCache_1__DOT__stage0_dataColisions)) 
           | (0xfffffe00U & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 9U) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions)) 
                                 << 9U)) & ((0U != 
                                             ((IData)(vlSelf->dataCache_1__DOT__stage0_mask) 
                                              & (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions_1))) 
                                            << 9U))));
    vlSelf->dataCache_1__DOT__stage0_dataColisions 
        = ((0xfbffU & (IData)(vlSelf->dataCache_1__DOT__stage0_dataColisions)) 
           | (0xfffffc00U & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 0xaU) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions)) 
                                 << 0xaU)) & ((0U != 
                                               ((IData)(vlSelf->dataCache_1__DOT__stage0_mask) 
                                                & (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions_1))) 
                                              << 0xaU))));
    vlSelf->dataCache_1__DOT__stage0_dataColisions 
        = ((0xf7ffU & (IData)(vlSelf->dataCache_1__DOT__stage0_dataColisions)) 
           | (0xfffff800U & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 0xbU) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions)) 
                                 << 0xbU)) & ((0U != 
                                               ((IData)(vlSelf->dataCache_1__DOT__stage0_mask) 
                                                & (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions_1))) 
                                              << 0xbU))));
    vlSelf->dataCache_1__DOT__stage0_dataColisions 
        = ((0xefffU & (IData)(vlSelf->dataCache_1__DOT__stage0_dataColisions)) 
           | (0xfffff000U & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 0xcU) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions)) 
                                 << 0xcU)) & ((0U != 
                                               ((IData)(vlSelf->dataCache_1__DOT__stage0_mask) 
                                                & (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions_1))) 
                                              << 0xcU))));
    vlSelf->dataCache_1__DOT__stage0_dataColisions 
        = ((0xdfffU & (IData)(vlSelf->dataCache_1__DOT__stage0_dataColisions)) 
           | (0xffffe000U & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 0xdU) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions)) 
                                 << 0xdU)) & ((0U != 
                                               ((IData)(vlSelf->dataCache_1__DOT__stage0_mask) 
                                                & (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions_1))) 
                                              << 0xdU))));
    vlSelf->dataCache_1__DOT__stage0_dataColisions 
        = ((0xbfffU & (IData)(vlSelf->dataCache_1__DOT__stage0_dataColisions)) 
           | (0xffffc000U & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 0xeU) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions)) 
                                 << 0xeU)) & ((0U != 
                                               ((IData)(vlSelf->dataCache_1__DOT__stage0_mask) 
                                                & (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions_1))) 
                                              << 0xeU))));
    vlSelf->dataCache_1__DOT__stage0_dataColisions 
        = ((0x7fffU & (IData)(vlSelf->dataCache_1__DOT__stage0_dataColisions)) 
           | (0xffff8000U & (((((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_valid) 
                                << 0xfU) & (IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & (((IData)(vlSelf->dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions)) 
                                 << 0xfU)) & ((0U != 
                                               ((IData)(vlSelf->dataCache_1__DOT__stage0_mask) 
                                                & (IData)(vlSelf->dataCache_1__DOT___zz_stage0_dataColisions_1))) 
                                              << 0xfU))));
    vlSelf->dataCache_1__DOT___zz_ways_0_tagsReadRsp_valid 
        = ((IData)(vlSelf->when_MmuPlugin_l117_1) & (IData)(vlSelf->dataCache_1__DOT__tagsReadCmd_valid));
    vlSelf->dataCache_1__DOT__ways_0_data__DOT__rd_addr 
        = vlSelf->dataCache_1__DOT__dataReadCmd_payload;
    vlSelf->dataCache_1__DOT__ways_1_data__DOT__rd_addr 
        = vlSelf->dataCache_1__DOT__dataReadCmd_payload;
    vlSelf->dataCache_1__DOT__ways_2_data__DOT__rd_addr 
        = vlSelf->dataCache_1__DOT__dataReadCmd_payload;
    vlSelf->dataCache_1__DOT__ways_3_data__DOT__rd_addr 
        = vlSelf->dataCache_1__DOT__dataReadCmd_payload;
    vlSelf->dataCache_1__DOT__ways_4_data__DOT__rd_addr 
        = vlSelf->dataCache_1__DOT__dataReadCmd_payload;
    vlSelf->dataCache_1__DOT__ways_5_data__DOT__rd_addr 
        = vlSelf->dataCache_1__DOT__dataReadCmd_payload;
    vlSelf->dataCache_1__DOT__ways_6_data__DOT__rd_addr 
        = vlSelf->dataCache_1__DOT__dataReadCmd_payload;
    vlSelf->dataCache_1__DOT__ways_7_data__DOT__rd_addr 
        = vlSelf->dataCache_1__DOT__dataReadCmd_payload;
    vlSelf->dataCache_1__DOT__ways_8_data__DOT__rd_addr 
        = vlSelf->dataCache_1__DOT__dataReadCmd_payload;
    vlSelf->dataCache_1__DOT__ways_9_data__DOT__rd_addr 
        = vlSelf->dataCache_1__DOT__dataReadCmd_payload;
    vlSelf->dataCache_1__DOT__ways_10_data__DOT__rd_addr 
        = vlSelf->dataCache_1__DOT__dataReadCmd_payload;
    vlSelf->dataCache_1__DOT__ways_11_data__DOT__rd_addr 
        = vlSelf->dataCache_1__DOT__dataReadCmd_payload;
    vlSelf->dataCache_1__DOT__ways_12_data__DOT__rd_addr 
        = vlSelf->dataCache_1__DOT__dataReadCmd_payload;
    vlSelf->dataCache_1__DOT__ways_13_data__DOT__rd_addr 
        = vlSelf->dataCache_1__DOT__dataReadCmd_payload;
    vlSelf->dataCache_1__DOT__ways_14_data__DOT__rd_addr 
        = vlSelf->dataCache_1__DOT__dataReadCmd_payload;
    vlSelf->dataCache_1__DOT__ways_15_data__DOT__rd_addr 
        = vlSelf->dataCache_1__DOT__dataReadCmd_payload;
    vlSelf->dataCache_1__DOT__ways_0_data_rd_en = ((IData)(vlSelf->when_MmuPlugin_l117_1) 
                                                   & (IData)(vlSelf->dataCache_1__DOT__dataReadCmd_valid));
    vlSelf->MmuPlugin_ports_1_requireMmuLockupCalc 
        = ((~ (IData)(vlSelf->DBusCachedPlugin_mmuBus_cmd_0_bypassTranslation)) 
           & (IData)(vlSelf->MmuPlugin_satp_mode));
    if (vlSelf->when_MmuPlugin_l131_1) {
        vlSelf->MmuPlugin_ports_1_requireMmuLockupCalc = 0U;
    }
    if (vlSelf->when_MmuPlugin_l132_1) {
        if (vlSelf->when_MmuPlugin_l134) {
            vlSelf->MmuPlugin_ports_1_requireMmuLockupCalc = 0U;
        }
    }
    vlSelf->when_CsrPlugin_l1403 = (1U & (~ (IData)(vlSelf->decode_arbitration_isStuck)));
    vlSelf->dataCache_1__DOT___zz_ways_1_tagsReadRsp_valid 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tagsReadRsp_valid;
    vlSelf->dataCache_1__DOT___zz_ways_2_tagsReadRsp_valid 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tagsReadRsp_valid;
    vlSelf->dataCache_1__DOT___zz_ways_3_tagsReadRsp_valid 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tagsReadRsp_valid;
    vlSelf->dataCache_1__DOT___zz_ways_4_tagsReadRsp_valid 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tagsReadRsp_valid;
    vlSelf->dataCache_1__DOT___zz_ways_5_tagsReadRsp_valid 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tagsReadRsp_valid;
    vlSelf->dataCache_1__DOT___zz_ways_6_tagsReadRsp_valid 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tagsReadRsp_valid;
    vlSelf->dataCache_1__DOT___zz_ways_7_tagsReadRsp_valid 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tagsReadRsp_valid;
    vlSelf->dataCache_1__DOT___zz_ways_8_tagsReadRsp_valid 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tagsReadRsp_valid;
    vlSelf->dataCache_1__DOT___zz_ways_9_tagsReadRsp_valid 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tagsReadRsp_valid;
    vlSelf->dataCache_1__DOT___zz_ways_10_tagsReadRsp_valid 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tagsReadRsp_valid;
    vlSelf->dataCache_1__DOT___zz_ways_11_tagsReadRsp_valid 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tagsReadRsp_valid;
    vlSelf->dataCache_1__DOT___zz_ways_12_tagsReadRsp_valid 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tagsReadRsp_valid;
    vlSelf->dataCache_1__DOT___zz_ways_13_tagsReadRsp_valid 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tagsReadRsp_valid;
    vlSelf->dataCache_1__DOT___zz_ways_14_tagsReadRsp_valid 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tagsReadRsp_valid;
    vlSelf->dataCache_1__DOT___zz_ways_15_tagsReadRsp_valid 
        = vlSelf->dataCache_1__DOT___zz_ways_0_tagsReadRsp_valid;
    vlSelf->dataCache_1__DOT__ways_0_data__DOT__rd_en 
        = vlSelf->dataCache_1__DOT__ways_0_data_rd_en;
    vlSelf->dataCache_1__DOT__ways_1_data_rd_en = vlSelf->dataCache_1__DOT__ways_0_data_rd_en;
    vlSelf->dataCache_1__DOT__ways_2_data_rd_en = vlSelf->dataCache_1__DOT__ways_0_data_rd_en;
    vlSelf->dataCache_1__DOT__ways_3_data_rd_en = vlSelf->dataCache_1__DOT__ways_0_data_rd_en;
    vlSelf->dataCache_1__DOT__ways_4_data_rd_en = vlSelf->dataCache_1__DOT__ways_0_data_rd_en;
    vlSelf->dataCache_1__DOT__ways_5_data_rd_en = vlSelf->dataCache_1__DOT__ways_0_data_rd_en;
    vlSelf->dataCache_1__DOT__ways_6_data_rd_en = vlSelf->dataCache_1__DOT__ways_0_data_rd_en;
    vlSelf->dataCache_1__DOT__ways_7_data_rd_en = vlSelf->dataCache_1__DOT__ways_0_data_rd_en;
    vlSelf->dataCache_1__DOT__ways_8_data_rd_en = vlSelf->dataCache_1__DOT__ways_0_data_rd_en;
    vlSelf->dataCache_1__DOT__ways_9_data_rd_en = vlSelf->dataCache_1__DOT__ways_0_data_rd_en;
    vlSelf->dataCache_1__DOT__ways_10_data_rd_en = vlSelf->dataCache_1__DOT__ways_0_data_rd_en;
    vlSelf->dataCache_1__DOT__ways_11_data_rd_en = vlSelf->dataCache_1__DOT__ways_0_data_rd_en;
    vlSelf->dataCache_1__DOT__ways_12_data_rd_en = vlSelf->dataCache_1__DOT__ways_0_data_rd_en;
    vlSelf->dataCache_1__DOT__ways_13_data_rd_en = vlSelf->dataCache_1__DOT__ways_0_data_rd_en;
    vlSelf->dataCache_1__DOT__ways_14_data_rd_en = vlSelf->dataCache_1__DOT__ways_0_data_rd_en;
    vlSelf->dataCache_1__DOT__ways_15_data_rd_en = vlSelf->dataCache_1__DOT__ways_0_data_rd_en;
    vlSelf->when_Fetcher_l391 = vlSelf->when_CsrPlugin_l1403;
    vlSelf->IBusCachedPlugin_iBusRsp_stages_3_output_ready 
        = vlSelf->when_CsrPlugin_l1403;
    vlSelf->IBusCachedPlugin_iBusRsp_output_ready = vlSelf->when_CsrPlugin_l1403;
    vlSelf->IBusCachedPlugin_iBusRsp_flush = ((IData)(vlSelf->decode_arbitration_removeIt) 
                                              | (((IData)(vlSelf->when_CsrPlugin_l1403) 
                                                  & (IData)(vlSelf->decode_arbitration_flushNext)) 
                                                 | (IData)(vlSelf->IBusCachedPlugin_iBusRsp_redoFetch)));
    vlSelf->when_Pipeline_l154 = ((IData)(vlSelf->when_CsrPlugin_l1403) 
                                  & (~ (IData)(vlSelf->decode_arbitration_removeIt)));
    vlSelf->IBusCachedPlugin_iBusRsp_stages_2_output_ready 
        = ((IData)(vlSelf->when_CsrPlugin_l1403) & (IData)(vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_3_input_ready));
    vlSelf->dataCache_1__DOT__ways_1_data__DOT__rd_en 
        = vlSelf->dataCache_1__DOT__ways_1_data_rd_en;
    vlSelf->dataCache_1__DOT__ways_2_data__DOT__rd_en 
        = vlSelf->dataCache_1__DOT__ways_2_data_rd_en;
    vlSelf->dataCache_1__DOT__ways_3_data__DOT__rd_en 
        = vlSelf->dataCache_1__DOT__ways_3_data_rd_en;
    vlSelf->dataCache_1__DOT__ways_4_data__DOT__rd_en 
        = vlSelf->dataCache_1__DOT__ways_4_data_rd_en;
    vlSelf->dataCache_1__DOT__ways_5_data__DOT__rd_en 
        = vlSelf->dataCache_1__DOT__ways_5_data_rd_en;
    vlSelf->dataCache_1__DOT__ways_6_data__DOT__rd_en 
        = vlSelf->dataCache_1__DOT__ways_6_data_rd_en;
    vlSelf->dataCache_1__DOT__ways_7_data__DOT__rd_en 
        = vlSelf->dataCache_1__DOT__ways_7_data_rd_en;
    vlSelf->dataCache_1__DOT__ways_8_data__DOT__rd_en 
        = vlSelf->dataCache_1__DOT__ways_8_data_rd_en;
    vlSelf->dataCache_1__DOT__ways_9_data__DOT__rd_en 
        = vlSelf->dataCache_1__DOT__ways_9_data_rd_en;
    vlSelf->dataCache_1__DOT__ways_10_data__DOT__rd_en 
        = vlSelf->dataCache_1__DOT__ways_10_data_rd_en;
    vlSelf->dataCache_1__DOT__ways_11_data__DOT__rd_en 
        = vlSelf->dataCache_1__DOT__ways_11_data_rd_en;
    vlSelf->dataCache_1__DOT__ways_12_data__DOT__rd_en 
        = vlSelf->dataCache_1__DOT__ways_12_data_rd_en;
    vlSelf->dataCache_1__DOT__ways_13_data__DOT__rd_en 
        = vlSelf->dataCache_1__DOT__ways_13_data_rd_en;
    vlSelf->dataCache_1__DOT__ways_14_data__DOT__rd_en 
        = vlSelf->dataCache_1__DOT__ways_14_data_rd_en;
    vlSelf->dataCache_1__DOT__ways_15_data__DOT__rd_en 
        = vlSelf->dataCache_1__DOT__ways_15_data_rd_en;
    vlSelf->decode_arbitration_isMoving = vlSelf->when_Pipeline_l154;
    vlSelf->decode_arbitration_isFiring = ((IData)(vlSelf->decode_arbitration_isValid) 
                                           & (IData)(vlSelf->when_Pipeline_l154));
    vlSelf->when_Fetcher_l331_2 = vlSelf->IBusCachedPlugin_iBusRsp_stages_2_output_ready;
    vlSelf->IBusCachedPlugin_iBusRsp_stages_3_input_ready 
        = vlSelf->IBusCachedPlugin_iBusRsp_stages_2_output_ready;
    vlSelf->IBusCachedPlugin_iBusRsp_stages_2_output_m2sPipe_ready 
        = vlSelf->IBusCachedPlugin_iBusRsp_stages_2_output_ready;
    vlSelf->IBusCachedPlugin_cache__DOT__when_InstructionCache_l435 
        = vlSelf->IBusCachedPlugin_iBusRsp_stages_2_output_ready;
    vlSelf->IBusCachedPlugin_cache__DOT__when_InstructionCache_l459 
        = vlSelf->IBusCachedPlugin_iBusRsp_stages_2_output_ready;
    vlSelf->IBusCachedPlugin_cache__DOT__when_InstructionCache_l459_1 
        = vlSelf->IBusCachedPlugin_iBusRsp_stages_2_output_ready;
    vlSelf->IBusCachedPlugin_cache__DOT__when_InstructionCache_l459_2 
        = vlSelf->IBusCachedPlugin_iBusRsp_stages_2_output_ready;
    vlSelf->IBusCachedPlugin_cache_io_cpu_decode_isStuck 
        = (1U & (~ (IData)(vlSelf->IBusCachedPlugin_iBusRsp_stages_2_output_ready)));
    vlSelf->when_MmuPlugin_l117 = ((IData)(vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_2_input_ready) 
                                   & (IData)(vlSelf->IBusCachedPlugin_iBusRsp_stages_2_output_ready));
    __Vtableidx4 = (((IData)(vlSelf->CsrPlugin_dcsr_stepLogic_wantKill) 
                     << 8U) | (((IData)(vlSelf->CsrPlugin_dcsr_stepLogic_wantStart) 
                                << 7U) | (((IData)(vlSelf->CsrPlugin_enterHalt) 
                                           << 6U) | 
                                          (((IData)(vlSelf->when_CsrPlugin_l848) 
                                            << 5U) 
                                           | (((IData)(vlSelf->decode_arbitration_isFiring) 
                                               << 4U) 
                                              | (((IData)(vlSelf->when_CsrPlugin_l836) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->when_CsrPlugin_l830) 
                                                     << 2U) 
                                                    | (IData)(vlSelf->CsrPlugin_dcsr_stepLogic_stateReg))))))));
    vlSelf->CsrPlugin_dcsr_stepLogic_stateNext = Vsonata__ConstPool__TABLE_h1f02f6c3_0
        [__Vtableidx4];
    vlSelf->IBusCachedPlugin_cache__DOT__io_cpu_decode_isStuck 
        = vlSelf->IBusCachedPlugin_cache_io_cpu_decode_isStuck;
    vlSelf->IBusCachedPlugin_iBusRsp_stages_1_output_ready 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->when_Fetcher_l331_1 = vlSelf->when_MmuPlugin_l117;
    vlSelf->when_MmuPlugin_l124 = vlSelf->when_MmuPlugin_l117;
    vlSelf->when_MmuPlugin_l124_1 = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_iBusRsp_stages_2_input_ready 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_ready 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_0_dataMem_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_1_dataMem_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_2_dataMem_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_3_dataMem_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_4_dataMem_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_5_dataMem_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_6_dataMem_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_7_dataMem_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_8_dataMem_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_9_dataMem_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_10_dataMem_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_11_dataMem_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_12_dataMem_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_13_dataMem_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_14_dataMem_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_banksValue_15_dataMem_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_0_tag_valid_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_1_tag_valid_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_2_tag_valid_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_3_tag_valid_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_4_tag_valid_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_5_tag_valid_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_6_tag_valid_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_7_tag_valid_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_8_tag_valid_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_9_tag_valid_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_10_tag_valid_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_11_tag_valid_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_12_tag_valid_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_13_tag_valid_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_14_tag_valid_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_cache__DOT___zz_fetchStage_read_waysValues_15_tag_valid_1 
        = vlSelf->when_MmuPlugin_l117;
    vlSelf->IBusCachedPlugin_mmuBus_end = ((IData)(vlSelf->when_MmuPlugin_l117) 
                                           | (IData)(vlSelf->IBusCachedPlugin_externalFlush));
    vlSelf->IBusCachedPlugin_cache_io_cpu_fetch_isStuck 
        = (1U & (~ (IData)(vlSelf->when_MmuPlugin_l117)));
    vlSelf->IBusCachedPlugin_iBusRsp_stages_1_input_ready 
        = ((IData)(vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_1_input_ready) 
           & (IData)(vlSelf->when_MmuPlugin_l117));
    vlSelf->IBusCachedPlugin_cache__DOT__io_cpu_fetch_isStuck 
        = vlSelf->IBusCachedPlugin_cache_io_cpu_fetch_isStuck;
    vlSelf->IBusCachedPlugin_mmuBus_cmd_1_isStuck = vlSelf->IBusCachedPlugin_cache_io_cpu_fetch_isStuck;
    vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready 
        = vlSelf->IBusCachedPlugin_iBusRsp_stages_1_input_ready;
    vlSelf->when_Fetcher_l331 = vlSelf->IBusCachedPlugin_iBusRsp_stages_1_input_ready;
    vlSelf->IBusCachedPlugin_iBusRsp_stages_0_output_ready 
        = vlSelf->IBusCachedPlugin_iBusRsp_stages_1_input_ready;
    vlSelf->IBusCachedPlugin_mmuBus_cmd_0_isStuck = 
        (1U & (~ (IData)(vlSelf->IBusCachedPlugin_iBusRsp_stages_1_input_ready)));
    vlSelf->IBusCachedPlugin_fetchPc_pcRegPropagate = 0U;
    if (vlSelf->IBusCachedPlugin_iBusRsp_stages_1_input_ready) {
        vlSelf->IBusCachedPlugin_fetchPc_pcRegPropagate = 1U;
        vlSelf->IBusCachedPlugin_fetchPc_output_ready 
            = vlSelf->_zz_IBusCachedPlugin_iBusRsp_stages_0_input_ready;
    } else {
        vlSelf->IBusCachedPlugin_fetchPc_output_ready = 0U;
    }
    vlSelf->when_Fetcher_l133 = ((IData)(vlSelf->IBusCachedPlugin_fetchPc_correction) 
                                 | (IData)(vlSelf->IBusCachedPlugin_fetchPc_pcRegPropagate));
    vlSelf->IBusCachedPlugin_iBusRsp_stages_0_input_ready 
        = vlSelf->IBusCachedPlugin_fetchPc_output_ready;
    vlSelf->IBusCachedPlugin_fetchPc_output_fire = 
        ((IData)(vlSelf->IBusCachedPlugin_fetchPc_output_valid) 
         & (IData)(vlSelf->IBusCachedPlugin_fetchPc_output_ready));
    vlSelf->when_Fetcher_l133_1 = ((~ (IData)(vlSelf->IBusCachedPlugin_fetchPc_output_valid)) 
                                   & (IData)(vlSelf->IBusCachedPlugin_fetchPc_output_ready));
    vlSelf->when_Fetcher_l160 = ((IData)(vlSelf->IBusCachedPlugin_fetchPc_booted) 
                                 & ((IData)(vlSelf->IBusCachedPlugin_fetchPc_output_ready) 
                                    | (IData)(vlSelf->when_Fetcher_l133)));
}

VL_INLINE_OPT void Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__9(Vsonata_VexRiscv* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsonata_VexRiscv___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__9\n"); );
    // Body
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_15_valid 
        = ((IData)(vlSelf->IBusCachedPlugin_cache__DOT__when_InstructionCache_l338) 
           | ((IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willOverflowIfInc) 
              & (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_fire)));
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_14_valid 
        = ((IData)(vlSelf->IBusCachedPlugin_cache__DOT__when_InstructionCache_l338) 
           | ((0xeU == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value)) 
              & (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_fire)));
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_13_valid 
        = ((IData)(vlSelf->IBusCachedPlugin_cache__DOT__when_InstructionCache_l338) 
           | ((0xdU == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value)) 
              & (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_fire)));
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_12_valid 
        = ((IData)(vlSelf->IBusCachedPlugin_cache__DOT__when_InstructionCache_l338) 
           | ((0xcU == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value)) 
              & (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_fire)));
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_11_valid 
        = ((IData)(vlSelf->IBusCachedPlugin_cache__DOT__when_InstructionCache_l338) 
           | ((0xbU == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value)) 
              & (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_fire)));
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_10_valid 
        = ((IData)(vlSelf->IBusCachedPlugin_cache__DOT__when_InstructionCache_l338) 
           | ((0xaU == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value)) 
              & (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_fire)));
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_9_valid 
        = ((IData)(vlSelf->IBusCachedPlugin_cache__DOT__when_InstructionCache_l338) 
           | ((9U == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value)) 
              & (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_fire)));
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_8_valid 
        = ((IData)(vlSelf->IBusCachedPlugin_cache__DOT__when_InstructionCache_l338) 
           | ((8U == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value)) 
              & (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_fire)));
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_7_valid 
        = ((IData)(vlSelf->IBusCachedPlugin_cache__DOT__when_InstructionCache_l338) 
           | ((7U == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value)) 
              & (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_fire)));
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_6_valid 
        = ((IData)(vlSelf->IBusCachedPlugin_cache__DOT__when_InstructionCache_l338) 
           | ((6U == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value)) 
              & (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_fire)));
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_5_valid 
        = ((IData)(vlSelf->IBusCachedPlugin_cache__DOT__when_InstructionCache_l338) 
           | ((5U == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value)) 
              & (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_fire)));
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_4_valid 
        = ((IData)(vlSelf->IBusCachedPlugin_cache__DOT__when_InstructionCache_l338) 
           | ((4U == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value)) 
              & (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_fire)));
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_3_valid 
        = ((IData)(vlSelf->IBusCachedPlugin_cache__DOT__when_InstructionCache_l338) 
           | ((3U == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value)) 
              & (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_fire)));
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_2_valid 
        = ((IData)(vlSelf->IBusCachedPlugin_cache__DOT__when_InstructionCache_l338) 
           | ((2U == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value)) 
              & (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_fire)));
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_1_valid 
        = ((IData)(vlSelf->IBusCachedPlugin_cache__DOT__when_InstructionCache_l338) 
           | ((1U == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value)) 
              & (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_fire)));
    vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_0_valid 
        = ((IData)(vlSelf->IBusCachedPlugin_cache__DOT__when_InstructionCache_l338) 
           | ((0U == (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_value)) 
              & (IData)(vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_fire)));
    vlSelf->CsrPlugin_csrMapping_readDataSignal = (vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_29 
                                                   | (vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_30 
                                                      | (vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_31 
                                                         | (vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_32 
                                                            | (vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_34 
                                                               | (vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_35 
                                                                  | ((vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_38 
                                                                      | vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_41) 
                                                                     | (vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_42 
                                                                        | (vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_43 
                                                                           | (vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_44 
                                                                              | (vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_45 
                                                                                | (vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_46 
                                                                                | (vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_47 
                                                                                | (vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_48 
                                                                                | (vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_49 
                                                                                | (vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_27 
                                                                                | vlSelf->_zz_CsrPlugin_csrMapping_readDataInit_28))))))))))))))));
    vlSelf->IBusCachedPlugin_cache__DOT___zz_17 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_15_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_17 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_18 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_14_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_18 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_19 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_13_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_19 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_20 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_12_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_20 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_21 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_11_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_21 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_22 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_10_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_22 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_23 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_9_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_23 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_24 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_8_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_24 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_25 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_7_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_25 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_26 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_6_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_26 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_27 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_5_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_27 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_28 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_4_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_28 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_29 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_3_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_29 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_30 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_2_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_30 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_31 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_1_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_31 = 1U;
    }
    vlSelf->IBusCachedPlugin_cache__DOT___zz_32 = 0U;
    if (vlSelf->IBusCachedPlugin_cache__DOT__lineLoader_write_tag_0_valid) {
        vlSelf->IBusCachedPlugin_cache__DOT___zz_32 = 1U;
    }
    vlSelf->CsrPlugin_csrMapping_readDataInit = vlSelf->CsrPlugin_csrMapping_readDataSignal;
    vlSelf->execute_CsrPlugin_readToWriteData = vlSelf->CsrPlugin_csrMapping_readDataSignal;
    if (vlSelf->execute_CsrPlugin_csr_836) {
        vlSelf->execute_CsrPlugin_readToWriteData = 
            ((0xfffffdffU & vlSelf->execute_CsrPlugin_readToWriteData) 
             | ((IData)(vlSelf->CsrPlugin_sip_SEIP_SOFT) 
                << 9U));
    }
    if (vlSelf->execute_CsrPlugin_csr_324) {
        vlSelf->execute_CsrPlugin_readToWriteData = 
            ((0xfffffdffU & vlSelf->execute_CsrPlugin_readToWriteData) 
             | ((IData)(vlSelf->CsrPlugin_sip_SEIP_SOFT) 
                << 9U));
    }
    vlSelf->_zz_decode_RS2_1 = vlSelf->execute_REGFILE_WRITE_DATA;
    if (vlSelf->execute_arbitration_isValid) {
        if ((1U == (IData)(vlSelf->execute_SHIFT_CTRL))) {
            vlSelf->_zz_decode_RS2_1 = vlSelf->_zz_decode_RS2_3;
        } else if (((2U == (IData)(vlSelf->execute_SHIFT_CTRL)) 
                    || (3U == (IData)(vlSelf->execute_SHIFT_CTRL)))) {
            vlSelf->_zz_decode_RS2_1 = vlSelf->execute_SHIFT_RIGHT;
        }
    }
    if (vlSelf->when_CsrPlugin_l1731) {
        vlSelf->_zz_decode_RS2_1 = vlSelf->CsrPlugin_csrMapping_readDataSignal;
    }
    if (vlSelf->DBusCachedPlugin_forceDatapath) {
        vlSelf->_zz_decode_RS2_1 = vlSelf->MmuPlugin_dBusAccess_cmd_payload_address;
    }
    vlSelf->_zz_CsrPlugin_csrMapping_writeDataSignal 
        = ((IData)(vlSelf->switch_Misc_l241_1) ? ((0x1000U 
                                                   & vlSelf->execute_INSTRUCTION)
                                                   ? 
                                                  (vlSelf->execute_CsrPlugin_readToWriteData 
                                                   & (~ vlSelf->execute_SRC1))
                                                   : 
                                                  (vlSelf->execute_CsrPlugin_readToWriteData 
                                                   | vlSelf->execute_SRC1))
            : vlSelf->execute_SRC1);
    vlSelf->decode_RS1 = vlSelf->decode_RegFilePlugin_rs1Data;
    if (vlSelf->HazardSimplePlugin_writeBackBuffer_valid) {
        if (vlSelf->HazardSimplePlugin_addr0Match) {
            vlSelf->decode_RS1 = vlSelf->HazardSimplePlugin_writeBackBuffer_payload_data;
        }
    }
    if (vlSelf->when_HazardSimplePlugin_l45) {
        if (vlSelf->when_HazardSimplePlugin_l47) {
            if (vlSelf->when_HazardSimplePlugin_l48) {
                vlSelf->decode_RS1 = vlSelf->_zz_decode_RS2_2;
            }
        }
    }
    if (vlSelf->when_HazardSimplePlugin_l45_1) {
        if (vlSelf->memory_BYPASSABLE_MEMORY_STAGE) {
            if (vlSelf->when_HazardSimplePlugin_l48_1) {
                vlSelf->decode_RS1 = vlSelf->_zz_decode_RS2;
            }
        }
    }
    vlSelf->decode_RS2 = vlSelf->decode_RegFilePlugin_rs2Data;
    if (vlSelf->HazardSimplePlugin_writeBackBuffer_valid) {
        if (vlSelf->HazardSimplePlugin_addr1Match) {
            vlSelf->decode_RS2 = vlSelf->HazardSimplePlugin_writeBackBuffer_payload_data;
        }
    }
    if (vlSelf->when_HazardSimplePlugin_l45) {
        if (vlSelf->when_HazardSimplePlugin_l47) {
            if (vlSelf->when_HazardSimplePlugin_l51) {
                vlSelf->decode_RS2 = vlSelf->_zz_decode_RS2_2;
            }
        }
    }
    if (vlSelf->when_HazardSimplePlugin_l45_1) {
        if (vlSelf->memory_BYPASSABLE_MEMORY_STAGE) {
            if (vlSelf->when_HazardSimplePlugin_l51_1) {
                vlSelf->decode_RS2 = vlSelf->_zz_decode_RS2;
            }
        }
    }
    if (vlSelf->when_HazardSimplePlugin_l45_2) {
        if (vlSelf->execute_BYPASSABLE_EXECUTE_STAGE) {
            if (vlSelf->when_HazardSimplePlugin_l48_2) {
                vlSelf->decode_RS1 = vlSelf->_zz_decode_RS2_1;
            }
            if (vlSelf->when_HazardSimplePlugin_l51_2) {
                vlSelf->decode_RS2 = vlSelf->_zz_decode_RS2_1;
            }
        }
    }
    vlSelf->CsrPlugin_csrMapping_writeDataSignal = vlSelf->_zz_CsrPlugin_csrMapping_writeDataSignal;
    vlSelf->switch_CsrPlugin_l1167 = (3U & (vlSelf->_zz_CsrPlugin_csrMapping_writeDataSignal 
                                            >> 0xbU));
    vlSelf->_zz_decode_to_execute_RS1 = vlSelf->decode_RS1;
    vlSelf->_zz_decode_to_execute_RS2 = vlSelf->decode_RS2;
    vlSelf->_zz_decode_SRC1 = ((0U == (IData)(vlSelf->decode_SRC1_CTRL))
                                ? vlSelf->_zz_decode_to_execute_RS1
                                : ((2U == (IData)(vlSelf->decode_SRC1_CTRL))
                                    ? (IData)(vlSelf->_zz___05Fzz_decode_SRC1)
                                    : ((1U == (IData)(vlSelf->decode_SRC1_CTRL))
                                        ? (0xfffff000U 
                                           & vlSelf->IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)
                                        : (IData)(vlSelf->_zz___05Fzz_decode_SRC1_1))));
    vlSelf->_zz_decode_SRC2_4 = ((0U == (IData)(vlSelf->decode_SRC2_CTRL))
                                  ? vlSelf->_zz_decode_to_execute_RS2
                                  : ((1U == (IData)(vlSelf->decode_SRC2_CTRL))
                                      ? ((vlSelf->_zz_decode_SRC2_1 
                                          << 0xcU) 
                                         | (vlSelf->decode_INSTRUCTION 
                                            >> 0x14U))
                                      : ((2U == (IData)(vlSelf->decode_SRC2_CTRL))
                                          ? ((vlSelf->_zz_decode_SRC2_3 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelf->decode_INSTRUCTION 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->decode_INSTRUCTION 
                                                      >> 7U))))
                                          : vlSelf->_zz_decode_to_execute_PC)));
    vlSelf->decode_SRC1 = vlSelf->_zz_decode_SRC1;
    vlSelf->decode_SRC2 = vlSelf->_zz_decode_SRC2_4;
}
