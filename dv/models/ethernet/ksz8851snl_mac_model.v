// ksz8851snl_mac_model.v
// KSZ8851SNL Ethernet Controller Verilog Model
// Adapted for 25MHz clock with AXIS GMII modules

`default_nettype none

// Disable verbose byte-level logging (comment out to enable)
`define NO_VERBOSE_LOGGING

module ksz8851snl_mac_model (
    // SPI Interface
    input  wire       csn,
    input  wire       sclk,
    input  wire       si,
    output reg        so,
    
    // Simple 8-bit parallel interface (for simulation)
    input  wire [7:0] rx_data,
    input  wire       rx_valid,
    input  wire       rx_last,
    output reg  [7:0] tx_data,
    output reg        tx_valid,
    output reg        tx_last,
    
    // Reset and Clock
    input  wire       rstn,
    input  wire       clk_25mhz,
    
    // Interrupt
    output reg        intrn,
    
    // Debug outputs
    output reg [3:0]  chip_state,
    output wire [2:0] rx_state_mon,
    output wire [2:0] tx_state_mon,
    output reg [11:0] rx_byte_count,
    output reg [11:0] tx_byte_count,
    output wire       rx_error_bad_frame,
    output wire       rx_error_bad_fcs,
    output reg  [7:0] cmd_byte0,
    output reg  [7:0] cmd_byte1,
    output reg        read_pulse,      // SPI register read pulse
    output reg        write_pulse,     // SPI register write pulse
    // GMII debug outputs for DHCP server
    output wire [7:0] gmii_txd_mon,
    output wire       gmii_tx_en_mon,
    output wire       gmii_tx_er_mon
);

