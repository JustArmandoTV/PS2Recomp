#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0043E510
// Address: 0x43e510 - 0x43e580
void sub_0043E510_0x43e510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043E510_0x43e510");
#endif

    switch (ctx->pc) {
        case 0x43e550u: goto label_43e550;
        case 0x43e568u: goto label_43e568;
        default: break;
    }

    ctx->pc = 0x43e510u;

    // 0x43e510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43e510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x43e514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x43e514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x43e518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43e518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x43e51c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43e51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x43e520: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x43e520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e524: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x43E524u;
    {
        const bool branch_taken_0x43e524 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x43E528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43E524u;
            // 0x43e528: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e524) {
            ctx->pc = 0x43E568u;
            goto label_43e568;
        }
    }
    ctx->pc = 0x43E52Cu;
    // 0x43e52c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x43E52Cu;
    {
        const bool branch_taken_0x43e52c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x43e52c) {
            ctx->pc = 0x43E530u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43E52Cu;
            // 0x43e530: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43E554u;
            goto label_43e554;
        }
    }
    ctx->pc = 0x43E534u;
    // 0x43e534: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x43E534u;
    {
        const bool branch_taken_0x43e534 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x43e534) {
            ctx->pc = 0x43E550u;
            goto label_43e550;
        }
    }
    ctx->pc = 0x43E53Cu;
    // 0x43e53c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x43e53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x43e540: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43E540u;
    {
        const bool branch_taken_0x43e540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43e540) {
            ctx->pc = 0x43E550u;
            goto label_43e550;
        }
    }
    ctx->pc = 0x43E548u;
    // 0x43e548: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x43E548u;
    SET_GPR_U32(ctx, 31, 0x43E550u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E550u; }
        if (ctx->pc != 0x43E550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E550u; }
        if (ctx->pc != 0x43E550u) { return; }
    }
    ctx->pc = 0x43E550u;
label_43e550:
    // 0x43e550: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x43e550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_43e554:
    // 0x43e554: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x43e554u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x43e558: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43E558u;
    {
        const bool branch_taken_0x43e558 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x43e558) {
            ctx->pc = 0x43E55Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43E558u;
            // 0x43e55c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43E56Cu;
            goto label_43e56c;
        }
    }
    ctx->pc = 0x43E560u;
    // 0x43e560: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x43E560u;
    SET_GPR_U32(ctx, 31, 0x43E568u);
    ctx->pc = 0x43E564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43E560u;
            // 0x43e564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E568u; }
        if (ctx->pc != 0x43E568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43E568u; }
        if (ctx->pc != 0x43E568u) { return; }
    }
    ctx->pc = 0x43E568u;
label_43e568:
    // 0x43e568: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x43e568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43e56c:
    // 0x43e56c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43e56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43e570: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43e570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43e574: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43e574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43e578: 0x3e00008  jr          $ra
    ctx->pc = 0x43E578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43E57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43E578u;
            // 0x43e57c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43E580u;
}
