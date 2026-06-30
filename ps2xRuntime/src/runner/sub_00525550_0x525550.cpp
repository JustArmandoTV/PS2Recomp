#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00525550
// Address: 0x525550 - 0x525790
void sub_00525550_0x525550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00525550_0x525550");
#endif

    switch (ctx->pc) {
        case 0x525550u: goto label_525550;
        case 0x525554u: goto label_525554;
        case 0x525558u: goto label_525558;
        case 0x52555cu: goto label_52555c;
        case 0x525560u: goto label_525560;
        case 0x525564u: goto label_525564;
        case 0x525568u: goto label_525568;
        case 0x52556cu: goto label_52556c;
        case 0x525570u: goto label_525570;
        case 0x525574u: goto label_525574;
        case 0x525578u: goto label_525578;
        case 0x52557cu: goto label_52557c;
        case 0x525580u: goto label_525580;
        case 0x525584u: goto label_525584;
        case 0x525588u: goto label_525588;
        case 0x52558cu: goto label_52558c;
        case 0x525590u: goto label_525590;
        case 0x525594u: goto label_525594;
        case 0x525598u: goto label_525598;
        case 0x52559cu: goto label_52559c;
        case 0x5255a0u: goto label_5255a0;
        case 0x5255a4u: goto label_5255a4;
        case 0x5255a8u: goto label_5255a8;
        case 0x5255acu: goto label_5255ac;
        case 0x5255b0u: goto label_5255b0;
        case 0x5255b4u: goto label_5255b4;
        case 0x5255b8u: goto label_5255b8;
        case 0x5255bcu: goto label_5255bc;
        case 0x5255c0u: goto label_5255c0;
        case 0x5255c4u: goto label_5255c4;
        case 0x5255c8u: goto label_5255c8;
        case 0x5255ccu: goto label_5255cc;
        case 0x5255d0u: goto label_5255d0;
        case 0x5255d4u: goto label_5255d4;
        case 0x5255d8u: goto label_5255d8;
        case 0x5255dcu: goto label_5255dc;
        case 0x5255e0u: goto label_5255e0;
        case 0x5255e4u: goto label_5255e4;
        case 0x5255e8u: goto label_5255e8;
        case 0x5255ecu: goto label_5255ec;
        case 0x5255f0u: goto label_5255f0;
        case 0x5255f4u: goto label_5255f4;
        case 0x5255f8u: goto label_5255f8;
        case 0x5255fcu: goto label_5255fc;
        case 0x525600u: goto label_525600;
        case 0x525604u: goto label_525604;
        case 0x525608u: goto label_525608;
        case 0x52560cu: goto label_52560c;
        case 0x525610u: goto label_525610;
        case 0x525614u: goto label_525614;
        case 0x525618u: goto label_525618;
        case 0x52561cu: goto label_52561c;
        case 0x525620u: goto label_525620;
        case 0x525624u: goto label_525624;
        case 0x525628u: goto label_525628;
        case 0x52562cu: goto label_52562c;
        case 0x525630u: goto label_525630;
        case 0x525634u: goto label_525634;
        case 0x525638u: goto label_525638;
        case 0x52563cu: goto label_52563c;
        case 0x525640u: goto label_525640;
        case 0x525644u: goto label_525644;
        case 0x525648u: goto label_525648;
        case 0x52564cu: goto label_52564c;
        case 0x525650u: goto label_525650;
        case 0x525654u: goto label_525654;
        case 0x525658u: goto label_525658;
        case 0x52565cu: goto label_52565c;
        case 0x525660u: goto label_525660;
        case 0x525664u: goto label_525664;
        case 0x525668u: goto label_525668;
        case 0x52566cu: goto label_52566c;
        case 0x525670u: goto label_525670;
        case 0x525674u: goto label_525674;
        case 0x525678u: goto label_525678;
        case 0x52567cu: goto label_52567c;
        case 0x525680u: goto label_525680;
        case 0x525684u: goto label_525684;
        case 0x525688u: goto label_525688;
        case 0x52568cu: goto label_52568c;
        case 0x525690u: goto label_525690;
        case 0x525694u: goto label_525694;
        case 0x525698u: goto label_525698;
        case 0x52569cu: goto label_52569c;
        case 0x5256a0u: goto label_5256a0;
        case 0x5256a4u: goto label_5256a4;
        case 0x5256a8u: goto label_5256a8;
        case 0x5256acu: goto label_5256ac;
        case 0x5256b0u: goto label_5256b0;
        case 0x5256b4u: goto label_5256b4;
        case 0x5256b8u: goto label_5256b8;
        case 0x5256bcu: goto label_5256bc;
        case 0x5256c0u: goto label_5256c0;
        case 0x5256c4u: goto label_5256c4;
        case 0x5256c8u: goto label_5256c8;
        case 0x5256ccu: goto label_5256cc;
        case 0x5256d0u: goto label_5256d0;
        case 0x5256d4u: goto label_5256d4;
        case 0x5256d8u: goto label_5256d8;
        case 0x5256dcu: goto label_5256dc;
        case 0x5256e0u: goto label_5256e0;
        case 0x5256e4u: goto label_5256e4;
        case 0x5256e8u: goto label_5256e8;
        case 0x5256ecu: goto label_5256ec;
        case 0x5256f0u: goto label_5256f0;
        case 0x5256f4u: goto label_5256f4;
        case 0x5256f8u: goto label_5256f8;
        case 0x5256fcu: goto label_5256fc;
        case 0x525700u: goto label_525700;
        case 0x525704u: goto label_525704;
        case 0x525708u: goto label_525708;
        case 0x52570cu: goto label_52570c;
        case 0x525710u: goto label_525710;
        case 0x525714u: goto label_525714;
        case 0x525718u: goto label_525718;
        case 0x52571cu: goto label_52571c;
        case 0x525720u: goto label_525720;
        case 0x525724u: goto label_525724;
        case 0x525728u: goto label_525728;
        case 0x52572cu: goto label_52572c;
        case 0x525730u: goto label_525730;
        case 0x525734u: goto label_525734;
        case 0x525738u: goto label_525738;
        case 0x52573cu: goto label_52573c;
        case 0x525740u: goto label_525740;
        case 0x525744u: goto label_525744;
        case 0x525748u: goto label_525748;
        case 0x52574cu: goto label_52574c;
        case 0x525750u: goto label_525750;
        case 0x525754u: goto label_525754;
        case 0x525758u: goto label_525758;
        case 0x52575cu: goto label_52575c;
        case 0x525760u: goto label_525760;
        case 0x525764u: goto label_525764;
        case 0x525768u: goto label_525768;
        case 0x52576cu: goto label_52576c;
        case 0x525770u: goto label_525770;
        case 0x525774u: goto label_525774;
        case 0x525778u: goto label_525778;
        case 0x52577cu: goto label_52577c;
        case 0x525780u: goto label_525780;
        case 0x525784u: goto label_525784;
        case 0x525788u: goto label_525788;
        case 0x52578cu: goto label_52578c;
        default: break;
    }

    ctx->pc = 0x525550u;

