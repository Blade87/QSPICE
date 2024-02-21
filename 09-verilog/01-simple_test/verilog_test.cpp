// Automatically generated C++ file on Sat Feb 10 11:24:11 2024
//
// To build with Digital Mars C++ Compiler:
//
//    dmc -mn -WD verilog_test.cpp Vverilog_test*.cpp verilated.lib kernel32.lib
//
// The intended design of the Verilog interface is such that this
// file should not need editing unless you change the symbol.

#include <verilated.h>
#include "Vverilog_test.h"

extern "C" __declspec(dllexport) void Destroy(Vverilog_test *instance)
{
   if(instance)
      delete(instance);
}

extern "C" __declspec(dllexport) void verilog_test(Vverilog_test **instance, double t, union uData *data)
{
   if(!*instance)
      *instance = new Vverilog_test;
   (*instance)->in0 = data[0].b;

   (*instance)->eval();

   data[1].d = (*instance)->out0;
}
