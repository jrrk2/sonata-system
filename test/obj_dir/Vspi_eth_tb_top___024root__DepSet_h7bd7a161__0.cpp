// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_eth_tb_top.h for the primary calling header

#include "Vspi_eth_tb_top__pch.h"
#include "Vspi_eth_tb_top___024root.h"

void Vspi_eth_tb_top___024root___ico_sequent__TOP__0(Vspi_eth_tb_top___024root* vlSelf);

void Vspi_eth_tb_top___024root___eval_ico(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vspi_eth_tb_top___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vspi_eth_tb_top___024root___ico_sequent__TOP__0(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rst_ni 
        = (1U & (~ (IData)(vlSelf->rst_i)));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_cnt_next 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_cnt;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_next = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__is_tx 
        = (IData)((0x1000U == (0x1800U & (IData)(vlSelf->wb_adr_i))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_fcs_next = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_frame_next = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tuser_next = 0U;
    if ((1U & (~ ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_reg) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_reg))) {
            if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_reg))) {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_cnt_next 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_cnt)));
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_next 
                    = ((3U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_cnt))
                        ? 0U : 3U);
            } else {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_next 
                    = ((IData)(vlSelf->rx_valid) ? 2U
                        : 0U);
            }
        } else if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_reg))) {
            if ((1U & (~ ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d4) 
                          & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d4))))) {
                if ((1U & (~ (IData)(vlSelf->rx_valid)))) {
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_cnt_next = 0U;
                }
            }
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_next 
                = (((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d4) 
                    & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d4))
                    ? 2U : ((IData)(vlSelf->rx_valid)
                             ? 1U : 3U));
        } else {
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_next 
                = ((((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d4) 
                     & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d4))) 
                    & (0xd5U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4)))
                    ? 1U : 0U);
        }
        if ((1U & (~ ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_reg) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_reg))) {
                if ((1U & (~ ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d4) 
                              & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d4))))) {
                    if ((1U & (~ (IData)(vlSelf->rx_valid)))) {
                        if ((1U & (~ ((((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d0) 
                                        | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d1)) 
                                       | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d2)) 
                                      | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d3))))) {
                            if (((((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d0) 
                                   << 0x18U) | (((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d1) 
                                                 << 0x10U) 
                                                | (((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d2) 
                                                    << 8U) 
                                                   | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d3)))) 
                                 != (~ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_next))) {
                                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_fcs_next = 1U;
                            }
                        }
                    }
                }
                if (((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d4) 
                     & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d4))) {
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_frame_next = 1U;
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tuser_next = 1U;
                } else if ((1U & (~ (IData)(vlSelf->rx_valid)))) {
                    if (((((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d0) 
                           | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d1)) 
                          | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d2)) 
                         | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d3))) {
                        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_frame_next = 1U;
                    } else if (((((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d0) 
                                  << 0x18U) | (((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d1) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d2) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d3)))) 
                                != (~ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_next))) {
                        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_frame_next = 1U;
                    }
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tuser_next 
                        = (((((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d0) 
                              | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d1)) 
                             | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d2)) 
                            | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d3)) 
                           || ((((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d0) 
                                 << 0x18U) | (((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d1) 
                                               << 0x10U) 
                                              | (((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d2) 
                                                  << 8U) 
                                                 | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d3)))) 
                               != (~ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_next)));
                }
            }
        }
    }
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__wb_req 
        = ((IData)(vlSelf->wb_cyc_i) & (IData)(vlSelf->wb_stb_i));
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_cpu_req 
        = ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__wb_req) 
           & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__is_tx) 
              & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT____VdfgRegularize_h28ad532a_1_2)));
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_cpu_req 
        = ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__wb_req) 
           & ((IData)((0x1800U == (0x1800U & (IData)(vlSelf->wb_adr_i)))) 
              & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT____VdfgRegularize_h28ad532a_1_2)));
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__reg_wr 
        = ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__wb_req) 
           & ((~ ((IData)(vlSelf->wb_adr_i) >> 0xcU)) 
              & ((IData)(vlSelf->wb_we_i) & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT____VdfgRegularize_h28ad532a_1_2))));
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_start 
        = ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__reg_wr) 
           & (IData)(((0x18U == (0xfcU & (IData)(vlSelf->wb_adr_i))) 
                      & (0U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q)))));
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_d 
        = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q;
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_d 
        = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_q;
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__byte_count_d 
        = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__byte_count_q;
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__start_edge = 0U;
    if ((0U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q))) {
        if (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_start) {
            if (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_data_valid) {
                vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_d = 2U;
                vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__start_edge 
                    = (1U & (~ (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cfg_reg 
                                >> 0x1eU)));
            } else {
                vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_d = 1U;
            }
            vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_d 
                = ((0x40000000U & vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cfg_reg)
                    ? 8U : 7U);
            vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__byte_count_d 
                = (0x7ffU & vlSelf->wb_dat_i);
        }
    } else {
        if ((1U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q))) {
            if (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_data_valid) {
                vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_d = 2U;
                vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__start_edge 
                    = (1U & (~ (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cfg_reg 
                                >> 0x1eU)));
            }
        } else if ((2U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q))) {
            if (((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__output_edge) 
                 | (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__finish_edge))) {
                if ((0U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_q))) {
                    if ((1U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__byte_count_q))) {
                        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_d = 0U;
                    }
                }
            }
        }
        if ((1U != (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q))) {
            if ((2U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q))) {
                if (((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__output_edge) 
                     | (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__finish_edge))) {
                    if ((0U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_q))) {
                        if ((1U != (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__byte_count_q))) {
                            vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_d = 7U;
                            vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__byte_count_d 
                                = (0x7ffU & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__byte_count_q) 
                                             - (IData)(1U)));
                        }
                    } else {
                        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_d 
                            = (0xfU & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_q) 
                                       - (IData)(1U)));
                    }
                }
            }
        }
    }
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__copi_shift_d 
        = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__copi_shift_q;
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_data_in_ready = 0U;
    if (((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__output_edge) 
         | (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__start_edge))) {
        if ((((0U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_q)) 
              | (8U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_q))) 
             | (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__start_edge))) {
            vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__copi_shift_d 
                = (0xffU & ((0x20000000U & vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cfg_reg)
                             ? ((2U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_byte_lane_q))
                                 ? ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_byte_lane_q))
                                     ? (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_bram_rdata 
                                        >> 0x18U) : 
                                    (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_bram_rdata 
                                     >> 0x10U)) : (
                                                   (1U 
                                                    & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_byte_lane_q))
                                                    ? 
                                                   (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_bram_rdata 
                                                    >> 8U)
                                                    : vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_bram_rdata))
                             : ([&]() {
                            vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__in 
                                = (0xffU & ((2U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_byte_lane_q))
                                             ? ((1U 
                                                 & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_byte_lane_q))
                                                 ? 
                                                (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_bram_rdata 
                                                 >> 0x18U)
                                                 : 
                                                (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_bram_rdata 
                                                 >> 0x10U))
                                             : ((1U 
                                                 & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_byte_lane_q))
                                                 ? 
                                                (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_bram_rdata 
                                                 >> 8U)
                                                 : vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_bram_rdata)));
                            vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__out 
                                = ((0xf8U & (IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__out)) 
                                   | ((4U & ((IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__in) 
                                             >> 3U)) 
                                      | ((2U & ((IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__in) 
                                                >> 5U)) 
                                         | (1U & ((IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__in) 
                                                  >> 7U)))));
                            vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__out 
                                = ((0xc7U & (IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__out)) 
                                   | ((0x20U & ((IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__in) 
                                                << 3U)) 
                                      | ((0x10U & ((IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__in) 
                                                   << 1U)) 
                                         | (8U & ((IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__in) 
                                                  >> 1U)))));
                            vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__out 
                                = ((0x3fU & (IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__out)) 
                                   | ((0x80U & ((IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__in) 
                                                << 7U)) 
                                      | (0x40U & ((IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__in) 
                                                  << 5U))));
                            vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__Vfuncout 
                                = vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__out;
                        }(), (IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__Vfuncout))));
            vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_data_in_ready = 1U;
        } else {
            vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__copi_shift_d 
                = (0xfeU & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__copi_shift_q) 
                            << 1U));
        }
    } else if (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__finish_edge) {
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__copi_shift_d 
            = (0xfeU & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__copi_shift_q) 
                        << 1U));
    }
}

void Vspi_eth_tb_top___024root___eval_triggers__ico(Vspi_eth_tb_top___024root* vlSelf);

