#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <sstream>

#define STRINGIFY_IMPL(x) #x
#define STRINGIFY(x) STRINGIFY_IMPL(x)

#ifndef TOP_CLASS
#error "TOP_CLASS must be defined"
#endif

#include STRINGIFY(TOP_CLASS.h)

static vluint64_t main_time = 0;
VerilatedVcdC* tfp = NULL;

double sc_time_stamp() {
    return main_time;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    TOP_CLASS *top = new TOP_CLASS;

    // Initialize waveform dumping
    Verilated::traceEverOn(true);
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    
    // Generate waveform filename based on TOP_CLASS
    std::stringstream waveform_file;
    waveform_file << "sim_dir/" << STRINGIFY(TOP_CLASS) << ".vcd";
    tfp->open(waveform_file.str().c_str());

    while (!Verilated::gotFinish()) {
        top->eval();
        tfp->dump(main_time);
        main_time++;
    }

    tfp->close();
    top->final();
    delete top;
    return 0;
}
