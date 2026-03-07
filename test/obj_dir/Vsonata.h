// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VSONATA_H_
#define VERILATED_VSONATA_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vsonata__Syms;
class Vsonata___024root;
class Vsonata_sonata;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vsonata VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vsonata__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk25,0,0);
    VL_OUT8(&eth_rst_n,0,0);
    VL_OUT8(&hyperram0_clk,0,0);
    VL_OUT8(&hyperram0_cs_n,0,0);
    VL_INOUT8(&hyperram0_dq,7,0);
    VL_OUT8(&hyperram0_rst_n,0,0);
    VL_INOUT8(&hyperram0_rwds,0,0);
    VL_IN8(&jtag_tck,0,0);
    VL_IN8(&jtag_tdi,0,0);
    VL_OUT8(&jtag_tdo,0,0);
    VL_IN8(&jtag_tms,0,0);
    VL_IN8(&sdcard_cd,0,0);
    VL_OUT8(&sdcard_clk,0,0);
    VL_INOUT8(&sdcard_cmd,0,0);
    VL_INOUT8(&sdcard_data,3,0);
    VL_IN8(&serial_rx,0,0);
    VL_OUT8(&serial_tx,0,0);
    VL_OUT8(&spi_eth_clk,0,0);
    VL_OUT8(&spi_eth_cs_n,0,0);
    VL_IN8(&spi_eth_miso,0,0);
    VL_OUT8(&spi_eth_mosi,0,0);
    VL_OUT8(&spiflash4x_clk,0,0);
    VL_OUT8(&spiflash4x_cs_n,0,0);
    VL_INOUT8(&spiflash4x_dq,3,0);
    VL_OUT8(&user_led0,0,0);
    VL_OUT8(&user_led1,0,0);
    VL_OUT8(&user_led2,0,0);
    VL_OUT8(&user_led3,0,0);
    VL_OUT8(&user_led4,0,0);
    VL_OUT8(&user_led5,0,0);
    VL_OUT8(&user_led6,0,0);
    VL_OUT8(&user_led7,0,0);
    VL_IN8(&user_sw0,0,0);
    VL_IN8(&user_sw1,0,0);
    VL_IN8(&user_sw2,0,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vsonata_sonata* const sonata;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vsonata___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vsonata(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vsonata(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vsonata();
  private:
    VL_UNCOPYABLE(Vsonata);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
