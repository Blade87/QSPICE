// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vverilog_test.h"
#include "Vverilog_test__Syms.h"

//============================================================
// Constructors

Vverilog_test::Vverilog_test(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp(new Vverilog_test__Syms(_vcontextp__, _vcname__, this))
    , in0(vlSymsp->TOP.in0)
    , out0(vlSymsp->TOP.out0)
    , rootp(&(vlSymsp->TOP))
{
}

//Vverilog_test::Vverilog_test(const char* _vcname__)
//    : Vverilog_test(nullptr, _vcname__)
//{
//}

Vverilog_test::Vverilog_test(const char* _vcname__)
   : vlSymsp(new Vverilog_test__Syms(nullptr, _vcname__, this))
   , in0(vlSymsp->TOP.in0)
   , out0(vlSymsp->TOP.out0)
   , rootp(&(vlSymsp->TOP))
{
}

//============================================================
// Destructor

Vverilog_test::~Vverilog_test() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vverilog_test____eval_initial(Vverilog_test_* vlSelf);
void Vverilog_test____eval_settle(Vverilog_test_* vlSelf);
void Vverilog_test____eval(Vverilog_test_* vlSelf);
#ifdef VL_DEBUG
void Vverilog_test____eval_debug_assertions(Vverilog_test_* vlSelf);
#endif  // VL_DEBUG
void Vverilog_test____final(Vverilog_test_* vlSelf);

static void _eval_initial_loop(Vverilog_test__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vverilog_test____eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vverilog_test____eval_settle(&(vlSymsp->TOP));
        Vverilog_test____eval(&(vlSymsp->TOP));
    } while (0);
}

void Vverilog_test::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vverilog_test::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vverilog_test____eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vverilog_test____eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vverilog_test::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vverilog_test::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vverilog_test::final() {
    Vverilog_test____final(&(vlSymsp->TOP));
}
