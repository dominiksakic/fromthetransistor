#include  "Vled_blink.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <cstdio>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vled_blink* top = new Vled_blink;

    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("dump.vcd");

    // Set inputs
    top->clk = 0;

    for (int i = 0; i < 100; i++){
        // simulates a clock toggle each tick
        top->clk = !top->clk;

        // Verilator sumulation kernel evaluate the hardware model for the current state.
        top->eval();

        // i counts half circles from 0->1, half a cirlce.
        if (top->clk){
            tfp->dump(i);
            printf("Cycle %d: LED = %d\n", i/2, top->led);
        }
    }

    tfp->close();
    delete top;
    delete tfp;

    return 0;
}
