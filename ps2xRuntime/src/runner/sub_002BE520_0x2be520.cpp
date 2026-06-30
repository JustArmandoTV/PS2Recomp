#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BE520
// Address: 0x2be520 - 0x2be830
void sub_002BE520_0x2be520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE520_0x2be520");
#endif

    switch (ctx->pc) {
        case 0x2be520u: goto label_2be520;
        case 0x2be524u: goto label_2be524;
        case 0x2be528u: goto label_2be528;
        case 0x2be52cu: goto label_2be52c;
        case 0x2be530u: goto label_2be530;
        case 0x2be534u: goto label_2be534;
        case 0x2be538u: goto label_2be538;
        case 0x2be53cu: goto label_2be53c;
        case 0x2be540u: goto label_2be540;
        case 0x2be544u: goto label_2be544;
        case 0x2be548u: goto label_2be548;
        case 0x2be54cu: goto label_2be54c;
        case 0x2be550u: goto label_2be550;
        case 0x2be554u: goto label_2be554;
        case 0x2be558u: goto label_2be558;
        case 0x2be55cu: goto label_2be55c;
        case 0x2be560u: goto label_2be560;
        case 0x2be564u: goto label_2be564;
        case 0x2be568u: goto label_2be568;
        case 0x2be56cu: goto label_2be56c;
        case 0x2be570u: goto label_2be570;
        case 0x2be574u: goto label_2be574;
        case 0x2be578u: goto label_2be578;
        case 0x2be57cu: goto label_2be57c;
        case 0x2be580u: goto label_2be580;
        case 0x2be584u: goto label_2be584;
        case 0x2be588u: goto label_2be588;
        case 0x2be58cu: goto label_2be58c;
        case 0x2be590u: goto label_2be590;
        case 0x2be594u: goto label_2be594;
        case 0x2be598u: goto label_2be598;
        case 0x2be59cu: goto label_2be59c;
        case 0x2be5a0u: goto label_2be5a0;
        case 0x2be5a4u: goto label_2be5a4;
        case 0x2be5a8u: goto label_2be5a8;
        case 0x2be5acu: goto label_2be5ac;
        case 0x2be5b0u: goto label_2be5b0;
        case 0x2be5b4u: goto label_2be5b4;
        case 0x2be5b8u: goto label_2be5b8;
        case 0x2be5bcu: goto label_2be5bc;
        case 0x2be5c0u: goto label_2be5c0;
        case 0x2be5c4u: goto label_2be5c4;
        case 0x2be5c8u: goto label_2be5c8;
        case 0x2be5ccu: goto label_2be5cc;
        case 0x2be5d0u: goto label_2be5d0;
        case 0x2be5d4u: goto label_2be5d4;
        case 0x2be5d8u: goto label_2be5d8;
        case 0x2be5dcu: goto label_2be5dc;
        case 0x2be5e0u: goto label_2be5e0;
        case 0x2be5e4u: goto label_2be5e4;
        case 0x2be5e8u: goto label_2be5e8;
        case 0x2be5ecu: goto label_2be5ec;
        case 0x2be5f0u: goto label_2be5f0;
        case 0x2be5f4u: goto label_2be5f4;
        case 0x2be5f8u: goto label_2be5f8;
        case 0x2be5fcu: goto label_2be5fc;
        case 0x2be600u: goto label_2be600;
        case 0x2be604u: goto label_2be604;
        case 0x2be608u: goto label_2be608;
        case 0x2be60cu: goto label_2be60c;
        case 0x2be610u: goto label_2be610;
        case 0x2be614u: goto label_2be614;
        case 0x2be618u: goto label_2be618;
        case 0x2be61cu: goto label_2be61c;
        case 0x2be620u: goto label_2be620;
        case 0x2be624u: goto label_2be624;
        case 0x2be628u: goto label_2be628;
        case 0x2be62cu: goto label_2be62c;
        case 0x2be630u: goto label_2be630;
        case 0x2be634u: goto label_2be634;
        case 0x2be638u: goto label_2be638;
        case 0x2be63cu: goto label_2be63c;
        case 0x2be640u: goto label_2be640;
        case 0x2be644u: goto label_2be644;
        case 0x2be648u: goto label_2be648;
        case 0x2be64cu: goto label_2be64c;
        case 0x2be650u: goto label_2be650;
        case 0x2be654u: goto label_2be654;
        case 0x2be658u: goto label_2be658;
        case 0x2be65cu: goto label_2be65c;
        case 0x2be660u: goto label_2be660;
        case 0x2be664u: goto label_2be664;
        case 0x2be668u: goto label_2be668;
        case 0x2be66cu: goto label_2be66c;
        case 0x2be670u: goto label_2be670;
        case 0x2be674u: goto label_2be674;
        case 0x2be678u: goto label_2be678;
        case 0x2be67cu: goto label_2be67c;
        case 0x2be680u: goto label_2be680;
        case 0x2be684u: goto label_2be684;
        case 0x2be688u: goto label_2be688;
        case 0x2be68cu: goto label_2be68c;
        case 0x2be690u: goto label_2be690;
        case 0x2be694u: goto label_2be694;
        case 0x2be698u: goto label_2be698;
        case 0x2be69cu: goto label_2be69c;
        case 0x2be6a0u: goto label_2be6a0;
        case 0x2be6a4u: goto label_2be6a4;
        case 0x2be6a8u: goto label_2be6a8;
        case 0x2be6acu: goto label_2be6ac;
        case 0x2be6b0u: goto label_2be6b0;
        case 0x2be6b4u: goto label_2be6b4;
        case 0x2be6b8u: goto label_2be6b8;
        case 0x2be6bcu: goto label_2be6bc;
        case 0x2be6c0u: goto label_2be6c0;
        case 0x2be6c4u: goto label_2be6c4;
        case 0x2be6c8u: goto label_2be6c8;
        case 0x2be6ccu: goto label_2be6cc;
        case 0x2be6d0u: goto label_2be6d0;
        case 0x2be6d4u: goto label_2be6d4;
        case 0x2be6d8u: goto label_2be6d8;
        case 0x2be6dcu: goto label_2be6dc;
        case 0x2be6e0u: goto label_2be6e0;
        case 0x2be6e4u: goto label_2be6e4;
        case 0x2be6e8u: goto label_2be6e8;
        case 0x2be6ecu: goto label_2be6ec;
        case 0x2be6f0u: goto label_2be6f0;
        case 0x2be6f4u: goto label_2be6f4;
        case 0x2be6f8u: goto label_2be6f8;
        case 0x2be6fcu: goto label_2be6fc;
        case 0x2be700u: goto label_2be700;
        case 0x2be704u: goto label_2be704;
        case 0x2be708u: goto label_2be708;
        case 0x2be70cu: goto label_2be70c;
        case 0x2be710u: goto label_2be710;
        case 0x2be714u: goto label_2be714;
        case 0x2be718u: goto label_2be718;
        case 0x2be71cu: goto label_2be71c;
        case 0x2be720u: goto label_2be720;
        case 0x2be724u: goto label_2be724;
        case 0x2be728u: goto label_2be728;
        case 0x2be72cu: goto label_2be72c;
        case 0x2be730u: goto label_2be730;
        case 0x2be734u: goto label_2be734;
        case 0x2be738u: goto label_2be738;
        case 0x2be73cu: goto label_2be73c;
        case 0x2be740u: goto label_2be740;
        case 0x2be744u: goto label_2be744;
        case 0x2be748u: goto label_2be748;
        case 0x2be74cu: goto label_2be74c;
        case 0x2be750u: goto label_2be750;
        case 0x2be754u: goto label_2be754;
        case 0x2be758u: goto label_2be758;
        case 0x2be75cu: goto label_2be75c;
        case 0x2be760u: goto label_2be760;
        case 0x2be764u: goto label_2be764;
        case 0x2be768u: goto label_2be768;
        case 0x2be76cu: goto label_2be76c;
        case 0x2be770u: goto label_2be770;
        case 0x2be774u: goto label_2be774;
        case 0x2be778u: goto label_2be778;
        case 0x2be77cu: goto label_2be77c;
        case 0x2be780u: goto label_2be780;
        case 0x2be784u: goto label_2be784;
        case 0x2be788u: goto label_2be788;
        case 0x2be78cu: goto label_2be78c;
        case 0x2be790u: goto label_2be790;
        case 0x2be794u: goto label_2be794;
        case 0x2be798u: goto label_2be798;
        case 0x2be79cu: goto label_2be79c;
        case 0x2be7a0u: goto label_2be7a0;
        case 0x2be7a4u: goto label_2be7a4;
        case 0x2be7a8u: goto label_2be7a8;
        case 0x2be7acu: goto label_2be7ac;
        case 0x2be7b0u: goto label_2be7b0;
        case 0x2be7b4u: goto label_2be7b4;
        case 0x2be7b8u: goto label_2be7b8;
        case 0x2be7bcu: goto label_2be7bc;
        case 0x2be7c0u: goto label_2be7c0;
        case 0x2be7c4u: goto label_2be7c4;
        case 0x2be7c8u: goto label_2be7c8;
        case 0x2be7ccu: goto label_2be7cc;
        case 0x2be7d0u: goto label_2be7d0;
        case 0x2be7d4u: goto label_2be7d4;
        case 0x2be7d8u: goto label_2be7d8;
        case 0x2be7dcu: goto label_2be7dc;
        case 0x2be7e0u: goto label_2be7e0;
        case 0x2be7e4u: goto label_2be7e4;
        case 0x2be7e8u: goto label_2be7e8;
        case 0x2be7ecu: goto label_2be7ec;
        case 0x2be7f0u: goto label_2be7f0;
        case 0x2be7f4u: goto label_2be7f4;
        case 0x2be7f8u: goto label_2be7f8;
        case 0x2be7fcu: goto label_2be7fc;
        case 0x2be800u: goto label_2be800;
        case 0x2be804u: goto label_2be804;
        case 0x2be808u: goto label_2be808;
        case 0x2be80cu: goto label_2be80c;
        case 0x2be810u: goto label_2be810;
        case 0x2be814u: goto label_2be814;
        case 0x2be818u: goto label_2be818;
        case 0x2be81cu: goto label_2be81c;
        case 0x2be820u: goto label_2be820;
        case 0x2be824u: goto label_2be824;
        case 0x2be828u: goto label_2be828;
        case 0x2be82cu: goto label_2be82c;
        default: break;
    }

    ctx->pc = 0x2be520u;

