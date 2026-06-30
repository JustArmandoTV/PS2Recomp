#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DE6E0
// Address: 0x2de6e0 - 0x2de7a0
void sub_002DE6E0_0x2de6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE6E0_0x2de6e0");
#endif

    switch (ctx->pc) {
        case 0x2de6e0u: goto label_2de6e0;
        case 0x2de6e4u: goto label_2de6e4;
        case 0x2de6e8u: goto label_2de6e8;
        case 0x2de6ecu: goto label_2de6ec;
        case 0x2de6f0u: goto label_2de6f0;
        case 0x2de6f4u: goto label_2de6f4;
        case 0x2de6f8u: goto label_2de6f8;
        case 0x2de6fcu: goto label_2de6fc;
        case 0x2de700u: goto label_2de700;
        case 0x2de704u: goto label_2de704;
        case 0x2de708u: goto label_2de708;
        case 0x2de70cu: goto label_2de70c;
        case 0x2de710u: goto label_2de710;
        case 0x2de714u: goto label_2de714;
        case 0x2de718u: goto label_2de718;
        case 0x2de71cu: goto label_2de71c;
        case 0x2de720u: goto label_2de720;
        case 0x2de724u: goto label_2de724;
        case 0x2de728u: goto label_2de728;
        case 0x2de72cu: goto label_2de72c;
        case 0x2de730u: goto label_2de730;
        case 0x2de734u: goto label_2de734;
        case 0x2de738u: goto label_2de738;
        case 0x2de73cu: goto label_2de73c;
        case 0x2de740u: goto label_2de740;
        case 0x2de744u: goto label_2de744;
        case 0x2de748u: goto label_2de748;
        case 0x2de74cu: goto label_2de74c;
        case 0x2de750u: goto label_2de750;
        case 0x2de754u: goto label_2de754;
        case 0x2de758u: goto label_2de758;
        case 0x2de75cu: goto label_2de75c;
        case 0x2de760u: goto label_2de760;
        case 0x2de764u: goto label_2de764;
        case 0x2de768u: goto label_2de768;
        case 0x2de76cu: goto label_2de76c;
        case 0x2de770u: goto label_2de770;
        case 0x2de774u: goto label_2de774;
        case 0x2de778u: goto label_2de778;
        case 0x2de77cu: goto label_2de77c;
        case 0x2de780u: goto label_2de780;
        case 0x2de784u: goto label_2de784;
        case 0x2de788u: goto label_2de788;
        case 0x2de78cu: goto label_2de78c;
        case 0x2de790u: goto label_2de790;
        case 0x2de794u: goto label_2de794;
        case 0x2de798u: goto label_2de798;
        case 0x2de79cu: goto label_2de79c;
        default: break;
    }

    ctx->pc = 0x2de6e0u;

label_2de6e0:
    // 0x2de6e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2de6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2de6e4:
    // 0x2de6e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2de6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2de6e8:
    // 0x2de6e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2de6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2de6ec:
    // 0x2de6ec: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x2de6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2de6f0:
    // 0x2de6f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2de6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2de6f4:
    // 0x2de6f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2de6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2de6f8:
    // 0x2de6f8: 0xa08005a8  sb          $zero, 0x5A8($a0)
    ctx->pc = 0x2de6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1448), (uint8_t)GPR_U32(ctx, 0));
label_2de6fc:
    // 0x2de6fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2de6fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2de700:
    // 0x2de700: 0xc04a576  jal         func_1295D8
label_2de704:
    if (ctx->pc == 0x2DE704u) {
        ctx->pc = 0x2DE704u;
            // 0x2de704: 0x260405ac  addiu       $a0, $s0, 0x5AC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1452));
        ctx->pc = 0x2DE708u;
        goto label_2de708;
    }
    ctx->pc = 0x2DE700u;
    SET_GPR_U32(ctx, 31, 0x2DE708u);
    ctx->pc = 0x2DE704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE700u;
            // 0x2de704: 0x260405ac  addiu       $a0, $s0, 0x5AC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1452));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE708u; }
        if (ctx->pc != 0x2DE708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE708u; }
        if (ctx->pc != 0x2DE708u) { return; }
    }
    ctx->pc = 0x2DE708u;
label_2de708:
    // 0x2de708: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x2de708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_2de70c:
    // 0x2de70c: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x2de70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
label_2de710:
    // 0x2de710: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x2de710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
label_2de714:
    // 0x2de714: 0x8e110014  lw          $s1, 0x14($s0)
    ctx->pc = 0x2de714u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2de718:
    // 0x2de718: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_2de71c:
    if (ctx->pc == 0x2DE71Cu) {
        ctx->pc = 0x2DE71Cu;
            // 0x2de71c: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->pc = 0x2DE720u;
        goto label_2de720;
    }
    ctx->pc = 0x2DE718u;
    {
        const bool branch_taken_0x2de718 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE718u;
            // 0x2de71c: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de718) {
            ctx->pc = 0x2DE750u;
            goto label_2de750;
        }
    }
    ctx->pc = 0x2DE720u;
