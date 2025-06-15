#include "Vadder.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vadder* top = new Vadder;

    // Set inputs
    top->a = 3;
    top->b = 4;

    top->eval();  // Evaluate the model

    std::cout << "a=3, b=4, sum=" << (int)top->sum << std::endl;

    top->a = 7;
    top->b = 9;

    top->eval();

    std::cout << "a=7, b=9, sum=" << (int)top->sum << std::endl;

    delete top;
    return 0;
}
