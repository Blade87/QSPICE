// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvlog.h for the primary calling header

#include "verilated.h"

#include "Vvlog_.h"

VL_INLINE_OPT void Vvlog____combo__TOP__0(Vvlog_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvlog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvlog____combo__TOP__0\n"); );
    // Body
    vlSelf->out1 = ((vlSelf->in1 * vlSelf->in1) * vlSelf->in1);
}

void Vvlog____eval(Vvlog_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvlog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvlog____eval\n"); );
    // Body
    Vvlog____combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vvlog____eval_debug_assertions(Vvlog_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvlog__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvlog____eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
