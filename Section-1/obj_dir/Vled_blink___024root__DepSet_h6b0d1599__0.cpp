// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vled_blink.h for the primary calling header

#include "Vled_blink__pch.h"
#include "Vled_blink___024root.h"

void Vled_blink___024root___eval_act(Vled_blink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vled_blink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blink___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vled_blink___024root___nba_sequent__TOP__0(Vled_blink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vled_blink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blink___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__led_blink__DOT__count;
    __Vdly__led_blink__DOT__count = 0;
    // Body
    __Vdly__led_blink__DOT__count = vlSelf->led_blink__DOT__count;
    if ((9U == vlSelf->led_blink__DOT__count)) {
        vlSelf->led = (1U & (~ (IData)(vlSelf->led)));
        __Vdly__led_blink__DOT__count = 0U;
    } else {
        __Vdly__led_blink__DOT__count = ((IData)(1U) 
                                         + vlSelf->led_blink__DOT__count);
    }
    vlSelf->led_blink__DOT__count = __Vdly__led_blink__DOT__count;
}

void Vled_blink___024root___eval_nba(Vled_blink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vled_blink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blink___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vled_blink___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vled_blink___024root___eval_triggers__act(Vled_blink___024root* vlSelf);

bool Vled_blink___024root___eval_phase__act(Vled_blink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vled_blink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blink___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vled_blink___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vled_blink___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vled_blink___024root___eval_phase__nba(Vled_blink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vled_blink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blink___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vled_blink___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vled_blink___024root___dump_triggers__nba(Vled_blink___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vled_blink___024root___dump_triggers__act(Vled_blink___024root* vlSelf);
#endif  // VL_DEBUG

void Vled_blink___024root___eval(Vled_blink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vled_blink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blink___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vled_blink___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("led_blink.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vled_blink___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("led_blink.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vled_blink___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vled_blink___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vled_blink___024root___eval_debug_assertions(Vled_blink___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vled_blink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blink___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
