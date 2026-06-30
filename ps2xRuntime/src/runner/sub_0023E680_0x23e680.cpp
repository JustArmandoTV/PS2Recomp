#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023E680
// Address: 0x23e680 - 0x23e8b0
void sub_0023E680_0x23e680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E680_0x23e680");
#endif

    switch (ctx->pc) {
        case 0x23e680u: goto label_23e680;
        case 0x23e684u: goto label_23e684;
        case 0x23e688u: goto label_23e688;
        case 0x23e68cu: goto label_23e68c;
        case 0x23e690u: goto label_23e690;
        case 0x23e694u: goto label_23e694;
        case 0x23e698u: goto label_23e698;
        case 0x23e69cu: goto label_23e69c;
        case 0x23e6a0u: goto label_23e6a0;
        case 0x23e6a4u: goto label_23e6a4;
        case 0x23e6a8u: goto label_23e6a8;
        case 0x23e6acu: goto label_23e6ac;
        case 0x23e6b0u: goto label_23e6b0;
        case 0x23e6b4u: goto label_23e6b4;
        case 0x23e6b8u: goto label_23e6b8;
        case 0x23e6bcu: goto label_23e6bc;
        case 0x23e6c0u: goto label_23e6c0;
        case 0x23e6c4u: goto label_23e6c4;
        case 0x23e6c8u: goto label_23e6c8;
        case 0x23e6ccu: goto label_23e6cc;
        case 0x23e6d0u: goto label_23e6d0;
        case 0x23e6d4u: goto label_23e6d4;
        case 0x23e6d8u: goto label_23e6d8;
        case 0x23e6dcu: goto label_23e6dc;
        case 0x23e6e0u: goto label_23e6e0;
        case 0x23e6e4u: goto label_23e6e4;
        case 0x23e6e8u: goto label_23e6e8;
        case 0x23e6ecu: goto label_23e6ec;
        case 0x23e6f0u: goto label_23e6f0;
        case 0x23e6f4u: goto label_23e6f4;
        case 0x23e6f8u: goto label_23e6f8;
        case 0x23e6fcu: goto label_23e6fc;
        case 0x23e700u: goto label_23e700;
        case 0x23e704u: goto label_23e704;
        case 0x23e708u: goto label_23e708;
        case 0x23e70cu: goto label_23e70c;
        case 0x23e710u: goto label_23e710;
        case 0x23e714u: goto label_23e714;
        case 0x23e718u: goto label_23e718;
        case 0x23e71cu: goto label_23e71c;
        case 0x23e720u: goto label_23e720;
        case 0x23e724u: goto label_23e724;
        case 0x23e728u: goto label_23e728;
        case 0x23e72cu: goto label_23e72c;
        case 0x23e730u: goto label_23e730;
        case 0x23e734u: goto label_23e734;
        case 0x23e738u: goto label_23e738;
        case 0x23e73cu: goto label_23e73c;
        case 0x23e740u: goto label_23e740;
        case 0x23e744u: goto label_23e744;
        case 0x23e748u: goto label_23e748;
        case 0x23e74cu: goto label_23e74c;
        case 0x23e750u: goto label_23e750;
        case 0x23e754u: goto label_23e754;
        case 0x23e758u: goto label_23e758;
        case 0x23e75cu: goto label_23e75c;
        case 0x23e760u: goto label_23e760;
        case 0x23e764u: goto label_23e764;
        case 0x23e768u: goto label_23e768;
        case 0x23e76cu: goto label_23e76c;
        case 0x23e770u: goto label_23e770;
        case 0x23e774u: goto label_23e774;
        case 0x23e778u: goto label_23e778;
        case 0x23e77cu: goto label_23e77c;
        case 0x23e780u: goto label_23e780;
        case 0x23e784u: goto label_23e784;
        case 0x23e788u: goto label_23e788;
        case 0x23e78cu: goto label_23e78c;
        case 0x23e790u: goto label_23e790;
        case 0x23e794u: goto label_23e794;
        case 0x23e798u: goto label_23e798;
        case 0x23e79cu: goto label_23e79c;
        case 0x23e7a0u: goto label_23e7a0;
        case 0x23e7a4u: goto label_23e7a4;
        case 0x23e7a8u: goto label_23e7a8;
        case 0x23e7acu: goto label_23e7ac;
        case 0x23e7b0u: goto label_23e7b0;
        case 0x23e7b4u: goto label_23e7b4;
        case 0x23e7b8u: goto label_23e7b8;
        case 0x23e7bcu: goto label_23e7bc;
        case 0x23e7c0u: goto label_23e7c0;
        case 0x23e7c4u: goto label_23e7c4;
        case 0x23e7c8u: goto label_23e7c8;
        case 0x23e7ccu: goto label_23e7cc;
        case 0x23e7d0u: goto label_23e7d0;
        case 0x23e7d4u: goto label_23e7d4;
        case 0x23e7d8u: goto label_23e7d8;
        case 0x23e7dcu: goto label_23e7dc;
        case 0x23e7e0u: goto label_23e7e0;
        case 0x23e7e4u: goto label_23e7e4;
        case 0x23e7e8u: goto label_23e7e8;
        case 0x23e7ecu: goto label_23e7ec;
        case 0x23e7f0u: goto label_23e7f0;
        case 0x23e7f4u: goto label_23e7f4;
        case 0x23e7f8u: goto label_23e7f8;
        case 0x23e7fcu: goto label_23e7fc;
        case 0x23e800u: goto label_23e800;
        case 0x23e804u: goto label_23e804;
        case 0x23e808u: goto label_23e808;
        case 0x23e80cu: goto label_23e80c;
        case 0x23e810u: goto label_23e810;
        case 0x23e814u: goto label_23e814;
        case 0x23e818u: goto label_23e818;
        case 0x23e81cu: goto label_23e81c;
        case 0x23e820u: goto label_23e820;
        case 0x23e824u: goto label_23e824;
        case 0x23e828u: goto label_23e828;
        case 0x23e82cu: goto label_23e82c;
        case 0x23e830u: goto label_23e830;
        case 0x23e834u: goto label_23e834;
        case 0x23e838u: goto label_23e838;
        case 0x23e83cu: goto label_23e83c;
        case 0x23e840u: goto label_23e840;
        case 0x23e844u: goto label_23e844;
        case 0x23e848u: goto label_23e848;
        case 0x23e84cu: goto label_23e84c;
        case 0x23e850u: goto label_23e850;
        case 0x23e854u: goto label_23e854;
        case 0x23e858u: goto label_23e858;
        case 0x23e85cu: goto label_23e85c;
        case 0x23e860u: goto label_23e860;
        case 0x23e864u: goto label_23e864;
        case 0x23e868u: goto label_23e868;
        case 0x23e86cu: goto label_23e86c;
        case 0x23e870u: goto label_23e870;
        case 0x23e874u: goto label_23e874;
        case 0x23e878u: goto label_23e878;
        case 0x23e87cu: goto label_23e87c;
        case 0x23e880u: goto label_23e880;
        case 0x23e884u: goto label_23e884;
        case 0x23e888u: goto label_23e888;
        case 0x23e88cu: goto label_23e88c;
        case 0x23e890u: goto label_23e890;
        case 0x23e894u: goto label_23e894;
        case 0x23e898u: goto label_23e898;
        case 0x23e89cu: goto label_23e89c;
        case 0x23e8a0u: goto label_23e8a0;
        case 0x23e8a4u: goto label_23e8a4;
        case 0x23e8a8u: goto label_23e8a8;
        case 0x23e8acu: goto label_23e8ac;
        default: break;
    }

    ctx->pc = 0x23e680u;

