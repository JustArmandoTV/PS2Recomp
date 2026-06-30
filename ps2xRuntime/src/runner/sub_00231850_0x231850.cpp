#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00231850
// Address: 0x231850 - 0x231940
void sub_00231850_0x231850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231850_0x231850");
#endif

    switch (ctx->pc) {
        case 0x231850u: goto label_231850;
        case 0x231854u: goto label_231854;
        case 0x231858u: goto label_231858;
        case 0x23185cu: goto label_23185c;
        case 0x231860u: goto label_231860;
        case 0x231864u: goto label_231864;
        case 0x231868u: goto label_231868;
        case 0x23186cu: goto label_23186c;
        case 0x231870u: goto label_231870;
        case 0x231874u: goto label_231874;
        case 0x231878u: goto label_231878;
        case 0x23187cu: goto label_23187c;
        case 0x231880u: goto label_231880;
        case 0x231884u: goto label_231884;
        case 0x231888u: goto label_231888;
        case 0x23188cu: goto label_23188c;
        case 0x231890u: goto label_231890;
        case 0x231894u: goto label_231894;
        case 0x231898u: goto label_231898;
        case 0x23189cu: goto label_23189c;
        case 0x2318a0u: goto label_2318a0;
        case 0x2318a4u: goto label_2318a4;
        case 0x2318a8u: goto label_2318a8;
        case 0x2318acu: goto label_2318ac;
        case 0x2318b0u: goto label_2318b0;
        case 0x2318b4u: goto label_2318b4;
        case 0x2318b8u: goto label_2318b8;
        case 0x2318bcu: goto label_2318bc;
        case 0x2318c0u: goto label_2318c0;
        case 0x2318c4u: goto label_2318c4;
        case 0x2318c8u: goto label_2318c8;
        case 0x2318ccu: goto label_2318cc;
        case 0x2318d0u: goto label_2318d0;
        case 0x2318d4u: goto label_2318d4;
        case 0x2318d8u: goto label_2318d8;
        case 0x2318dcu: goto label_2318dc;
        case 0x2318e0u: goto label_2318e0;
        case 0x2318e4u: goto label_2318e4;
        case 0x2318e8u: goto label_2318e8;
        case 0x2318ecu: goto label_2318ec;
        case 0x2318f0u: goto label_2318f0;
        case 0x2318f4u: goto label_2318f4;
        case 0x2318f8u: goto label_2318f8;
        case 0x2318fcu: goto label_2318fc;
        case 0x231900u: goto label_231900;
        case 0x231904u: goto label_231904;
        case 0x231908u: goto label_231908;
        case 0x23190cu: goto label_23190c;
        case 0x231910u: goto label_231910;
        case 0x231914u: goto label_231914;
        case 0x231918u: goto label_231918;
        case 0x23191cu: goto label_23191c;
        case 0x231920u: goto label_231920;
        case 0x231924u: goto label_231924;
        case 0x231928u: goto label_231928;
        case 0x23192cu: goto label_23192c;
        case 0x231930u: goto label_231930;
        case 0x231934u: goto label_231934;
        case 0x231938u: goto label_231938;
        case 0x23193cu: goto label_23193c;
        default: break;
    }

    ctx->pc = 0x231850u;

label_231850:
    // 0x231850: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x231850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_231854:
    // 0x231854: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x231854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_231858:
    // 0x231858: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x231858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23185c:
    // 0x23185c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23185cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_231860:
    // 0x231860: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x231860u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_231864:
    // 0x231864: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x231864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_231868:
    // 0x231868: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x231868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23186c:
    // 0x23186c: 0x8ca20084  lw          $v0, 0x84($a1)
    ctx->pc = 0x23186cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
label_231870:
    // 0x231870: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_231874:
    if (ctx->pc == 0x231874u) {
        ctx->pc = 0x231874u;
            // 0x231874: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231878u;
        goto label_231878;
    }
    ctx->pc = 0x231870u;
    {
        const bool branch_taken_0x231870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231870u;
            // 0x231874: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231870) {
            ctx->pc = 0x231898u;
            goto label_231898;
        }
    }
    ctx->pc = 0x231878u;
label_231878:
    // 0x231878: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x231878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_23187c:
    // 0x23187c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23187cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_231880:
    // 0x231880: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x231880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_231884:
    // 0x231884: 0xa3a20048  sb          $v0, 0x48($sp)
    ctx->pc = 0x231884u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 2));
