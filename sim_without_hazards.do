# Do-file for ModelSim/QuestaSim simulation of tb_without_hazards
# Run with: vsim -do sim_without_hazards.do

# Create a new simulation library
vlib work
vmap work work

# Compile the design files
vlog -sv +incdir+src src/opcode.vh src/cpu.sv src/alu.sv src/alu_controller.sv src/branch_compare.sv src/dmem.sv src/imem.sv src/immgen.sv src/RegisterFile.sv
vlog -sv +incdir+src tests/tb_without_hazards.sv

# Optimize the design
vopt +acc tb_without_hazards -o tb_without_hazards_opt

# Run simulation with waveform capture
vsim -voptargs=+acc tb_without_hazards_opt

# Enable waveform dumping
log -r /*

# Run simulation
run -all

# Generate waveform file
set waveform_name "tb_without_hazards.wdb"
write_wave -format vcd $waveform_name

# Exit simulator
quit -sim
