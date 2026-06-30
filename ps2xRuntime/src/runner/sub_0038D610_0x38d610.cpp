#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038D610
// Address: 0x38d610 - 0x38d780
void sub_0038D610_0x38d610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D610_0x38d610");
#endif

    switch (ctx->pc) {
        case 0x38d610u: goto label_38d610;
        case 0x38d614u: goto label_38d614;
        case 0x38d618u: goto label_38d618;
        case 0x38d61cu: goto label_38d61c;
        case 0x38d620u: goto label_38d620;
        case 0x38d624u: goto label_38d624;
        case 0x38d628u: goto label_38d628;
        case 0x38d62cu: goto label_38d62c;
        case 0x38d630u: goto label_38d630;
        case 0x38d634u: goto label_38d634;
        case 0x38d638u: goto label_38d638;
        case 0x38d63cu: goto label_38d63c;
        case 0x38d640u: goto label_38d640;
        case 0x38d644u: goto label_38d644;
        case 0x38d648u: goto label_38d648;
        case 0x38d64cu: goto label_38d64c;
        case 0x38d650u: goto label_38d650;
        case 0x38d654u: goto label_38d654;
        case 0x38d658u: goto label_38d658;
        case 0x38d65cu: goto label_38d65c;
        case 0x38d660u: goto label_38d660;
        case 0x38d664u: goto label_38d664;
        case 0x38d668u: goto label_38d668;
        case 0x38d66cu: goto label_38d66c;
        case 0x38d670u: goto label_38d670;
        case 0x38d674u: goto label_38d674;
        case 0x38d678u: goto label_38d678;
        case 0x38d67cu: goto label_38d67c;
        case 0x38d680u: goto label_38d680;
        case 0x38d684u: goto label_38d684;
        case 0x38d688u: goto label_38d688;
        case 0x38d68cu: goto label_38d68c;
        case 0x38d690u: goto label_38d690;
        case 0x38d694u: goto label_38d694;
        case 0x38d698u: goto label_38d698;
        case 0x38d69cu: goto label_38d69c;
        case 0x38d6a0u: goto label_38d6a0;
        case 0x38d6a4u: goto label_38d6a4;
        case 0x38d6a8u: goto label_38d6a8;
        case 0x38d6acu: goto label_38d6ac;
        case 0x38d6b0u: goto label_38d6b0;
        case 0x38d6b4u: goto label_38d6b4;
        case 0x38d6b8u: goto label_38d6b8;
        case 0x38d6bcu: goto label_38d6bc;
        case 0x38d6c0u: goto label_38d6c0;
        case 0x38d6c4u: goto label_38d6c4;
        case 0x38d6c8u: goto label_38d6c8;
        case 0x38d6ccu: goto label_38d6cc;
        case 0x38d6d0u: goto label_38d6d0;
        case 0x38d6d4u: goto label_38d6d4;
        case 0x38d6d8u: goto label_38d6d8;
        case 0x38d6dcu: goto label_38d6dc;
        case 0x38d6e0u: goto label_38d6e0;
        case 0x38d6e4u: goto label_38d6e4;
        case 0x38d6e8u: goto label_38d6e8;
        case 0x38d6ecu: goto label_38d6ec;
        case 0x38d6f0u: goto label_38d6f0;
        case 0x38d6f4u: goto label_38d6f4;
        case 0x38d6f8u: goto label_38d6f8;
        case 0x38d6fcu: goto label_38d6fc;
        case 0x38d700u: goto label_38d700;
        case 0x38d704u: goto label_38d704;
        case 0x38d708u: goto label_38d708;
        case 0x38d70cu: goto label_38d70c;
        case 0x38d710u: goto label_38d710;
        case 0x38d714u: goto label_38d714;
        case 0x38d718u: goto label_38d718;
        case 0x38d71cu: goto label_38d71c;
        case 0x38d720u: goto label_38d720;
        case 0x38d724u: goto label_38d724;
        case 0x38d728u: goto label_38d728;
        case 0x38d72cu: goto label_38d72c;
        case 0x38d730u: goto label_38d730;
        case 0x38d734u: goto label_38d734;
        case 0x38d738u: goto label_38d738;
        case 0x38d73cu: goto label_38d73c;
        case 0x38d740u: goto label_38d740;
        case 0x38d744u: goto label_38d744;
        case 0x38d748u: goto label_38d748;
        case 0x38d74cu: goto label_38d74c;
        case 0x38d750u: goto label_38d750;
        case 0x38d754u: goto label_38d754;
        case 0x38d758u: goto label_38d758;
        case 0x38d75cu: goto label_38d75c;
        case 0x38d760u: goto label_38d760;
        case 0x38d764u: goto label_38d764;
        case 0x38d768u: goto label_38d768;
        case 0x38d76cu: goto label_38d76c;
        case 0x38d770u: goto label_38d770;
        case 0x38d774u: goto label_38d774;
        case 0x38d778u: goto label_38d778;
        case 0x38d77cu: goto label_38d77c;
        default: break;
    }

    ctx->pc = 0x38d610u;

