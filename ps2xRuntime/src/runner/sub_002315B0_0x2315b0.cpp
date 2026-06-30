#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002315B0
// Address: 0x2315b0 - 0x2316f0
void sub_002315B0_0x2315b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002315B0_0x2315b0");
#endif

    switch (ctx->pc) {
        case 0x2315b0u: goto label_2315b0;
        case 0x2315b4u: goto label_2315b4;
        case 0x2315b8u: goto label_2315b8;
        case 0x2315bcu: goto label_2315bc;
        case 0x2315c0u: goto label_2315c0;
        case 0x2315c4u: goto label_2315c4;
        case 0x2315c8u: goto label_2315c8;
        case 0x2315ccu: goto label_2315cc;
        case 0x2315d0u: goto label_2315d0;
        case 0x2315d4u: goto label_2315d4;
        case 0x2315d8u: goto label_2315d8;
        case 0x2315dcu: goto label_2315dc;
        case 0x2315e0u: goto label_2315e0;
        case 0x2315e4u: goto label_2315e4;
        case 0x2315e8u: goto label_2315e8;
        case 0x2315ecu: goto label_2315ec;
        case 0x2315f0u: goto label_2315f0;
        case 0x2315f4u: goto label_2315f4;
        case 0x2315f8u: goto label_2315f8;
        case 0x2315fcu: goto label_2315fc;
        case 0x231600u: goto label_231600;
        case 0x231604u: goto label_231604;
        case 0x231608u: goto label_231608;
        case 0x23160cu: goto label_23160c;
        case 0x231610u: goto label_231610;
        case 0x231614u: goto label_231614;
        case 0x231618u: goto label_231618;
        case 0x23161cu: goto label_23161c;
        case 0x231620u: goto label_231620;
        case 0x231624u: goto label_231624;
        case 0x231628u: goto label_231628;
        case 0x23162cu: goto label_23162c;
        case 0x231630u: goto label_231630;
        case 0x231634u: goto label_231634;
        case 0x231638u: goto label_231638;
        case 0x23163cu: goto label_23163c;
        case 0x231640u: goto label_231640;
        case 0x231644u: goto label_231644;
        case 0x231648u: goto label_231648;
        case 0x23164cu: goto label_23164c;
        case 0x231650u: goto label_231650;
        case 0x231654u: goto label_231654;
        case 0x231658u: goto label_231658;
        case 0x23165cu: goto label_23165c;
        case 0x231660u: goto label_231660;
        case 0x231664u: goto label_231664;
        case 0x231668u: goto label_231668;
        case 0x23166cu: goto label_23166c;
        case 0x231670u: goto label_231670;
        case 0x231674u: goto label_231674;
        case 0x231678u: goto label_231678;
        case 0x23167cu: goto label_23167c;
        case 0x231680u: goto label_231680;
        case 0x231684u: goto label_231684;
        case 0x231688u: goto label_231688;
        case 0x23168cu: goto label_23168c;
        case 0x231690u: goto label_231690;
        case 0x231694u: goto label_231694;
        case 0x231698u: goto label_231698;
        case 0x23169cu: goto label_23169c;
        case 0x2316a0u: goto label_2316a0;
        case 0x2316a4u: goto label_2316a4;
        case 0x2316a8u: goto label_2316a8;
        case 0x2316acu: goto label_2316ac;
        case 0x2316b0u: goto label_2316b0;
        case 0x2316b4u: goto label_2316b4;
        case 0x2316b8u: goto label_2316b8;
        case 0x2316bcu: goto label_2316bc;
        case 0x2316c0u: goto label_2316c0;
        case 0x2316c4u: goto label_2316c4;
        case 0x2316c8u: goto label_2316c8;
        case 0x2316ccu: goto label_2316cc;
        case 0x2316d0u: goto label_2316d0;
        case 0x2316d4u: goto label_2316d4;
        case 0x2316d8u: goto label_2316d8;
        case 0x2316dcu: goto label_2316dc;
        case 0x2316e0u: goto label_2316e0;
        case 0x2316e4u: goto label_2316e4;
        case 0x2316e8u: goto label_2316e8;
        case 0x2316ecu: goto label_2316ec;
        default: break;
    }

    ctx->pc = 0x2315b0u;

label_2315b0:
    // 0x2315b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2315b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2315b4:
    // 0x2315b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2315b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2315b8:
    // 0x2315b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2315b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2315bc:
    // 0x2315bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2315bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2315c0:
    // 0x2315c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2315c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2315c4:
    // 0x2315c4: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x2315c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_2315c8:
    // 0x2315c8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2315cc:
    if (ctx->pc == 0x2315CCu) {
        ctx->pc = 0x2315CCu;
            // 0x2315cc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2315D0u;
        goto label_2315d0;
    }
    ctx->pc = 0x2315C8u;
    {
        const bool branch_taken_0x2315c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2315CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2315C8u;
            // 0x2315cc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2315c8) {
            ctx->pc = 0x231614u;
            goto label_231614;
        }
    }
    ctx->pc = 0x2315D0u;
