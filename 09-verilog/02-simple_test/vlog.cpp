// Automatically generated C++ file on Wed Feb 21 15:51:12 2024
//
// To build with Digital Mars C++ Compiler:
//
//    dmc -mn -WD vlog.cpp Vvlog*.cpp verilated.lib kernel32.lib
//
// The intended design of the Verilog interface is such that this
// file should not need editing unless you change the symbol.

#include <verilated.h>
#include "Vvlog.h"

extern "C" __declspec(dllexport) void Destroy(Vvlog *instance)
{
   if(instance)
      delete(instance);
}

extern "C" __declspec(dllexport) void vlog(Vvlog **instance, double t, union uData *data)
{
   if(!*instance)
      *instance = new Vvlog;
   (*instance)->in1 = data[0].d;

   (*instance)->eval();

   data[1].d = (*instance)->out1;
}
