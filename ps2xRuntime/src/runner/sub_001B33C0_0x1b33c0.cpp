#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B33C0
// Address: 0x1b33c0 - 0x1b35e0
void sub_001B33C0_0x1b33c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B33C0_0x1b33c0");
#endif

    switch (ctx->pc) {
        case 0x1b3414u: goto label_1b3414;
        case 0x1b3438u: goto label_1b3438;
        case 0x1b3460u: goto label_1b3460;
        case 0x1b34a8u: goto label_1b34a8;
        case 0x1b34bcu: goto label_1b34bc;
        case 0x1b34e0u: goto label_1b34e0;
        case 0x1b34f4u: goto label_1b34f4;
        case 0x1b3508u: goto label_1b3508;
        case 0x1b3520u: goto label_1b3520;
        case 0x1b3534u: goto label_1b3534;
        case 0x1b3558u: goto label_1b3558;
        case 0x1b35c8u: goto label_1b35c8;
        default: break;
    }

    ctx->pc = 0x1b33c0u;

    // 0x1b33c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b33c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b33c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1b33c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b33c8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1b33c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1b33cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b33ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b33d0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b33d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b33d4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b33d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1b33d8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1b33d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1b33dc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b33dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b33e0: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x1b33e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1b33e4: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1B33E4u;
    {
        const bool branch_taken_0x1b33e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B33E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B33E4u;
            // 0x1b33e8: 0x26250950  addiu       $a1, $s1, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b33e4) {
            ctx->pc = 0x1B341Cu;
            goto label_1b341c;
        }
    }
    ctx->pc = 0x1B33ECu;
    // 0x1b33ec: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x1b33ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1b33f0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1b33f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b33f4: 0x10530032  beq         $v0, $s3, . + 4 + (0x32 << 2)
    ctx->pc = 0x1B33F4u;
    {
        const bool branch_taken_0x1b33f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1B33F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B33F4u;
            // 0x1b33f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b33f4) {
            ctx->pc = 0x1B34C0u;
            goto label_1b34c0;
        }
    }
    ctx->pc = 0x1B33FCu;
    // 0x1b33fc: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x1b33fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1b3400: 0x5053002f  beql        $v0, $s3, . + 4 + (0x2F << 2)
    ctx->pc = 0x1B3400u;
    {
        const bool branch_taken_0x1b3400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x1b3400) {
            ctx->pc = 0x1B3404u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3400u;
            // 0x1b3404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B34C0u;
            goto label_1b34c0;
        }
    }
    ctx->pc = 0x1B3408u;
    // 0x1b3408: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b3408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b340c: 0xc06db66  jal         func_1B6D98
    ctx->pc = 0x1B340Cu;
    SET_GPR_U32(ctx, 31, 0x1B3414u);
    ctx->pc = 0x1B3410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B340Cu;
            // 0x1b3410: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D98u;
    if (runtime->hasFunction(0x1B6D98u)) {
        auto targetFn = runtime->lookupFunction(0x1B6D98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3414u; }
        if (ctx->pc != 0x1B3414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6D98_0x1b6d98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3414u; }
        if (ctx->pc != 0x1B3414u) { return; }
    }
    ctx->pc = 0x1B3414u;
label_1b3414:
    // 0x1b3414: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3414u;
    {
        const bool branch_taken_0x1b3414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3414u;
            // 0x1b3418: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3414) {
            ctx->pc = 0x1B3428u;
            goto label_1b3428;
        }
    }
    ctx->pc = 0x1B341Cu;
label_1b341c:
    // 0x1b341c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1B341Cu;
    {
        const bool branch_taken_0x1b341c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B341Cu;
            // 0x1b3420: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b341c) {
            ctx->pc = 0x1B34C0u;
            goto label_1b34c0;
        }
    }
    ctx->pc = 0x1B3424u;
    // 0x1b3424: 0x0  nop
    ctx->pc = 0x1b3424u;
    // NOP
label_1b3428:
    // 0x1b3428: 0x4600025  bltz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1B3428u;
    {
        const bool branch_taken_0x1b3428 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1B342Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3428u;
            // 0x1b342c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3428) {
            ctx->pc = 0x1B34C0u;
            goto label_1b34c0;
        }
    }
    ctx->pc = 0x1B3430u;
    // 0x1b3430: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B3430u;
    SET_GPR_U32(ctx, 31, 0x1B3438u);
    ctx->pc = 0x1B3434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3430u;
            // 0x1b3434: 0x24050036  addiu       $a1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3438u; }
        if (ctx->pc != 0x1B3438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3438u; }
        if (ctx->pc != 0x1B3438u) { return; }
    }
    ctx->pc = 0x1B3438u;
