#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017E6F8
// Address: 0x17e6f8 - 0x17e8b0
void sub_0017E6F8_0x17e6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E6F8_0x17e6f8");
#endif

    switch (ctx->pc) {
        case 0x17e728u: goto label_17e728;
        case 0x17e748u: goto label_17e748;
        case 0x17e750u: goto label_17e750;
        case 0x17e75cu: goto label_17e75c;
        case 0x17e768u: goto label_17e768;
        case 0x17e780u: goto label_17e780;
        case 0x17e7a8u: goto label_17e7a8;
        case 0x17e7ccu: goto label_17e7cc;
        case 0x17e7e8u: goto label_17e7e8;
        case 0x17e7f8u: goto label_17e7f8;
        case 0x17e800u: goto label_17e800;
        case 0x17e808u: goto label_17e808;
        case 0x17e818u: goto label_17e818;
        case 0x17e824u: goto label_17e824;
        case 0x17e838u: goto label_17e838;
        case 0x17e840u: goto label_17e840;
        case 0x17e848u: goto label_17e848;
        case 0x17e850u: goto label_17e850;
        case 0x17e860u: goto label_17e860;
        case 0x17e868u: goto label_17e868;
        case 0x17e874u: goto label_17e874;
        case 0x17e890u: goto label_17e890;
        default: break;
    }

    ctx->pc = 0x17e6f8u;

    // 0x17e6f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17e6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17e6fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17e6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17e700: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17e700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e704: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17e704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17e708: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E708u;
    {
        const bool branch_taken_0x17e708 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E708u;
            // 0x17e70c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e708) {
            ctx->pc = 0x17E720u;
            goto label_17e720;
        }
    }
    ctx->pc = 0x17E710u;
    // 0x17e710: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17e710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17e714: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x17E714u;
    {
        const bool branch_taken_0x17e714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E714u;
            // 0x17e718: 0x24a56248  addiu       $a1, $a1, 0x6248 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e714) {
            ctx->pc = 0x17E888u;
            goto label_17e888;
        }
    }
    ctx->pc = 0x17E71Cu;
    // 0x17e71c: 0x0  nop
    ctx->pc = 0x17e71cu;
    // NOP
label_17e720:
    // 0x17e720: 0xc05fed0  jal         func_17FB40
    ctx->pc = 0x17E720u;
    SET_GPR_U32(ctx, 31, 0x17E728u);
    ctx->pc = 0x17E724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E720u;
            // 0x17e724: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FB40u;
    if (runtime->hasFunction(0x17FB40u)) {
        auto targetFn = runtime->lookupFunction(0x17FB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E728u; }
        if (ctx->pc != 0x17E728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FB40_0x17fb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E728u; }
        if (ctx->pc != 0x17E728u) { return; }
    }
    ctx->pc = 0x17E728u;
label_17e728:
    // 0x17e728: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x17e728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x17e72c: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x17E72Cu;
    {
        const bool branch_taken_0x17e72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E72Cu;
            // 0x17e730: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e72c) {
            ctx->pc = 0x17E898u;
            goto label_17e898;
        }
    }
    ctx->pc = 0x17E734u;
    // 0x17e734: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17e734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17e738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e73c: 0x245169d0  addiu       $s1, $v0, 0x69D0
    ctx->pc = 0x17e73cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 27088));
    // 0x17e740: 0xc05fc92  jal         func_17F248
    ctx->pc = 0x17E740u;
    SET_GPR_U32(ctx, 31, 0x17E748u);
    ctx->pc = 0x17E744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E740u;
            // 0x17e744: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F248u;
    if (runtime->hasFunction(0x17F248u)) {
        auto targetFn = runtime->lookupFunction(0x17F248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E748u; }
        if (ctx->pc != 0x17E748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F248_0x17f248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E748u; }
        if (ctx->pc != 0x17E748u) { return; }
    }
    ctx->pc = 0x17E748u;
label_17e748:
    // 0x17e748: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17E748u;
    SET_GPR_U32(ctx, 31, 0x17E750u);
    ctx->pc = 0x17E74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E748u;
            // 0x17e74c: 0x24044400  addiu       $a0, $zero, 0x4400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E750u; }
        if (ctx->pc != 0x17E750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E750u; }
        if (ctx->pc != 0x17E750u) { return; }
    }
    ctx->pc = 0x17E750u;
label_17e750:
    // 0x17e750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17e750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e754: 0xc05edfe  jal         func_17B7F8
    ctx->pc = 0x17E754u;
    SET_GPR_U32(ctx, 31, 0x17E75Cu);
    ctx->pc = 0x17E758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E754u;
            // 0x17e758: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B7F8u;
    if (runtime->hasFunction(0x17B7F8u)) {
        auto targetFn = runtime->lookupFunction(0x17B7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E75Cu; }
        if (ctx->pc != 0x17E75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B7F8_0x17b7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E75Cu; }
        if (ctx->pc != 0x17E75Cu) { return; }
    }
    ctx->pc = 0x17E75Cu;