bool Vspi_eth_tb_top___024root___eval_phase__ico(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vspi_eth_tb_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vspi_eth_tb_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vspi_eth_tb_top___024root___eval_act(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___eval_act\n"); );
}

void Vspi_eth_tb_top___024root___nba_sequent__TOP__0(Vspi_eth_tb_top___024root* vlSelf);
void Vspi_eth_tb_top___024root___nba_sequent__TOP__1(Vspi_eth_tb_top___024root* vlSelf);
void Vspi_eth_tb_top___024root___nba_sequent__TOP__2(Vspi_eth_tb_top___024root* vlSelf);
void Vspi_eth_tb_top___024root___nba_sequent__TOP__3(Vspi_eth_tb_top___024root* vlSelf);
void Vspi_eth_tb_top___024root___nba_sequent__TOP__4(Vspi_eth_tb_top___024root* vlSelf);
void Vspi_eth_tb_top___024root___nba_sequent__TOP__5(Vspi_eth_tb_top___024root* vlSelf);
void Vspi_eth_tb_top___024root___nba_sequent__TOP__6(Vspi_eth_tb_top___024root* vlSelf);
void Vspi_eth_tb_top___024root___nba_sequent__TOP__7(Vspi_eth_tb_top___024root* vlSelf);
void Vspi_eth_tb_top___024root___nba_comb__TOP__0(Vspi_eth_tb_top___024root* vlSelf);
void Vspi_eth_tb_top___024root___nba_sequent__TOP__8(Vspi_eth_tb_top___024root* vlSelf);
void Vspi_eth_tb_top___024root___nba_sequent__TOP__9(Vspi_eth_tb_top___024root* vlSelf);
void Vspi_eth_tb_top___024root___nba_sequent__TOP__10(Vspi_eth_tb_top___024root* vlSelf);
void Vspi_eth_tb_top___024root___nba_comb__TOP__1(Vspi_eth_tb_top___024root* vlSelf);
void Vspi_eth_tb_top___024root___nba_comb__TOP__2(Vspi_eth_tb_top___024root* vlSelf);
void Vspi_eth_tb_top___024root___nba_sequent__TOP__11(Vspi_eth_tb_top___024root* vlSelf);
void Vspi_eth_tb_top___024root___nba_sequent__TOP__12(Vspi_eth_tb_top___024root* vlSelf);
void Vspi_eth_tb_top___024root___nba_sequent__TOP__13(Vspi_eth_tb_top___024root* vlSelf);
void Vspi_eth_tb_top___024root___nba_sequent__TOP__14(Vspi_eth_tb_top___024root* vlSelf);
void Vspi_eth_tb_top___024root___nba_comb__TOP__3(Vspi_eth_tb_top___024root* vlSelf);
void Vspi_eth_tb_top___024root___nba_sequent__TOP__15(Vspi_eth_tb_top___024root* vlSelf);
void Vspi_eth_tb_top___024root___nba_sequent__TOP__16(Vspi_eth_tb_top___024root* vlSelf);
void Vspi_eth_tb_top___024root___nba_comb__TOP__4(Vspi_eth_tb_top___024root* vlSelf);

void Vspi_eth_tb_top___024root___eval_nba(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___eval_nba\n"); );
    // Body
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_eth_tb_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_eth_tb_top___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_eth_tb_top___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_eth_tb_top___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_eth_tb_top___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_eth_tb_top___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_eth_tb_top___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_eth_tb_top___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x14ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_eth_tb_top___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_eth_tb_top___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_eth_tb_top___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_eth_tb_top___024root___nba_sequent__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((0x21ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_eth_tb_top___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_eth_tb_top___024root___nba_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_eth_tb_top___024root___nba_sequent__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_eth_tb_top___024root___nba_sequent__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_eth_tb_top___024root___nba_sequent__TOP__13(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_eth_tb_top___024root___nba_sequent__TOP__14(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_eth_tb_top___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_eth_tb_top___024root___nba_sequent__TOP__15(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_eth_tb_top___024root___nba_sequent__TOP__16(vlSelf);
    }
    if ((0xcULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vspi_eth_tb_top___024root___nba_comb__TOP__4(vlSelf);
    }
}

VL_INLINE_OPT void Vspi_eth_tb_top___024root___nba_sequent__TOP__0(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY((0U == (IData)(vlSelf->spi_eth_tb_top__DOT__ksz_chip_state)))) {
        VL_WRITEF_NX("[%0t] === CHIP: IDLE ===\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
    } else if (VL_UNLIKELY((1U == (IData)(vlSelf->spi_eth_tb_top__DOT__ksz_chip_state)))) {
        VL_WRITEF_NX("[%0t] === CHIP: RX ENABLED ===\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
    } else if (VL_UNLIKELY((2U == (IData)(vlSelf->spi_eth_tb_top__DOT__ksz_chip_state)))) {
        VL_WRITEF_NX("[%0t] === CHIP: TX ENABLED ===\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
    } else if (VL_UNLIKELY((3U == (IData)(vlSelf->spi_eth_tb_top__DOT__ksz_chip_state)))) {
        VL_WRITEF_NX("[%0t] === CHIP: RX+TX ENABLED ===\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
}

VL_INLINE_OPT void Vspi_eth_tb_top___024root___nba_sequent__TOP__1(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__byte_sync;
    __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__byte_sync = 0;
    CData/*0:0*/ __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_enable_old;
    __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_enable_old = 0;
    CData/*0:0*/ __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tvalid;
    __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tvalid = 0;
    CData/*0:0*/ __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tlast;
    __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tlast = 0;
    SData/*10:0*/ __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_addr_axis;
    __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_addr_axis = 0;
    QData/*47:0*/ __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_dest_mac;
    __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_dest_mac = 0;
    CData/*3:0*/ __Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos__v0;
    __Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos__v0 = 0;
    SData/*12:0*/ __Vdlyvval__spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos__v0;
    __Vdlyvval__spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos__v0 = 0;
    CData/*0:0*/ __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_busy;
    __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_busy = 0;
    // Body
    __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__byte_sync 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__byte_sync;
    __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_busy 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_busy;
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_toggle 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_toggle;
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_start_pending 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_start_pending;
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_frame_addr 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_frame_addr;
    __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_enable_old 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_enable_old;
    __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tlast 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tlast;
    __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tvalid 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tvalid;
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_toggle 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_toggle;
    __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_dest_mac 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_dest_mac;
    __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_addr_axis 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_addr_axis;
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_next 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_next;
    vlSelf->__Vdlyvset__spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length__v0 = 0U;
    vlSelf->__Vdlyvset__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v0 = 0U;
    vlSelf->__Vdlyvset__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v1 = 0U;
    if (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rst_ni) {
        if (VL_UNLIKELY(((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tvalid_reg) 
                         & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__byte_sync))))) {
            VL_WRITEF_NX("[%0t] RX: Frame start detected\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__byte_sync = 1U;
        }
        if (VL_UNLIKELY(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tlast_reg)) {
            VL_WRITEF_NX("[%0t] RX: Frame end detected\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__byte_sync = 0U;
        }
    } else {
        __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__byte_sync = 0U;
    }
    if (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rst_ni) {
        if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXQCR))) {
            vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_start_pending = 1U;
        } else if (((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tlast) 
                    & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_en_reg))) {
            vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_toggle 
                = (1U & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_toggle)));
            __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_busy = 0U;
            vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_start_pending = 0U;
        } else if (VL_UNLIKELY((((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_enable) 
                                 & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_start_pending)) 
                                & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_busy))))) {
            VL_WRITEF_NX("[%0t] TX: Start (%0# bytes)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,11,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_packet_length));
            __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_busy = 1U;
        }
        if (VL_UNLIKELY(((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_valid_old) 
                         & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_en_reg))))) {
            VL_WRITEF_NX("[%0t] TX: Complete, CRC=%08x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,32,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg_rev);
        }
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_valid_old 
            = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_en_reg;
    } else {
        vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_toggle = 0U;
        __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_busy = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_valid_old = 0U;
        vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_start_pending = 0U;
    }
    vlSelf->spi_eth_tb_top__DOT__ksz_intrn = (1U & 
                                              ((~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rst_ni)) 
                                               | (0U 
                                                  == 
                                                  ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_ISR) 
                                                   & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_IER)))));
    if (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rst_ni) {
        __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_enable_old 
            = (((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_enable) 
                & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_start_pending)) 
               & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tvalid)));
        if (((((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_enable) 
               & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_start_pending)) 
              & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_busy))) 
             & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_enable_old)))) {
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tdata 
                = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_mem
                [(0x7fffU & ((IData)(4U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_frame_addr)))];
            __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tvalid = 1U;
            __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tlast 
                = (1U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_packet_length));
            vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_frame_addr = 0U;
        }
        if (((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_axis_tready_reg) 
             & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tvalid))) {
            vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_frame_addr 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_frame_addr)));
            if (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tlast) {
                __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tvalid = 0U;
            } else {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tdata 
                    = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_mem
                    [(0x7fffU & ((IData)(5U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_frame_addr)))];
                __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tlast 
                    = (((IData)(1U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_frame_addr)) 
                       == ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_packet_length) 
                           - (IData)(1U)));
            }
        }
        vlSelf->spi_eth_tb_top__DOT__ksz_tx_last = 
            ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tlast) 
             & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tvalid));
    } else {
        vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_frame_addr = 0U;
        __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_enable_old = 0U;
        __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tvalid = 0U;
        __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tlast = 0U;
        vlSelf->spi_eth_tb_top__DOT__ksz_tx_last = 0U;
    }
    if (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rst_ni) {
        if (VL_UNLIKELY((((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tvalid_reg) 
                          & (0U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_addr_axis))) 
                         & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__sync))))) {
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start 
                = ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_next) 
                   << 0xbU);
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__sync = 1U;
            VL_WRITEF_NX("[%0t] RX: Start packet reception at FIFO offset %0# (buffer %0#)\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,15,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start),
                         4,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_next);
        }
        if (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tvalid_reg) {
            __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_addr_axis 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_addr_axis)));
            vlSelf->spi_eth_tb_top__DOT__ksz_rx_byte_count 
                = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_addr_axis;
            if ((6U > (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_addr_axis))) {
                __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_dest_mac 
                    = ((0xffffffffff00ULL & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_dest_mac 
                                             << 8U)) 
                       | (QData)((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tdata_reg)));
            }
            if (((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__byte_sync) 
                 & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__sync))) {
                vlSelf->__Vdlyvval__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v0 
                    = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tdata_reg;
                vlSelf->__Vdlyvset__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v0 = 1U;
                vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v0 
                    = (0x7fffU & ((IData)(8U) + ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start) 
                                                 + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_addr_axis))));
            } else if (VL_UNLIKELY((0x14U > (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_addr_axis)))) {
                VL_WRITEF_NX("[%0t] RX: SKIP Write (byte_sync=%b, sync=%b, rx_addr_axis=%0#, data=0x%02x)\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,1,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__byte_sync),
                             1,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__sync,
                             11,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_addr_axis),
                             8,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tdata_reg);
            }
        }
        if ((((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tvalid_reg) 
              & (6U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_addr_axis))) 
             & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__sync))) {
            if (((((0x1005eU == (0xffffffU & (IData)(
                                                     (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_dest_mac 
                                                      >> 0x18U)))) 
                   | (0xffffffffffffULL == vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_dest_mac)) 
                  | (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__mac_address 
                     == vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_dest_mac)) 
                 | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__promiscuous_mode))) {
                VL_WRITEF_NX("[%0t] RX: ACCEPT Dest=%012x (MAC=%012x, Promisc=%b)\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,48,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_dest_mac,
                             48,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__mac_address,
                             1,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__promiscuous_mode));
            } else {
                VL_WRITEF_NX("[%0t] RX: REJECT Dest=%012x (MAC=%012x)\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,48,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_dest_mac,
                             48,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__mac_address);
            }
        }
        if ((1U & ((~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__byte_sync)) 
                   & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tvalid_reg))))) {
            if (VL_UNLIKELY(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__sync)) {
                vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_next 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_next)));
                VL_WRITEF_NX("[%0t] RX: Clear sync at end of frame, rx_addr_axis=%0#\n[%0t] RX: Buffer state: rx_buf_first=%0#, rx_buf_next=%0#->%0#, rx_buf_last=%0#\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,11,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_addr_axis),
                             64,VL_TIME_UNITED_Q(1000),
                             -9,4,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_first),
                             4,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_next,
                             32,((IData)(1U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_next)),
                             4,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_last));
            }
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__sync = 0U;
        }
        if (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tlast_reg) {
            if (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__sync) {
                vlSelf->__Vdlyvval__spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length__v0 
                    = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_addr_axis)));
                vlSelf->__Vdlyvset__spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length__v0 = 1U;
                vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length__v0 
                    = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_next;
                __Vdlyvval__spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos__v0 
                    = (0x1fffU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start));
                __Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos__v0 
                    = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_next;
                if ((1U & ((~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_fcs_reg)) 
                           & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_frame_reg))))) {
                    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_toggle 
                        = (1U & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_toggle)));
                    vlSelf->__Vdlyvset__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v1 = 1U;
                    vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v1 
                        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start;
                    vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v2 
                        = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start)));
                    vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v3 
                        = (0x7fffU & ((IData)(2U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start)));
                    vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v4 
                        = (0x7fffU & ((IData)(3U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start)));
                    vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v5 
                        = (0x7fffU & ((IData)(4U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start)));
                    vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v6 
                        = (0x7fffU & ((IData)(5U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start)));
                    vlSelf->__Vdlyvval__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v7 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_addr_axis)));
                    vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v7 
                        = (0x7fffU & ((IData)(6U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start)));
                    vlSelf->__Vdlyvval__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v8 
                        = (7U & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_addr_axis) 
                                 >> 8U));
                    vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v8 
                        = (0x7fffU & ((IData)(7U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start)));
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_wr_ptr 
                        = (0x7fffU & ((IData)(9U) + 
                                      (((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start) 
                                        + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_addr_axis)) 
                                       + (3U & ((IData)(4U) 
                                                - (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_addr_axis))))))));
                    VL_WRITEF_NX("[%0t] RX: Complete %0# bytes, CRC=%08x OK\n[%0t] RX: FIFO will be stored at offset %0# (header/data values shown are STALE)\n[%0t] RX: (Debug note: actual bytecount=%0# will be written next cycle)\n[%0t] RX: (STALE) First 16 data bytes: %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,32,((IData)(1U) 
                                        + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_addr_axis)),
                                 32,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg_rev,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,15,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start),
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,32,((IData)(1U) 
                                        + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_addr_axis)),
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,8,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem
                                 [(0x7fffU & ((IData)(8U) 
                                              + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start)))],
                                 8,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem
                                 [(0x7fffU & ((IData)(9U) 
                                              + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start)))],
                                 8,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem
                                 [(0x7fffU & ((IData)(0xaU) 
                                              + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start)))],
                                 8,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem
                                 [(0x7fffU & ((IData)(0xbU) 
                                              + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start)))],
                                 8,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem
                                 [(0x7fffU & ((IData)(0xcU) 
                                              + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start)))],
                                 8,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem
                                 [(0x7fffU & ((IData)(0xdU) 
                                              + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start)))],
                                 8,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem
                                 [(0x7fffU & ((IData)(0xeU) 
                                              + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start)))],
                                 8,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem
                                 [(0x7fffU & ((IData)(0xfU) 
                                              + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start)))],
                                 8,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem
                                 [(0x7fffU & ((IData)(0x10U) 
                                              + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start)))],
                                 8,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem
                                 [(0x7fffU & ((IData)(0x11U) 
                                              + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start)))],
                                 8,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem
                                 [(0x7fffU & ((IData)(0x12U) 
                                              + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start)))],
                                 8,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem
                                 [(0x7fffU & ((IData)(0x13U) 
                                              + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start)))],
                                 8,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem
                                 [(0x7fffU & ((IData)(0x14U) 
                                              + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start)))],
                                 8,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem
                                 [(0x7fffU & ((IData)(0x15U) 
                                              + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start)))],
                                 8,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem
                                 [(0x7fffU & ((IData)(0x16U) 
                                              + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start)))],
                                 8,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem
                                 [(0x7fffU & ((IData)(0x17U) 
                                              + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start)))]);
                } else {
                    VL_WRITEF_NX("[%0t] RX: Complete with ERRORS (FCS=%b, Frame=%b)\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,1,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_fcs_reg),
                                 1,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_frame_reg);
                }
            }
            __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_addr_axis = 0U;
        }
    } else {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__sync = 0U;
        vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_toggle = 0U;
        __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_addr_axis = 0U;
        __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_dest_mac = 0ULL;
        vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_next = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_last = 0xfU;
        vlSelf->spi_eth_tb_top__DOT__ksz_rx_byte_count = 0U;
    }
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_enable_old 
        = __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_enable_old;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_busy 
        = __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_busy;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tlast 
        = __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tlast;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tvalid 
        = __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tvalid;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_addr_axis 
        = __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_addr_axis;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_dest_mac 
        = __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_dest_mac;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__byte_sync 
        = __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__byte_sync;
    if (vlSelf->__Vdlyvset__spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length__v0) {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos__v0] 
            = __Vdlyvval__spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos__v0;
    }
}