label_525550:
    // 0x525550: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x525550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_525554:
    // 0x525554: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x525554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_525558:
    // 0x525558: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x525558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_52555c:
    // 0x52555c: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x52555cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_525560:
    // 0x525560: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x525560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_525564:
    // 0x525564: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x525564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_525568:
    // 0x525568: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x525568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_52556c:
    // 0x52556c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x52556cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_525570:
    // 0x525570: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x525570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_525574:
    // 0x525574: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x525574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_525578:
    // 0x525578: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x525578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_52557c:
    // 0x52557c: 0x24a50e84  addiu       $a1, $a1, 0xE84
    ctx->pc = 0x52557cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3716));
label_525580:
    // 0x525580: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x525580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_525584:
    // 0x525584: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x525584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_525588:
    // 0x525588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x525588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52558c:
    // 0x52558c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x52558cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_525590:
    // 0x525590: 0x24900090  addiu       $s0, $a0, 0x90
    ctx->pc = 0x525590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_525594:
    // 0x525594: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x525594u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_525598:
    // 0x525598: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x525598u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_52559c:
    // 0x52559c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x52559cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_5255a0:
    // 0x5255a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x5255a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5255a4:
    // 0x5255a4: 0x14c30012  bne         $a2, $v1, . + 4 + (0x12 << 2)
