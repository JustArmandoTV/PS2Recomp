#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019A838
// Address: 0x19a838 - 0x19aa08
void sub_0019A838_0x19a838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A838_0x19a838");
#endif

    switch (ctx->pc) {
        case 0x19a8b0u: goto label_19a8b0;
        case 0x19a8c8u: goto label_19a8c8;
        case 0x19a8ecu: goto label_19a8ec;
        case 0x19a900u: goto label_19a900;
        case 0x19a90cu: goto label_19a90c;
        case 0x19a918u: goto label_19a918;
        case 0x19a924u: goto label_19a924;
        case 0x19a938u: goto label_19a938;
        case 0x19a944u: goto label_19a944;
        case 0x19a9e0u: goto label_19a9e0;
        default: break;
    }

    ctx->pc = 0x19a838u;

    // 0x19a838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19a838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19a83c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x19a83cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a840: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19a840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19a844: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x19a844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
    // 0x19a848: 0x24a5a860  addiu       $a1, $a1, -0x57A0
    ctx->pc = 0x19a848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944864));
    // 0x19a84c: 0x8cc40048  lw          $a0, 0x48($a2)
    ctx->pc = 0x19a84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x19a850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19a850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a854: 0x806d840  j           func_1B6100
    ctx->pc = 0x19A854u;
    ctx->pc = 0x19A858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A854u;
            // 0x19a858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6100u;
    {
        auto targetFn = runtime->lookupFunction(0x1B6100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19A85Cu;
    // 0x19a85c: 0x0  nop
    ctx->pc = 0x19a85cu;
    // NOP
    // 0x19a860: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19a860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19a864: 0x28c30800  slti        $v1, $a2, 0x800
    ctx->pc = 0x19a864u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x19a868: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x19a868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x19a86c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x19a86cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a870: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19a870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19a874: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19a874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a878: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x19a878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x19a87c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19a87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19a880: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x19a880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x19a884: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x19a884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x19a888: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x19a888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x19a88c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x19a88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x19a890: 0x8ea200c4  lw          $v0, 0xC4($s5)
    ctx->pc = 0x19a890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
    // 0x19a894: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19a894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19a898: 0x14600051  bnez        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x19A898u;
    {
        const bool branch_taken_0x19a898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A898u;
            // 0x19a89c: 0xaea200c4  sw          $v0, 0xC4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a898) {
            ctx->pc = 0x19A9E0u;
            goto label_19a9e0;
        }
    }
    ctx->pc = 0x19A8A0u;
    // 0x19a8a0: 0x50800050  beql        $a0, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x19A8A0u;
    {
        const bool branch_taken_0x19a8a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a8a0) {
            ctx->pc = 0x19A8A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19A8A0u;
            // 0x19a8a4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19A9E4u;
            goto label_19a9e4;
        }
    }
    ctx->pc = 0x19A8A8u;
    // 0x19a8a8: 0xc06e8e4  jal         func_1BA390
    ctx->pc = 0x19A8A8u;
    SET_GPR_U32(ctx, 31, 0x19A8B0u);
    ctx->pc = 0x19A8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A8A8u;
            // 0x19a8ac: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA390u;
    if (runtime->hasFunction(0x1BA390u)) {
        auto targetFn = runtime->lookupFunction(0x1BA390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A8B0u; }
        if (ctx->pc != 0x19A8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA390_0x1ba390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A8B0u; }
        if (ctx->pc != 0x19A8B0u) { return; }
    }
    ctx->pc = 0x19A8B0u;
label_19a8b0:
    // 0x19a8b0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x19a8b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a8b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19a8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a8b8: 0x12800049  beqz        $s4, . + 4 + (0x49 << 2)
    ctx->pc = 0x19A8B8u;
    {
        const bool branch_taken_0x19a8b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A8B8u;
            // 0x19a8bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a8b8) {
            ctx->pc = 0x19A9E0u;
            goto label_19a9e0;
        }
    }
    ctx->pc = 0x19A8C0u;
    // 0x19a8c0: 0xc06e920  jal         func_1BA480
    ctx->pc = 0x19A8C0u;
    SET_GPR_U32(ctx, 31, 0x19A8C8u);
    ctx->pc = 0x1BA480u;
    if (runtime->hasFunction(0x1BA480u)) {
        auto targetFn = runtime->lookupFunction(0x1BA480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A8C8u; }
        if (ctx->pc != 0x19A8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA480_0x1ba480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A8C8u; }
        if (ctx->pc != 0x19A8C8u) { return; }
    }
    ctx->pc = 0x19A8C8u;