label_1b3438:
    // 0x1b3438: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b3438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b343c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b343cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b3440: 0x1602001a  bne         $s0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B3440u;
    {
        const bool branch_taken_0x1b3440 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B3444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3440u;
            // 0x1b3444: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3440) {
            ctx->pc = 0x1B34ACu;
            goto label_1b34ac;
        }
    }
    ctx->pc = 0x1B3448u;
    // 0x1b3448: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b3448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b344c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b344cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3450: 0x24529980  addiu       $s2, $v0, -0x6680
    ctx->pc = 0x1b3450u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941056));
    // 0x1b3454: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1b3454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b3458: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B3458u;
    SET_GPR_U32(ctx, 31, 0x1B3460u);
    ctx->pc = 0x1B345Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3458u;
            // 0x1b345c: 0x8e5001b8  lw          $s0, 0x1B8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3460u; }
        if (ctx->pc != 0x1B3460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3460u; }
        if (ctx->pc != 0x1B3460u) { return; }
    }
    ctx->pc = 0x1B3460u;
label_1b3460:
    // 0x1b3460: 0x50530001  beql        $v0, $s3, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B3460u;
    {
        const bool branch_taken_0x1b3460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x1b3460) {
            ctx->pc = 0x1B3464u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3460u;
            // 0x1b3464: 0x8e5001bc  lw          $s0, 0x1BC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B3468u;
            goto label_1b3468;
        }
    }
    ctx->pc = 0x1B3468u;
label_1b3468:
    // 0x1b3468: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b3468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1b346c: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B346Cu;
    {
        const bool branch_taken_0x1b346c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b346c) {
            ctx->pc = 0x1B3470u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B346Cu;
            // 0x1b3470: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B3474u;
            goto label_1b3474;
        }
    }
    ctx->pc = 0x1B3474u;
label_1b3474:
    // 0x1b3474: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b3474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b3478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b3478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b347c: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x1b347cu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b3480: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x1b3480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1b3484: 0x1012  mflo        $v0
    ctx->pc = 0x1b3484u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b3488: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1b3488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b348c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b348cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b3490: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b3490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b3494: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b3494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b3498: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1b3498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1b349c: 0x2470fc18  addiu       $s0, $v1, -0x3E8
    ctx->pc = 0x1b349cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966296));
    // 0x1b34a0: 0xc06d7aa  jal         func_1B5EA8
    ctx->pc = 0x1B34A0u;
    SET_GPR_U32(ctx, 31, 0x1B34A8u);
    ctx->pc = 0x1B34A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B34A0u;
            // 0x1b34a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5EA8u;
    if (runtime->hasFunction(0x1B5EA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B5EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B34A8u; }
        if (ctx->pc != 0x1B34A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5EA8_0x1b5ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B34A8u; }
        if (ctx->pc != 0x1B34A8u) { return; }
    }
    ctx->pc = 0x1B34A8u;
label_1b34a8:
    // 0x1b34a8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1b34a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b34ac:
    // 0x1b34ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b34acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b34b0: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x1b34b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b34b4: 0xc062890  jal         func_18A240
    ctx->pc = 0x1B34B4u;
    SET_GPR_U32(ctx, 31, 0x1B34BCu);
    ctx->pc = 0x1B34B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B34B4u;
            // 0x1b34b8: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A240u;
    if (runtime->hasFunction(0x18A240u)) {
        auto targetFn = runtime->lookupFunction(0x18A240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B34BCu; }
        if (ctx->pc != 0x1B34BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A240_0x18a240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B34BCu; }
        if (ctx->pc != 0x1B34BCu) { return; }
    }
    ctx->pc = 0x1B34BCu;
label_1b34bc:
    // 0x1b34bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b34bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b34c0:
    // 0x1b34c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b34c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b34c4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1b34c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b34c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b34c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b34cc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1b34ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b34d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b34d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b34d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B34D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B34D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B34D4u;
            // 0x1b34d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B34DCu;
    // 0x1b34dc: 0x0  nop
    ctx->pc = 0x1b34dcu;
    // NOP
label_1b34e0:
    // 0x1b34e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b34e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b34e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b34e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b34e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b34e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b34ec: 0xc06cf74  jal         func_1B3DD0
    ctx->pc = 0x1B34ECu;
    SET_GPR_U32(ctx, 31, 0x1B34F4u);
    ctx->pc = 0x1B34F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B34ECu;
            // 0x1b34f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3DD0u;
    if (runtime->hasFunction(0x1B3DD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B34F4u; }
        if (ctx->pc != 0x1B34F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3DD0_0x1b3dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B34F4u; }
        if (ctx->pc != 0x1B34F4u) { return; }
    }
    ctx->pc = 0x1B34F4u;
label_1b34f4:
    // 0x1b34f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B34F4u;
    {
        const bool branch_taken_0x1b34f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B34F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B34F4u;
            // 0x1b34f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b34f4) {
            ctx->pc = 0x1B350Cu;
            goto label_1b350c;
        }
    }
    ctx->pc = 0x1B34FCu;
    // 0x1b34fc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b34fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b3500: 0xc06d19c  jal         func_1B4670
    ctx->pc = 0x1B3500u;
    SET_GPR_U32(ctx, 31, 0x1B3508u);
    ctx->pc = 0x1B3504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3500u;
            // 0x1b3504: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4670u;
    if (runtime->hasFunction(0x1B4670u)) {
        auto targetFn = runtime->lookupFunction(0x1B4670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3508u; }
        if (ctx->pc != 0x1B3508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4670_0x1b4670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3508u; }
        if (ctx->pc != 0x1B3508u) { return; }
    }
    ctx->pc = 0x1B3508u;
