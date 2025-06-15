# Workflow
1. Write a Verilog Module
2. Write a C++ Testbench
3. Generate Files:
```
verilator -Wall --cc adder.v --exe testbench.cpp
```
4. Build the Executable
```
make -C obj_dir -j -f Vadder.mk Vadder
```
5. Run the Simulation
```
./obj_dir/Vadder
```