label_19a8c8:
    // 0x19a8c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19a8c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a8cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a8d0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A8D0u;
    {
        const bool branch_taken_0x19a8d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19A8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A8D0u;
            // 0x19a8d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a8d0) {
            ctx->pc = 0x19A8E4u;
            goto label_19a8e4;
        }
    }
    ctx->pc = 0x19A8D8u;
    // 0x19a8d8: 0x8fb60000  lw          $s6, 0x0($sp)
    ctx->pc = 0x19a8d8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a8dc: 0x12c30006  beq         $s6, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19A8DCu;
    {
        const bool branch_taken_0x19a8dc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        if (branch_taken_0x19a8dc) {
            ctx->pc = 0x19A8F8u;
            goto label_19a8f8;
        }
    }
    ctx->pc = 0x19A8E4u;
label_19a8e4:
    // 0x19a8e4: 0xc06e914  jal         func_1BA450
    ctx->pc = 0x19A8E4u;
    SET_GPR_U32(ctx, 31, 0x19A8ECu);
    ctx->pc = 0x1BA450u;
    if (runtime->hasFunction(0x1BA450u)) {
        auto targetFn = runtime->lookupFunction(0x1BA450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A8ECu; }
        if (ctx->pc != 0x19A8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA450_0x1ba450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A8ECu; }
        if (ctx->pc != 0x19A8ECu) { return; }
    }
    ctx->pc = 0x19A8ECu;
label_19a8ec:
    // 0x19a8ec: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x19A8ECu;
    {
        const bool branch_taken_0x19a8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A8ECu;
            // 0x19a8f0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a8ec) {
            ctx->pc = 0x19A9E4u;
            goto label_19a9e4;
        }
    }
    ctx->pc = 0x19A8F4u;
    // 0x19a8f4: 0x0  nop
    ctx->pc = 0x19a8f4u;
    // NOP
label_19a8f8:
    // 0x19a8f8: 0xc066b84  jal         func_19AE10
    ctx->pc = 0x19A8F8u;
    SET_GPR_U32(ctx, 31, 0x19A900u);
    ctx->pc = 0x19A8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A8F8u;
            // 0x19a8fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AE10u;
    if (runtime->hasFunction(0x19AE10u)) {
        auto targetFn = runtime->lookupFunction(0x19AE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A900u; }
        if (ctx->pc != 0x19A900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019AE10_0x19ae10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A900u; }
        if (ctx->pc != 0x19A900u) { return; }
    }
    ctx->pc = 0x19A900u;
label_19a900:
    // 0x19a900: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19a900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a904: 0xc06693c  jal         func_19A4F0
    ctx->pc = 0x19A904u;
    SET_GPR_U32(ctx, 31, 0x19A90Cu);
    ctx->pc = 0x19A908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A904u;
            // 0x19a908: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A4F0u;
    if (runtime->hasFunction(0x19A4F0u)) {
        auto targetFn = runtime->lookupFunction(0x19A4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A90Cu; }
        if (ctx->pc != 0x19A90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019A4F0_0x19a4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A90Cu; }
        if (ctx->pc != 0x19A90Cu) { return; }
    }
    ctx->pc = 0x19A90Cu;
label_19a90c:
    // 0x19a90c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19a90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a910: 0xc0669b0  jal         func_19A6C0
    ctx->pc = 0x19A910u;
    SET_GPR_U32(ctx, 31, 0x19A918u);
    ctx->pc = 0x19A914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A910u;
            // 0x19a914: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A6C0u;
    if (runtime->hasFunction(0x19A6C0u)) {
        auto targetFn = runtime->lookupFunction(0x19A6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A918u; }
        if (ctx->pc != 0x19A918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019A6C0_0x19a6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A918u; }
        if (ctx->pc != 0x19A918u) { return; }
    }
    ctx->pc = 0x19A918u;
label_19a918:
    // 0x19a918: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19a918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a91c: 0xc066994  jal         func_19A650
    ctx->pc = 0x19A91Cu;
    SET_GPR_U32(ctx, 31, 0x19A924u);
    ctx->pc = 0x19A920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A91Cu;
            // 0x19a920: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A650u;
    if (runtime->hasFunction(0x19A650u)) {
        auto targetFn = runtime->lookupFunction(0x19A650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A924u; }
        if (ctx->pc != 0x19A924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019A650_0x19a650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A924u; }
        if (ctx->pc != 0x19A924u) { return; }
    }
    ctx->pc = 0x19A924u;
label_19a924:
    // 0x19a924: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x19a924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x19a928: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x19a928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x19a92c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19a92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a930: 0xc066b5e  jal         func_19AD78
    ctx->pc = 0x19A930u;
    SET_GPR_U32(ctx, 31, 0x19A938u);
    ctx->pc = 0x19A934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A930u;
            // 0x19a934: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AD78u;
    if (runtime->hasFunction(0x19AD78u)) {
        auto targetFn = runtime->lookupFunction(0x19AD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A938u; }
        if (ctx->pc != 0x19A938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019AD78_0x19ad78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A938u; }
        if (ctx->pc != 0x19A938u) { return; }
    }
    ctx->pc = 0x19A938u;
