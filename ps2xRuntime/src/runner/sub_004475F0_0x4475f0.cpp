#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004475F0
// Address: 0x4475f0 - 0x4478e0
void sub_004475F0_0x4475f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004475F0_0x4475f0");
#endif

    switch (ctx->pc) {
        case 0x4475f0u: goto label_4475f0;
        case 0x4475f4u: goto label_4475f4;
        case 0x4475f8u: goto label_4475f8;
        case 0x4475fcu: goto label_4475fc;
        case 0x447600u: goto label_447600;
        case 0x447604u: goto label_447604;
        case 0x447608u: goto label_447608;
        case 0x44760cu: goto label_44760c;
        case 0x447610u: goto label_447610;
        case 0x447614u: goto label_447614;
        case 0x447618u: goto label_447618;
        case 0x44761cu: goto label_44761c;
        case 0x447620u: goto label_447620;
        case 0x447624u: goto label_447624;
        case 0x447628u: goto label_447628;
        case 0x44762cu: goto label_44762c;
        case 0x447630u: goto label_447630;
        case 0x447634u: goto label_447634;
        case 0x447638u: goto label_447638;
        case 0x44763cu: goto label_44763c;
        case 0x447640u: goto label_447640;
        case 0x447644u: goto label_447644;
        case 0x447648u: goto label_447648;
        case 0x44764cu: goto label_44764c;
        case 0x447650u: goto label_447650;
        case 0x447654u: goto label_447654;
        case 0x447658u: goto label_447658;
        case 0x44765cu: goto label_44765c;
        case 0x447660u: goto label_447660;
        case 0x447664u: goto label_447664;
        case 0x447668u: goto label_447668;
        case 0x44766cu: goto label_44766c;
        case 0x447670u: goto label_447670;
        case 0x447674u: goto label_447674;
        case 0x447678u: goto label_447678;
        case 0x44767cu: goto label_44767c;
        case 0x447680u: goto label_447680;
        case 0x447684u: goto label_447684;
        case 0x447688u: goto label_447688;
        case 0x44768cu: goto label_44768c;
        case 0x447690u: goto label_447690;
        case 0x447694u: goto label_447694;
        case 0x447698u: goto label_447698;
        case 0x44769cu: goto label_44769c;
        case 0x4476a0u: goto label_4476a0;
        case 0x4476a4u: goto label_4476a4;
        case 0x4476a8u: goto label_4476a8;
        case 0x4476acu: goto label_4476ac;
        case 0x4476b0u: goto label_4476b0;
        case 0x4476b4u: goto label_4476b4;
        case 0x4476b8u: goto label_4476b8;
        case 0x4476bcu: goto label_4476bc;
        case 0x4476c0u: goto label_4476c0;
        case 0x4476c4u: goto label_4476c4;
        case 0x4476c8u: goto label_4476c8;
        case 0x4476ccu: goto label_4476cc;
        case 0x4476d0u: goto label_4476d0;
        case 0x4476d4u: goto label_4476d4;
        case 0x4476d8u: goto label_4476d8;
        case 0x4476dcu: goto label_4476dc;
        case 0x4476e0u: goto label_4476e0;
        case 0x4476e4u: goto label_4476e4;
        case 0x4476e8u: goto label_4476e8;
        case 0x4476ecu: goto label_4476ec;
        case 0x4476f0u: goto label_4476f0;
        case 0x4476f4u: goto label_4476f4;
        case 0x4476f8u: goto label_4476f8;
        case 0x4476fcu: goto label_4476fc;
        case 0x447700u: goto label_447700;
        case 0x447704u: goto label_447704;
        case 0x447708u: goto label_447708;
        case 0x44770cu: goto label_44770c;
        case 0x447710u: goto label_447710;
        case 0x447714u: goto label_447714;
        case 0x447718u: goto label_447718;
        case 0x44771cu: goto label_44771c;
        case 0x447720u: goto label_447720;
        case 0x447724u: goto label_447724;
        case 0x447728u: goto label_447728;
        case 0x44772cu: goto label_44772c;
        case 0x447730u: goto label_447730;
        case 0x447734u: goto label_447734;
        case 0x447738u: goto label_447738;
        case 0x44773cu: goto label_44773c;
        case 0x447740u: goto label_447740;
        case 0x447744u: goto label_447744;
        case 0x447748u: goto label_447748;
        case 0x44774cu: goto label_44774c;
        case 0x447750u: goto label_447750;
        case 0x447754u: goto label_447754;
        case 0x447758u: goto label_447758;
        case 0x44775cu: goto label_44775c;
        case 0x447760u: goto label_447760;
        case 0x447764u: goto label_447764;
        case 0x447768u: goto label_447768;
        case 0x44776cu: goto label_44776c;
        case 0x447770u: goto label_447770;
        case 0x447774u: goto label_447774;
        case 0x447778u: goto label_447778;
        case 0x44777cu: goto label_44777c;
        case 0x447780u: goto label_447780;
        case 0x447784u: goto label_447784;
        case 0x447788u: goto label_447788;
        case 0x44778cu: goto label_44778c;
        case 0x447790u: goto label_447790;
        case 0x447794u: goto label_447794;
        case 0x447798u: goto label_447798;
        case 0x44779cu: goto label_44779c;
        case 0x4477a0u: goto label_4477a0;
        case 0x4477a4u: goto label_4477a4;
        case 0x4477a8u: goto label_4477a8;
        case 0x4477acu: goto label_4477ac;
        case 0x4477b0u: goto label_4477b0;
        case 0x4477b4u: goto label_4477b4;
        case 0x4477b8u: goto label_4477b8;
        case 0x4477bcu: goto label_4477bc;
        case 0x4477c0u: goto label_4477c0;
        case 0x4477c4u: goto label_4477c4;
        case 0x4477c8u: goto label_4477c8;
        case 0x4477ccu: goto label_4477cc;
        case 0x4477d0u: goto label_4477d0;
        case 0x4477d4u: goto label_4477d4;
        case 0x4477d8u: goto label_4477d8;
        case 0x4477dcu: goto label_4477dc;
        case 0x4477e0u: goto label_4477e0;
        case 0x4477e4u: goto label_4477e4;
        case 0x4477e8u: goto label_4477e8;
        case 0x4477ecu: goto label_4477ec;
        case 0x4477f0u: goto label_4477f0;
        case 0x4477f4u: goto label_4477f4;
        case 0x4477f8u: goto label_4477f8;
        case 0x4477fcu: goto label_4477fc;
        case 0x447800u: goto label_447800;
        case 0x447804u: goto label_447804;
        case 0x447808u: goto label_447808;
        case 0x44780cu: goto label_44780c;
        case 0x447810u: goto label_447810;
        case 0x447814u: goto label_447814;
        case 0x447818u: goto label_447818;
        case 0x44781cu: goto label_44781c;
        case 0x447820u: goto label_447820;
        case 0x447824u: goto label_447824;
        case 0x447828u: goto label_447828;
        case 0x44782cu: goto label_44782c;
        case 0x447830u: goto label_447830;
        case 0x447834u: goto label_447834;
        case 0x447838u: goto label_447838;
        case 0x44783cu: goto label_44783c;
        case 0x447840u: goto label_447840;
        case 0x447844u: goto label_447844;
        case 0x447848u: goto label_447848;
        case 0x44784cu: goto label_44784c;
        case 0x447850u: goto label_447850;
        case 0x447854u: goto label_447854;
        case 0x447858u: goto label_447858;
        case 0x44785cu: goto label_44785c;
        case 0x447860u: goto label_447860;
        case 0x447864u: goto label_447864;
        case 0x447868u: goto label_447868;
        case 0x44786cu: goto label_44786c;
        case 0x447870u: goto label_447870;
        case 0x447874u: goto label_447874;
        case 0x447878u: goto label_447878;
        case 0x44787cu: goto label_44787c;
        case 0x447880u: goto label_447880;
        case 0x447884u: goto label_447884;
        case 0x447888u: goto label_447888;
        case 0x44788cu: goto label_44788c;
        case 0x447890u: goto label_447890;
        case 0x447894u: goto label_447894;
        case 0x447898u: goto label_447898;
        case 0x44789cu: goto label_44789c;
        case 0x4478a0u: goto label_4478a0;
        case 0x4478a4u: goto label_4478a4;
        case 0x4478a8u: goto label_4478a8;
        case 0x4478acu: goto label_4478ac;
        case 0x4478b0u: goto label_4478b0;
        case 0x4478b4u: goto label_4478b4;
        case 0x4478b8u: goto label_4478b8;
        case 0x4478bcu: goto label_4478bc;
        case 0x4478c0u: goto label_4478c0;
        case 0x4478c4u: goto label_4478c4;
        case 0x4478c8u: goto label_4478c8;
        case 0x4478ccu: goto label_4478cc;
        case 0x4478d0u: goto label_4478d0;
        case 0x4478d4u: goto label_4478d4;
        case 0x4478d8u: goto label_4478d8;
        case 0x4478dcu: goto label_4478dc;
        default: break;
    }

    ctx->pc = 0x4475f0u;

