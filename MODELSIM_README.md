# ModelSim/QuestaSim Simulation Guide

This guide explains how to run the hazard test benches using ModelSim or QuestaSim.

## Files

- `sim_with_hazards.do` - ModelSim do-file for tb_with_hazards simulation
- `sim_without_hazards.do` - ModelSim do-file for tb_without_hazards simulation
- `run_modelsim_tests.sh` - Bash script to run both simulations in batch mode

## Requirements

- ModelSim or QuestaSim installed and in your PATH
- Verilog/SystemVerilog design files in `src/` directory
- Test bench files in `tests/` directory

## Running Simulations

### Option 1: Automated Batch Mode (Recommended)

Run both simulations with a single command:

```bash
./run_modelsim_tests.sh
```

This will:
1. Compile all source files
2. Run `tb_with_hazards` simulation
3. Run `tb_without_hazards` simulation
4. Generate waveform files (`tb_with_hazards.wdb`, `tb_without_hazards.wdb`)
5. Exit the simulator

### Option 2: Individual Simulation with GUI

Run a single simulation with the ModelSim GUI:

```bash
vsim -do sim_with_hazards.do &
```

or

```bash
vsim -do sim_without_hazards.do &
```

### Option 3: Manual Step-by-Step

1. **Start ModelSim/QuestaSim**:
   ```bash
   vsim &
   ```

2. **In the ModelSim console, create work library**:
   ```tcl
   vlib work
   vmap work work
   ```

3. **Compile the design**:
   ```tcl
   vlog -sv +incdir+src src/opcode.vh src/cpu.sv src/alu.sv src/alu_controller.sv src/branch_compare.sv src/dmem.sv src/imem.sv src/immgen.sv src/RegisterFile.sv
   vlog -sv +incdir+src tests/tb_with_hazards.sv
   ```

4. **Optimize (optional but recommended)**:
   ```tcl
   vopt +acc tb_with_hazards -o tb_with_hazards_opt
   ```

5. **Run simulation**:
   ```tcl
   vsim tb_with_hazards_opt
   log -r /*
   run -all
   ```

6. **View waveforms**:
   - In the ModelSim GUI: View → Wave Window
   - Or in TCL: `write_wave -format vcd tb_with_hazards.wdb`

## Viewing Waveforms

After simulation, view the generated waveforms:

```bash
# View with ModelSim GUI
vsim -view tb_with_hazards.wdb &
vsim -view tb_without_hazards.wdb &
```

Or view with external tools like GTKWave:
```bash
gtkwave tb_with_hazards.wdb &
```

## Notes

- The simulations run for 100 clock cycles (after reset release)
- Waveforms are stored in `.wdb` format (ModelSim's binary format)
- To convert to VCD format for use with other tools, use ModelSim's `write_wave -format vcd`
- The `+acc` flag enables object access for debugging
- The `log -r /*` command logs all signals recursively

## Troubleshooting

**"vlog: command not found"**
- Ensure ModelSim/QuestaSim is installed and in your PATH
- On some systems, use `vlog.exe` or specify the full path

**Compilation errors**
- Check that all `.sv` files in `src/` are listed in the compile command
- Verify the include path with `+incdir+src`

**Simulation won't start**
- Ensure the testbench module name matches the one being simulated
- Check for elaboration errors in the transcript

**No waveform output**
- Add `log -r /*` before `run -all` to enable waveform logging
- Use `write_wave` to explicitly save the waveform after simulation
