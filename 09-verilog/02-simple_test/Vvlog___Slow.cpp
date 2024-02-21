// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvlog.h for the primary calling header

#include "verilated.h"

#include "Vvlog_.h"
#include "Vvlog__Syms.h"

void Vvlog____ctor_var_reset(Vvlog_* vlSelf);

Vvlog_::Vvlog_(Vvlog__Syms* symsp, const char* name)
    : VerilatedModule(name)
    , vlSymsp(symsp)
 {
    // Reset structure values
    Vvlog____ctor_var_reset(this);
}

void Vvlog_::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vvlog_::~Vvlog_() {
}
