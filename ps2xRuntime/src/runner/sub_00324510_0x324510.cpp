#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00324510
// Address: 0x324510 - 0x3245b0
void sub_00324510_0x324510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324510_0x324510");
#endif

    switch (ctx->pc) {
        case 0x324510u: goto label_324510;
        case 0x324514u: goto label_324514;
        case 0x324518u: goto label_324518;
        case 0x32451cu: goto label_32451c;
        case 0x324520u: goto label_324520;
        case 0x324524u: goto label_324524;
        case 0x324528u: goto label_324528;
        case 0x32452cu: goto label_32452c;
        case 0x324530u: goto label_324530;
        case 0x324534u: goto label_324534;
        case 0x324538u: goto label_324538;
        case 0x32453cu: goto label_32453c;
        case 0x324540u: goto label_324540;
        case 0x324544u: goto label_324544;
        case 0x324548u: goto label_324548;
        case 0x32454cu: goto label_32454c;
        case 0x324550u: goto label_324550;
        case 0x324554u: goto label_324554;
        case 0x324558u: goto label_324558;
        case 0x32455cu: goto label_32455c;
        case 0x324560u: goto label_324560;
        case 0x324564u: goto label_324564;
        case 0x324568u: goto label_324568;
        case 0x32456cu: goto label_32456c;
        case 0x324570u: goto label_324570;
        case 0x324574u: goto label_324574;
        case 0x324578u: goto label_324578;
        case 0x32457cu: goto label_32457c;
        case 0x324580u: goto label_324580;
        case 0x324584u: goto label_324584;
        case 0x324588u: goto label_324588;
        case 0x32458cu: goto label_32458c;
        case 0x324590u: goto label_324590;
        case 0x324594u: goto label_324594;
        case 0x324598u: goto label_324598;
        case 0x32459cu: goto label_32459c;
        case 0x3245a0u: goto label_3245a0;
        case 0x3245a4u: goto label_3245a4;
        case 0x3245a8u: goto label_3245a8;
        case 0x3245acu: goto label_3245ac;
        default: break;
    }

    ctx->pc = 0x324510u;

label_324510:
    // 0x324510: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x324510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_324514:
    // 0x324514: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x324514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_324518:
    // 0x324518: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x324518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_32451c:
    // 0x32451c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32451cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_324520:
    // 0x324520: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x324520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_324524:
    // 0x324524: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x324524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_324528:
    // 0x324528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x324528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32452c:
    // 0x32452c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32452cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_324530:
    // 0x324530: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x324530u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_324534:
    // 0x324534: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x324534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_324538:
    // 0x324538: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x324538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32453c:
    // 0x32453c: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x32453cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_324540:
    // 0x324540: 0x320f809  jalr        $t9
label_324544:
    if (ctx->pc == 0x324544u) {
        ctx->pc = 0x324544u;
            // 0x324544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x324548u;
        goto label_324548;
    }
    ctx->pc = 0x324540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x324548u);
        ctx->pc = 0x324544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324540u;
            // 0x324544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x324548u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x324548u; }
            if (ctx->pc != 0x324548u) { return; }
        }
        }
    }
    ctx->pc = 0x324548u;
label_324548:
    // 0x324548: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x324548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32454c:
    // 0x32454c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32454cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_324550:
    // 0x324550: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x324550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_324554:
    // 0x324554: 0x320f809  jalr        $t9
label_324558:
    if (ctx->pc == 0x324558u) {
        ctx->pc = 0x324558u;
            // 0x324558: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32455Cu;
        goto label_32455c;
    }
    ctx->pc = 0x324554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32455Cu);
        ctx->pc = 0x324558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324554u;
            // 0x324558: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32455Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32455Cu; }
            if (ctx->pc != 0x32455Cu) { return; }
        }
        }
    }
    ctx->pc = 0x32455Cu;
label_32455c:
    // 0x32455c: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x32455cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_324560:
    // 0x324560: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x324560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_324564:
    // 0x324564: 0x8c4405dc  lw          $a0, 0x5DC($v0)
    ctx->pc = 0x324564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1500)));
label_324568:
    // 0x324568: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_32456c:
    if (ctx->pc == 0x32456Cu) {
        ctx->pc = 0x324570u;
        goto label_324570;
    }
    ctx->pc = 0x324568u;
    {
        const bool branch_taken_0x324568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x324568) {
            ctx->pc = 0x324580u;
            goto label_324580;
        }
    }
    ctx->pc = 0x324570u;
label_324570:
    // 0x324570: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x324570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_324574:
    // 0x324574: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x324574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_324578:
    // 0x324578: 0x320f809  jalr        $t9
label_32457c:
    if (ctx->pc == 0x32457Cu) {
        ctx->pc = 0x324580u;
        goto label_324580;
    }
    ctx->pc = 0x324578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x324580u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x324580u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x324580u; }
            if (ctx->pc != 0x324580u) { return; }
        }
        }
    }
    ctx->pc = 0x324580u;
label_324580:
    // 0x324580: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x324580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_324584:
    // 0x324584: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x324584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_324588:
    // 0x324588: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x324588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32458c:
    // 0x32458c: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x32458cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_324590:
    // 0x324590: 0x320f809  jalr        $t9
label_324594:
    if (ctx->pc == 0x324594u) {
        ctx->pc = 0x324598u;
        goto label_324598;
    }
    ctx->pc = 0x324590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x324598u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x324598u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x324598u; }
            if (ctx->pc != 0x324598u) { return; }
        }
        }
    }
    ctx->pc = 0x324598u;
label_324598:
    // 0x324598: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x324598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_32459c:
    // 0x32459c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32459cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3245a0:
    // 0x3245a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3245a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3245a4:
    // 0x3245a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3245a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3245a8:
    // 0x3245a8: 0x3e00008  jr          $ra
label_3245ac:
    if (ctx->pc == 0x3245ACu) {
        ctx->pc = 0x3245ACu;
            // 0x3245ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3245B0u;
        goto label_fallthrough_0x3245a8;
    }
    ctx->pc = 0x3245A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3245ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3245A8u;
            // 0x3245ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3245a8:
    ctx->pc = 0x3245B0u;
}
