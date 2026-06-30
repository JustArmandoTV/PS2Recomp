#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00281350
// Address: 0x281350 - 0x281470
void sub_00281350_0x281350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281350_0x281350");
#endif

    switch (ctx->pc) {
        case 0x281350u: goto label_281350;
        case 0x281354u: goto label_281354;
        case 0x281358u: goto label_281358;
        case 0x28135cu: goto label_28135c;
        case 0x281360u: goto label_281360;
        case 0x281364u: goto label_281364;
        case 0x281368u: goto label_281368;
        case 0x28136cu: goto label_28136c;
        case 0x281370u: goto label_281370;
        case 0x281374u: goto label_281374;
        case 0x281378u: goto label_281378;
        case 0x28137cu: goto label_28137c;
        case 0x281380u: goto label_281380;
        case 0x281384u: goto label_281384;
        case 0x281388u: goto label_281388;
        case 0x28138cu: goto label_28138c;
        case 0x281390u: goto label_281390;
        case 0x281394u: goto label_281394;
        case 0x281398u: goto label_281398;
        case 0x28139cu: goto label_28139c;
        case 0x2813a0u: goto label_2813a0;
        case 0x2813a4u: goto label_2813a4;
        case 0x2813a8u: goto label_2813a8;
        case 0x2813acu: goto label_2813ac;
        case 0x2813b0u: goto label_2813b0;
        case 0x2813b4u: goto label_2813b4;
        case 0x2813b8u: goto label_2813b8;
        case 0x2813bcu: goto label_2813bc;
        case 0x2813c0u: goto label_2813c0;
        case 0x2813c4u: goto label_2813c4;
        case 0x2813c8u: goto label_2813c8;
        case 0x2813ccu: goto label_2813cc;
        case 0x2813d0u: goto label_2813d0;
        case 0x2813d4u: goto label_2813d4;
        case 0x2813d8u: goto label_2813d8;
        case 0x2813dcu: goto label_2813dc;
        case 0x2813e0u: goto label_2813e0;
        case 0x2813e4u: goto label_2813e4;
        case 0x2813e8u: goto label_2813e8;
        case 0x2813ecu: goto label_2813ec;
        case 0x2813f0u: goto label_2813f0;
        case 0x2813f4u: goto label_2813f4;
        case 0x2813f8u: goto label_2813f8;
        case 0x2813fcu: goto label_2813fc;
        case 0x281400u: goto label_281400;
        case 0x281404u: goto label_281404;
        case 0x281408u: goto label_281408;
        case 0x28140cu: goto label_28140c;
        case 0x281410u: goto label_281410;
        case 0x281414u: goto label_281414;
        case 0x281418u: goto label_281418;
        case 0x28141cu: goto label_28141c;
        case 0x281420u: goto label_281420;
        case 0x281424u: goto label_281424;
        case 0x281428u: goto label_281428;
        case 0x28142cu: goto label_28142c;
        case 0x281430u: goto label_281430;
        case 0x281434u: goto label_281434;
        case 0x281438u: goto label_281438;
        case 0x28143cu: goto label_28143c;
        case 0x281440u: goto label_281440;
        case 0x281444u: goto label_281444;
        case 0x281448u: goto label_281448;
        case 0x28144cu: goto label_28144c;
        case 0x281450u: goto label_281450;
        case 0x281454u: goto label_281454;
        case 0x281458u: goto label_281458;
        case 0x28145cu: goto label_28145c;
        case 0x281460u: goto label_281460;
        case 0x281464u: goto label_281464;
        case 0x281468u: goto label_281468;
        case 0x28146cu: goto label_28146c;
        default: break;
    }

    ctx->pc = 0x281350u;

label_281350:
    // 0x281350: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x281350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_281354:
    // 0x281354: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x281354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_281358:
    // 0x281358: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x281358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_28135c:
    // 0x28135c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28135cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_281360:
    // 0x281360: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x281360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_281364:
    // 0x281364: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x281364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_281368:
    // 0x281368: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x281368u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28136c:
    // 0x28136c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28136cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_281370:
    // 0x281370: 0x6b043  sra         $s6, $a2, 1
    ctx->pc = 0x281370u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 6), 1));
