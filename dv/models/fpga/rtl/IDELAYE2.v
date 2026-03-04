// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

// Simulation stub for Xilinx IDELAYE2 primitive.
// Pass-through: DATAOUT = IDATAIN (no actual delay in simulation).

/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNUSEDPARAM */
module IDELAYE2 #(
  parameter IDELAY_TYPE            = "VAR_LOAD",
  parameter DELAY_SRC              = "IDATAIN",
  parameter integer IDELAY_VALUE   = 0,
  parameter SIGNAL_PATTERN         = "DATA",
  parameter real REFCLK_FREQUENCY  = 200.0,
  parameter HIGH_PERFORMANCE_MODE  = "TRUE",
  parameter PIPE_SEL               = "FALSE",
  parameter CINVCTRL_SEL           = "FALSE"
) (
  output DATAOUT,
  input  IDATAIN,
  input  DATAIN,
  input  C,
  input  CE,
  input  INC,
  input  LD,
  input  LDPIPEEN,
  input  REGRST,
  input  [4:0] CNTVALUEIN,
  output [4:0] CNTVALUEOUT
);

  // Pass-through in simulation
  assign DATAOUT = IDATAIN;
  assign CNTVALUEOUT = CNTVALUEIN;

endmodule
/* verilator lint_on UNUSEDPARAM */
/* verilator lint_on UNUSEDSIGNAL */
/* verilator lint_on DECLFILENAME */
