#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0041C830
// Address: 0x41c830 - 0x41c8a0
void sub_0041C830_0x41c830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041C830_0x41c830");
#endif

    switch (ctx->pc) {
        case 0x41c870u: goto label_41c870;
        case 0x41c888u: goto label_41c888;
        default: break;
    }

    ctx->pc = 0x41c830u;

    // 0x41c830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41c830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x41c834: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x41c834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x41c838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41c838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x41c83c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41c83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x41c840: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41c840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c844: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x41C844u;
    {
        const bool branch_taken_0x41c844 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41C844u;
            // 0x41c848: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c844) {
            ctx->pc = 0x41C888u;
            goto label_41c888;
        }
    }
    ctx->pc = 0x41C84Cu;
    // 0x41c84c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x41C84Cu;
    {
        const bool branch_taken_0x41c84c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c84c) {
            ctx->pc = 0x41C850u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41C84Cu;
            // 0x41c850: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41C874u;
            goto label_41c874;
        }
    }
    ctx->pc = 0x41C854u;
    // 0x41c854: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x41C854u;
    {
        const bool branch_taken_0x41c854 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c854) {
            ctx->pc = 0x41C870u;
            goto label_41c870;
        }
    }
    ctx->pc = 0x41C85Cu;
    // 0x41c85c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x41c85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x41c860: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x41C860u;
    {
        const bool branch_taken_0x41c860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c860) {
            ctx->pc = 0x41C870u;
            goto label_41c870;
        }
    }
    ctx->pc = 0x41C868u;
    // 0x41c868: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x41C868u;
    SET_GPR_U32(ctx, 31, 0x41C870u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C870u; }
        if (ctx->pc != 0x41C870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C870u; }
        if (ctx->pc != 0x41C870u) { return; }
    }
    ctx->pc = 0x41C870u;
label_41c870:
    // 0x41c870: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x41c870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_41c874:
    // 0x41c874: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x41c874u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x41c878: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x41C878u;
    {
        const bool branch_taken_0x41c878 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x41c878) {
            ctx->pc = 0x41C87Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41C878u;
            // 0x41c87c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41C88Cu;
            goto label_41c88c;
        }
    }
    ctx->pc = 0x41C880u;
    // 0x41c880: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x41C880u;
    SET_GPR_U32(ctx, 31, 0x41C888u);
    ctx->pc = 0x41C884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C880u;
            // 0x41c884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C888u; }
        if (ctx->pc != 0x41C888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C888u; }
        if (ctx->pc != 0x41C888u) { return; }
    }
    ctx->pc = 0x41C888u;
label_41c888:
    // 0x41c888: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x41c888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41c88c:
    // 0x41c88c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41c88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41c890: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41c890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41c894: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41c894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41c898: 0x3e00008  jr          $ra
    ctx->pc = 0x41C898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41C898u;
            // 0x41c89c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41C8A0u;
}
