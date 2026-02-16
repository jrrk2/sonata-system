// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

localparam ADDR_MARL = 8'h10;  // MAC address low
localparam ADDR_MARM = 8'h12;  // MAC address middle
localparam ADDR_MARH = 8'h14;  // MAC address high

localparam ADDR_GRR = 8'h26;

localparam ADDR_TXCR = 8'h70;     // Transmit control register
localparam ADDR_TXMIR = 8'h78;    // TXQ memory information register
localparam ADDR_TXQCR = 8'h80;    // TXQ command register
localparam ADDR_TXFDPR = 8'h84;   // TX frame data pointer register
localparam ADDR_TXNTFSR = 8'h9E;  // TX next total frames size register

localparam ADDR_TXSR = 8'h72;     // Transmit status register 1
localparam ADDR_RXCR1 = 8'h74;    // Receive control register 1
localparam ADDR_RXCR2 = 8'h76;    // Receive control register 2
localparam ADDR_RXFHSR = 8'h7c;   // Receive frame header status register
localparam ADDR_RXFHBCR = 8'h7e;  // Receive frame header byte count register
localparam ADDR_RXQCR = 8'h82;    // RXQ control register
localparam ADDR_RXFDPR = 8'h86;   // RX frame data pointer register
localparam ADDR_IER = 8'h90;      // Interrupt enable register
localparam ADDR_ISR = 8'h92;      // Interrupt status register
localparam ADDR_RXFCTR = 8'h9c;   // RX frame count and threshold register

localparam ADDR_FCLWR = 8'hB0;
localparam ADDR_FCHWR = 8'hB2;

localparam ADDR_CIDER = 8'hc0;    // Chip ID and enable register
localparam ADDR_P1MBCR = 8'he4;   // PHY 1 MII-register basic control register
localparam ADDR_P1MBSR = 8'he6;   // PHY 1 MII-register basic status register
localparam ADDR_P1SCLMD = 8'hf4;  // Port 1 PHY special control/status, LinkMD
localparam ADDR_P1CR = 8'hf6;     // Port 1 control register
localparam ADDR_P1SR = 8'hf8;     // Port 1 status register

// Virtual observation registers just for testbench
localparam ADDR_TXFCS_L = 8'h0C;
localparam ADDR_TXFCS_H = 8'h0D;
localparam ADDR_RXFCS_L = 8'h0E;
localparam ADDR_RXFCS_H = 8'h0F;

// Fields of RXFHSR
enum {
  RxCrcError                = 1 << 0,
  RxRuntFrame               = 1 << 1,
  RxFrameTooLong            = 1 << 2,
  RxFrameType               = 1 << 3,
  RxMiiError                = 1 << 4,
  RxUnicastFrame            = 1 << 5,
  RxMulticastFrame          = 1 << 6,
  RxBroadcastFrame          = 1 << 7,
  RxUdpFrameChecksumStatus  = 1 << 10,
  RxTcpFrameChecksumStatus  = 1 << 11,
  RxIpFrameChecksumStatus   = 1 << 12,
  RxIcmpFrameChecksumStatus = 1 << 13,
  RxFrameValid              = 1 << 15
} rxfhsr_t;

// Fields of RXQCR
enum {
  ReleaseRxErrorFrame            = 1 << 0,
  StartDmaAccess                 = 1 << 3,
  AutoDequeueRxQFrameEnable      = 1 << 4,
  RxFrameCountThresholdEnable    = 1 << 5,
  RxDataByteCountThresholdEnable = 1 << 6,
  RxDurationTimerThresholdEnable = 1 << 7,
  RxIpHeaderTwoByteOffsetEnable  = 1 << 9,
  RxFrameCountThresholdStatus    = 1 << 10,
  RxDataByteCountThresholdstatus = 1 << 11,
  RxDurationTimerThresholdStatus = 1 << 12
} rxqcr_t;

// Fields of TXQCR
enum {
  ManualEnqueueTxQFrameEnable = 1 << 0,
  TxQMemoryAvailableMonitor   = 1 << 1,
  AutoEnqueueTxQFrameEnable   = 1 << 2
} txqcr_t;
