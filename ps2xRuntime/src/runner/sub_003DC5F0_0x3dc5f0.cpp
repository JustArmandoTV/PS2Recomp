#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DC5F0
// Address: 0x3dc5f0 - 0x3dc660
void sub_003DC5F0_0x3dc5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC5F0_0x3dc5f0");
#endif

    switch (ctx->pc) {
        case 0x3dc630u: goto label_3dc630;
        case 0x3dc648u: goto label_3dc648;
        default: break;
    }

    ctx->pc = 0x3dc5f0u;

    // 0x3dc5f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3dc5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3dc5f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3dc5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3dc5f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dc5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3dc5fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dc5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dc600: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dc600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc604: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3DC604u;
    {
        const bool branch_taken_0x3dc604 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC604u;
            // 0x3dc608: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc604) {
            ctx->pc = 0x3DC648u;
            goto label_3dc648;
        }
    }
    ctx->pc = 0x3DC60Cu;
    // 0x3dc60c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DC60Cu;
    {
        const bool branch_taken_0x3dc60c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc60c) {
            ctx->pc = 0x3DC610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC60Cu;
            // 0x3dc610: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DC634u;
            goto label_3dc634;
        }
    }
    ctx->pc = 0x3DC614u;
    // 0x3dc614: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DC614u;
    {
        const bool branch_taken_0x3dc614 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc614) {
            ctx->pc = 0x3DC630u;
            goto label_3dc630;
        }
    }
    ctx->pc = 0x3DC61Cu;
    // 0x3dc61c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3dc61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3dc620: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DC620u;
    {
        const bool branch_taken_0x3dc620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc620) {
            ctx->pc = 0x3DC630u;
            goto label_3dc630;
        }
    }
    ctx->pc = 0x3DC628u;
    // 0x3dc628: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3DC628u;
    SET_GPR_U32(ctx, 31, 0x3DC630u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC630u; }
        if (ctx->pc != 0x3DC630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC630u; }
        if (ctx->pc != 0x3DC630u) { return; }
    }
    ctx->pc = 0x3DC630u;
label_3dc630:
    // 0x3dc630: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3dc630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3dc634:
    // 0x3dc634: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3dc634u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3dc638: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DC638u;
    {
        const bool branch_taken_0x3dc638 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3dc638) {
            ctx->pc = 0x3DC63Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC638u;
            // 0x3dc63c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DC64Cu;
            goto label_3dc64c;
        }
    }
    ctx->pc = 0x3DC640u;
    // 0x3dc640: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3DC640u;
    SET_GPR_U32(ctx, 31, 0x3DC648u);
    ctx->pc = 0x3DC644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC640u;
            // 0x3dc644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC648u; }
        if (ctx->pc != 0x3DC648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DC648u; }
        if (ctx->pc != 0x3DC648u) { return; }
    }
    ctx->pc = 0x3DC648u;
label_3dc648:
    // 0x3dc648: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3dc648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dc64c:
    // 0x3dc64c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3dc64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dc650: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dc650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dc654: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dc654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dc658: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC658u;
            // 0x3dc65c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DC660u;
}
