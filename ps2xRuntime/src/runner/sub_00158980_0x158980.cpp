#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00158980
// Address: 0x158980 - 0x1589b0
void sub_00158980_0x158980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158980_0x158980");
#endif

    switch (ctx->pc) {
        case 0x158990u: goto label_158990;
        case 0x158998u: goto label_158998;
        default: break;
    }

    ctx->pc = 0x158980u;

    // 0x158980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x158980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x158984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x158984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x158988: 0xc05626c  jal         func_1589B0
    ctx->pc = 0x158988u;
    SET_GPR_U32(ctx, 31, 0x158990u);
    ctx->pc = 0x1589B0u;
    if (runtime->hasFunction(0x1589B0u)) {
        auto targetFn = runtime->lookupFunction(0x1589B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158990u; }
        if (ctx->pc != 0x158990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001589B0_0x1589b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158990u; }
        if (ctx->pc != 0x158990u) { return; }
    }
    ctx->pc = 0x158990u;
label_158990:
    // 0x158990: 0xc056270  jal         func_1589C0
    ctx->pc = 0x158990u;
    SET_GPR_U32(ctx, 31, 0x158998u);
    ctx->pc = 0x1589C0u;
    if (runtime->hasFunction(0x1589C0u)) {
        auto targetFn = runtime->lookupFunction(0x1589C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158998u; }
        if (ctx->pc != 0x158998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001589C0_0x1589c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158998u; }
        if (ctx->pc != 0x158998u) { return; }
    }
    ctx->pc = 0x158998u;
label_158998:
    // 0x158998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x158998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15899c: 0x3e00008  jr          $ra
    ctx->pc = 0x15899Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1589A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15899Cu;
            // 0x1589a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1589A4u;
    // 0x1589a4: 0x0  nop
    ctx->pc = 0x1589a4u;
    // NOP
    // 0x1589a8: 0x0  nop
    ctx->pc = 0x1589a8u;
    // NOP
    // 0x1589ac: 0x0  nop
    ctx->pc = 0x1589acu;
    // NOP
}
