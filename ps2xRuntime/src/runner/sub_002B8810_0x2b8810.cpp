#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B8810
// Address: 0x2b8810 - 0x2b8880
void sub_002B8810_0x2b8810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8810_0x2b8810");
#endif

    switch (ctx->pc) {
        case 0x2b8850u: goto label_2b8850;
        case 0x2b8868u: goto label_2b8868;
        default: break;
    }

    ctx->pc = 0x2b8810u;

    // 0x2b8810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b8810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b8814: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b8814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b8818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b8818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b881c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b881cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b8820: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b8820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8824: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B8824u;
    {
        const bool branch_taken_0x2b8824 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8824u;
            // 0x2b8828: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8824) {
            ctx->pc = 0x2B8868u;
            goto label_2b8868;
        }
    }
    ctx->pc = 0x2B882Cu;
    // 0x2b882c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B882Cu;
    {
        const bool branch_taken_0x2b882c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b882c) {
            ctx->pc = 0x2B8830u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B882Cu;
            // 0x2b8830: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B8854u;
            goto label_2b8854;
        }
    }
    ctx->pc = 0x2B8834u;
    // 0x2b8834: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B8834u;
    {
        const bool branch_taken_0x2b8834 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8834) {
            ctx->pc = 0x2B8850u;
            goto label_2b8850;
        }
    }
    ctx->pc = 0x2B883Cu;
    // 0x2b883c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2b883cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2b8840: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B8840u;
    {
        const bool branch_taken_0x2b8840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8840) {
            ctx->pc = 0x2B8850u;
            goto label_2b8850;
        }
    }
    ctx->pc = 0x2B8848u;
    // 0x2b8848: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2B8848u;
    SET_GPR_U32(ctx, 31, 0x2B8850u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8850u; }
        if (ctx->pc != 0x2B8850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8850u; }
        if (ctx->pc != 0x2B8850u) { return; }
    }
    ctx->pc = 0x2B8850u;
label_2b8850:
    // 0x2b8850: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2b8850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2b8854:
    // 0x2b8854: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b8854u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b8858: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B8858u;
    {
        const bool branch_taken_0x2b8858 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b8858) {
            ctx->pc = 0x2B885Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8858u;
            // 0x2b885c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B886Cu;
            goto label_2b886c;
        }
    }
    ctx->pc = 0x2B8860u;
    // 0x2b8860: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2B8860u;
    SET_GPR_U32(ctx, 31, 0x2B8868u);
    ctx->pc = 0x2B8864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8860u;
            // 0x2b8864: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8868u; }
        if (ctx->pc != 0x2B8868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8868u; }
        if (ctx->pc != 0x2B8868u) { return; }
    }
    ctx->pc = 0x2B8868u;
label_2b8868:
    // 0x2b8868: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b8868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b886c:
    // 0x2b886c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b886cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8870: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b8870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8874: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b8874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8878: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B887Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8878u;
            // 0x2b887c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B8880u;
}
