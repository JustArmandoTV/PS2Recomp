#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00433800
// Address: 0x433800 - 0x433870
void sub_00433800_0x433800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00433800_0x433800");
#endif

    switch (ctx->pc) {
        case 0x433840u: goto label_433840;
        case 0x433858u: goto label_433858;
        default: break;
    }

    ctx->pc = 0x433800u;

    // 0x433800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x433800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x433804: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x433804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x433808: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x433808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x43380c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43380cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x433810: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x433810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433814: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x433814u;
    {
        const bool branch_taken_0x433814 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x433818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x433814u;
            // 0x433818: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433814) {
            ctx->pc = 0x433858u;
            goto label_433858;
        }
    }
    ctx->pc = 0x43381Cu;
    // 0x43381c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x43381Cu;
    {
        const bool branch_taken_0x43381c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x43381c) {
            ctx->pc = 0x433820u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43381Cu;
            // 0x433820: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x433844u;
            goto label_433844;
        }
    }
    ctx->pc = 0x433824u;
    // 0x433824: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x433824u;
    {
        const bool branch_taken_0x433824 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x433824) {
            ctx->pc = 0x433840u;
            goto label_433840;
        }
    }
    ctx->pc = 0x43382Cu;
    // 0x43382c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x43382cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x433830: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x433830u;
    {
        const bool branch_taken_0x433830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x433830) {
            ctx->pc = 0x433840u;
            goto label_433840;
        }
    }
    ctx->pc = 0x433838u;
    // 0x433838: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x433838u;
    SET_GPR_U32(ctx, 31, 0x433840u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433840u; }
        if (ctx->pc != 0x433840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433840u; }
        if (ctx->pc != 0x433840u) { return; }
    }
    ctx->pc = 0x433840u;
label_433840:
    // 0x433840: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x433840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_433844:
    // 0x433844: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x433844u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x433848: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x433848u;
    {
        const bool branch_taken_0x433848 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x433848) {
            ctx->pc = 0x43384Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x433848u;
            // 0x43384c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43385Cu;
            goto label_43385c;
        }
    }
    ctx->pc = 0x433850u;
    // 0x433850: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x433850u;
    SET_GPR_U32(ctx, 31, 0x433858u);
    ctx->pc = 0x433854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433850u;
            // 0x433854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433858u; }
        if (ctx->pc != 0x433858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433858u; }
        if (ctx->pc != 0x433858u) { return; }
    }
    ctx->pc = 0x433858u;
label_433858:
    // 0x433858: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x433858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43385c:
    // 0x43385c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43385cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x433860: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x433860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x433864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x433864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x433868: 0x3e00008  jr          $ra
    ctx->pc = 0x433868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43386Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x433868u;
            // 0x43386c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x433870u;
}