label_4475f0:
    // 0x4475f0: 0x3e00008  jr          $ra
label_4475f4:
    if (ctx->pc == 0x4475F4u) {
        ctx->pc = 0x4475F4u;
            // 0x4475f4: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->pc = 0x4475F8u;
        goto label_4475f8;
    }
    ctx->pc = 0x4475F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4475F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4475F0u;
            // 0x4475f4: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4475F8u;
label_4475f8:
    // 0x4475f8: 0x0  nop
    ctx->pc = 0x4475f8u;
    // NOP
label_4475fc:
    // 0x4475fc: 0x0  nop
    ctx->pc = 0x4475fcu;
    // NOP
label_447600:
    // 0x447600: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x447600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_447604:
    // 0x447604: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x447604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_447608:
    // 0x447608: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x447608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_44760c:
    // 0x44760c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x44760cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_447610:
    // 0x447610: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x447610u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_447614:
    // 0x447614: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x447614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_447618:
    // 0x447618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x447618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44761c:
    // 0x44761c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x44761cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_447620:
    // 0x447620: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
label_447624:
    if (ctx->pc == 0x447624u) {
        ctx->pc = 0x447624u;
            // 0x447624: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x447628u;
        goto label_447628;
    }
    ctx->pc = 0x447620u;
    {
        const bool branch_taken_0x447620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x447624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x447620u;
            // 0x447624: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447620) {
            ctx->pc = 0x447730u;
            goto label_447730;
        }
    }
    ctx->pc = 0x447628u;
