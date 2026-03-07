// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsonata.h for the primary calling header

#include "Vsonata__pch.h"
#include "Vsonata__Syms.h"
#include "Vsonata___024root.h"

VL_ATTR_COLD void Vsonata_sonata___eval_static__TOP__sonata(Vsonata_sonata* vlSelf);

VL_ATTR_COLD void Vsonata___024root___eval_static(Vsonata___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsonata___024root___eval_static\n"); );
    // Body
    Vsonata_sonata___eval_static__TOP__sonata((&vlSymsp->TOP__sonata));
}

VL_ATTR_COLD void Vsonata_sonata___eval_initial__TOP__sonata(Vsonata_sonata* vlSelf);
VL_ATTR_COLD void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___eval_initial__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
VL_ATTR_COLD void Vsonata_VexRiscv___eval_initial__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu(Vsonata_VexRiscv* vlSelf);

VL_ATTR_COLD void Vsonata___024root___eval_initial(Vsonata___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsonata___024root___eval_initial\n"); );
    // Body
    Vsonata_sonata___eval_initial__TOP__sonata((&vlSymsp->TOP__sonata));
    Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___eval_initial__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
    Vsonata_VexRiscv___eval_initial__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu));
    vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_cmdw_sink_ready__0 
        = vlSymsp->TOP__sonata.soclinux_cmdw_sink_ready;
    vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_dataw_sink_ready__0 
        = vlSymsp->TOP__sonata.soclinux_dataw_sink_ready;
    vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_datar_source_source_ready__0 
        = vlSymsp->TOP__sonata.soclinux_datar_source_source_ready;
    vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_cmdw_sink_ready__1 
        = vlSymsp->TOP__sonata.soclinux_cmdw_sink_ready;
    vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_dataw_sink_ready__1 
        = vlSymsp->TOP__sonata.soclinux_dataw_sink_ready;
    vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_datar_source_source_ready__1 
        = vlSymsp->TOP__sonata.soclinux_datar_source_source_ready;
    vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_cmdw_sink_ready__2 
        = vlSymsp->TOP__sonata.soclinux_cmdw_sink_ready;
    vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_dataw_sink_ready__2 
        = vlSymsp->TOP__sonata.soclinux_dataw_sink_ready;
    vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_datar_source_source_ready__2 
        = vlSymsp->TOP__sonata.soclinux_datar_source_source_ready;
    vlSelf->__Vtrigprevexpr___TOP__sonata__sys_clk__0 
        = vlSymsp->TOP__sonata.sys_clk;
    vlSelf->__Vtrigprevexpr___TOP__sonata__sys2x_clk__0 
        = vlSymsp->TOP__sonata.sys2x_clk;
    vlSelf->__Vtrigprevexpr___TOP__sonata__spi_wb__DOT__rst_ni__0 
        = vlSymsp->TOP__sonata.spi_wb__DOT__rst_ni;
    vlSelf->__Vtrigprevexpr___TOP__sonata__main_crg_clkin__0 
        = vlSymsp->TOP__sonata.main_crg_clkin;
    vlSelf->__Vtrigprevexpr___TOP__sonata__builder_impl_xilinxasyncresetsynchronizerimpl0__0 
        = vlSymsp->TOP__sonata.builder_impl_xilinxasyncresetsynchronizerimpl0;
    vlSelf->__Vtrigprevexpr___TOP__sonata__builder_impl_xilinxasyncresetsynchronizerimpl1__0 
        = vlSymsp->TOP__sonata.builder_impl_xilinxasyncresetsynchronizerimpl1;
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__debugCd_external_clk__0 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_external_clk;
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__debugCd_logic_outputReset__0 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_logic_outputReset;
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__systemCd_logic_outputReset__0 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.systemCd_logic_outputReset;
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__debugCd_external_reset__0 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugCd_external_reset;
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__privilegedDebug_logic_dm__DOT__dmactive__0 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.privilegedDebug_logic_dm__DOT__dmactive;
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__debugPort_tck__0 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.debugPort_tck;
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__logic_systemLogic_bus_rsp_ccToggle_tunnel_privilegedDebug_logic_withTap_tunnel_toplevel_debugCd_logic_outputReset_syncronized__0 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.privilegedDebug_logic_withTap_tunnel__DOT__tunnel__DOT__logic_systemLogic_bus_rsp_ccToggle__DOT__logic_systemLogic_bus_rsp_ccToggle_tunnel_privilegedDebug_logic_withTap_tunnel_toplevel_debugCd_logic_outputReset_syncronized;
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__privilegedDebug_systemReset__0 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT.privilegedDebug_systemReset;
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__debugCd_external_clk__0 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.debugCd_external_clk;
    vlSelf->__Vtrigprevexpr___TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__systemCd_logic_outputReset__0 
        = vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu.systemCd_logic_outputReset;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsonata___024root___dump_triggers__stl(Vsonata___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsonata___024root___eval_triggers__stl(Vsonata___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsonata___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
    vlSelf->__VstlTriggered.set(1U, (((IData)(vlSymsp->TOP__sonata.soclinux_cmdw_sink_ready) 
                                      != (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_cmdw_sink_ready__0)) 
                                     | ((IData)(vlSymsp->TOP__sonata.soclinux_dataw_sink_ready) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_dataw_sink_ready__0))));
    vlSelf->__VstlTriggered.set(2U, ((IData)(vlSymsp->TOP__sonata.soclinux_datar_source_source_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_datar_source_source_ready__0)));
    vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_cmdw_sink_ready__0 
        = vlSymsp->TOP__sonata.soclinux_cmdw_sink_ready;
    vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_dataw_sink_ready__0 
        = vlSymsp->TOP__sonata.soclinux_dataw_sink_ready;
    vlSelf->__Vtrigprevexpr___TOP__sonata__soclinux_datar_source_source_ready__0 
        = vlSymsp->TOP__sonata.soclinux_datar_source_source_ready;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
        vlSelf->__VstlTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsonata___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void Vsonata___024root___ico_sequent__TOP__0(Vsonata___024root* vlSelf);
VL_ATTR_COLD void Vsonata_sonata___stl_sequent__TOP__sonata__0(Vsonata_sonata* vlSelf);
VL_ATTR_COLD void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___stl_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__0(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata_VexRiscv___ico_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__0(Vsonata_VexRiscv* vlSelf);
void Vsonata___024root___ico_sequent__TOP__1(Vsonata___024root* vlSelf);
void Vsonata_sonata___ico_sequent__TOP__sonata__1(Vsonata_sonata* vlSelf);
void Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___ico_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__1(Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT* vlSelf);
void Vsonata___024root___ico_sequent__TOP__2(Vsonata___024root* vlSelf);
void Vsonata_sonata___ico_comb__TOP__sonata__0(Vsonata_sonata* vlSelf);
void Vsonata_sonata___ico_comb__TOP__sonata__1(Vsonata_sonata* vlSelf);

VL_ATTR_COLD void Vsonata___024root___eval_stl(Vsonata___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsonata__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsonata___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vsonata___024root___ico_sequent__TOP__0(vlSelf);
        Vsonata_sonata___stl_sequent__TOP__sonata__0((&vlSymsp->TOP__sonata));
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___stl_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__0((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
        Vsonata_VexRiscv___ico_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu__0((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__cores_0_cpu_logic_cpu));
        Vsonata___024root___ico_sequent__TOP__1(vlSelf);
        Vsonata_sonata___ico_sequent__TOP__sonata__1((&vlSymsp->TOP__sonata));
        Vsonata_VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT___ico_sequent__TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT__1((&vlSymsp->TOP__sonata__VexRiscvLitexSmpCluster_Cc1_Iw32Is65536Iy16_Dw32Ds65536Dy16_ITs4DTs4_Ood_Wm_Wf32_Pd_Hb1_JtagT));
        Vsonata___024root___ico_sequent__TOP__2(vlSelf);
    }
    if ((5ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vsonata_sonata___ico_comb__TOP__sonata__0((&vlSymsp->TOP__sonata));
    }
    if ((7ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vsonata_sonata___ico_comb__TOP__sonata__1((&vlSymsp->TOP__sonata));
    }
}
