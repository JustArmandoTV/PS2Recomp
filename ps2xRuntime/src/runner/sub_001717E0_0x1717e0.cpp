#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001717E0
// Address: 0x1717e0 - 0x171808
void sub_001717E0_0x1717e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001717E0_0x1717e0");
#endif

    switch (ctx->pc) {
        case 0x1717f0u: goto label_1717f0;
        case 0x1717f8u: goto label_1717f8;
        default: break;
    }

    ctx->pc = 0x1717e0u;

    // 0x1717e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1717e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1717e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1717e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1717e8: 0xc05c846  jal         func_172118
    ctx->pc = 0x1717E8u;
    SET_GPR_U32(ctx, 31, 0x1717F0u);
    ctx->pc = 0x172118u;
    if (runtime->hasFunction(0x172118u)) {
        auto targetFn = runtime->lookupFunction(0x172118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717F0u; }
        if (ctx->pc != 0x1717F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172118_0x172118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717F0u; }
        if (ctx->pc != 0x1717F0u) { return; }
    }
    ctx->pc = 0x1717F0u;
label_1717f0:
    // 0x1717f0: 0xc05c602  jal         func_171808
    ctx->pc = 0x1717F0u;
    SET_GPR_U32(ctx, 31, 0x1717F8u);
    ctx->pc = 0x171808u;
    if (runtime->hasFunction(0x171808u)) {
        auto targetFn = runtime->lookupFunction(0x171808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717F8u; }
        if (ctx->pc != 0x1717F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171808_0x171808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717F8u; }
        if (ctx->pc != 0x1717F8u) { return; }
    }
    ctx->pc = 0x1717F8u;
label_1717f8:
    // 0x1717f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1717f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1717fc: 0x805c84c  j           func_172130
    ctx->pc = 0x1717FCu;
    ctx->pc = 0x171800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1717FCu;
            // 0x171800: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172130u;
    if (runtime->hasFunction(0x172130u)) {
        auto targetFn = runtime->lookupFunction(0x172130u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00172130_0x172130(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x171804u;
    // 0x171804: 0x0  nop
    ctx->pc = 0x171804u;
    // NOP
}
