// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vled_blink.h for the primary calling header

#include "Vled_blink__pch.h"
#include "Vled_blink___024root.h"

VL_ATTR_COLD void Vled_blink___024root___eval_static(Vled_blink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vled_blink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blink___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vled_blink___024root___eval_initial(Vled_blink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vled_blink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blink___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vled_blink___024root___eval_final(Vled_blink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vled_blink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blink___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vled_blink___024root___eval_settle(Vled_blink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vled_blink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blink___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vled_blink___024root___dump_triggers__act(Vled_blink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vled_blink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blink___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vled_blink___024root___dump_triggers__nba(Vled_blink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vled_blink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blink___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vled_blink___024root___ctor_var_reset(Vled_blink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vled_blink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blink___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->led = VL_RAND_RESET_I(1);
    vlSelf->led_blink__DOT__count = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
