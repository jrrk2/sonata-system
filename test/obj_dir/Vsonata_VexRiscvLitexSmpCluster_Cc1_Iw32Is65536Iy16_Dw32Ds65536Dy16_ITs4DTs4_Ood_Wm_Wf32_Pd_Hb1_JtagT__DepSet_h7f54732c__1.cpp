// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsonata.h for the primary calling header

#include "Vsonata__pch.h"
#include "Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.h"
#include "Vsonata__Syms.h"

extern const VlUnpacked<CData/*0:0*/, 512> Vsonata__ConstPool__TABLE_h64e87499_0;

VL_INLINE_OPT void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__17(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___nba_comb__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__17\n"); );
    // Init
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->privilegedDebug_logic_dm__DOT__factory_doWrite 
        = ((IData)(vlSelf->privilegedDebug_logic_dm__DOT__factory_askWrite) 
           & (IData)(vlSelf->privilegedDebug_logic_dm__DOT__io_ctrl_cmd_ready));
    __Vtableidx2 = (((IData)(vlSelf->privilegedDebug_logic_withTap_tunnel_io_bus_cmd_payload_address) 
                     << 2U) | (((IData)(vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l205) 
                                << 1U) | (IData)(vlSelf->privilegedDebug_logic_dm__DOT__logic_progbufX_trigged)));
    vlSelf->privilegedDebug_logic_dm__DOT__factory_cmdToRsp_payload_error 
        = Vsonata__ConstPool__TABLE_h64e87499_0[__Vtableidx2];
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
    vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_resume_cmd_valid = 0U;
    if (vlSelf->privilegedDebug_logic_dm__DOT__when_DebugModule_l102) {
        vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_resume_cmd_valid 
            = vlSelf->privilegedDebug_logic_dm__DOT__logic_dmcontrol_resumeReq;
    }
    vlSelf->privilegedDebug_logic_dm_io_harts_0_resume_cmd_valid 
        = vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_resume_cmd_valid;
    vlSelf->cores_0_cpu_debugRiscv_resume_cmd_valid 
        = vlSelf->privilegedDebug_logic_dm__DOT__io_harts_0_resume_cmd_valid;
    vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugBus_resume_cmd_valid 
        = vlSelf->cores_0_cpu_debugRiscv_resume_cmd_valid;
}
