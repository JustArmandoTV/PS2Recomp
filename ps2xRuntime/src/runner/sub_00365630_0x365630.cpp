#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00365630
// Address: 0x365630 - 0x3656a0
void sub_00365630_0x365630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365630_0x365630");
#endif

    switch (ctx->pc) {
        case 0x365670u: goto label_365670;
        case 0x365688u: goto label_365688;
        default: break;
    }

    ctx->pc = 0x365630u;

    // 0x365630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x365630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x365634: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x365634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x365638: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x365638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36563c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36563cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x365640: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x365640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365644: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x365644u;
    {
        const bool branch_taken_0x365644 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x365648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x365644u;
            // 0x365648: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365644) {
            ctx->pc = 0x365688u;
            goto label_365688;
        }
    }
    ctx->pc = 0x36564Cu;
    // 0x36564c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x36564Cu;
    {
        const bool branch_taken_0x36564c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x36564c) {
            ctx->pc = 0x365650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36564Cu;
            // 0x365650: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x365674u;
            goto label_365674;
        }
    }
    ctx->pc = 0x365654u;
    // 0x365654: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x365654u;
    {
        const bool branch_taken_0x365654 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x365654) {
            ctx->pc = 0x365670u;
            goto label_365670;
        }
    }
    ctx->pc = 0x36565Cu;
    // 0x36565c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x36565cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x365660: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x365660u;
    {
        const bool branch_taken_0x365660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x365660) {
            ctx->pc = 0x365670u;
            goto label_365670;
        }
    }
    ctx->pc = 0x365668u;
    // 0x365668: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x365668u;
    SET_GPR_U32(ctx, 31, 0x365670u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365670u; }
        if (ctx->pc != 0x365670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365670u; }
        if (ctx->pc != 0x365670u) { return; }
    }
    ctx->pc = 0x365670u;
label_365670:
    // 0x365670: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x365670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_365674:
    // 0x365674: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x365674u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x365678: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x365678u;
    {
        const bool branch_taken_0x365678 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x365678) {
            ctx->pc = 0x36567Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x365678u;
            // 0x36567c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36568Cu;
            goto label_36568c;
        }
    }
    ctx->pc = 0x365680u;
    // 0x365680: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x365680u;
    SET_GPR_U32(ctx, 31, 0x365688u);
    ctx->pc = 0x365684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365680u;
            // 0x365684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365688u; }
        if (ctx->pc != 0x365688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365688u; }
        if (ctx->pc != 0x365688u) { return; }
    }
    ctx->pc = 0x365688u;
label_365688:
    // 0x365688: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x365688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36568c:
    // 0x36568c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36568cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x365690: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x365690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365694: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x365694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365698: 0x3e00008  jr          $ra
    ctx->pc = 0x365698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36569Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x365698u;
            // 0x36569c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3656A0u;
}