label_231888:
    // 0x231888: 0xc08d1cc  jal         func_234730
label_23188c:
    if (ctx->pc == 0x23188Cu) {
        ctx->pc = 0x23188Cu;
            // 0x23188c: 0xafb0004c  sw          $s0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 16));
        ctx->pc = 0x231890u;
        goto label_231890;
    }
    ctx->pc = 0x231888u;
    SET_GPR_U32(ctx, 31, 0x231890u);
    ctx->pc = 0x23188Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231888u;
            // 0x23188c: 0xafb0004c  sw          $s0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234730u;
    if (runtime->hasFunction(0x234730u)) {
        auto targetFn = runtime->lookupFunction(0x234730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231890u; }
        if (ctx->pc != 0x231890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234730_0x234730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231890u; }
        if (ctx->pc != 0x231890u) { return; }
    }
    ctx->pc = 0x231890u;
label_231890:
    // 0x231890: 0x10000023  b           . + 4 + (0x23 << 2)
label_231894:
    if (ctx->pc == 0x231894u) {
        ctx->pc = 0x231894u;
            // 0x231894: 0xa2400000  sb          $zero, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x231898u;
        goto label_231898;
    }
    ctx->pc = 0x231890u;
    {
        const bool branch_taken_0x231890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231890u;
            // 0x231894: 0xa2400000  sb          $zero, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231890) {
            ctx->pc = 0x231920u;
            goto label_231920;
        }
    }
    ctx->pc = 0x231898u;
label_231898:
    // 0x231898: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x231898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_23189c:
    // 0x23189c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23189cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2318a0:
    // 0x2318a0: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x2318a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
label_2318a4:
    // 0x2318a4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2318a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2318a8:
    // 0x2318a8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2318a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2318ac:
    // 0x2318ac: 0x320f809  jalr        $t9
label_2318b0:
    if (ctx->pc == 0x2318B0u) {
        ctx->pc = 0x2318B0u;
            // 0x2318b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2318B4u;
        goto label_2318b4;
    }
    ctx->pc = 0x2318ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2318B4u);
        ctx->pc = 0x2318B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2318ACu;
            // 0x2318b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2318B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2318B4u; }
            if (ctx->pc != 0x2318B4u) { return; }
        }
        }
    }
    ctx->pc = 0x2318B4u;
label_2318b4:
    // 0x2318b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2318b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2318b8:
    // 0x2318b8: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
label_2318bc:
    if (ctx->pc == 0x2318BCu) {
        ctx->pc = 0x2318BCu;
            // 0x2318bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2318C0u;
        goto label_2318c0;
    }
    ctx->pc = 0x2318B8u;
    {
        const bool branch_taken_0x2318b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2318b8) {
            ctx->pc = 0x2318BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2318B8u;
            // 0x2318bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2318DCu;
            goto label_2318dc;
        }
    }
    ctx->pc = 0x2318C0u;
label_2318c0:
    // 0x2318c0: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x2318c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2318c4:
    // 0x2318c4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2318c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2318c8:
    // 0x2318c8: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
label_2318cc:
    if (ctx->pc == 0x2318CCu) {
        ctx->pc = 0x2318D0u;
        goto label_2318d0;
    }
    ctx->pc = 0x2318C8u;
    {
        const bool branch_taken_0x2318c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2318c8) {
            ctx->pc = 0x2318D8u;
            goto label_2318d8;
        }
    }
    ctx->pc = 0x2318D0u;
label_2318d0:
    // 0x2318d0: 0xc08c6f0  jal         func_231BC0
label_2318d4:
    if (ctx->pc == 0x2318D4u) {
        ctx->pc = 0x2318D4u;
            // 0x2318d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2318D8u;
        goto label_2318d8;
    }
    ctx->pc = 0x2318D0u;
    SET_GPR_U32(ctx, 31, 0x2318D8u);
    ctx->pc = 0x2318D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2318D0u;
            // 0x2318d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231BC0u;
    if (runtime->hasFunction(0x231BC0u)) {
        auto targetFn = runtime->lookupFunction(0x231BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2318D8u; }
        if (ctx->pc != 0x2318D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231BC0_0x231bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2318D8u; }
        if (ctx->pc != 0x2318D8u) { return; }
    }
    ctx->pc = 0x2318D8u;
