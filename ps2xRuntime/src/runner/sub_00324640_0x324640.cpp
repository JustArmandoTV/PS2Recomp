#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00324640
// Address: 0x324640 - 0x324750
void sub_00324640_0x324640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324640_0x324640");
#endif

    switch (ctx->pc) {
        case 0x324640u: goto label_324640;
        case 0x324644u: goto label_324644;
        case 0x324648u: goto label_324648;
        case 0x32464cu: goto label_32464c;
        case 0x324650u: goto label_324650;
        case 0x324654u: goto label_324654;
        case 0x324658u: goto label_324658;
        case 0x32465cu: goto label_32465c;
        case 0x324660u: goto label_324660;
        case 0x324664u: goto label_324664;
        case 0x324668u: goto label_324668;
        case 0x32466cu: goto label_32466c;
        case 0x324670u: goto label_324670;
        case 0x324674u: goto label_324674;
        case 0x324678u: goto label_324678;
        case 0x32467cu: goto label_32467c;
        case 0x324680u: goto label_324680;
        case 0x324684u: goto label_324684;
        case 0x324688u: goto label_324688;
        case 0x32468cu: goto label_32468c;
        case 0x324690u: goto label_324690;
        case 0x324694u: goto label_324694;
        case 0x324698u: goto label_324698;
        case 0x32469cu: goto label_32469c;
        case 0x3246a0u: goto label_3246a0;
        case 0x3246a4u: goto label_3246a4;
        case 0x3246a8u: goto label_3246a8;
        case 0x3246acu: goto label_3246ac;
        case 0x3246b0u: goto label_3246b0;
        case 0x3246b4u: goto label_3246b4;
        case 0x3246b8u: goto label_3246b8;
        case 0x3246bcu: goto label_3246bc;
        case 0x3246c0u: goto label_3246c0;
        case 0x3246c4u: goto label_3246c4;
        case 0x3246c8u: goto label_3246c8;
        case 0x3246ccu: goto label_3246cc;
        case 0x3246d0u: goto label_3246d0;
        case 0x3246d4u: goto label_3246d4;
        case 0x3246d8u: goto label_3246d8;
        case 0x3246dcu: goto label_3246dc;
        case 0x3246e0u: goto label_3246e0;
        case 0x3246e4u: goto label_3246e4;
        case 0x3246e8u: goto label_3246e8;
        case 0x3246ecu: goto label_3246ec;
        case 0x3246f0u: goto label_3246f0;
        case 0x3246f4u: goto label_3246f4;
        case 0x3246f8u: goto label_3246f8;
        case 0x3246fcu: goto label_3246fc;
        case 0x324700u: goto label_324700;
        case 0x324704u: goto label_324704;
        case 0x324708u: goto label_324708;
        case 0x32470cu: goto label_32470c;
        case 0x324710u: goto label_324710;
        case 0x324714u: goto label_324714;
        case 0x324718u: goto label_324718;
        case 0x32471cu: goto label_32471c;
        case 0x324720u: goto label_324720;
        case 0x324724u: goto label_324724;
        case 0x324728u: goto label_324728;
        case 0x32472cu: goto label_32472c;
        case 0x324730u: goto label_324730;
        case 0x324734u: goto label_324734;
        case 0x324738u: goto label_324738;
        case 0x32473cu: goto label_32473c;
        case 0x324740u: goto label_324740;
        case 0x324744u: goto label_324744;
        case 0x324748u: goto label_324748;
        case 0x32474cu: goto label_32474c;
        default: break;
    }

    ctx->pc = 0x324640u;

label_324640:
    // 0x324640: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x324640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_324644:
    // 0x324644: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x324644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_324648:
    // 0x324648: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x324648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_32464c:
    // 0x32464c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32464cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_324650:
    // 0x324650: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x324650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_324654:
    // 0x324654: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x324654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_324658:
    // 0x324658: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x324658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32465c:
    // 0x32465c: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x32465cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_324660:
    // 0x324660: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x324660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_324664:
    // 0x324664: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x324664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_324668:
    // 0x324668: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x324668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32466c:
    // 0x32466c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32466cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_324670:
    // 0x324670: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x324670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_324674:
    // 0x324674: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x324674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_324678:
    // 0x324678: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x324678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_32467c:
    // 0x32467c: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x32467cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_324680:
    // 0x324680: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x324680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_324684:
    // 0x324684: 0x24520164  addiu       $s2, $v0, 0x164
    ctx->pc = 0x324684u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 356));