label_38d610:
    // 0x38d610: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38d610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_38d614:
    // 0x38d614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38d614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38d618:
    // 0x38d618: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x38d618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_38d61c:
    // 0x38d61c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38d61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38d620:
    // 0x38d620: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38d620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38d624:
    // 0x38d624: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38d624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38d628:
    // 0x38d628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38d628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38d62c:
    // 0x38d62c: 0xac820084  sw          $v0, 0x84($a0)
    ctx->pc = 0x38d62cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
label_38d630:
    // 0x38d630: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x38d630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38d634:
    // 0x38d634: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38d634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38d638:
    // 0x38d638: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x38d638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
label_38d63c:
    // 0x38d63c: 0xac8200ac  sw          $v0, 0xAC($a0)
    ctx->pc = 0x38d63cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 2));
label_38d640:
    // 0x38d640: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x38d640u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38d644:
    // 0x38d644: 0x8f390088  lw          $t9, 0x88($t9)
    ctx->pc = 0x38d644u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 136)));
label_38d648:
    // 0x38d648: 0x320f809  jalr        $t9
label_38d64c:
    if (ctx->pc == 0x38D64Cu) {
        ctx->pc = 0x38D64Cu;
            // 0x38d64c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38D650u;
        goto label_38d650;
    }
    ctx->pc = 0x38D648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38D650u);
        ctx->pc = 0x38D64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D648u;
            // 0x38d64c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38D650u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38D650u; }
            if (ctx->pc != 0x38D650u) { return; }
        }
        }
    }
    ctx->pc = 0x38D650u;
label_38d650:
    // 0x38d650: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38d650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38d654:
    // 0x38d654: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x38d654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_38d658:
    // 0x38d658: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x38d658u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
label_38d65c:
    // 0x38d65c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38d65cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38d660:
    // 0x38d660: 0xa243004c  sb          $v1, 0x4C($s2)
    ctx->pc = 0x38d660u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 76), (uint8_t)GPR_U32(ctx, 3));
label_38d664:
    // 0x38d664: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x38d664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_38d668:
    // 0x38d668: 0x8e510050  lw          $s1, 0x50($s2)
    ctx->pc = 0x38d668u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_38d66c:
    // 0x38d66c: 0x34430004  ori         $v1, $v0, 0x4
    ctx->pc = 0x38d66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_38d670:
    // 0x38d670: 0x8e100050  lw          $s0, 0x50($s0)
    ctx->pc = 0x38d670u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_38d674:
    // 0x38d674: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38d674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38d678:
    // 0x38d678: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38d678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38d67c:
    // 0x38d67c: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x38d67cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_38d680:
    // 0x38d680: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x38d680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_38d684:
    // 0x38d684: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x38d684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_38d688:
    // 0x38d688: 0xc08bff0  jal         func_22FFC0
label_38d68c:
    if (ctx->pc == 0x38D68Cu) {
        ctx->pc = 0x38D68Cu;
            // 0x38d68c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38D690u;
        goto label_38d690;
    }
    ctx->pc = 0x38D688u;
    SET_GPR_U32(ctx, 31, 0x38D690u);
    ctx->pc = 0x38D68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D688u;
            // 0x38d68c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D690u; }
        if (ctx->pc != 0x38D690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D690u; }
        if (ctx->pc != 0x38D690u) { return; }
    }
    ctx->pc = 0x38D690u;
