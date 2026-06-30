#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00172620
// Address: 0x172620 - 0x172738
void sub_00172620_0x172620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172620_0x172620");
#endif

    switch (ctx->pc) {
        case 0x172620u: goto label_172620;
        case 0x172624u: goto label_172624;
        case 0x172628u: goto label_172628;
        case 0x17262cu: goto label_17262c;
        case 0x172630u: goto label_172630;
        case 0x172634u: goto label_172634;
        case 0x172638u: goto label_172638;
        case 0x17263cu: goto label_17263c;
        case 0x172640u: goto label_172640;
        case 0x172644u: goto label_172644;
        case 0x172648u: goto label_172648;
        case 0x17264cu: goto label_17264c;
        case 0x172650u: goto label_172650;
        case 0x172654u: goto label_172654;
        case 0x172658u: goto label_172658;
        case 0x17265cu: goto label_17265c;
        case 0x172660u: goto label_172660;
        case 0x172664u: goto label_172664;
        case 0x172668u: goto label_172668;
        case 0x17266cu: goto label_17266c;
        case 0x172670u: goto label_172670;
        case 0x172674u: goto label_172674;
        case 0x172678u: goto label_172678;
        case 0x17267cu: goto label_17267c;
        case 0x172680u: goto label_172680;
        case 0x172684u: goto label_172684;
        case 0x172688u: goto label_172688;
        case 0x17268cu: goto label_17268c;
        case 0x172690u: goto label_172690;
        case 0x172694u: goto label_172694;
        case 0x172698u: goto label_172698;
        case 0x17269cu: goto label_17269c;
        case 0x1726a0u: goto label_1726a0;
        case 0x1726a4u: goto label_1726a4;
        case 0x1726a8u: goto label_1726a8;
        case 0x1726acu: goto label_1726ac;
        case 0x1726b0u: goto label_1726b0;
        case 0x1726b4u: goto label_1726b4;
        case 0x1726b8u: goto label_1726b8;
        case 0x1726bcu: goto label_1726bc;
        case 0x1726c0u: goto label_1726c0;
        case 0x1726c4u: goto label_1726c4;
        case 0x1726c8u: goto label_1726c8;
        case 0x1726ccu: goto label_1726cc;
        case 0x1726d0u: goto label_1726d0;
        case 0x1726d4u: goto label_1726d4;
        case 0x1726d8u: goto label_1726d8;
        case 0x1726dcu: goto label_1726dc;
        case 0x1726e0u: goto label_1726e0;
        case 0x1726e4u: goto label_1726e4;
        case 0x1726e8u: goto label_1726e8;
        case 0x1726ecu: goto label_1726ec;
        case 0x1726f0u: goto label_1726f0;
        case 0x1726f4u: goto label_1726f4;
        case 0x1726f8u: goto label_1726f8;
        case 0x1726fcu: goto label_1726fc;
        case 0x172700u: goto label_172700;
        case 0x172704u: goto label_172704;
        case 0x172708u: goto label_172708;
        case 0x17270cu: goto label_17270c;
        case 0x172710u: goto label_172710;
        case 0x172714u: goto label_172714;
        case 0x172718u: goto label_172718;
        case 0x17271cu: goto label_17271c;
        case 0x172720u: goto label_172720;
        case 0x172724u: goto label_172724;
        case 0x172728u: goto label_172728;
        case 0x17272cu: goto label_17272c;
        case 0x172730u: goto label_172730;
        case 0x172734u: goto label_172734;
        default: break;
    }

    ctx->pc = 0x172620u;

label_172620:
    // 0x172620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_172624:
    // 0x172624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_172628:
    // 0x172628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17262c:
    // 0x17262c: 0x805bb1e  j           func_16EC78