label_23e680:
    // 0x23e680: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x23e680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_23e684:
    // 0x23e684: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x23e684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_23e688:
    // 0x23e688: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x23e688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_23e68c:
    // 0x23e68c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x23e68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_23e690:
    // 0x23e690: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x23e690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_23e694:
    // 0x23e694: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x23e694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_23e698:
    // 0x23e698: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23e698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_23e69c:
    // 0x23e69c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x23e69cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23e6a0:
    // 0x23e6a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23e6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23e6a4:
    // 0x23e6a4: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x23e6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_23e6a8:
    // 0x23e6a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23e6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23e6ac:
    // 0x23e6ac: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x23e6acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23e6b0:
    // 0x23e6b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23e6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23e6b4:
    // 0x23e6b4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x23e6b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23e6b8:
    // 0x23e6b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23e6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23e6bc:
    // 0x23e6bc: 0x8cb10094  lw          $s1, 0x94($a1)
    ctx->pc = 0x23e6bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
label_23e6c0:
    // 0x23e6c0: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x23e6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_23e6c4:
    // 0x23e6c4: 0xafa30088  sw          $v1, 0x88($sp)
    ctx->pc = 0x23e6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
label_23e6c8:
    // 0x23e6c8: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x23e6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_23e6cc:
    // 0x23e6cc: 0x94a301ec  lhu         $v1, 0x1EC($a1)
    ctx->pc = 0x23e6ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 492)));
