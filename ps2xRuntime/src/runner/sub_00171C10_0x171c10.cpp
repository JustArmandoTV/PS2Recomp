#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171C10
// Address: 0x171c10 - 0x171c60
void sub_00171C10_0x171c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171C10_0x171c10");
#endif

    switch (ctx->pc) {
        case 0x171c28u: goto label_171c28;
        case 0x171c3cu: goto label_171c3c;
        case 0x171c44u: goto label_171c44;
        case 0x171c4cu: goto label_171c4c;
        default: break;
    }

    ctx->pc = 0x171c10u;

    // 0x171c10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171c14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171c18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171c1c: 0x805e408  j           func_179020
    ctx->pc = 0x171C1Cu;
    ctx->pc = 0x171C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171C1Cu;
            // 0x171c20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x179020u;
    if (runtime->hasFunction(0x179020u)) {
        auto targetFn = runtime->lookupFunction(0x179020u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00179020_0x179020(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x171C24u;
    // 0x171c24: 0x0  nop
    ctx->pc = 0x171c24u;
    // NOP
label_171c28:
    // 0x171c28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171c2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171c30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x171c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x171c34: 0xc05c846  jal         func_172118
    ctx->pc = 0x171C34u;
    SET_GPR_U32(ctx, 31, 0x171C3Cu);
    ctx->pc = 0x171C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171C34u;
            // 0x171c38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172118u;
    if (runtime->hasFunction(0x172118u)) {
        auto targetFn = runtime->lookupFunction(0x172118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171C3Cu; }
        if (ctx->pc != 0x171C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172118_0x172118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171C3Cu; }
        if (ctx->pc != 0x171C3Cu) { return; }
    }
    ctx->pc = 0x171C3Cu;
label_171c3c:
    // 0x171c3c: 0xc05c718  jal         func_171C60
    ctx->pc = 0x171C3Cu;
    SET_GPR_U32(ctx, 31, 0x171C44u);
    ctx->pc = 0x171C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171C3Cu;
            // 0x171c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171C60u;
    if (runtime->hasFunction(0x171C60u)) {
        auto targetFn = runtime->lookupFunction(0x171C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171C44u; }
        if (ctx->pc != 0x171C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171C60_0x171c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171C44u; }
        if (ctx->pc != 0x171C44u) { return; }
    }
    ctx->pc = 0x171C44u;
label_171c44:
    // 0x171c44: 0xc05c84c  jal         func_172130
    ctx->pc = 0x171C44u;
    SET_GPR_U32(ctx, 31, 0x171C4Cu);
    ctx->pc = 0x171C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171C44u;
            // 0x171c48: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172130u;
    if (runtime->hasFunction(0x172130u)) {
        auto targetFn = runtime->lookupFunction(0x172130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171C4Cu; }
        if (ctx->pc != 0x171C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172130_0x172130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171C4Cu; }
        if (ctx->pc != 0x171C4Cu) { return; }
    }
    ctx->pc = 0x171C4Cu;
label_171c4c:
    // 0x171c4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x171c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171c50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x171c50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171c54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171c54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171c58: 0x3e00008  jr          $ra
    ctx->pc = 0x171C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171C58u;
            // 0x171c5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171C60u;
}
