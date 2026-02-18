// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

// This is a crude model of the Xilinx RAMB36E1 true dual-port block RAM
// primitive; enough to make the SD controller simulate correctly in Verilator.
// Only supports the TDP (true dual-port) mode with width-36 configuration
// (1024 x 32+4 data+parity) as used by sd_tl.sv.

module RAMB36E1 #(
  parameter DOA_REG             = 0,
  parameter DOB_REG             = 0,
  parameter EN_ECC_READ         = "FALSE",
  parameter EN_ECC_WRITE        = "FALSE",
  parameter RAM_MODE            = "TDP",
  parameter integer READ_WIDTH_A  = 36,
  parameter integer READ_WIDTH_B  = 36,
  parameter integer WRITE_WIDTH_A = 36,
  parameter integer WRITE_WIDTH_B = 36,
  parameter WRITE_MODE_A        = "READ_FIRST",
  parameter WRITE_MODE_B        = "READ_FIRST",
  parameter SIM_DEVICE          = "7SERIES",
  parameter SIM_COLLISION_CHECK = "ALL",
  parameter RSTREG_PRIORITY_A   = "RSTREG",
  parameter RSTREG_PRIORITY_B   = "RSTREG",
  parameter [35:0] SRVAL_A      = 36'h000000000,
  parameter [35:0] SRVAL_B      = 36'h000000000,
  parameter [35:0] INIT_A       = 36'h000000000,
  parameter [35:0] INIT_B       = 36'h000000000
) (
  // Port A
  input         CLKARDCLK,
  input         ENARDEN,
  input  [3:0]  WEA,
  input  [15:0] ADDRARDADDR,
  input  [31:0] DIADI,
  input  [3:0]  DIPADIP,
  output reg [31:0] DOADO,
  output reg [3:0]  DOPADOP,
  input         RSTRAMARSTRAM,
  input         RSTREGARSTREG,
  input         REGCEAREGCE,

  // Port B
  input         CLKBWRCLK,
  input         ENBWREN,
  input  [7:0]  WEBWE,
  input  [15:0] ADDRBWRADDR,
  input  [31:0] DIBDI,
  input  [3:0]  DIPBDIP,
  output reg [31:0] DOBDO,
  output reg [3:0]  DOPBDOP,
  input         RSTRAMB,
  input         RSTREGB,
  input         REGCEB,

  // Cascade (unused)
  input         CASCADEINA,
  input         CASCADEINB,
  output        CASCADEOUTA,
  output        CASCADEOUTB,

  // ECC (unused)
  output        DBITERR,
  output [7:0]  ECCPARITY,
  output [8:0]  RDADDRECC,
  output        SBITERR,
  input         INJECTDBITERR,
  input         INJECTSBITERR
);

  // 1024 x 32-bit data + 1024 x 4-bit parity
  reg [31:0] mem_data [0:1023];
  reg [3:0]  mem_par  [0:1023];

  // Width-36 address: bits [15:5] select the word, [4:0] unused
  wire [9:0] addr_a = ADDRARDADDR[14:5];
  wire [9:0] addr_b = ADDRBWRADDR[14:5];

  // Cascade / ECC tie-offs
  assign CASCADEOUTA = 1'b0;
  assign CASCADEOUTB = 1'b0;
  assign DBITERR     = 1'b0;
  assign SBITERR     = 1'b0;
  assign ECCPARITY   = 8'd0;
  assign RDADDRECC   = 9'd0;

  // Port A: READ_FIRST — read old value, then write
  always @(posedge CLKARDCLK) begin
    if (ENARDEN) begin
      DOADO   <= mem_data[addr_a];
      DOPADOP <= mem_par[addr_a];
      if (WEA[0]) mem_data[addr_a][ 7: 0] <= DIADI[ 7: 0];
      if (WEA[1]) mem_data[addr_a][15: 8] <= DIADI[15: 8];
      if (WEA[2]) mem_data[addr_a][23:16] <= DIADI[23:16];
      if (WEA[3]) mem_data[addr_a][31:24] <= DIADI[31:24];
      if (|WEA)   mem_par[addr_a]         <= DIPADIP;
    end
  end

  // Port B: READ_FIRST — read old value, then write
  // WEBWE[3:0] are the byte write enables for port B in TDP mode
  always @(posedge CLKBWRCLK) begin
    if (ENBWREN) begin
      DOBDO   <= mem_data[addr_b];
      DOPBDOP <= mem_par[addr_b];
      if (WEBWE[0]) mem_data[addr_b][ 7: 0] <= DIBDI[ 7: 0];
      if (WEBWE[1]) mem_data[addr_b][15: 8] <= DIBDI[15: 8];
      if (WEBWE[2]) mem_data[addr_b][23:16] <= DIBDI[23:16];
      if (WEBWE[3]) mem_data[addr_b][31:24] <= DIBDI[31:24];
      if (|WEBWE[3:0]) mem_par[addr_b]      <= DIPBDIP;
    end
  end

  // Initialize memory to zero
  integer i;
  initial begin
    for (i = 0; i < 1024; i = i + 1) begin
      mem_data[i] = 32'd0;
      mem_par[i]  = 4'd0;
    end
    DOADO   = INIT_A[31:0];
    DOPADOP = INIT_A[35:32];
    DOBDO   = INIT_B[31:0];
    DOPBDOP = INIT_B[35:32];
  end

endmodule
