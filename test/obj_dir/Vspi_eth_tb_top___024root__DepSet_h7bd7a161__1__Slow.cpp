// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_eth_tb_top.h for the primary calling header

#include "Vspi_eth_tb_top__pch.h"
#include "Vspi_eth_tb_top___024root.h"

VL_ATTR_COLD void Vspi_eth_tb_top___024root___eval_initial__TOP__1(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___eval_initial__TOP__1\n"); );
    // Body
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffff3fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [0U] >> 0x11U)) | (0x40U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [0U] >> 0x13U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffcffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [0U] >> 0xdU)) | (0x100U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [0U] >> 0xfU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffff3ffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [0U] >> 9U)) | (0x400U & (
                                                   vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [0U] 
                                                   >> 0xbU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffcfffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [0U] >> 5U)) | (0x1000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [0U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffff3fffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [0U] >> 1U)) | (0x4000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [0U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffcffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [0U] << 3U)) | (0x10000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [0U] 
                                              << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfff3ffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [0U] << 7U)) | (0x40000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [0U] 
                                              << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffcfffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [0U] << 0xbU)) | (0x100000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [0U] 
                                                 << 9U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xff3fffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [0U] << 0xfU)) | (0x400000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [0U] 
                                                 << 0xdU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfcffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [0U] << 0x13U)) | (0x1000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [0U] 
                                                   << 0x11U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xf3ffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [0U] << 0x17U)) | (0x4000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [0U] 
                                                   << 0x15U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xcfffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                              [0U] << 0x1bU)) | (0x10000000U 
                                                 & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                    [0U] 
                                                    << 0x19U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0x3fffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
               [0U] << 0x1fU) | (0x40000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                [0U] 
                                                << 0x1dU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xfcU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [0U] >> 5U)) | (1U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [0U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xf3U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [0U] >> 1U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [0U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xcfU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [0U] << 3U)) | (0x10U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [0U] 
                                                 << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0x3fU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [0U] << 7U)) | (0x40U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [0U] 
                                                 << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[0U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffffcU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [1U] >> 0x1dU)) | (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                        [1U] >> 0x1fU)));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffff3U & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [1U] >> 0x19U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [1U] 
                                              >> 0x1bU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffffcfU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [1U] >> 0x15U)) | (0x10U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [1U] >> 0x17U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffff3fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [1U] >> 0x11U)) | (0x40U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [1U] >> 0x13U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffcffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [1U] >> 0xdU)) | (0x100U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [1U] >> 0xfU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffff3ffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [1U] >> 9U)) | (0x400U & (
                                                   vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [1U] 
                                                   >> 0xbU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffcfffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [1U] >> 5U)) | (0x1000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [1U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffff3fffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [1U] >> 1U)) | (0x4000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [1U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffcffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [1U] << 3U)) | (0x10000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [1U] 
                                              << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfff3ffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [1U] << 7U)) | (0x40000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [1U] 
                                              << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffcfffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [1U] << 0xbU)) | (0x100000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [1U] 
                                                 << 9U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xff3fffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [1U] << 0xfU)) | (0x400000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [1U] 
                                                 << 0xdU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfcffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [1U] << 0x13U)) | (0x1000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [1U] 
                                                   << 0x11U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xf3ffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [1U] << 0x17U)) | (0x4000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [1U] 
                                                   << 0x15U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xcfffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                              [1U] << 0x1bU)) | (0x10000000U 
                                                 & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                    [1U] 
                                                    << 0x19U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0x3fffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
               [1U] << 0x1fU) | (0x40000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                [1U] 
                                                << 0x1dU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xfcU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [1U] >> 5U)) | (1U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [1U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xf3U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [1U] >> 1U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [1U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xcfU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [1U] << 3U)) | (0x10U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [1U] 
                                                 << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0x3fU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [1U] << 7U)) | (0x40U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [1U] 
                                                 << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[1U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffffcU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [2U] >> 0x1dU)) | (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                        [2U] >> 0x1fU)));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffff3U & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [2U] >> 0x19U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [2U] 
                                              >> 0x1bU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffffcfU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [2U] >> 0x15U)) | (0x10U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [2U] >> 0x17U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffff3fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [2U] >> 0x11U)) | (0x40U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [2U] >> 0x13U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffcffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [2U] >> 0xdU)) | (0x100U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [2U] >> 0xfU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffff3ffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [2U] >> 9U)) | (0x400U & (
                                                   vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [2U] 
                                                   >> 0xbU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffcfffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [2U] >> 5U)) | (0x1000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [2U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffff3fffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [2U] >> 1U)) | (0x4000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [2U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffcffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [2U] << 3U)) | (0x10000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [2U] 
                                              << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfff3ffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [2U] << 7U)) | (0x40000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [2U] 
                                              << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffcfffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [2U] << 0xbU)) | (0x100000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [2U] 
                                                 << 9U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xff3fffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [2U] << 0xfU)) | (0x400000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [2U] 
                                                 << 0xdU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfcffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [2U] << 0x13U)) | (0x1000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [2U] 
                                                   << 0x11U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xf3ffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [2U] << 0x17U)) | (0x4000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [2U] 
                                                   << 0x15U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xcfffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                              [2U] << 0x1bU)) | (0x10000000U 
                                                 & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                    [2U] 
                                                    << 0x19U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0x3fffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
               [2U] << 0x1fU) | (0x40000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                [2U] 
                                                << 0x1dU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xfcU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [2U] >> 5U)) | (1U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [2U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xf3U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [2U] >> 1U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [2U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xcfU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [2U] << 3U)) | (0x10U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [2U] 
                                                 << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0x3fU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [2U] << 7U)) | (0x40U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [2U] 
                                                 << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[2U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffffcU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [3U] >> 0x1dU)) | (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                        [3U] >> 0x1fU)));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffff3U & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [3U] >> 0x19U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [3U] 
                                              >> 0x1bU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffffcfU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [3U] >> 0x15U)) | (0x10U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [3U] >> 0x17U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffff3fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [3U] >> 0x11U)) | (0x40U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [3U] >> 0x13U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffcffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [3U] >> 0xdU)) | (0x100U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [3U] >> 0xfU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffff3ffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [3U] >> 9U)) | (0x400U & (
                                                   vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [3U] 
                                                   >> 0xbU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffcfffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [3U] >> 5U)) | (0x1000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [3U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffff3fffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [3U] >> 1U)) | (0x4000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [3U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffcffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [3U] << 3U)) | (0x10000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [3U] 
                                              << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfff3ffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [3U] << 7U)) | (0x40000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [3U] 
                                              << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffcfffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [3U] << 0xbU)) | (0x100000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [3U] 
                                                 << 9U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xff3fffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [3U] << 0xfU)) | (0x400000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [3U] 
                                                 << 0xdU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfcffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [3U] << 0x13U)) | (0x1000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [3U] 
                                                   << 0x11U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xf3ffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [3U] << 0x17U)) | (0x4000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [3U] 
                                                   << 0x15U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xcfffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                              [3U] << 0x1bU)) | (0x10000000U 
                                                 & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                    [3U] 
                                                    << 0x19U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0x3fffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
               [3U] << 0x1fU) | (0x40000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                [3U] 
                                                << 0x1dU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xfcU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [3U] >> 5U)) | (1U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [3U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xf3U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [3U] >> 1U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [3U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xcfU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [3U] << 3U)) | (0x10U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [3U] 
                                                 << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0x3fU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [3U] << 7U)) | (0x40U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [3U] 
                                                 << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[3U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffffcU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [4U] >> 0x1dU)) | (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                        [4U] >> 0x1fU)));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffff3U & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [4U] >> 0x19U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [4U] 
                                              >> 0x1bU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffffcfU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [4U] >> 0x15U)) | (0x10U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [4U] >> 0x17U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffff3fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [4U] >> 0x11U)) | (0x40U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [4U] >> 0x13U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffcffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [4U] >> 0xdU)) | (0x100U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [4U] >> 0xfU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffff3ffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [4U] >> 9U)) | (0x400U & (
                                                   vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [4U] 
                                                   >> 0xbU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffcfffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [4U] >> 5U)) | (0x1000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [4U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffff3fffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [4U] >> 1U)) | (0x4000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [4U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffcffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [4U] << 3U)) | (0x10000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [4U] 
                                              << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfff3ffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [4U] << 7U)) | (0x40000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [4U] 
                                              << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffcfffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [4U] << 0xbU)) | (0x100000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [4U] 
                                                 << 9U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xff3fffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [4U] << 0xfU)) | (0x400000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [4U] 
                                                 << 0xdU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfcffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [4U] << 0x13U)) | (0x1000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [4U] 
                                                   << 0x11U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xf3ffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [4U] << 0x17U)) | (0x4000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [4U] 
                                                   << 0x15U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xcfffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                              [4U] << 0x1bU)) | (0x10000000U 
                                                 & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                    [4U] 
                                                    << 0x19U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0x3fffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
               [4U] << 0x1fU) | (0x40000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                [4U] 
                                                << 0x1dU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xfcU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [4U] >> 5U)) | (1U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [4U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xf3U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [4U] >> 1U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [4U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xcfU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [4U] << 3U)) | (0x10U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [4U] 
                                                 << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0x3fU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [4U] << 7U)) | (0x40U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [4U] 
                                                 << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[4U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffffcU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [5U] >> 0x1dU)) | (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                        [5U] >> 0x1fU)));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffff3U & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [5U] >> 0x19U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [5U] 
                                              >> 0x1bU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffffcfU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [5U] >> 0x15U)) | (0x10U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [5U] >> 0x17U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffff3fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [5U] >> 0x11U)) | (0x40U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [5U] >> 0x13U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffcffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [5U] >> 0xdU)) | (0x100U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [5U] >> 0xfU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffff3ffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [5U] >> 9U)) | (0x400U & (
                                                   vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [5U] 
                                                   >> 0xbU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffcfffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [5U] >> 5U)) | (0x1000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [5U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffff3fffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [5U] >> 1U)) | (0x4000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [5U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffcffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [5U] << 3U)) | (0x10000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [5U] 
                                              << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfff3ffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [5U] << 7U)) | (0x40000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [5U] 
                                              << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffcfffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [5U] << 0xbU)) | (0x100000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [5U] 
                                                 << 9U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xff3fffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [5U] << 0xfU)) | (0x400000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [5U] 
                                                 << 0xdU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfcffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [5U] << 0x13U)) | (0x1000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [5U] 
                                                   << 0x11U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xf3ffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [5U] << 0x17U)) | (0x4000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [5U] 
                                                   << 0x15U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xcfffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                              [5U] << 0x1bU)) | (0x10000000U 
                                                 & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                    [5U] 
                                                    << 0x19U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0x3fffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
               [5U] << 0x1fU) | (0x40000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                [5U] 
                                                << 0x1dU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xfcU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [5U] >> 5U)) | (1U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [5U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xf3U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [5U] >> 1U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [5U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xcfU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [5U] << 3U)) | (0x10U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [5U] 
                                                 << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0x3fU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [5U] << 7U)) | (0x40U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [5U] 
                                                 << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[5U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffffcU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [6U] >> 0x1dU)) | (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                        [6U] >> 0x1fU)));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffff3U & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [6U] >> 0x19U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [6U] 
                                              >> 0x1bU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffffcfU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [6U] >> 0x15U)) | (0x10U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [6U] >> 0x17U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffff3fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [6U] >> 0x11U)) | (0x40U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [6U] >> 0x13U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffcffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [6U] >> 0xdU)) | (0x100U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [6U] >> 0xfU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffff3ffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [6U] >> 9U)) | (0x400U & (
                                                   vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [6U] 
                                                   >> 0xbU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffcfffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [6U] >> 5U)) | (0x1000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [6U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffff3fffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [6U] >> 1U)) | (0x4000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [6U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffcffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [6U] << 3U)) | (0x10000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [6U] 
                                              << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfff3ffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [6U] << 7U)) | (0x40000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [6U] 
                                              << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffcfffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [6U] << 0xbU)) | (0x100000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [6U] 
                                                 << 9U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xff3fffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [6U] << 0xfU)) | (0x400000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [6U] 
                                                 << 0xdU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfcffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [6U] << 0x13U)) | (0x1000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [6U] 
                                                   << 0x11U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xf3ffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [6U] << 0x17U)) | (0x4000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [6U] 
                                                   << 0x15U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xcfffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                              [6U] << 0x1bU)) | (0x10000000U 
                                                 & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                    [6U] 
                                                    << 0x19U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0x3fffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
               [6U] << 0x1fU) | (0x40000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                [6U] 
                                                << 0x1dU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xfcU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [6U] >> 5U)) | (1U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [6U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xf3U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [6U] >> 1U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [6U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xcfU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [6U] << 3U)) | (0x10U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [6U] 
                                                 << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0x3fU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [6U] << 7U)) | (0x40U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [6U] 
                                                 << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[6U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffffcU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [7U] >> 0x1dU)) | (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                        [7U] >> 0x1fU)));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffff3U & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                     [7U] >> 0x19U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [7U] 
                                              >> 0x1bU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffffcfU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [7U] >> 0x15U)) | (0x10U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [7U] >> 0x17U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffff3fU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                        [7U] >> 0x11U)) | (0x40U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [7U] >> 0x13U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffffcffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [7U] >> 0xdU)) | (0x100U & 
                                           (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                            [7U] >> 0xfU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffff3ffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                         [7U] >> 9U)) | (0x400U & (
                                                   vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [7U] 
                                                   >> 0xbU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffffcfffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [7U] >> 5U)) | (0x1000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [7U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffff3fffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                          [7U] >> 1U)) | (0x4000U & 
                                          (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                           [7U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfffcffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [7U] << 3U)) | (0x10000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [7U] 
                                              << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfff3ffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x80000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                           [7U] << 7U)) | (0x40000U 
                                           & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                              [7U] 
                                              << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xffcfffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x200000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [7U] << 0xbU)) | (0x100000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [7U] 
                                                 << 9U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xff3fffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x800000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                            [7U] << 0xfU)) | (0x400000U 
                                              & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                 [7U] 
                                                 << 0xdU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xfcffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x2000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [7U] << 0x13U)) | (0x1000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [7U] 
                                                   << 0x11U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xf3ffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x8000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                             [7U] << 0x17U)) | (0x4000000U 
                                                & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                   [7U] 
                                                   << 0x15U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0xcfffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((0x20000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                              [7U] << 0x1bU)) | (0x10000000U 
                                                 & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                    [7U] 
                                                    << 0x19U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val 
        = ((0x3fffffffU & vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val) 
           | ((vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
               [7U] << 0x1fU) | (0x40000000U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state
                                                [7U] 
                                                << 0x1dU))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xfcU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((2U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [7U] >> 5U)) | (1U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [7U] >> 7U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xf3U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((8U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                     [7U] >> 1U)) | (4U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                           [7U] >> 3U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0xcfU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x20U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [7U] << 3U)) | (0x10U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [7U] 
                                                 << 1U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val 
        = ((0x3fU & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val)) 
           | ((0x80U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                        [7U] << 7U)) | (0x40U & (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data
                                                 [7U] 
                                                 << 5U))));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__j = 8U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[7U] 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i = 8U;
}

VL_ATTR_COLD void Vspi_eth_tb_top___024root___eval_final(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_eth_tb_top___024root___dump_triggers__stl(Vspi_eth_tb_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vspi_eth_tb_top___024root___eval_phase__stl(Vspi_eth_tb_top___024root* vlSelf);

VL_ATTR_COLD void Vspi_eth_tb_top___024root___eval_settle(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___eval_settle\n"); );
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
            Vspi_eth_tb_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("spi_eth_tb_top.sv", 8, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vspi_eth_tb_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_eth_tb_top___024root___dump_triggers__stl(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vspi_eth_tb_top___024root___stl_sequent__TOP__0(Vspi_eth_tb_top___024root* vlSelf);

VL_ATTR_COLD void Vspi_eth_tb_top___024root___eval_stl(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vspi_eth_tb_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vspi_eth_tb_top___024root___stl_sequent__TOP__0(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___stl_sequent__TOP__0\n"); );
    // Body
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
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tvalid_next = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__update_crc = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__reset_crc = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__reset_crc = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__update_crc = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_msn_next 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_msn_reg;
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rst_ni 
        = (1U & (~ (IData)(vlSelf->rst_i)));
    vlSelf->wb_ack_o = vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__ack_q;
    vlSelf->spi_eth_tb_top__DOT____Vcellinp__u_ksz__csn 
        = (1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cs_reg));
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
    vlSelf->spi_eth_tb_top__DOT__ksz_chip_state = ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_enable)
                                                    ? 
                                                   ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_enable)
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_enable)
                                                     ? 1U
                                                     : 0U));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tdata_next = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_en_next = 0U;
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
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__cipo_shift_d 
        = ((0xfeU & ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__cipo_shift_q) 
                     << 1U)) | (IData)(vlSelf->spi_eth_tb_top__DOT__spi_cipo));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_avail 
        = ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_next) 
           != (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_first));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_odd_next 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_odd_reg;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_next 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tlast_next = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__fcs_next 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__ifg_next 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__ifg_reg;
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
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_cnt_next 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_cnt;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_axis_tready_next = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_txd_next = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_next 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg;
    if ((4U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg))) {
        if ((2U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg))) {
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__reset_crc = 1U;
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
            if ((1U & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg)))) {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__update_crc = 1U;
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_next = 0U;
            }
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_en_next = 1U;
            if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg))) {
                if ((3U <= (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg))) {
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__fcs_next 
                        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state;
                }
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
        }
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_odd_next = 1U;
    } else {
        if ((1U & (~ ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg) 
                      >> 1U)))) {
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__reset_crc = 1U;
        }
        if ((2U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg))) {
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__update_crc = 1U;
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_en_next = 1U;
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
            if ((1U & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg)))) {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_axis_tready_next = 1U;
                if (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tvalid) {
                    if (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tlast) {
                        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_axis_tready_next 
                            = (1U & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_axis_tready_reg)));
                    }
                }
            }
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_txd_next 
                = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg;
        } else if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg))) {
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_en_next = 1U;
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_odd_next = 1U;
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_next 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg)));
            if ((6U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg))) {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_axis_tready_next = 1U;
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_next = 1U;
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_next 
                    = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tdata;
            } else if ((7U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg))) {
                if (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_axis_tready_reg) {
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_axis_tready_next = 1U;
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_next 
                        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tdata;
                }
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_next = 2U;
            } else {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_next = 1U;
            }
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_txd_next = 0x55U;
            if ((6U != (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg))) {
                if ((7U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg))) {
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_next = 0U;
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_txd_next = 0xd5U;
                }
            }
        } else {
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_odd_next = 0U;
            if (vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tvalid) {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_en_next = 1U;
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_odd_next = 1U;
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_next = 1U;
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_txd_next = 0x55U;
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_next = 1U;
            } else {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_next = 0U;
            }
        }
    }
    vlSelf->wb_dat_o = ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__is_reg_q)
                         ? vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__reg_rdata_q
                         : ((IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__is_tx_q)
                             ? vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_cpu_rdata
                             : vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_cpu_rdata));
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_next = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__is_tx 
        = (IData)((0x1000U == (0x1800U & (IData)(vlSelf->wb_adr_i))));
    if ((1U & (~ ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_reg) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_reg))) {
            if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_reg))) {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tvalid_next = 1U;
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__update_crc = 1U;
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tdata_next 
                    = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4;
                if ((3U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_cnt))) {
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tlast_next = 1U;
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_next = 0U;
                } else {
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_next = 3U;
                }
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_cnt_next 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_cnt)));
            } else {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_next 
                    = ((IData)(vlSelf->rx_valid) ? 2U
                        : 0U);
            }
        } else if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_reg))) {
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tvalid_next = 1U;
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__update_crc = 1U;
            vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tdata_next 
                = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4;
            if (((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d4) 
                 & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d4))) {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tlast_next = 1U;
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_next = 2U;
            } else {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_next 
                    = ((IData)(vlSelf->rx_valid) ? 1U
                        : 3U);
            }
            if ((1U & (~ ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d4) 
                          & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d4))))) {
                if ((1U & (~ (IData)(vlSelf->rx_valid)))) {
                    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_cnt_next = 0U;
                }
            }
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
        }
    }
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
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__wb_req 
        = ((IData)(vlSelf->wb_cyc_i) & (IData)(vlSelf->wb_stb_i));
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT____VdfgRegularize_h28ad532a_1_2 
        = (1U & ((~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__ack_q)) 
                 & (~ (IData)(vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_rd_pending))));
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
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__fcs_next 
        = vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_fcs_next = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_frame_next = 0U;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tuser_next = 0U;
    if ((1U & (~ ((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_reg) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_reg))) {
            if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_reg))) {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__fcs_next 
                    = ((3U == (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_cnt))
                        ? vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_next
                        : 0U);
            }
        } else if ((1U & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_reg))) {
            if (((IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d4) 
                 & (IData)(vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d4))) {
                vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__fcs_next = 0xdeadbeefU;
            }
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

VL_ATTR_COLD void Vspi_eth_tb_top___024root___eval_triggers__stl(Vspi_eth_tb_top___024root* vlSelf);

VL_ATTR_COLD bool Vspi_eth_tb_top___024root___eval_phase__stl(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vspi_eth_tb_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vspi_eth_tb_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_eth_tb_top___024root___dump_triggers__ico(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_eth_tb_top___024root___dump_triggers__act(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_i)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk_i or negedge spi_eth_tb_top.u_spi_wb.rst_ni)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clk_25mhz or negedge spi_eth_tb_top.u_spi_wb.rst_ni)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge spi_eth_tb_top.__Vcellinp__u_ksz__csn or posedge spi_eth_tb_top.u_spi_wb.u_spi_core.clk_q)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge clk_25mhz)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge spi_eth_tb_top.__Vcellinp__u_ksz__csn or negedge spi_eth_tb_top.u_spi_wb.rst_ni or negedge spi_eth_tb_top.u_spi_wb.u_spi_core.clk_q)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([changed] spi_eth_tb_top.ksz_chip_state)\n");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(posedge clk_25mhz or posedge spi_eth_tb_top.__Vcellinp__u_ksz__csn or posedge spi_eth_tb_top.u_spi_wb.u_spi_core.clk_q)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_eth_tb_top___024root___dump_triggers__nba(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_i)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk_i or negedge spi_eth_tb_top.u_spi_wb.rst_ni)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clk_25mhz or negedge spi_eth_tb_top.u_spi_wb.rst_ni)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge spi_eth_tb_top.__Vcellinp__u_ksz__csn or posedge spi_eth_tb_top.u_spi_wb.u_spi_core.clk_q)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge clk_25mhz)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge spi_eth_tb_top.__Vcellinp__u_ksz__csn or negedge spi_eth_tb_top.u_spi_wb.rst_ni or negedge spi_eth_tb_top.u_spi_wb.u_spi_core.clk_q)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([changed] spi_eth_tb_top.ksz_chip_state)\n");
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(posedge clk_25mhz or posedge spi_eth_tb_top.__Vcellinp__u_ksz__csn or posedge spi_eth_tb_top.u_spi_wb.u_spi_core.clk_q)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vspi_eth_tb_top___024root___ctor_var_reset(Vspi_eth_tb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_eth_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_eth_tb_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_i = VL_RAND_RESET_I(1);
    vlSelf->clk_25mhz = VL_RAND_RESET_I(1);
    vlSelf->wb_adr_i = VL_RAND_RESET_I(13);
    vlSelf->wb_dat_i = VL_RAND_RESET_I(32);
    vlSelf->wb_dat_o = VL_RAND_RESET_I(32);
    vlSelf->wb_sel_i = VL_RAND_RESET_I(4);
    vlSelf->wb_we_i = VL_RAND_RESET_I(1);
    vlSelf->wb_cyc_i = VL_RAND_RESET_I(1);
    vlSelf->wb_stb_i = VL_RAND_RESET_I(1);
    vlSelf->wb_ack_o = VL_RAND_RESET_I(1);
    vlSelf->rx_data = VL_RAND_RESET_I(8);
    vlSelf->rx_valid = VL_RAND_RESET_I(1);
    vlSelf->rx_last = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__spi_cipo = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__ksz_tx_last = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__ksz_intrn = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__ksz_chip_state = VL_RAND_RESET_I(4);
    vlSelf->spi_eth_tb_top__DOT__ksz_rx_byte_count = VL_RAND_RESET_I(12);
    vlSelf->spi_eth_tb_top__DOT__ksz_tx_byte_count = VL_RAND_RESET_I(12);
    vlSelf->spi_eth_tb_top__DOT__ksz_cmd_byte0 = VL_RAND_RESET_I(8);
    vlSelf->spi_eth_tb_top__DOT__ksz_cmd_byte1 = VL_RAND_RESET_I(8);
    vlSelf->spi_eth_tb_top__DOT__ksz_read_pulse = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__ksz_write_pulse = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT____Vcellinp__u_ksz__csn = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__is_tx = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__wb_req = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__ack_q = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_rd_pending = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__reg_wr = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cfg_reg = VL_RAND_RESET_I(32);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__cs_reg = VL_RAND_RESET_I(4);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__intr_complete = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__intr_enable_complete = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_data_out = VL_RAND_RESET_I(8);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_start = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__spi_idle_q = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__reg_rdata_q = VL_RAND_RESET_I(32);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_cpu_req = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_cpu_rdata = VL_RAND_RESET_I(32);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_cpu_req = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_cpu_rdata = VL_RAND_RESET_I(32);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__is_reg_q = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__is_tx_q = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__buf_byte_addr = VL_RAND_RESET_I(11);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_byte_lane_q = VL_RAND_RESET_I(2);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_bram_rdata = VL_RAND_RESET_I(32);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_data_valid = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__tx_fetch_pending = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_count = VL_RAND_RESET_I(11);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_wr_pending = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_byte_addr = VL_RAND_RESET_I(11);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_byte_data = VL_RAND_RESET_I(8);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_b_wdata = VL_RAND_RESET_I(32);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_b_be = VL_RAND_RESET_I(4);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__rx_bram_unused_rdata = VL_RAND_RESET_I(32);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT____VdfgRegularize_h28ad532a_1_2 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_tx_ram__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_rx_ram__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_counter_q = VL_RAND_RESET_I(16);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_counter_d = VL_RAND_RESET_I(16);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__output_edge = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__sample_edge = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__start_edge = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__finish_edge = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_q = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_d = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__sample_phase_q = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__sample_phase_d = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__byte_count_q = VL_RAND_RESET_I(11);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__byte_count_d = VL_RAND_RESET_I(11);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_q = VL_RAND_RESET_I(4);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_count_d = VL_RAND_RESET_I(4);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__copi_shift_q = VL_RAND_RESET_I(8);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__copi_shift_d = VL_RAND_RESET_I(8);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__cipo_shift_q = VL_RAND_RESET_I(8);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__cipo_shift_d = VL_RAND_RESET_I(8);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__data_out_valid_q = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_running = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rxfhsr_t = 0;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rxqcr_t = 0;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__txqcr_t = 0;
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_MARL = VL_RAND_RESET_I(16);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_MARM = VL_RAND_RESET_I(16);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_MARH = VL_RAND_RESET_I(16);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXCR = VL_RAND_RESET_I(16);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXSR = VL_RAND_RESET_I(16);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXCR1 = VL_RAND_RESET_I(16);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXCR2 = VL_RAND_RESET_I(16);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXMIR = VL_RAND_RESET_I(16);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXFHSR = VL_RAND_RESET_I(16);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXFHBCR = VL_RAND_RESET_I(16);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXQCR = VL_RAND_RESET_I(16);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXQCR = VL_RAND_RESET_I(16);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_TXFDPR = VL_RAND_RESET_I(16);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXFDPR = VL_RAND_RESET_I(16);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_IER = VL_RAND_RESET_I(16);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_ISR = VL_RAND_RESET_I(16);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_RXFCTR = VL_RAND_RESET_I(16);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__register_CIDER = VL_RAND_RESET_I(16);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__spi_state_reg = VL_RAND_RESET_I(4);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__opcode = VL_RAND_RESET_I(2);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_addr = VL_RAND_RESET_I(8);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__bit_counter = VL_RAND_RESET_I(8);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_in = VL_RAND_RESET_I(16);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__shift_reg_out = VL_RAND_RESET_I(16);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__addr_high = VL_RAND_RESET_I(2);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_data = VL_RAND_RESET_I(16);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__write_pulse_old = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__mac_address = VL_RAND_RESET_Q(48);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_dest_mac = VL_RAND_RESET_Q(48);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_enable = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_enable = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__promiscuous_mode = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_first = VL_RAND_RESET_I(4);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_next = VL_RAND_RESET_I(4);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_last = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_frame_start_pos[__Vi0] = VL_RAND_RESET_I(13);
    }
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_avail = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_packet_length = VL_RAND_RESET_I(11);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_frame_addr = VL_RAND_RESET_I(11);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_start_pending = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_busy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_wr_ptr = VL_RAND_RESET_I(15);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_writing = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_header_count = VL_RAND_RESET_I(2);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_frame_length = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_wr_ptr = VL_RAND_RESET_I(15);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_rd_ptr = VL_RAND_RESET_I(15);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_frame_start = VL_RAND_RESET_I(15);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_advance = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_reading = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_auto_release_pending = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__byte_sync = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg = VL_RAND_RESET_I(32);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg = VL_RAND_RESET_I(32);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_fcs_reg_rev = VL_RAND_RESET_I(32);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fcs_reg_rev = VL_RAND_RESET_I(32);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tdata = VL_RAND_RESET_I(8);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tvalid = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_axis_tlast = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__irq_rx_enable = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__irq_tx_enable = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__sync = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_enable_old = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_addr_axis = VL_RAND_RESET_I(11);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_toggle = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_toggle = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync1 = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync2 = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync3 = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync1 = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync2 = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync3 = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__tx_valid_old = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__read_addr = VL_RAND_RESET_I(8);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__reg_read = VL_RAND_RESET_I(16);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_byte_out = VL_RAND_RESET_I(8);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_bit_count = VL_RAND_RESET_I(3);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__unnamedblk1__DOT__frame_end_pos = VL_RAND_RESET_I(15);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_reg = VL_RAND_RESET_I(3);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__state_next = VL_RAND_RESET_I(3);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__reset_crc = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__update_crc = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__mii_odd = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__mii_locked = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d0 = VL_RAND_RESET_I(8);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d1 = VL_RAND_RESET_I(8);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d2 = VL_RAND_RESET_I(8);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d3 = VL_RAND_RESET_I(8);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rxd_d4 = VL_RAND_RESET_I(8);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d0 = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d1 = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d2 = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d3 = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_dv_d4 = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d0 = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d1 = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d2 = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d3 = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__gmii_rx_er_d4 = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tdata_reg = VL_RAND_RESET_I(8);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tdata_next = VL_RAND_RESET_I(8);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tvalid_next = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tlast_reg = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tlast_next = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tuser_reg = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__output_axis_tuser_next = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_frame_reg = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_frame_next = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_fcs_reg = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__error_bad_fcs_next = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__fcs_next = VL_RAND_RESET_I(32);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_state = VL_RAND_RESET_I(32);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_cnt = VL_RAND_RESET_I(2);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_cnt_next = VL_RAND_RESET_I(2);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__crc_next = VL_RAND_RESET_I(32);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_out = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_state[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__output_mask_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__state_val = VL_RAND_RESET_I(32);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__data_val = VL_RAND_RESET_I(8);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_rx_inst__DOT__eth_crc_8__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_reg = VL_RAND_RESET_I(3);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__state_next = VL_RAND_RESET_I(3);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__reset_crc = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__update_crc = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_reg = VL_RAND_RESET_I(8);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_tdata_next = VL_RAND_RESET_I(8);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__ifg_reg = VL_RAND_RESET_I(8);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__ifg_next = VL_RAND_RESET_I(8);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_odd_reg = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_odd_next = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_msn_reg = VL_RAND_RESET_I(4);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__mii_msn_next = VL_RAND_RESET_I(4);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_reg = VL_RAND_RESET_I(16);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__frame_ptr_next = VL_RAND_RESET_I(16);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_txd_reg = VL_RAND_RESET_I(8);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_txd_next = VL_RAND_RESET_I(8);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_en_reg = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_en_next = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_er_reg = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__gmii_tx_er_next = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_axis_tready_reg = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__input_axis_tready_next = VL_RAND_RESET_I(1);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_state = VL_RAND_RESET_I(32);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__fcs_next = VL_RAND_RESET_I(32);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__crc_next = VL_RAND_RESET_I(32);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_out = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_state[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__lfsr_mask_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_state[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__output_mask_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__state_val = VL_RAND_RESET_I(32);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__data_val = VL_RAND_RESET_I(8);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->spi_eth_tb_top__DOT__u_ksz__DOT__gmii_tx_inst__DOT__eth_crc_8__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__in = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__0__out = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__Vfuncout = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__in = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__bit_reverse__1__out = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_frame_addr = VL_RAND_RESET_I(11);
    vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v0 = 0;
    vlSelf->__Vdlyvval__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v0 = 0;
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_next = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length__v0 = 0;
    vlSelf->__Vdlyvval__spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length__v0 = VL_RAND_RESET_I(11);
    vlSelf->__Vdlyvset__spi_eth_tb_top__DOT__u_ksz__DOT__rx_packet_length__v0 = 0;
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_toggle = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v1 = 0;
    vlSelf->__Vdlyvset__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v1 = 0;
    vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v2 = 0;
    vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v3 = 0;
    vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v4 = 0;
    vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v5 = 0;
    vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v6 = 0;
    vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v7 = 0;
    vlSelf->__Vdlyvval__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v7 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v8 = 0;
    vlSelf->__Vdlyvval__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_mem__v8 = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_start_pending = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_toggle = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__spi_state_reg = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__bit_counter = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__opcode = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__spi_eth_tb_top__DOT__ksz_write_pulse = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_int_sync3 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_int_sync3 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_header_count = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_wr_ptr = VL_RAND_RESET_I(15);
    vlSelf->__Vdlyvdim0__spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_mem__v0 = 0;
    vlSelf->__Vdlyvval__spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_mem__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__spi_eth_tb_top__DOT__u_ksz__DOT__tx_fifo_mem__v0 = 0;
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__write_data = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__register_ISR = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_rd_ptr = VL_RAND_RESET_I(15);
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_buf_first = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_auto_release_pending = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__spi_eth_tb_top__DOT__u_ksz__DOT__rx_fifo_bit_count = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__spi_eth_tb_top__DOT__u_spi_wb__DOT__rst_ni__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk_25mhz__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__spi_eth_tb_top__DOT____Vcellinp__u_ksz__csn__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__spi_eth_tb_top__DOT__u_spi_wb__DOT__u_spi_core__DOT__clk_q__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__spi_eth_tb_top__DOT__ksz_chip_state__0 = VL_RAND_RESET_I(4);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 14; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
