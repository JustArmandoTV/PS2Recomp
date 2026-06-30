#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042F140
// Address: 0x42f140 - 0x42f1b0
void sub_0042F140_0x42f140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042F140_0x42f140");
#endif

    switch (ctx->pc) {
        case 0x42f180u: goto label_42f180;
        case 0x42f198u: goto label_42f198;
        default: break;
    }

    ctx->pc = 0x42f140u;

    // 0x42f140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42f140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x42f144: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x42f144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x42f148: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42f148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x42f14c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42f14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x42f150: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x42f150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42f154: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x42F154u;
    {
        const bool branch_taken_0x42f154 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42F154u;
            // 0x42f158: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f154) {
            ctx->pc = 0x42F198u;
            goto label_42f198;
        }
    }
    ctx->pc = 0x42F15Cu;
    // 0x42f15c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x42F15Cu;
    {
        const bool branch_taken_0x42f15c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x42f15c) {
            ctx->pc = 0x42F160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42F15Cu;
            // 0x42f160: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42F184u;
            goto label_42f184;
        }
    }
    ctx->pc = 0x42F164u;
    // 0x42f164: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x42F164u;
    {
        const bool branch_taken_0x42f164 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x42f164) {
            ctx->pc = 0x42F180u;
            goto label_42f180;
        }
    }
    ctx->pc = 0x42F16Cu;
    // 0x42f16c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x42f16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x42f170: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42F170u;
    {
        const bool branch_taken_0x42f170 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42f170) {
            ctx->pc = 0x42F180u;
            goto label_42f180;
        }
    }
    ctx->pc = 0x42F178u;
    // 0x42f178: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x42F178u;
    SET_GPR_U32(ctx, 31, 0x42F180u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F180u; }
        if (ctx->pc != 0x42F180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F180u; }
        if (ctx->pc != 0x42F180u) { return; }
    }
    ctx->pc = 0x42F180u;
label_42f180:
    // 0x42f180: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x42f180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_42f184:
    // 0x42f184: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x42f184u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x42f188: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42F188u;
    {
        const bool branch_taken_0x42f188 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x42f188) {
            ctx->pc = 0x42F18Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42F188u;
            // 0x42f18c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42F19Cu;
            goto label_42f19c;
        }
    }
    ctx->pc = 0x42F190u;
    // 0x42f190: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x42F190u;
    SET_GPR_U32(ctx, 31, 0x42F198u);
    ctx->pc = 0x42F194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F190u;
            // 0x42f194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F198u; }
        if (ctx->pc != 0x42F198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F198u; }
        if (ctx->pc != 0x42F198u) { return; }
    }
    ctx->pc = 0x42F198u;
label_42f198:
    // 0x42f198: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x42f198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42f19c:
    // 0x42f19c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42f19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42f1a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42f1a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42f1a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42f1a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42f1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x42F1A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42F1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42F1A8u;
            // 0x42f1ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42F1B0u;
}