VL_INLINE_OPT void Vspi_eth_tb_top___024root___nba_sequent__TOP__2(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_txd_reg 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_txd_next;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_msn_reg 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_msn_next;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_odd_reg 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_odd_next;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tuser_reg 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tuser_next;
    if (vlSelf->rst_i) {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__mii_locked = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__mii_odd = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg = 0xffffffffU;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg = 0xffffffffU;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_cnt = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state = 0xffffffffU;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_reg = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state = 0xffffffffU;
    } else {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
            = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__fcs_next;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
            = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__fcs_next;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_cnt 
            = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_cnt_next;
        if (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__reset_crc) {
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state = 0xffffffffU;
        } else if (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__update_crc) {
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_next;
        }
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg 
            = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_next;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg 
            = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_next;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_reg 
            = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_next;
        if (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__reset_crc) {
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state = 0xffffffffU;
        } else if (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__update_crc) {
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_next;
        }
    }
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_next;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_er_reg 
        = ((1U & (~ (IData)(vlSelf->rst_i))) && (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_er_next));
    if ((1U & (~ (IData)(vlSelf->rst_i)))) {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__ifg_reg 
            = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__ifg_next;
    }
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d4 
        = ((1U & (~ (IData)(vlSelf->rst_i))) && ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d3) 
                                                 & (IData)(vlSelf->rx_valid)));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d4 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d3;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d3;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_en_reg 
        = ((1U & (~ (IData)(vlSelf->rst_i))) && (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_en_next));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_axis_tready_reg 
        = ((1U & (~ (IData)(vlSelf->rst_i))) && (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_axis_tready_next));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tdata_reg 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tdata_next;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tlast_reg 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tlast_next;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tvalid_reg 
        = ((1U & (~ (IData)(vlSelf->rst_i))) && (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tvalid_next));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_fcs_reg 
        = ((1U & (~ (IData)(vlSelf->rst_i))) && (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_fcs_next));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_frame_reg 
        = ((1U & (~ (IData)(vlSelf->rst_i))) && (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_frame_next));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_msn_next 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_msn_reg;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_next 
        = (((VL_REDXOR_32((vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                           & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                           [0x1fU])) ^ VL_REDXOR_32(
                                                    ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                     & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                     [0x1fU]))) 
            << 0x1fU) | ((0x40000000U & ((VL_REDXOR_32(
                                                       (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                        & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                        [0x1eU])) 
                                          ^ VL_REDXOR_32(
                                                         ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                          & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                          [0x1eU]))) 
                                         << 0x1eU)) 
                         | ((0x20000000U & ((VL_REDXOR_32(
                                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                           & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                           [0x1dU])) 
                                             ^ VL_REDXOR_32(
                                                            ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                             & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                             [0x1dU]))) 
                                            << 0x1dU)) 
                            | ((0x10000000U & ((VL_REDXOR_32(
                                                             (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                              & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                              [0x1cU])) 
                                                ^ VL_REDXOR_32(
                                                               ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                [0x1cU]))) 
                                               << 0x1cU)) 
                               | ((0x8000000U & ((VL_REDXOR_32(
                                                               (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                [0x1bU])) 
                                                  ^ 
                                                  VL_REDXOR_32(
                                                               ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                [0x1bU]))) 
                                                 << 0x1bU)) 
                                  | ((0x4000000U & 
                                      ((VL_REDXOR_32(
                                                     (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                      & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                      [0x1aU])) 
                                        ^ VL_REDXOR_32(
                                                       ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                        & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                        [0x1aU]))) 
                                       << 0x1aU)) | 
                                     ((0x2000000U & 
                                       ((VL_REDXOR_32(
                                                      (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                       & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                       [0x19U])) 
                                         ^ VL_REDXOR_32(
                                                        ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                         & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                         [0x19U]))) 
                                        << 0x19U)) 
                                      | ((0x1000000U 
                                          & ((VL_REDXOR_32(
                                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                            & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                            [0x18U])) 
                                              ^ VL_REDXOR_32(
                                                             ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                              & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                              [0x18U]))) 
                                             << 0x18U)) 
                                         | ((0x800000U 
                                             & ((VL_REDXOR_32(
                                                              (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                               & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                               [0x17U])) 
                                                 ^ 
                                                 VL_REDXOR_32(
                                                              ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                               & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                               [0x17U]))) 
                                                << 0x17U)) 
                                            | ((0x400000U 
                                                & ((VL_REDXOR_32(
                                                                 (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                                  & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                  [0x16U])) 
                                                    ^ 
                                                    VL_REDXOR_32(
                                                                 ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                                  & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                  [0x16U]))) 
                                                   << 0x16U)) 
                                               | ((0x200000U 
                                                   & ((VL_REDXOR_32(
                                                                    (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                                     & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                     [0x15U])) 
                                                       ^ 
                                                       VL_REDXOR_32(
                                                                    ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                                     & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                     [0x15U]))) 
                                                      << 0x15U)) 
                                                  | ((0x100000U 
                                                      & ((VL_REDXOR_32(
                                                                       (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                                        & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                        [0x14U])) 
                                                          ^ 
                                                          VL_REDXOR_32(
                                                                       ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                                        & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                        [0x14U]))) 
                                                         << 0x14U)) 
                                                     | ((0x80000U 
                                                         & ((VL_REDXOR_32(
                                                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                                           & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                           [0x13U])) 
                                                             ^ 
                                                             VL_REDXOR_32(
                                                                          ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                                           & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                           [0x13U]))) 
                                                            << 0x13U)) 
                                                        | ((0x40000U 
                                                            & ((VL_REDXOR_32(
                                                                             (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                                              & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                              [0x12U])) 
                                                                ^ 
                                                                VL_REDXOR_32(
                                                                             ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                                              & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                              [0x12U]))) 
                                                               << 0x12U)) 
                                                           | ((0x20000U 
                                                               & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [0x11U])) 
                                                                   ^ 
                                                                   VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [0x11U]))) 
                                                                  << 0x11U)) 
                                                              | ((0x10000U 
                                                                  & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [0x10U])) 
                                                                      ^ 
                                                                      VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [0x10U]))) 
                                                                     << 0x10U)) 
                                                                 | ((0x8000U 
                                                                     & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [0xfU])) 
                                                                         ^ 
                                                                         VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [0xfU]))) 
                                                                        << 0xfU)) 
                                                                    | ((0x4000U 
                                                                        & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [0xeU])) 
                                                                            ^ 
                                                                            VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [0xeU]))) 
                                                                           << 0xeU)) 
                                                                       | ((0x2000U 
                                                                           & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [0xdU])) 
                                                                               ^ 
                                                                               VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [0xdU]))) 
                                                                              << 0xdU)) 
                                                                          | ((0x1000U 
                                                                              & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [0xcU])) 
                                                                                ^ 
                                                                                VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [0xcU]))) 
                                                                                << 0xcU)) 
                                                                             | ((0x800U 
                                                                                & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [0xbU])) 
                                                                                ^ 
                                                                                VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [0xbU]))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [0xaU])) 
                                                                                ^ 
                                                                                VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [0xaU]))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [9U])) 
                                                                                ^ 
                                                                                VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [9U]))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [8U])) 
                                                                                ^ 
                                                                                VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [8U]))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [7U])) 
                                                                                ^ 
                                                                                VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [7U]))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [6U])) 
                                                                                ^ 
                                                                                VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [6U]))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [5U])) 
                                                                                ^ 
                                                                                VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [5U]))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [4U])) 
                                                                                ^ 
                                                                                VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [4U]))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [3U])) 
                                                                                ^ 
                                                                                VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [3U]))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [2U])) 
                                                                                ^ 
                                                                                VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [2U]))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [1U])) 
                                                                                ^ 
                                                                                VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [1U]))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [0U])) 
                                                                                ^ 
                                                                                VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [0U])))))))))))))))))))))))))))))))))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_out 
        = ((0x80U & ((VL_REDXOR_32((vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                    & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                    [7U])) ^ VL_REDXOR_32(
                                                          ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                           & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                           [7U]))) 
                     << 7U)) | ((0x40U & ((VL_REDXOR_32(
                                                        (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                         & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                         [6U])) 
                                           ^ VL_REDXOR_32(
                                                          ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                           & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                           [6U]))) 
                                          << 6U)) | 
                                ((0x20U & ((VL_REDXOR_32(
                                                         (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                          & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                          [5U])) 
                                            ^ VL_REDXOR_32(
                                                           ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                            & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                            [5U]))) 
                                           << 5U)) 
                                 | ((0x10U & ((VL_REDXOR_32(
                                                            (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                             & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                             [4U])) 
                                               ^ VL_REDXOR_32(
                                                              ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                               & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                               [4U]))) 
                                              << 4U)) 
                                    | ((8U & ((VL_REDXOR_32(
                                                            (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                             & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                             [3U])) 
                                               ^ VL_REDXOR_32(
                                                              ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                               & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                               [3U]))) 
                                              << 3U)) 
                                       | ((4U & ((VL_REDXOR_32(
                                                               (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                                [2U])) 
                                                  ^ 
                                                  VL_REDXOR_32(
                                                               ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                                [2U]))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              ((VL_REDXOR_32(
                                                             (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                              & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                              [1U])) 
                                                ^ VL_REDXOR_32(
                                                               ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                                [1U]))) 
                                               << 1U)) 
                                             | (1U 
                                                & (VL_REDXOR_32(
                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                                                 & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                                 [0U])) 
                                                   ^ 
                                                   VL_REDXOR_32(
                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg) 
                                                                 & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                                 [0U])))))))))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__reset_crc = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__update_crc = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__fcs_next 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg;
    if ((4U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg))) {
        if ((2U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg))) {
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__reset_crc = 1U;
        }
        if ((1U & (~ ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg)))) {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__update_crc = 1U;
            }
            if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg))) {
                if ((3U <= (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg))) {
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__fcs_next 
                        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state;
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg) 
                      >> 1U)))) {
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__reset_crc = 1U;
        }
        if ((2U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg))) {
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__update_crc = 1U;
        }
    }
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__update_crc = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__reset_crc = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tvalid_next = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d3 
        = ((1U & (~ (IData)(vlSelf->rst_i))) && ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d2) 
                                                 & (IData)(vlSelf->rx_valid)));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_cnt_next 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_cnt;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tlast_next = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d3 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d2;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_out 
        = ((0x80U & ((VL_REDXOR_32((vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                    & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                    [7U])) ^ VL_REDXOR_32(
                                                          ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                           & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                           [7U]))) 
                     << 7U)) | ((0x40U & ((VL_REDXOR_32(
                                                        (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                         & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                         [6U])) 
                                           ^ VL_REDXOR_32(
                                                          ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                           & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                           [6U]))) 
                                          << 6U)) | 
                                ((0x20U & ((VL_REDXOR_32(
                                                         (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                          & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                          [5U])) 
                                            ^ VL_REDXOR_32(
                                                           ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                            & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                            [5U]))) 
                                           << 5U)) 
                                 | ((0x10U & ((VL_REDXOR_32(
                                                            (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                             & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                             [4U])) 
                                               ^ VL_REDXOR_32(
                                                              ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                               & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                               [4U]))) 
                                              << 4U)) 
                                    | ((8U & ((VL_REDXOR_32(
                                                            (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                             & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                             [3U])) 
                                               ^ VL_REDXOR_32(
                                                              ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                               & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                               [3U]))) 
                                              << 3U)) 
                                       | ((4U & ((VL_REDXOR_32(
                                                               (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                                [2U])) 
                                                  ^ 
                                                  VL_REDXOR_32(
                                                               ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                                [2U]))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              ((VL_REDXOR_32(
                                                             (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                              & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                              [1U])) 
                                                ^ VL_REDXOR_32(
                                                               ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                                [1U]))) 
                                               << 1U)) 
                                             | (1U 
                                                & (VL_REDXOR_32(
                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                                 & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                                 [0U])) 
                                                   ^ 
                                                   VL_REDXOR_32(
                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                                 & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                                 [0U])))))))))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_next = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_next 
        = (((VL_REDXOR_32((vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                           & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                           [0x1fU])) ^ VL_REDXOR_32(
                                                    ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                     & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                     [0x1fU]))) 
            << 0x1fU) | ((0x40000000U & ((VL_REDXOR_32(
                                                       (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                        & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                        [0x1eU])) 
                                          ^ VL_REDXOR_32(
                                                         ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                          & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                          [0x1eU]))) 
                                         << 0x1eU)) 
                         | ((0x20000000U & ((VL_REDXOR_32(
                                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                           & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                           [0x1dU])) 
                                             ^ VL_REDXOR_32(
                                                            ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                             & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                             [0x1dU]))) 
                                            << 0x1dU)) 
                            | ((0x10000000U & ((VL_REDXOR_32(
                                                             (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                              & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                              [0x1cU])) 
                                                ^ VL_REDXOR_32(
                                                               ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                [0x1cU]))) 
                                               << 0x1cU)) 
                               | ((0x8000000U & ((VL_REDXOR_32(
                                                               (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                [0x1bU])) 
                                                  ^ 
                                                  VL_REDXOR_32(
                                                               ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                [0x1bU]))) 
                                                 << 0x1bU)) 
                                  | ((0x4000000U & 
                                      ((VL_REDXOR_32(
                                                     (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                      & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                      [0x1aU])) 
                                        ^ VL_REDXOR_32(
                                                       ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                        & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                        [0x1aU]))) 
                                       << 0x1aU)) | 
                                     ((0x2000000U & 
                                       ((VL_REDXOR_32(
                                                      (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                       & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                       [0x19U])) 
                                         ^ VL_REDXOR_32(
                                                        ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                         & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                         [0x19U]))) 
                                        << 0x19U)) 
                                      | ((0x1000000U 
                                          & ((VL_REDXOR_32(
                                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                            & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                            [0x18U])) 
                                              ^ VL_REDXOR_32(
                                                             ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                              & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                              [0x18U]))) 
                                             << 0x18U)) 
                                         | ((0x800000U 
                                             & ((VL_REDXOR_32(
                                                              (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                               & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                               [0x17U])) 
                                                 ^ 
                                                 VL_REDXOR_32(
                                                              ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                               & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                               [0x17U]))) 
                                                << 0x17U)) 
                                            | ((0x400000U 
                                                & ((VL_REDXOR_32(
                                                                 (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                                  & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                  [0x16U])) 
                                                    ^ 
                                                    VL_REDXOR_32(
                                                                 ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                                  & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                  [0x16U]))) 
                                                   << 0x16U)) 
                                               | ((0x200000U 
                                                   & ((VL_REDXOR_32(
                                                                    (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                                     & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                     [0x15U])) 
                                                       ^ 
                                                       VL_REDXOR_32(
                                                                    ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                                     & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                     [0x15U]))) 
                                                      << 0x15U)) 
                                                  | ((0x100000U 
                                                      & ((VL_REDXOR_32(
                                                                       (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                                        & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                        [0x14U])) 
                                                          ^ 
                                                          VL_REDXOR_32(
                                                                       ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                                        & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                        [0x14U]))) 
                                                         << 0x14U)) 
                                                     | ((0x80000U 
                                                         & ((VL_REDXOR_32(
                                                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                                           & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                           [0x13U])) 
                                                             ^ 
                                                             VL_REDXOR_32(
                                                                          ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                                           & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                           [0x13U]))) 
                                                            << 0x13U)) 
                                                        | ((0x40000U 
                                                            & ((VL_REDXOR_32(
                                                                             (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                                              & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                              [0x12U])) 
                                                                ^ 
                                                                VL_REDXOR_32(
                                                                             ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                                              & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                              [0x12U]))) 
                                                               << 0x12U)) 
                                                           | ((0x20000U 
                                                               & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [0x11U])) 
                                                                   ^ 
                                                                   VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [0x11U]))) 
                                                                  << 0x11U)) 
                                                              | ((0x10000U 
                                                                  & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [0x10U])) 
                                                                      ^ 
                                                                      VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [0x10U]))) 
                                                                     << 0x10U)) 
                                                                 | ((0x8000U 
                                                                     & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [0xfU])) 
                                                                         ^ 
                                                                         VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [0xfU]))) 
                                                                        << 0xfU)) 
                                                                    | ((0x4000U 
                                                                        & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [0xeU])) 
                                                                            ^ 
                                                                            VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [0xeU]))) 
                                                                           << 0xeU)) 
                                                                       | ((0x2000U 
                                                                           & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [0xdU])) 
                                                                               ^ 
                                                                               VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [0xdU]))) 
                                                                              << 0xdU)) 
                                                                          | ((0x1000U 
                                                                              & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [0xcU])) 
                                                                                ^ 
                                                                                VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [0xcU]))) 
                                                                                << 0xcU)) 
                                                                             | ((0x800U 
                                                                                & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [0xbU])) 
                                                                                ^ 
                                                                                VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [0xbU]))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [0xaU])) 
                                                                                ^ 
                                                                                VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [0xaU]))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [9U])) 
                                                                                ^ 
                                                                                VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [9U]))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [8U])) 
                                                                                ^ 
                                                                                VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [8U]))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [7U])) 
                                                                                ^ 
                                                                                VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [7U]))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [6U])) 
                                                                                ^ 
                                                                                VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [6U]))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [5U])) 
                                                                                ^ 
                                                                                VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [5U]))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [4U])) 
                                                                                ^ 
                                                                                VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [4U]))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [3U])) 
                                                                                ^ 
                                                                                VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [3U]))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [2U])) 
                                                                                ^ 
                                                                                VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [2U]))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [1U])) 
                                                                                ^ 
                                                                                VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [1U]))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (VL_REDXOR_32(
                                                                                (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state
                                                                                [0U])) 
                                                                                ^ 
                                                                                VL_REDXOR_32(
                                                                                ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4) 
                                                                                & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data
                                                                                [0U])))))))))))))))))))))))))))))))))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tdata_next = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d3 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d2;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__fcs_next 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d2 
        = ((1U & (~ (IData)(vlSelf->rst_i))) && ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d1) 
                                                 & (IData)(vlSelf->rx_valid)));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d2 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d1;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d2 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d1;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d1 
        = ((1U & (~ (IData)(vlSelf->rst_i))) && ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d0) 
                                                 & (IData)(vlSelf->rx_valid)));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d1 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d0;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d1 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d0;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d0 
        = ((1U & (~ (IData)(vlSelf->rst_i))) && (IData)(vlSelf->rx_valid));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d0 = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d0 
        = vlSelf->rx_data;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_fcs_next = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_frame_next = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tuser_next = 0U;
    if ((1U & (~ ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_reg) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_reg))) {
            if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_reg))) {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__update_crc = 1U;
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tvalid_next = 1U;
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_cnt_next 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_cnt)));
                if ((3U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_cnt))) {
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tlast_next = 1U;
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_next = 0U;
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__fcs_next 
                        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_next;
                } else {
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_next = 3U;
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__fcs_next = 0U;
                }
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tdata_next 
                    = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4;
            } else {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_next 
                    = ((IData)(vlSelf->rx_valid) ? 2U
                        : 0U);
            }
        } else if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_reg))) {
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__update_crc = 1U;
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tvalid_next = 1U;
            if ((1U & (~ ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d4) 
                          & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d4))))) {
                if ((1U & (~ (IData)(vlSelf->rx_valid)))) {
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_cnt_next = 0U;
                }
            }
            if (((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d4) 
                 & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d4))) {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tlast_next = 1U;
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_next = 2U;
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__fcs_next = 0xdeadbeefU;
            } else {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_next 
                    = ((IData)(vlSelf->rx_valid) ? 1U
                        : 3U);
            }
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tdata_next 
                = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4;
        } else {
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_next 
                = ((((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d4) 
                     & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d4))) 
                    & (0xd5U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4)))
                    ? 1U : 0U);
        }
        if ((1U & (~ ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_reg) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_reg)))) {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__reset_crc = 1U;
            }
            if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_reg))) {
                if ((1U & (~ ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d4) 
                              & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d4))))) {
                    if ((1U & (~ (IData)(vlSelf->rx_valid)))) {
                        if ((1U & (~ ((((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d0) 
                                        | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d1)) 
                                       | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d2)) 
                                      | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d3))))) {
                            if (((((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d0) 
                                   << 0x18U) | (((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d1) 
                                                 << 0x10U) 
                                                | (((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d2) 
                                                    << 8U) 
                                                   | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d3)))) 
                                 != (~ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_next))) {
                                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_fcs_next = 1U;
                            }
                        }
                    }
                }
                if (((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d4) 
                     & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d4))) {
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_frame_next = 1U;
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tuser_next = 1U;
                } else if ((1U & (~ (IData)(vlSelf->rx_valid)))) {
                    if (((((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d0) 
                           | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d1)) 
                          | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d2)) 
                         | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d3))) {
                        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_frame_next = 1U;
                    } else if (((((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d0) 
                                  << 0x18U) | (((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d1) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d2) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d3)))) 
                                != (~ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_next))) {
                        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_frame_next = 1U;
                    }
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tuser_next 
                        = (((((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d0) 
                              | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d1)) 
                             | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d2)) 
                            | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d3)) 
                           || ((((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d0) 
                                 << 0x18U) | (((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d1) 
                                               << 0x10U) 
                                              | (((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d2) 
                                                  << 8U) 
                                                 | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d3)))) 
                               != (~ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_next)));
                }
            }
        }
    }
}