label_172630:
    if (ctx->pc == 0x172630u) {
        ctx->pc = 0x172630u;
            // 0x172630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x172634u;
        goto label_172634;
    }
    ctx->pc = 0x17262Cu;
    ctx->pc = 0x172630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17262Cu;
            // 0x172630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EC78u;
    {
        auto targetFn = runtime->lookupFunction(0x16EC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x172634u;
label_172634:
    // 0x172634: 0x0  nop
    ctx->pc = 0x172634u;
    // NOP
label_172638:
    // 0x172638: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x172638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17263c:
    // 0x17263c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17263cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172640:
    // 0x172640: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x172640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_172644:
    // 0x172644: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x172644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_172648:
    // 0x172648: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x172648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_17264c:
    // 0x17264c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17264cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_172650:
    // 0x172650: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x172650u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_172654:
    // 0x172654: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x172654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_172658:
    // 0x172658: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x172658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17265c:
    // 0x17265c: 0x8e90000c  lw          $s0, 0xC($s4)
    ctx->pc = 0x17265cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_172660:
    // 0x172660: 0xc06123e  jal         func_1848F8
label_172664:
    if (ctx->pc == 0x172664u) {
        ctx->pc = 0x172664u;
            // 0x172664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172668u;
        goto label_172668;
    }
    ctx->pc = 0x172660u;
    SET_GPR_U32(ctx, 31, 0x172668u);
    ctx->pc = 0x172664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172660u;
            // 0x172664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1848F8u;
    if (runtime->hasFunction(0x1848F8u)) {
        auto targetFn = runtime->lookupFunction(0x1848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172668u; }
        if (ctx->pc != 0x172668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001848F8_0x1848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172668u; }
        if (ctx->pc != 0x172668u) { return; }
    }
    ctx->pc = 0x172668u;
label_172668:
    // 0x172668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17266c:
    // 0x17266c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17266cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172670:
    // 0x172670: 0xc06122e  jal         func_1848B8
label_172674:
    if (ctx->pc == 0x172674u) {
        ctx->pc = 0x172674u;
            // 0x172674: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172678u;
        goto label_172678;
    }
    ctx->pc = 0x172670u;
    SET_GPR_U32(ctx, 31, 0x172678u);
    ctx->pc = 0x172674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172670u;
            // 0x172674: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1848B8u;
    if (runtime->hasFunction(0x1848B8u)) {
        auto targetFn = runtime->lookupFunction(0x1848B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172678u; }
        if (ctx->pc != 0x172678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001848B8_0x1848b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172678u; }
        if (ctx->pc != 0x172678u) { return; }
    }
    ctx->pc = 0x172678u;
label_172678:
    // 0x172678: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x172678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17267c:
    // 0x17267c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17267cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172680:
    // 0x172680: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x172680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_172684:
    // 0x172684: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x172684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_172688:
    // 0x172688: 0x40f809  jalr        $v0
label_17268c:
    if (ctx->pc == 0x17268Cu) {
        ctx->pc = 0x17268Cu;
            // 0x17268c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172690u;
        goto label_172690;
    }
    ctx->pc = 0x172688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x172690u);
        ctx->pc = 0x17268Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172688u;
            // 0x17268c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x172690u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x172690u; }
            if (ctx->pc != 0x172690u) { return; }
        }
        }
    }
    ctx->pc = 0x172690u;
label_172690:
    // 0x172690: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x172690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_172694:
    // 0x172694: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x172694u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172698:
    // 0x172698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17269c:
    // 0x17269c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x17269cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1726a0:
    // 0x1726a0: 0x40f809  jalr        $v0
label_1726a4:
    if (ctx->pc == 0x1726A4u) {
        ctx->pc = 0x1726A4u;
            // 0x1726a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1726A8u;
        goto label_1726a8;
    }
    ctx->pc = 0x1726A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1726A8u);
        ctx->pc = 0x1726A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1726A0u;
            // 0x1726a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1726A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1726A8u; }
            if (ctx->pc != 0x1726A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1726A8u;
label_1726a8:
    // 0x1726a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1726a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1726ac:
    // 0x1726ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1726acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1726b0:
    // 0x1726b0: 0xc061d9c  jal         func_187670
label_1726b4:
    if (ctx->pc == 0x1726B4u) {
        ctx->pc = 0x1726B4u;
            // 0x1726b4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1726B8u;
        goto label_1726b8;
    }
    ctx->pc = 0x1726B0u;
    SET_GPR_U32(ctx, 31, 0x1726B8u);
    ctx->pc = 0x1726B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1726B0u;
            // 0x1726b4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187670u;
    if (runtime->hasFunction(0x187670u)) {
        auto targetFn = runtime->lookupFunction(0x187670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1726B8u; }
        if (ctx->pc != 0x1726B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187670_0x187670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1726B8u; }
        if (ctx->pc != 0x1726B8u) { return; }
    }
    ctx->pc = 0x1726B8u;
label_1726b8:
    // 0x1726b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1726b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1726bc:
    // 0x1726bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1726bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1726c0:
    // 0x1726c0: 0xc061d9c  jal         func_187670
label_1726c4:
    if (ctx->pc == 0x1726C4u) {
        ctx->pc = 0x1726C4u;
            // 0x1726c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1726C8u;
        goto label_1726c8;
    }
    ctx->pc = 0x1726C0u;
    SET_GPR_U32(ctx, 31, 0x1726C8u);
    ctx->pc = 0x1726C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1726C0u;
            // 0x1726c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187670u;
    if (runtime->hasFunction(0x187670u)) {
        auto targetFn = runtime->lookupFunction(0x187670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1726C8u; }
        if (ctx->pc != 0x1726C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187670_0x187670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1726C8u; }
        if (ctx->pc != 0x1726C8u) { return; }
    }
    ctx->pc = 0x1726C8u;
label_1726c8:
    // 0x1726c8: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1726c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1726cc:
    // 0x1726cc: 0x2533821  addu        $a3, $s2, $s3
    ctx->pc = 0x1726ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1726d0:
    // 0x1726d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1726d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1726d4:
    // 0x1726d4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1726d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1726d8:
    // 0x1726d8: 0x24844070  addiu       $a0, $a0, 0x4070
    ctx->pc = 0x1726d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16496));