label_23e6d0:
    // 0x23e6d0: 0x1860005f  blez        $v1, . + 4 + (0x5F << 2)
label_23e6d4:
    if (ctx->pc == 0x23E6D4u) {
        ctx->pc = 0x23E6D4u;
            // 0x23e6d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23E6D8u;
        goto label_23e6d8;
    }
    ctx->pc = 0x23E6D0u;
    {
        const bool branch_taken_0x23e6d0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x23E6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E6D0u;
            // 0x23e6d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e6d0) {
            ctx->pc = 0x23E850u;
            goto label_23e850;
        }
    }
    ctx->pc = 0x23E6D8u;
label_23e6d8:
    // 0x23e6d8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x23e6d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23e6dc:
    // 0x23e6dc: 0x8e8201e8  lw          $v0, 0x1E8($s4)
    ctx->pc = 0x23e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 488)));
label_23e6e0:
    // 0x23e6e0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x23e6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_23e6e4:
    // 0x23e6e4: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x23e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_23e6e8:
    // 0x23e6e8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x23e6e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23e6ec:
    // 0x23e6ec: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x23e6ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23e6f0:
    // 0x23e6f0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x23e6f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_23e6f4:
    // 0x23e6f4: 0x320f809  jalr        $t9
label_23e6f8:
    if (ctx->pc == 0x23E6F8u) {
        ctx->pc = 0x23E6F8u;
            // 0x23e6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23E6FCu;
        goto label_23e6fc;
    }
    ctx->pc = 0x23E6F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23E6FCu);
        ctx->pc = 0x23E6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E6F4u;
            // 0x23e6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23E6FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23E6FCu; }
            if (ctx->pc != 0x23E6FCu) { return; }
        }
        }
    }
    ctx->pc = 0x23E6FCu;
label_23e6fc:
    // 0x23e6fc: 0x8fa60084  lw          $a2, 0x84($sp)
    ctx->pc = 0x23e6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_23e700:
    // 0x23e700: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23e700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23e704:
    // 0x23e704: 0x18c00010  blez        $a2, . + 4 + (0x10 << 2)
label_23e708:
    if (ctx->pc == 0x23E708u) {
        ctx->pc = 0x23E708u;
            // 0x23e708: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23E70Cu;
        goto label_23e70c;
    }
    ctx->pc = 0x23E704u;
    {
        const bool branch_taken_0x23e704 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x23E708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E704u;
            // 0x23e708: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e704) {
            ctx->pc = 0x23E748u;
            goto label_23e748;
        }
    }
    ctx->pc = 0x23E70Cu;
label_23e70c:
    // 0x23e70c: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x23e70cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_23e710:
    // 0x23e710: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x23e710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_23e714:
    // 0x23e714: 0x90a400a8  lbu         $a0, 0xA8($a1)
    ctx->pc = 0x23e714u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 168)));
label_23e718:
    // 0x23e718: 0x38840007  xori        $a0, $a0, 0x7
    ctx->pc = 0x23e718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
label_23e71c:
    // 0x23e71c: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x23e71cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23e720:
    // 0x23e720: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_23e724:
    if (ctx->pc == 0x23E724u) {
        ctx->pc = 0x23E728u;
        goto label_23e728;
    }
    ctx->pc = 0x23E720u;
    {
        const bool branch_taken_0x23e720 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e720) {
            ctx->pc = 0x23E738u;
            goto label_23e738;
        }
    }
    ctx->pc = 0x23E728u;
label_23e728:
    // 0x23e728: 0x10b40003  beq         $a1, $s4, . + 4 + (0x3 << 2)
label_23e72c:
    if (ctx->pc == 0x23E72Cu) {
        ctx->pc = 0x23E730u;
        goto label_23e730;
    }
    ctx->pc = 0x23E728u;
    {
        const bool branch_taken_0x23e728 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 20));
        if (branch_taken_0x23e728) {
            ctx->pc = 0x23E738u;
            goto label_23e738;
        }
    }
    ctx->pc = 0x23E730u;