label_324688:
    // 0x324688: 0x320f809  jalr        $t9
label_32468c:
    if (ctx->pc == 0x32468Cu) {
        ctx->pc = 0x32468Cu;
            // 0x32468c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x324690u;
        goto label_324690;
    }
    ctx->pc = 0x324688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x324690u);
        ctx->pc = 0x32468Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324688u;
            // 0x32468c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x324690u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x324690u; }
            if (ctx->pc != 0x324690u) { return; }
        }
        }
    }
    ctx->pc = 0x324690u;
label_324690:
    // 0x324690: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x324690u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_324694:
    // 0x324694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x324694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_324698:
    // 0x324698: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x324698u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_32469c:
    // 0x32469c: 0x320f809  jalr        $t9
label_3246a0:
    if (ctx->pc == 0x3246A0u) {
        ctx->pc = 0x3246A0u;
            // 0x3246a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3246A4u;
        goto label_3246a4;
    }
    ctx->pc = 0x32469Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3246A4u);
        ctx->pc = 0x3246A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32469Cu;
            // 0x3246a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3246A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3246A4u; }
            if (ctx->pc != 0x3246A4u) { return; }
        }
        }
    }
    ctx->pc = 0x3246A4u;
label_3246a4:
    // 0x3246a4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3246a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3246a8:
    // 0x3246a8: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_3246ac:
    if (ctx->pc == 0x3246ACu) {
        ctx->pc = 0x3246ACu;
            // 0x3246ac: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x3246B0u;
        goto label_3246b0;
    }
    ctx->pc = 0x3246A8u;
    {
        const bool branch_taken_0x3246a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3246a8) {
            ctx->pc = 0x3246ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3246A8u;
            // 0x3246ac: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3246C8u;
            goto label_3246c8;
        }
    }
    ctx->pc = 0x3246B0u;
label_3246b0:
    // 0x3246b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3246b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3246b4:
    // 0x3246b4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3246b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3246b8:
    // 0x3246b8: 0x320f809  jalr        $t9
label_3246bc:
    if (ctx->pc == 0x3246BCu) {
        ctx->pc = 0x3246C0u;
        goto label_3246c0;
    }
    ctx->pc = 0x3246B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3246C0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3246C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3246C0u; }
            if (ctx->pc != 0x3246C0u) { return; }
        }
        }
    }
    ctx->pc = 0x3246C0u;
label_3246c0:
    // 0x3246c0: 0x10000015  b           . + 4 + (0x15 << 2)
label_3246c4:
    if (ctx->pc == 0x3246C4u) {
        ctx->pc = 0x3246C8u;
        goto label_3246c8;
    }
    ctx->pc = 0x3246C0u;
    {
        const bool branch_taken_0x3246c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3246c0) {
            ctx->pc = 0x324718u;
            goto label_324718;
        }
    }
    ctx->pc = 0x3246C8u;
label_3246c8:
    // 0x3246c8: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_3246cc:
    if (ctx->pc == 0x3246CCu) {
        ctx->pc = 0x3246D0u;
        goto label_3246d0;
    }
    ctx->pc = 0x3246C8u;
    {
        const bool branch_taken_0x3246c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3246c8) {
            ctx->pc = 0x324718u;
            goto label_324718;
        }
    }
    ctx->pc = 0x3246D0u;
label_3246d0:
    // 0x3246d0: 0x5620000d  bnel        $s1, $zero, . + 4 + (0xD << 2)
label_3246d4:
    if (ctx->pc == 0x3246D4u) {
        ctx->pc = 0x3246D4u;
            // 0x3246d4: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->pc = 0x3246D8u;
        goto label_3246d8;
    }
    ctx->pc = 0x3246D0u;
    {
        const bool branch_taken_0x3246d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3246d0) {
            ctx->pc = 0x3246D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3246D0u;
            // 0x3246d4: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x324708u;
            goto label_324708;
        }
    }
    ctx->pc = 0x3246D8u;
label_3246d8:
    // 0x3246d8: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x3246d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3246dc:
    // 0x3246dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3246dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3246e0:
    // 0x3246e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3246e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3246e4:
    // 0x3246e4: 0xc123278  jal         func_48C9E0