extern const VlUnpacked<CData/*0:0*/, 64> Vspi_eth_tb_top__ConstPool__TABLE_hc238cb4c_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vspi_eth_tb_top__ConstPool__TABLE_hda9bcf77_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vspi_eth_tb_top__ConstPool__TABLE_hdbf53d21_0;

VL_INLINE_OPT void Vspi_eth_tb_top___024root___nba_sequent__TOP__3(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___nba_sequent__TOP__3\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*0:0*/ __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__ack_q;
    __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__ack_q = 0;
    CData/*0:0*/ __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_rd_pending;
    __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_rd_pending = 0;
    SData/*8:0*/ __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v0;
    __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v0;
    __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v0;
    __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v0;
    __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v0 = 0;
    SData/*8:0*/ __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v1;
    __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v1;
    __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v1;
    __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v1;
    __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v1 = 0;
    SData/*8:0*/ __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v2;
    __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v2;
    __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v2 = 0;
    CData/*7:0*/ __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v2;
    __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v2;
    __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v2 = 0;
    SData/*8:0*/ __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v3;
    __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v3;
    __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v3 = 0;
    CData/*7:0*/ __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v3;
    __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v3;
    __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v3 = 0;
    SData/*8:0*/ __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v0;
    __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v0;
    __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v0;
    __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v0;
    __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v0 = 0;
    SData/*8:0*/ __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v1;
    __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v1;
    __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v1;
    __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v1;
    __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v1 = 0;
    SData/*8:0*/ __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v2;
    __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v2;
    __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v2 = 0;
    CData/*7:0*/ __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v2;
    __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v2;
    __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v2 = 0;
    SData/*8:0*/ __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v3;
    __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v3;
    __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v3 = 0;
    CData/*7:0*/ __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v3;
    __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v3;
    __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v3 = 0;
    SData/*8:0*/ __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v4;
    __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v4 = 0;
    CData/*4:0*/ __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v4;
    __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v4 = 0;
    CData/*7:0*/ __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v4;
    __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v4 = 0;
    CData/*0:0*/ __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v4;
    __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v4 = 0;
    SData/*8:0*/ __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v5;
    __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v5 = 0;
    CData/*4:0*/ __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v5;
    __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v5 = 0;
    CData/*7:0*/ __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v5;
    __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v5 = 0;
    CData/*0:0*/ __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v5;
    __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v5 = 0;
    SData/*8:0*/ __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v6;
    __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v6 = 0;
    CData/*4:0*/ __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v6;
    __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v6 = 0;
    CData/*7:0*/ __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v6;
    __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v6 = 0;
    CData/*0:0*/ __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v6;
    __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v6 = 0;
    SData/*8:0*/ __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v7;
    __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v7 = 0;
    CData/*4:0*/ __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v7;
    __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v7 = 0;
    CData/*7:0*/ __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v7;
    __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v7 = 0;
    CData/*0:0*/ __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v7;
    __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v7 = 0;
    // Body
    __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v0 = 0U;
    __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v1 = 0U;
    __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v2 = 0U;
    __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v3 = 0U;
    __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_rd_pending 
        = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_rd_pending;
    __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__ack_q 
        = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__ack_q;
    __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v0 = 0U;
    __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v1 = 0U;
    __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v2 = 0U;
    __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v3 = 0U;
    __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v4 = 0U;
    __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v5 = 0U;
    __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v6 = 0U;
    __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v7 = 0U;
    if (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_cpu_req) {
        if (vlSelf->wb_we_i) {
            if ((1U & (IData)(vlSelf->wb_sel_i))) {
                __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v0 
                    = (0xffU & vlSelf->wb_dat_i);
                __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v0 = 1U;
                __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v0 = 0U;
                __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v0 
                    = (0x1ffU & ((IData)(vlSelf->wb_adr_i) 
                                 >> 2U));
            }
            if ((2U & (IData)(vlSelf->wb_sel_i))) {
                __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v1 
                    = (0xffU & (vlSelf->wb_dat_i >> 8U));
                __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v1 = 1U;
                __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v1 = 8U;
                __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v1 
                    = (0x1ffU & ((IData)(vlSelf->wb_adr_i) 
                                 >> 2U));
            }
            if ((4U & (IData)(vlSelf->wb_sel_i))) {
                __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v2 
                    = (0xffU & (vlSelf->wb_dat_i >> 0x10U));
                __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v2 = 1U;
                __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v2 = 0x10U;
                __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v2 
                    = (0x1ffU & ((IData)(vlSelf->wb_adr_i) 
                                 >> 2U));
            }
            if ((8U & (IData)(vlSelf->wb_sel_i))) {
                __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v3 
                    = (vlSelf->wb_dat_i >> 0x18U);
                __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v3 = 1U;
                __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v3 = 0x18U;
                __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v3 
                    = (0x1ffU & ((IData)(vlSelf->wb_adr_i) 
                                 >> 2U));
            }
        }
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_cpu_rdata 
            = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem
            [(0x1ffU & ((IData)(vlSelf->wb_adr_i) >> 2U))];
    }
    __Vtableidx1 = (((IData)(vlSelf->wb_we_i) << 5U) 
                    | ((0x10U & ((~ ((IData)(vlSelf->wb_adr_i) 
                                     >> 0xcU)) << 4U)) 
                       | (((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__ack_q) 
                           << 3U) | (((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__wb_req) 
                                      << 2U) | (((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_rd_pending) 
                                                 << 1U) 
                                                | (IData)(vlSelf->rst_i))))));
    __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__ack_q 
        = Vspi_eth_tb_top__ConstPool__TABLE_hc238cb4c_0
        [__Vtableidx1];
    if ((2U & Vspi_eth_tb_top__ConstPool__TABLE_hda9bcf77_0
         [__Vtableidx1])) {
        __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_rd_pending 
            = Vspi_eth_tb_top__ConstPool__TABLE_hdbf53d21_0
            [__Vtableidx1];
    }
    if (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_cpu_req) {
        if (vlSelf->wb_we_i) {
            if ((1U & (IData)(vlSelf->wb_sel_i))) {
                __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v0 
                    = (0xffU & vlSelf->wb_dat_i);
                __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v0 = 1U;
                __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v0 = 0U;
                __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v0 
                    = (0x1ffU & ((IData)(vlSelf->wb_adr_i) 
                                 >> 2U));
            }
            if ((2U & (IData)(vlSelf->wb_sel_i))) {
                __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v1 
                    = (0xffU & (vlSelf->wb_dat_i >> 8U));
                __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v1 = 1U;
                __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v1 = 8U;
                __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v1 
                    = (0x1ffU & ((IData)(vlSelf->wb_adr_i) 
                                 >> 2U));
            }
            if ((4U & (IData)(vlSelf->wb_sel_i))) {
                __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v2 
                    = (0xffU & (vlSelf->wb_dat_i >> 0x10U));
                __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v2 = 1U;
                __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v2 = 0x10U;
                __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v2 
                    = (0x1ffU & ((IData)(vlSelf->wb_adr_i) 
                                 >> 2U));
            }
            if ((8U & (IData)(vlSelf->wb_sel_i))) {
                __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v3 
                    = (vlSelf->wb_dat_i >> 0x18U);
                __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v3 = 1U;
                __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v3 = 0x18U;
                __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v3 
                    = (0x1ffU & ((IData)(vlSelf->wb_adr_i) 
                                 >> 2U));
            }
        }
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_cpu_rdata 
            = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem
            [(0x1ffU & ((IData)(vlSelf->wb_adr_i) >> 2U))];
    }
    if (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_wr_pending) {
        if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_b_be))) {
            __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v4 
                = (0xffU & vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_b_wdata);
            __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v4 = 1U;
            __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v4 = 0U;
            __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v4 
                = (0x1ffU & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_byte_addr) 
                             >> 2U));
        }
        if ((2U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_b_be))) {
            __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v5 
                = (0xffU & (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_b_wdata 
                            >> 8U));
            __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v5 = 1U;
            __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v5 = 8U;
            __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v5 
                = (0x1ffU & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_byte_addr) 
                             >> 2U));
        }
        if ((4U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_b_be))) {
            __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v6 
                = (0xffU & (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_b_wdata 
                            >> 0x10U));
            __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v6 = 1U;
            __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v6 = 0x10U;
            __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v6 
                = (0x1ffU & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_byte_addr) 
                             >> 2U));
        }
        if ((8U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_b_be))) {
            __Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v7 
                = (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_b_wdata 
                   >> 0x18U);
            __Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v7 = 1U;
            __Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v7 = 0x18U;
            __Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v7 
                = (0x1ffU & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_byte_addr) 
                             >> 2U));
        }
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_bram_unused_rdata 
            = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem
            [(0x1ffU & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_byte_addr) 
                        >> 2U))];
    }
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_q 
        = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_d;
    if (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__sample_edge) {
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__cipo_shift_q 
            = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__cipo_shift_d;
    }
    if (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_fetch_pending) {
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_bram_rdata 
            = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem
            [(0x1ffU & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_byte_addr) 
                        >> 2U))];
    }
    if ((((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__wb_req) 
          & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__ack_q))) 
         & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_rd_pending)))) {
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__is_tx_q 
            = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__is_tx;
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__is_reg_q 
            = (1U & (~ ((IData)(vlSelf->wb_adr_i) >> 0xcU)));
    }
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__byte_count_q 
        = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__byte_count_d;
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__sample_phase_q 
        = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__sample_phase_d;
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_counter_q 
        = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_counter_d;
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__reg_rdata_q 
        = ((0x80U & (IData)(vlSelf->wb_adr_i)) ? 0U
            : ((0x40U & (IData)(vlSelf->wb_adr_i)) ? 0U
                : ((0x20U & (IData)(vlSelf->wb_adr_i))
                    ? ((0x10U & (IData)(vlSelf->wb_adr_i))
                        ? 0U : ((8U & (IData)(vlSelf->wb_adr_i))
                                 ? ((4U & (IData)(vlSelf->wb_adr_i))
                                     ? 0U : (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cs_reg))
                                 : 0U)) : ((0x10U & (IData)(vlSelf->wb_adr_i))
                                            ? ((8U 
                                                & (IData)(vlSelf->wb_adr_i))
                                                ? 0U
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelf->wb_adr_i))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q)) 
                                                    << 0x1aU)
                                                    : 0U))
                                            : ((8U 
                                                & (IData)(vlSelf->wb_adr_i))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelf->wb_adr_i))
                                                    ? vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cfg_reg
                                                    : 0U)
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelf->wb_adr_i))
                                                    ? 
                                                   ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__intr_enable_complete) 
                                                    << 4U)
                                                    : 
                                                   ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__intr_complete) 
                                                    << 4U)))))));
    if (__Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v0) {
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem[__Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v0))) 
                & vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem
                [__Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v0) 
                                   << (IData)(__Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v0))));
    }
    if (__Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v1) {
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem[__Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v1))) 
                & vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem
                [__Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v1) 
                                   << (IData)(__Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v1))));
    }
    if (__Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v2) {
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem[__Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v2))) 
                & vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem
                [__Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v2) 
                                   << (IData)(__Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v2))));
    }
    if (__Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v3) {
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem[__Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v3))) 
                & vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem
                [__Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v3) 
                                   << (IData)(__Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem__v3))));
    }
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_rd_pending 
        = __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_rd_pending;
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__ack_q 
        = __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__ack_q;
    if (__Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v0) {
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem[__Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v0))) 
                & vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem
                [__Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v0) 
                                   << (IData)(__Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v0))));
    }
    if (__Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v1) {
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem[__Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v1))) 
                & vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem
                [__Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v1) 
                                   << (IData)(__Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v1))));
    }
    if (__Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v2) {
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem[__Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v2))) 
                & vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem
                [__Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v2) 
                                   << (IData)(__Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v2))));
    }
    if (__Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v3) {
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem[__Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v3))) 
                & vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem
                [__Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v3) 
                                   << (IData)(__Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v3))));
    }
    if (__Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v4) {
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem[__Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v4] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v4))) 
                & vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem
                [__Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v4]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v4) 
                                   << (IData)(__Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v4))));
    }
    if (__Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v5) {
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem[__Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v5] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v5))) 
                & vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem
                [__Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v5]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v5) 
                                   << (IData)(__Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v5))));
    }
    if (__Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v6) {
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem[__Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v6] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v6))) 
                & vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem
                [__Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v6]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v6) 
                                   << (IData)(__Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v6))));
    }
    if (__Vdlyvset__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v7) {
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem[__Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v7] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v7))) 
                & vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem
                [__Vdlyvdim0__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v7]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v7) 
                                   << (IData)(__Vdlyvlsb__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem__v7))));
    }
    vlSelf->wb_ack_o = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__ack_q;
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT____VdfgRegularize_h28ad532a_1_2 
        = (1U & ((~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__ack_q)) 
                 & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_rd_pending))));
    vlSelf->wb_dat_o = ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__is_reg_q)
                         ? vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__reg_rdata_q
                         : ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__is_tx_q)
                             ? vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_cpu_rdata
                             : vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_cpu_rdata));
    if (vlSelf->rst_i) {
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__intr_enable_complete = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cs_reg = 0xfU;
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cfg_reg = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__intr_complete = 0U;
    } else {
        if (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__reg_wr) {
            if ((1U == (0x3fU & ((IData)(vlSelf->wb_adr_i) 
                                 >> 2U)))) {
                vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__intr_enable_complete 
                    = (1U & (vlSelf->wb_dat_i >> 4U));
            }
            if ((1U != (0x3fU & ((IData)(vlSelf->wb_adr_i) 
                                 >> 2U)))) {
                if ((3U != (0x3fU & ((IData)(vlSelf->wb_adr_i) 
                                     >> 2U)))) {
                    if ((0xaU == (0x3fU & ((IData)(vlSelf->wb_adr_i) 
                                           >> 2U)))) {
                        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cs_reg 
                            = (0xfU & vlSelf->wb_dat_i);
                    }
                }
                if ((3U == (0x3fU & ((IData)(vlSelf->wb_adr_i) 
                                     >> 2U)))) {
                    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cfg_reg 
                        = vlSelf->wb_dat_i;
                }
            }
        }
        if (((~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_idle_q)) 
             & (0U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q)))) {
            vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__intr_complete = 1U;
        } else if (((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__reg_wr) 
                    & (IData)(((0U == (0xfcU & (IData)(vlSelf->wb_adr_i))) 
                               & (vlSelf->wb_dat_i 
                                  >> 4U))))) {
            vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__intr_complete = 0U;
        }
    }
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_cpu_req 
        = ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__wb_req) 
           & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__is_tx) 
              & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT____VdfgRegularize_h28ad532a_1_2)));
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_cpu_req 
        = ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__wb_req) 
           & ((IData)((0x1800U == (0x1800U & (IData)(vlSelf->wb_adr_i)))) 
              & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT____VdfgRegularize_h28ad532a_1_2)));
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_idle_q 
        = ((IData)(vlSelf->rst_i) | (0U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q)));
}

