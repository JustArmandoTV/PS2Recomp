#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002375E0
// Address: 0x2375e0 - 0x2377e0
void sub_002375E0_0x2375e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002375E0_0x2375e0");
#endif

    switch (ctx->pc) {
        case 0x2375e0u: goto label_2375e0;
        case 0x2375e4u: goto label_2375e4;
        case 0x2375e8u: goto label_2375e8;
        case 0x2375ecu: goto label_2375ec;
        case 0x2375f0u: goto label_2375f0;
        case 0x2375f4u: goto label_2375f4;
        case 0x2375f8u: goto label_2375f8;
        case 0x2375fcu: goto label_2375fc;
        case 0x237600u: goto label_237600;
        case 0x237604u: goto label_237604;
        case 0x237608u: goto label_237608;
        case 0x23760cu: goto label_23760c;
        case 0x237610u: goto label_237610;
        case 0x237614u: goto label_237614;
        case 0x237618u: goto label_237618;
        case 0x23761cu: goto label_23761c;
        case 0x237620u: goto label_237620;
        case 0x237624u: goto label_237624;
        case 0x237628u: goto label_237628;
        case 0x23762cu: goto label_23762c;
        case 0x237630u: goto label_237630;
        case 0x237634u: goto label_237634;
        case 0x237638u: goto label_237638;
        case 0x23763cu: goto label_23763c;
        case 0x237640u: goto label_237640;
        case 0x237644u: goto label_237644;
        case 0x237648u: goto label_237648;
        case 0x23764cu: goto label_23764c;
        case 0x237650u: goto label_237650;
        case 0x237654u: goto label_237654;
        case 0x237658u: goto label_237658;
        case 0x23765cu: goto label_23765c;
        case 0x237660u: goto label_237660;
        case 0x237664u: goto label_237664;
        case 0x237668u: goto label_237668;
        case 0x23766cu: goto label_23766c;
        case 0x237670u: goto label_237670;
        case 0x237674u: goto label_237674;
        case 0x237678u: goto label_237678;
        case 0x23767cu: goto label_23767c;
        case 0x237680u: goto label_237680;
        case 0x237684u: goto label_237684;
        case 0x237688u: goto label_237688;
        case 0x23768cu: goto label_23768c;
        case 0x237690u: goto label_237690;
        case 0x237694u: goto label_237694;
        case 0x237698u: goto label_237698;
        case 0x23769cu: goto label_23769c;
        case 0x2376a0u: goto label_2376a0;
        case 0x2376a4u: goto label_2376a4;
        case 0x2376a8u: goto label_2376a8;
        case 0x2376acu: goto label_2376ac;
        case 0x2376b0u: goto label_2376b0;
        case 0x2376b4u: goto label_2376b4;
        case 0x2376b8u: goto label_2376b8;
        case 0x2376bcu: goto label_2376bc;
        case 0x2376c0u: goto label_2376c0;
        case 0x2376c4u: goto label_2376c4;
        case 0x2376c8u: goto label_2376c8;
        case 0x2376ccu: goto label_2376cc;
        case 0x2376d0u: goto label_2376d0;
        case 0x2376d4u: goto label_2376d4;
        case 0x2376d8u: goto label_2376d8;
        case 0x2376dcu: goto label_2376dc;
        case 0x2376e0u: goto label_2376e0;
        case 0x2376e4u: goto label_2376e4;
        case 0x2376e8u: goto label_2376e8;
        case 0x2376ecu: goto label_2376ec;
        case 0x2376f0u: goto label_2376f0;
        case 0x2376f4u: goto label_2376f4;
        case 0x2376f8u: goto label_2376f8;
        case 0x2376fcu: goto label_2376fc;
        case 0x237700u: goto label_237700;
        case 0x237704u: goto label_237704;
        case 0x237708u: goto label_237708;
        case 0x23770cu: goto label_23770c;
        case 0x237710u: goto label_237710;
        case 0x237714u: goto label_237714;
        case 0x237718u: goto label_237718;
        case 0x23771cu: goto label_23771c;
        case 0x237720u: goto label_237720;
        case 0x237724u: goto label_237724;
        case 0x237728u: goto label_237728;
        case 0x23772cu: goto label_23772c;
        case 0x237730u: goto label_237730;
        case 0x237734u: goto label_237734;
        case 0x237738u: goto label_237738;
        case 0x23773cu: goto label_23773c;
        case 0x237740u: goto label_237740;
        case 0x237744u: goto label_237744;
        case 0x237748u: goto label_237748;
        case 0x23774cu: goto label_23774c;
        case 0x237750u: goto label_237750;
        case 0x237754u: goto label_237754;
        case 0x237758u: goto label_237758;
        case 0x23775cu: goto label_23775c;
        case 0x237760u: goto label_237760;
        case 0x237764u: goto label_237764;
        case 0x237768u: goto label_237768;
        case 0x23776cu: goto label_23776c;
        case 0x237770u: goto label_237770;
        case 0x237774u: goto label_237774;
        case 0x237778u: goto label_237778;
        case 0x23777cu: goto label_23777c;
        case 0x237780u: goto label_237780;
        case 0x237784u: goto label_237784;
        case 0x237788u: goto label_237788;
        case 0x23778cu: goto label_23778c;
        case 0x237790u: goto label_237790;
        case 0x237794u: goto label_237794;
        case 0x237798u: goto label_237798;
        case 0x23779cu: goto label_23779c;
        case 0x2377a0u: goto label_2377a0;
        case 0x2377a4u: goto label_2377a4;
        case 0x2377a8u: goto label_2377a8;
        case 0x2377acu: goto label_2377ac;
        case 0x2377b0u: goto label_2377b0;
        case 0x2377b4u: goto label_2377b4;
        case 0x2377b8u: goto label_2377b8;
        case 0x2377bcu: goto label_2377bc;
        case 0x2377c0u: goto label_2377c0;
        case 0x2377c4u: goto label_2377c4;
        case 0x2377c8u: goto label_2377c8;
        case 0x2377ccu: goto label_2377cc;
        case 0x2377d0u: goto label_2377d0;
        case 0x2377d4u: goto label_2377d4;
        case 0x2377d8u: goto label_2377d8;
        case 0x2377dcu: goto label_2377dc;
        default: break;
    }

    ctx->pc = 0x2375e0u;

