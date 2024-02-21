// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vverilog_test.h for the primary calling header

#ifndef VERILATED_VVERILOG_TEST__H_
#define VERILATED_VVERILOG_TEST__H_  // guard

#include "verilated.h"

class Vverilog_test__Syms;
VL_MODULE(Vverilog_test_) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(in0,0,0);
    CData/*0:0*/ verilog_test__DOT__temp;
    CData/*0:0*/ __Vclklast__TOP__in0;
    double out0;

    // INTERNAL VARIABLES
    Vverilog_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vverilog_test_(Vverilog_test__Syms* symsp, const char* name);
    ~Vverilog_test_();
    VL_UNCOPYABLE(Vverilog_test_);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