VL_INLINE_OPT void Vspi_eth_tb_top___024root___nba_sequent__TOP__4(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___nba_sequent__TOP__4\n"); );
    // Init
    SData/*10:0*/ __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_byte_addr;
    __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_byte_addr = 0;
    CData/*0:0*/ __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_fetch_pending;
    __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_fetch_pending = 0;
    CData/*0:0*/ __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_data_valid;
    __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_data_valid = 0;
    SData/*10:0*/ __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_count;
    __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_count = 0;
    // Body
    __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_fetch_pending 
        = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_fetch_pending;
    __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_byte_addr 
        = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_byte_addr;
    __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_data_valid 
        = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_data_valid;
    __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_count 
        = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_count;
    __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_fetch_pending 
        = ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rst_ni) 
           & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_start) 
              | (((0U != (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q)) 
                  & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_data_valid))) 
                 & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_fetch_pending)))));
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_wr_pending 
        = ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rst_ni) 
           && ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__data_out_valid_q) 
               & (0U != (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q))));
    if (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rst_ni) {
        if (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_start) {
            __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_byte_addr = 0U;
            __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_count = 0U;
        } else {
            if ((((0U != (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q)) 
                  & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_data_in_ready)) 
                 & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_data_valid))) {
                __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_byte_addr 
                    = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_byte_addr)));
            }
            if (((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__data_out_valid_q) 
                 & (0U != (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q)))) {
                __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_count 
                    = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_count)));
            }
        }
        if (((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_start) 
             | (0U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q)))) {
            __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_data_valid = 0U;
        } else if (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_fetch_pending) {
            __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_data_valid = 1U;
        } else if (((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_data_in_ready) 
                    & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_data_valid))) {
            __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_data_valid = 0U;
        }
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_byte_lane_q 
            = (3U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_byte_addr));
        if (((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__data_out_valid_q) 
             & (0U != (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q)))) {
            vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_byte_data 
                = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_data_out;
            vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_byte_addr 
                = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_count;
        }
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q 
            = (((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__reg_wr) 
                & (IData)(((0x10U == (0xfcU & (IData)(vlSelf->wb_adr_i))) 
                           & (vlSelf->wb_dat_i >> 0x1fU))))
                ? 0U : (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_d));
    } else {
        __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_byte_addr = 0U;
        __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_data_valid = 0U;
        __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_count = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_byte_lane_q = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_byte_data = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_byte_addr = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q = 0U;
    }
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_data_valid 
        = __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_data_valid;
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_fetch_pending 
        = __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_fetch_pending;
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_byte_addr 
        = __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_byte_addr;
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_count 
        = __Vdly__spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_count;
    if ((2U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_byte_addr))) {
        if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_byte_addr))) {
            vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_b_be = 8U;
            vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_b_wdata 
                = ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_byte_data) 
                   << 0x18U);
        } else {
            vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_b_be = 4U;
            vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_b_wdata 
                = ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_byte_data) 
                   << 0x10U);
        }
    } else if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_byte_addr))) {
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_b_be = 2U;
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_b_wdata 
            = ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_byte_data) 
               << 8U);
    } else {
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_b_be = 1U;
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_b_wdata 
            = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_byte_data;
    }
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__data_out_valid_q 
        = ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rst_ni) 
           && ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__sample_edge) 
               & (0U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_q))));
}

VL_INLINE_OPT void Vspi_eth_tb_top___024root___nba_sequent__TOP__5(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___nba_sequent__TOP__5\n"); );
    // Body
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_auto_release_pending 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_auto_release_pending;
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_rd_ptr 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_rd_ptr;
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__write_data 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data;
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_wr_ptr 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_wr_ptr;
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_header_count 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_header_count;
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync3 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync3;
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync2 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync2;
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync1 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync1;
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync3 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync3;
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync2 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync2;
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync1 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync1;
    vlSelf->__Vdly__spi_eth_tb_top__DOT__ksz_write_pulse 
        = vlSelf->spi_eth_tb_top__DOT__ksz_write_pulse;
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__opcode 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__opcode;
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__bit_counter 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__bit_counter;
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__spi_state_reg 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__spi_state_reg;
    vlSelf->__Vdlyvset__spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_mem__v0 = 0U;
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_first 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_first;
}

VL_INLINE_OPT void Vspi_eth_tb_top___024root___nba_sequent__TOP__6(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___nba_sequent__TOP__6\n"); );
    // Init
    SData/*15:0*/ __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_out;
    __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_out = 0;
    CData/*7:0*/ __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_byte_out;
    __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_byte_out = 0;
    // Body
    __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_byte_out 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_byte_out;
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_bit_count 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_bit_count;
    __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_out 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_out;
    if ((1U & ((~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rst_ni)) 
               | (IData)(vlSelf->spi_eth_tb_top__DOT____Vcellinp__u_ksz__csn)))) {
        vlSelf->spi_eth_tb_top__DOT__spi_cipo = 0U;
        __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_out = 0U;
        vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_bit_count = 0U;
    } else if (((2U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__opcode)) 
                & (3U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__spi_state_reg)))) {
        if ((0U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_bit_count))) {
            __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_byte_out 
                = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem
                [vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_rd_ptr];
            vlSelf->spi_eth_tb_top__DOT__spi_cipo = 
                (1U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem
                       [vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_rd_ptr] 
                       >> 7U));
            vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_bit_count = 7U;
        } else {
            vlSelf->spi_eth_tb_top__DOT__spi_cipo = 
                (1U & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_byte_out) 
                       >> (7U & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_bit_count) 
                                 - (IData)(1U)))));
            vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_bit_count 
                = (7U & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_bit_count) 
                         - (IData)(1U)));
        }
    } else if (((0U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__opcode)) 
                & (3U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__spi_state_reg)))) {
        if (vlSelf->spi_eth_tb_top__DOT__ksz_read_pulse) {
            vlSelf->spi_eth_tb_top__DOT__spi_cipo = 
                (1U & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_read) 
                       >> 7U));
            __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_out 
                = ((0xfe00U & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_read) 
                               << 9U)) | (0x1feU & 
                                          ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_read) 
                                           >> 7U)));
        } else {
            vlSelf->spi_eth_tb_top__DOT__spi_cipo = 
                (1U & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_out) 
                       >> 0xfU));
            __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_out 
                = (0xfffeU & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_out) 
                              << 1U));
        }
    }
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_out 
        = __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_out;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_byte_out 
        = __Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_byte_out;
}

