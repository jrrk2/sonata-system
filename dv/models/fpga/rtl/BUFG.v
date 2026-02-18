// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

// This is a crude model of the Xilinx BUFG global clock buffer primitive;
// enough to make the SD clock divider simulate correctly in Verilator.

module BUFG (
  input  I,
  output O
);

assign O = I;

endmodule