`include "ksz8851snl_mac.h"
   
// Chip states
localparam STATE_IDLE    = 4'd0;
localparam STATE_RX_ONLY = 4'd1;
localparam STATE_TX_ONLY = 4'd2;
localparam STATE_RX_TX   = 4'd3;

// SPI States
localparam SPI_IDLE        = 4'd0;
localparam SPI_CMD_BYTE0   = 4'd1;
localparam SPI_CMD_BYTE1   = 4'd2;
localparam SPI_DATA_PHASE  = 4'd3;

// SPI Opcodes
localparam OP_REG_READ   = 2'b00;
localparam OP_REG_WRITE  = 2'b01;
localparam OP_FIFO_READ  = 2'b10;
localparam OP_FIFO_WRITE = 2'b11;

// Explicit named registers (for easy debugging)
reg [15:0] register_MARL;      // 0x10: MAC Address Register Low
reg [15:0] register_MARM;      // 0x12: MAC Address Register Middle
reg [15:0] register_MARH;      // 0x14: MAC Address Register High
reg [15:0] register_TXCR;      // 0x70: Transmit Control Register
reg [15:0] register_TXSR;      // 0x72: Transmit Status Register
reg [15:0] register_RXCR1;     // 0x74: Receive Control Register 1
reg [15:0] register_RXCR2;     // 0x76: Receive Control Register 2
reg [15:0] register_TXMIR;     // 0x78: TX Memory Information Register
reg [15:0] register_RXFHSR;    // 0x7C: RX Frame Header Status Register
reg [15:0] register_RXFHBCR;   // 0x7E: RX Frame Header Byte Count Register
reg [15:0] register_TXQCR;     // 0x80: TXQ Command Register
reg [15:0] register_RXQCR;     // 0x82: RXQ Command Register
reg [15:0] register_TXFDPR;    // 0x84: TX Frame Data Pointer Register
reg [15:0] register_RXFDPR;    // 0x86: RX Frame Data Pointer Register
reg [15:0] register_IER;       // 0x90: Interrupt Enable Register
reg [15:0] register_ISR;       // 0x92: Interrupt Status Register
reg [15:0] register_RXFCTR;    // 0x9C: RX Frame Count & Threshold Register
reg [15:0] register_CIDER;     // 0xC0: Chip ID and Enable Register

// SPI signals
reg [3:0]  spi_state_reg;
reg [1:0]  opcode;
reg [7:0]  reg_addr;      // 8-bit word address
reg [7:0]  bit_counter;
reg [15:0] shift_reg_in, shift_reg_out;
reg [1:0]  addr_high;     // Upper 2 bits of address from CMD0
reg [15:0] write_data;    // Register write data (crosses from sclk to clk_25mhz)
reg        write_pulse_old; // Track write_pulse edge in clk_25mhz domain

// MAC control
reg [47:0] mac_address;
reg [47:0] rx_dest_mac;
reg        tx_enable, rx_enable;
reg        promiscuous_mode;

// Packet buffers
reg [3:0]  rx_buf_first, rx_buf_next, rx_buf_last;
reg [10:0] rx_packet_length [0:15];
reg [12:0] rx_frame_start_pos [0:15];  // Track FIFO start position for each frame
reg        rx_buf_avail;

// TX handling
reg [10:0] tx_packet_length;
reg [10:0] tx_frame_addr;
reg        tx_start_pending;
reg        tx_busy;

// TX FIFO (32KB - 16 buffers x 2KB each)
reg [7:0]  tx_fifo_mem [0:32767];
reg [14:0] tx_fifo_wr_ptr;
// tx_fifo_rd_ptr not needed - FIFO always starts at 0 for each frame
reg        tx_fifo_writing;
reg [1:0]  tx_header_count;
reg [15:0] tx_frame_length;

// RX FIFO (32KB - 16 buffers x 2KB each)
reg [7:0]  rx_fifo_mem [0:32767];
reg [14:0] rx_fifo_wr_ptr;
reg [14:0] rx_fifo_rd_ptr;
reg [14:0] rx_fifo_frame_start;
reg        rx_fifo_advance, rx_fifo_reading;
reg        rx_fifo_auto_release_pending;

// RX frame tracking (simplified - no RMII conversion needed)
reg        byte_sync;  // Track frame in progress

// CRC registers
wire [31:0] tx_fcs_reg;
wire [31:0] rx_fcs_reg;

// Bit-reversed CRC for register access
wire [31:0] tx_fcs_reg_rev;
wire [31:0] rx_fcs_reg_rev;

assign tx_fcs_reg_rev = {
    tx_fcs_reg[0],tx_fcs_reg[1],tx_fcs_reg[2],tx_fcs_reg[3],
    tx_fcs_reg[4],tx_fcs_reg[5],tx_fcs_reg[6],tx_fcs_reg[7],
    tx_fcs_reg[8],tx_fcs_reg[9],tx_fcs_reg[10],tx_fcs_reg[11],
    tx_fcs_reg[12],tx_fcs_reg[13],tx_fcs_reg[14],tx_fcs_reg[15],
    tx_fcs_reg[16],tx_fcs_reg[17],tx_fcs_reg[18],tx_fcs_reg[19],
    tx_fcs_reg[20],tx_fcs_reg[21],tx_fcs_reg[22],tx_fcs_reg[23],
    tx_fcs_reg[24],tx_fcs_reg[25],tx_fcs_reg[26],tx_fcs_reg[27],
    tx_fcs_reg[28],tx_fcs_reg[29],tx_fcs_reg[30],tx_fcs_reg[31]
};

assign rx_fcs_reg_rev = {
    rx_fcs_reg[0],rx_fcs_reg[1],rx_fcs_reg[2],rx_fcs_reg[3],
    rx_fcs_reg[4],rx_fcs_reg[5],rx_fcs_reg[6],rx_fcs_reg[7],
    rx_fcs_reg[8],rx_fcs_reg[9],rx_fcs_reg[10],rx_fcs_reg[11],
    rx_fcs_reg[12],rx_fcs_reg[13],rx_fcs_reg[14],rx_fcs_reg[15],
    rx_fcs_reg[16],rx_fcs_reg[17],rx_fcs_reg[18],rx_fcs_reg[19],
    rx_fcs_reg[20],rx_fcs_reg[21],rx_fcs_reg[22],rx_fcs_reg[23],
    rx_fcs_reg[24],rx_fcs_reg[25],rx_fcs_reg[26],rx_fcs_reg[27],
    rx_fcs_reg[28],rx_fcs_reg[29],rx_fcs_reg[30],rx_fcs_reg[31]
};

// AXI Stream RX
wire [7:0]  rx_axis_tdata;
wire        rx_axis_tvalid;
wire        rx_axis_tlast;
wire        rx_axis_tuser;

// AXI Stream TX
reg  [7:0]  tx_axis_tdata;
reg         tx_axis_tvalid;
reg         tx_axis_tlast;
wire        tx_axis_tready;
wire        tx_axis_tuser = 1'b0;

// GMII TX signals
// Connect TX signals to monitor outputs (for compatibility)
assign gmii_txd_mon = tx_data;
assign gmii_tx_en_mon = tx_valid;
assign gmii_tx_er_mon = 1'b0;

// Interrupt enables
reg irq_rx_enable, irq_tx_enable;

// State monitoring for debug
reg sync;
assign rx_state_mon = byte_sync ? 3'd2 : (rx_axis_tvalid ? 3'd1 : 3'd0);
assign tx_state_mon = tx_valid ? 3'd2 : (tx_busy ? 3'd1 : 3'd0);

// Initialize
integer i;
initial begin
    // Initialize all explicit registers
    register_MARL    = 16'h0000;
    register_MARM    = 16'h0000;
    register_MARH    = 16'h0000;
    register_TXCR    = 16'h0000;
    register_TXSR    = 16'h0000;
    register_RXCR1   = 16'h0800;  // Default value
    register_RXCR2   = 16'h0000;
    register_TXMIR   = 16'h1800;  // 6KB free
    register_RXFHSR  = 16'h0000;
    register_RXFHBCR = 16'h0000;
    register_TXQCR   = 16'h0000;
    register_RXQCR   = 16'h0000;
    register_TXFDPR  = 16'h0000;
    register_RXFDPR  = 16'h0000;
    register_IER     = 16'h0000;
    register_ISR     = 16'h0300;  // TX/RX stopped
    register_RXFCTR  = 16'h0000;
    register_CIDER   = 16'h8870;  // Chip ID

    chip_state = STATE_IDLE;
    intrn = 1'b1;
    mac_address = 48'h020100000001;
    promiscuous_mode = 1'b0;

    // Initialize FIFO pointers
    tx_fifo_wr_ptr = 15'h0;
    // tx_fifo_rd_ptr removed - not needed
    tx_fifo_writing = 1'b0;
    tx_header_count = 2'h0;
    tx_frame_length = 16'h0;

    rx_fifo_wr_ptr = 15'h0;
    rx_fifo_rd_ptr = 15'h0;
    rx_fifo_frame_start = 13'h0;
    rx_fifo_advance = 1'b0;
   
    rx_fifo_reading = 1'b0;
    rx_fifo_auto_release_pending = 1'b0;

    // Initialize CDC tracking signals
    write_pulse_old = 1'b0;
    write_data = 16'h0;
end

//=============================================================================
// Simple 8-bit RX path (no RMII conversion needed)
// The axis_gmii_rx module handles preamble detection and FCS checking
//=============================================================================

// No conversion needed - just track frame end for cleanup
always @(posedge clk_25mhz or negedge rstn) begin
    if (!rstn) begin
        byte_sync <= 1'b0;
    end else begin
        // Track when frames start/end for debug
        if (rx_axis_tvalid && !byte_sync) begin
            byte_sync <= 1'b1;
            $display("[%0t] RX: Frame start detected", $time);
        end

        if (rx_axis_tlast) begin
            byte_sync <= 1'b0;
            $display("[%0t] RX: Frame end detected", $time);
        end
    end
end

//=============================================================================
// AXIS GMII RX Instance
//=============================================================================

axis_gmii_rx gmii_rx_inst (
    .clk(clk_25mhz),
    .rst(~rstn),
    .gmii_rxd(rx_data),           // Direct 8-bit input
    .gmii_rx_dv(rx_valid),        // Direct valid input
    .gmii_rx_er(1'b0),            // No error signal in simple interface
    .output_axis_tdata(rx_axis_tdata),
    .output_axis_tvalid(rx_axis_tvalid),
    .output_axis_tlast(rx_axis_tlast),
    .output_axis_tuser(rx_axis_tuser),
    .clk_enable(1'b1),            // Always enabled (byte-level)
    .mii_select(1'b0),            // GMII mode (not MII)
    .error_bad_frame(rx_error_bad_frame),
    .error_bad_fcs(rx_error_bad_fcs),
    .fcs_reg(rx_fcs_reg)
);

//=============================================================================
// AXIS GMII TX Instance
//=============================================================================

axis_gmii_tx #(
    .ENABLE_PADDING(1),
    .MIN_FRAME_LENGTH(64)
) gmii_tx_inst (
    .clk(clk_25mhz),
    .rst(~rstn),
    .input_axis_tdata(tx_axis_tdata),
    .input_axis_tvalid(tx_axis_tvalid),
    .input_axis_tready(tx_axis_tready),
    .input_axis_tlast(tx_axis_tlast),
    .input_axis_tuser(tx_axis_tuser),
    .gmii_txd(tx_data),           // Direct 8-bit output
    .gmii_tx_en(tx_valid),        // Direct valid output
    .gmii_tx_er(),                // Not used
    .clk_enable(1'b1),            // Always enabled (byte-level)
    .mii_select(1'b0),            // GMII mode (not MII)
    .ifg_delay(8'd12),
    .fcs_reg(tx_fcs_reg)
);

//=============================================================================
// TX Frame Generation (simplified - no RMII conversion)
//=============================================================================

reg tx_enable_old;

always @(posedge clk_25mhz or negedge rstn) begin
    if (!rstn) begin
        tx_frame_addr <= 0;
        tx_enable_old <= 0;
        tx_axis_tvalid <= 0;
        tx_axis_tlast <= 0;
        tx_last <= 0;
    end else begin
        tx_enable_old <= tx_enable && tx_start_pending && !tx_axis_tvalid;

        if (tx_enable && tx_start_pending && !tx_busy && !tx_enable_old) begin
            // Start new frame - load first byte and assert valid
            tx_frame_addr <= 0;
            tx_axis_tdata <= tx_fifo_mem[4 + tx_frame_addr];  // First byte (skip 4-byte header)
            tx_axis_tvalid <= 1'b1;
            tx_axis_tlast <= (tx_packet_length == 1);  // Single byte packet
        end

        if (tx_axis_tready && tx_axis_tvalid) begin
            // Advance to next byte
            tx_frame_addr <= tx_frame_addr + 1;

            if (tx_axis_tlast) begin
                // Last byte was transferred, end transmission
                tx_axis_tvalid <= 1'b0;
            end else begin
                // Load next byte for next transfer
                tx_axis_tdata <= tx_fifo_mem[4 + tx_frame_addr + 1];
                tx_axis_tlast <= (tx_frame_addr + 1 == tx_packet_length - 1);
            end
        end

        // Generate tx_last output for debugging
        tx_last <= tx_axis_tlast && tx_axis_tvalid;
    end
end

//=============================================================================
// RX Packet Handling
//=============================================================================

reg [10:0] rx_addr_axis;

always @(posedge clk_25mhz or negedge rstn) begin
    if (!rstn) begin
        rx_addr_axis <= 0;
        rx_dest_mac <= 0;
        rx_buf_next <= 0;
        rx_buf_last <= 15;
        sync = 0;
        rx_byte_count <= 0;
        rx_int_toggle <= 0;
    end else begin
        // Address matching - trigger when first AXI Stream byte arrives
        // This MUST be before the FIFO write check so sync is set first
        if (rx_axis_tvalid && (rx_addr_axis == 0) && ~sync) begin
            // Accept all packets initially (set sync=1 immediately with blocking assignment)
            sync = 1'b1;

            // Fixed buffer allocation: each buffer gets 2KB (1 << 11) slot
            // 16 buffers x 2KB = 32KB FIFO
            rx_fifo_frame_start = {rx_buf_next[3:0], 11'b0};

            $display("[%0t] RX: Start packet reception at FIFO offset %0d (buffer %0d)",
                     $time, rx_fifo_frame_start, rx_buf_next[3:0]);
        end

        if (rx_axis_tvalid) begin
            rx_addr_axis <= rx_addr_axis + 1;
            rx_byte_count <= rx_addr_axis[10:0];

            if (rx_addr_axis < 6)
                rx_dest_mac <= {rx_dest_mac[39:0], rx_axis_tdata};

            // Store received byte in RX FIFO (after 8-byte header space)
            if (byte_sync && sync) begin
                rx_fifo_mem[rx_fifo_frame_start + 8 + rx_addr_axis] <= rx_axis_tdata;
`ifndef NO_VERBOSE_LOGGING
                if (rx_addr_axis < 20) begin
                    $display("[%0t] RX: Write FIFO[%0d] = 0x%02h (rx_addr_axis=%0d)", $time,
                             rx_fifo_frame_start + 8 + rx_addr_axis, rx_axis_tdata, rx_addr_axis);
                end