label_2375e0:
    // 0x2375e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2375e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2375e4:
    // 0x2375e4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2375e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2375e8:
    // 0x2375e8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2375e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2375ec:
    // 0x2375ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2375ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2375f0:
    // 0x2375f0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2375f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2375f4:
    // 0x2375f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2375f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2375f8:
    // 0x2375f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2375f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2375fc:
    // 0x2375fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2375fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_237600:
    // 0x237600: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x237600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_237604:
    // 0x237604: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x237604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_237608:
    // 0x237608: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x237608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_23760c:
    // 0x23760c: 0x24710028  addiu       $s1, $v1, 0x28
    ctx->pc = 0x23760cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_237610:
    // 0x237610: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x237610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_237614:
    // 0x237614: 0x1860001e  blez        $v1, . + 4 + (0x1E << 2)
label_237618:
    if (ctx->pc == 0x237618u) {
        ctx->pc = 0x237618u;
            // 0x237618: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23761Cu;
        goto label_23761c;
    }
    ctx->pc = 0x237614u;
    {
        const bool branch_taken_0x237614 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x237618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237614u;
            // 0x237618: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237614) {
            ctx->pc = 0x237690u;
            goto label_237690;
        }
    }
    ctx->pc = 0x23761Cu;
label_23761c:
    // 0x23761c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x23761cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237620:
    // 0x237620: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x237620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_237624:
    // 0x237624: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x237624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_237628:
    // 0x237628: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x237628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23762c:
    // 0x23762c: 0x2470003c  addiu       $s0, $v1, 0x3C
    ctx->pc = 0x23762cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
