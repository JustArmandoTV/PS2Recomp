#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F0630
// Address: 0x4f0630 - 0x4f06a0
void sub_004F0630_0x4f0630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0630_0x4f0630");
#endif

    switch (ctx->pc) {
        case 0x4f0670u: goto label_4f0670;
        case 0x4f0688u: goto label_4f0688;
        default: break;
    }

    ctx->pc = 0x4f0630u;

    // 0x4f0630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f0630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4f0634: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f0634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4f0638: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f0638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4f063c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f063cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4f0640: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f0640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0644: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4F0644u;
    {
        const bool branch_taken_0x4f0644 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0644u;
            // 0x4f0648: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0644) {
            ctx->pc = 0x4F0688u;
            goto label_4f0688;
        }
    }
    ctx->pc = 0x4F064Cu;
    // 0x4f064c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4F064Cu;
    {
        const bool branch_taken_0x4f064c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f064c) {
            ctx->pc = 0x4F0650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F064Cu;
            // 0x4f0650: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F0674u;
            goto label_4f0674;
        }
    }
    ctx->pc = 0x4F0654u;
    // 0x4f0654: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4F0654u;
    {
        const bool branch_taken_0x4f0654 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f0654) {
            ctx->pc = 0x4F0670u;
            goto label_4f0670;
        }
    }
    ctx->pc = 0x4F065Cu;
    // 0x4f065c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4f065cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4f0660: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F0660u;
    {
        const bool branch_taken_0x4f0660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f0660) {
            ctx->pc = 0x4F0670u;
            goto label_4f0670;
        }
    }
    ctx->pc = 0x4F0668u;
    // 0x4f0668: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4F0668u;
    SET_GPR_U32(ctx, 31, 0x4F0670u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0670u; }
        if (ctx->pc != 0x4F0670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0670u; }
        if (ctx->pc != 0x4F0670u) { return; }
    }
    ctx->pc = 0x4F0670u;
label_4f0670:
    // 0x4f0670: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4f0670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4f0674:
    // 0x4f0674: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4f0674u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4f0678: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F0678u;
    {
        const bool branch_taken_0x4f0678 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4f0678) {
            ctx->pc = 0x4F067Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0678u;
            // 0x4f067c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F068Cu;
            goto label_4f068c;
        }
    }
    ctx->pc = 0x4F0680u;
    // 0x4f0680: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4F0680u;
    SET_GPR_U32(ctx, 31, 0x4F0688u);
    ctx->pc = 0x4F0684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0680u;
            // 0x4f0684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0688u; }
        if (ctx->pc != 0x4F0688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0688u; }
        if (ctx->pc != 0x4F0688u) { return; }
    }
    ctx->pc = 0x4F0688u;
label_4f0688:
    // 0x4f0688: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4f0688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f068c:
    // 0x4f068c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f068cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f0690: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f0690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f0694: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f0694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f0698: 0x3e00008  jr          $ra
    ctx->pc = 0x4F0698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F069Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0698u;
            // 0x4f069c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F06A0u;
}