label_447628:
    // 0x447628: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x447628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_44762c:
    // 0x44762c: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x44762cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_447630:
    // 0x447630: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x447630u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_447634:
    // 0x447634: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x447634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_447638:
    // 0x447638: 0x320f809  jalr        $t9
label_44763c:
    if (ctx->pc == 0x44763Cu) {
        ctx->pc = 0x447640u;
        goto label_447640;
    }
    ctx->pc = 0x447638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x447640u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x447640u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x447640u; }
            if (ctx->pc != 0x447640u) { return; }
        }
        }
    }
    ctx->pc = 0x447640u;
label_447640:
    // 0x447640: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x447640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_447644:
    // 0x447644: 0x26700094  addiu       $s0, $s3, 0x94
    ctx->pc = 0x447644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 148));
label_447648:
    // 0x447648: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x447648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_44764c:
    // 0x44764c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44764cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_447650:
    // 0x447650: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x447650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_447654:
    // 0x447654: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x447654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_447658:
    // 0x447658: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x447658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44765c:
    // 0x44765c: 0xc074f30  jal         func_1D3CC0
label_447660:
    if (ctx->pc == 0x447660u) {
        ctx->pc = 0x447660u;
            // 0x447660: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x447664u;
        goto label_447664;
    }
    ctx->pc = 0x44765Cu;
    SET_GPR_U32(ctx, 31, 0x447664u);
    ctx->pc = 0x447660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44765Cu;
            // 0x447660: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447664u; }
        if (ctx->pc != 0x447664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447664u; }
        if (ctx->pc != 0x447664u) { return; }
    }
    ctx->pc = 0x447664u;
