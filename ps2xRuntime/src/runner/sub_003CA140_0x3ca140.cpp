#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003CA140
// Address: 0x3ca140 - 0x3ca1b0
void sub_003CA140_0x3ca140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA140_0x3ca140");
#endif

    switch (ctx->pc) {
        case 0x3ca180u: goto label_3ca180;
        case 0x3ca198u: goto label_3ca198;
        default: break;
    }

    ctx->pc = 0x3ca140u;

    // 0x3ca140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ca140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3ca144: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ca144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3ca148: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ca148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ca14c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ca14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ca150: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ca150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca154: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3CA154u;
    {
        const bool branch_taken_0x3ca154 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA154u;
            // 0x3ca158: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca154) {
            ctx->pc = 0x3CA198u;
            goto label_3ca198;
        }
    }
    ctx->pc = 0x3CA15Cu;
    // 0x3ca15c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3CA15Cu;
    {
        const bool branch_taken_0x3ca15c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca15c) {
            ctx->pc = 0x3CA160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA15Cu;
            // 0x3ca160: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CA184u;
            goto label_3ca184;
        }
    }
    ctx->pc = 0x3CA164u;
    // 0x3ca164: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3CA164u;
    {
        const bool branch_taken_0x3ca164 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca164) {
            ctx->pc = 0x3CA180u;
            goto label_3ca180;
        }
    }
    ctx->pc = 0x3CA16Cu;
    // 0x3ca16c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3ca16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3ca170: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CA170u;
    {
        const bool branch_taken_0x3ca170 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca170) {
            ctx->pc = 0x3CA180u;
            goto label_3ca180;
        }
    }
    ctx->pc = 0x3CA178u;
    // 0x3ca178: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3CA178u;
    SET_GPR_U32(ctx, 31, 0x3CA180u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA180u; }
        if (ctx->pc != 0x3CA180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA180u; }
        if (ctx->pc != 0x3CA180u) { return; }
    }
    ctx->pc = 0x3CA180u;
label_3ca180:
    // 0x3ca180: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3ca180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3ca184:
    // 0x3ca184: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3ca184u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3ca188: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CA188u;
    {
        const bool branch_taken_0x3ca188 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3ca188) {
            ctx->pc = 0x3CA18Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA188u;
            // 0x3ca18c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CA19Cu;
            goto label_3ca19c;
        }
    }
    ctx->pc = 0x3CA190u;
    // 0x3ca190: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3CA190u;
    SET_GPR_U32(ctx, 31, 0x3CA198u);
    ctx->pc = 0x3CA194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA190u;
            // 0x3ca194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA198u; }
        if (ctx->pc != 0x3CA198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA198u; }
        if (ctx->pc != 0x3CA198u) { return; }
    }
    ctx->pc = 0x3CA198u;
label_3ca198:
    // 0x3ca198: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3ca198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ca19c:
    // 0x3ca19c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ca19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ca1a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ca1a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ca1a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ca1a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ca1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3CA1A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA1A8u;
            // 0x3ca1ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CA1B0u;
}