label_281374:
    // 0x281374: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x281374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_281378:
    // 0x281378: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x281378u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28137c:
    // 0x28137c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28137cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_281380:
    // 0x281380: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x281380u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_281384:
    // 0x281384: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x281384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_281388:
    // 0x281388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x281388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28138c:
    // 0x28138c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28138cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_281390:
    // 0x281390: 0x8c72fffc  lw          $s2, -0x4($v1)
    ctx->pc = 0x281390u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_281394:
    // 0x281394: 0x6e10003  bgez        $s7, . + 4 + (0x3 << 2)
label_281398:
    if (ctx->pc == 0x281398u) {
        ctx->pc = 0x281398u;
            // 0x281398: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28139Cu;
        goto label_28139c;
    }
    ctx->pc = 0x281394u;
    {
        const bool branch_taken_0x281394 = (GPR_S32(ctx, 23) >= 0);
        ctx->pc = 0x281398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281394u;
            // 0x281398: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281394) {
            ctx->pc = 0x2813A4u;
            goto label_2813a4;
        }
    }
    ctx->pc = 0x28139Cu;
label_28139c:
    // 0x28139c: 0x26e30001  addiu       $v1, $s7, 0x1
    ctx->pc = 0x28139cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_2813a0:
    // 0x2813a0: 0x3b043  sra         $s6, $v1, 1
    ctx->pc = 0x2813a0u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 3), 1));
label_2813a4:
    // 0x2813a4: 0x2d4082a  slt         $at, $s6, $s4
    ctx->pc = 0x2813a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_2813a8:
    // 0x2813a8: 0x14200021  bnez        $at, . + 4 + (0x21 << 2)
label_2813ac:
    if (ctx->pc == 0x2813ACu) {
        ctx->pc = 0x2813B0u;
        goto label_2813b0;
    }
    ctx->pc = 0x2813A8u;
    {
        const bool branch_taken_0x2813a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2813a8) {
            ctx->pc = 0x281430u;
            goto label_281430;
        }
    }
    ctx->pc = 0x2813B0u;
label_2813b0:
    // 0x2813b0: 0x148840  sll         $s1, $s4, 1
    ctx->pc = 0x2813b0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_2813b4:
    // 0x2813b4: 0x237082a  slt         $at, $s1, $s7
    ctx->pc = 0x2813b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_2813b8:
    // 0x2813b8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_2813bc:
    if (ctx->pc == 0x2813BCu) {
        ctx->pc = 0x2813BCu;
            // 0x2813bc: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x2813C0u;
        goto label_2813c0;
    }
    ctx->pc = 0x2813B8u;
    {
        const bool branch_taken_0x2813b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2813BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2813B8u;
            // 0x2813bc: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2813b8) {
            ctx->pc = 0x2813E8u;
            goto label_2813e8;
        }
    }
    ctx->pc = 0x2813C0u;
label_2813c0:
    // 0x2813c0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2813c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2813c4:
    // 0x2813c4: 0x8c45fffc  lw          $a1, -0x4($v0)
    ctx->pc = 0x2813c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_2813c8:
    // 0x2813c8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2813c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2813cc:
    // 0x2813cc: 0x260f809  jalr        $s3
label_2813d0:
    if (ctx->pc == 0x2813D0u) {
        ctx->pc = 0x2813D0u;
            // 0x2813d0: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->pc = 0x2813D4u;
        goto label_2813d4;
    }
    ctx->pc = 0x2813CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2813D4u);
        ctx->pc = 0x2813D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2813CCu;
            // 0x2813d0: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2813D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2813D4u; }
            if (ctx->pc != 0x2813D4u) { return; }
        }
        }
    }
    ctx->pc = 0x2813D4u;
