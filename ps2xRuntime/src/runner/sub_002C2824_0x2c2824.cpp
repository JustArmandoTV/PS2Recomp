#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C2824
// Address: 0x2c2824 - 0x2c2870
void sub_002C2824_0x2c2824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2824_0x2c2824");
#endif

    switch (ctx->pc) {
        case 0x2c2824u: goto label_2c2824;
        case 0x2c2828u: goto label_2c2828;
        case 0x2c282cu: goto label_2c282c;
        case 0x2c2830u: goto label_2c2830;
        case 0x2c2834u: goto label_2c2834;
        case 0x2c2838u: goto label_2c2838;
        case 0x2c283cu: goto label_2c283c;
        case 0x2c2840u: goto label_2c2840;
        case 0x2c2844u: goto label_2c2844;
        case 0x2c2848u: goto label_2c2848;
        case 0x2c284cu: goto label_2c284c;
        case 0x2c2850u: goto label_2c2850;
        case 0x2c2854u: goto label_2c2854;
        case 0x2c2858u: goto label_2c2858;
        case 0x2c285cu: goto label_2c285c;
        case 0x2c2860u: goto label_2c2860;
        case 0x2c2864u: goto label_2c2864;
        case 0x2c2868u: goto label_2c2868;
        case 0x2c286cu: goto label_2c286c;
        default: break;
    }

    ctx->pc = 0x2c2824u;

label_2c2824:
    // 0x2c2824: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c2824u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c2828:
    // 0x2c2828: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c2828u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c282c:
    // 0x2c282c: 0x320f809  jalr        $t9
label_2c2830:
    if (ctx->pc == 0x2C2830u) {
        ctx->pc = 0x2C2830u;
            // 0x2c2830: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C2834u;
        goto label_2c2834;
    }
    ctx->pc = 0x2C282Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C2834u);
        ctx->pc = 0x2C2830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C282Cu;
            // 0x2c2830: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C2834u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C2834u; }
            if (ctx->pc != 0x2C2834u) { return; }
        }
        }
    }
    ctx->pc = 0x2C2834u;
label_2c2834:
    // 0x2c2834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c2834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c2838:
    // 0x2c2838: 0xc075bf8  jal         func_1D6FE0
label_2c283c:
    if (ctx->pc == 0x2C283Cu) {
        ctx->pc = 0x2C283Cu;
            // 0x2c283c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C2840u;
        goto label_2c2840;
    }
    ctx->pc = 0x2C2838u;
    SET_GPR_U32(ctx, 31, 0x2C2840u);
    ctx->pc = 0x2C283Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2838u;
            // 0x2c283c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2840u; }
        if (ctx->pc != 0x2C2840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2840u; }
        if (ctx->pc != 0x2C2840u) { return; }
    }
    ctx->pc = 0x2C2840u;
label_2c2840:
    // 0x2c2840: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c2840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c2844:
    // 0x2c2844: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c2844u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c2848:
    // 0x2c2848: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c284c:
    if (ctx->pc == 0x2C284Cu) {
        ctx->pc = 0x2C284Cu;
            // 0x2c284c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C2850u;
        goto label_2c2850;
    }
    ctx->pc = 0x2C2848u;
    {
        const bool branch_taken_0x2c2848 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c2848) {
            ctx->pc = 0x2C284Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2848u;
            // 0x2c284c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C285Cu;
            goto label_2c285c;
        }
    }
    ctx->pc = 0x2C2850u;
label_2c2850:
    // 0x2c2850: 0xc0400a8  jal         func_1002A0
label_2c2854:
    if (ctx->pc == 0x2C2854u) {
        ctx->pc = 0x2C2854u;
            // 0x2c2854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C2858u;
        goto label_2c2858;
    }
    ctx->pc = 0x2C2850u;
    SET_GPR_U32(ctx, 31, 0x2C2858u);
    ctx->pc = 0x2C2854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2850u;
            // 0x2c2854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2858u; }
        if (ctx->pc != 0x2C2858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2858u; }
        if (ctx->pc != 0x2C2858u) { return; }
    }
    ctx->pc = 0x2C2858u;
label_2c2858:
    // 0x2c2858: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c2858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c285c:
    // 0x2c285c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c285cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c2860:
    // 0x2c2860: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c2860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c2864:
    // 0x2c2864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c2864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c2868:
    // 0x2c2868: 0x3e00008  jr          $ra
label_2c286c:
    if (ctx->pc == 0x2C286Cu) {
        ctx->pc = 0x2C286Cu;
            // 0x2c286c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C2870u;
        goto label_fallthrough_0x2c2868;
    }
    ctx->pc = 0x2C2868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C286Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2868u;
            // 0x2c286c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c2868:
    ctx->pc = 0x2C2870u;
}
