#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00381530
// Address: 0x381530 - 0x381720
void sub_00381530_0x381530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381530_0x381530");
#endif

    switch (ctx->pc) {
        case 0x381530u: goto label_381530;
        case 0x381534u: goto label_381534;
        case 0x381538u: goto label_381538;
        case 0x38153cu: goto label_38153c;
        case 0x381540u: goto label_381540;
        case 0x381544u: goto label_381544;
        case 0x381548u: goto label_381548;
        case 0x38154cu: goto label_38154c;
        case 0x381550u: goto label_381550;
        case 0x381554u: goto label_381554;
        case 0x381558u: goto label_381558;
        case 0x38155cu: goto label_38155c;
        case 0x381560u: goto label_381560;
        case 0x381564u: goto label_381564;
        case 0x381568u: goto label_381568;
        case 0x38156cu: goto label_38156c;
        case 0x381570u: goto label_381570;
        case 0x381574u: goto label_381574;
        case 0x381578u: goto label_381578;
        case 0x38157cu: goto label_38157c;
        case 0x381580u: goto label_381580;
        case 0x381584u: goto label_381584;
        case 0x381588u: goto label_381588;
        case 0x38158cu: goto label_38158c;
        case 0x381590u: goto label_381590;
        case 0x381594u: goto label_381594;
        case 0x381598u: goto label_381598;
        case 0x38159cu: goto label_38159c;
        case 0x3815a0u: goto label_3815a0;
        case 0x3815a4u: goto label_3815a4;
        case 0x3815a8u: goto label_3815a8;
        case 0x3815acu: goto label_3815ac;
        case 0x3815b0u: goto label_3815b0;
        case 0x3815b4u: goto label_3815b4;
        case 0x3815b8u: goto label_3815b8;
        case 0x3815bcu: goto label_3815bc;
        case 0x3815c0u: goto label_3815c0;
        case 0x3815c4u: goto label_3815c4;
        case 0x3815c8u: goto label_3815c8;
        case 0x3815ccu: goto label_3815cc;
        case 0x3815d0u: goto label_3815d0;
        case 0x3815d4u: goto label_3815d4;
        case 0x3815d8u: goto label_3815d8;
        case 0x3815dcu: goto label_3815dc;
        case 0x3815e0u: goto label_3815e0;
        case 0x3815e4u: goto label_3815e4;
        case 0x3815e8u: goto label_3815e8;
        case 0x3815ecu: goto label_3815ec;
        case 0x3815f0u: goto label_3815f0;
        case 0x3815f4u: goto label_3815f4;
        case 0x3815f8u: goto label_3815f8;
        case 0x3815fcu: goto label_3815fc;
        case 0x381600u: goto label_381600;
        case 0x381604u: goto label_381604;
        case 0x381608u: goto label_381608;
        case 0x38160cu: goto label_38160c;
        case 0x381610u: goto label_381610;
        case 0x381614u: goto label_381614;
        case 0x381618u: goto label_381618;
        case 0x38161cu: goto label_38161c;
        case 0x381620u: goto label_381620;
        case 0x381624u: goto label_381624;
        case 0x381628u: goto label_381628;
        case 0x38162cu: goto label_38162c;
        case 0x381630u: goto label_381630;
        case 0x381634u: goto label_381634;
        case 0x381638u: goto label_381638;
        case 0x38163cu: goto label_38163c;
        case 0x381640u: goto label_381640;
        case 0x381644u: goto label_381644;
        case 0x381648u: goto label_381648;
        case 0x38164cu: goto label_38164c;
        case 0x381650u: goto label_381650;
        case 0x381654u: goto label_381654;
        case 0x381658u: goto label_381658;
        case 0x38165cu: goto label_38165c;
        case 0x381660u: goto label_381660;
        case 0x381664u: goto label_381664;
        case 0x381668u: goto label_381668;
        case 0x38166cu: goto label_38166c;
        case 0x381670u: goto label_381670;
        case 0x381674u: goto label_381674;
        case 0x381678u: goto label_381678;
        case 0x38167cu: goto label_38167c;
        case 0x381680u: goto label_381680;
        case 0x381684u: goto label_381684;
        case 0x381688u: goto label_381688;
        case 0x38168cu: goto label_38168c;
        case 0x381690u: goto label_381690;
        case 0x381694u: goto label_381694;
        case 0x381698u: goto label_381698;
        case 0x38169cu: goto label_38169c;
        case 0x3816a0u: goto label_3816a0;
        case 0x3816a4u: goto label_3816a4;
        case 0x3816a8u: goto label_3816a8;
        case 0x3816acu: goto label_3816ac;
        case 0x3816b0u: goto label_3816b0;
        case 0x3816b4u: goto label_3816b4;
        case 0x3816b8u: goto label_3816b8;
        case 0x3816bcu: goto label_3816bc;
        case 0x3816c0u: goto label_3816c0;
        case 0x3816c4u: goto label_3816c4;
        case 0x3816c8u: goto label_3816c8;
        case 0x3816ccu: goto label_3816cc;
        case 0x3816d0u: goto label_3816d0;
        case 0x3816d4u: goto label_3816d4;
        case 0x3816d8u: goto label_3816d8;
        case 0x3816dcu: goto label_3816dc;
        case 0x3816e0u: goto label_3816e0;
        case 0x3816e4u: goto label_3816e4;
        case 0x3816e8u: goto label_3816e8;
        case 0x3816ecu: goto label_3816ec;
        case 0x3816f0u: goto label_3816f0;
        case 0x3816f4u: goto label_3816f4;
        case 0x3816f8u: goto label_3816f8;
        case 0x3816fcu: goto label_3816fc;
        case 0x381700u: goto label_381700;
        case 0x381704u: goto label_381704;
        case 0x381708u: goto label_381708;
        case 0x38170cu: goto label_38170c;
        case 0x381710u: goto label_381710;
        case 0x381714u: goto label_381714;
        case 0x381718u: goto label_381718;
        case 0x38171cu: goto label_38171c;
        default: break;
    }

    ctx->pc = 0x381530u;

