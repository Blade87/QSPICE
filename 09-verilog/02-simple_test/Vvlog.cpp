// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vvlog.h"
#include "Vvlog__Syms.h"

//============================================================
// Constructors

Vvlog::Vvlog(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp(new Vvlog__Syms(_vcontextp__, _vcname__, this))
    , in1(vlSymsp->TOP.in1)
    , out1(vlSymsp->TOP.out1)
    , rootp(&(vlSymsp->TOP))
{
}

//Vvlog::Vvlog(const char* _vcname__)
//    : Vvlog(nullptr, _vcname__)
//{
//}

Vvlog::Vvlog(const char* _vcname__)
   : vlSymsp(new Vvlog__Syms(nullptr, _vcname__, this))
   , in1(vlSymsp->TOP.in1)
   , out1(vlSymsp->TOP.out1)
   , rootp(&(vlSymsp->TOP))
{
}

//============================================================
// Destructor

Vvlog::~Vvlog() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vvlog____eval_initial(Vvlog_* vlSelf);
void Vvlog____eval_settle(Vvlog_* vlSelf);
void Vvlog____eval(Vvlog_* vlSelf);
#ifdef VL_DEBUG
void Vvlog____eval_debug_assertions(Vvlog_* vlSelf);
#endif  // VL_DEBUG
void Vvlog____final(Vvlog_* vlSelf);

static void _eval_initial_loop(Vvlog__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vvlog____eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vvlog____eval_settle(&(vlSymsp->TOP));
        Vvlog____eval(&(vlSymsp->TOP));
    } while (0);
}

void Vvlog::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vvlog::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vvlog____eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vvlog____eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vvlog::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vvlog::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vvlog::final() {
    Vvlog____final(&(vlSymsp->TOP));
}
