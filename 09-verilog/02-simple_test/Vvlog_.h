// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvlog.h for the primary calling header

#ifndef VERILATED_VVLOG__H_
#define VERILATED_VVLOG__H_  // guard

#include "verilated.h"

class Vvlog__Syms;
VL_MODULE(Vvlog_) {
  public:

    // DESIGN SPECIFIC STATE
    double in1;
    double out1;

    // INTERNAL VARIABLES
    Vvlog__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vvlog_(Vvlog__Syms* symsp, const char* name);
    ~Vvlog_();
    VL_UNCOPYABLE(Vvlog_);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
