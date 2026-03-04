// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

// Simulation stub for Xilinx MMCME2_BASE primitive.
// LOCKED = 1, CLKOUT0 = CLKIN1, CLKFBOUT = CLKIN1 (pass-through).

/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNUSEDPARAM */
module MMCME2_BASE #(
  parameter real    CLKFBOUT_MULT_F  = 5.0,
  parameter real    CLKOUT0_DIVIDE_F = 1.0,
  parameter real    CLKIN1_PERIOD    = 10.0,
  parameter integer DIVCLK_DIVIDE   = 1,
  parameter real    CLKOUT1_DIVIDE   = 1.0,
  parameter real    CLKOUT2_DIVIDE   = 1.0,
  parameter real    CLKOUT3_DIVIDE   = 1.0,
  parameter real    CLKOUT4_DIVIDE   = 1.0,
  parameter real    CLKOUT5_DIVIDE   = 1.0,
  parameter real    CLKOUT6_DIVIDE   = 1.0,
  parameter real    CLKFBOUT_PHASE   = 0.0,
  parameter real    CLKOUT0_PHASE    = 0.0,
  parameter real    CLKOUT1_PHASE    = 0.0,
  parameter real    CLKOUT2_PHASE    = 0.0,
  parameter real    CLKOUT3_PHASE    = 0.0,
  parameter real    CLKOUT4_PHASE    = 0.0,
  parameter real    CLKOUT5_PHASE    = 0.0,
  parameter real    CLKOUT6_PHASE    = 0.0,
  parameter real    CLKOUT0_DUTY_CYCLE = 0.5,
  parameter real    CLKOUT1_DUTY_CYCLE = 0.5,
  parameter real    CLKOUT2_DUTY_CYCLE = 0.5,
  parameter real    CLKOUT3_DUTY_CYCLE = 0.5,
  parameter real    CLKOUT4_DUTY_CYCLE = 0.5,
  parameter real    CLKOUT5_DUTY_CYCLE = 0.5,
  parameter real    CLKOUT6_DUTY_CYCLE = 0.5,
  parameter         BANDWIDTH          = "OPTIMIZED",
  parameter integer CLKOUT4_CASCADE    = 0,
  parameter         STARTUP_WAIT       = "FALSE"
) (
  output CLKOUT0,
  output CLKOUT0B,
  output CLKOUT1,
  output CLKOUT1B,
  output CLKOUT2,
  output CLKOUT2B,
  output CLKOUT3,
  output CLKOUT3B,
  output CLKOUT4,
  output CLKOUT5,
  output CLKOUT6,
  output CLKFBOUT,
  output CLKFBOUTB,
  output LOCKED,
  input  CLKIN1,
  input  PWRDWN,
  input  RST,
  input  CLKFBIN
);

  // In simulation: pass clocks through
  assign CLKOUT0  = CLKIN1;
  assign CLKOUT0B = ~CLKIN1;
  assign CLKOUT1  = CLKIN1;
  assign CLKOUT1B = ~CLKIN1;
  assign CLKOUT2  = CLKIN1;
  assign CLKOUT2B = ~CLKIN1;
  assign CLKOUT3  = CLKIN1;
  assign CLKOUT3B = ~CLKIN1;
  assign CLKOUT4  = CLKIN1;
  assign CLKOUT5  = CLKIN1;
  assign CLKOUT6  = CLKIN1;
  assign CLKFBOUT  = CLKIN1;
  assign CLKFBOUTB = ~CLKIN1;
  assign LOCKED    = ~RST;

endmodule
/* verilator lint_on UNUSEDPARAM */
/* verilator lint_on UNUSEDSIGNAL */
/* verilator lint_on DECLFILENAME */