label_23e730:
    // 0x23e730: 0x10000005  b           . + 4 + (0x5 << 2)
label_23e734:
    if (ctx->pc == 0x23E734u) {
        ctx->pc = 0x23E734u;
            // 0x23e734: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23E738u;
        goto label_23e738;
    }
    ctx->pc = 0x23E730u;
    {
        const bool branch_taken_0x23e730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E730u;
            // 0x23e734: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e730) {
            ctx->pc = 0x23E748u;
            goto label_23e748;
        }
    }
    ctx->pc = 0x23E738u;
label_23e738:
    // 0x23e738: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x23e738u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_23e73c:
    // 0x23e73c: 0x106202a  slt         $a0, $t0, $a2
    ctx->pc = 0x23e73cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_23e740:
    // 0x23e740: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
label_23e744:
    if (ctx->pc == 0x23E744u) {
        ctx->pc = 0x23E744u;
            // 0x23e744: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x23E748u;
        goto label_23e748;
    }
    ctx->pc = 0x23E740u;
    {
        const bool branch_taken_0x23e740 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E740u;
            // 0x23e744: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e740) {
            ctx->pc = 0x23E710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23e710;
        }
    }
    ctx->pc = 0x23E748u;
label_23e748:
    // 0x23e748: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x23e748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_23e74c:
    // 0x23e74c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x23e74cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_23e750:
    // 0x23e750: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
label_23e754:
    if (ctx->pc == 0x23E754u) {
        ctx->pc = 0x23E758u;
        goto label_23e758;
    }
    ctx->pc = 0x23E750u;
    {
        const bool branch_taken_0x23e750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e750) {
            ctx->pc = 0x23E838u;
            goto label_23e838;
        }
    }
    ctx->pc = 0x23E758u;
label_23e758:
    // 0x23e758: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x23e758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_23e75c:
    // 0x23e75c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x23e75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_23e760:
    // 0x23e760: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x23e760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_23e764:
    // 0x23e764: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x23e764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_23e768:
    // 0x23e768: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_23e76c:
    if (ctx->pc == 0x23E76Cu) {
        ctx->pc = 0x23E770u;
        goto label_23e770;
    }
    ctx->pc = 0x23E768u;
    {
        const bool branch_taken_0x23e768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23e768) {
            ctx->pc = 0x23E780u;
            goto label_23e780;
        }
    }
    ctx->pc = 0x23E770u;
label_23e770:
    // 0x23e770: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23e770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23e774:
    // 0x23e774: 0xc0a728c  jal         func_29CA30
label_23e778:
    if (ctx->pc == 0x23E778u) {
        ctx->pc = 0x23E778u;
            // 0x23e778: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x23E77Cu;
        goto label_23e77c;
    }
    ctx->pc = 0x23E774u;
    SET_GPR_U32(ctx, 31, 0x23E77Cu);
    ctx->pc = 0x23E778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E774u;
            // 0x23e778: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E77Cu; }
        if (ctx->pc != 0x23E77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E77Cu; }
        if (ctx->pc != 0x23E77Cu) { return; }
    }
    ctx->pc = 0x23E77Cu;
label_23e77c:
    // 0x23e77c: 0x0  nop
    ctx->pc = 0x23e77cu;
    // NOP
label_23e780:
    // 0x23e780: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x23e780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_23e784:
    // 0x23e784: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x23e784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23e788:
    // 0x23e788: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x23e788u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_23e78c:
    // 0x23e78c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23e78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23e790:
    // 0x23e790: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x23e790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_23e794:
    // 0x23e794: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23e794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23e798:
    // 0x23e798: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x23e798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_23e79c:
    // 0x23e79c: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x23e79cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_23e7a0:
    // 0x23e7a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23e7a4:
    if (ctx->pc == 0x23E7A4u) {
        ctx->pc = 0x23E7A8u;
        goto label_23e7a8;
    }
    ctx->pc = 0x23E7A0u;
    {
        const bool branch_taken_0x23e7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e7a0) {
            ctx->pc = 0x23E7B8u;
            goto label_23e7b8;
        }
    }
    ctx->pc = 0x23E7A8u;
label_23e7a8:
    // 0x23e7a8: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x23e7a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_23e7ac:
    // 0x23e7ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23e7b0:
    // 0x23e7b0: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x23e7b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_23e7b4:
    // 0x23e7b4: 0x0  nop
    ctx->pc = 0x23e7b4u;
    // NOP