label_381530:
    // 0x381530: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x381530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_381534:
    // 0x381534: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x381534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_381538:
    // 0x381538: 0xa02827  not         $a1, $a1
    ctx->pc = 0x381538u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
label_38153c:
    // 0x38153c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x38153cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_381540:
    // 0x381540: 0x3e00008  jr          $ra
label_381544:
    if (ctx->pc == 0x381544u) {
        ctx->pc = 0x381544u;
            // 0x381544: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x381548u;
        goto label_381548;
    }
    ctx->pc = 0x381540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x381540u;
            // 0x381544: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x381548u;
label_381548:
    // 0x381548: 0x0  nop
    ctx->pc = 0x381548u;
    // NOP
label_38154c:
    // 0x38154c: 0x0  nop
    ctx->pc = 0x38154cu;
    // NOP
label_381550:
    // 0x381550: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x381550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_381554:
    // 0x381554: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x381554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_381558:
    // 0x381558: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x381558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_38155c:
    // 0x38155c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38155cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_381560:
    // 0x381560: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x381560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_381564:
    // 0x381564: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x381564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_381568:
    // 0x381568: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x381568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38156c:
    // 0x38156c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x38156cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_381570:
    // 0x381570: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_381574:
    if (ctx->pc == 0x381574u) {
        ctx->pc = 0x381574u;
            // 0x381574: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381578u;
        goto label_381578;
    }
    ctx->pc = 0x381570u;
    {
        const bool branch_taken_0x381570 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x381574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x381570u;
            // 0x381574: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381570) {
            ctx->pc = 0x3815A4u;
            goto label_3815a4;
        }
    }
    ctx->pc = 0x381578u;
label_381578:
    // 0x381578: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x381578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38157c:
    // 0x38157c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_381580:
    if (ctx->pc == 0x381580u) {
        ctx->pc = 0x381580u;
            // 0x381580: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x381584u;
        goto label_381584;
    }
    ctx->pc = 0x38157Cu;
    {
        const bool branch_taken_0x38157c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x38157c) {
            ctx->pc = 0x381580u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38157Cu;
            // 0x381580: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x381598u;
            goto label_381598;
        }
    }
    ctx->pc = 0x381584u;