label_1b3508:
    // 0x1b3508: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b3508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b350c:
    // 0x1b350c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b350cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3510: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b3510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b3514: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3514u;
            // 0x1b3518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B351Cu;
    // 0x1b351c: 0x0  nop
    ctx->pc = 0x1b351cu;
    // NOP
label_1b3520:
    // 0x1b3520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b3520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b3524: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1b3524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1b3528: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1b3528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1b352c: 0xc06a25c  jal         func_1A8970
    ctx->pc = 0x1B352Cu;
    SET_GPR_U32(ctx, 31, 0x1B3534u);
    ctx->pc = 0x1B3530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B352Cu;
            // 0x1b3530: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8970u;
    if (runtime->hasFunction(0x1A8970u)) {
        auto targetFn = runtime->lookupFunction(0x1A8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3534u; }
        if (ctx->pc != 0x1B3534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8970_0x1a8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3534u; }
        if (ctx->pc != 0x1B3534u) { return; }
    }
    ctx->pc = 0x1B3534u;
label_1b3534:
    // 0x1b3534: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b3534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b3538: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b3538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b353c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1b353cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1b3540: 0x24469b8c  addiu       $a2, $v0, -0x6474
    ctx->pc = 0x1b3540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941580));
    // 0x1b3544: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1b3544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1b3548: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1b3548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b354c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b354cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b3550: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1b3550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b3554: 0x0  nop
    ctx->pc = 0x1b3554u;
    // NOP
label_1b3558:
    // 0x1b3558: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B3558u;
    {
        const bool branch_taken_0x1b3558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B355Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3558u;
            // 0x1b355c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3558) {
            ctx->pc = 0x1B3594u;
            goto label_1b3594;
        }
    }
    ctx->pc = 0x1B3560u;
    // 0x1b3560: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x1b3560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1b3564: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B3564u;
    {
        const bool branch_taken_0x1b3564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3564u;
            // 0x1b3568: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3564) {
            ctx->pc = 0x1B3580u;
            goto label_1b3580;
        }
    }
    ctx->pc = 0x1B356Cu;
    // 0x1b356c: 0x10470004  beq         $v0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B356Cu;
    {
        const bool branch_taken_0x1b356c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x1B3570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B356Cu;
            // 0x1b3570: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b356c) {
            ctx->pc = 0x1B3580u;
            goto label_1b3580;
        }
    }
    ctx->pc = 0x1B3574u;
    // 0x1b3574: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B3574u;
    {
        const bool branch_taken_0x1b3574 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B3578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3574u;
            // 0x1b3578: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3574) {
            ctx->pc = 0x1B3580u;
            goto label_1b3580;
        }
    }
    ctx->pc = 0x1B357Cu;
    // 0x1b357c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1b357cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b3580:
    // 0x1b3580: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1b3580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b3584: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x1b3584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1b3588: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b3588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b358c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b358cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b3590: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b3590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1b3594:
    // 0x1b3594: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1b3594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1b3598: 0x4a3ffef  bgezl       $a1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1B3598u;
    {
        const bool branch_taken_0x1b3598 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1b3598) {
            ctx->pc = 0x1B359Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3598u;
            // 0x1b359c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B3558u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b3558;
        }
    }
    ctx->pc = 0x1B35A0u;
    // 0x1b35a0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b35a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b35a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B35A4u;
    {
        const bool branch_taken_0x1b35a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B35A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B35A4u;
            // 0x1b35a8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b35a4) {
            ctx->pc = 0x1B35B8u;
            goto label_1b35b8;
        }
    }
    ctx->pc = 0x1B35ACu;
    // 0x1b35ac: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1b35acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b35b0: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1b35b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b35b4: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x1b35b4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_1b35b8:
    // 0x1b35b8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b35b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b35bc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b35bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b35c0: 0xc06a262  jal         func_1A8988
    ctx->pc = 0x1B35C0u;
    SET_GPR_U32(ctx, 31, 0x1B35C8u);
    ctx->pc = 0x1B35C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B35C0u;
            // 0x1b35c4: 0xac509b18  sw          $s0, -0x64E8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294941464), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8988u;
    if (runtime->hasFunction(0x1A8988u)) {
        auto targetFn = runtime->lookupFunction(0x1A8988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B35C8u; }
        if (ctx->pc != 0x1B35C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8988_0x1a8988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B35C8u; }
        if (ctx->pc != 0x1B35C8u) { return; }
    }
    ctx->pc = 0x1B35C8u;
label_1b35c8:
    // 0x1b35c8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b35c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b35cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b35ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b35d0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b35d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b35d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B35D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B35D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B35D4u;
            // 0x1b35d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B35DCu;
    // 0x1b35dc: 0x0  nop
    ctx->pc = 0x1b35dcu;
    // NOP
}