label_23e7b8:
    // 0x23e7b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23e7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e7bc:
    // 0x23e7bc: 0xc08b7a4  jal         func_22DE90
label_23e7c0:
    if (ctx->pc == 0x23E7C0u) {
        ctx->pc = 0x23E7C0u;
            // 0x23e7c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23E7C4u;
        goto label_23e7c4;
    }
    ctx->pc = 0x23E7BCu;
    SET_GPR_U32(ctx, 31, 0x23E7C4u);
    ctx->pc = 0x23E7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E7BCu;
            // 0x23e7c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22DE90u;
    if (runtime->hasFunction(0x22DE90u)) {
        auto targetFn = runtime->lookupFunction(0x22DE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E7C4u; }
        if (ctx->pc != 0x23E7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022DE90_0x22de90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E7C4u; }
        if (ctx->pc != 0x23E7C4u) { return; }
    }
    ctx->pc = 0x23E7C4u;
label_23e7c4:
    // 0x23e7c4: 0x92260027  lbu         $a2, 0x27($s1)
    ctx->pc = 0x23e7c4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 39)));
label_23e7c8:
    // 0x23e7c8: 0x2404ffcf  addiu       $a0, $zero, -0x31
    ctx->pc = 0x23e7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
label_23e7cc:
    // 0x23e7cc: 0x64050010  daddiu      $a1, $zero, 0x10
    ctx->pc = 0x23e7ccu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
label_23e7d0:
    // 0x23e7d0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x23e7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_23e7d4:
    // 0x23e7d4: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x23e7d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_23e7d8:
    // 0x23e7d8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x23e7d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_23e7dc:
    // 0x23e7dc: 0xa2240027  sb          $a0, 0x27($s1)
    ctx->pc = 0x23e7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 39), (uint8_t)GPR_U32(ctx, 4));
label_23e7e0:
    // 0x23e7e0: 0x96240022  lhu         $a0, 0x22($s1)
    ctx->pc = 0x23e7e0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
label_23e7e4:
    // 0x23e7e4: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
label_23e7e8:
    if (ctx->pc == 0x23E7E8u) {
        ctx->pc = 0x23E7ECu;
        goto label_23e7ec;
    }
    ctx->pc = 0x23E7E4u;
    {
        const bool branch_taken_0x23e7e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x23e7e4) {
            ctx->pc = 0x23E838u;
            goto label_23e838;
        }
    }
    ctx->pc = 0x23E7ECu;
label_23e7ec:
    // 0x23e7ec: 0x8ea30044  lw          $v1, 0x44($s5)
    ctx->pc = 0x23e7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_23e7f0:
    // 0x23e7f0: 0xa6230022  sh          $v1, 0x22($s1)
    ctx->pc = 0x23e7f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 3));
label_23e7f4:
    // 0x23e7f4: 0x8ea30048  lw          $v1, 0x48($s5)
    ctx->pc = 0x23e7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_23e7f8:
    // 0x23e7f8: 0x8ea40044  lw          $a0, 0x44($s5)
    ctx->pc = 0x23e7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_23e7fc:
    // 0x23e7fc: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x23e7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_23e800:
    // 0x23e800: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x23e800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_23e804:
    // 0x23e804: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_23e808:
    if (ctx->pc == 0x23E808u) {
        ctx->pc = 0x23E80Cu;
        goto label_23e80c;
    }
    ctx->pc = 0x23E804u;
    {
        const bool branch_taken_0x23e804 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x23e804) {
            ctx->pc = 0x23E818u;
            goto label_23e818;
        }
    }
    ctx->pc = 0x23E80Cu;
label_23e80c:
    // 0x23e80c: 0x26a40040  addiu       $a0, $s5, 0x40
    ctx->pc = 0x23e80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
label_23e810:
    // 0x23e810: 0xc0a728c  jal         func_29CA30
label_23e814:
    if (ctx->pc == 0x23E814u) {
        ctx->pc = 0x23E814u;
            // 0x23e814: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x23E818u;
        goto label_23e818;
    }
    ctx->pc = 0x23E810u;
    SET_GPR_U32(ctx, 31, 0x23E818u);
    ctx->pc = 0x23E814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E810u;
            // 0x23e814: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E818u; }
        if (ctx->pc != 0x23E818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E818u; }
        if (ctx->pc != 0x23E818u) { return; }
    }
    ctx->pc = 0x23E818u;