label_2be520:
    // 0x2be520: 0x80788fc  j           func_1E23F0
label_2be524:
    if (ctx->pc == 0x2BE524u) {
        ctx->pc = 0x2BE528u;
        goto label_2be528;
    }
    ctx->pc = 0x2BE520u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2BE528u;
label_2be528:
    // 0x2be528: 0x0  nop
    ctx->pc = 0x2be528u;
    // NOP
label_2be52c:
    // 0x2be52c: 0x0  nop
    ctx->pc = 0x2be52cu;
    // NOP
label_2be530:
    // 0x2be530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2be530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2be534:
    // 0x2be534: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2be534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2be538:
    // 0x2be538: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2be538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2be53c:
    // 0x2be53c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2be53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2be540:
    // 0x2be540: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2be540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2be544:
    // 0x2be544: 0x12200041  beqz        $s1, . + 4 + (0x41 << 2)
label_2be548:
    if (ctx->pc == 0x2BE548u) {
        ctx->pc = 0x2BE548u;
            // 0x2be548: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BE54Cu;
        goto label_2be54c;
    }
    ctx->pc = 0x2BE544u;
    {
        const bool branch_taken_0x2be544 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE544u;
            // 0x2be548: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be544) {
            ctx->pc = 0x2BE64Cu;
            goto label_2be64c;
        }
    }
    ctx->pc = 0x2BE54Cu;