label_381584:
    // 0x381584: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x381584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_381588:
    // 0x381588: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_38158c:
    if (ctx->pc == 0x38158Cu) {
        ctx->pc = 0x381590u;
        goto label_381590;
    }
    ctx->pc = 0x381588u;
    {
        const bool branch_taken_0x381588 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x381588) {
            ctx->pc = 0x3815D8u;
            goto label_3815d8;
        }
    }
    ctx->pc = 0x381590u;
label_381590:
    // 0x381590: 0x10000011  b           . + 4 + (0x11 << 2)
label_381594:
    if (ctx->pc == 0x381594u) {
        ctx->pc = 0x381598u;
        goto label_381598;
    }
    ctx->pc = 0x381590u;
    {
        const bool branch_taken_0x381590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x381590) {
            ctx->pc = 0x3815D8u;
            goto label_3815d8;
        }
    }
    ctx->pc = 0x381598u;
label_381598:
    // 0x381598: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x381598u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_38159c:
    // 0x38159c: 0x320f809  jalr        $t9
label_3815a0:
    if (ctx->pc == 0x3815A0u) {
        ctx->pc = 0x3815A4u;
        goto label_3815a4;
    }
    ctx->pc = 0x38159Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3815A4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3815A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3815A4u; }
            if (ctx->pc != 0x3815A4u) { return; }
        }
        }
    }
    ctx->pc = 0x3815A4u;
label_3815a4:
    // 0x3815a4: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x3815a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_3815a8:
    // 0x3815a8: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_3815ac:
    if (ctx->pc == 0x3815ACu) {
        ctx->pc = 0x3815B0u;
        goto label_3815b0;
    }
    ctx->pc = 0x3815A8u;
    {
        const bool branch_taken_0x3815a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3815a8) {
            ctx->pc = 0x3815D8u;
            goto label_3815d8;
        }
    }
    ctx->pc = 0x3815B0u;
label_3815b0:
    // 0x3815b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3815b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3815b4:
    // 0x3815b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3815b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3815b8:
    // 0x3815b8: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x3815b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_3815bc:
    // 0x3815bc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3815bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3815c0:
    // 0x3815c0: 0xc0e3658  jal         func_38D960
label_3815c4:
    if (ctx->pc == 0x3815C4u) {
        ctx->pc = 0x3815C4u;
            // 0x3815c4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3815C8u;
        goto label_3815c8;
    }
    ctx->pc = 0x3815C0u;
    SET_GPR_U32(ctx, 31, 0x3815C8u);
    ctx->pc = 0x3815C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3815C0u;
            // 0x3815c4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3815C8u; }
        if (ctx->pc != 0x3815C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3815C8u; }
        if (ctx->pc != 0x3815C8u) { return; }
    }
    ctx->pc = 0x3815C8u;
label_3815c8:
    // 0x3815c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3815c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3815cc:
    // 0x3815cc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x3815ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3815d0:
    // 0x3815d0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_3815d4:
    if (ctx->pc == 0x3815D4u) {
        ctx->pc = 0x3815D4u;
            // 0x3815d4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3815D8u;
        goto label_3815d8;
    }
    ctx->pc = 0x3815D0u;
    {
        const bool branch_taken_0x3815d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3815D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3815D0u;
            // 0x3815d4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3815d0) {
            ctx->pc = 0x3815B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3815b8;
        }
    }
    ctx->pc = 0x3815D8u;
label_3815d8:
    // 0x3815d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3815d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3815dc:
    // 0x3815dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3815dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3815e0:
    // 0x3815e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3815e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3815e4:
    // 0x3815e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3815e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3815e8:
    // 0x3815e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3815e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3815ec:
    // 0x3815ec: 0x3e00008  jr          $ra
label_3815f0:
    if (ctx->pc == 0x3815F0u) {
        ctx->pc = 0x3815F0u;
            // 0x3815f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3815F4u;
        goto label_3815f4;
    }
    ctx->pc = 0x3815ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3815F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3815ECu;
            // 0x3815f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3815F4u;
label_3815f4:
    // 0x3815f4: 0x0  nop
    ctx->pc = 0x3815f4u;
    // NOP
label_3815f8:
    // 0x3815f8: 0x0  nop
    ctx->pc = 0x3815f8u;
    // NOP
label_3815fc:
    // 0x3815fc: 0x0  nop
    ctx->pc = 0x3815fcu;
    // NOP