label_38d690:
    // 0x38d690: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38d690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38d694:
    // 0x38d694: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38d694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38d698:
    // 0x38d698: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x38d698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38d69c:
    // 0x38d69c: 0xc08914c  jal         func_224530
label_38d6a0:
    if (ctx->pc == 0x38D6A0u) {
        ctx->pc = 0x38D6A0u;
            // 0x38d6a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38D6A4u;
        goto label_38d6a4;
    }
    ctx->pc = 0x38D69Cu;
    SET_GPR_U32(ctx, 31, 0x38D6A4u);
    ctx->pc = 0x38D6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D69Cu;
            // 0x38d6a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D6A4u; }
        if (ctx->pc != 0x38D6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D6A4u; }
        if (ctx->pc != 0x38D6A4u) { return; }
    }
    ctx->pc = 0x38D6A4u;
label_38d6a4:
    // 0x38d6a4: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x38d6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_38d6a8:
    // 0x38d6a8: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x38d6a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_38d6ac:
    // 0x38d6ac: 0x54600024  bnel        $v1, $zero, . + 4 + (0x24 << 2)
label_38d6b0:
    if (ctx->pc == 0x38D6B0u) {
        ctx->pc = 0x38D6B0u;
            // 0x38d6b0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x38D6B4u;
        goto label_38d6b4;
    }
    ctx->pc = 0x38D6ACu;
    {
        const bool branch_taken_0x38d6ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38d6ac) {
            ctx->pc = 0x38D6B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38D6ACu;
            // 0x38d6b0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38D740u;
            goto label_38d740;
        }
    }
    ctx->pc = 0x38D6B4u;
label_38d6b4:
    // 0x38d6b4: 0xc088b74  jal         func_222DD0
label_38d6b8:
    if (ctx->pc == 0x38D6B8u) {
        ctx->pc = 0x38D6B8u;
            // 0x38d6b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38D6BCu;
        goto label_38d6bc;
    }
    ctx->pc = 0x38D6B4u;
    SET_GPR_U32(ctx, 31, 0x38D6BCu);
    ctx->pc = 0x38D6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D6B4u;
            // 0x38d6b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D6BCu; }
        if (ctx->pc != 0x38D6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D6BCu; }
        if (ctx->pc != 0x38D6BCu) { return; }
    }
    ctx->pc = 0x38D6BCu;
label_38d6bc:
    // 0x38d6bc: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x38d6bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_38d6c0:
    // 0x38d6c0: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x38d6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_38d6c4:
    // 0x38d6c4: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x38d6c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_38d6c8:
    // 0x38d6c8: 0x320f809  jalr        $t9
label_38d6cc:
    if (ctx->pc == 0x38D6CCu) {
        ctx->pc = 0x38D6CCu;
            // 0x38d6cc: 0x26050180  addiu       $a1, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->pc = 0x38D6D0u;
        goto label_38d6d0;
    }
    ctx->pc = 0x38D6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38D6D0u);
        ctx->pc = 0x38D6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D6C8u;
            // 0x38d6cc: 0x26050180  addiu       $a1, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38D6D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38D6D0u; }
            if (ctx->pc != 0x38D6D0u) { return; }
        }
        }
    }
    ctx->pc = 0x38D6D0u;
label_38d6d0:
    // 0x38d6d0: 0xc6000190  lwc1        $f0, 0x190($s0)
    ctx->pc = 0x38d6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38d6d4:
    // 0x38d6d4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x38d6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_38d6d8:
    // 0x38d6d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x38d6d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38d6dc:
    // 0x38d6dc: 0x3c02423c  lui         $v0, 0x423C
    ctx->pc = 0x38d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16956 << 16));
label_38d6e0:
    // 0x38d6e0: 0x34427edd  ori         $v0, $v0, 0x7EDD
    ctx->pc = 0x38d6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32477);