label_5255a8:
    if (ctx->pc == 0x5255A8u) {
        ctx->pc = 0x5255A8u;
            // 0x5255a8: 0x8c930000  lw          $s3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x5255ACu;
        goto label_5255ac;
    }
    ctx->pc = 0x5255A4u;
    {
        const bool branch_taken_0x5255a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x5255A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5255A4u;
            // 0x5255a8: 0x8c930000  lw          $s3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5255a4) {
            ctx->pc = 0x5255F0u;
            goto label_5255f0;
        }
    }
    ctx->pc = 0x5255ACu;
label_5255ac:
    // 0x5255ac: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x5255acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_5255b0:
    // 0x5255b0: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_5255b4:
    if (ctx->pc == 0x5255B4u) {
        ctx->pc = 0x5255B4u;
            // 0x5255b4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x5255B8u;
        goto label_5255b8;
    }
    ctx->pc = 0x5255B0u;
    {
        const bool branch_taken_0x5255b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5255b0) {
            ctx->pc = 0x5255B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5255B0u;
            // 0x5255b4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5255D0u;
            goto label_5255d0;
        }
    }
    ctx->pc = 0x5255B8u;
label_5255b8:
    // 0x5255b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5255b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5255bc:
    // 0x5255bc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x5255bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_5255c0:
    // 0x5255c0: 0x320f809  jalr        $t9
label_5255c4:
    if (ctx->pc == 0x5255C4u) {
        ctx->pc = 0x5255C4u;
            // 0x5255c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5255C8u;
        goto label_5255c8;
    }
    ctx->pc = 0x5255C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5255C8u);
        ctx->pc = 0x5255C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5255C0u;
            // 0x5255c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5255C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5255C8u; }
            if (ctx->pc != 0x5255C8u) { return; }
        }
        }
    }
    ctx->pc = 0x5255C8u;
label_5255c8:
    // 0x5255c8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x5255c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_5255cc:
    // 0x5255cc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x5255ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_5255d0:
    // 0x5255d0: 0x50800066  beql        $a0, $zero, . + 4 + (0x66 << 2)
label_5255d4:
    if (ctx->pc == 0x5255D4u) {
        ctx->pc = 0x5255D4u;
            // 0x5255d4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x5255D8u;
        goto label_5255d8;
    }
    ctx->pc = 0x5255D0u;
    {
        const bool branch_taken_0x5255d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5255d0) {
            ctx->pc = 0x5255D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5255D0u;
            // 0x5255d4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52576Cu;
            goto label_52576c;
        }
    }
    ctx->pc = 0x5255D8u;
label_5255d8:
    // 0x5255d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5255d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5255dc:
    // 0x5255dc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x5255dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_5255e0:
    // 0x5255e0: 0x320f809  jalr        $t9
label_5255e4:
    if (ctx->pc == 0x5255E4u) {
        ctx->pc = 0x5255E4u;
            // 0x5255e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5255E8u;
        goto label_5255e8;
    }
    ctx->pc = 0x5255E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5255E8u);
        ctx->pc = 0x5255E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5255E0u;
            // 0x5255e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5255E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5255E8u; }
            if (ctx->pc != 0x5255E8u) { return; }
        }
        }
    }
    ctx->pc = 0x5255E8u;