label_23e818:
    // 0x23e818: 0x8ea40044  lw          $a0, 0x44($s5)
    ctx->pc = 0x23e818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_23e81c:
    // 0x23e81c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x23e81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23e820:
    // 0x23e820: 0xaea30044  sw          $v1, 0x44($s5)
    ctx->pc = 0x23e820u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
label_23e824:
    // 0x23e824: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23e824u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_23e828:
    // 0x23e828: 0x8ea30040  lw          $v1, 0x40($s5)
    ctx->pc = 0x23e828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_23e82c:
    // 0x23e82c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23e82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23e830:
    // 0x23e830: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x23e830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_23e834:
    // 0x23e834: 0x0  nop
    ctx->pc = 0x23e834u;
    // NOP
label_23e838:
    // 0x23e838: 0x968301ec  lhu         $v1, 0x1EC($s4)
    ctx->pc = 0x23e838u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 492)));
label_23e83c:
    // 0x23e83c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23e83cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_23e840:
    // 0x23e840: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x23e840u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23e844:
    // 0x23e844: 0x1460ffa5  bnez        $v1, . + 4 + (-0x5B << 2)
label_23e848:
    if (ctx->pc == 0x23E848u) {
        ctx->pc = 0x23E848u;
            // 0x23e848: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x23E84Cu;
        goto label_23e84c;
    }
    ctx->pc = 0x23E844u;
    {
        const bool branch_taken_0x23e844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E844u;
            // 0x23e848: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e844) {
            ctx->pc = 0x23E6DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23e6dc;
        }
    }
    ctx->pc = 0x23E84Cu;
label_23e84c:
    // 0x23e84c: 0x0  nop
    ctx->pc = 0x23e84cu;
    // NOP
label_23e850:
    // 0x23e850: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23e850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_23e854:
    // 0x23e854: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x23e854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_23e858:
    // 0x23e858: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23e858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_23e85c:
    // 0x23e85c: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_23e860:
    if (ctx->pc == 0x23E860u) {
        ctx->pc = 0x23E860u;
            // 0x23e860: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x23E864u;
        goto label_23e864;
    }
    ctx->pc = 0x23E85Cu;
    {
        const bool branch_taken_0x23e85c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e85c) {
            ctx->pc = 0x23E860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23E85Cu;
            // 0x23e860: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23E88Cu;
            goto label_23e88c;
        }
    }
    ctx->pc = 0x23E864u;
label_23e864:
    // 0x23e864: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23e864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23e868:
    // 0x23e868: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_23e86c:
    // 0x23e86c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23e86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23e870:
    // 0x23e870: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x23e870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_23e874:
    // 0x23e874: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x23e874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_23e878:
    // 0x23e878: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x23e878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_23e87c:
    // 0x23e87c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x23e87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_23e880:
    // 0x23e880: 0xc0a7ab4  jal         func_29EAD0
label_23e884:
    if (ctx->pc == 0x23E884u) {
        ctx->pc = 0x23E884u;
            // 0x23e884: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x23E888u;
        goto label_23e888;
    }
    ctx->pc = 0x23E880u;
    SET_GPR_U32(ctx, 31, 0x23E888u);
    ctx->pc = 0x23E884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E880u;
            // 0x23e884: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E888u; }
        if (ctx->pc != 0x23E888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E888u; }
        if (ctx->pc != 0x23E888u) { return; }
    }
    ctx->pc = 0x23E888u;
label_23e888:
    // 0x23e888: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x23e888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_23e88c:
    // 0x23e88c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x23e88cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_23e890:
    // 0x23e890: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x23e890u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23e894:
    // 0x23e894: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23e894u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23e898:
    // 0x23e898: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23e898u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23e89c:
    // 0x23e89c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23e89cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23e8a0:
    // 0x23e8a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23e8a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23e8a4:
    // 0x23e8a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23e8a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23e8a8:
    // 0x23e8a8: 0x3e00008  jr          $ra
label_23e8ac:
    if (ctx->pc == 0x23E8ACu) {
        ctx->pc = 0x23E8ACu;
            // 0x23e8ac: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x23E8B0u;
        goto label_fallthrough_0x23e8a8;
    }
    ctx->pc = 0x23E8A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E8A8u;
            // 0x23e8ac: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x23e8a8:
    ctx->pc = 0x23E8B0u;
}
