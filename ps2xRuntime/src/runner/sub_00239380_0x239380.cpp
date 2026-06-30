#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00239380
// Address: 0x239380 - 0x239490
void sub_00239380_0x239380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239380_0x239380");
#endif

    switch (ctx->pc) {
        case 0x239380u: goto label_239380;
        case 0x239384u: goto label_239384;
        case 0x239388u: goto label_239388;
        case 0x23938cu: goto label_23938c;
        case 0x239390u: goto label_239390;
        case 0x239394u: goto label_239394;
        case 0x239398u: goto label_239398;
        case 0x23939cu: goto label_23939c;
        case 0x2393a0u: goto label_2393a0;
        case 0x2393a4u: goto label_2393a4;
        case 0x2393a8u: goto label_2393a8;
        case 0x2393acu: goto label_2393ac;
        case 0x2393b0u: goto label_2393b0;
        case 0x2393b4u: goto label_2393b4;
        case 0x2393b8u: goto label_2393b8;
        case 0x2393bcu: goto label_2393bc;
        case 0x2393c0u: goto label_2393c0;
        case 0x2393c4u: goto label_2393c4;
        case 0x2393c8u: goto label_2393c8;
        case 0x2393ccu: goto label_2393cc;
        case 0x2393d0u: goto label_2393d0;
        case 0x2393d4u: goto label_2393d4;
        case 0x2393d8u: goto label_2393d8;
        case 0x2393dcu: goto label_2393dc;
        case 0x2393e0u: goto label_2393e0;
        case 0x2393e4u: goto label_2393e4;
        case 0x2393e8u: goto label_2393e8;
        case 0x2393ecu: goto label_2393ec;
        case 0x2393f0u: goto label_2393f0;
        case 0x2393f4u: goto label_2393f4;
        case 0x2393f8u: goto label_2393f8;
        case 0x2393fcu: goto label_2393fc;
        case 0x239400u: goto label_239400;
        case 0x239404u: goto label_239404;
        case 0x239408u: goto label_239408;
        case 0x23940cu: goto label_23940c;
        case 0x239410u: goto label_239410;
        case 0x239414u: goto label_239414;
        case 0x239418u: goto label_239418;
        case 0x23941cu: goto label_23941c;
        case 0x239420u: goto label_239420;
        case 0x239424u: goto label_239424;
        case 0x239428u: goto label_239428;
        case 0x23942cu: goto label_23942c;
        case 0x239430u: goto label_239430;
        case 0x239434u: goto label_239434;
        case 0x239438u: goto label_239438;
        case 0x23943cu: goto label_23943c;
        case 0x239440u: goto label_239440;
        case 0x239444u: goto label_239444;
        case 0x239448u: goto label_239448;
        case 0x23944cu: goto label_23944c;
        case 0x239450u: goto label_239450;
        case 0x239454u: goto label_239454;
        case 0x239458u: goto label_239458;
        case 0x23945cu: goto label_23945c;
        case 0x239460u: goto label_239460;
        case 0x239464u: goto label_239464;
        case 0x239468u: goto label_239468;
        case 0x23946cu: goto label_23946c;
        case 0x239470u: goto label_239470;
        case 0x239474u: goto label_239474;
        case 0x239478u: goto label_239478;
        case 0x23947cu: goto label_23947c;
        case 0x239480u: goto label_239480;
        case 0x239484u: goto label_239484;
        case 0x239488u: goto label_239488;
        case 0x23948cu: goto label_23948c;
        default: break;
    }

    ctx->pc = 0x239380u;

label_239380:
    // 0x239380: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x239380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_239384:
    // 0x239384: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x239384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_239388:
    // 0x239388: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x239388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23938c:
    // 0x23938c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23938cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_239390:
    // 0x239390: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x239390u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_239394:
    // 0x239394: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x239394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_239398:
    // 0x239398: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x239398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23939c:
    // 0x23939c: 0x8c830114  lw          $v1, 0x114($a0)
    ctx->pc = 0x23939cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
label_2393a0:
    // 0x2393a0: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x2393a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2393a4:
    // 0x2393a4: 0x6400010  bltz        $s2, . + 4 + (0x10 << 2)
label_2393a8:
    if (ctx->pc == 0x2393A8u) {
        ctx->pc = 0x2393A8u;
            // 0x2393a8: 0x24900110  addiu       $s0, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->pc = 0x2393ACu;
        goto label_2393ac;
    }
    ctx->pc = 0x2393A4u;
    {
        const bool branch_taken_0x2393a4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2393A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2393A4u;
            // 0x2393a8: 0x24900110  addiu       $s0, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2393a4) {
            ctx->pc = 0x2393E8u;
            goto label_2393e8;
        }
    }
    ctx->pc = 0x2393ACu;
label_2393ac:
    // 0x2393ac: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x2393acu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2393b0:
    // 0x2393b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2393b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2393b4:
    // 0x2393b4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2393b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2393b8:
    // 0x2393b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2393b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2393bc:
    // 0x2393bc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2393c0:
    if (ctx->pc == 0x2393C0u) {
        ctx->pc = 0x2393C4u;
        goto label_2393c4;
    }
    ctx->pc = 0x2393BCu;
    {
        const bool branch_taken_0x2393bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2393bc) {
            ctx->pc = 0x2393D8u;
            goto label_2393d8;
        }
    }
    ctx->pc = 0x2393C4u;
label_2393c4:
    // 0x2393c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2393c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2393c8:
    // 0x2393c8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2393c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2393cc:
    // 0x2393cc: 0x320f809  jalr        $t9