label_381600:
    // 0x381600: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x381600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_381604:
    // 0x381604: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x381604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_381608:
    // 0x381608: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x381608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_38160c:
    // 0x38160c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38160cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_381610:
    // 0x381610: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x381610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_381614:
    // 0x381614: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x381614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_381618:
    // 0x381618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x381618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38161c:
    // 0x38161c: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x38161cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_381620:
    // 0x381620: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_381624:
    if (ctx->pc == 0x381624u) {
        ctx->pc = 0x381624u;
            // 0x381624: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381628u;
        goto label_381628;
    }
    ctx->pc = 0x381620u;
    {
        const bool branch_taken_0x381620 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x381624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x381620u;
            // 0x381624: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381620) {
            ctx->pc = 0x381670u;
            goto label_381670;
        }
    }
    ctx->pc = 0x381628u;
label_381628:
    // 0x381628: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x381628u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38162c:
    // 0x38162c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x38162cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_381630:
    // 0x381630: 0x8e830074  lw          $v1, 0x74($s4)
    ctx->pc = 0x381630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_381634:
    // 0x381634: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x381634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_381638:
    // 0x381638: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x381638u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_38163c:
    // 0x38163c: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x38163cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_381640:
    // 0x381640: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
label_381644:
    if (ctx->pc == 0x381644u) {
        ctx->pc = 0x381648u;
        goto label_381648;
    }
    ctx->pc = 0x381640u;
    {
        const bool branch_taken_0x381640 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x381640) {
            ctx->pc = 0x381660u;
            goto label_381660;
        }
    }
    ctx->pc = 0x381648u;
label_381648:
    // 0x381648: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x381648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38164c:
    // 0x38164c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x38164cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_381650:
    // 0x381650: 0x320f809  jalr        $t9
label_381654:
    if (ctx->pc == 0x381654u) {
        ctx->pc = 0x381654u;
            // 0x381654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x381658u;
        goto label_381658;
    }
    ctx->pc = 0x381650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x381658u);
        ctx->pc = 0x381654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x381650u;
            // 0x381654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x381658u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x381658u; }
            if (ctx->pc != 0x381658u) { return; }
        }
        }
    }
    ctx->pc = 0x381658u;
label_381658:
    // 0x381658: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x381658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38165c:
    // 0x38165c: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x38165cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_381660:
    // 0x381660: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x381660u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_381664:
    // 0x381664: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x381664u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_381668:
    // 0x381668: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_38166c:
    if (ctx->pc == 0x38166Cu) {
        ctx->pc = 0x38166Cu;
            // 0x38166c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x381670u;
        goto label_381670;
    }
    ctx->pc = 0x381668u;
    {
        const bool branch_taken_0x381668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38166Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x381668u;
            // 0x38166c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381668) {
            ctx->pc = 0x381630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_381630;
        }
    }
    ctx->pc = 0x381670u;
label_381670:
    // 0x381670: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x381670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_381674:
    // 0x381674: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x381674u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_381678:
    // 0x381678: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x381678u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38167c:
    // 0x38167c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38167cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_381680:
    // 0x381680: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x381680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_381684:
    // 0x381684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x381684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_381688:
    // 0x381688: 0x3e00008  jr          $ra
label_38168c:
    if (ctx->pc == 0x38168Cu) {
        ctx->pc = 0x38168Cu;
            // 0x38168c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x381690u;
        goto label_381690;
    }
    ctx->pc = 0x381688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38168Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x381688u;
            // 0x38168c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x381690u;
label_381690:
    // 0x381690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x381690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_381694:
    // 0x381694: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x381694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_381698:
    // 0x381698: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x381698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38169c:
    // 0x38169c: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x38169cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_3816a0:
    // 0x3816a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3816a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3816a4:
    // 0x3816a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3816a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3816a8:
    // 0x3816a8: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x3816a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_3816ac:
    // 0x3816ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3816acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3816b0:
    // 0x3816b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3816b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3816b4:
    // 0x3816b4: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x3816b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_3816b8:
    // 0x3816b8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3816b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3816bc:
    // 0x3816bc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3816bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3816c0:
    // 0x3816c0: 0xc08bff0  jal         func_22FFC0
