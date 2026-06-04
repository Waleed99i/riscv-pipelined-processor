# Do-file for ModelSim/QuestaSim simulation of tb_with_hazards
# Run with: vsim -do sim_with_hazards.do

# Create a new simulation library
vlib work
vmap work work

# Compile the design files
vlog -sv +incdir+src src/opcode.vh src/cpu.sv src/alu.sv src/alu_controller.sv src/branch_compare.sv src/dmem.sv src/imem.sv src/immgen.sv src/RegisterFile.sv
vlog -sv +incdir+src tests/tb_with_hazards.sv

# Optimize the design
vopt +acc tb_with_hazards -o tb_with_hazards_opt

# Run simulation with waveform capture
vsim -voptargs=+acc tb_with_hazards_opt

# Enable waveform dumping
log -r /*

# Run simulation
run -all

# Generate waveform file
set waveform_name "tb_with_hazards.wdb"
write_wave -format vcd $waveform_name

# Exit simulator
quit -sim