VL_INLINE_OPT void Vspi_eth_tb_top___024root___nba_sequent__TOP__7(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___nba_sequent__TOP__7\n"); );
    // Body
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__register_ISR 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_ISR;
}

VL_INLINE_OPT void Vspi_eth_tb_top___024root___nba_comb__TOP__0(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_er_next = 0U;
    if ((1U & (~ ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg))) {
            if ((1U & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg)))) {
                if ((1U & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tvalid)))) {
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_er_next = 1U;
                }
            }
        }
    }
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_odd_next 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_odd_reg;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_next 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__ifg_next 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__ifg_reg;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_txd_next = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_en_next = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_axis_tready_next = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_next 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg;
    if ((4U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg))) {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_odd_next = 1U;
        if ((2U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg))) {
            if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg))) {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_next 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg)));
                if ((0xbU > (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__ifg_reg))) {
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__ifg_next 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__ifg_reg)));
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_next = 7U;
                } else {
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_next = 0U;
                }
            } else {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_next 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg)));
                if (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tvalid) {
                    if (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tlast) {
                        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__ifg_next = 0U;
                        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_next = 7U;
                    } else {
                        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_next = 6U;
                    }
                } else {
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_next = 6U;
                }
            }
            if ((1U & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg)))) {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_axis_tready_next = 1U;
                if (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tvalid) {
                    if (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tlast) {
                        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_axis_tready_next = 0U;
                    }
                }
            }
        } else if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg))) {
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_next 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg)));
            if ((3U <= (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg))) {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_next = 0U;
            }
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_next 
                = ((3U > (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg))
                    ? 5U : 7U);
        } else {
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_next 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg)));
            if ((0x3bU <= (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg))) {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_next = 0U;
            }
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_next 
                = ((0x3bU > (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg))
                    ? 4U : 5U);
        }
        if ((1U & (~ ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg))) {
                if ((0U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg))) {
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_txd_next 
                        = (0xffU & (~ vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state));
                } else if ((1U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg))) {
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_txd_next 
                        = (0xffU & (~ (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                       >> 8U)));
                } else if ((2U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg))) {
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_txd_next 
                        = (0xffU & (~ (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                       >> 0x10U)));
                } else if ((3U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg))) {
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_txd_next 
                        = (0xffU & (~ (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state 
                                       >> 0x18U)));
                }
            } else {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_txd_next = 0U;
            }
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_en_next = 1U;
            if ((1U & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg)))) {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_next = 0U;
            }
        }
    } else if ((2U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg))) {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_odd_next = 1U;
        if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg))) {
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_next 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg)));
            if ((0x3bU <= (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg))) {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_next = 0U;
            }
            if ((0x3bU > (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg))) {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_next = 4U;
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_next = 0U;
            } else {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_next = 5U;
            }
        } else {
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_next 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg)));
            if ((1U & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tvalid)))) {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_next = 0U;
            }
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_next 
                = ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tvalid)
                    ? ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tlast)
                        ? 3U : 2U) : 6U);
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_next 
                = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tdata;
        }
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_txd_next 
            = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_en_next = 1U;
        if ((1U & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg)))) {
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_axis_tready_next = 1U;
            if (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tvalid) {
                if (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tlast) {
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_axis_tready_next 
                        = (1U & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_axis_tready_reg)));
                }
            }
        }
    } else if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg))) {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_odd_next = 1U;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_next 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg)));
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_txd_next = 0x55U;
        if ((6U != (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg))) {
            if ((7U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg))) {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_next = 0U;
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_txd_next = 0xd5U;
            }
        }
        if ((6U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg))) {
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_next = 1U;
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_axis_tready_next = 1U;
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_next 
                = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tdata;
        } else if ((7U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg))) {
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_next = 2U;
            if (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_axis_tready_reg) {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_axis_tready_next = 1U;
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_next 
                    = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tdata;
            }
        } else {
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_next = 1U;
        }
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_en_next = 1U;
    } else {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_odd_next = 0U;
        if (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tvalid) {
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_odd_next = 1U;
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_next = 1U;
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_txd_next = 0x55U;
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_next = 1U;
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_en_next = 1U;
        } else {
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_next = 0U;
        }
    }
}

VL_INLINE_OPT void Vspi_eth_tb_top___024root___nba_sequent__TOP__8(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_data_out 
        = ((0x20000000U & vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cfg_reg)
            ? (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__cipo_shift_q)
            : ([&]() {
                vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__in 
                    = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__cipo_shift_q;
                vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__out 
                    = ((0xf8U & (IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__out)) 
                       | ((4U & ((IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__in) 
                                 >> 3U)) | ((2U & ((IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__in) 
                                                   >> 5U)) 
                                            | (1U & 
                                               ((IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__in) 
                                                >> 7U)))));
                vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__out 
                    = ((0xc7U & (IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__out)) 
                       | ((0x20U & ((IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__in) 
                                    << 3U)) | ((0x10U 
                                                & ((IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__in) 
                                                   << 1U)) 
                                               | (8U 
                                                  & ((IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__in) 
                                                     >> 1U)))));
                vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__out 
                    = ((0x3fU & (IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__out)) 
                       | ((0x80U & ((IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__in) 
                                    << 7U)) | (0x40U 
                                               & ((IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__in) 
                                                  << 5U))));
                vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__Vfuncout 
                    = vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__out;
            }(), (IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__Vfuncout)));
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__reg_wr 
        = ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__wb_req) 
           & ((~ ((IData)(vlSelf->wb_adr_i) >> 0xcU)) 
              & ((IData)(vlSelf->wb_we_i) & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT____VdfgRegularize_h28ad532a_1_2))));
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_q 
        = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_d;
}

VL_INLINE_OPT void Vspi_eth_tb_top___024root___nba_sequent__TOP__9(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___nba_sequent__TOP__9\n"); );
    // Body
    if (vlSelf->__Vdlyvset__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v0) {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem[vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v0] 
            = vlSelf->__Vdlyvval__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v0;
    }
    if (vlSelf->__Vdlyvset__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v1) {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem[vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v1] = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem[vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v2] = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem[vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v3] = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem[vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v4] = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem[vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v5] = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem[vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v6] = 0x80U;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem[vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v7] 
            = vlSelf->__Vdlyvval__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v7;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem[vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v8] 
            = vlSelf->__Vdlyvval__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v8;
    }
}

VL_INLINE_OPT void Vspi_eth_tb_top___024root___nba_sequent__TOP__10(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___nba_sequent__TOP__10\n"); );
    // Body
    if (vlSelf->spi_eth_tb_top__DOT____Vcellinp__u_ksz__csn) {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_in = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__addr_high = 0U;
        vlSelf->spi_eth_tb_top__DOT__ksz_cmd_byte0 = 0U;
        vlSelf->spi_eth_tb_top__DOT__ksz_cmd_byte1 = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr = 0U;
        vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__spi_state_reg = 0U;
        vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__bit_counter = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_writing = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_reading = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_advance = 0U;
        vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__opcode = 0U;
        vlSelf->spi_eth_tb_top__DOT__ksz_read_pulse = 0U;
        vlSelf->__Vdly__spi_eth_tb_top__DOT__ksz_write_pulse = 0U;
        vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync1 = 0U;
        vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync2 = 0U;
        vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync3 = 0U;
        vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync1 = 0U;
        vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync2 = 0U;
        vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync3 = 0U;
    } else {
        vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync3 
            = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync2;
        vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync3 
            = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync2;
        vlSelf->spi_eth_tb_top__DOT__ksz_read_pulse = 0U;
        vlSelf->__Vdly__spi_eth_tb_top__DOT__ksz_write_pulse = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_in 
            = ((0xfffeU & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_in) 
                           << 1U)) | (1U & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__copi_shift_q) 
                                            >> 7U)));
        vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__bit_counter 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__bit_counter)));
        if ((0U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__spi_state_reg))) {
            vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__spi_state_reg = 1U;
            vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__bit_counter = 1U;
        } else if ((1U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__spi_state_reg))) {
            if ((7U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__bit_counter))) {
                vlSelf->spi_eth_tb_top__DOT__ksz_cmd_byte0 
                    = (0xffU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_in));
                vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__opcode 
                    = (3U & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_in) 
                             >> 6U));
                vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__bit_counter = 0U;
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__addr_high 
                    = (3U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_in));
                if (((2U == (3U & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_in) 
                                   >> 6U))) | (3U == 
                                               (3U 
                                                & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_in) 
                                                   >> 6U))))) {
                    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__spi_state_reg = 3U;
                    if ((3U == (3U & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_in) 
                                      >> 6U)))) {
                        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_writing = 1U;
                        vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_header_count = 0U;
                        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_frame_length = 0U;
                    }
                    if ((2U == (3U & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_in) 
                                      >> 6U)))) {
                        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_reading = 1U;
                    }
                } else {
                    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__spi_state_reg = 2U;
                }
            }
        } else if ((2U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__spi_state_reg))) {
            if ((7U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__bit_counter))) {
                vlSelf->spi_eth_tb_top__DOT__ksz_cmd_byte1 
                    = (0xffU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_in));
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr 
                    = (((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__addr_high) 
                        << 6U) | ((0x3cU & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_in) 
                                            >> 2U)) 
                                  | (2U & ((IData)(vlSelf->spi_eth_tb_top__DOT__ksz_cmd_byte0) 
                                           >> 4U))));
                vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__spi_state_reg = 3U;
                vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_wr_ptr = 0U;
                vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__bit_counter = 0U;
                if ((0U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__opcode))) {
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__read_addr 
                        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr;
                    vlSelf->spi_eth_tb_top__DOT__ksz_read_pulse = 1U;
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_read 
                        = (0xffffU & ((0x80U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                       ? ((0x40U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                           ? ((0x20U 
                                               & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                               ? ((0xfe00U 
                                                   & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                      << 9U)) 
                                                  | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                               : ((0x10U 
                                                   & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                   ? 
                                                  ((0xfe00U 
                                                    & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                       << 9U)) 
                                                   | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                    ? 
                                                   ((0xfe00U 
                                                     & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                        << 9U)) 
                                                    | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                     ? 
                                                    ((0xfe00U 
                                                      & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                         << 9U)) 
                                                     | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                      ? 
                                                     ((0xfe00U 
                                                       & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                          << 9U)) 
                                                      | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       ? 
                                                      ((0xfe00U 
                                                        & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                           << 9U)) 
                                                       | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       : (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_CIDER)))))))
                                           : ((0x20U 
                                               & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                               ? ((0xfe00U 
                                                   & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                      << 9U)) 
                                                  | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                               : ((0x10U 
                                                   & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                      ? 
                                                     ((0xfe00U 
                                                       & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                          << 9U)) 
                                                      | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       ? 
                                                      ((0xfe00U 
                                                        & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                           << 9U)) 
                                                       | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       : (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXFCTR)))
                                                     : 
                                                    ((0xfe00U 
                                                      & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                         << 9U)) 
                                                     | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr)))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                     ? 
                                                    ((0xfe00U 
                                                      & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                         << 9U)) 
                                                     | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       ? 
                                                      ((0xfe00U 
                                                        & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                           << 9U)) 
                                                       | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       : (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_ISR))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       ? 
                                                      ((0xfe00U 
                                                        & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                           << 9U)) 
                                                       | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       : (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_IER)))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                    ? 
                                                   ((0xfe00U 
                                                     & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                        << 9U)) 
                                                    | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       ? 
                                                      ((0xfe00U 
                                                        & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                           << 9U)) 
                                                       | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       : (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXFDPR))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       ? 
                                                      ((0xfe00U 
                                                        & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                           << 9U)) 
                                                       | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       : (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXFDPR)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       ? 
                                                      ((0xfe00U 
                                                        & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                           << 9U)) 
                                                       | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       : (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXQCR))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       ? 
                                                      ((0xfe00U 
                                                        & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                           << 9U)) 
                                                       | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       : (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXQCR))))))))
                                       : ((0x40U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                           ? ((0x20U 
                                               & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                               ? ((0x10U 
                                                   & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       ? 
                                                      ((0xfe00U 
                                                        & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                           << 9U)) 
                                                       | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       : 
                                                      ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_avail)
                                                        ? 
                                                       vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length
                                                       [vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_first]
                                                        : 0U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       ? 
                                                      ((0xfe00U 
                                                        & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                           << 9U)) 
                                                       | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       : (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXFHSR)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                      ? 
                                                     ((0xfe00U 
                                                       & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                          << 9U)) 
                                                      | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       ? 
                                                      ((0xfe00U 
                                                        & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                           << 9U)) 
                                                       | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       : (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXMIR))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       ? 
                                                      ((0xfe00U 
                                                        & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                           << 9U)) 
                                                       | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       : (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXCR2))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       ? 
                                                      ((0xfe00U 
                                                        & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                           << 9U)) 
                                                       | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       : (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXCR1)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       ? 
                                                      ((0xfe00U 
                                                        & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                           << 9U)) 
                                                       | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       : (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXSR))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       ? 
                                                      ((0xfe00U 
                                                        & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                           << 9U)) 
                                                       | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       : (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXCR)))))
                                                   : 
                                                  ((0xfe00U 
                                                    & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                       << 9U)) 
                                                   | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr)))
                                               : ((0xfe00U 
                                                   & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                      << 9U)) 
                                                  | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr)))
                                           : ((0x20U 
                                               & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                               ? ((0xfe00U 
                                                   & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                      << 9U)) 
                                                  | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                               : ((0x10U 
                                                   & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                    ? 
                                                   ((0xfe00U 
                                                     & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                        << 9U)) 
                                                    | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                      ? 
                                                     ((0xfe00U 
                                                       & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                          << 9U)) 
                                                      | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       ? 
                                                      ((0xfe00U 
                                                        & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                           << 9U)) 
                                                       | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       : (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_MARH)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       ? 
                                                      ((0xfe00U 
                                                        & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                           << 9U)) 
                                                       | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       : (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_MARM))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       ? 
                                                      ((0xfe00U 
                                                        & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                           << 9U)) 
                                                       | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       : (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_MARL)))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       ? 
                                                      (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg_rev 
                                                       >> 0x10U)
                                                       : vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg_rev)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))
                                                       ? 
                                                      (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg_rev 
                                                       >> 0x10U)
                                                       : vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg_rev))
                                                     : 
                                                    ((0xfe00U 
                                                      & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                         << 9U)) 
                                                     | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr)))
                                                    : 
                                                   ((0xfe00U 
                                                     & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr) 
                                                        << 9U)) 
                                                    | (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))))))));
                }
            }
        } else if ((3U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__spi_state_reg))) {
            if (((3U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__opcode)) 
                 & (7U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__bit_counter)))) {
                vlSelf->__Vdlyvval__spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_mem__v0 
                    = (0xffU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_in));
                vlSelf->__Vdlyvset__spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_mem__v0 = 1U;
                vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_mem__v0 
                    = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_wr_ptr;
                vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__bit_counter = 0U;
                vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_wr_ptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_wr_ptr)));
                vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_header_count 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_header_count)));
                if ((2U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_header_count))) {
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_frame_length 
                        = ((0xff00U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_frame_length)) 
                           | (0xffU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_in)));
                } else if ((3U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_header_count))) {
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_frame_length 
                        = ((0xffU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_frame_length)) 
                           | (0xff00U & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_in) 
                                         << 8U)));
                }
            } else if (((1U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__opcode)) 
                        & (0xfU == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__bit_counter)))) {
                vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__write_data 
                    = ((0xff00U & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_in) 
                                   << 8U)) | (0xffU 
                                              & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_in) 
                                                 >> 8U)));
                vlSelf->__Vdly__spi_eth_tb_top__DOT__ksz_write_pulse = 1U;
                vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__bit_counter = 0U;
            }
        }
        if (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_start_pending) {
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXQCR 
                = (0xfffeU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXQCR));
        }
        if (((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync2) 
             != (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync3))) {
            vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__register_ISR 
                = (0x4000U | (IData)(vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__register_ISR));
        }
        if (((2U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__opcode)) 
             & (3U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__spi_state_reg)))) {
            if ((7U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_bit_count))) {
                vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_rd_ptr 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_rd_ptr)));
                if (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_avail) {
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__unnamedblk1__DOT__frame_end_pos 
                        = (0x7fffU & ((IData)(8U) + 
                                      ((((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_first) 
                                         << 0xbU) + 
                                        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length
                                        [vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_first]) 
                                       + (3U & ((IData)(4U) 
                                                - (3U 
                                                   & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length
                                                   [vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_first]))))));
                    if (VL_UNLIKELY((((IData)(1U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_rd_ptr)) 
                                     >= (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__unnamedblk1__DOT__frame_end_pos)))) {
                        vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_first 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_first)));
                        VL_WRITEF_NX("[%0t] SPI: Auto-release frame buffer %0#\n",0,
                                     64,VL_TIME_UNITED_Q(1000),
                                     -9,4,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_first));
                        vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_auto_release_pending = 1U;
                    }
                }
            }
        }
        if (((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync2) 
             != (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync3))) {
            vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__register_ISR 
                = (0x2000U | (IData)(vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__register_ISR));
        }
        vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync2 
            = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync1;
        if (VL_UNLIKELY(((IData)(vlSelf->spi_eth_tb_top__DOT____Vcellinp__u_ksz__csn) 
                         & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_auto_release_pending)))) {
            vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_rd_ptr 
                = ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_first) 
                   << 0xbU);
            vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_auto_release_pending = 0U;
            VL_WRITEF_NX("[%0t] SPI: CS deassert - reset FIFO rd_ptr to buffer %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,4,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_first));
        }
        vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync2 
            = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync1;
        vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync1 
            = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_toggle;
        vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync1 
            = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_toggle;
    }
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__bit_counter 
        = vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__bit_counter;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync1 
        = vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync1;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync2 
        = vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync2;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync3 
        = vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync3;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync1 
        = vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync1;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync2 
        = vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync2;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync3 
        = vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync3;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__spi_state_reg 
        = vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__spi_state_reg;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_header_count 
        = vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_header_count;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_wr_ptr 
        = vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_wr_ptr;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__opcode 
        = vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__opcode;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_auto_release_pending 
        = vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_auto_release_pending;
}