label_3816c4:
    if (ctx->pc == 0x3816C4u) {
        ctx->pc = 0x3816C4u;
            // 0x3816c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3816C8u;
        goto label_3816c8;
    }
    ctx->pc = 0x3816C0u;
    SET_GPR_U32(ctx, 31, 0x3816C8u);
    ctx->pc = 0x3816C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3816C0u;
            // 0x3816c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3816C8u; }
        if (ctx->pc != 0x3816C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3816C8u; }
        if (ctx->pc != 0x3816C8u) { return; }
    }
    ctx->pc = 0x3816C8u;
label_3816c8:
    // 0x3816c8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3816c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3816cc:
    // 0x3816cc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3816ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3816d0:
    // 0x3816d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3816d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3816d4:
    // 0x3816d4: 0xc08914c  jal         func_224530
label_3816d8:
    if (ctx->pc == 0x3816D8u) {
        ctx->pc = 0x3816D8u;
            // 0x3816d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3816DCu;
        goto label_3816dc;
    }
    ctx->pc = 0x3816D4u;
    SET_GPR_U32(ctx, 31, 0x3816DCu);
    ctx->pc = 0x3816D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3816D4u;
            // 0x3816d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3816DCu; }
        if (ctx->pc != 0x3816DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3816DCu; }
        if (ctx->pc != 0x3816DCu) { return; }
    }
    ctx->pc = 0x3816DCu;
label_3816dc:
    // 0x3816dc: 0xc0e393c  jal         func_38E4F0
label_3816e0:
    if (ctx->pc == 0x3816E0u) {
        ctx->pc = 0x3816E0u;
            // 0x3816e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3816E4u;
        goto label_3816e4;
    }
    ctx->pc = 0x3816DCu;
    SET_GPR_U32(ctx, 31, 0x3816E4u);
    ctx->pc = 0x3816E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3816DCu;
            // 0x3816e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3816E4u; }
        if (ctx->pc != 0x3816E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3816E4u; }
        if (ctx->pc != 0x3816E4u) { return; }
    }
    ctx->pc = 0x3816E4u;
label_3816e4:
    // 0x3816e4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3816e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_3816e8:
    // 0x3816e8: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x3816e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3816ec:
    // 0x3816ec: 0xc44c5a98  lwc1        $f12, 0x5A98($v0)
    ctx->pc = 0x3816ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 23192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3816f0:
    // 0x3816f0: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x3816f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_3816f4:
    // 0x3816f4: 0xac640158  sw          $a0, 0x158($v1)
    ctx->pc = 0x3816f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 344), GPR_U32(ctx, 4));
label_3816f8:
    // 0x3816f8: 0xc04c710  jal         func_131C40
label_3816fc:
    if (ctx->pc == 0x3816FCu) {
        ctx->pc = 0x3816FCu;
            // 0x3816fc: 0xae0000d8  sw          $zero, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
        ctx->pc = 0x381700u;
        goto label_381700;
    }
    ctx->pc = 0x3816F8u;
    SET_GPR_U32(ctx, 31, 0x381700u);
    ctx->pc = 0x3816FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3816F8u;
            // 0x3816fc: 0xae0000d8  sw          $zero, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (runtime->hasFunction(0x131C40u)) {
        auto targetFn = runtime->lookupFunction(0x131C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381700u; }
        if (ctx->pc != 0x381700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C40_0x131c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381700u; }
        if (ctx->pc != 0x381700u) { return; }
    }
    ctx->pc = 0x381700u;
label_381700:
    // 0x381700: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x381700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_381704:
    // 0x381704: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x381704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_381708:
    // 0x381708: 0xa20300e4  sb          $v1, 0xE4($s0)
    ctx->pc = 0x381708u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 228), (uint8_t)GPR_U32(ctx, 3));
label_38170c:
    // 0x38170c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x38170cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_381710:
    // 0x381710: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x381710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_381714:
    // 0x381714: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x381714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_381718:
    // 0x381718: 0x3e00008  jr          $ra
label_38171c:
    if (ctx->pc == 0x38171Cu) {
        ctx->pc = 0x38171Cu;
            // 0x38171c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x381720u;
        goto label_fallthrough_0x381718;
    }
    ctx->pc = 0x381718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38171Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x381718u;
            // 0x38171c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x381718:
    ctx->pc = 0x381720u;
}
