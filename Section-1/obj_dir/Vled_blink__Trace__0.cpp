// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vled_blink__Syms.h"


void Vled_blink___024root__trace_chg_0_sub_0(Vled_blink___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vled_blink___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blink___024root__trace_chg_0\n"); );
    // Init
    Vled_blink___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vled_blink___024root*>(voidSelf);
    Vled_blink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vled_blink___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vled_blink___024root__trace_chg_0_sub_0(Vled_blink___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vled_blink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blink___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->led));
    bufp->chgIData(oldp+2,(vlSelf->led_blink__DOT__count),32);
}

void Vled_blink___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blink___024root__trace_cleanup\n"); );
    // Init
    Vled_blink___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vled_blink___024root*>(voidSelf);
    Vled_blink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