label_447664:
    // 0x447664: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x447664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_447668:
    // 0x447668: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x447668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44766c:
    // 0x44766c: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x44766cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_447670:
    // 0x447670: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x447670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_447674:
    // 0x447674: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x447674u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_447678:
    // 0x447678: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_44767c:
    if (ctx->pc == 0x44767Cu) {
        ctx->pc = 0x44767Cu;
            // 0x44767c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x447680u;
        goto label_447680;
    }
    ctx->pc = 0x447678u;
    {
        const bool branch_taken_0x447678 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x447678) {
            ctx->pc = 0x44767Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x447678u;
            // 0x44767c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44768Cu;
            goto label_44768c;
        }
    }
    ctx->pc = 0x447680u;
label_447680:
    // 0x447680: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x447680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_447684:
    // 0x447684: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x447684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_447688:
    // 0x447688: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x447688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44768c:
    // 0x44768c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44768cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_447690:
    // 0x447690: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x447690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_447694:
    // 0x447694: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x447694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_447698:
    // 0x447698: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x447698u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_44769c:
    // 0x44769c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4476a0:
    if (ctx->pc == 0x4476A0u) {
        ctx->pc = 0x4476A0u;
            // 0x4476a0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4476A4u;
        goto label_4476a4;
    }
    ctx->pc = 0x44769Cu;
    {
        const bool branch_taken_0x44769c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44769c) {
            ctx->pc = 0x4476A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44769Cu;
            // 0x4476a0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4476B0u;
            goto label_4476b0;
        }
    }
    ctx->pc = 0x4476A4u;
label_4476a4:
    // 0x4476a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4476a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4476a8:
    // 0x4476a8: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4476a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4476ac:
    // 0x4476ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4476acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4476b0:
    // 0x4476b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4476b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4476b4:
    // 0x4476b4: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4476b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4476b8:
    // 0x4476b8: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4476b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4476bc:
    // 0x4476bc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4476bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4476c0:
    // 0x4476c0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4476c4:
    if (ctx->pc == 0x4476C4u) {
        ctx->pc = 0x4476C4u;
            // 0x4476c4: 0x8e460020  lw          $a2, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->pc = 0x4476C8u;
        goto label_4476c8;
    }
    ctx->pc = 0x4476C0u;
    {
        const bool branch_taken_0x4476c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4476c0) {
            ctx->pc = 0x4476C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4476C0u;
            // 0x4476c4: 0x8e460020  lw          $a2, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4476D4u;
            goto label_4476d4;
        }
    }
    ctx->pc = 0x4476C8u;
label_4476c8:
    // 0x4476c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4476c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4476cc:
    // 0x4476cc: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4476ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4476d0:
    // 0x4476d0: 0x8e460020  lw          $a2, 0x20($s2)
    ctx->pc = 0x4476d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_4476d4:
    // 0x4476d4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x4476d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4476d8:
    // 0x4476d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4476d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4476dc:
    // 0x4476dc: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x4476dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_4476e0:
    // 0x4476e0: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x4476e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_4476e4:
    // 0x4476e4: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x4476e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_4476e8:
    // 0x4476e8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4476e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_4476ec:
    // 0x4476ec: 0xc0751b8  jal         func_1D46E0
label_4476f0:
    if (ctx->pc == 0x4476F0u) {
        ctx->pc = 0x4476F0u;
            // 0x4476f0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4476F4u;
        goto label_4476f4;
    }
    ctx->pc = 0x4476ECu;
    SET_GPR_U32(ctx, 31, 0x4476F4u);
    ctx->pc = 0x4476F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4476ECu;
            // 0x4476f0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4476F4u; }
        if (ctx->pc != 0x4476F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4476F4u; }
        if (ctx->pc != 0x4476F4u) { return; }
    }
    ctx->pc = 0x4476F4u;