label_2318d8:
    // 0x2318d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2318d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2318dc:
    // 0x2318dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2318dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2318e0:
    // 0x2318e0: 0xc08fb34  jal         func_23ECD0
label_2318e4:
    if (ctx->pc == 0x2318E4u) {
        ctx->pc = 0x2318E4u;
            // 0x2318e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2318E8u;
        goto label_2318e8;
    }
    ctx->pc = 0x2318E0u;
    SET_GPR_U32(ctx, 31, 0x2318E8u);
    ctx->pc = 0x2318E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2318E0u;
            // 0x2318e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23ECD0u;
    if (runtime->hasFunction(0x23ECD0u)) {
        auto targetFn = runtime->lookupFunction(0x23ECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2318E8u; }
        if (ctx->pc != 0x2318E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023ECD0_0x23ecd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2318E8u; }
        if (ctx->pc != 0x2318E8u) { return; }
    }
    ctx->pc = 0x2318E8u;
label_2318e8:
    // 0x2318e8: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x2318e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_2318ec:
    // 0x2318ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2318ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2318f0:
    // 0x2318f0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_2318f4:
    if (ctx->pc == 0x2318F4u) {
        ctx->pc = 0x2318F4u;
            // 0x2318f4: 0xae230084  sw          $v1, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
        ctx->pc = 0x2318F8u;
        goto label_2318f8;
    }
    ctx->pc = 0x2318F0u;
    {
        const bool branch_taken_0x2318f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2318F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2318F0u;
            // 0x2318f4: 0xae230084  sw          $v1, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2318f0) {
            ctx->pc = 0x231918u;
            goto label_231918;
        }
    }
    ctx->pc = 0x2318F8u;
label_2318f8:
    // 0x2318f8: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x2318f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2318fc:
    // 0x2318fc: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_231900:
    if (ctx->pc == 0x231900u) {
        ctx->pc = 0x231900u;
            // 0x231900: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x231904u;
        goto label_231904;
    }
    ctx->pc = 0x2318FCu;
    {
        const bool branch_taken_0x2318fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2318fc) {
            ctx->pc = 0x231900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2318FCu;
            // 0x231900: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23191Cu;
            goto label_23191c;
        }
    }
    ctx->pc = 0x231904u;
label_231904:
    // 0x231904: 0x8223008c  lb          $v1, 0x8C($s1)
    ctx->pc = 0x231904u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
label_231908:
    // 0x231908: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_23190c:
    if (ctx->pc == 0x23190Cu) {
        ctx->pc = 0x231910u;
        goto label_231910;
    }
    ctx->pc = 0x231908u;
    {
        const bool branch_taken_0x231908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x231908) {
            ctx->pc = 0x231918u;
            goto label_231918;
        }
    }
    ctx->pc = 0x231910u;
label_231910:
    // 0x231910: 0xc08d1c4  jal         func_234710
label_231914:
    if (ctx->pc == 0x231914u) {
        ctx->pc = 0x231914u;
            // 0x231914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x231918u;
        goto label_231918;
    }
    ctx->pc = 0x231910u;
    SET_GPR_U32(ctx, 31, 0x231918u);
    ctx->pc = 0x231914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231910u;
            // 0x231914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231918u; }
        if (ctx->pc != 0x231918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231918u; }
        if (ctx->pc != 0x231918u) { return; }
    }
    ctx->pc = 0x231918u;
label_231918:
    // 0x231918: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x231918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23191c:
    // 0x23191c: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x23191cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
label_231920:
    // 0x231920: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x231920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_231924:
    // 0x231924: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x231924u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_231928:
    // 0x231928: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x231928u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23192c:
    // 0x23192c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23192cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_231930:
    // 0x231930: 0x3e00008  jr          $ra
label_231934:
    if (ctx->pc == 0x231934u) {
        ctx->pc = 0x231934u;
            // 0x231934: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x231938u;
        goto label_231938;
    }
    ctx->pc = 0x231930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231930u;
            // 0x231934: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x231938u;
label_231938:
    // 0x231938: 0x0  nop
    ctx->pc = 0x231938u;
    // NOP
label_23193c:
    // 0x23193c: 0x0  nop
    ctx->pc = 0x23193cu;
    // NOP
}
