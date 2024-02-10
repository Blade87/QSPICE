// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VVERILOG_TEST__SYMS_H_
#define VERILATED_VVERILOG_TEST__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vverilog_test.h"

// INCLUDE MODULE CLASSES
#include "Vverilog_test_.h"

// SYMS CLASS (contains all model state)
class Vverilog_test__Syms /* final */ : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vverilog_test* const __Vm_modelp;
    bool __Vm_didInit;// = false;

    // MODULE INSTANCE STATE
    Vverilog_test_                 TOP;

    // CONSTRUCTORS
    Vverilog_test__Syms(VerilatedContext* contextp, const char* namep, Vverilog_test* modelp);
    ~Vverilog_test__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
