// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vled_blink__Syms.h"


VL_ATTR_COLD void Vled_blink___024root__trace_init_sub__TOP__0(Vled_blink___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vled_blink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blink___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"led",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("led_blink", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"led",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vled_blink___024root__trace_init_top(Vled_blink___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vled_blink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blink___024root__trace_init_top\n"); );
    // Body
    Vled_blink___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vled_blink___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vled_blink___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vled_blink___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vled_blink___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vled_blink___024root__trace_register(Vled_blink___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vled_blink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blink___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vled_blink___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vled_blink___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vled_blink___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vled_blink___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vled_blink___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blink___024root__trace_const_0\n"); );
    // Init
    Vled_blink___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vled_blink___024root*>(voidSelf);
    Vled_blink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vled_blink___024root__trace_full_0_sub_0(Vled_blink___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vled_blink___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blink___024root__trace_full_0\n"); );
    // Init
    Vled_blink___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vled_blink___024root*>(voidSelf);
    Vled_blink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vled_blink___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vled_blink___024root__trace_full_0_sub_0(Vled_blink___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vled_blink__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vled_blink___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->led));
    bufp->fullIData(oldp+3,(vlSelf->led_blink__DOT__count),32);
}