label_237630:
    // 0x237630: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x237630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_237634:
    // 0x237634: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
label_237638:
    if (ctx->pc == 0x237638u) {
        ctx->pc = 0x237638u;
            // 0x237638: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23763Cu;
        goto label_23763c;
    }
    ctx->pc = 0x237634u;
    {
        const bool branch_taken_0x237634 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x237638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237634u;
            // 0x237638: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237634) {
            ctx->pc = 0x237678u;
            goto label_237678;
        }
    }
    ctx->pc = 0x23763Cu;
label_23763c:
    // 0x23763c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x23763cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237640:
    // 0x237640: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x237640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_237644:
    // 0x237644: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x237644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_237648:
    // 0x237648: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x237648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_23764c:
    // 0x23764c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23764cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_237650:
    // 0x237650: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x237650u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_237654:
    // 0x237654: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x237654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_237658:
    // 0x237658: 0x320f809  jalr        $t9
label_23765c:
    if (ctx->pc == 0x23765Cu) {
        ctx->pc = 0x23765Cu;
            // 0x23765c: 0x244501a0  addiu       $a1, $v0, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
        ctx->pc = 0x237660u;
        goto label_237660;
    }
    ctx->pc = 0x237658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x237660u);
        ctx->pc = 0x23765Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237658u;
            // 0x23765c: 0x244501a0  addiu       $a1, $v0, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x237660u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x237660u; }
            if (ctx->pc != 0x237660u) { return; }
        }
        }
    }
    ctx->pc = 0x237660u;
label_237660:
    // 0x237660: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x237660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_237664:
    // 0x237664: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x237664u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_237668:
    // 0x237668: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x237668u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23766c:
    // 0x23766c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_237670:
    if (ctx->pc == 0x237670u) {
        ctx->pc = 0x237670u;
            // 0x237670: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x237674u;
        goto label_237674;
    }
    ctx->pc = 0x23766Cu;
    {
        const bool branch_taken_0x23766c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x237670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23766Cu;
            // 0x237670: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23766c) {
            ctx->pc = 0x237640u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_237640;
        }
    }
    ctx->pc = 0x237674u;
label_237674:
    // 0x237674: 0x0  nop
    ctx->pc = 0x237674u;
    // NOP
label_237678:
    // 0x237678: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x237678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_23767c:
    // 0x23767c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x23767cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_237680:
    // 0x237680: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x237680u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_237684:
    // 0x237684: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
label_237688:
    if (ctx->pc == 0x237688u) {
        ctx->pc = 0x237688u;
            // 0x237688: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x23768Cu;
        goto label_23768c;
    }
    ctx->pc = 0x237684u;
    {
        const bool branch_taken_0x237684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x237688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237684u;
            // 0x237688: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237684) {
            ctx->pc = 0x237620u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_237620;
        }
    }
    ctx->pc = 0x23768Cu;
label_23768c:
    // 0x23768c: 0x0  nop
    ctx->pc = 0x23768cu;
    // NOP
label_237690:
    // 0x237690: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x237690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_237694:
    // 0x237694: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x237694u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_237698:
    // 0x237698: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x237698u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23769c:
    // 0x23769c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23769cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2376a0:
    // 0x2376a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2376a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2376a4:
    // 0x2376a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2376a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2376a8:
    // 0x2376a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2376a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2376ac:
    // 0x2376ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2376acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2376b0:
    // 0x2376b0: 0x3e00008  jr          $ra
label_2376b4:
    if (ctx->pc == 0x2376B4u) {
        ctx->pc = 0x2376B4u;
            // 0x2376b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2376B8u;
        goto label_2376b8;
    }
    ctx->pc = 0x2376B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2376B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2376B0u;
            // 0x2376b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2376B8u;
label_2376b8:
    // 0x2376b8: 0x0  nop
    ctx->pc = 0x2376b8u;
    // NOP
label_2376bc:
    // 0x2376bc: 0x0  nop
    ctx->pc = 0x2376bcu;
    // NOP