label_5255e8:
    // 0x5255e8: 0x1000005f  b           . + 4 + (0x5F << 2)
label_5255ec:
    if (ctx->pc == 0x5255ECu) {
        ctx->pc = 0x5255ECu;
            // 0x5255ec: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x5255F0u;
        goto label_5255f0;
    }
    ctx->pc = 0x5255E8u;
    {
        const bool branch_taken_0x5255e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5255ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5255E8u;
            // 0x5255ec: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5255e8) {
            ctx->pc = 0x525768u;
            goto label_525768;
        }
    }
    ctx->pc = 0x5255F0u;
label_5255f0:
    // 0x5255f0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x5255f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_5255f4:
    // 0x5255f4: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_5255f8:
    if (ctx->pc == 0x5255F8u) {
        ctx->pc = 0x5255F8u;
            // 0x5255f8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x5255FCu;
        goto label_5255fc;
    }
    ctx->pc = 0x5255F4u;
    {
        const bool branch_taken_0x5255f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5255f4) {
            ctx->pc = 0x5255F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5255F4u;
            // 0x5255f8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x525628u;
            goto label_525628;
        }
    }
    ctx->pc = 0x5255FCu;
label_5255fc:
    // 0x5255fc: 0x8e630d6c  lw          $v1, 0xD6C($s3)
    ctx->pc = 0x5255fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3436)));
label_525600:
    // 0x525600: 0x8c85005c  lw          $a1, 0x5C($a0)
    ctx->pc = 0x525600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_525604:
    // 0x525604: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x525604u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_525608:
    // 0x525608: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_52560c:
    if (ctx->pc == 0x52560Cu) {
        ctx->pc = 0x525610u;
        goto label_525610;
    }
    ctx->pc = 0x525608u;
    {
        const bool branch_taken_0x525608 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x525608) {
            ctx->pc = 0x525624u;
            goto label_525624;
        }
    }
    ctx->pc = 0x525610u;
label_525610:
    // 0x525610: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x525610u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_525614:
    // 0x525614: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x525614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_525618:
    // 0x525618: 0x320f809  jalr        $t9
label_52561c:
    if (ctx->pc == 0x52561Cu) {
        ctx->pc = 0x52561Cu;
            // 0x52561c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x525620u;
        goto label_525620;
    }
    ctx->pc = 0x525618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x525620u);
        ctx->pc = 0x52561Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525618u;
            // 0x52561c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x525620u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x525620u; }
            if (ctx->pc != 0x525620u) { return; }
        }
        }
    }
    ctx->pc = 0x525620u;
label_525620:
    // 0x525620: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x525620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_525624:
    // 0x525624: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x525624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_525628:
    // 0x525628: 0x54600020  bnel        $v1, $zero, . + 4 + (0x20 << 2)
label_52562c:
    if (ctx->pc == 0x52562Cu) {
        ctx->pc = 0x52562Cu;
            // 0x52562c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x525630u;
        goto label_525630;
    }
    ctx->pc = 0x525628u;
    {
        const bool branch_taken_0x525628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x525628) {
            ctx->pc = 0x52562Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x525628u;
            // 0x52562c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5256ACu;
            goto label_5256ac;
        }
    }
    ctx->pc = 0x525630u;
label_525630:
    // 0x525630: 0xc040180  jal         func_100600
label_525634:
    if (ctx->pc == 0x525634u) {
        ctx->pc = 0x525634u;
            // 0x525634: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x525638u;
        goto label_525638;
    }
    ctx->pc = 0x525630u;
    SET_GPR_U32(ctx, 31, 0x525638u);
    ctx->pc = 0x525634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525630u;
            // 0x525634: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525638u; }
        if (ctx->pc != 0x525638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525638u; }
        if (ctx->pc != 0x525638u) { return; }
    }
    ctx->pc = 0x525638u;