label_4476f4:
    // 0x4476f4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4476f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4476f8:
    // 0x4476f8: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4476f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4476fc:
    // 0x4476fc: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x4476fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_447700:
    // 0x447700: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_447704:
    if (ctx->pc == 0x447704u) {
        ctx->pc = 0x447708u;
        goto label_447708;
    }
    ctx->pc = 0x447700u;
    {
        const bool branch_taken_0x447700 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x447700) {
            ctx->pc = 0x447710u;
            goto label_447710;
        }
    }
    ctx->pc = 0x447708u;
label_447708:
    // 0x447708: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x447708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44770c:
    // 0x44770c: 0xac71e3c8  sw          $s1, -0x1C38($v1)
    ctx->pc = 0x44770cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 17));
label_447710:
    // 0x447710: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x447710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_447714:
    // 0x447714: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x447714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_447718:
    // 0x447718: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x447718u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_44771c:
    // 0x44771c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_447720:
    if (ctx->pc == 0x447720u) {
        ctx->pc = 0x447720u;
            // 0x447720: 0xae70009c  sw          $s0, 0x9C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 16));
        ctx->pc = 0x447724u;
        goto label_447724;
    }
    ctx->pc = 0x44771Cu;
    {
        const bool branch_taken_0x44771c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44771c) {
            ctx->pc = 0x447720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44771Cu;
            // 0x447720: 0xae70009c  sw          $s0, 0x9C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x447730u;
            goto label_447730;
        }
    }
    ctx->pc = 0x447724u;
label_447724:
    // 0x447724: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x447724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_447728:
    // 0x447728: 0xac71e3d0  sw          $s1, -0x1C30($v1)
    ctx->pc = 0x447728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 17));
label_44772c:
    // 0x44772c: 0xae70009c  sw          $s0, 0x9C($s3)
    ctx->pc = 0x44772cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 16));
label_447730:
    // 0x447730: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x447730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_447734:
    // 0x447734: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x447734u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_447738:
    // 0x447738: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x447738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44773c:
    // 0x44773c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44773cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_447740:
    // 0x447740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x447740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_447744:
    // 0x447744: 0x3e00008  jr          $ra
label_447748:
    if (ctx->pc == 0x447748u) {
        ctx->pc = 0x447748u;
            // 0x447748: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x44774Cu;
        goto label_44774c;
    }
    ctx->pc = 0x447744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x447748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x447744u;
            // 0x447748: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44774Cu;
label_44774c:
    // 0x44774c: 0x0  nop
    ctx->pc = 0x44774cu;
    // NOP
label_447750:
    // 0x447750: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x447750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_447754:
    // 0x447754: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x447754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_447758:
    // 0x447758: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x447758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_44775c:
    // 0x44775c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x44775cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_447760:
    // 0x447760: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x447760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_447764:
    // 0x447764: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x447764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_447768:
    // 0x447768: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x447768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_44776c:
    // 0x44776c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x44776cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_447770:
    // 0x447770: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x447770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_447774:
    // 0x447774: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x447774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_447778:
    // 0x447778: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x447778u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_44777c:
    // 0x44777c: 0x8c960070  lw          $s6, 0x70($a0)
    ctx->pc = 0x44777cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_447780:
    // 0x447780: 0x12c0004b  beqz        $s6, . + 4 + (0x4B << 2)
label_447784:
    if (ctx->pc == 0x447784u) {
        ctx->pc = 0x447784u;
            // 0x447784: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x447788u;
        goto label_447788;
    }
    ctx->pc = 0x447780u;
    {
        const bool branch_taken_0x447780 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x447784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x447780u;
            // 0x447784: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447780) {
            ctx->pc = 0x4478B0u;
            goto label_4478b0;
        }
    }
    ctx->pc = 0x447788u;
label_447788:
    // 0x447788: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x447788u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44778c:
    // 0x44778c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x44778cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_447790:
    // 0x447790: 0x8ee20074  lw          $v0, 0x74($s7)
    ctx->pc = 0x447790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 116)));
label_447794:
    // 0x447794: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x447794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_447798:
    // 0x447798: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x447798u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44779c:
    // 0x44779c: 0x26340070  addiu       $s4, $s1, 0x70
    ctx->pc = 0x44779cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_4477a0:
    // 0x4477a0: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x4477a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