label_2be54c:
    // 0x2be54c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2be54cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2be550:
    // 0x2be550: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2be550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2be554:
    // 0x2be554: 0x24635b10  addiu       $v1, $v1, 0x5B10
    ctx->pc = 0x2be554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23312));
label_2be558:
    // 0x2be558: 0x24425b50  addiu       $v0, $v0, 0x5B50
    ctx->pc = 0x2be558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23376));
label_2be55c:
    // 0x2be55c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2be55cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2be560:
    // 0x2be560: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2be560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2be564:
    // 0x2be564: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2be564u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2be568:
    // 0x2be568: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2be568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2be56c:
    // 0x2be56c: 0x320f809  jalr        $t9
label_2be570:
    if (ctx->pc == 0x2BE570u) {
        ctx->pc = 0x2BE574u;
        goto label_2be574;
    }
    ctx->pc = 0x2BE56Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BE574u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BE574u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BE574u; }
            if (ctx->pc != 0x2BE574u) { return; }
        }
        }
    }
    ctx->pc = 0x2BE574u;
label_2be574:
    // 0x2be574: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x2be574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2be578:
    // 0x2be578: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_2be57c:
    if (ctx->pc == 0x2BE57Cu) {
        ctx->pc = 0x2BE580u;
        goto label_2be580;
    }
    ctx->pc = 0x2BE578u;
    {
        const bool branch_taken_0x2be578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be578) {
            ctx->pc = 0x2BE5B4u;
            goto label_2be5b4;
        }
    }
    ctx->pc = 0x2BE580u;
label_2be580:
    // 0x2be580: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2be580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2be584:
    // 0x2be584: 0x24421c68  addiu       $v0, $v0, 0x1C68
    ctx->pc = 0x2be584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7272));
label_2be588:
    // 0x2be588: 0xc0b453c  jal         func_2D14F0
