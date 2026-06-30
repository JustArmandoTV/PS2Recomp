#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BA510
// Address: 0x2ba510 - 0x2ba580
void sub_002BA510_0x2ba510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA510_0x2ba510");
#endif

    switch (ctx->pc) {
        case 0x2ba550u: goto label_2ba550;
        case 0x2ba568u: goto label_2ba568;
        default: break;
    }

    ctx->pc = 0x2ba510u;

    // 0x2ba510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ba510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ba514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ba514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ba518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ba518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ba51c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ba51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ba520: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ba520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba524: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BA524u;
    {
        const bool branch_taken_0x2ba524 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA524u;
            // 0x2ba528: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba524) {
            ctx->pc = 0x2BA568u;
            goto label_2ba568;
        }
    }
    ctx->pc = 0x2BA52Cu;
    // 0x2ba52c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BA52Cu;
    {
        const bool branch_taken_0x2ba52c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba52c) {
            ctx->pc = 0x2BA530u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA52Cu;
            // 0x2ba530: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BA554u;
            goto label_2ba554;
        }
    }
    ctx->pc = 0x2BA534u;
    // 0x2ba534: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BA534u;
    {
        const bool branch_taken_0x2ba534 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba534) {
            ctx->pc = 0x2BA550u;
            goto label_2ba550;
        }
    }
    ctx->pc = 0x2BA53Cu;
    // 0x2ba53c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2ba53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2ba540: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA540u;
    {
        const bool branch_taken_0x2ba540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba540) {
            ctx->pc = 0x2BA550u;
            goto label_2ba550;
        }
    }
    ctx->pc = 0x2BA548u;
    // 0x2ba548: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BA548u;
    SET_GPR_U32(ctx, 31, 0x2BA550u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA550u; }
        if (ctx->pc != 0x2BA550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA550u; }
        if (ctx->pc != 0x2BA550u) { return; }
    }
    ctx->pc = 0x2BA550u;
label_2ba550:
    // 0x2ba550: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2ba550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2ba554:
    // 0x2ba554: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ba554u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ba558: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BA558u;
    {
        const bool branch_taken_0x2ba558 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ba558) {
            ctx->pc = 0x2BA55Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA558u;
            // 0x2ba55c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BA56Cu;
            goto label_2ba56c;
        }
    }
    ctx->pc = 0x2BA560u;
    // 0x2ba560: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BA560u;
    SET_GPR_U32(ctx, 31, 0x2BA568u);
    ctx->pc = 0x2BA564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA560u;
            // 0x2ba564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA568u; }
        if (ctx->pc != 0x2BA568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA568u; }
        if (ctx->pc != 0x2BA568u) { return; }
    }
    ctx->pc = 0x2BA568u;
label_2ba568:
    // 0x2ba568: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ba568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ba56c:
    // 0x2ba56c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ba56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ba570: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ba570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba574: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ba574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba578: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA578u;
            // 0x2ba57c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BA580u;
}
