// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vled_blink.h for the primary calling header

#ifndef VERILATED_VLED_BLINK___024ROOT_H_
#define VERILATED_VLED_BLINK___024ROOT_H_  // guard

#include "verilated.h"


class Vled_blink__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vled_blink___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_OUT8(led,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ led_blink__DOT__count;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vled_blink__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vled_blink___024root(Vled_blink__Syms* symsp, const char* v__name);
    ~Vled_blink___024root();
    VL_UNCOPYABLE(Vled_blink___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
