#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001885D8
// Address: 0x1885d8 - 0x1886b0
void sub_001885D8_0x1885d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001885D8_0x1885d8");
#endif

    switch (ctx->pc) {
        case 0x1885d8u: goto label_1885d8;
        case 0x1885dcu: goto label_1885dc;
        case 0x1885e0u: goto label_1885e0;
        case 0x1885e4u: goto label_1885e4;
        case 0x1885e8u: goto label_1885e8;
        case 0x1885ecu: goto label_1885ec;
        case 0x1885f0u: goto label_1885f0;
        case 0x1885f4u: goto label_1885f4;
        case 0x1885f8u: goto label_1885f8;
        case 0x1885fcu: goto label_1885fc;
        case 0x188600u: goto label_188600;
        case 0x188604u: goto label_188604;
        case 0x188608u: goto label_188608;
        case 0x18860cu: goto label_18860c;
        case 0x188610u: goto label_188610;
        case 0x188614u: goto label_188614;
        case 0x188618u: goto label_188618;
        case 0x18861cu: goto label_18861c;
        case 0x188620u: goto label_188620;
        case 0x188624u: goto label_188624;
        case 0x188628u: goto label_188628;
        case 0x18862cu: goto label_18862c;
        case 0x188630u: goto label_188630;
        case 0x188634u: goto label_188634;
        case 0x188638u: goto label_188638;
        case 0x18863cu: goto label_18863c;
        case 0x188640u: goto label_188640;
        case 0x188644u: goto label_188644;
        case 0x188648u: goto label_188648;
        case 0x18864cu: goto label_18864c;
        case 0x188650u: goto label_188650;
        case 0x188654u: goto label_188654;
        case 0x188658u: goto label_188658;
        case 0x18865cu: goto label_18865c;
        case 0x188660u: goto label_188660;
        case 0x188664u: goto label_188664;
        case 0x188668u: goto label_188668;
        case 0x18866cu: goto label_18866c;
        case 0x188670u: goto label_188670;
        case 0x188674u: goto label_188674;
        case 0x188678u: goto label_188678;
        case 0x18867cu: goto label_18867c;
        case 0x188680u: goto label_188680;
        case 0x188684u: goto label_188684;
        case 0x188688u: goto label_188688;
        case 0x18868cu: goto label_18868c;
        case 0x188690u: goto label_188690;
        case 0x188694u: goto label_188694;
        case 0x188698u: goto label_188698;
        case 0x18869cu: goto label_18869c;
        case 0x1886a0u: goto label_1886a0;
        case 0x1886a4u: goto label_1886a4;
        case 0x1886a8u: goto label_1886a8;
        case 0x1886acu: goto label_1886ac;
        default: break;
    }

    ctx->pc = 0x1885d8u;

label_1885d8:
    // 0x1885d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1885d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1885dc:
    // 0x1885dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1885dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1885e0:
    // 0x1885e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1885e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1885e4:
    // 0x1885e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1885e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1885e8:
    // 0x1885e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1885e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1885ec:
    // 0x1885ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1885ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1885f0:
    // 0x1885f0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1885f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1885f4:
    // 0x1885f4: 0xc061f74  jal         func_187DD0
label_1885f8:
    if (ctx->pc == 0x1885F8u) {
        ctx->pc = 0x1885F8u;
            // 0x1885f8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1885FCu;
        goto label_1885fc;
    }
    ctx->pc = 0x1885F4u;
    SET_GPR_U32(ctx, 31, 0x1885FCu);
    ctx->pc = 0x1885F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1885F4u;
            // 0x1885f8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187DD0u;
    if (runtime->hasFunction(0x187DD0u)) {
        auto targetFn = runtime->lookupFunction(0x187DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885FCu; }
        if (ctx->pc != 0x1885FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187DD0_0x187dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885FCu; }
        if (ctx->pc != 0x1885FCu) { return; }
    }
    ctx->pc = 0x1885FCu;
label_1885fc:
    // 0x1885fc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1885fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_188600:
    // 0x188600: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x188600u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_188604:
    // 0x188604: 0x2442fde0  addiu       $v0, $v0, -0x220
    ctx->pc = 0x188604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966752));
label_188608:
    // 0x188608: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x188608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_18860c:
    // 0x18860c: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x18860cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_188610:
    // 0x188610: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x188610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_188614:
    // 0x188614: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x188614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_188618:
    // 0x188618: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x188618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
label_18861c:
    // 0x18861c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18861cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_188620:
    // 0x188620: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x188620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_188624:
    // 0x188624: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x188624u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_188628:
    // 0x188628: 0x8061f7a  j           func_187DE8