label_19a938:
    // 0x19a938: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19a938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a93c: 0xc066a82  jal         func_19AA08
    ctx->pc = 0x19A93Cu;
    SET_GPR_U32(ctx, 31, 0x19A944u);
    ctx->pc = 0x19A940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A93Cu;
            // 0x19a940: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AA08u;
    if (runtime->hasFunction(0x19AA08u)) {
        auto targetFn = runtime->lookupFunction(0x19AA08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A944u; }
        if (ctx->pc != 0x19A944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019AA08_0x19aa08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A944u; }
        if (ctx->pc != 0x19A944u) { return; }
    }
    ctx->pc = 0x19A944u;
label_19a944:
    // 0x19a944: 0x8ea200cc  lw          $v0, 0xCC($s5)
    ctx->pc = 0x19a944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
    // 0x19a948: 0x8ea800c4  lw          $t0, 0xC4($s5)
    ctx->pc = 0x19a948u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
    // 0x19a94c: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x19a94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x19a950: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x19a950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x19a954: 0x26a50008  addiu       $a1, $s5, 0x8
    ctx->pc = 0x19a954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x19a958: 0x244300e0  addiu       $v1, $v0, 0xE0
    ctx->pc = 0x19a958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x19a95c: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x19a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x19a960: 0x26a6000c  addiu       $a2, $s5, 0xC
    ctx->pc = 0x19a960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x19a964: 0x8fad0004  lw          $t5, 0x4($sp)
    ctx->pc = 0x19a964u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19a968: 0x8fae0008  lw          $t6, 0x8($sp)
    ctx->pc = 0x19a968u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19a96c: 0x834821  addu        $t1, $a0, $v1
    ctx->pc = 0x19a96cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19a970: 0xc35021  addu        $t2, $a2, $v1
    ctx->pc = 0x19a970u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19a974: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x19a974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x19a978: 0xa25821  addu        $t3, $a1, $v0
    ctx->pc = 0x19a978u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19a97c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x19a97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x19a980: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x19a980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19a984: 0x2a26021  addu        $t4, $s5, $v0
    ctx->pc = 0x19a984u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x19a988: 0x2a33821  addu        $a3, $s5, $v1
    ctx->pc = 0x19a988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x19a98c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x19a98cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x19a990: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x19a990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x19a994: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19a994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a998: 0xacf30000  sw          $s3, 0x0($a3)
    ctx->pc = 0x19a998u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 19));
    // 0x19a99c: 0xad320000  sw          $s2, 0x0($t1)
    ctx->pc = 0x19a99cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 18));
    // 0x19a9a0: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x19a9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
    // 0x19a9a4: 0xad500000  sw          $s0, 0x0($t2)
    ctx->pc = 0x19a9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 16));
    // 0x19a9a8: 0xad6d0000  sw          $t5, 0x0($t3)
    ctx->pc = 0x19a9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 13));
    // 0x19a9ac: 0xacce0000  sw          $t6, 0x0($a2)
    ctx->pc = 0x19a9acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 14));
    // 0x19a9b0: 0xad960000  sw          $s6, 0x0($t4)
    ctx->pc = 0x19a9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 22));
    // 0x19a9b4: 0x8ea300cc  lw          $v1, 0xCC($s5)
    ctx->pc = 0x19a9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
    // 0x19a9b8: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x19a9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a9bc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x19a9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x19a9c0: 0x28a60000  slti        $a2, $a1, 0x0
    ctx->pc = 0x19a9c0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x19a9c4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19a9c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a9c8: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x19a9c8u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x19a9cc: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x19a9ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x19a9d0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19a9d4: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x19a9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19a9d8: 0xc06e914  jal         func_1BA450
    ctx->pc = 0x19A9D8u;
    SET_GPR_U32(ctx, 31, 0x19A9E0u);
    ctx->pc = 0x19A9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A9D8u;
            // 0x19a9dc: 0xaea500cc  sw          $a1, 0xCC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 204), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA450u;
    if (runtime->hasFunction(0x1BA450u)) {
        auto targetFn = runtime->lookupFunction(0x1BA450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A9E0u; }
        if (ctx->pc != 0x19A9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA450_0x1ba450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A9E0u; }
        if (ctx->pc != 0x19A9E0u) { return; }
    }
    ctx->pc = 0x19A9E0u;
label_19a9e0:
    // 0x19a9e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19a9e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19a9e4:
    // 0x19a9e4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x19a9e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19a9e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19a9e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a9ec: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x19a9ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a9f0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x19a9f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a9f4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x19a9f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19a9f8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x19a9f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a9fc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x19a9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x19aa00: 0x3e00008  jr          $ra
    ctx->pc = 0x19AA00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AA00u;
            // 0x19aa04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19AA08u;
}