label_17e75c:
    // 0x17e75c: 0x24044401  addiu       $a0, $zero, 0x4401
    ctx->pc = 0x17e75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17409));
    // 0x17e760: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17E760u;
    SET_GPR_U32(ctx, 31, 0x17E768u);
    ctx->pc = 0x17E764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E760u;
            // 0x17e764: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E768u; }
        if (ctx->pc != 0x17E768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E768u; }
        if (ctx->pc != 0x17E768u) { return; }
    }
    ctx->pc = 0x17E768u;
label_17e768:
    // 0x17e768: 0x6010009  bgez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E768u;
    {
        const bool branch_taken_0x17e768 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x17E76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E768u;
            // 0x17e76c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e768) {
            ctx->pc = 0x17E790u;
            goto label_17e790;
        }
    }
    ctx->pc = 0x17E770u;
    // 0x17e770: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17e770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17e774: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17e774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e778: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x17E778u;
    SET_GPR_U32(ctx, 31, 0x17E780u);
    ctx->pc = 0x17E77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E778u;
            // 0x17e77c: 0x24846278  addiu       $a0, $a0, 0x6278 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E780u; }
        if (ctx->pc != 0x17E780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E780u; }
        if (ctx->pc != 0x17E780u) { return; }
    }
    ctx->pc = 0x17E780u;
label_17e780:
    // 0x17e780: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17e780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17e784: 0x24a56298  addiu       $a1, $a1, 0x6298
    ctx->pc = 0x17e784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25240));
    // 0x17e788: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x17E788u;
    {
        const bool branch_taken_0x17e788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E788u;
            // 0x17e78c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e788) {
            ctx->pc = 0x17E888u;
            goto label_17e888;
        }
    }
    ctx->pc = 0x17E790u;
label_17e790:
    // 0x17e790: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x17e790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x17e794: 0x56020008  bnel        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17E794u;
    {
        const bool branch_taken_0x17e794 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x17e794) {
            ctx->pc = 0x17E798u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17E794u;
            // 0x17e798: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17E7B8u;
            goto label_17e7b8;
        }
    }
    ctx->pc = 0x17E79Cu;
    // 0x17e79c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17e79cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17e7a0: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x17E7A0u;
    SET_GPR_U32(ctx, 31, 0x17E7A8u);
    ctx->pc = 0x17E7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E7A0u;
            // 0x17e7a4: 0x248462c0  addiu       $a0, $a0, 0x62C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7A8u; }
        if (ctx->pc != 0x17E7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7A8u; }
        if (ctx->pc != 0x17E7A8u) { return; }
    }
    ctx->pc = 0x17E7A8u;
label_17e7a8:
    // 0x17e7a8: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17e7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17e7ac: 0x24a562f8  addiu       $a1, $a1, 0x62F8
    ctx->pc = 0x17e7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25336));
    // 0x17e7b0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x17E7B0u;
    {
        const bool branch_taken_0x17e7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E7B0u;
            // 0x17e7b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e7b0) {
            ctx->pc = 0x17E888u;
            goto label_17e888;
        }
    }
    ctx->pc = 0x17E7B8u;
label_17e7b8:
    // 0x17e7b8: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E7B8u;
    {
        const bool branch_taken_0x17e7b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x17e7b8) {
            ctx->pc = 0x17E7E0u;
            goto label_17e7e0;
        }
    }
    ctx->pc = 0x17E7C0u;
    // 0x17e7c0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17e7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17e7c4: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x17E7C4u;
    SET_GPR_U32(ctx, 31, 0x17E7CCu);
    ctx->pc = 0x17E7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E7C4u;
            // 0x17e7c8: 0x24846320  addiu       $a0, $a0, 0x6320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7CCu; }
        if (ctx->pc != 0x17E7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7CCu; }
        if (ctx->pc != 0x17E7CCu) { return; }
    }
    ctx->pc = 0x17E7CCu;
label_17e7cc:
    // 0x17e7cc: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17e7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17e7d0: 0x24a562f8  addiu       $a1, $a1, 0x62F8
    ctx->pc = 0x17e7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25336));
    // 0x17e7d4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x17E7D4u;
    {
        const bool branch_taken_0x17e7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E7D4u;
            // 0x17e7d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e7d4) {
            ctx->pc = 0x17E888u;
            goto label_17e888;
        }
    }
    ctx->pc = 0x17E7DCu;
    // 0x17e7dc: 0x0  nop
    ctx->pc = 0x17e7dcu;
    // NOP