label_2315d0:
    // 0x2315d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2315d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2315d4:
    // 0x2315d4: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x2315d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_2315d8:
    // 0x2315d8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2315d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2315dc:
    // 0x2315dc: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2315dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2315e0:
    // 0x2315e0: 0xa3a30048  sb          $v1, 0x48($sp)
    ctx->pc = 0x2315e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 3));
label_2315e4:
    // 0x2315e4: 0xc0a7a88  jal         func_29EA20
label_2315e8:
    if (ctx->pc == 0x2315E8u) {
        ctx->pc = 0x2315E8u;
            // 0x2315e8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2315ECu;
        goto label_2315ec;
    }
    ctx->pc = 0x2315E4u;
    SET_GPR_U32(ctx, 31, 0x2315ECu);
    ctx->pc = 0x2315E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2315E4u;
            // 0x2315e8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2315ECu; }
        if (ctx->pc != 0x2315ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2315ECu; }
        if (ctx->pc != 0x2315ECu) { return; }
    }
    ctx->pc = 0x2315ECu;
label_2315ec:
    // 0x2315ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2315ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2315f0:
    // 0x2315f0: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2315f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_2315f4:
    // 0x2315f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2315f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2315f8:
    // 0x2315f8: 0xc0a8448  jal         func_2A1120
label_2315fc:
    if (ctx->pc == 0x2315FCu) {
        ctx->pc = 0x2315FCu;
            // 0x2315fc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x231600u;
        goto label_231600;
    }
    ctx->pc = 0x2315F8u;
    SET_GPR_U32(ctx, 31, 0x231600u);
    ctx->pc = 0x2315FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2315F8u;
            // 0x2315fc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1120u;
    if (runtime->hasFunction(0x2A1120u)) {
        auto targetFn = runtime->lookupFunction(0x2A1120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231600u; }
        if (ctx->pc != 0x231600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1120_0x2a1120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231600u; }
        if (ctx->pc != 0x231600u) { return; }
    }
    ctx->pc = 0x231600u;
label_231600:
    // 0x231600: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_231604:
    // 0x231604: 0xc08d1cc  jal         func_234730
label_231608:
    if (ctx->pc == 0x231608u) {
        ctx->pc = 0x231608u;
            // 0x231608: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->pc = 0x23160Cu;
        goto label_23160c;
    }
    ctx->pc = 0x231604u;
    SET_GPR_U32(ctx, 31, 0x23160Cu);
    ctx->pc = 0x231608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231604u;
            // 0x231608: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234730u;
    if (runtime->hasFunction(0x234730u)) {
        auto targetFn = runtime->lookupFunction(0x234730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23160Cu; }
        if (ctx->pc != 0x23160Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234730_0x234730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23160Cu; }
        if (ctx->pc != 0x23160Cu) { return; }
    }
    ctx->pc = 0x23160Cu;
label_23160c:
    // 0x23160c: 0x10000033  b           . + 4 + (0x33 << 2)
label_231610:
    if (ctx->pc == 0x231610u) {
        ctx->pc = 0x231610u;
            // 0x231610: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x231614u;
        goto label_231614;
    }
    ctx->pc = 0x23160Cu;
    {
        const bool branch_taken_0x23160c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23160Cu;
            // 0x231610: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23160c) {
            ctx->pc = 0x2316DCu;
            goto label_2316dc;
        }
    }
    ctx->pc = 0x231614u;
label_231614:
    // 0x231614: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x231614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_231618:
    // 0x231618: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x231618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_23161c:
    // 0x23161c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x23161cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_231620:
    // 0x231620: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x231620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_231624:
    // 0x231624: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x231624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_231628:
    // 0x231628: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x231628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23162c:
    // 0x23162c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x23162cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_231630:
    // 0x231630: 0x320f809  jalr        $t9
label_231634:
    if (ctx->pc == 0x231634u) {
        ctx->pc = 0x231634u;
            // 0x231634: 0x27a60038  addiu       $a2, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->pc = 0x231638u;
        goto label_231638;
    }
    ctx->pc = 0x231630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x231638u);
        ctx->pc = 0x231634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231630u;
            // 0x231634: 0x27a60038  addiu       $a2, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x231638u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x231638u; }
            if (ctx->pc != 0x231638u) { return; }
        }
        }
    }
    ctx->pc = 0x231638u;
label_231638:
    // 0x231638: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x231638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_23163c:
    // 0x23163c: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
label_231640:
    if (ctx->pc == 0x231640u) {
        ctx->pc = 0x231640u;
            // 0x231640: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231644u;
        goto label_231644;
    }
    ctx->pc = 0x23163Cu;
    {
        const bool branch_taken_0x23163c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x231640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23163Cu;
            // 0x231640: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23163c) {
            ctx->pc = 0x2316A0u;
            goto label_2316a0;
        }
    }
    ctx->pc = 0x231644u;
label_231644:
    // 0x231644: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x231644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_231648:
    // 0x231648: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x231648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_23164c:
    // 0x23164c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23164cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_231650:
    // 0x231650: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x231650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_231654:
    // 0x231654: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x231654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_231658:
    // 0x231658: 0x80a40005  lb          $a0, 0x5($a1)
    ctx->pc = 0x231658u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
