#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A33E0
// Address: 0x2a33e0 - 0x2a3440
void sub_002A33E0_0x2a33e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A33E0_0x2a33e0");
#endif

    switch (ctx->pc) {
        case 0x2a3404u: goto label_2a3404;
        case 0x2a341cu: goto label_2a341c;
        default: break;
    }

    ctx->pc = 0x2a33e0u;

    // 0x2a33e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a33e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a33e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a33e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a33e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a33e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a33ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a33ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a33f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a33f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a33f4: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A33F4u;
    {
        const bool branch_taken_0x2a33f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A33F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A33F4u;
            // 0x2a33f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a33f4) {
            ctx->pc = 0x2A341Cu;
            goto label_2a341c;
        }
    }
    ctx->pc = 0x2A33FCu;
    // 0x2a33fc: 0xc07507c  jal         func_1D41F0
    ctx->pc = 0x2A33FCu;
    SET_GPR_U32(ctx, 31, 0x2A3404u);
    ctx->pc = 0x2A3400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A33FCu;
            // 0x2a3400: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3404u; }
        if (ctx->pc != 0x2A3404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3404u; }
        if (ctx->pc != 0x2A3404u) { return; }
    }
    ctx->pc = 0x2A3404u;
label_2a3404:
    // 0x2a3404: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2a3404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2a3408: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a3408u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a340c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A340Cu;
    {
        const bool branch_taken_0x2a340c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a340c) {
            ctx->pc = 0x2A3410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A340Cu;
            // 0x2a3410: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A3420u;
            goto label_2a3420;
        }
    }
    ctx->pc = 0x2A3414u;
    // 0x2a3414: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2A3414u;
    SET_GPR_U32(ctx, 31, 0x2A341Cu);
    ctx->pc = 0x2A3418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3414u;
            // 0x2a3418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A341Cu; }
        if (ctx->pc != 0x2A341Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A341Cu; }
        if (ctx->pc != 0x2A341Cu) { return; }
    }
    ctx->pc = 0x2A341Cu;
label_2a341c:
    // 0x2a341c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a341cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a3420:
    // 0x2a3420: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a3420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3424: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a3424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3428: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a3428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a342c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A342Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A342Cu;
            // 0x2a3430: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3434u;
    // 0x2a3434: 0x0  nop
    ctx->pc = 0x2a3434u;
    // NOP
    // 0x2a3438: 0x0  nop
    ctx->pc = 0x2a3438u;
    // NOP
    // 0x2a343c: 0x0  nop
    ctx->pc = 0x2a343cu;
    // NOP
}
