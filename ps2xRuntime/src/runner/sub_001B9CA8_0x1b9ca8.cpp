#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9CA8
// Address: 0x1b9ca8 - 0x1b9ce0
void sub_001B9CA8_0x1b9ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9CA8_0x1b9ca8");
#endif

    switch (ctx->pc) {
        case 0x1b9cd0u: goto label_1b9cd0;
        default: break;
    }

    ctx->pc = 0x1b9ca8u;

    // 0x1b9ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9CA8u;
            // 0x1b9cac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9CB0u;
    // 0x1b9cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9cb4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b9cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9cb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9cbc: 0x244536e8  addiu       $a1, $v0, 0x36E8
    ctx->pc = 0x1b9cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 14056));
    // 0x1b9cc0: 0x244221c0  addiu       $v0, $v0, 0x21C0
    ctx->pc = 0x1b9cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8640));
    // 0x1b9cc4: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1b9cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x1b9cc8: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1B9CC8u;
    SET_GPR_U32(ctx, 31, 0x1B9CD0u);
    ctx->pc = 0x1B9CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9CC8u;
            // 0x1b9ccc: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (runtime->hasFunction(0x1B9CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B9CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9CD0u; }
        if (ctx->pc != 0x1B9CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9CE0_0x1b9ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9CD0u; }
        if (ctx->pc != 0x1B9CD0u) { return; }
    }
    ctx->pc = 0x1B9CD0u;
label_1b9cd0:
    // 0x1b9cd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b9cd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9cd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9CD8u;
            // 0x1b9cdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9CE0u;
}