label_2376c0:
    // 0x2376c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2376c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2376c4:
    // 0x2376c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2376c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2376c8:
    // 0x2376c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2376c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2376cc:
    // 0x2376cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2376ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2376d0:
    // 0x2376d0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2376d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2376d4:
    // 0x2376d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2376d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2376d8:
    // 0x2376d8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2376d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2376dc:
    // 0x2376dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2376dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2376e0:
    // 0x2376e0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2376e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2376e4:
    // 0x2376e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2376e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2376e8:
    // 0x2376e8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2376e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2376ec:
    // 0x2376ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2376ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2376f0:
    // 0x2376f0: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2376f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2376f4:
    // 0x2376f4: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x2376f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2376f8:
    // 0x2376f8: 0x8cf0006c  lw          $s0, 0x6C($a3)
    ctx->pc = 0x2376f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 108)));
label_2376fc:
    // 0x2376fc: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x2376fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_237700:
    // 0x237700: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x237700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_237704:
    // 0x237704: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x237704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_237708:
    // 0x237708: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x237708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23770c:
    // 0x23770c: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x23770cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_237710:
    // 0x237710: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x237710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_237714:
    // 0x237714: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x237714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_237718:
    // 0x237718: 0xc501000c  lwc1        $f1, 0xC($t0)
    ctx->pc = 0x237718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23771c:
    // 0x23771c: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x23771cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_237720:
    // 0x237720: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x237720u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_237724:
    // 0x237724: 0xe7a1007c  swc1        $f1, 0x7C($sp)
    ctx->pc = 0x237724u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_237728:
    // 0x237728: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x237728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_23772c:
    // 0x23772c: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x23772cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_237730:
    // 0x237730: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x237730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_237734:
    // 0x237734: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x237734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_237738:
    // 0x237738: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x237738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_23773c:
    // 0x23773c: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x23773cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_237740:
    // 0x237740: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x237740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_237744:
    // 0x237744: 0x8ce20084  lw          $v0, 0x84($a3)
    ctx->pc = 0x237744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 132)));
label_237748:
    // 0x237748: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x237748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23774c:
    // 0x23774c: 0xc08d8d4  jal         func_236350
label_237750:
    if (ctx->pc == 0x237750u) {
        ctx->pc = 0x237750u;
            // 0x237750: 0xace20084  sw          $v0, 0x84($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 132), GPR_U32(ctx, 2));
        ctx->pc = 0x237754u;
        goto label_237754;
    }
    ctx->pc = 0x23774Cu;
    SET_GPR_U32(ctx, 31, 0x237754u);
    ctx->pc = 0x237750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23774Cu;
            // 0x237750: 0xace20084  sw          $v0, 0x84($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x236350u;
    if (runtime->hasFunction(0x236350u)) {
        auto targetFn = runtime->lookupFunction(0x236350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237754u; }
        if (ctx->pc != 0x237754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00236350_0x236350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237754u; }
        if (ctx->pc != 0x237754u) { return; }
    }
    ctx->pc = 0x237754u;
label_237754:
    // 0x237754: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x237754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_237758:
    // 0x237758: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x237758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23775c:
    // 0x23775c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x23775cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_237760:
    // 0x237760: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x237760u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_237764:
    // 0x237764: 0xc08ddf8  jal         func_2377E0
label_237768:
    if (ctx->pc == 0x237768u) {
        ctx->pc = 0x237768u;
            // 0x237768: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23776Cu;
        goto label_23776c;
    }
    ctx->pc = 0x237764u;
    SET_GPR_U32(ctx, 31, 0x23776Cu);
    ctx->pc = 0x237768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237764u;
            // 0x237768: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2377E0u;
    if (runtime->hasFunction(0x2377E0u)) {
        auto targetFn = runtime->lookupFunction(0x2377E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23776Cu; }
        if (ctx->pc != 0x23776Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002377E0_0x2377e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23776Cu; }
        if (ctx->pc != 0x23776Cu) { return; }
    }
    ctx->pc = 0x23776Cu;
