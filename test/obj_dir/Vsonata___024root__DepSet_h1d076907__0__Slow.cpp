// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsonata.h for the primary calling header

#include "Vsonata__pch.h"
#include "Vsonata___024root.h"

VL_ATTR_COLD void Vsonata___024root___eval_final(Vsonata___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsonata___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsonata___024root___dump_triggers__stl(Vsonata___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsonata___024root___eval_phase__stl(Vsonata___024root* vlSelf);

VL_ATTR_COLD void Vsonata___024root___eval_settle(Vsonata___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsonata___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vsonata___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/jonathan/sonata-linux/linux-on-litex-vexriscv/build/sonata/gateware/sonata.v", 21, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsonata___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsonata___024root___dump_triggers__stl(Vsonata___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsonata___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] sonata.soclinux_cmdw_sink_ready or [hybrid] sonata.soclinux_dataw_sink_ready)\n");
    }
    if ((4ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] sonata.soclinux_datar_source_source_ready)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsonata___024root___eval_triggers__stl(Vsonata___024root* vlSelf);
VL_ATTR_COLD void Vsonata___024root___eval_stl(Vsonata___024root* vlSelf);

VL_ATTR_COLD bool Vsonata___024root___eval_phase__stl(Vsonata___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsonata___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsonata___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vsonata___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsonata___024root___dump_triggers__ico(Vsonata___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsonata___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] sonata.soclinux_cmdw_sink_ready or [hybrid] sonata.soclinux_dataw_sink_ready)\n");
    }
    if ((4ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 2 is active: @([hybrid] sonata.soclinux_datar_source_source_ready)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsonata___024root___dump_triggers__act(Vsonata___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsonata___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] sonata.soclinux_cmdw_sink_ready or [hybrid] sonata.soclinux_dataw_sink_ready)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] sonata.soclinux_datar_source_source_ready)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge sonata.sys_clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge sonata.sys2x_clk)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(negedge sonata.spi_wb.rst_ni or posedge sonata.sys_clk)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge sonata.main_crg_clkin)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge sonata.builder_impl_xilinxasyncresetsynchronizerimpl0 or posedge sonata.sys_clk)\n");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(posedge sonata.builder_impl_xilinxasyncresetsynchronizerimpl1 or posedge sonata.sys2x_clk)\n");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(negedge sonata.sys_clk)\n");
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_external_clk)\n");
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @(posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_external_clk or posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_logic_outputReset)\n");
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @(posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_external_clk or posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.systemCd_logic_outputReset)\n");
    }
    if ((0x1000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @(posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_external_clk or posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_external_reset)\n");
    }
    if ((0x2000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @(posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_external_clk or negedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.privilegedDebug_logic_dm.dmactive)\n");
    }
    if ((0x4000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @(posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugPort_tck)\n");
    }
    if ((0x8000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @(negedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugPort_tck)\n");
    }
    if ((0x10000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @(posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugPort_tck or posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.privilegedDebug_logic_withTap_tunnel.tunnel.logic_systemLogic_bus_rsp_ccToggle.logic_systemLogic_bus_rsp_ccToggle_tunnel_privilegedDebug_logic_withTap_tunnel_toplevel_debugCd_logic_outputReset_syncronized)\n");
    }
    if ((0x20000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @(posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_logic_outputReset or posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugPort_tck)\n");
    }
    if ((0x40000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @(posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_external_clk or posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.privilegedDebug_systemReset)\n");
    }
    if ((0x80000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 19 is active: @(posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.cores_0_cpu_logic_cpu.debugCd_external_clk)\n");
    }
    if ((0x100000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 20 is active: @(posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.cores_0_cpu_logic_cpu.debugCd_external_clk or posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.cores_0_cpu_logic_cpu.systemCd_logic_outputReset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsonata___024root___dump_triggers__nba(Vsonata___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsonata___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] sonata.soclinux_cmdw_sink_ready or [hybrid] sonata.soclinux_dataw_sink_ready)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] sonata.soclinux_datar_source_source_ready)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge sonata.sys_clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge sonata.sys2x_clk)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(negedge sonata.spi_wb.rst_ni or posedge sonata.sys_clk)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge sonata.main_crg_clkin)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge sonata.builder_impl_xilinxasyncresetsynchronizerimpl0 or posedge sonata.sys_clk)\n");
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(posedge sonata.builder_impl_xilinxasyncresetsynchronizerimpl1 or posedge sonata.sys2x_clk)\n");
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(negedge sonata.sys_clk)\n");
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_external_clk)\n");
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @(posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_external_clk or posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_logic_outputReset)\n");
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @(posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_external_clk or posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.systemCd_logic_outputReset)\n");
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @(posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_external_clk or posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_external_reset)\n");
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @(posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_external_clk or negedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.privilegedDebug_logic_dm.dmactive)\n");
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @(posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugPort_tck)\n");
    }
    if ((0x8000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @(negedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugPort_tck)\n");
    }
    if ((0x10000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @(posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugPort_tck or posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.privilegedDebug_logic_withTap_tunnel.tunnel.logic_systemLogic_bus_rsp_ccToggle.logic_systemLogic_bus_rsp_ccToggle_tunnel_privilegedDebug_logic_withTap_tunnel_toplevel_debugCd_logic_outputReset_syncronized)\n");
    }
    if ((0x20000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @(posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_logic_outputReset or posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugPort_tck)\n");
    }
    if ((0x40000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @(posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_external_clk or posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.privilegedDebug_systemReset)\n");
    }
    if ((0x80000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 19 is active: @(posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.cores_0_cpu_logic_cpu.debugCd_external_clk)\n");
    }
    if ((0x100000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 20 is active: @(posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.cores_0_cpu_logic_cpu.debugCd_external_clk or posedge sonata.VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.cores_0_cpu_logic_cpu.systemCd_logic_outputReset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsonata___024root___ctor_var_reset(Vsonata___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsonata___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk25 = VL_RAND_RESET_I(1);
    vlSelf->eth_rst_n = VL_RAND_RESET_I(1);
    vlSelf->hyperram0_clk = VL_RAND_RESET_I(1);
    vlSelf->hyperram0_cs_n = VL_RAND_RESET_I(1);
    vlSelf->hyperram0_dq = VL_RAND_RESET_I(8);
    vlSelf->hyperram0_rst_n = VL_RAND_RESET_I(1);
    vlSelf->hyperram0_rwds = VL_RAND_RESET_I(1);
    vlSelf->jtag_tck = VL_RAND_RESET_I(1);
    vlSelf->jtag_tdi = VL_RAND_RESET_I(1);
    vlSelf->jtag_tdo = VL_RAND_RESET_I(1);
    vlSelf->jtag_tms = VL_RAND_RESET_I(1);
    vlSelf->sdcard_cd = VL_RAND_RESET_I(1);
    vlSelf->sdcard_clk = VL_RAND_RESET_I(1);
    vlSelf->sdcard_cmd = VL_RAND_RESET_I(1);
    vlSelf->sdcard_data = VL_RAND_RESET_I(4);
    vlSelf->serial_rx = VL_RAND_RESET_I(1);
    vlSelf->serial_tx = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_clk = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_cs_n = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_miso = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_mosi = VL_RAND_RESET_I(1);
    vlSelf->spiflash4x_clk = VL_RAND_RESET_I(1);
    vlSelf->spiflash4x_cs_n = VL_RAND_RESET_I(1);
    vlSelf->spiflash4x_dq = VL_RAND_RESET_I(4);
    vlSelf->user_led0 = VL_RAND_RESET_I(1);
    vlSelf->user_led1 = VL_RAND_RESET_I(1);
    vlSelf->user_led2 = VL_RAND_RESET_I(1);
    vlSelf->user_led3 = VL_RAND_RESET_I(1);
    vlSelf->user_led4 = VL_RAND_RESET_I(1);
    vlSelf->user_led5 = VL_RAND_RESET_I(1);
    vlSelf->user_led6 = VL_RAND_RESET_I(1);
    vlSelf->user_led7 = VL_RAND_RESET_I(1);
    vlSelf->user_sw0 = VL_RAND_RESET_I(1);
    vlSelf->user_sw1 = VL_RAND_RESET_I(1);
    vlSelf->user_sw2 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_cmdw_sink_ready__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_dataw_sink_ready__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_datar_source_source_ready__0 = VL_RAND_RESET_I(1);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_cmdw_sink_ready__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_dataw_sink_ready__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_datar_source_source_ready__1 = VL_RAND_RESET_I(1);
    vlSelf->__VicoDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_cmdw_sink_ready__2 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_dataw_sink_ready__2 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_datar_source_source_ready__2 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sonata__sys_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sonata__sys2x_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sonata__spi_wb__DOT__rst_ni__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sonata__main_crg_clkin__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sonata__builder_impl_xilinxasyncresetsynchronizerimpl0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sonata__builder_impl_xilinxasyncresetsynchronizerimpl1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__debugCd_external_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__debugCd_logic_outputReset__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__systemCd_logic_outputReset__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__debugCd_external_reset__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__privilegedDebug_logic_dm__DOT__dmactive__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__debugPort_tck__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__logic_systemLogic_bus_rsp_ccToggle_tunnel_privilegedDebug_logic_withTap_tunnel_toplevel_debugCd_logic_outputReset_syncronized__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__privilegedDebug_systemReset__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__debugCd_external_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__systemCd_logic_outputReset__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
