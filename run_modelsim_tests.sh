#!/bin/bash
# Script to run ModelSim/QuestaSim simulations for hazard testing

echo "Running ModelSim/QuestaSim hazard test benches..."

# Run tb_with_hazards
echo ""
echo "=== Simulating tb_with_hazards ==="
vsim -batch -do sim_with_hazards.do

if [ $? -eq 0 ]; then
    echo "✓ tb_with_hazards simulation completed successfully"
    echo "  Waveform: tb_with_hazards.wdb"
else
    echo "✗ tb_with_hazards simulation failed"
    exit 1
fi

# Run tb_without_hazards
echo ""
echo "=== Simulating tb_without_hazards ==="
vsim -batch -do sim_without_hazards.do

if [ $? -eq 0 ]; then
    echo "✓ tb_without_hazards simulation completed successfully"
    echo "  Waveform: tb_without_hazards.wdb"
else
    echo "✗ tb_without_hazards simulation failed"
    exit 1
fi

echo ""
echo "All simulations completed!"
echo ""
echo "To view waveforms in ModelSim GUI:"
echo "  vsim -view tb_with_hazards.wdb &"
echo "  vsim -view tb_without_hazards.wdb &"