label_23165c:
    // 0x23165c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x23165cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_231660:
    // 0x231660: 0x80a40018  lb          $a0, 0x18($a1)
    ctx->pc = 0x231660u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
label_231664:
    // 0x231664: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_231668:
    if (ctx->pc == 0x231668u) {
        ctx->pc = 0x231668u;
            // 0x231668: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23166Cu;
        goto label_23166c;
    }
    ctx->pc = 0x231664u;
    {
        const bool branch_taken_0x231664 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x231664) {
            ctx->pc = 0x231668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231664u;
            // 0x231668: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231674u;
            goto label_231674;
        }
    }
    ctx->pc = 0x23166Cu;
label_23166c:
    // 0x23166c: 0x80a30010  lb          $v1, 0x10($a1)
    ctx->pc = 0x23166cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_231670:
    // 0x231670: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x231670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_231674:
    // 0x231674: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_231678:
    if (ctx->pc == 0x231678u) {
        ctx->pc = 0x23167Cu;
        goto label_23167c;
    }
    ctx->pc = 0x231674u;
    {
        const bool branch_taken_0x231674 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x231674) {
            ctx->pc = 0x231688u;
            goto label_231688;
        }
    }
    ctx->pc = 0x23167Cu;
label_23167c:
    // 0x23167c: 0xc088b74  jal         func_222DD0
label_231680:
    if (ctx->pc == 0x231680u) {
        ctx->pc = 0x231684u;
        goto label_231684;
    }
    ctx->pc = 0x23167Cu;
    SET_GPR_U32(ctx, 31, 0x231684u);
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231684u; }
        if (ctx->pc != 0x231684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231684u; }
        if (ctx->pc != 0x231684u) { return; }
    }
    ctx->pc = 0x231684u;
label_231684:
    // 0x231684: 0x0  nop
    ctx->pc = 0x231684u;
    // NOP
label_231688:
    // 0x231688: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x231688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_23168c:
    // 0x23168c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23168cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_231690:
    // 0x231690: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x231690u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_231694:
    // 0x231694: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_231698:
    if (ctx->pc == 0x231698u) {
        ctx->pc = 0x231698u;
            // 0x231698: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x23169Cu;
        goto label_23169c;
    }
    ctx->pc = 0x231694u;
    {
        const bool branch_taken_0x231694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x231698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231694u;
            // 0x231698: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231694) {
            ctx->pc = 0x231648u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_231648;
        }
    }
    ctx->pc = 0x23169Cu;
label_23169c:
    // 0x23169c: 0x0  nop
    ctx->pc = 0x23169cu;
    // NOP
label_2316a0:
    // 0x2316a0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2316a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2316a4:
    // 0x2316a4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2316a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2316a8:
    // 0x2316a8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2316a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2316ac:
    // 0x2316ac: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_2316b0:
    if (ctx->pc == 0x2316B0u) {
        ctx->pc = 0x2316B4u;
        goto label_2316b4;
    }
    ctx->pc = 0x2316ACu;
    {
        const bool branch_taken_0x2316ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2316ac) {
            ctx->pc = 0x2316D8u;
            goto label_2316d8;
        }
    }
    ctx->pc = 0x2316B4u;
label_2316b4:
    // 0x2316b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2316b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2316b8:
    // 0x2316b8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2316b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2316bc:
    // 0x2316bc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2316bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2316c0:
    // 0x2316c0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2316c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2316c4:
    // 0x2316c4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2316c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2316c8:
    // 0x2316c8: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x2316c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_2316cc:
    // 0x2316cc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2316ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_2316d0:
    // 0x2316d0: 0xc0a7ab4  jal         func_29EAD0
label_2316d4:
    if (ctx->pc == 0x2316D4u) {
        ctx->pc = 0x2316D4u;
            // 0x2316d4: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x2316D8u;
        goto label_2316d8;
    }
    ctx->pc = 0x2316D0u;
    SET_GPR_U32(ctx, 31, 0x2316D8u);
    ctx->pc = 0x2316D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2316D0u;
            // 0x2316d4: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2316D8u; }
        if (ctx->pc != 0x2316D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2316D8u; }
        if (ctx->pc != 0x2316D8u) { return; }
    }
    ctx->pc = 0x2316D8u;
label_2316d8:
    // 0x2316d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2316d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2316dc:
    // 0x2316dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2316dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2316e0:
    // 0x2316e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2316e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2316e4:
    // 0x2316e4: 0x3e00008  jr          $ra
label_2316e8:
    if (ctx->pc == 0x2316E8u) {
        ctx->pc = 0x2316E8u;
            // 0x2316e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2316ECu;
        goto label_2316ec;
    }
    ctx->pc = 0x2316E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2316E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2316E4u;
            // 0x2316e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2316ECu;
label_2316ec:
    // 0x2316ec: 0x0  nop
    ctx->pc = 0x2316ecu;
    // NOP
}