VL_INLINE_OPT void Vspi_eth_tb_top___024root___nba_comb__TOP__1(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__cipo_shift_d 
        = ((0xfeU & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__cipo_shift_q) 
                     << 1U)) | (IData)(vlSelf->spi_eth_tb_top__DOT__spi_cipo));
}

VL_INLINE_OPT void Vspi_eth_tb_top___024root___nba_comb__TOP__2(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_start 
        = ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__reg_wr) 
           & (IData)(((0x18U == (0xfcU & (IData)(vlSelf->wb_adr_i))) 
                      & (0U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q)))));
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_running = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__finish_edge = 0U;
    if ((2U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q))) {
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_running 
            = ((0U != (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_q)) 
               || (((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_counter_q) 
                    < (0xffffU & vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cfg_reg)) 
                   || ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__sample_phase_q)
                        ? ((1U < (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__byte_count_q)) 
                           && (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_data_valid))
                        : (0U != (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q)))));
        if ((0U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_q))) {
            if (((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_counter_q) 
                 >= (0xffffU & vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cfg_reg))) {
                if (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__sample_phase_q) {
                    if ((1U >= (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__byte_count_q))) {
                        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__finish_edge = 1U;
                    }
                }
            }
        }
    }
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__start_edge = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__sample_edge = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_counter_d 
        = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_counter_q;
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_d 
        = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_q;
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__sample_phase_d 
        = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__sample_phase_q;
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__output_edge = 0U;
    if (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_running) {
        if (((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_counter_q) 
             == (0xffffU & vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cfg_reg))) {
            if ((1U & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__sample_phase_q)))) {
                vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__sample_edge = 1U;
            }
            vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_counter_d = 0U;
            vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_d 
                = (1U & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_q)));
            vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__sample_phase_d 
                = (1U & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__sample_phase_q)));
            if (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__sample_phase_q) {
                vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__output_edge 
                    = (1U & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__finish_edge)));
            }
        } else {
            vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_counter_d 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_counter_q)));
        }
    } else if (((2U != (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q)) 
                | (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__finish_edge))) {
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_counter_d = 0U;
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_d 
            = (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cfg_reg 
               >> 0x1fU);
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__sample_phase_d 
            = (1U & (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cfg_reg 
                     >> 0x1eU));
    }
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_d 
        = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q;
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_d 
        = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_q;
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__byte_count_d 
        = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__byte_count_q;
    if ((0U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q))) {
        if (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_start) {
            if (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_data_valid) {
                vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__start_edge 
                    = (1U & (~ (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cfg_reg 
                                >> 0x1eU)));
                vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_d = 2U;
            } else {
                vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_d = 1U;
            }
            vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_d 
                = ((0x40000000U & vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cfg_reg)
                    ? 8U : 7U);
            vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__byte_count_d 
                = (0x7ffU & vlSelf->wb_dat_i);
        }
    } else {
        if ((1U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q))) {
            if (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_data_valid) {
                vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__start_edge 
                    = (1U & (~ (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cfg_reg 
                                >> 0x1eU)));
                vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_d = 2U;
            }
        } else if ((2U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q))) {
            if (((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__output_edge) 
                 | (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__finish_edge))) {
                if ((0U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_q))) {
                    if ((1U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__byte_count_q))) {
                        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_d = 0U;
                    }
                }
            }
        }
        if ((1U != (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q))) {
            if ((2U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q))) {
                if (((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__output_edge) 
                     | (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__finish_edge))) {
                    if ((0U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_q))) {
                        if ((1U != (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__byte_count_q))) {
                            vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_d = 7U;
                            vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__byte_count_d 
                                = (0x7ffU & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__byte_count_q) 
                                             - (IData)(1U)));
                        }
                    } else {
                        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_d 
                            = (0xfU & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_q) 
                                       - (IData)(1U)));
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vspi_eth_tb_top___024root___nba_sequent__TOP__11(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___nba_sequent__TOP__11\n"); );
    // Body
    vlSelf->spi_eth_tb_top__DOT____Vcellinp__u_ksz__csn 
        = (1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cs_reg));
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__copi_shift_q 
        = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__copi_shift_d;
}

