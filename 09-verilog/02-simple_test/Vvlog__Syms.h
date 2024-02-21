// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VVLOG__SYMS_H_
#define VERILATED_VVLOG__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vvlog.h"

// INCLUDE MODULE CLASSES
#include "Vvlog_.h"

// SYMS CLASS (contains all model state)
class Vvlog__Syms /* final */ : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vvlog* const __Vm_modelp;
    bool __Vm_didInit;// = false;

    // MODULE INSTANCE STATE
    Vvlog_                         TOP;

    // CONSTRUCTORS
    Vvlog__Syms(VerilatedContext* contextp, const char* namep, Vvlog* modelp);
    ~Vvlog__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
