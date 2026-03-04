// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

// Simulation stub for Xilinx IDELAYCTRL primitive.
// RDY = 1 always (no calibration needed in simulation).

/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSEDSIGNAL */
module IDELAYCTRL (
  output RDY,
  input  REFCLK,
  input  RST
);

  assign RDY = ~RST;

endmodule
/* verilator lint_on UNUSEDSIGNAL */
/* verilator lint_on DECLFILENAME */