`endif
            end else if (rx_addr_axis < 20) begin
                $display("[%0t] RX: SKIP Write (byte_sync=%b, sync=%b, rx_addr_axis=%0d, data=0x%02h)",
                         $time, byte_sync, sync, rx_addr_axis, rx_axis_tdata);
            end
        end

        // Log address matching after collecting dest MAC
        if (rx_axis_tvalid && (rx_addr_axis == 6) && sync) begin
            if ((rx_dest_mac[47:24] == 24'h01005E) || (&rx_dest_mac) ||
                (mac_address == rx_dest_mac) || promiscuous_mode) begin
                $display("[%0t] RX: ACCEPT Dest=%012h (MAC=%012h, Promisc=%b)",
                         $time, rx_dest_mac, mac_address, promiscuous_mode);
            end else begin
                $display("[%0t] RX: REJECT Dest=%012h (MAC=%012h)",
                         $time, rx_dest_mac, mac_address);
            end
        end

        // Clear sync at end of frame
        if (~byte_sync) begin
            if (sync) begin
                rx_buf_next <= rx_buf_next + 1;
                $display("[%0t] RX: Clear sync at end of frame, rx_addr_axis=%0d", $time, rx_addr_axis);
                $display("[%0t] RX: Buffer state: rx_buf_first=%0d, rx_buf_next=%0d->%0d, rx_buf_last=%0d",
                         $time, rx_buf_first, rx_buf_next, rx_buf_next + 1, rx_buf_last);
            end
            sync = 1'b0;
        end
        
        if (rx_axis_tlast) begin
            if (sync) begin
                rx_packet_length[rx_buf_next[3:0]] <= rx_addr_axis + 1;
                rx_frame_start_pos[rx_buf_next[3:0]] <= rx_fifo_frame_start;  // Store frame start position

                if (!rx_error_bad_fcs && !rx_error_bad_frame) begin
                    rx_int_toggle <= ~rx_int_toggle;  // Toggle to signal RX interrupt

                    // Write 8-byte header to RX FIFO
                    // 4 dummy bytes
                    rx_fifo_mem[rx_fifo_frame_start + 0] <= 8'h00;
                    rx_fifo_mem[rx_fifo_frame_start + 1] <= 8'h00;
                    rx_fifo_mem[rx_fifo_frame_start + 2] <= 8'h00;
                    rx_fifo_mem[rx_fifo_frame_start + 3] <= 8'h00;

                    // 4-byte status header (status word + byte count)
                    // Status = 0x8000 (RxFrameValid)
                    rx_fifo_mem[rx_fifo_frame_start + 4] <= 8'h00;
                    rx_fifo_mem[rx_fifo_frame_start + 5] <= 8'h80;

                    // Byte count (11 bits)
                    rx_fifo_mem[rx_fifo_frame_start + 6] <= rx_addr_axis[7:0] + 1;
                    rx_fifo_mem[rx_fifo_frame_start + 7] <= {5'b0, rx_addr_axis[10:8]};

                    // Advance write pointer (8-byte header + frame + padding)
                    rx_fifo_wr_ptr <= rx_fifo_frame_start + 8 + rx_addr_axis + 1 +
                                     ((4 - ((rx_addr_axis + 1) & 2'h3)) & 2'h3);

                    $display("[%0t] RX: Complete %0d bytes, CRC=%08h OK",
                             $time, rx_addr_axis + 1, rx_fcs_reg_rev);
                    // Note: Following debug shows values BEFORE non-blocking assignments take effect
                    // Actual FIFO contents will be correct on next cycle
                    $display("[%0t] RX: FIFO will be stored at offset %0d (header/data values shown are STALE)",
                             $time, rx_fifo_frame_start);
                    $display("[%0t] RX: (Debug note: actual bytecount=%0d will be written next cycle)",
                             $time, rx_addr_axis + 1);
                    $display("[%0t] RX: (STALE) First 16 data bytes: %02h %02h %02h %02h %02h %02h %02h %02h %02h %02h %02h %02h %02h %02h %02h %02h",
                             $time,
                             rx_fifo_mem[rx_fifo_frame_start + 8],  rx_fifo_mem[rx_fifo_frame_start + 9],
                             rx_fifo_mem[rx_fifo_frame_start + 10], rx_fifo_mem[rx_fifo_frame_start + 11],
                             rx_fifo_mem[rx_fifo_frame_start + 12], rx_fifo_mem[rx_fifo_frame_start + 13],
                             rx_fifo_mem[rx_fifo_frame_start + 14], rx_fifo_mem[rx_fifo_frame_start + 15],
                             rx_fifo_mem[rx_fifo_frame_start + 16], rx_fifo_mem[rx_fifo_frame_start + 17],
                             rx_fifo_mem[rx_fifo_frame_start + 18], rx_fifo_mem[rx_fifo_frame_start + 19],
                             rx_fifo_mem[rx_fifo_frame_start + 20], rx_fifo_mem[rx_fifo_frame_start + 21],
                             rx_fifo_mem[rx_fifo_frame_start + 22], rx_fifo_mem[rx_fifo_frame_start + 23]);
                end else begin
                    $display("[%0t] RX: Complete with ERRORS (FCS=%b, Frame=%b)",
                             $time, rx_error_bad_fcs, rx_error_bad_frame);
                end
            end
            rx_addr_axis <= 0;
        end
    end
end

//=============================================================================
// Interrupt Request Signals and CDC Synchronizers
//=============================================================================

// Interrupt toggle signals in clk_25mhz domain (toggle when interrupt occurs)
reg tx_int_toggle;
reg rx_int_toggle;

// 2-FF synchronizers for CDC from clk_25mhz to sclk
reg tx_int_sync1, tx_int_sync2, tx_int_sync3;
reg rx_int_sync1, rx_int_sync2, rx_int_sync3;

//=============================================================================
// TX Control
//=============================================================================

reg tx_valid_old;

always @(posedge clk_25mhz or negedge rstn) begin
    if (!rstn) begin
        tx_busy <= 0;
        // tx_enable managed by SPI domain, not reset here
        tx_valid_old <= 0;
        tx_start_pending <= 0;
        tx_int_toggle <= 0;
    end else begin
       if (register_TXQCR[0])
	    tx_start_pending <= 1'b1;
       else if (tx_axis_tlast && tx_valid) begin
            tx_int_toggle <= ~tx_int_toggle;  // Toggle to signal interrupt (will be synchronized to sclk domain)
            tx_busy <= 0;
            tx_start_pending <= 0;
            // tx_fifo_rd_ptr not needed - FIFO always starts at 0 for each frame
        end else if (tx_enable && tx_start_pending && !tx_busy) begin
            tx_busy <= 1;
            $display("[%0t] TX: Start (%0d bytes)", $time, tx_packet_length);
        end
        if (tx_valid_old && !tx_valid) begin
            $display("[%0t] TX: Complete, CRC=%08h", $time, tx_fcs_reg_rev);
        end
        tx_valid_old <= tx_valid;
    end
end

//=============================================================================
// SPI Interface - Uses sclk directly as clock
//=============================================================================

reg [7:0] read_addr;   
reg [15:0] reg_read;   
   
// SPI input logic - shift on rising edge of sclk
always @(posedge sclk or posedge csn) begin
  if (csn)
    begin
       spi_state_reg <= SPI_IDLE;
       bit_counter <= 0;
       shift_reg_in = 0;  // Blocking to match usage
       addr_high = 0;
       cmd_byte0 = 8'b0;
       cmd_byte1 = 8'b0;
       tx_fifo_writing <= 1'b0;
       rx_fifo_reading <= 1'b0;
       rx_fifo_advance <= 1'b0;
       opcode <= 2'b00;
       reg_addr = 8'b0;  // Blocking to match usage
       read_pulse <= 1'b0;
       write_pulse <= 1'b0;
       // Initialize CDC synchronizers
       tx_int_sync1 <= 0;
       tx_int_sync2 <= 0;
       tx_int_sync3 <= 0;
       rx_int_sync1 <= 0;
       rx_int_sync2 <= 0;
       rx_int_sync3 <= 0;
    end
  else
    begin
       // Clear pulses by default
       read_pulse <= 1'b0;
       write_pulse <= 1'b0;
       // tx_start_pending is a different clock domain
       if (tx_start_pending)
	 register_TXQCR[0] <= 1'b0;

       // Synchronize interrupt toggles from clk_25mhz to sclk domain (CDC)
       tx_int_sync1 <= tx_int_toggle;
       tx_int_sync2 <= tx_int_sync1;
       tx_int_sync3 <= tx_int_sync2;
       rx_int_sync1 <= rx_int_toggle;
       rx_int_sync2 <= rx_int_sync1;
       rx_int_sync3 <= rx_int_sync2;

       // Detect toggle changes and set interrupt bits
       if (tx_int_sync2 != tx_int_sync3)
           register_ISR[14] <= 1'b1;
       if (rx_int_sync2 != rx_int_sync3)
           register_ISR[13] <= 1'b1;
       
       // Shift input data on every clock when selected
       shift_reg_in = {shift_reg_in[14:0], si};  // Blocking - value needed immediately
       bit_counter <= bit_counter + 1;
       case (spi_state_reg)
	 SPI_IDLE:
	   begin
	      spi_state_reg <= SPI_CMD_BYTE0;
	      bit_counter <= 1;  // Start from 1 since we already shifted once
	   end
	 SPI_CMD_BYTE0: begin
	     if (bit_counter == 7) begin
		 cmd_byte0 = shift_reg_in[7:0];  // Blocking - used in display same cycle
		 opcode <= shift_reg_in[7:6];
		 addr_high = shift_reg_in[1:0];  // Blocking - used next cycle in reg_addr
		 if (shift_reg_in[7:6] == OP_FIFO_READ ||
		     shift_reg_in[7:6] == OP_FIFO_WRITE) begin
		     spi_state_reg <= SPI_DATA_PHASE;

		     // Reset TX FIFO write state for new transaction
		     if (shift_reg_in[7:6] == OP_FIFO_WRITE) begin
			 tx_fifo_writing <= 1'b1;
			 tx_header_count <= 2'h0;
			 tx_frame_length <= 16'h0;
		     end

		     // Prepare RX FIFO read
		     if (shift_reg_in[7:6] == OP_FIFO_READ) begin
			 rx_fifo_reading <= 1'b1;
		     end
		 end else begin
		     spi_state_reg <= SPI_CMD_BYTE1;
		 end
		 bit_counter <= 0;
	     end
	 end

	 SPI_CMD_BYTE1: begin
	     if (bit_counter == 7) begin
		 cmd_byte1 = shift_reg_in[7:0];  // Blocking - used in display same cycle
		 // Reconstruct full 8-bit address:
		 // Bits [7:6] from addr_high (CMD_BYTE0[1:0])
		 // Bits [5:2] from CMD_BYTE1[7:4] (firmware puts reg[5:2] here)
		 // Bit  [1]   from byte enable BE[3] = CMD_BYTE0[5]
		 // Bit  [0]   always 0 (word-aligned)
		 reg_addr = {addr_high[1:0], shift_reg_in[7:4], cmd_byte0[5], 1'b0};  // Blocking - used immediately in case
		 if (opcode == OP_REG_READ) begin
		     read_addr <= reg_addr;
		     // $display("[%0t] SPI: REG_READ [0x%02h] (cmd: 0x%02h 0x%02h)", $time, reg_addr, cmd_byte0, cmd_byte1);
		     case (reg_addr)
			 ADDR_MARL:    reg_read = register_MARL;
			 ADDR_MARM:    reg_read = register_MARM;
			 ADDR_MARH:    reg_read = register_MARH;
			 ADDR_TXCR:    reg_read = register_TXCR;
			 ADDR_TXSR:    reg_read = register_TXSR;
			 ADDR_RXCR1:   reg_read = register_RXCR1;
			 ADDR_RXCR2:   reg_read = register_RXCR2;
			 ADDR_TXMIR:   reg_read = register_TXMIR;
			 ADDR_RXFHSR:  reg_read = register_RXFHSR;
			 ADDR_RXFHBCR: reg_read = rx_buf_avail ? 
						       rx_packet_length[rx_buf_first[3:0]] : 11'h0;
			 ADDR_TXQCR:   reg_read = register_TXQCR;
			 ADDR_RXQCR:   reg_read = register_RXQCR;
			 ADDR_TXFDPR:  reg_read = register_TXFDPR;
			 ADDR_RXFDPR:  reg_read = register_RXFDPR;
			 ADDR_IER:     reg_read = register_IER;
			 ADDR_ISR:     reg_read = register_ISR;
			 ADDR_RXFCTR:  reg_read = register_RXFCTR;
			 ADDR_CIDER:   reg_read = register_CIDER;
			 ADDR_TXFCS_L: reg_read = tx_fcs_reg_rev[15:0];
			 ADDR_TXFCS_H: reg_read = tx_fcs_reg_rev[31:16];
			 ADDR_RXFCS_L: reg_read = rx_fcs_reg_rev[15:0];
			 ADDR_RXFCS_H: reg_read = rx_fcs_reg_rev[31:16];
			 default:      reg_read = {reg_addr,1'b0,reg_addr};  // Unimplemented registers
		     endcase

		     read_pulse <= 1'b1;  // Pulse high for one cycle
		 end
		 spi_state_reg <= SPI_DATA_PHASE;
		 tx_fifo_wr_ptr <= 0;
		 bit_counter <= 0;
	     end
	 end

	 SPI_DATA_PHASE: begin
	     // Handle TX FIFO write (0xC0 command)
	     if (opcode == OP_FIFO_WRITE && bit_counter == 7) begin
		 // Store byte in TX FIFO
		 tx_fifo_mem[tx_fifo_wr_ptr[14:0]] <= shift_reg_in[7:0];
		 tx_fifo_wr_ptr <= tx_fifo_wr_ptr + 1;
`ifndef NO_VERBOSE_LOGGING
		 $display("[%0t] TX FIFO Write [%0d]: 0x%02h", $time, tx_fifo_wr_ptr[14:0], shift_reg_in[7:0]);