label_38d6e4:
    // 0x38d6e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38d6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38d6e8:
    // 0x38d6e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x38d6e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_38d6ec:
    // 0x38d6ec: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x38d6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_38d6f0:
    // 0x38d6f0: 0xc6000194  lwc1        $f0, 0x194($s0)
    ctx->pc = 0x38d6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38d6f4:
    // 0x38d6f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x38d6f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_38d6f8:
    // 0x38d6f8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x38d6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_38d6fc:
    // 0x38d6fc: 0xc6000198  lwc1        $f0, 0x198($s0)
    ctx->pc = 0x38d6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38d700:
    // 0x38d700: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x38d700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_38d704:
    // 0x38d704: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x38d704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_38d708:
    // 0x38d708: 0xc600019c  lwc1        $f0, 0x19C($s0)
    ctx->pc = 0x38d708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38d70c:
    // 0x38d70c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x38d70cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_38d710:
    // 0x38d710: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x38d710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_38d714:
    // 0x38d714: 0xc088b74  jal         func_222DD0
label_38d718:
    if (ctx->pc == 0x38D718u) {
        ctx->pc = 0x38D718u;
            // 0x38d718: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
        ctx->pc = 0x38D71Cu;
        goto label_38d71c;
    }
    ctx->pc = 0x38D714u;
    SET_GPR_U32(ctx, 31, 0x38D71Cu);
    ctx->pc = 0x38D718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D714u;
            // 0x38d718: 0xae220158  sw          $v0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D71Cu; }
        if (ctx->pc != 0x38D71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D71Cu; }
        if (ctx->pc != 0x38D71Cu) { return; }
    }
    ctx->pc = 0x38D71Cu;
label_38d71c:
    // 0x38d71c: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x38d71cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_38d720:
    // 0x38d720: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x38d720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_38d724:
    // 0x38d724: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x38d724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_38d728:
    // 0x38d728: 0x320f809  jalr        $t9
label_38d72c:
    if (ctx->pc == 0x38D72Cu) {
        ctx->pc = 0x38D72Cu;
            // 0x38d72c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x38D730u;
        goto label_38d730;
    }
    ctx->pc = 0x38D728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38D730u);
        ctx->pc = 0x38D72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D728u;
            // 0x38d72c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38D730u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38D730u; }
            if (ctx->pc != 0x38D730u) { return; }
        }
        }
    }
    ctx->pc = 0x38D730u;
label_38d730:
    // 0x38d730: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x38d730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
label_38d734:
    // 0x38d734: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x38d734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_38d738:
    // 0x38d738: 0xae230160  sw          $v1, 0x160($s1)
    ctx->pc = 0x38d738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 3));
label_38d73c:
    // 0x38d73c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x38d73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_38d740:
    // 0x38d740: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38d740u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38d744:
    // 0x38d744: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38d744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38d748:
    // 0x38d748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38d748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38d74c:
    // 0x38d74c: 0x3e00008  jr          $ra
label_38d750:
    if (ctx->pc == 0x38D750u) {
        ctx->pc = 0x38D750u;
            // 0x38d750: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x38D754u;
        goto label_38d754;
    }
    ctx->pc = 0x38D74Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D74Cu;
            // 0x38d750: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38D754u;
label_38d754:
    // 0x38d754: 0x0  nop
    ctx->pc = 0x38d754u;
    // NOP
label_38d758:
    // 0x38d758: 0x0  nop
    ctx->pc = 0x38d758u;
    // NOP
label_38d75c:
    // 0x38d75c: 0x0  nop
    ctx->pc = 0x38d75cu;
    // NOP
label_38d760:
    // 0x38d760: 0x3e00008  jr          $ra
label_38d764:
    if (ctx->pc == 0x38D764u) {
        ctx->pc = 0x38D768u;
        goto label_38d768;
    }
    ctx->pc = 0x38D760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38D768u;
label_38d768:
    // 0x38d768: 0x0  nop
    ctx->pc = 0x38d768u;
    // NOP
label_38d76c:
    // 0x38d76c: 0x0  nop
    ctx->pc = 0x38d76cu;
    // NOP
label_38d770:
    // 0x38d770: 0x3e00008  jr          $ra
label_38d774:
    if (ctx->pc == 0x38D774u) {
        ctx->pc = 0x38D778u;
        goto label_38d778;
    }
    ctx->pc = 0x38D770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38D778u;
label_38d778:
    // 0x38d778: 0x0  nop
    ctx->pc = 0x38d778u;
    // NOP
label_38d77c:
    // 0x38d77c: 0x0  nop
    ctx->pc = 0x38d77cu;
    // NOP
}