label_2be58c:
    if (ctx->pc == 0x2BE58Cu) {
        ctx->pc = 0x2BE58Cu;
            // 0x2be58c: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x2BE590u;
        goto label_2be590;
    }
    ctx->pc = 0x2BE588u;
    SET_GPR_U32(ctx, 31, 0x2BE590u);
    ctx->pc = 0x2BE58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE588u;
            // 0x2be58c: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D14F0u;
    if (runtime->hasFunction(0x2D14F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D14F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE590u; }
        if (ctx->pc != 0x2BE590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D14F0_0x2d14f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE590u; }
        if (ctx->pc != 0x2BE590u) { return; }
    }
    ctx->pc = 0x2BE590u;
label_2be590:
    // 0x2be590: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2be590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2be594:
    // 0x2be594: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2be598:
    if (ctx->pc == 0x2BE598u) {
        ctx->pc = 0x2BE59Cu;
        goto label_2be59c;
    }
    ctx->pc = 0x2BE594u;
    {
        const bool branch_taken_0x2be594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be594) {
            ctx->pc = 0x2BE5B4u;
            goto label_2be5b4;
        }
    }
    ctx->pc = 0x2BE59Cu;
label_2be59c:
    // 0x2be59c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2be59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2be5a0:
    // 0x2be5a0: 0x24422428  addiu       $v0, $v0, 0x2428
    ctx->pc = 0x2be5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9256));
label_2be5a4:
    // 0x2be5a4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2be5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2be5a8:
    // 0x2be5a8: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x2be5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
label_2be5ac:
    // 0x2be5ac: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x2be5acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
label_2be5b0:
    // 0x2be5b0: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x2be5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
label_2be5b4:
    // 0x2be5b4: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_2be5b8:
    if (ctx->pc == 0x2BE5B8u) {
        ctx->pc = 0x2BE5B8u;
            // 0x2be5b8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BE5BCu;
        goto label_2be5bc;
    }
    ctx->pc = 0x2BE5B4u;
    {
        const bool branch_taken_0x2be5b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be5b4) {
            ctx->pc = 0x2BE5B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE5B4u;
            // 0x2be5b8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BE638u;
            goto label_2be638;
        }
    }
    ctx->pc = 0x2BE5BCu;
label_2be5bc:
    // 0x2be5bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2be5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2be5c0:
    // 0x2be5c0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2be5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2be5c4:
    // 0x2be5c4: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x2be5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_2be5c8:
    // 0x2be5c8: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x2be5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_2be5cc:
    // 0x2be5cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2be5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2be5d0:
    // 0x2be5d0: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x2be5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2be5d4:
    // 0x2be5d4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2be5d8:
    if (ctx->pc == 0x2BE5D8u) {
        ctx->pc = 0x2BE5D8u;
            // 0x2be5d8: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x2BE5DCu;
        goto label_2be5dc;
    }
    ctx->pc = 0x2BE5D4u;
    {
        const bool branch_taken_0x2be5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE5D4u;
            // 0x2be5d8: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be5d4) {
            ctx->pc = 0x2BE610u;
            goto label_2be610;
        }
    }
    ctx->pc = 0x2BE5DCu;
label_2be5dc:
    // 0x2be5dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2be5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2be5e0:
    // 0x2be5e0: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x2be5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_2be5e4:
    // 0x2be5e4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2be5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2be5e8:
    // 0x2be5e8: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2be5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2be5ec:
    // 0x2be5ec: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2be5f0:
    if (ctx->pc == 0x2BE5F0u) {
        ctx->pc = 0x2BE5F4u;
        goto label_2be5f4;
    }
    ctx->pc = 0x2BE5ECu;
    {
        const bool branch_taken_0x2be5ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be5ec) {
            ctx->pc = 0x2BE610u;
            goto label_2be610;
        }
    }
    ctx->pc = 0x2BE5F4u;
label_2be5f4:
    // 0x2be5f4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2be5f8:
    if (ctx->pc == 0x2BE5F8u) {
        ctx->pc = 0x2BE5F8u;
            // 0x2be5f8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x2BE5FCu;
        goto label_2be5fc;
    }
    ctx->pc = 0x2BE5F4u;
    {
        const bool branch_taken_0x2be5f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be5f4) {
            ctx->pc = 0x2BE5F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE5F4u;
            // 0x2be5f8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BE610u;
            goto label_2be610;
        }
    }
    ctx->pc = 0x2BE5FCu;
label_2be5fc:
    // 0x2be5fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2be5fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2be600:
    // 0x2be600: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2be600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2be604:
    // 0x2be604: 0x320f809  jalr        $t9