label_17e7e0:
    // 0x17e7e0: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17E7E0u;
    SET_GPR_U32(ctx, 31, 0x17E7E8u);
    ctx->pc = 0x17E7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E7E0u;
            // 0x17e7e4: 0x24044600  addiu       $a0, $zero, 0x4600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7E8u; }
        if (ctx->pc != 0x17E7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7E8u; }
        if (ctx->pc != 0x17E7E8u) { return; }
    }
    ctx->pc = 0x17E7E8u;
label_17e7e8:
    // 0x17e7e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e7ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e7f0: 0xc05edb2  jal         func_17B6C8
    ctx->pc = 0x17E7F0u;
    SET_GPR_U32(ctx, 31, 0x17E7F8u);
    ctx->pc = 0x17E7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E7F0u;
            // 0x17e7f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B6C8u;
    if (runtime->hasFunction(0x17B6C8u)) {
        auto targetFn = runtime->lookupFunction(0x17B6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7F8u; }
        if (ctx->pc != 0x17E7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B6C8_0x17b6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7F8u; }
        if (ctx->pc != 0x17E7F8u) { return; }
    }
    ctx->pc = 0x17E7F8u;
label_17e7f8:
    // 0x17e7f8: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17E7F8u;
    SET_GPR_U32(ctx, 31, 0x17E800u);
    ctx->pc = 0x17E7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E7F8u;
            // 0x17e7fc: 0x24044601  addiu       $a0, $zero, 0x4601 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17921));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E800u; }
        if (ctx->pc != 0x17E800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E800u; }
        if (ctx->pc != 0x17E800u) { return; }
    }
    ctx->pc = 0x17E800u;
label_17e800:
    // 0x17e800: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17E800u;
    SET_GPR_U32(ctx, 31, 0x17E808u);
    ctx->pc = 0x17E804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E800u;
            // 0x17e804: 0x24044600  addiu       $a0, $zero, 0x4600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E808u; }
        if (ctx->pc != 0x17E808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E808u; }
        if (ctx->pc != 0x17E808u) { return; }
    }
    ctx->pc = 0x17E808u;
label_17e808:
    // 0x17e808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e80c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e810: 0xc05edb2  jal         func_17B6C8
    ctx->pc = 0x17E810u;
    SET_GPR_U32(ctx, 31, 0x17E818u);
    ctx->pc = 0x17E814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E810u;
            // 0x17e814: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B6C8u;
    if (runtime->hasFunction(0x17B6C8u)) {
        auto targetFn = runtime->lookupFunction(0x17B6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E818u; }
        if (ctx->pc != 0x17E818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B6C8_0x17b6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E818u; }
        if (ctx->pc != 0x17E818u) { return; }
    }
    ctx->pc = 0x17E818u;
label_17e818:
    // 0x17e818: 0x24044601  addiu       $a0, $zero, 0x4601
    ctx->pc = 0x17e818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17921));
    // 0x17e81c: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17E81Cu;
    SET_GPR_U32(ctx, 31, 0x17E824u);
    ctx->pc = 0x17E820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E81Cu;
            // 0x17e820: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E824u; }
        if (ctx->pc != 0x17E824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E824u; }
        if (ctx->pc != 0x17E824u) { return; }
    }
    ctx->pc = 0x17E824u;
label_17e824:
    // 0x17e824: 0x621000c  bgez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x17E824u;
    {
        const bool branch_taken_0x17e824 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17E828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E824u;
            // 0x17e828: 0x3c050063  lui         $a1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e824) {
            ctx->pc = 0x17E858u;
            goto label_17e858;
        }
    }
    ctx->pc = 0x17E82Cu;
    // 0x17e82c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17e82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e830: 0xc05f8e4  jal         func_17E390
    ctx->pc = 0x17E830u;
    SET_GPR_U32(ctx, 31, 0x17E838u);
    ctx->pc = 0x17E834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E830u;
            // 0x17e834: 0x24a56358  addiu       $a1, $a1, 0x6358 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E390u;
    if (runtime->hasFunction(0x17E390u)) {
        auto targetFn = runtime->lookupFunction(0x17E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E838u; }
        if (ctx->pc != 0x17E838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E390_0x17e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E838u; }
        if (ctx->pc != 0x17E838u) { return; }
    }
    ctx->pc = 0x17E838u;
label_17e838:
    // 0x17e838: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17E838u;
    SET_GPR_U32(ctx, 31, 0x17E840u);
    ctx->pc = 0x17E83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E838u;
            // 0x17e83c: 0x24044500  addiu       $a0, $zero, 0x4500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E840u; }
        if (ctx->pc != 0x17E840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E840u; }
        if (ctx->pc != 0x17E840u) { return; }
    }
    ctx->pc = 0x17E840u;