label_18862c:
    if (ctx->pc == 0x18862Cu) {
        ctx->pc = 0x18862Cu;
            // 0x18862c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x188630u;
        goto label_188630;
    }
    ctx->pc = 0x188628u;
    ctx->pc = 0x18862Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188628u;
            // 0x18862c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187DE8u;
    if (runtime->hasFunction(0x187DE8u)) {
        auto targetFn = runtime->lookupFunction(0x187DE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187DE8_0x187de8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x188630u;
label_188630:
    // 0x188630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_188634:
    // 0x188634: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x188634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_188638:
    // 0x188638: 0x2442fde0  addiu       $v0, $v0, -0x220
    ctx->pc = 0x188638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966752));
label_18863c:
    // 0x18863c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18863cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_188640:
    // 0x188640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_188644:
    // 0x188644: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x188644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_188648:
    // 0x188648: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x188648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_18864c:
    // 0x18864c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18864cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_188650:
    // 0x188650: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_188654:
    if (ctx->pc == 0x188654u) {
        ctx->pc = 0x188654u;
            // 0x188654: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x188658u;
        goto label_188658;
    }
    ctx->pc = 0x188650u;
    {
        const bool branch_taken_0x188650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188650) {
            ctx->pc = 0x188654u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x188650u;
            // 0x188654: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x188664u;
            goto label_188664;
        }
    }
    ctx->pc = 0x188658u;
label_188658:
    // 0x188658: 0x40f809  jalr        $v0
label_18865c:
    if (ctx->pc == 0x18865Cu) {
        ctx->pc = 0x18865Cu;
            // 0x18865c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = 0x188660u;
        goto label_188660;
    }
    ctx->pc = 0x188658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x188660u);
        ctx->pc = 0x18865Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188658u;
            // 0x18865c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x188660u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x188660u; }
            if (ctx->pc != 0x188660u) { return; }
        }
        }
    }
    ctx->pc = 0x188660u;
label_188660:
    // 0x188660: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_188664:
    // 0x188664: 0x3e00008  jr          $ra
label_188668:
    if (ctx->pc == 0x188668u) {
        ctx->pc = 0x188668u;
            // 0x188668: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18866Cu;
        goto label_18866c;
    }
    ctx->pc = 0x188664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188664u;
            // 0x188668: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18866Cu;
label_18866c:
    // 0x18866c: 0x0  nop
    ctx->pc = 0x18866cu;
    // NOP
label_188670:
    // 0x188670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x188670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_188674:
    // 0x188674: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x188674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_188678:
    // 0x188678: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x188678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18867c:
    // 0x18867c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18867cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_188680:
    // 0x188680: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x188680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_188684:
    // 0x188684: 0xc061f74  jal         func_187DD0
label_188688:
    if (ctx->pc == 0x188688u) {
        ctx->pc = 0x188688u;
            // 0x188688: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18868Cu;
        goto label_18868c;
    }
    ctx->pc = 0x188684u;
    SET_GPR_U32(ctx, 31, 0x18868Cu);
    ctx->pc = 0x188688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188684u;
            // 0x188688: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187DD0u;
    if (runtime->hasFunction(0x187DD0u)) {
        auto targetFn = runtime->lookupFunction(0x187DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18868Cu; }
        if (ctx->pc != 0x18868Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187DD0_0x187dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18868Cu; }
        if (ctx->pc != 0x18868Cu) { return; }
    }
    ctx->pc = 0x18868Cu;
label_18868c:
    // 0x18868c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x18868cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_188690:
    // 0x188690: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x188690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_188694:
    // 0x188694: 0x2442fe30  addiu       $v0, $v0, -0x1D0
    ctx->pc = 0x188694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966832));
label_188698:
    // 0x188698: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x188698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_18869c:
    // 0x18869c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x18869cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_1886a0:
    // 0x1886a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1886a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1886a4:
    // 0x1886a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1886a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1886a8:
    // 0x1886a8: 0x8061f7a  j           func_187DE8
label_1886ac:
    if (ctx->pc == 0x1886ACu) {
        ctx->pc = 0x1886ACu;
            // 0x1886ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1886B0u;
        goto label_fallthrough_0x1886a8;
    }
    ctx->pc = 0x1886A8u;
    ctx->pc = 0x1886ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1886A8u;
            // 0x1886ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187DE8u;
    if (runtime->hasFunction(0x187DE8u)) {
        auto targetFn = runtime->lookupFunction(0x187DE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187DE8_0x187de8(rdram, ctx, runtime); return;
    }
label_fallthrough_0x1886a8:
    ctx->pc = 0x1886B0u;
}
