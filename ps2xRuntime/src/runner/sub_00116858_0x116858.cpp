#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00116858
// Address: 0x116858 - 0x1168b0
void sub_00116858_0x116858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116858_0x116858");
#endif

    switch (ctx->pc) {
        case 0x116868u: goto label_116868;
        case 0x116870u: goto label_116870;
        case 0x116878u: goto label_116878;
        case 0x116880u: goto label_116880;
        case 0x116888u: goto label_116888;
        case 0x116890u: goto label_116890;
        case 0x116898u: goto label_116898;
        case 0x1168a0u: goto label_1168a0;
        default: break;
    }

    ctx->pc = 0x116858u;

    // 0x116858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x116858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11685c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11685cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x116860: 0xc045982  jal         func_116608
    ctx->pc = 0x116860u;
    SET_GPR_U32(ctx, 31, 0x116868u);
    ctx->pc = 0x116608u;
    if (runtime->hasFunction(0x116608u)) {
        auto targetFn = runtime->lookupFunction(0x116608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116868u; }
        if (ctx->pc != 0x116868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116608_0x116608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116868u; }
        if (ctx->pc != 0x116868u) { return; }
    }
    ctx->pc = 0x116868u;
label_116868:
    // 0x116868: 0xc0459d2  jal         func_116748
    ctx->pc = 0x116868u;
    SET_GPR_U32(ctx, 31, 0x116870u);
    ctx->pc = 0x116748u;
    if (runtime->hasFunction(0x116748u)) {
        auto targetFn = runtime->lookupFunction(0x116748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116870u; }
        if (ctx->pc != 0x116870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116748_0x116748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116870u; }
        if (ctx->pc != 0x116870u) { return; }
    }
    ctx->pc = 0x116870u;
label_116870:
    // 0x116870: 0xc045b4e  jal         func_116D38
    ctx->pc = 0x116870u;
    SET_GPR_U32(ctx, 31, 0x116878u);
    ctx->pc = 0x116D38u;
    if (runtime->hasFunction(0x116D38u)) {
        auto targetFn = runtime->lookupFunction(0x116D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116878u; }
        if (ctx->pc != 0x116878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116D38_0x116d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116878u; }
        if (ctx->pc != 0x116878u) { return; }
    }
    ctx->pc = 0x116878u;
label_116878:
    // 0x116878: 0xc045bac  jal         func_116EB0
    ctx->pc = 0x116878u;
    SET_GPR_U32(ctx, 31, 0x116880u);
    ctx->pc = 0x11687Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116878u;
            // 0x11687c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EB0u;
    if (runtime->hasFunction(0x116EB0u)) {
        auto targetFn = runtime->lookupFunction(0x116EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116880u; }
        if (ctx->pc != 0x116880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116EB0_0x116eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116880u; }
        if (ctx->pc != 0x116880u) { return; }
    }
    ctx->pc = 0x116880u;
label_116880:
    // 0x116880: 0xc045c3c  jal         func_1170F0
    ctx->pc = 0x116880u;
    SET_GPR_U32(ctx, 31, 0x116888u);
    ctx->pc = 0x1170F0u;
    if (runtime->hasFunction(0x1170F0u)) {
        auto targetFn = runtime->lookupFunction(0x1170F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116888u; }
        if (ctx->pc != 0x116888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001170F0_0x1170f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116888u; }
        if (ctx->pc != 0x116888u) { return; }
    }
    ctx->pc = 0x116888u;
label_116888:
    // 0x116888: 0xc04344e  jal         func_10D138
    ctx->pc = 0x116888u;
    SET_GPR_U32(ctx, 31, 0x116890u);
    ctx->pc = 0x10D138u;
    if (runtime->hasFunction(0x10D138u)) {
        auto targetFn = runtime->lookupFunction(0x10D138u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116890u; }
        if (ctx->pc != 0x116890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D138_0x10d138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116890u; }
        if (ctx->pc != 0x116890u) { return; }
    }
    ctx->pc = 0x116890u;
label_116890:
    // 0x116890: 0xc045a60  jal         func_116980
    ctx->pc = 0x116890u;
    SET_GPR_U32(ctx, 31, 0x116898u);
    ctx->pc = 0x116980u;
    if (runtime->hasFunction(0x116980u)) {
        auto targetFn = runtime->lookupFunction(0x116980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116898u; }
        if (ctx->pc != 0x116898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116980_0x116980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116898u; }
        if (ctx->pc != 0x116898u) { return; }
    }
    ctx->pc = 0x116898u;
label_116898:
    // 0x116898: 0xc04579e  jal         func_115E78
    ctx->pc = 0x116898u;
    SET_GPR_U32(ctx, 31, 0x1168A0u);
    ctx->pc = 0x115E78u;
    if (runtime->hasFunction(0x115E78u)) {
        auto targetFn = runtime->lookupFunction(0x115E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1168A0u; }
        if (ctx->pc != 0x1168A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00115E78_0x115e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1168A0u; }
        if (ctx->pc != 0x1168A0u) { return; }
    }
    ctx->pc = 0x1168A0u;
label_1168a0:
    // 0x1168a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1168a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1168a4: 0x8046174  j           func_1185D0
    ctx->pc = 0x1168A4u;
    ctx->pc = 0x1168A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1168A4u;
            // 0x1168a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1185D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1185D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1168ACu;
    // 0x1168ac: 0x0  nop
    ctx->pc = 0x1168acu;
    // NOP
}