label_23776c:
    // 0x23776c: 0x8e430084  lw          $v1, 0x84($s2)
    ctx->pc = 0x23776cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_237770:
    // 0x237770: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x237770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_237774:
    // 0x237774: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_237778:
    if (ctx->pc == 0x237778u) {
        ctx->pc = 0x237778u;
            // 0x237778: 0xae430084  sw          $v1, 0x84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 3));
        ctx->pc = 0x23777Cu;
        goto label_23777c;
    }
    ctx->pc = 0x237774u;
    {
        const bool branch_taken_0x237774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x237778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237774u;
            // 0x237778: 0xae430084  sw          $v1, 0x84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237774) {
            ctx->pc = 0x23779Cu;
            goto label_23779c;
        }
    }
    ctx->pc = 0x23777Cu;
label_23777c:
    // 0x23777c: 0x8e430080  lw          $v1, 0x80($s2)
    ctx->pc = 0x23777cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_237780:
    // 0x237780: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_237784:
    if (ctx->pc == 0x237784u) {
        ctx->pc = 0x237784u;
            // 0x237784: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x237788u;
        goto label_237788;
    }
    ctx->pc = 0x237780u;
    {
        const bool branch_taken_0x237780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x237780) {
            ctx->pc = 0x237784u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x237780u;
            // 0x237784: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2377A0u;
            goto label_2377a0;
        }
    }
    ctx->pc = 0x237788u;
label_237788:
    // 0x237788: 0x8243008c  lb          $v1, 0x8C($s2)
    ctx->pc = 0x237788u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
label_23778c:
    // 0x23778c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_237790:
    if (ctx->pc == 0x237790u) {
        ctx->pc = 0x237794u;
        goto label_237794;
    }
    ctx->pc = 0x23778Cu;
    {
        const bool branch_taken_0x23778c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23778c) {
            ctx->pc = 0x23779Cu;
            goto label_23779c;
        }
    }
    ctx->pc = 0x237794u;
label_237794:
    // 0x237794: 0xc08d1c4  jal         func_234710
label_237798:
    if (ctx->pc == 0x237798u) {
        ctx->pc = 0x237798u;
            // 0x237798: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23779Cu;
        goto label_23779c;
    }
    ctx->pc = 0x237794u;
    SET_GPR_U32(ctx, 31, 0x23779Cu);
    ctx->pc = 0x237798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237794u;
            // 0x237798: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23779Cu; }
        if (ctx->pc != 0x23779Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23779Cu; }
        if (ctx->pc != 0x23779Cu) { return; }
    }
    ctx->pc = 0x23779Cu;
label_23779c:
    // 0x23779c: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x23779cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2377a0:
    // 0x2377a0: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x2377a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2377a4:
    // 0x2377a4: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2377a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2377a8:
    // 0x2377a8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2377a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_2377ac:
    // 0x2377ac: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2377acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2377b0:
    // 0x2377b0: 0xe6020024  swc1        $f2, 0x24($s0)
    ctx->pc = 0x2377b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_2377b4:
    // 0x2377b4: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x2377b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_2377b8:
    // 0x2377b8: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x2377b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_2377bc:
    // 0x2377bc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2377bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2377c0:
    // 0x2377c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2377c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2377c4:
    // 0x2377c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2377c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2377c8:
    // 0x2377c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2377c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2377cc:
    // 0x2377cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2377ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2377d0:
    // 0x2377d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2377d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2377d4:
    // 0x2377d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2377d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2377d8:
    // 0x2377d8: 0x3e00008  jr          $ra
label_2377dc:
    if (ctx->pc == 0x2377DCu) {
        ctx->pc = 0x2377DCu;
            // 0x2377dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2377E0u;
        goto label_fallthrough_0x2377d8;
    }
    ctx->pc = 0x2377D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2377DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2377D8u;
            // 0x2377dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2377d8:
    ctx->pc = 0x2377E0u;
}