label_4477a4:
    // 0x4477a4: 0xc112108  jal         func_448420
label_4477a8:
    if (ctx->pc == 0x4477A8u) {
        ctx->pc = 0x4477A8u;
            // 0x4477a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4477ACu;
        goto label_4477ac;
    }
    ctx->pc = 0x4477A4u;
    SET_GPR_U32(ctx, 31, 0x4477ACu);
    ctx->pc = 0x4477A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4477A4u;
            // 0x4477a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x448420u;
    if (runtime->hasFunction(0x448420u)) {
        auto targetFn = runtime->lookupFunction(0x448420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4477ACu; }
        if (ctx->pc != 0x4477ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00448420_0x448420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4477ACu; }
        if (ctx->pc != 0x4477ACu) { return; }
    }
    ctx->pc = 0x4477ACu;
label_4477ac:
    // 0x4477ac: 0xc1120f4  jal         func_4483D0
label_4477b0:
    if (ctx->pc == 0x4477B0u) {
        ctx->pc = 0x4477B0u;
            // 0x4477b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4477B4u;
        goto label_4477b4;
    }
    ctx->pc = 0x4477ACu;
    SET_GPR_U32(ctx, 31, 0x4477B4u);
    ctx->pc = 0x4477B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4477ACu;
            // 0x4477b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4483D0u;
    if (runtime->hasFunction(0x4483D0u)) {
        auto targetFn = runtime->lookupFunction(0x4483D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4477B4u; }
        if (ctx->pc != 0x4477B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004483D0_0x4483d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4477B4u; }
        if (ctx->pc != 0x4477B4u) { return; }
    }
    ctx->pc = 0x4477B4u;
label_4477b4:
    // 0x4477b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4477b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4477b8:
    // 0x4477b8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4477b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_4477bc:
    // 0x4477bc: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x4477bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4477c0:
    // 0x4477c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4477c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4477c4:
    // 0x4477c4: 0x0  nop
    ctx->pc = 0x4477c4u;
    // NOP
label_4477c8:
    // 0x4477c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4477c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4477cc:
    // 0x4477cc: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4477d0:
    if (ctx->pc == 0x4477D0u) {
        ctx->pc = 0x4477D0u;
            // 0x4477d0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4477D4u;
        goto label_4477d4;
    }
    ctx->pc = 0x4477CCu;
    {
        const bool branch_taken_0x4477cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4477cc) {
            ctx->pc = 0x4477D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4477CCu;
            // 0x4477d0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4477E4u;
            goto label_4477e4;
        }
    }
    ctx->pc = 0x4477D4u;
label_4477d4:
    // 0x4477d4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4477d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4477d8:
    // 0x4477d8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4477d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4477dc:
    // 0x4477dc: 0x10000007  b           . + 4 + (0x7 << 2)
label_4477e0:
    if (ctx->pc == 0x4477E0u) {
        ctx->pc = 0x4477E0u;
            // 0x4477e0: 0xc6210034  lwc1        $f1, 0x34($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x4477E4u;
        goto label_4477e4;
    }
    ctx->pc = 0x4477DCu;
    {
        const bool branch_taken_0x4477dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4477E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4477DCu;
            // 0x4477e0: 0xc6210034  lwc1        $f1, 0x34($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4477dc) {
            ctx->pc = 0x4477FCu;
            goto label_4477fc;
        }
    }
    ctx->pc = 0x4477E4u;
label_4477e4:
    // 0x4477e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4477e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4477e8:
    // 0x4477e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4477e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4477ec:
    // 0x4477ec: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4477ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4477f0:
    // 0x4477f0: 0x0  nop
    ctx->pc = 0x4477f0u;
    // NOP
label_4477f4:
    // 0x4477f4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4477f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_4477f8:
    // 0x4477f8: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x4477f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4477fc:
    // 0x4477fc: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x4477fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_447800:
    // 0x447800: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x447800u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_447804:
    // 0x447804: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x447804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_447808:
    // 0x447808: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x447808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_44780c:
    // 0x44780c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x44780cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_447810:
    // 0x447810: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x447810u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_447814:
    // 0x447814: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x447814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_447818:
    // 0x447818: 0x0  nop
    ctx->pc = 0x447818u;
    // NOP