label_2be608:
    if (ctx->pc == 0x2BE608u) {
        ctx->pc = 0x2BE608u;
            // 0x2be608: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BE60Cu;
        goto label_2be60c;
    }
    ctx->pc = 0x2BE604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BE60Cu);
        ctx->pc = 0x2BE608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE604u;
            // 0x2be608: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BE60Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BE60Cu; }
            if (ctx->pc != 0x2BE60Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2BE60Cu;
label_2be60c:
    // 0x2be60c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2be60cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_2be610:
    // 0x2be610: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2be614:
    if (ctx->pc == 0x2BE614u) {
        ctx->pc = 0x2BE618u;
        goto label_2be618;
    }
    ctx->pc = 0x2BE610u;
    {
        const bool branch_taken_0x2be610 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be610) {
            ctx->pc = 0x2BE634u;
            goto label_2be634;
        }
    }
    ctx->pc = 0x2BE618u;
label_2be618:
    // 0x2be618: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2be618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2be61c:
    // 0x2be61c: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2be61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2be620:
    // 0x2be620: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2be624:
    if (ctx->pc == 0x2BE624u) {
        ctx->pc = 0x2BE624u;
            // 0x2be624: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2BE628u;
        goto label_2be628;
    }
    ctx->pc = 0x2BE620u;
    {
        const bool branch_taken_0x2be620 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE620u;
            // 0x2be624: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be620) {
            ctx->pc = 0x2BE634u;
            goto label_2be634;
        }
    }
    ctx->pc = 0x2BE628u;
label_2be628:
    // 0x2be628: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2be628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2be62c:
    // 0x2be62c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2be62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2be630:
    // 0x2be630: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2be630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2be634:
    // 0x2be634: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2be634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2be638:
    // 0x2be638: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2be638u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2be63c:
    // 0x2be63c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2be640:
    if (ctx->pc == 0x2BE640u) {
        ctx->pc = 0x2BE640u;
            // 0x2be640: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BE644u;
        goto label_2be644;
    }
    ctx->pc = 0x2BE63Cu;
    {
        const bool branch_taken_0x2be63c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2be63c) {
            ctx->pc = 0x2BE640u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE63Cu;
            // 0x2be640: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BE650u;
            goto label_2be650;
        }
    }
    ctx->pc = 0x2BE644u;
label_2be644:
    // 0x2be644: 0xc0400a8  jal         func_1002A0
label_2be648:
    if (ctx->pc == 0x2BE648u) {
        ctx->pc = 0x2BE648u;
            // 0x2be648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BE64Cu;
        goto label_2be64c;
    }
    ctx->pc = 0x2BE644u;
    SET_GPR_U32(ctx, 31, 0x2BE64Cu);
    ctx->pc = 0x2BE648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE644u;
            // 0x2be648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE64Cu; }
        if (ctx->pc != 0x2BE64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE64Cu; }
        if (ctx->pc != 0x2BE64Cu) { return; }
    }
    ctx->pc = 0x2BE64Cu;
label_2be64c:
    // 0x2be64c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2be64cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2be650:
    // 0x2be650: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2be650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2be654:
    // 0x2be654: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2be654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2be658:
    // 0x2be658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2be658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2be65c:
    // 0x2be65c: 0x3e00008  jr          $ra
label_2be660:
    if (ctx->pc == 0x2BE660u) {
        ctx->pc = 0x2BE660u;
            // 0x2be660: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BE664u;
        goto label_2be664;
    }
    ctx->pc = 0x2BE65Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE65Cu;
            // 0x2be660: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BE664u;
label_2be664:
    // 0x2be664: 0x0  nop
    ctx->pc = 0x2be664u;
    // NOP
label_2be668:
    // 0x2be668: 0x0  nop
    ctx->pc = 0x2be668u;
    // NOP
label_2be66c:
    // 0x2be66c: 0x0  nop
    ctx->pc = 0x2be66cu;
    // NOP
label_2be670:
    // 0x2be670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2be670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2be674:
    // 0x2be674: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2be674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2be678:
    // 0x2be678: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2be678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2be67c:
    // 0x2be67c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2be67cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2be680:
    // 0x2be680: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2be680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2be684:
    // 0x2be684: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2be684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2be688:
    // 0x2be688: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2be688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2be68c:
    // 0x2be68c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2be68cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2be690:
    // 0x2be690: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2be690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_2be694:
    // 0x2be694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2be694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2be698:
    // 0x2be698: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2be698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2be69c:
    // 0x2be69c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2be69cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2be6a0:
    // 0x2be6a0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2be6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_2be6a4:
    // 0x2be6a4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2be6a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2be6a8:
    // 0x2be6a8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2be6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_2be6ac:
    // 0x2be6ac: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2be6acu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2be6b0:
    // 0x2be6b0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2be6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_2be6b4:
    // 0x2be6b4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2be6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_2be6b8:
    // 0x2be6b8: 0xc04cbd8  jal         func_132F60
