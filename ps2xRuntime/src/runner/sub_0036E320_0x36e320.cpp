#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036E320
// Address: 0x36e320 - 0x36e390
void sub_0036E320_0x36e320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E320_0x36e320");
#endif

    switch (ctx->pc) {
        case 0x36e360u: goto label_36e360;
        case 0x36e378u: goto label_36e378;
        default: break;
    }

    ctx->pc = 0x36e320u;

    // 0x36e320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36e320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36e324: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36e324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36e328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36e328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36e32c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36e32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36e330: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36e330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e334: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x36E334u;
    {
        const bool branch_taken_0x36e334 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36E334u;
            // 0x36e338: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e334) {
            ctx->pc = 0x36E378u;
            goto label_36e378;
        }
    }
    ctx->pc = 0x36E33Cu;
    // 0x36e33c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x36E33Cu;
    {
        const bool branch_taken_0x36e33c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e33c) {
            ctx->pc = 0x36E340u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36E33Cu;
            // 0x36e340: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36E364u;
            goto label_36e364;
        }
    }
    ctx->pc = 0x36E344u;
    // 0x36e344: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x36E344u;
    {
        const bool branch_taken_0x36e344 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e344) {
            ctx->pc = 0x36E360u;
            goto label_36e360;
        }
    }
    ctx->pc = 0x36E34Cu;
    // 0x36e34c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x36e34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x36e350: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36E350u;
    {
        const bool branch_taken_0x36e350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e350) {
            ctx->pc = 0x36E360u;
            goto label_36e360;
        }
    }
    ctx->pc = 0x36E358u;
    // 0x36e358: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x36E358u;
    SET_GPR_U32(ctx, 31, 0x36E360u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E360u; }
        if (ctx->pc != 0x36E360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E360u; }
        if (ctx->pc != 0x36E360u) { return; }
    }
    ctx->pc = 0x36E360u;
label_36e360:
    // 0x36e360: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x36e360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_36e364:
    // 0x36e364: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x36e364u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x36e368: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36E368u;
    {
        const bool branch_taken_0x36e368 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x36e368) {
            ctx->pc = 0x36E36Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36E368u;
            // 0x36e36c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36E37Cu;
            goto label_36e37c;
        }
    }
    ctx->pc = 0x36E370u;
    // 0x36e370: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x36E370u;
    SET_GPR_U32(ctx, 31, 0x36E378u);
    ctx->pc = 0x36E374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E370u;
            // 0x36e374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E378u; }
        if (ctx->pc != 0x36E378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E378u; }
        if (ctx->pc != 0x36E378u) { return; }
    }
    ctx->pc = 0x36E378u;
label_36e378:
    // 0x36e378: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x36e378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36e37c:
    // 0x36e37c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36e37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36e380: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36e380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36e384: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36e384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e388: 0x3e00008  jr          $ra
    ctx->pc = 0x36E388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36E388u;
            // 0x36e38c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36E390u;
}