label_44781c:
    // 0x44781c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x44781cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_447820:
    // 0x447820: 0xc62d0038  lwc1        $f13, 0x38($s1)
    ctx->pc = 0x447820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_447824:
    // 0x447824: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x447824u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_447828:
    // 0x447828: 0x0  nop
    ctx->pc = 0x447828u;
    // NOP
label_44782c:
    // 0x44782c: 0x0  nop
    ctx->pc = 0x44782cu;
    // NOP
label_447830:
    // 0x447830: 0xc122b58  jal         func_48AD60
label_447834:
    if (ctx->pc == 0x447834u) {
        ctx->pc = 0x447838u;
        goto label_447838;
    }
    ctx->pc = 0x447830u;
    SET_GPR_U32(ctx, 31, 0x447838u);
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447838u; }
        if (ctx->pc != 0x447838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447838u; }
        if (ctx->pc != 0x447838u) { return; }
    }
    ctx->pc = 0x447838u;
label_447838:
    // 0x447838: 0xc6740150  lwc1        $f20, 0x150($s3)
    ctx->pc = 0x447838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_44783c:
    // 0x44783c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x44783cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_447840:
    // 0x447840: 0x26700030  addiu       $s0, $s3, 0x30
    ctx->pc = 0x447840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_447844:
    // 0x447844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x447844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_447848:
    // 0x447848: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x447848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_44784c:
    // 0x44784c: 0xc0d87e0  jal         func_361F80
label_447850:
    if (ctx->pc == 0x447850u) {
        ctx->pc = 0x447850u;
            // 0x447850: 0xae620150  sw          $v0, 0x150($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 336), GPR_U32(ctx, 2));
        ctx->pc = 0x447854u;
        goto label_447854;
    }
    ctx->pc = 0x44784Cu;
    SET_GPR_U32(ctx, 31, 0x447854u);
    ctx->pc = 0x447850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44784Cu;
            // 0x447850: 0xae620150  sw          $v0, 0x150($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361F80u;
    if (runtime->hasFunction(0x361F80u)) {
        auto targetFn = runtime->lookupFunction(0x361F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447854u; }
        if (ctx->pc != 0x447854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361F80_0x361f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447854u; }
        if (ctx->pc != 0x447854u) { return; }
    }
    ctx->pc = 0x447854u;
label_447854:
    // 0x447854: 0x26640200  addiu       $a0, $s3, 0x200
    ctx->pc = 0x447854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
label_447858:
    // 0x447858: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x447858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_44785c:
    // 0x44785c: 0xc04cc04  jal         func_133010
label_447860:
    if (ctx->pc == 0x447860u) {
        ctx->pc = 0x447860u;
            // 0x447860: 0xe6140120  swc1        $f20, 0x120($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
        ctx->pc = 0x447864u;
        goto label_447864;
    }
    ctx->pc = 0x44785Cu;
    SET_GPR_U32(ctx, 31, 0x447864u);
    ctx->pc = 0x447860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44785Cu;
            // 0x447860: 0xe6140120  swc1        $f20, 0x120($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447864u; }
        if (ctx->pc != 0x447864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447864u; }
        if (ctx->pc != 0x447864u) { return; }
    }
    ctx->pc = 0x447864u;
label_447864:
    // 0x447864: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x447864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_447868:
    // 0x447868: 0xc04cc04  jal         func_133010
label_44786c:
    if (ctx->pc == 0x44786Cu) {
        ctx->pc = 0x44786Cu;
            // 0x44786c: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x447870u;
        goto label_447870;
    }
    ctx->pc = 0x447868u;
    SET_GPR_U32(ctx, 31, 0x447870u);
    ctx->pc = 0x44786Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447868u;
            // 0x44786c: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447870u; }
        if (ctx->pc != 0x447870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447870u; }
        if (ctx->pc != 0x447870u) { return; }
    }
    ctx->pc = 0x447870u;