label_2be6bc:
    if (ctx->pc == 0x2BE6BCu) {
        ctx->pc = 0x2BE6BCu;
            // 0x2be6bc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x2BE6C0u;
        goto label_2be6c0;
    }
    ctx->pc = 0x2BE6B8u;
    SET_GPR_U32(ctx, 31, 0x2BE6C0u);
    ctx->pc = 0x2BE6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE6B8u;
            // 0x2be6bc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE6C0u; }
        if (ctx->pc != 0x2BE6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE6C0u; }
        if (ctx->pc != 0x2BE6C0u) { return; }
    }
    ctx->pc = 0x2BE6C0u;
label_2be6c0:
    // 0x2be6c0: 0xc04c968  jal         func_1325A0
label_2be6c4:
    if (ctx->pc == 0x2BE6C4u) {
        ctx->pc = 0x2BE6C4u;
            // 0x2be6c4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x2BE6C8u;
        goto label_2be6c8;
    }
    ctx->pc = 0x2BE6C0u;
    SET_GPR_U32(ctx, 31, 0x2BE6C8u);
    ctx->pc = 0x2BE6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE6C0u;
            // 0x2be6c4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE6C8u; }
        if (ctx->pc != 0x2BE6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE6C8u; }
        if (ctx->pc != 0x2BE6C8u) { return; }
    }
    ctx->pc = 0x2BE6C8u;
label_2be6c8:
    // 0x2be6c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2be6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2be6cc:
    // 0x2be6cc: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2be6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_2be6d0:
    // 0x2be6d0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2be6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_2be6d4:
    // 0x2be6d4: 0x3c0c006a  lui         $t4, 0x6A
    ctx->pc = 0x2be6d4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)106 << 16));
label_2be6d8:
    // 0x2be6d8: 0x3c0b006a  lui         $t3, 0x6A
    ctx->pc = 0x2be6d8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)106 << 16));
label_2be6dc:
    // 0x2be6dc: 0x3c0a006a  lui         $t2, 0x6A
    ctx->pc = 0x2be6dcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)106 << 16));
label_2be6e0:
    // 0x2be6e0: 0x3c09006b  lui         $t1, 0x6B
    ctx->pc = 0x2be6e0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)107 << 16));
label_2be6e4:
    // 0x2be6e4: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x2be6e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
label_2be6e8:
    // 0x2be6e8: 0x8c4d0788  lw          $t5, 0x788($v0)
    ctx->pc = 0x2be6e8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_2be6ec:
    // 0x2be6ec: 0x24c6c560  addiu       $a2, $a2, -0x3AA0
    ctx->pc = 0x2be6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952288));
label_2be6f0:
    // 0x2be6f0: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x2be6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_2be6f4:
    // 0x2be6f4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2be6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2be6f8:
    // 0x2be6f8: 0x258c2660  addiu       $t4, $t4, 0x2660
    ctx->pc = 0x2be6f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 9824));
label_2be6fc:
    // 0x2be6fc: 0x256b2670  addiu       $t3, $t3, 0x2670
    ctx->pc = 0x2be6fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 9840));
label_2be700:
    // 0x2be700: 0xcd6821  addu        $t5, $a2, $t5
    ctx->pc = 0x2be700u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
label_2be704:
    // 0x2be704: 0x254a26b0  addiu       $t2, $t2, 0x26B0
    ctx->pc = 0x2be704u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 9904));
label_2be708:
    // 0x2be708: 0x91ad0000  lbu         $t5, 0x0($t5)
    ctx->pc = 0x2be708u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_2be70c:
    // 0x2be70c: 0x25295b10  addiu       $t1, $t1, 0x5B10
    ctx->pc = 0x2be70cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 23312));
label_2be710:
    // 0x2be710: 0x25085b50  addiu       $t0, $t0, 0x5B50
    ctx->pc = 0x2be710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 23376));
label_2be714:
    // 0x2be714: 0x24e72428  addiu       $a3, $a3, 0x2428
    ctx->pc = 0x2be714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9256));
label_2be718:
    // 0x2be718: 0x24631c68  addiu       $v1, $v1, 0x1C68
    ctx->pc = 0x2be718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7272));
