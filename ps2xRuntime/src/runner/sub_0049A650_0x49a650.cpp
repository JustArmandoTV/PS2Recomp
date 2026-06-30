#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049A650
// Address: 0x49a650 - 0x49a6c0
void sub_0049A650_0x49a650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049A650_0x49a650");
#endif

    switch (ctx->pc) {
        case 0x49a690u: goto label_49a690;
        case 0x49a6a8u: goto label_49a6a8;
        default: break;
    }

    ctx->pc = 0x49a650u;

    // 0x49a650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49a650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49a654: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49a654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x49a658: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49a658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x49a65c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49a65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x49a660: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x49a660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a664: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x49A664u;
    {
        const bool branch_taken_0x49a664 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49A664u;
            // 0x49a668: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a664) {
            ctx->pc = 0x49A6A8u;
            goto label_49a6a8;
        }
    }
    ctx->pc = 0x49A66Cu;
    // 0x49a66c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x49A66Cu;
    {
        const bool branch_taken_0x49a66c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a66c) {
            ctx->pc = 0x49A670u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49A66Cu;
            // 0x49a670: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49A694u;
            goto label_49a694;
        }
    }
    ctx->pc = 0x49A674u;
    // 0x49a674: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x49A674u;
    {
        const bool branch_taken_0x49a674 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a674) {
            ctx->pc = 0x49A690u;
            goto label_49a690;
        }
    }
    ctx->pc = 0x49A67Cu;
    // 0x49a67c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x49a67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x49a680: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x49A680u;
    {
        const bool branch_taken_0x49a680 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a680) {
            ctx->pc = 0x49A690u;
            goto label_49a690;
        }
    }
    ctx->pc = 0x49A688u;
    // 0x49a688: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x49A688u;
    SET_GPR_U32(ctx, 31, 0x49A690u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A690u; }
        if (ctx->pc != 0x49A690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A690u; }
        if (ctx->pc != 0x49A690u) { return; }
    }
    ctx->pc = 0x49A690u;
label_49a690:
    // 0x49a690: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x49a690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_49a694:
    // 0x49a694: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x49a694u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x49a698: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49A698u;
    {
        const bool branch_taken_0x49a698 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x49a698) {
            ctx->pc = 0x49A69Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49A698u;
            // 0x49a69c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49A6ACu;
            goto label_49a6ac;
        }
    }
    ctx->pc = 0x49A6A0u;
    // 0x49a6a0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x49A6A0u;
    SET_GPR_U32(ctx, 31, 0x49A6A8u);
    ctx->pc = 0x49A6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49A6A0u;
            // 0x49a6a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A6A8u; }
        if (ctx->pc != 0x49A6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49A6A8u; }
        if (ctx->pc != 0x49A6A8u) { return; }
    }
    ctx->pc = 0x49A6A8u;
label_49a6a8:
    // 0x49a6a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x49a6a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49a6ac:
    // 0x49a6ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49a6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49a6b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49a6b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49a6b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49a6b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x49A6B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49A6B8u;
            // 0x49a6bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49A6C0u;
}