`endif

		 // Parse header bytes (first 4 bytes)
		 if (tx_header_count < 4) begin
		     tx_header_count <= tx_header_count + 1;

		     // Byte 2 and 3 contain the frame length
		     if (tx_header_count == 2)
			 tx_frame_length[7:0] <= shift_reg_in[7:0];
		     else if (tx_header_count == 3)
			 tx_frame_length[15:8] <= shift_reg_in[7:0];
		 end

		 bit_counter <= 0;
	     end
	     // Handle RX FIFO read (0x80 command) - handled in negedge sclk
	     else if (opcode == OP_REG_WRITE && bit_counter == 15) begin
		 // Byte-swap the input: firmware sends low byte first, high byte second
		 // but shift_reg_in has them reversed
		 write_data <= {shift_reg_in[7:0], shift_reg_in[15:8]};
		 write_pulse <= 1'b1;  // Pulse high for one cycle
		 bit_counter <= 0;
	     end
	 end
	 endcase // case (spi_state_reg)

       // RX FIFO read pointer management (moved from negedge block to avoid multi-driver)
       if (opcode == OP_FIFO_READ && spi_state_reg == SPI_DATA_PHASE) begin
           if (rx_fifo_bit_count == 7) begin
               // Byte was just loaded on negedge, increment pointer
               rx_fifo_rd_ptr <= rx_fifo_rd_ptr + 1;

               // Check for auto-release
               if (rx_buf_avail) begin
                   // Calculate end of current frame
                   reg [14:0] frame_end_pos;
                   frame_end_pos = {rx_buf_first[3:0], 11'b0} + 8 +
                                  rx_packet_length[rx_buf_first[3:0]] +
                                  ((4 - (rx_packet_length[rx_buf_first[3:0]][1:0])) & 2'h3);

                   if (rx_fifo_rd_ptr + 1 >= frame_end_pos) begin
                       rx_buf_first <= rx_buf_first + 1;
                       rx_fifo_auto_release_pending <= 1'b1;
                       $display("[%0t] SPI: Auto-release frame buffer %0d", $time, rx_buf_first[3:0]);
                   end
               end
           end
       end

       // Reset FIFO pointer when CS goes high (moved from negedge block)
       if (csn && rx_fifo_auto_release_pending) begin
           rx_fifo_rd_ptr <= {rx_buf_first[3:0], 11'b0};
           rx_fifo_auto_release_pending <= 1'b0;
           $display("[%0t] SPI: CS deassert - reset FIFO rd_ptr to buffer %0d", $time, rx_buf_first[3:0]);
       end
    end
end

always @(posedge clk_25mhz)
  begin
     // tx_start_pending is momentary
     if (tx_start_pending)
       register_TXQCR[0] <= 1'b0;

     if (write_pulse && ~write_pulse_old) begin
	write_pulse_old <= write_pulse;
	
        case (reg_addr)
	   ADDR_MARL: begin
	       mac_address[15:0] <= write_data;
	       register_MARL <= write_data;
	       $display("[%0t] SPI: MAC[15:0] = %04h", $time, write_data);
	   end

	   ADDR_MARM: begin
	       mac_address[31:16] <= write_data;
	       register_MARM <= write_data;
	       $display("[%0t] SPI: MAC[31:16] = %04h", $time, write_data);
	   end

	   ADDR_MARH: begin
	       mac_address[47:32] <= write_data;
	       register_MARH <= write_data;
	       $display("[%0t] SPI: MAC[47:32] = %04h -> Full MAC = %012h",
			$time, write_data, {write_data, mac_address[31:0]});
	   end

	   ADDR_TXCR: begin
	       register_TXCR <= write_data;
	       tx_enable <= write_data[0];
	       $display("[%0t] SPI: TXCR = %04h (TXE=%b)", $time, write_data, write_data[0]);
	   end

	   ADDR_RXCR1: begin
	       register_RXCR1 <= write_data;
	       rx_enable <= write_data[0];
	       promiscuous_mode <= write_data[4];
	       $display("[%0t] SPI: RXCR1 = %04h (RXE=%b, Promisc=%b)",
			$time, write_data, write_data[0], write_data[4]);
	   end

	   ADDR_RXCR2: begin
	       register_RXCR2 <= write_data;
	       $display("[%0t] SPI: RXCR2 = %04h", $time, write_data);
	   end

	   ADDR_TXQCR: begin
	       register_TXQCR <= write_data;
	       if (write_data[0]) begin
		   // Parse frame length from TX FIFO header (bytes 1-2)
		   tx_packet_length <= {tx_fifo_mem[2][2:0], tx_fifo_mem[1]};

		   $display("[%0t] SPI: TX Enqueue - Frame length = %0d bytes",
			   $time, {tx_fifo_mem[2][2:0], tx_fifo_mem[1]});
	       end
	   end

	   ADDR_RXQCR: begin
	       register_RXQCR <= write_data;
	       if (write_data[4] && rx_buf_avail) begin
		   // Advance RX FIFO read pointer to next frame start (use stored position, not current rd_ptr)
		  rx_fifo_advance <= 1;
	       end
	       // Handle Start DMA access
	       if (write_data[3]) begin
		   // Start DMA access - prepare for FIFO read
		   rx_fifo_reading <= 1'b1;
		   $display("[%0t] SPI: RXQCR Start DMA - rd_ptr=%0d", $time, rx_fifo_rd_ptr);
	       end
	   end

	   ADDR_TXFDPR: begin
	       register_TXFDPR <= write_data;
	       $display("[%0t] SPI: TXFDPR = %04h", $time, write_data);
	   end

	   ADDR_RXFDPR: begin
	       register_RXFDPR <= write_data;
	       $display("[%0t] SPI: RXFDPR = %04h (reset RX FIFO pointer)", $time, write_data);
	   end

	   ADDR_IER: begin
	       register_IER <= write_data;
	       irq_rx_enable <= write_data[13];
	       irq_tx_enable <= write_data[14];
	       $display("[%0t] SPI: IER = %04h", $time, write_data);
	   end

	   ADDR_ISR: begin
	       register_ISR <= register_ISR & ~write_data;  // Write 1 to clear
	       $display("[%0t] SPI: ISR Clear = %04h", $time, write_data);
	   end

	   default: begin
	       // Ignore writes to unimplemented registers
	       $display("[%0t] SPI: Write to unimplemented register [%02h] = %04h",
			$time, reg_addr, write_data);
	   end
       endcase // case (reg_addr)
       end // if (write_pulse)
  end
   
// SPI output logic - shift on falling edge of sclk
reg [7:0] rx_fifo_byte_out;
reg [2:0] rx_fifo_bit_count;

always @(negedge sclk or negedge rstn or posedge csn) begin
    if (!rstn || csn) begin
        so <= 0;
        shift_reg_out <= 16'h0;
        rx_fifo_bit_count <= 0;
        // rx_fifo_rd_ptr and rx_fifo_auto_release_pending managed by posedge sclk block
    end else begin
        if (opcode == OP_FIFO_READ && spi_state_reg == SPI_DATA_PHASE) begin
            // RX FIFO read: output one byte at a time
            if (rx_fifo_bit_count == 0) begin
                // Load next byte from RX FIFO (pointer advanced by posedge block)
                rx_fifo_byte_out <= rx_fifo_mem[rx_fifo_rd_ptr[14:0]];
                so <= rx_fifo_mem[rx_fifo_rd_ptr[14:0]][7];
`ifndef NO_VERBOSE_LOGGING
                if (rx_fifo_rd_ptr < 400) begin
                    $display("[%0t] SPI: RX FIFO Read [%0d]: 0x%02h", $time, rx_fifo_rd_ptr[14:0],
                             rx_fifo_mem[rx_fifo_rd_ptr[14:0]]);
                end