label_525638:
    // 0x525638: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_52563c:
    if (ctx->pc == 0x52563Cu) {
        ctx->pc = 0x52563Cu;
            // 0x52563c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x525640u;
        goto label_525640;
    }
    ctx->pc = 0x525638u;
    {
        const bool branch_taken_0x525638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x52563Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525638u;
            // 0x52563c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x525638) {
            ctx->pc = 0x5256A4u;
            goto label_5256a4;
        }
    }
    ctx->pc = 0x525640u;
label_525640:
    // 0x525640: 0x8e630d6c  lw          $v1, 0xD6C($s3)
    ctx->pc = 0x525640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3436)));
label_525644:
    // 0x525644: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x525644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_525648:
    // 0x525648: 0x829211aa  lb          $s2, 0x11AA($s4)
    ctx->pc = 0x525648u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4522)));
label_52564c:
    // 0x52564c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x52564cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_525650:
    // 0x525650: 0x34458a92  ori         $a1, $v0, 0x8A92
    ctx->pc = 0x525650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
label_525654:
    // 0x525654: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x525654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_525658:
    // 0x525658: 0x90710010  lbu         $s1, 0x10($v1)
    ctx->pc = 0x525658u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_52565c:
    // 0x52565c: 0xc10ca68  jal         func_4329A0
label_525660:
    if (ctx->pc == 0x525660u) {
        ctx->pc = 0x525660u;
            // 0x525660: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x525664u;
        goto label_525664;
    }
    ctx->pc = 0x52565Cu;
    SET_GPR_U32(ctx, 31, 0x525664u);
    ctx->pc = 0x525660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52565Cu;
            // 0x525660: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525664u; }
        if (ctx->pc != 0x525664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x525664u; }
        if (ctx->pc != 0x525664u) { return; }
    }
    ctx->pc = 0x525664u;
label_525664:
    // 0x525664: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x525664u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_525668:
    // 0x525668: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x525668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_52566c:
    // 0x52566c: 0x24c6ceb0  addiu       $a2, $a2, -0x3150
    ctx->pc = 0x52566cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954672));
label_525670:
    // 0x525670: 0x12263c  dsll32      $a0, $s2, 24
    ctx->pc = 0x525670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 24));
label_525674:
    // 0x525674: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x525674u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
label_525678:
    // 0x525678: 0x24a55420  addiu       $a1, $a1, 0x5420
    ctx->pc = 0x525678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21536));
label_52567c:
    // 0x52567c: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x52567cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
label_525680:
    // 0x525680: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x525680u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
label_525684:
    // 0x525684: 0x24c653e0  addiu       $a2, $a2, 0x53E0
    ctx->pc = 0x525684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21472));
label_525688:
    // 0x525688: 0x266502c0  addiu       $a1, $s3, 0x2C0
    ctx->pc = 0x525688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
label_52568c:
    // 0x52568c: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x52568cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
label_525690:
    // 0x525690: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x525690u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_525694:
    // 0x525694: 0xaea50054  sw          $a1, 0x54($s5)
    ctx->pc = 0x525694u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 5));
label_525698:
    // 0x525698: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x525698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_52569c:
    // 0x52569c: 0xaea40058  sw          $a0, 0x58($s5)
    ctx->pc = 0x52569cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 4));
label_5256a0:
    // 0x5256a0: 0xaea3005c  sw          $v1, 0x5C($s5)
    ctx->pc = 0x5256a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 3));
label_5256a4:
    // 0x5256a4: 0xae150004  sw          $s5, 0x4($s0)
    ctx->pc = 0x5256a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 21));
