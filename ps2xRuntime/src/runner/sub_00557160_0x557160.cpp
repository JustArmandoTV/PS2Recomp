#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00557160
// Address: 0x557160 - 0x5571d0
void sub_00557160_0x557160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00557160_0x557160");
#endif

    switch (ctx->pc) {
        case 0x5571a0u: goto label_5571a0;
        case 0x5571b8u: goto label_5571b8;
        default: break;
    }

    ctx->pc = 0x557160u;

    // 0x557160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x557160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x557164: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x557164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x557168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x557168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x55716c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x55716cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x557170: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x557170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x557174: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x557174u;
    {
        const bool branch_taken_0x557174 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x557178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557174u;
            // 0x557178: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x557174) {
            ctx->pc = 0x5571B8u;
            goto label_5571b8;
        }
    }
    ctx->pc = 0x55717Cu;
    // 0x55717c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x55717Cu;
    {
        const bool branch_taken_0x55717c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x55717c) {
            ctx->pc = 0x557180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55717Cu;
            // 0x557180: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5571A4u;
            goto label_5571a4;
        }
    }
    ctx->pc = 0x557184u;
    // 0x557184: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x557184u;
    {
        const bool branch_taken_0x557184 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x557184) {
            ctx->pc = 0x5571A0u;
            goto label_5571a0;
        }
    }
    ctx->pc = 0x55718Cu;
    // 0x55718c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x55718cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x557190: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x557190u;
    {
        const bool branch_taken_0x557190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x557190) {
            ctx->pc = 0x5571A0u;
            goto label_5571a0;
        }
    }
    ctx->pc = 0x557198u;
    // 0x557198: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x557198u;
    SET_GPR_U32(ctx, 31, 0x5571A0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5571A0u; }
        if (ctx->pc != 0x5571A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5571A0u; }
        if (ctx->pc != 0x5571A0u) { return; }
    }
    ctx->pc = 0x5571A0u;
label_5571a0:
    // 0x5571a0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x5571a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_5571a4:
    // 0x5571a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5571a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x5571a8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x5571A8u;
    {
        const bool branch_taken_0x5571a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5571a8) {
            ctx->pc = 0x5571ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5571A8u;
            // 0x5571ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5571BCu;
            goto label_5571bc;
        }
    }
    ctx->pc = 0x5571B0u;
    // 0x5571b0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x5571B0u;
    SET_GPR_U32(ctx, 31, 0x5571B8u);
    ctx->pc = 0x5571B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5571B0u;
            // 0x5571b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5571B8u; }
        if (ctx->pc != 0x5571B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5571B8u; }
        if (ctx->pc != 0x5571B8u) { return; }
    }
    ctx->pc = 0x5571B8u;
label_5571b8:
    // 0x5571b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x5571b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5571bc:
    // 0x5571bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5571bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5571c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5571c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5571c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5571c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5571c8: 0x3e00008  jr          $ra
    ctx->pc = 0x5571C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5571CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5571C8u;
            // 0x5571cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5571D0u;
}