label_17e840:
    // 0x17e840: 0xc05ee18  jal         func_17B860
    ctx->pc = 0x17E840u;
    SET_GPR_U32(ctx, 31, 0x17E848u);
    ctx->pc = 0x17E844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E840u;
            // 0x17e844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B860u;
    if (runtime->hasFunction(0x17B860u)) {
        auto targetFn = runtime->lookupFunction(0x17B860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E848u; }
        if (ctx->pc != 0x17E848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B860_0x17b860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E848u; }
        if (ctx->pc != 0x17E848u) { return; }
    }
    ctx->pc = 0x17E848u;
label_17e848:
    // 0x17e848: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17E848u;
    SET_GPR_U32(ctx, 31, 0x17E850u);
    ctx->pc = 0x17E84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E848u;
            // 0x17e84c: 0x24044501  addiu       $a0, $zero, 0x4501 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17665));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E850u; }
        if (ctx->pc != 0x17E850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E850u; }
        if (ctx->pc != 0x17E850u) { return; }
    }
    ctx->pc = 0x17E850u;
label_17e850:
    // 0x17e850: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x17E850u;
    {
        const bool branch_taken_0x17e850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E850u;
            // 0x17e854: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e850) {
            ctx->pc = 0x17E89Cu;
            goto label_17e89c;
        }
    }
    ctx->pc = 0x17E858u;
label_17e858:
    // 0x17e858: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17E858u;
    SET_GPR_U32(ctx, 31, 0x17E860u);
    ctx->pc = 0x17E85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E858u;
            // 0x17e85c: 0x24045000  addiu       $a0, $zero, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E860u; }
        if (ctx->pc != 0x17E860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E860u; }
        if (ctx->pc != 0x17E860u) { return; }
    }
    ctx->pc = 0x17E860u;
label_17e860:
    // 0x17e860: 0xc05ee18  jal         func_17B860
    ctx->pc = 0x17E860u;
    SET_GPR_U32(ctx, 31, 0x17E868u);
    ctx->pc = 0x17E864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E860u;
            // 0x17e864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B860u;
    if (runtime->hasFunction(0x17B860u)) {
        auto targetFn = runtime->lookupFunction(0x17B860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E868u; }
        if (ctx->pc != 0x17E868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B860_0x17b860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E868u; }
        if (ctx->pc != 0x17E868u) { return; }
    }
    ctx->pc = 0x17E868u;
label_17e868:
    // 0x17e868: 0x24045001  addiu       $a0, $zero, 0x5001
    ctx->pc = 0x17e868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20481));
    // 0x17e86c: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17E86Cu;
    SET_GPR_U32(ctx, 31, 0x17E874u);
    ctx->pc = 0x17E870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E86Cu;
            // 0x17e870: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E874u; }
        if (ctx->pc != 0x17E874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E874u; }
        if (ctx->pc != 0x17E874u) { return; }
    }
    ctx->pc = 0x17E874u;
label_17e874:
    // 0x17e874: 0x6030009  bgezl       $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E874u;
    {
        const bool branch_taken_0x17e874 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x17e874) {
            ctx->pc = 0x17E878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17E874u;
            // 0x17e878: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17E89Cu;
            goto label_17e89c;
        }
    }
    ctx->pc = 0x17E87Cu;
    // 0x17e87c: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17e87cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17e880: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17e880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e884: 0x24a56388  addiu       $a1, $a1, 0x6388
    ctx->pc = 0x17e884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25480));
label_17e888:
    // 0x17e888: 0xc05f8e4  jal         func_17E390
    ctx->pc = 0x17E888u;
    SET_GPR_U32(ctx, 31, 0x17E890u);
    ctx->pc = 0x17E390u;
    if (runtime->hasFunction(0x17E390u)) {
        auto targetFn = runtime->lookupFunction(0x17E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E890u; }
        if (ctx->pc != 0x17E890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E390_0x17e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E890u; }
        if (ctx->pc != 0x17E890u) { return; }
    }
    ctx->pc = 0x17E890u;
label_17e890:
    // 0x17e890: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17E890u;
    {
        const bool branch_taken_0x17e890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E890u;
            // 0x17e894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e890) {
            ctx->pc = 0x17E89Cu;
            goto label_17e89c;
        }
    }
    ctx->pc = 0x17E898u;
label_17e898:
    // 0x17e898: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17e898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17e89c:
    // 0x17e89c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17e89cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e8a0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x17e8a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17e8a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17e8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x17E8A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E8A8u;
            // 0x17e8ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E8B0u;
}