`endif
                rx_fifo_bit_count <= 7;
                // Auto-release logic moved to posedge sclk block to avoid multi-driver
            end else begin
                // Shift out next bit
                so <= rx_fifo_byte_out[rx_fifo_bit_count - 1];
                rx_fifo_bit_count <= rx_fifo_bit_count - 1;
            end
        end
        else if (opcode == OP_REG_READ && spi_state_reg == SPI_DATA_PHASE) begin
            if (read_pulse)
                // Load and immediately shift out first bit (low byte first)
                {so, shift_reg_out} <= {reg_read[7:0], reg_read[15:8], 1'b0};
            else
                // Continue shifting
                {so, shift_reg_out} <= {shift_reg_out, 1'b0};
        end
    end
end

//=============================================================================
// Register Access
//=============================================================================


//=============================================================================
// Chip State
//=============================================================================

// Update chip state combinationally based on enable signals
always @(*) begin
    case ({tx_enable, rx_enable})
        2'b00: chip_state = STATE_IDLE;
        2'b01: chip_state = STATE_RX_ONLY;
        2'b10: chip_state = STATE_TX_ONLY;
        2'b11: chip_state = STATE_RX_TX;
    endcase
end

always @(chip_state) begin
    case (chip_state)
        STATE_IDLE:    $display("[%0t] === CHIP: IDLE ===", $time);
        STATE_RX_ONLY: $display("[%0t] === CHIP: RX ENABLED ===", $time);
        STATE_TX_ONLY: $display("[%0t] === CHIP: TX ENABLED ===", $time);
        STATE_RX_TX:   $display("[%0t] === CHIP: RX+TX ENABLED ===", $time);
    endcase
end

always @(*) begin
    rx_buf_avail = (rx_buf_next != rx_buf_first);
end

always @(posedge clk_25mhz or negedge rstn) begin
    if (!rstn)
        intrn <= 1'b1;
    else
        intrn <= ~((register_ISR & register_IER) != 16'h0000);
end

// Update dynamic registers
always @(posedge clk_25mhz) begin
    register_TXMIR <= 16'h1800 - {5'b0, tx_frame_addr};
    // Handle circular buffer wrap-around: mask to 4 bits
    register_RXFCTR[15:8] <= (rx_buf_next - rx_buf_first) & 8'h0F;
    register_RXFHSR[15] <= rx_buf_avail;
end

endmodule
`default_nettype wire