label_2be71c:
    // 0x2be71c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2be71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2be720:
    // 0x2be720: 0xa20d004d  sb          $t5, 0x4D($s0)
    ctx->pc = 0x2be720u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 13));
label_2be724:
    // 0x2be724: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2be724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_2be728:
    // 0x2be728: 0xae0c0054  sw          $t4, 0x54($s0)
    ctx->pc = 0x2be728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 12));
label_2be72c:
    // 0x2be72c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2be72cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2be730:
    // 0x2be730: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2be730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_2be734:
    // 0x2be734: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2be734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2be738:
    // 0x2be738: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x2be738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
label_2be73c:
    // 0x2be73c: 0xae0a0054  sw          $t2, 0x54($s0)
    ctx->pc = 0x2be73cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 10));
label_2be740:
    // 0x2be740: 0xae090000  sw          $t1, 0x0($s0)
    ctx->pc = 0x2be740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 9));
label_2be744:
    // 0x2be744: 0xae080054  sw          $t0, 0x54($s0)
    ctx->pc = 0x2be744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 8));
label_2be748:
    // 0x2be748: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2be748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_2be74c:
    // 0x2be74c: 0xae070064  sw          $a3, 0x64($s0)
    ctx->pc = 0x2be74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
label_2be750:
    // 0x2be750: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x2be750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_2be754:
    // 0x2be754: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x2be754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_2be758:
    // 0x2be758: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x2be758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_2be75c:
    // 0x2be75c: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2be75cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
label_2be760:
    // 0x2be760: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x2be760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
label_2be764:
    // 0x2be764: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x2be764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_2be768:
    // 0x2be768: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x2be768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
label_2be76c:
    // 0x2be76c: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x2be76cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_2be770:
    // 0x2be770: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x2be770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_2be774:
    // 0x2be774: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x2be774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
label_2be778:
    // 0x2be778: 0xc04a576  jal         func_1295D8
label_2be77c:
    if (ctx->pc == 0x2BE77Cu) {
        ctx->pc = 0x2BE77Cu;
            // 0x2be77c: 0xae0000ac  sw          $zero, 0xAC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
        ctx->pc = 0x2BE780u;
        goto label_2be780;
    }
    ctx->pc = 0x2BE778u;
    SET_GPR_U32(ctx, 31, 0x2BE780u);
    ctx->pc = 0x2BE77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE778u;
            // 0x2be77c: 0xae0000ac  sw          $zero, 0xAC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE780u; }
        if (ctx->pc != 0x2BE780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE780u; }
        if (ctx->pc != 0x2BE780u) { return; }
    }
    ctx->pc = 0x2BE780u;
label_2be780:
    // 0x2be780: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x2be780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_2be784:
    // 0x2be784: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2be784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2be788:
    // 0x2be788: 0xc04a576  jal         func_1295D8
label_2be78c:
    if (ctx->pc == 0x2BE78Cu) {
        ctx->pc = 0x2BE78Cu;
            // 0x2be78c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2BE790u;
        goto label_2be790;
    }
    ctx->pc = 0x2BE788u;
    SET_GPR_U32(ctx, 31, 0x2BE790u);
    ctx->pc = 0x2BE78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE788u;
            // 0x2be78c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE790u; }
        if (ctx->pc != 0x2BE790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE790u; }
        if (ctx->pc != 0x2BE790u) { return; }
    }
    ctx->pc = 0x2BE790u;
label_2be790:
    // 0x2be790: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2be790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2be794:
    // 0x2be794: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2be794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2be798:
    // 0x2be798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2be798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2be79c:
    // 0x2be79c: 0x3e00008  jr          $ra
label_2be7a0:
    if (ctx->pc == 0x2BE7A0u) {
        ctx->pc = 0x2BE7A0u;
            // 0x2be7a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2BE7A4u;
        goto label_2be7a4;
    }
    ctx->pc = 0x2BE79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE79Cu;
            // 0x2be7a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BE7A4u;
label_2be7a4:
    // 0x2be7a4: 0x0  nop
    ctx->pc = 0x2be7a4u;
    // NOP
label_2be7a8:
    // 0x2be7a8: 0x0  nop
    ctx->pc = 0x2be7a8u;
    // NOP
label_2be7ac:
    // 0x2be7ac: 0x0  nop
    ctx->pc = 0x2be7acu;
    // NOP