label_5256a8:
    // 0x5256a8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x5256a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_5256ac:
    // 0x5256ac: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_5256b0:
    if (ctx->pc == 0x5256B0u) {
        ctx->pc = 0x5256B0u;
            // 0x5256b0: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x5256B4u;
        goto label_5256b4;
    }
    ctx->pc = 0x5256ACu;
    {
        const bool branch_taken_0x5256ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5256ac) {
            ctx->pc = 0x5256B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5256ACu;
            // 0x5256b0: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5256E0u;
            goto label_5256e0;
        }
    }
    ctx->pc = 0x5256B4u;
label_5256b4:
    // 0x5256b4: 0x8e630d6c  lw          $v1, 0xD6C($s3)
    ctx->pc = 0x5256b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3436)));
label_5256b8:
    // 0x5256b8: 0x8c850064  lw          $a1, 0x64($a0)
    ctx->pc = 0x5256b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_5256bc:
    // 0x5256bc: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x5256bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_5256c0:
    // 0x5256c0: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_5256c4:
    if (ctx->pc == 0x5256C4u) {
        ctx->pc = 0x5256C8u;
        goto label_5256c8;
    }
    ctx->pc = 0x5256C0u;
    {
        const bool branch_taken_0x5256c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5256c0) {
            ctx->pc = 0x5256DCu;
            goto label_5256dc;
        }
    }
    ctx->pc = 0x5256C8u;
label_5256c8:
    // 0x5256c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5256c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5256cc:
    // 0x5256cc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x5256ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_5256d0:
    // 0x5256d0: 0x320f809  jalr        $t9
label_5256d4:
    if (ctx->pc == 0x5256D4u) {
        ctx->pc = 0x5256D4u;
            // 0x5256d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5256D8u;
        goto label_5256d8;
    }
    ctx->pc = 0x5256D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5256D8u);
        ctx->pc = 0x5256D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5256D0u;
            // 0x5256d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5256D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5256D8u; }
            if (ctx->pc != 0x5256D8u) { return; }
        }
        }
    }
    ctx->pc = 0x5256D8u;
label_5256d8:
    // 0x5256d8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x5256d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_5256dc:
    // 0x5256dc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x5256dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_5256e0:
    // 0x5256e0: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
label_5256e4:
    if (ctx->pc == 0x5256E4u) {
        ctx->pc = 0x5256E8u;
        goto label_5256e8;
    }
    ctx->pc = 0x5256E0u;
    {
        const bool branch_taken_0x5256e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5256e0) {
            ctx->pc = 0x525768u;
            goto label_525768;
        }
    }
    ctx->pc = 0x5256E8u;
label_5256e8:
    // 0x5256e8: 0xc040180  jal         func_100600
label_5256ec:
    if (ctx->pc == 0x5256ECu) {
        ctx->pc = 0x5256ECu;
            // 0x5256ec: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x5256F0u;
        goto label_5256f0;
    }
    ctx->pc = 0x5256E8u;
    SET_GPR_U32(ctx, 31, 0x5256F0u);
    ctx->pc = 0x5256ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5256E8u;
            // 0x5256ec: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5256F0u; }
        if (ctx->pc != 0x5256F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5256F0u; }
        if (ctx->pc != 0x5256F0u) { return; }
    }
    ctx->pc = 0x5256F0u;
label_5256f0:
    // 0x5256f0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_5256f4:
    if (ctx->pc == 0x5256F4u) {
        ctx->pc = 0x5256F4u;
            // 0x5256f4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5256F8u;
        goto label_5256f8;
    }
    ctx->pc = 0x5256F0u;
    {
        const bool branch_taken_0x5256f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5256F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5256F0u;
            // 0x5256f4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5256f0) {
            ctx->pc = 0x525764u;
            goto label_525764;
        }
    }
    ctx->pc = 0x5256F8u;
label_5256f8:
    // 0x5256f8: 0x8e830d6c  lw          $v1, 0xD6C($s4)
    ctx->pc = 0x5256f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3436)));
label_5256fc:
    // 0x5256fc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x5256fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_525700:
    // 0x525700: 0x827211aa  lb          $s2, 0x11AA($s3)
    ctx->pc = 0x525700u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4522)));
