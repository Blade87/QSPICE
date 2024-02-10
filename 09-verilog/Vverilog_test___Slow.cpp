// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vverilog_test.h for the primary calling header

#include "verilated.h"

#include "Vverilog_test_.h"
#include "Vverilog_test__Syms.h"

void Vverilog_test____ctor_var_reset(Vverilog_test_* vlSelf);

Vverilog_test_::Vverilog_test_(Vverilog_test__Syms* symsp, const char* name)
    : VerilatedModule(name)
    , vlSymsp(symsp)
 {
    // Reset structure values
    Vverilog_test____ctor_var_reset(this);
}

void Vverilog_test_::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vverilog_test_::~Vverilog_test_() {
}
