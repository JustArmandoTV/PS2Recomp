#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00520600
// Address: 0x520600 - 0x520670
void sub_00520600_0x520600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00520600_0x520600");
#endif

    switch (ctx->pc) {
        case 0x520640u: goto label_520640;
        case 0x520658u: goto label_520658;
        default: break;
    }

    ctx->pc = 0x520600u;

    // 0x520600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x520600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x520604: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x520604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x520608: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x520608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x52060c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52060cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x520610: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x520610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x520614: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x520614u;
    {
        const bool branch_taken_0x520614 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x520618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520614u;
            // 0x520618: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x520614) {
            ctx->pc = 0x520658u;
            goto label_520658;
        }
    }
    ctx->pc = 0x52061Cu;
    // 0x52061c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x52061Cu;
    {
        const bool branch_taken_0x52061c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x52061c) {
            ctx->pc = 0x520620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52061Cu;
            // 0x520620: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x520644u;
            goto label_520644;
        }
    }
    ctx->pc = 0x520624u;
    // 0x520624: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x520624u;
    {
        const bool branch_taken_0x520624 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x520624) {
            ctx->pc = 0x520640u;
            goto label_520640;
        }
    }
    ctx->pc = 0x52062Cu;
    // 0x52062c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x52062cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x520630: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x520630u;
    {
        const bool branch_taken_0x520630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x520630) {
            ctx->pc = 0x520640u;
            goto label_520640;
        }
    }
    ctx->pc = 0x520638u;
    // 0x520638: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x520638u;
    SET_GPR_U32(ctx, 31, 0x520640u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520640u; }
        if (ctx->pc != 0x520640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520640u; }
        if (ctx->pc != 0x520640u) { return; }
    }
    ctx->pc = 0x520640u;
label_520640:
    // 0x520640: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x520640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_520644:
    // 0x520644: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x520644u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x520648: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x520648u;
    {
        const bool branch_taken_0x520648 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x520648) {
            ctx->pc = 0x52064Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x520648u;
            // 0x52064c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52065Cu;
            goto label_52065c;
        }
    }
    ctx->pc = 0x520650u;
    // 0x520650: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x520650u;
    SET_GPR_U32(ctx, 31, 0x520658u);
    ctx->pc = 0x520654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x520650u;
            // 0x520654: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520658u; }
        if (ctx->pc != 0x520658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x520658u; }
        if (ctx->pc != 0x520658u) { return; }
    }
    ctx->pc = 0x520658u;
label_520658:
    // 0x520658: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x520658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52065c:
    // 0x52065c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52065cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x520660: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x520660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x520664: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x520664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x520668: 0x3e00008  jr          $ra
    ctx->pc = 0x520668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52066Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520668u;
            // 0x52066c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x520670u;
}
