#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2770
// Address: 0x1b2770 - 0x1b2798
void sub_001B2770_0x1b2770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2770_0x1b2770");
#endif

    switch (ctx->pc) {
        case 0x1b2784u: goto label_1b2784;
        default: break;
    }

    ctx->pc = 0x1b2770u;

    // 0x1b2770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2778: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b2778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b277c: 0xc06c9e6  jal         func_1B2798
    ctx->pc = 0x1B277Cu;
    SET_GPR_U32(ctx, 31, 0x1B2784u);
    ctx->pc = 0x1B2780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B277Cu;
            // 0x1b2780: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2798u;
    if (runtime->hasFunction(0x1B2798u)) {
        auto targetFn = runtime->lookupFunction(0x1B2798u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2784u; }
        if (ctx->pc != 0x1B2784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2798_0x1b2798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2784u; }
        if (ctx->pc != 0x1B2784u) { return; }
    }
    ctx->pc = 0x1B2784u;
label_1b2784:
    // 0x1b2784: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b2784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b278c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b278cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2790: 0x806d4aa  j           func_1B52A8
    ctx->pc = 0x1B2790u;
    ctx->pc = 0x1B2794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2790u;
            // 0x1b2794: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B52A8u;
    {
        auto targetFn = runtime->lookupFunction(0x1B52A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B2798u;
}
