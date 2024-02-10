// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vverilog_test.h for the primary calling header

#include "verilated.h"

#include "Vverilog_test_.h"

VL_INLINE_OPT void Vverilog_test____sequent__TOP__0(Vverilog_test_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vverilog_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilog_test____sequent__TOP__0\n"); );
    // Body
    vlSelf->verilog_test__DOT__temp = (1U & (~ (IData)(vlSelf->verilog_test__DOT__temp)));
    vlSelf->out0 = VL_ITOR_D_I(1, (IData)(vlSelf->verilog_test__DOT__temp));
}

void Vverilog_test____eval(Vverilog_test_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vverilog_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilog_test____eval\n"); );
    // Body
    if (((IData)(vlSelf->in0) & (~ (IData)(vlSelf->__Vclklast__TOP__in0)))) {
        Vverilog_test____sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__in0 = vlSelf->in0;
}

#ifdef VL_DEBUG
void Vverilog_test____eval_debug_assertions(Vverilog_test_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vverilog_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilog_test____eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->in0 & 0xfeU))) {
        Verilated::overWidthError("in0");}
}
#endif  // VL_DEBUG