VL_INLINE_OPT void Vspi_eth_tb_top___024root___nba_sequent__TOP__12(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___nba_sequent__TOP__12\n"); );
    // Body
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg_rev 
        = ((vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
            << 0x1fU) | ((0x40000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                         << 0x1dU)) 
                         | ((0x20000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                            << 0x1bU)) 
                            | ((0x10000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                               << 0x19U)) 
                               | ((0x8000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg_rev 
        = ((vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
            << 0x1fU) | ((0x40000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                         << 0x1dU)) 
                         | ((0x20000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                            << 0x1bU)) 
                            | ((0x10000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                               << 0x19U)) 
                               | ((0x8000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXMIR 
        = (0xffffU & ((IData)(0x1800U) - (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_frame_addr)));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXFHSR 
        = ((0x7fffU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXFHSR)) 
           | ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_avail) 
              << 0xfU));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXFCTR 
        = ((0xffU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXFCTR)) 
           | (0xf00U & (((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_next) 
                         - (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_first)) 
                        << 8U)));
    if (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_start_pending) {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXQCR 
            = (0xfffeU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXQCR));
    }
    if (((IData)(vlSelf->spi_eth_tb_top__DOT__ksz_write_pulse) 
         & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_pulse_old)))) {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_pulse_old 
            = vlSelf->spi_eth_tb_top__DOT__ksz_write_pulse;
        if ((0x80U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))) {
            if (VL_UNLIKELY((0x40U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr)))) {
                VL_WRITEF_NX("[%0t] SPI: Write to unimplemented register [%02x] = %04x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,8,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr),
                             16,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data);
            } else if (VL_UNLIKELY((0x20U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr)))) {
                VL_WRITEF_NX("[%0t] SPI: Write to unimplemented register [%02x] = %04x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,8,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr),
                             16,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data);
            } else if ((0x10U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))) {
                if (VL_UNLIKELY((8U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr)))) {
                    VL_WRITEF_NX("[%0t] SPI: Write to unimplemented register [%02x] = %04x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,8,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr),
                                 16,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data);
                } else if (VL_UNLIKELY((4U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr)))) {
                    VL_WRITEF_NX("[%0t] SPI: Write to unimplemented register [%02x] = %04x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,8,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr),
                                 16,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data);
                } else if ((2U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))) {
                    if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))) {
                        VL_WRITEF_NX("[%0t] SPI: Write to unimplemented register [%02x] = %04x\n",0,
                                     64,VL_TIME_UNITED_Q(1000),
                                     -9,8,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr),
                                     16,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data);
                    } else {
                        VL_WRITEF_NX("[%0t] SPI: ISR Clear = %04x\n",0,
                                     64,VL_TIME_UNITED_Q(1000),
                                     -9,16,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data));
                        vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__register_ISR 
                            = ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_ISR) 
                               & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data)));
                    }
                } else if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))) {
                    VL_WRITEF_NX("[%0t] SPI: Write to unimplemented register [%02x] = %04x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,8,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr),
                                 16,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data);
                } else {
                    VL_WRITEF_NX("[%0t] SPI: IER = %04x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,16,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data));
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_IER 
                        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data;
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__irq_rx_enable 
                        = (1U & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data) 
                                 >> 0xdU));
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__irq_tx_enable 
                        = (1U & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data) 
                                 >> 0xeU));
                }
            } else if (VL_UNLIKELY((8U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr)))) {
                VL_WRITEF_NX("[%0t] SPI: Write to unimplemented register [%02x] = %04x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,8,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr),
                             16,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data);
            } else if ((4U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))) {
                if ((2U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))) {
                    if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))) {
                        VL_WRITEF_NX("[%0t] SPI: Write to unimplemented register [%02x] = %04x\n",0,
                                     64,VL_TIME_UNITED_Q(1000),
                                     -9,8,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr),
                                     16,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data);
                    } else {
                        VL_WRITEF_NX("[%0t] SPI: RXFDPR = %04x (reset RX FIFO pointer)\n",0,
                                     64,VL_TIME_UNITED_Q(1000),
                                     -9,16,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data));
                        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXFDPR 
                            = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data;
                    }
                } else if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))) {
                    VL_WRITEF_NX("[%0t] SPI: Write to unimplemented register [%02x] = %04x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,8,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr),
                                 16,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data);
                } else {
                    VL_WRITEF_NX("[%0t] SPI: TXFDPR = %04x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,16,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data));
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXFDPR 
                        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data;
                }
            } else if ((2U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))) {
                if (VL_UNLIKELY((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr)))) {
                    VL_WRITEF_NX("[%0t] SPI: Write to unimplemented register [%02x] = %04x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,8,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr),
                                 16,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data);
                } else {
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXQCR 
                        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data;
                    if ((((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data) 
                          >> 4U) & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_avail))) {
                        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_advance = 1U;
                    }
                    if (VL_UNLIKELY((8U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data)))) {
                        VL_WRITEF_NX("[%0t] SPI: RXQCR Start DMA - rd_ptr=%0#\n",0,
                                     64,VL_TIME_UNITED_Q(1000),
                                     -9,15,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_rd_ptr));
                        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_reading = 1U;
                    }
                }
            } else if (VL_UNLIKELY((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr)))) {
                VL_WRITEF_NX("[%0t] SPI: Write to unimplemented register [%02x] = %04x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,8,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr),
                             16,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data);
            } else {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXQCR 
                    = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data;
                if (VL_UNLIKELY((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data)))) {
                    VL_WRITEF_NX("[%0t] SPI: TX Enqueue - Frame length = %0# bytes\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,11,((0x700U & (
                                                   vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_mem
                                                   [2U] 
                                                   << 8U)) 
                                        | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_mem
                                        [1U]));
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_packet_length 
                        = ((0x700U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_mem
                                      [2U] << 8U)) 
                           | vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_mem
                           [1U]);
                }
            }
        } else if ((0x40U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))) {
            if (VL_LIKELY((0x20U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr)))) {
                if (VL_LIKELY((0x10U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr)))) {
                    if (VL_UNLIKELY((8U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr)))) {
                        VL_WRITEF_NX("[%0t] SPI: Write to unimplemented register [%02x] = %04x\n",0,
                                     64,VL_TIME_UNITED_Q(1000),
                                     -9,8,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr),
                                     16,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data);
                    } else if ((4U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))) {
                        if ((2U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))) {
                            if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))) {
                                VL_WRITEF_NX("[%0t] SPI: Write to unimplemented register [%02x] = %04x\n",0,
                                             64,VL_TIME_UNITED_Q(1000),
                                             -9,8,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr),
                                             16,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data);
                            } else {
                                VL_WRITEF_NX("[%0t] SPI: RXCR2 = %04x\n",0,
                                             64,VL_TIME_UNITED_Q(1000),
                                             -9,16,
                                             (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data));
                                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXCR2 
                                    = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data;
                            }
                        } else if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))) {
                            VL_WRITEF_NX("[%0t] SPI: Write to unimplemented register [%02x] = %04x\n",0,
                                         64,VL_TIME_UNITED_Q(1000),
                                         -9,8,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr),
                                         16,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data);
                        } else {
                            VL_WRITEF_NX("[%0t] SPI: RXCR1 = %04x (RXE=%b, Promisc=%b)\n",0,
                                         64,VL_TIME_UNITED_Q(1000),
                                         -9,16,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data),
                                         1,(1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data)),
                                         1,(1U & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data) 
                                                  >> 4U)));
                            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXCR1 
                                = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data;
                            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_enable 
                                = (1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data));
                            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__promiscuous_mode 
                                = (1U & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data) 
                                         >> 4U));
                        }
                    } else if (VL_UNLIKELY((2U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr)))) {
                        VL_WRITEF_NX("[%0t] SPI: Write to unimplemented register [%02x] = %04x\n",0,
                                     64,VL_TIME_UNITED_Q(1000),
                                     -9,8,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr),
                                     16,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data);
                    } else if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))) {
                        VL_WRITEF_NX("[%0t] SPI: Write to unimplemented register [%02x] = %04x\n",0,
                                     64,VL_TIME_UNITED_Q(1000),
                                     -9,8,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr),
                                     16,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data);
                    } else {
                        VL_WRITEF_NX("[%0t] SPI: TXCR = %04x (TXE=%b)\n",0,
                                     64,VL_TIME_UNITED_Q(1000),
                                     -9,16,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data),
                                     1,(1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data)));
                        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXCR 
                            = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data;
                        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_enable 
                            = (1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data));
                    }
                } else {
                    VL_WRITEF_NX("[%0t] SPI: Write to unimplemented register [%02x] = %04x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,8,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr),
                                 16,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data);
                }
            } else {
                VL_WRITEF_NX("[%0t] SPI: Write to unimplemented register [%02x] = %04x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,8,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr),
                             16,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data);
            }
        } else if (VL_UNLIKELY((0x20U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr)))) {
            VL_WRITEF_NX("[%0t] SPI: Write to unimplemented register [%02x] = %04x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,8,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr),
                         16,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data);
        } else if (VL_LIKELY((0x10U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr)))) {
            if (VL_UNLIKELY((8U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr)))) {
                VL_WRITEF_NX("[%0t] SPI: Write to unimplemented register [%02x] = %04x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,8,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr),
                             16,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data);
            } else if ((4U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))) {
                if (VL_UNLIKELY((2U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr)))) {
                    VL_WRITEF_NX("[%0t] SPI: Write to unimplemented register [%02x] = %04x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,8,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr),
                                 16,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data);
                } else if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))) {
                    VL_WRITEF_NX("[%0t] SPI: Write to unimplemented register [%02x] = %04x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,8,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr),
                                 16,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data);
                } else {
                    VL_WRITEF_NX("[%0t] SPI: MAC[47:32] = %04x -> Full MAC = %012x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,16,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data),
                                 48,(((QData)((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data)) 
                                      << 0x20U) | (QData)((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__mac_address))));
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_MARH 
                        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data;
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__mac_address 
                        = ((0xffffffffULL & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__mac_address) 
                           | ((QData)((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data)) 
                              << 0x20U));
                }
            } else if ((2U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))) {
                if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))) {
                    VL_WRITEF_NX("[%0t] SPI: Write to unimplemented register [%02x] = %04x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,8,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr),
                                 16,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data);
                } else {
                    VL_WRITEF_NX("[%0t] SPI: MAC[31:16] = %04x\n",0,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9,16,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data));
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__mac_address 
                        = ((0xffff0000ffffULL & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__mac_address) 
                           | ((QData)((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data)) 
                              << 0x10U));
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_MARM 
                        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data;
                }
            } else if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr))) {
                VL_WRITEF_NX("[%0t] SPI: Write to unimplemented register [%02x] = %04x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,8,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr),
                             16,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data);
            } else {
                VL_WRITEF_NX("[%0t] SPI: MAC[15:0] = %04x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,16,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data));
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__mac_address 
                    = ((0xffffffff0000ULL & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__mac_address) 
                       | (IData)((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data)));
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_MARL 
                    = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data;
            }
        } else {
            VL_WRITEF_NX("[%0t] SPI: Write to unimplemented register [%02x] = %04x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,8,(IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr),
                         16,vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data);
        }
    }
    vlSelf->spi_eth_tb_top__DOT__ksz_chip_state = ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_enable)
                                                    ? 
                                                   ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_enable)
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_enable)
                                                     ? 1U
                                                     : 0U));
}

VL_INLINE_OPT void Vspi_eth_tb_top___024root___nba_sequent__TOP__13(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___nba_sequent__TOP__13\n"); );
    // Body
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_bit_count 
        = vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_bit_count;
}

VL_INLINE_OPT void Vspi_eth_tb_top___024root___nba_sequent__TOP__14(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___nba_sequent__TOP__14\n"); );
    // Body
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_toggle 
        = vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_toggle;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_toggle 
        = vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_toggle;
    if (vlSelf->__Vdlyvset__spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length__v0) {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length__v0] 
            = vlSelf->__Vdlyvval__spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length__v0;
    }
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_frame_addr 
        = vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_frame_addr;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_next 
        = vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_next;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_start_pending 
        = vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_start_pending;
}

VL_INLINE_OPT void Vspi_eth_tb_top___024root___nba_comb__TOP__3(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__copi_shift_d 
        = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__copi_shift_q;
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_data_in_ready = 0U;
    if (((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__output_edge) 
         | (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__start_edge))) {
        if ((((0U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_q)) 
              | (8U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_q))) 
             | (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__start_edge))) {
            vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__copi_shift_d 
                = (0xffU & ((0x20000000U & vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cfg_reg)
                             ? ((2U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_byte_lane_q))
                                 ? ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_byte_lane_q))
                                     ? (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_bram_rdata 
                                        >> 0x18U) : 
                                    (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_bram_rdata 
                                     >> 0x10U)) : (
                                                   (1U 
                                                    & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_byte_lane_q))
                                                    ? 
                                                   (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_bram_rdata 
                                                    >> 8U)
                                                    : vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_bram_rdata))
                             : ([&]() {
                            vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__in 
                                = (0xffU & ((2U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_byte_lane_q))
                                             ? ((1U 
                                                 & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_byte_lane_q))
                                                 ? 
                                                (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_bram_rdata 
                                                 >> 0x18U)
                                                 : 
                                                (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_bram_rdata 
                                                 >> 0x10U))
                                             : ((1U 
                                                 & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_byte_lane_q))
                                                 ? 
                                                (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_bram_rdata 
                                                 >> 8U)
                                                 : vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_bram_rdata)));
                            vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__out 
                                = ((0xf8U & (IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__out)) 
                                   | ((4U & ((IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__in) 
                                             >> 3U)) 
                                      | ((2U & ((IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__in) 
                                                >> 5U)) 
                                         | (1U & ((IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__in) 
                                                  >> 7U)))));
                            vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__out 
                                = ((0xc7U & (IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__out)) 
                                   | ((0x20U & ((IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__in) 
                                                << 3U)) 
                                      | ((0x10U & ((IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__in) 
                                                   << 1U)) 
                                         | (8U & ((IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__in) 
                                                  >> 1U)))));
                            vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__out 
                                = ((0x3fU & (IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__out)) 
                                   | ((0x80U & ((IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__in) 
                                                << 7U)) 
                                      | (0x40U & ((IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__in) 
                                                  << 5U))));
                            vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__Vfuncout 
                                = vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__out;
                        }(), (IData)(vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__Vfuncout))));
            vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_data_in_ready = 1U;
        } else {
            vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__copi_shift_d 
                = (0xfeU & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__copi_shift_q) 
                            << 1U));
        }
    } else if (vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__finish_edge) {
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__copi_shift_d 
            = (0xfeU & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__copi_shift_q) 
                        << 1U));
    }
}

VL_INLINE_OPT void Vspi_eth_tb_top___024root___nba_sequent__TOP__15(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___nba_sequent__TOP__15\n"); );
    // Body
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_first 
        = vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_first;
    vlSelf->spi_eth_tb_top__DOT__ksz_write_pulse = vlSelf->__Vdly__spi_eth_tb_top__DOT__ksz_write_pulse;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data 
        = vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__write_data;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_rd_ptr 
        = vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_rd_ptr;
    if (vlSelf->__Vdlyvset__spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_mem__v0) {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_mem[vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_mem__v0] 
            = vlSelf->__Vdlyvval__spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_mem__v0;
    }
}

VL_INLINE_OPT void Vspi_eth_tb_top___024root___nba_sequent__TOP__16(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___nba_sequent__TOP__16\n"); );
    // Body
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_ISR 
        = vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__register_ISR;
}

VL_INLINE_OPT void Vspi_eth_tb_top___024root___nba_comb__TOP__4(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___nba_comb__TOP__4\n"); );
    // Body
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_avail 
        = ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_next) 
           != (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_first));
}

void Vspi_eth_tb_top___024root___eval_triggers__act(Vspi_eth_tb_top___024root* vlSelf);

bool Vspi_eth_tb_top___024root___eval_phase__act(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<8> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vspi_eth_tb_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vspi_eth_tb_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vspi_eth_tb_top___024root___eval_phase__nba(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vspi_eth_tb_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_eth_tb_top___024root___dump_triggers__ico(Vspi_eth_tb_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_eth_tb_top___024root___dump_triggers__nba(Vspi_eth_tb_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_eth_tb_top___024root___dump_triggers__act(Vspi_eth_tb_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vspi_eth_tb_top___024root___eval(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vspi_eth_tb_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("spi_eth_tb_top.sv", 8, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vspi_eth_tb_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vspi_eth_tb_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("spi_eth_tb_top.sv", 8, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vspi_eth_tb_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("spi_eth_tb_top.sv", 8, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vspi_eth_tb_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vspi_eth_tb_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vspi_eth_tb_top___024root___eval_debug_assertions(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_i & 0xfeU))) {
        Verilated::overWidthError("rst_i");}
    if (VL_UNLIKELY((vlSelf->clk_25mhz & 0xfeU))) {
        Verilated::overWidthError("clk_25mhz");}
    if (VL_UNLIKELY((vlSelf->wb_adr_i & 0xe000U))) {
        Verilated::overWidthError("wb_adr_i");}
    if (VL_UNLIKELY((vlSelf->wb_sel_i & 0xf0U))) {
        Verilated::overWidthError("wb_sel_i");}
    if (VL_UNLIKELY((vlSelf->wb_we_i & 0xfeU))) {
        Verilated::overWidthError("wb_we_i");}
    if (VL_UNLIKELY((vlSelf->wb_cyc_i & 0xfeU))) {
        Verilated::overWidthError("wb_cyc_i");}
    if (VL_UNLIKELY((vlSelf->wb_stb_i & 0xfeU))) {
        Verilated::overWidthError("wb_stb_i");}
    if (VL_UNLIKELY((vlSelf->rx_valid & 0xfeU))) {
        Verilated::overWidthError("rx_valid");}
    if (VL_UNLIKELY((vlSelf->rx_last & 0xfeU))) {
        Verilated::overWidthError("rx_last");}
}
#endif  // VL_DEBUG
