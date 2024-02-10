// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vverilog_test.h for the primary calling header

#include "verilated.h"

#include "Vverilog_test_.h"

VL_ATTR_COLD void Vverilog_test____initial__TOP__0(Vverilog_test_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vverilog_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilog_test____initial__TOP__0\n"); );
    // Body
    vlSelf->verilog_test__DOT__temp = 0U;
}

VL_ATTR_COLD void Vverilog_test____eval_initial(Vverilog_test_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vverilog_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilog_test____eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__in0 = vlSelf->in0;
    Vverilog_test____initial__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vverilog_test____eval_settle(Vverilog_test_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vverilog_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilog_test____eval_settle\n"); );
}

VL_ATTR_COLD void Vverilog_test____final(Vverilog_test_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vverilog_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilog_test____final\n"); );
}

VL_ATTR_COLD void Vverilog_test____ctor_var_reset(Vverilog_test_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vverilog_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilog_test____ctor_var_reset\n"); );
    // Body
    vlSelf->in0 = VL_RAND_RESET_I(1);
    vlSelf->out0 = 0;
    vlSelf->verilog_test__DOT__temp = VL_RAND_RESET_I(1);
}