label_2393d0:
    if (ctx->pc == 0x2393D0u) {
        ctx->pc = 0x2393D0u;
            // 0x2393d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2393D4u;
        goto label_2393d4;
    }
    ctx->pc = 0x2393CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2393D4u);
        ctx->pc = 0x2393D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2393CCu;
            // 0x2393d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2393D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2393D4u; }
            if (ctx->pc != 0x2393D4u) { return; }
        }
        }
    }
    ctx->pc = 0x2393D4u;
label_2393d4:
    // 0x2393d4: 0x0  nop
    ctx->pc = 0x2393d4u;
    // NOP
label_2393d8:
    // 0x2393d8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2393d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2393dc:
    // 0x2393dc: 0x641fff4  bgez        $s2, . + 4 + (-0xC << 2)
label_2393e0:
    if (ctx->pc == 0x2393E0u) {
        ctx->pc = 0x2393E0u;
            // 0x2393e0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x2393E4u;
        goto label_2393e4;
    }
    ctx->pc = 0x2393DCu;
    {
        const bool branch_taken_0x2393dc = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2393E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2393DCu;
            // 0x2393e0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2393dc) {
            ctx->pc = 0x2393B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2393b0;
        }
    }
    ctx->pc = 0x2393E4u;
label_2393e4:
    // 0x2393e4: 0x0  nop
    ctx->pc = 0x2393e4u;
    // NOP
label_2393e8:
    // 0x2393e8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2393e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2393ec:
    // 0x2393ec: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x2393ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2393f0:
    // 0x2393f0: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_2393f4:
    if (ctx->pc == 0x2393F4u) {
        ctx->pc = 0x2393F8u;
        goto label_2393f8;
    }
    ctx->pc = 0x2393F0u;
    {
        const bool branch_taken_0x2393f0 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x2393f0) {
            ctx->pc = 0x239468u;
            goto label_239468;
        }
    }
    ctx->pc = 0x2393F8u;
label_2393f8:
    // 0x2393f8: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x2393f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_2393fc:
    // 0x2393fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2393fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239400:
    // 0x239400: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x239400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_239404:
    // 0x239404: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x239404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_239408:
    // 0x239408: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_23940c:
    if (ctx->pc == 0x23940Cu) {
        ctx->pc = 0x239410u;
        goto label_239410;
    }
    ctx->pc = 0x239408u;
    {
        const bool branch_taken_0x239408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239408) {
            ctx->pc = 0x239458u;
            goto label_239458;
        }
    }
    ctx->pc = 0x239410u;
label_239410:
    // 0x239410: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239414:
    // 0x239414: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x239414u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_239418:
    // 0x239418: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x239418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23941c:
    // 0x23941c: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x23941cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_239420:
    // 0x239420: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_239424:
    if (ctx->pc == 0x239424u) {
        ctx->pc = 0x239424u;
            // 0x239424: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x239428u;
        goto label_239428;
    }
    ctx->pc = 0x239420u;
    {
        const bool branch_taken_0x239420 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x239424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239420u;
            // 0x239424: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239420) {
            ctx->pc = 0x239458u;
            goto label_239458;
        }
    }
    ctx->pc = 0x239428u;
label_239428:
    // 0x239428: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x239428u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23942c:
    // 0x23942c: 0x0  nop
    ctx->pc = 0x23942cu;
    // NOP
label_239430:
    // 0x239430: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x239430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239434:
    // 0x239434: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x239434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_239438:
    // 0x239438: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x239438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23943c:
    // 0x23943c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23943cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_239440:
    // 0x239440: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x239440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_239444:
    // 0x239444: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239448:
    // 0x239448: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x239448u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23944c:
    // 0x23944c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_239450:
    if (ctx->pc == 0x239450u) {
        ctx->pc = 0x239450u;
            // 0x239450: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x239454u;
        goto label_239454;
    }
    ctx->pc = 0x23944Cu;
    {
        const bool branch_taken_0x23944c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x239450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23944Cu;
            // 0x239450: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23944c) {
            ctx->pc = 0x239430u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239430;
        }
    }
    ctx->pc = 0x239454u;
label_239454:
    // 0x239454: 0x0  nop
    ctx->pc = 0x239454u;
    // NOP
label_239458:
    // 0x239458: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x239458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_23945c:
    // 0x23945c: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_239460:
    if (ctx->pc == 0x239460u) {
        ctx->pc = 0x239460u;
            // 0x239460: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x239464u;
        goto label_239464;
    }
    ctx->pc = 0x23945Cu;
    {
        const bool branch_taken_0x23945c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x239460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23945Cu;
            // 0x239460: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23945c) {
            ctx->pc = 0x2393FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2393fc;
        }
    }
    ctx->pc = 0x239464u;
label_239464:
    // 0x239464: 0x0  nop
    ctx->pc = 0x239464u;
    // NOP
label_239468:
    // 0x239468: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x239468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23946c:
    // 0x23946c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23946cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_239470:
    // 0x239470: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x239470u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_239474:
    // 0x239474: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x239474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_239478:
    // 0x239478: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x239478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23947c:
    // 0x23947c: 0x3e00008  jr          $ra
label_239480:
    if (ctx->pc == 0x239480u) {
        ctx->pc = 0x239480u;
            // 0x239480: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x239484u;
        goto label_239484;
    }
    ctx->pc = 0x23947Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23947Cu;
            // 0x239480: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x239484u;
label_239484:
    // 0x239484: 0x0  nop
    ctx->pc = 0x239484u;
    // NOP
label_239488:
    // 0x239488: 0x0  nop
    ctx->pc = 0x239488u;
    // NOP
label_23948c:
    // 0x23948c: 0x0  nop
    ctx->pc = 0x23948cu;
    // NOP
}
