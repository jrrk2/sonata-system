#!/bin/bash
# Run the SPI flash clock sweep test in Verilator simulation
# Sends: 'f' (flash menu) → 'e' (clock sweep test) → 'q' (back) automatically

set -e

SIM=./build/lowrisc_sonata_system_0/sim-verilator/Vtop_verilator
BOOT_ELF=/home/jonathan/sonata-top/sonata-boot/boot.elf
LOGFILE=test/uart_output.log

rm -f "$LOGFILE" uart0.log

echo "Starting Verilator simulation..."

# Run sim in background, capturing stderr for PTY path
$SIM -E "$BOOT_ELF" +UARTDPI_LOG_uart0=- 2>&1 &
SIM_PID=$!
echo "Sim PID: $SIM_PID"

# Wait for PTY to appear in uart0.log or stdout
sleep 1
PTY=""
for i in $(seq 1 30); do
    # The PTY path is printed to stdout by uartdpi_create
    PTY=$(grep -oP '/dev/pts/\d+' /proc/$SIM_PID/fd/1 2>/dev/null || true)
    if [ -z "$PTY" ]; then
        # Try to find it from the process file descriptors
        for fd in /proc/$SIM_PID/fd/*; do
            target=$(readlink "$fd" 2>/dev/null || true)
            if [[ "$target" == /dev/ptmx ]]; then
                # Found the master PTY, but we need the slave name
                break
            fi
        done
    fi
    sleep 0.5
done

# Alternative: parse from output. Let's capture initial output differently.
# Kill and restart with output capture
kill $SIM_PID 2>/dev/null || true
wait $SIM_PID 2>/dev/null || true

echo "Restarting with output capture..."

# Run with output to a file so we can parse the PTY name
$SIM -E "$BOOT_ELF" +UARTDPI_LOG_uart0=test/uart_sim.log > test/sim_stdout.log 2>&1 &
SIM_PID=$!
echo "Sim PID: $SIM_PID"

# Wait for PTY to appear in output
PTY=""
for i in $(seq 1 60); do
    if [ -f test/sim_stdout.log ]; then
        PTY=$(grep -oP '/dev/pts/\d+' test/sim_stdout.log 2>/dev/null | head -1 || true)
        if [ -n "$PTY" ]; then
            echo "Found PTY: $PTY"
            break
        fi
    fi
    sleep 0.5
done

if [ -z "$PTY" ]; then
    echo "ERROR: Could not find PTY after 30 seconds"
    echo "Sim stdout:"
    cat test/sim_stdout.log 2>/dev/null
    kill $SIM_PID 2>/dev/null || true
    exit 1
fi

# Give the sim time to boot and show the menu
echo "Waiting for boot menu (5s sim timeout + startup)..."
sleep 5

# Send 'f' to enter flash menu (before timeout if possible)
echo -n "f" > "$PTY"
echo "Sent 'f' (flash menu)"
sleep 2

# Send 'e' to start clock sweep test
echo -n "e" > "$PTY"
echo "Sent 'e' (clock sweep test)"

# Wait for the test to complete (this may take a while in sim)
echo "Waiting for clock sweep test to complete..."
echo "Monitoring test/uart_sim.log for results..."

# Monitor for completion - look for the summary or return to menu
TIMEOUT=600  # 10 minutes max
for i in $(seq 1 $TIMEOUT); do
    if [ -f test/uart_sim.log ]; then
        if grep -q "Flash \[1-8,a-h,q\]:" test/uart_sim.log 2>/dev/null; then
            # Menu appeared again = test finished
            if grep -q "Clock sweep" test/uart_sim.log 2>/dev/null; then
                echo "Test appears complete!"
                break
            fi
        fi
    fi

    # Print progress every 30 seconds
    if [ $((i % 30)) -eq 0 ]; then
        echo "Still running... ($i seconds elapsed)"
        tail -5 test/uart_sim.log 2>/dev/null || true
    fi
    sleep 1
done

echo ""
echo "=== UART Output ==="
cat test/uart_sim.log 2>/dev/null
echo ""
echo "==================="

# Cleanup
kill $SIM_PID 2>/dev/null || true
wait $SIM_PID 2>/dev/null || true
echo "Simulation ended."