label_1726dc:
    // 0x1726dc: 0xc043c12  jal         func_10F048
label_1726e0:
    if (ctx->pc == 0x1726E0u) {
        ctx->pc = 0x1726E0u;
            // 0x1726e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1726E4u;
        goto label_1726e4;
    }
    ctx->pc = 0x1726DCu;
    SET_GPR_U32(ctx, 31, 0x1726E4u);
    ctx->pc = 0x1726E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1726DCu;
            // 0x1726e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1726E4u; }
        if (ctx->pc != 0x1726E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1726E4u; }
        if (ctx->pc != 0x1726E4u) { return; }
    }
    ctx->pc = 0x1726E4u;
label_1726e4:
    // 0x1726e4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1726e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1726e8:
    // 0x1726e8: 0x2113821  addu        $a3, $s0, $s1
    ctx->pc = 0x1726e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1726ec:
    // 0x1726ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1726ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1726f0:
    // 0x1726f0: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x1726f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_1726f4:
    // 0x1726f4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1726f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1726f8:
    // 0x1726f8: 0xc043c12  jal         func_10F048
label_1726fc:
    if (ctx->pc == 0x1726FCu) {
        ctx->pc = 0x1726FCu;
            // 0x1726fc: 0x24844090  addiu       $a0, $a0, 0x4090 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16528));
        ctx->pc = 0x172700u;
        goto label_172700;
    }
    ctx->pc = 0x1726F8u;
    SET_GPR_U32(ctx, 31, 0x172700u);
    ctx->pc = 0x1726FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1726F8u;
            // 0x1726fc: 0x24844090  addiu       $a0, $a0, 0x4090 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172700u; }
        if (ctx->pc != 0x172700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172700u; }
        if (ctx->pc != 0x172700u) { return; }
    }
    ctx->pc = 0x172700u;
label_172700:
    // 0x172700: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x172700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_172704:
    // 0x172704: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x172704u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_172708:
    // 0x172708: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x172708u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17270c:
    // 0x17270c: 0x2503021  addu        $a2, $s2, $s0
    ctx->pc = 0x17270cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_172710:
    // 0x172710: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x172710u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_172714:
    // 0x172714: 0x82850001  lb          $a1, 0x1($s4)
    ctx->pc = 0x172714u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_172718:
    // 0x172718: 0x248440b0  addiu       $a0, $a0, 0x40B0
    ctx->pc = 0x172718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16560));
label_17271c:
    // 0x17271c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17271cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_172720:
    // 0x172720: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x172720u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_172724:
    // 0x172724: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x172724u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_172728:
    // 0x172728: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x172728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_17272c:
    // 0x17272c: 0x8043c12  j           func_10F048
label_172730:
    if (ctx->pc == 0x172730u) {
        ctx->pc = 0x172730u;
            // 0x172730: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x172734u;
        goto label_172734;
    }
    ctx->pc = 0x17272Cu;
    ctx->pc = 0x172730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17272Cu;
            // 0x172730: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F048_0x10f048(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x172734u;
label_172734:
    // 0x172734: 0x0  nop
    ctx->pc = 0x172734u;
    // NOP
}
