#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0052E630
// Address: 0x52e630 - 0x52e6a0
void sub_0052E630_0x52e630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0052E630_0x52e630");
#endif

    switch (ctx->pc) {
        case 0x52e670u: goto label_52e670;
        case 0x52e688u: goto label_52e688;
        default: break;
    }

    ctx->pc = 0x52e630u;

    // 0x52e630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x52e630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x52e634: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x52e634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x52e638: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52e638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x52e63c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52e63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x52e640: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x52e640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52e644: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x52E644u;
    {
        const bool branch_taken_0x52e644 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x52E648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52E644u;
            // 0x52e648: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52e644) {
            ctx->pc = 0x52E688u;
            goto label_52e688;
        }
    }
    ctx->pc = 0x52E64Cu;
    // 0x52e64c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x52E64Cu;
    {
        const bool branch_taken_0x52e64c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x52e64c) {
            ctx->pc = 0x52E650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52E64Cu;
            // 0x52e650: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52E674u;
            goto label_52e674;
        }
    }
    ctx->pc = 0x52E654u;
    // 0x52e654: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x52E654u;
    {
        const bool branch_taken_0x52e654 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x52e654) {
            ctx->pc = 0x52E670u;
            goto label_52e670;
        }
    }
    ctx->pc = 0x52E65Cu;
    // 0x52e65c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x52e65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x52e660: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x52E660u;
    {
        const bool branch_taken_0x52e660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x52e660) {
            ctx->pc = 0x52E670u;
            goto label_52e670;
        }
    }
    ctx->pc = 0x52E668u;
    // 0x52e668: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x52E668u;
    SET_GPR_U32(ctx, 31, 0x52E670u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E670u; }
        if (ctx->pc != 0x52E670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E670u; }
        if (ctx->pc != 0x52E670u) { return; }
    }
    ctx->pc = 0x52E670u;
label_52e670:
    // 0x52e670: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x52e670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_52e674:
    // 0x52e674: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x52e674u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x52e678: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x52E678u;
    {
        const bool branch_taken_0x52e678 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x52e678) {
            ctx->pc = 0x52E67Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52E678u;
            // 0x52e67c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52E68Cu;
            goto label_52e68c;
        }
    }
    ctx->pc = 0x52E680u;
    // 0x52e680: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x52E680u;
    SET_GPR_U32(ctx, 31, 0x52E688u);
    ctx->pc = 0x52E684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E680u;
            // 0x52e684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E688u; }
        if (ctx->pc != 0x52E688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E688u; }
        if (ctx->pc != 0x52E688u) { return; }
    }
    ctx->pc = 0x52E688u;
label_52e688:
    // 0x52e688: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x52e688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52e68c:
    // 0x52e68c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52e68cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x52e690: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52e690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x52e694: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52e694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x52e698: 0x3e00008  jr          $ra
    ctx->pc = 0x52E698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52E69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52E698u;
            // 0x52e69c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52E6A0u;
}