label_525704:
    // 0x525704: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x525704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_525708:
    // 0x525708: 0x34458a92  ori         $a1, $v0, 0x8A92
    ctx->pc = 0x525708u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
label_52570c:
    // 0x52570c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x52570cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_525710:
    // 0x525710: 0x90710010  lbu         $s1, 0x10($v1)
    ctx->pc = 0x525710u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_525714:
    // 0x525714: 0xc10ca68  jal         func_4329A0
label_525718:
    if (ctx->pc == 0x525718u) {
        ctx->pc = 0x525718u;
            // 0x525718: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x52571Cu;
        goto label_52571c;
    }
    ctx->pc = 0x525714u;
    SET_GPR_U32(ctx, 31, 0x52571Cu);
    ctx->pc = 0x525718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x525714u;
            // 0x525718: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52571Cu; }
        if (ctx->pc != 0x52571Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52571Cu; }
        if (ctx->pc != 0x52571Cu) { return; }
    }
    ctx->pc = 0x52571Cu;
label_52571c:
    // 0x52571c: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x52571cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_525720:
    // 0x525720: 0x12263c  dsll32      $a0, $s2, 24
    ctx->pc = 0x525720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 24));
label_525724:
    // 0x525724: 0x24c6ceb0  addiu       $a2, $a2, -0x3150
    ctx->pc = 0x525724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954672));
label_525728:
    // 0x525728: 0x266502c0  addiu       $a1, $s3, 0x2C0
    ctx->pc = 0x525728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
label_52572c:
    // 0x52572c: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x52572cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
label_525730:
    // 0x525730: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x525730u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_525734:
    // 0x525734: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x525734u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
label_525738:
    // 0x525738: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x525738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_52573c:
    // 0x52573c: 0x24c65420  addiu       $a2, $a2, 0x5420
    ctx->pc = 0x52573cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21536));
label_525740:
    // 0x525740: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x525740u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
label_525744:
    // 0x525744: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x525744u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
label_525748:
    // 0x525748: 0x24c65360  addiu       $a2, $a2, 0x5360
    ctx->pc = 0x525748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21344));
label_52574c:
    // 0x52574c: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x52574cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
label_525750:
    // 0x525750: 0xaea50054  sw          $a1, 0x54($s5)
    ctx->pc = 0x525750u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 5));
label_525754:
    // 0x525754: 0xaea40058  sw          $a0, 0x58($s5)
    ctx->pc = 0x525754u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 4));
label_525758:
    // 0x525758: 0xaea0005c  sw          $zero, 0x5C($s5)
    ctx->pc = 0x525758u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 0));
label_52575c:
    // 0x52575c: 0xaea00060  sw          $zero, 0x60($s5)
    ctx->pc = 0x52575cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 0));
label_525760:
    // 0x525760: 0xaea30064  sw          $v1, 0x64($s5)
    ctx->pc = 0x525760u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 3));
label_525764:
    // 0x525764: 0xae150008  sw          $s5, 0x8($s0)
    ctx->pc = 0x525764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 21));
label_525768:
    // 0x525768: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x525768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_52576c:
    // 0x52576c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x52576cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_525770:
    // 0x525770: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x525770u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_525774:
    // 0x525774: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x525774u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_525778:
    // 0x525778: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x525778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_52577c:
    // 0x52577c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52577cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_525780:
    // 0x525780: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x525780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_525784:
    // 0x525784: 0x3e00008  jr          $ra
label_525788:
    if (ctx->pc == 0x525788u) {
        ctx->pc = 0x525788u;
            // 0x525788: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x52578Cu;
        goto label_52578c;
    }
    ctx->pc = 0x525784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x525788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525784u;
            // 0x525788: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52578Cu;
label_52578c:
    // 0x52578c: 0x0  nop
    ctx->pc = 0x52578cu;
    // NOP
}