label_2be7b0:
    // 0x2be7b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2be7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2be7b4:
    // 0x2be7b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2be7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2be7b8:
    // 0x2be7b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2be7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2be7bc:
    // 0x2be7bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2be7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2be7c0:
    // 0x2be7c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2be7c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2be7c4:
    // 0x2be7c4: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_2be7c8:
    if (ctx->pc == 0x2BE7C8u) {
        ctx->pc = 0x2BE7C8u;
            // 0x2be7c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BE7CCu;
        goto label_2be7cc;
    }
    ctx->pc = 0x2BE7C4u;
    {
        const bool branch_taken_0x2be7c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE7C4u;
            // 0x2be7c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be7c4) {
            ctx->pc = 0x2BE814u;
            goto label_2be814;
        }
    }
    ctx->pc = 0x2BE7CCu;
label_2be7cc:
    // 0x2be7cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2be7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2be7d0:
    // 0x2be7d0: 0x24421c68  addiu       $v0, $v0, 0x1C68
    ctx->pc = 0x2be7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7272));
label_2be7d4:
    // 0x2be7d4: 0xc0b453c  jal         func_2D14F0
label_2be7d8:
    if (ctx->pc == 0x2BE7D8u) {
        ctx->pc = 0x2BE7D8u;
            // 0x2be7d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2BE7DCu;
        goto label_2be7dc;
    }
    ctx->pc = 0x2BE7D4u;
    SET_GPR_U32(ctx, 31, 0x2BE7DCu);
    ctx->pc = 0x2BE7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE7D4u;
            // 0x2be7d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D14F0u;
    if (runtime->hasFunction(0x2D14F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D14F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE7DCu; }
        if (ctx->pc != 0x2BE7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D14F0_0x2d14f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE7DCu; }
        if (ctx->pc != 0x2BE7DCu) { return; }
    }
    ctx->pc = 0x2BE7DCu;
label_2be7dc:
    // 0x2be7dc: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_2be7e0:
    if (ctx->pc == 0x2BE7E0u) {
        ctx->pc = 0x2BE7E0u;
            // 0x2be7e0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BE7E4u;
        goto label_2be7e4;
    }
    ctx->pc = 0x2BE7DCu;
    {
        const bool branch_taken_0x2be7dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be7dc) {
            ctx->pc = 0x2BE7E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE7DCu;
            // 0x2be7e0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BE800u;
            goto label_2be800;
        }
    }
    ctx->pc = 0x2BE7E4u;
label_2be7e4:
    // 0x2be7e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2be7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2be7e8:
    // 0x2be7e8: 0x24422428  addiu       $v0, $v0, 0x2428
    ctx->pc = 0x2be7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9256));
label_2be7ec:
    // 0x2be7ec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2be7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2be7f0:
    // 0x2be7f0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2be7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2be7f4:
    // 0x2be7f4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2be7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_2be7f8:
    // 0x2be7f8: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x2be7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_2be7fc:
    // 0x2be7fc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2be7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2be800:
    // 0x2be800: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2be800u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2be804:
    // 0x2be804: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2be808:
    if (ctx->pc == 0x2BE808u) {
        ctx->pc = 0x2BE808u;
            // 0x2be808: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BE80Cu;
        goto label_2be80c;
    }
    ctx->pc = 0x2BE804u;
    {
        const bool branch_taken_0x2be804 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2be804) {
            ctx->pc = 0x2BE808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE804u;
            // 0x2be808: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BE818u;
            goto label_2be818;
        }
    }
    ctx->pc = 0x2BE80Cu;
label_2be80c:
    // 0x2be80c: 0xc0400a8  jal         func_1002A0
label_2be810:
    if (ctx->pc == 0x2BE810u) {
        ctx->pc = 0x2BE810u;
            // 0x2be810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BE814u;
        goto label_2be814;
    }
    ctx->pc = 0x2BE80Cu;
    SET_GPR_U32(ctx, 31, 0x2BE814u);
    ctx->pc = 0x2BE810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE80Cu;
            // 0x2be810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE814u; }
        if (ctx->pc != 0x2BE814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE814u; }
        if (ctx->pc != 0x2BE814u) { return; }
    }
    ctx->pc = 0x2BE814u;
label_2be814:
    // 0x2be814: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2be814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2be818:
    // 0x2be818: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2be818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2be81c:
    // 0x2be81c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2be81cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2be820:
    // 0x2be820: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2be820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2be824:
    // 0x2be824: 0x3e00008  jr          $ra
label_2be828:
    if (ctx->pc == 0x2BE828u) {
        ctx->pc = 0x2BE828u;
            // 0x2be828: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BE82Cu;
        goto label_2be82c;
    }
    ctx->pc = 0x2BE824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE824u;
            // 0x2be828: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BE82Cu;
label_2be82c:
    // 0x2be82c: 0x0  nop
    ctx->pc = 0x2be82cu;
    // NOP
}
