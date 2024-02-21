// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvlog.h for the primary calling header

#include "verilated.h"

#include "Vvlog_.h"

VL_ATTR_COLD void Vvlog____eval_initial(Vvlog_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvlog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvlog____eval_initial\n"); );
}

void Vvlog____combo__TOP__0(Vvlog_* vlSelf);

VL_ATTR_COLD void Vvlog____eval_settle(Vvlog_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvlog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvlog____eval_settle\n"); );
    // Body
    Vvlog____combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vvlog____final(Vvlog_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvlog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvlog____final\n"); );
}

VL_ATTR_COLD void Vvlog____ctor_var_reset(Vvlog_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvlog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvlog____ctor_var_reset\n"); );
    // Body
    vlSelf->in1 = 0;
    vlSelf->out1 = 0;
}
