#include "verilated.h"
#include <iostream>

#define STRINGIFY_IMPL(x) #x
#define STRINGIFY(x) STRINGIFY_IMPL(x)

#ifndef TOP_CLASS
#error "TOP_CLASS must be defined"
#endif

#include STRINGIFY(TOP_CLASS.h)

static vluint64_t main_time = 0;

double sc_time_stamp() {
    return main_time;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    TOP_CLASS *top = new TOP_CLASS;

    while (!Verilated::gotFinish()) {
        top->eval();
        main_time++;
    }

    top->final();
    delete top;
    return 0;
}
