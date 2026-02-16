#!/bin/bash
# Quick FPGA build status checker

LOG="$HOME/sonata-system/fpga_build.log"

if [ ! -f "$LOG" ]; then
    echo "No build log found at $LOG"
    exit 1
fi

echo "=== FPGA Build Status ==="
echo

# Check if process is still running
if pgrep -f "fusesoc.*synth" > /dev/null; then
    echo "✓ Build is RUNNING"
else
    echo "⊗ Build appears to be STOPPED"
fi

echo
echo "=== Current Phase ==="
tail -5 "$LOG" | grep -E "INFO:|Phase|Starting|Finished" || tail -3 "$LOG"

echo
echo "=== Warnings/Errors ==="
ERROR_COUNT=$(grep -c "ERROR:" "$LOG" 2>/dev/null || echo 0)
WARN_COUNT=$(grep -c "WARNING:" "$LOG" 2>/dev/null || echo 0)
echo "Errors: $ERROR_COUNT"
echo "Warnings: $WARN_COUNT"

if [ $ERROR_COUNT -gt 0 ]; then
    echo
    echo "Recent errors:"
    grep "ERROR:" "$LOG" | tail -3
fi

echo
echo "=== Progress ==="
if grep -q "write_bitstream" "$LOG"; then
    echo "✓ Bitstream generation (90%+)"
elif grep -q "route_design" "$LOG"; then
    echo "✓ Place & Route (60-90%)"
elif grep -q "synth_design" "$LOG"; then
    echo "✓ Synthesis (30-60%)"
else
    echo "⊙ IP Preparation (0-30%)"
fi

echo
echo "=== Log file ==="
echo "$LOG"
echo "Monitor: tail -f $LOG"