label_3246e8:
    if (ctx->pc == 0x3246E8u) {
        ctx->pc = 0x3246E8u;
            // 0x3246e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3246ECu;
        goto label_3246ec;
    }
    ctx->pc = 0x3246E4u;
    SET_GPR_U32(ctx, 31, 0x3246ECu);
    ctx->pc = 0x3246E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3246E4u;
            // 0x3246e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C9E0u;
    if (runtime->hasFunction(0x48C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x48C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3246ECu; }
        if (ctx->pc != 0x3246ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C9E0_0x48c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3246ECu; }
        if (ctx->pc != 0x3246ECu) { return; }
    }
    ctx->pc = 0x3246ECu;
label_3246ec:
    // 0x3246ec: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3246ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3246f0:
    // 0x3246f0: 0x2605fffe  addiu       $a1, $s0, -0x2
    ctx->pc = 0x3246f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
label_3246f4:
    // 0x3246f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3246f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3246f8:
    // 0x3246f8: 0xc123278  jal         func_48C9E0
label_3246fc:
    if (ctx->pc == 0x3246FCu) {
        ctx->pc = 0x3246FCu;
            // 0x3246fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x324700u;
        goto label_324700;
    }
    ctx->pc = 0x3246F8u;
    SET_GPR_U32(ctx, 31, 0x324700u);
    ctx->pc = 0x3246FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3246F8u;
            // 0x3246fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C9E0u;
    if (runtime->hasFunction(0x48C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x48C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324700u; }
        if (ctx->pc != 0x324700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C9E0_0x48c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324700u; }
        if (ctx->pc != 0x324700u) { return; }
    }
    ctx->pc = 0x324700u;
label_324700:
    // 0x324700: 0x10000005  b           . + 4 + (0x5 << 2)
label_324704:
    if (ctx->pc == 0x324704u) {
        ctx->pc = 0x324708u;
        goto label_324708;
    }
    ctx->pc = 0x324700u;
    {
        const bool branch_taken_0x324700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x324700) {
            ctx->pc = 0x324718u;
            goto label_324718;
        }
    }
    ctx->pc = 0x324708u;
label_324708:
    // 0x324708: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x324708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32470c:
    // 0x32470c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32470cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_324710:
    // 0x324710: 0xc123278  jal         func_48C9E0
label_324714:
    if (ctx->pc == 0x324714u) {
        ctx->pc = 0x324714u;
            // 0x324714: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x324718u;
        goto label_324718;
    }
    ctx->pc = 0x324710u;
    SET_GPR_U32(ctx, 31, 0x324718u);
    ctx->pc = 0x324714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324710u;
            // 0x324714: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C9E0u;
    if (runtime->hasFunction(0x48C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x48C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324718u; }
        if (ctx->pc != 0x324718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C9E0_0x48c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324718u; }
        if (ctx->pc != 0x324718u) { return; }
    }
    ctx->pc = 0x324718u;
label_324718:
    // 0x324718: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x324718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_32471c:
    // 0x32471c: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x32471cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_324720:
    // 0x324720: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x324720u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_324724:
    // 0x324724: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x324724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_324728:
    // 0x324728: 0x320f809  jalr        $t9
label_32472c:
    if (ctx->pc == 0x32472Cu) {
        ctx->pc = 0x324730u;
        goto label_324730;
    }
    ctx->pc = 0x324728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x324730u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x324730u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x324730u; }
            if (ctx->pc != 0x324730u) { return; }
        }
        }
    }
    ctx->pc = 0x324730u;
label_324730:
    // 0x324730: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x324730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_324734:
    // 0x324734: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x324734u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_324738:
    // 0x324738: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x324738u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32473c:
    // 0x32473c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32473cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_324740:
    // 0x324740: 0x3e00008  jr          $ra
label_324744:
    if (ctx->pc == 0x324744u) {
        ctx->pc = 0x324744u;
            // 0x324744: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x324748u;
        goto label_324748;
    }
    ctx->pc = 0x324740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324740u;
            // 0x324744: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x324748u;
label_324748:
    // 0x324748: 0x0  nop
    ctx->pc = 0x324748u;
    // NOP
label_32474c:
    // 0x32474c: 0x0  nop
    ctx->pc = 0x32474cu;
    // NOP
}
