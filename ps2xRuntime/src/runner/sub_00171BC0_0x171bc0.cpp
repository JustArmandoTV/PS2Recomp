#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171BC0
// Address: 0x171bc0 - 0x171c10
void sub_00171BC0_0x171bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171BC0_0x171bc0");
#endif

    switch (ctx->pc) {
        case 0x171bd8u: goto label_171bd8;
        case 0x171becu: goto label_171bec;
        case 0x171bf4u: goto label_171bf4;
        case 0x171bfcu: goto label_171bfc;
        default: break;
    }

    ctx->pc = 0x171bc0u;

    // 0x171bc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171bc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171bc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171bcc: 0x805e576  j           func_1795D8
    ctx->pc = 0x171BCCu;
    ctx->pc = 0x171BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171BCCu;
            // 0x171bd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1795D8u;
    {
        auto targetFn = runtime->lookupFunction(0x1795D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x171BD4u;
    // 0x171bd4: 0x0  nop
    ctx->pc = 0x171bd4u;
    // NOP
label_171bd8:
    // 0x171bd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171bdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171be0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x171be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x171be4: 0xc05c846  jal         func_172118
    ctx->pc = 0x171BE4u;
    SET_GPR_U32(ctx, 31, 0x171BECu);
    ctx->pc = 0x171BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171BE4u;
            // 0x171be8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172118u;
    if (runtime->hasFunction(0x172118u)) {
        auto targetFn = runtime->lookupFunction(0x172118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171BECu; }
        if (ctx->pc != 0x171BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172118_0x172118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171BECu; }
        if (ctx->pc != 0x171BECu) { return; }
    }
    ctx->pc = 0x171BECu;
label_171bec:
    // 0x171bec: 0xc05c704  jal         func_171C10
    ctx->pc = 0x171BECu;
    SET_GPR_U32(ctx, 31, 0x171BF4u);
    ctx->pc = 0x171BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171BECu;
            // 0x171bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171C10u;
    if (runtime->hasFunction(0x171C10u)) {
        auto targetFn = runtime->lookupFunction(0x171C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171BF4u; }
        if (ctx->pc != 0x171BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171C10_0x171c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171BF4u; }
        if (ctx->pc != 0x171BF4u) { return; }
    }
    ctx->pc = 0x171BF4u;
label_171bf4:
    // 0x171bf4: 0xc05c84c  jal         func_172130
    ctx->pc = 0x171BF4u;
    SET_GPR_U32(ctx, 31, 0x171BFCu);
    ctx->pc = 0x171BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171BF4u;
            // 0x171bf8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172130u;
    if (runtime->hasFunction(0x172130u)) {
        auto targetFn = runtime->lookupFunction(0x172130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171BFCu; }
        if (ctx->pc != 0x171BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172130_0x172130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171BFCu; }
        if (ctx->pc != 0x171BFCu) { return; }
    }
    ctx->pc = 0x171BFCu;
label_171bfc:
    // 0x171bfc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x171bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171c00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x171c00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171c04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171c08: 0x3e00008  jr          $ra
    ctx->pc = 0x171C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171C08u;
            // 0x171c0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171C10u;
}