label_2813d4:
    // 0x2813d4: 0x27a2009c  addiu       $v0, $sp, 0x9C
    ctx->pc = 0x2813d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_2813d8:
    // 0x2813d8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2813d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2813dc:
    // 0x2813dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2813e0:
    if (ctx->pc == 0x2813E0u) {
        ctx->pc = 0x2813E4u;
        goto label_2813e4;
    }
    ctx->pc = 0x2813DCu;
    {
        const bool branch_taken_0x2813dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2813dc) {
            ctx->pc = 0x2813E8u;
            goto label_2813e8;
        }
    }
    ctx->pc = 0x2813E4u;
label_2813e4:
    // 0x2813e4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2813e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2813e8:
    // 0x2813e8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2813e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2813ec:
    // 0x2813ec: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2813ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2813f0:
    // 0x2813f0: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x2813f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_2813f4:
    // 0x2813f4: 0x8c46fffc  lw          $a2, -0x4($v0)
    ctx->pc = 0x2813f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_2813f8:
    // 0x2813f8: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x2813f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_2813fc:
    // 0x2813fc: 0x260f809  jalr        $s3
label_281400:
    if (ctx->pc == 0x281400u) {
        ctx->pc = 0x281400u;
            // 0x281400: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x281404u;
        goto label_281404;
    }
    ctx->pc = 0x2813FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x281404u);
        ctx->pc = 0x281400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2813FCu;
            // 0x281400: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x281404u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x281404u; }
            if (ctx->pc != 0x281404u) { return; }
        }
        }
    }
    ctx->pc = 0x281404u;
label_281404:
    // 0x281404: 0x27a30098  addiu       $v1, $sp, 0x98
    ctx->pc = 0x281404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_281408:
    // 0x281408: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x281408u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_28140c:
    // 0x28140c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_281410:
    if (ctx->pc == 0x281410u) {
        ctx->pc = 0x281414u;
        goto label_281414;
    }
    ctx->pc = 0x28140Cu;
    {
        const bool branch_taken_0x28140c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28140c) {
            ctx->pc = 0x281430u;
            goto label_281430;
        }
    }
    ctx->pc = 0x281414u;
label_281414:
    // 0x281414: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x281414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_281418:
    // 0x281418: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x281418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_28141c:
    // 0x28141c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x28141cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_281420:
    // 0x281420: 0x2d1082a  slt         $at, $s6, $s1
    ctx->pc = 0x281420u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_281424:
    // 0x281424: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x281424u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_281428:
    // 0x281428: 0x1020ffe1  beqz        $at, . + 4 + (-0x1F << 2)
label_28142c:
    if (ctx->pc == 0x28142Cu) {
        ctx->pc = 0x28142Cu;
            // 0x28142c: 0xac64fffc  sw          $a0, -0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 4));
        ctx->pc = 0x281430u;
        goto label_281430;
    }
    ctx->pc = 0x281428u;
    {
        const bool branch_taken_0x281428 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28142Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281428u;
            // 0x28142c: 0xac64fffc  sw          $a0, -0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281428) {
            ctx->pc = 0x2813B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2813b0;
        }
    }
    ctx->pc = 0x281430u;
label_281430:
    // 0x281430: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x281430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_281434:
    // 0x281434: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x281434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_281438:
    // 0x281438: 0xac72fffc  sw          $s2, -0x4($v1)
    ctx->pc = 0x281438u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 18));
label_28143c:
    // 0x28143c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x28143cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_281440:
    // 0x281440: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x281440u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_281444:
    // 0x281444: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x281444u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_281448:
    // 0x281448: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x281448u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28144c:
    // 0x28144c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28144cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_281450:
    // 0x281450: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x281450u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_281454:
    // 0x281454: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x281454u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_281458:
    // 0x281458: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x281458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28145c:
    // 0x28145c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28145cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_281460:
    // 0x281460: 0x3e00008  jr          $ra
label_281464:
    if (ctx->pc == 0x281464u) {
        ctx->pc = 0x281464u;
            // 0x281464: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x281468u;
        goto label_281468;
    }
    ctx->pc = 0x281460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281460u;
            // 0x281464: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281468u;
label_281468:
    // 0x281468: 0x0  nop
    ctx->pc = 0x281468u;
    // NOP
label_28146c:
    // 0x28146c: 0x0  nop
    ctx->pc = 0x28146cu;
    // NOP
}