label_447870:
    // 0x447870: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x447870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_447874:
    // 0x447874: 0xc04c720  jal         func_131C80
label_447878:
    if (ctx->pc == 0x447878u) {
        ctx->pc = 0x447878u;
            // 0x447878: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x44787Cu;
        goto label_44787c;
    }
    ctx->pc = 0x447874u;
    SET_GPR_U32(ctx, 31, 0x44787Cu);
    ctx->pc = 0x447878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447874u;
            // 0x447878: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44787Cu; }
        if (ctx->pc != 0x44787Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44787Cu; }
        if (ctx->pc != 0x44787Cu) { return; }
    }
    ctx->pc = 0x44787Cu;
label_44787c:
    // 0x44787c: 0xae7101c8  sw          $s1, 0x1C8($s3)
    ctx->pc = 0x44787cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 456), GPR_U32(ctx, 17));
label_447880:
    // 0x447880: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x447880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_447884:
    // 0x447884: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x447884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_447888:
    // 0x447888: 0xae6301c0  sw          $v1, 0x1C0($s3)
    ctx->pc = 0x447888u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 448), GPR_U32(ctx, 3));
label_44788c:
    // 0x44788c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x44788cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_447890:
    // 0x447890: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x447890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_447894:
    // 0x447894: 0xc112100  jal         func_448400
label_447898:
    if (ctx->pc == 0x447898u) {
        ctx->pc = 0x447898u;
            // 0x447898: 0xae6201c4  sw          $v0, 0x1C4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 452), GPR_U32(ctx, 2));
        ctx->pc = 0x44789Cu;
        goto label_44789c;
    }
    ctx->pc = 0x447894u;
    SET_GPR_U32(ctx, 31, 0x44789Cu);
    ctx->pc = 0x447898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447894u;
            // 0x447898: 0xae6201c4  sw          $v0, 0x1C4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x448400u;
    if (runtime->hasFunction(0x448400u)) {
        auto targetFn = runtime->lookupFunction(0x448400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44789Cu; }
        if (ctx->pc != 0x44789Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00448400_0x448400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44789Cu; }
        if (ctx->pc != 0x44789Cu) { return; }
    }
    ctx->pc = 0x44789Cu;
label_44789c:
    // 0x44789c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x44789cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_4478a0:
    // 0x4478a0: 0x2b6182b  sltu        $v1, $s5, $s6
    ctx->pc = 0x4478a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_4478a4:
    // 0x4478a4: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
label_4478a8:
    if (ctx->pc == 0x4478A8u) {
        ctx->pc = 0x4478A8u;
            // 0x4478a8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4478ACu;
        goto label_4478ac;
    }
    ctx->pc = 0x4478A4u;
    {
        const bool branch_taken_0x4478a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4478A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4478A4u;
            // 0x4478a8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4478a4) {
            ctx->pc = 0x447790u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_447790;
        }
    }
    ctx->pc = 0x4478ACu;
label_4478ac:
    // 0x4478ac: 0x0  nop
    ctx->pc = 0x4478acu;
    // NOP
label_4478b0:
    // 0x4478b0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4478b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4478b4:
    // 0x4478b4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4478b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4478b8:
    // 0x4478b8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4478b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4478bc:
    // 0x4478bc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4478bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4478c0:
    // 0x4478c0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4478c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4478c4:
    // 0x4478c4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4478c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4478c8:
    // 0x4478c8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4478c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4478cc:
    // 0x4478cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4478ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4478d0:
    // 0x4478d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4478d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4478d4:
    // 0x4478d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4478d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4478d8:
    // 0x4478d8: 0x3e00008  jr          $ra
label_4478dc:
    if (ctx->pc == 0x4478DCu) {
        ctx->pc = 0x4478DCu;
            // 0x4478dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4478E0u;
        goto label_fallthrough_0x4478d8;
    }
    ctx->pc = 0x4478D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4478DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4478D8u;
            // 0x4478dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4478d8:
    ctx->pc = 0x4478E0u;
}