label_2de720:
    // 0x2de720: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2de720u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2de724:
    // 0x2de724: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2de724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2de728:
    // 0x2de728: 0x320f809  jalr        $t9
label_2de72c:
    if (ctx->pc == 0x2DE72Cu) {
        ctx->pc = 0x2DE72Cu;
            // 0x2de72c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DE730u;
        goto label_2de730;
    }
    ctx->pc = 0x2DE728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DE730u);
        ctx->pc = 0x2DE72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE728u;
            // 0x2de72c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DE730u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DE730u; }
            if (ctx->pc != 0x2DE730u) { return; }
        }
        }
    }
    ctx->pc = 0x2DE730u;
label_2de730:
    // 0x2de730: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2de730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2de734:
    // 0x2de734: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_2de738:
    if (ctx->pc == 0x2DE738u) {
        ctx->pc = 0x2DE73Cu;
        goto label_2de73c;
    }
    ctx->pc = 0x2DE734u;
    {
        const bool branch_taken_0x2de734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2de734) {
            ctx->pc = 0x2DE750u;
            goto label_2de750;
        }
    }
    ctx->pc = 0x2DE73Cu;
label_2de73c:
    // 0x2de73c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2de73cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2de740:
    // 0x2de740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2de740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2de744:
    // 0x2de744: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2de744u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2de748:
    // 0x2de748: 0x320f809  jalr        $t9
label_2de74c:
    if (ctx->pc == 0x2DE74Cu) {
        ctx->pc = 0x2DE74Cu;
            // 0x2de74c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2DE750u;
        goto label_2de750;
    }
    ctx->pc = 0x2DE748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DE750u);
        ctx->pc = 0x2DE74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE748u;
            // 0x2de74c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DE750u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DE750u; }
            if (ctx->pc != 0x2DE750u) { return; }
        }
        }
    }
    ctx->pc = 0x2DE750u;
label_2de750:
    // 0x2de750: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_2de754:
    if (ctx->pc == 0x2DE754u) {
        ctx->pc = 0x2DE754u;
            // 0x2de754: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2DE758u;
        goto label_2de758;
    }
    ctx->pc = 0x2DE750u;
    {
        const bool branch_taken_0x2de750 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de750) {
            ctx->pc = 0x2DE754u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE750u;
            // 0x2de754: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DE78Cu;
            goto label_2de78c;
        }
    }
    ctx->pc = 0x2DE758u;
label_2de758:
    // 0x2de758: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2de758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2de75c:
    // 0x2de75c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2de75cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2de760:
    // 0x2de760: 0x320f809  jalr        $t9
label_2de764:
    if (ctx->pc == 0x2DE764u) {
        ctx->pc = 0x2DE764u;
            // 0x2de764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DE768u;
        goto label_2de768;
    }
    ctx->pc = 0x2DE760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DE768u);
        ctx->pc = 0x2DE764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE760u;
            // 0x2de764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DE768u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DE768u; }
            if (ctx->pc != 0x2DE768u) { return; }
        }
        }
    }
    ctx->pc = 0x2DE768u;
label_2de768:
    // 0x2de768: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2de768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2de76c:
    // 0x2de76c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_2de770:
    if (ctx->pc == 0x2DE770u) {
        ctx->pc = 0x2DE774u;
        goto label_2de774;
    }
    ctx->pc = 0x2DE76Cu;
    {
        const bool branch_taken_0x2de76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2de76c) {
            ctx->pc = 0x2DE788u;
            goto label_2de788;
        }
    }
    ctx->pc = 0x2DE774u;
label_2de774:
    // 0x2de774: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2de774u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2de778:
    // 0x2de778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2de77c:
    // 0x2de77c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2de77cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2de780:
    // 0x2de780: 0x320f809  jalr        $t9
label_2de784:
    if (ctx->pc == 0x2DE784u) {
        ctx->pc = 0x2DE784u;
            // 0x2de784: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2DE788u;
        goto label_2de788;
    }
    ctx->pc = 0x2DE780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DE788u);
        ctx->pc = 0x2DE784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE780u;
            // 0x2de784: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DE788u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DE788u; }
            if (ctx->pc != 0x2DE788u) { return; }
        }
        }
    }
    ctx->pc = 0x2DE788u;
label_2de788:
    // 0x2de788: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2de788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2de78c:
    // 0x2de78c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2de78cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2de790:
    // 0x2de790: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2de790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2de794:
    // 0x2de794: 0x3e00008  jr          $ra
label_2de798:
    if (ctx->pc == 0x2DE798u) {
        ctx->pc = 0x2DE798u;
            // 0x2de798: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x2DE79Cu;
        goto label_2de79c;
    }
    ctx->pc = 0x2DE794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE794u;
            // 0x2de798: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DE79Cu;
label_2de79c:
    // 0x2de79c: 0x0  nop
    ctx->pc = 0x2de79cu;
    // NOP
}
