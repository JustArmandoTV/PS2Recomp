#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017A810
// Address: 0x17a810 - 0x17a920
void sub_0017A810_0x17a810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A810_0x17a810");
#endif

    switch (ctx->pc) {
        case 0x17a858u: goto label_17a858;
        case 0x17a868u: goto label_17a868;
        case 0x17a878u: goto label_17a878;
        case 0x17a884u: goto label_17a884;
        case 0x17a8a0u: goto label_17a8a0;
        case 0x17a8b4u: goto label_17a8b4;
        case 0x17a8e0u: goto label_17a8e0;
        case 0x17a8f0u: goto label_17a8f0;
        case 0x17a900u: goto label_17a900;
        case 0x17a910u: goto label_17a910;
        default: break;
    }

    ctx->pc = 0x17a810u;

    // 0x17a810: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17a810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17a814: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a818: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17a818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17a81c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x17a81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x17a820: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x17a820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x17a824: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17a824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17a828: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17a828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a82c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x17a82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17a830: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17a830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a834: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x17a834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x17a838: 0x34139000  ori         $s3, $zero, 0x9000
    ctx->pc = 0x17a838u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x17a83c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x17a83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x17a840: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x17a840u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a844: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x17a844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x17a848: 0x3c150063  lui         $s5, 0x63
    ctx->pc = 0x17a848u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)99 << 16));
    // 0x17a84c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x17a84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x17a850: 0x24160009  addiu       $s6, $zero, 0x9
    ctx->pc = 0x17a850u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17a854: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17a854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_17a858:
    // 0x17a858: 0x14540017  bne         $v0, $s4, . + 4 + (0x17 << 2)
    ctx->pc = 0x17A858u;
    {
        const bool branch_taken_0x17a858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x17A85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A858u;
            // 0x17a85c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a858) {
            ctx->pc = 0x17A8B8u;
            goto label_17a8b8;
        }
    }
    ctx->pc = 0x17A860u;
    // 0x17a860: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17A860u;
    SET_GPR_U32(ctx, 31, 0x17A868u);
    ctx->pc = 0x17A864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A860u;
            // 0x17a864: 0x24041100  addiu       $a0, $zero, 0x1100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A868u; }
        if (ctx->pc != 0x17A868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A868u; }
        if (ctx->pc != 0x17A868u) { return; }
    }
    ctx->pc = 0x17A868u;
label_17a868:
    // 0x17a868: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x17a868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x17a86c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17a86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a870: 0xc05ede0  jal         func_17B780
    ctx->pc = 0x17A870u;
    SET_GPR_U32(ctx, 31, 0x17A878u);
    ctx->pc = 0x17A874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A870u;
            // 0x17a874: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B780u;
    if (runtime->hasFunction(0x17B780u)) {
        auto targetFn = runtime->lookupFunction(0x17B780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A878u; }
        if (ctx->pc != 0x17A878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B780_0x17b780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A878u; }
        if (ctx->pc != 0x17A878u) { return; }
    }
    ctx->pc = 0x17A878u;
label_17a878:
    // 0x17a878: 0x24041101  addiu       $a0, $zero, 0x1101
    ctx->pc = 0x17a878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
    // 0x17a87c: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17A87Cu;
    SET_GPR_U32(ctx, 31, 0x17A884u);
    ctx->pc = 0x17A880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A87Cu;
            // 0x17a880: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A884u; }
        if (ctx->pc != 0x17A884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A884u; }
        if (ctx->pc != 0x17A884u) { return; }
    }
    ctx->pc = 0x17A884u;
label_17a884:
    // 0x17a884: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A884u;
    {
        const bool branch_taken_0x17a884 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x17a884) {
            ctx->pc = 0x17A898u;
            goto label_17a898;
        }
    }
    ctx->pc = 0x17A88Cu;
    // 0x17a88c: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x17a88cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x17a890: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17A890u;
    {
        const bool branch_taken_0x17a890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A890u;
            // 0x17a894: 0xa2360002  sb          $s6, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a890) {
            ctx->pc = 0x17A8B4u;
            goto label_17a8b4;
        }
    }
    ctx->pc = 0x17A898u;
label_17a898:
    // 0x17a898: 0xc05e9ee  jal         func_17A7B8
    ctx->pc = 0x17A898u;
    SET_GPR_U32(ctx, 31, 0x17A8A0u);
    ctx->pc = 0x17A89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A898u;
            // 0x17a89c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A7B8u;
    if (runtime->hasFunction(0x17A7B8u)) {
        auto targetFn = runtime->lookupFunction(0x17A7B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A8A0u; }
        if (ctx->pc != 0x17A8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A7B8_0x17a7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A8A0u; }
        if (ctx->pc != 0x17A8A0u) { return; }
    }
    ctx->pc = 0x17A8A0u;
label_17a8a0:
    // 0x17a8a0: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x17a8a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x17a8a4: 0x5040ffec  beql        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x17A8A4u;
    {
        const bool branch_taken_0x17a8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a8a4) {
            ctx->pc = 0x17A8A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17A8A4u;
            // 0x17a8a8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17A858u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17a858;
        }
    }
    ctx->pc = 0x17A8ACu;
    // 0x17a8ac: 0xc043c12  jal         func_10F048
    ctx->pc = 0x17A8ACu;
    SET_GPR_U32(ctx, 31, 0x17A8B4u);
    ctx->pc = 0x17A8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A8ACu;
            // 0x17a8b0: 0x26a45890  addiu       $a0, $s5, 0x5890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 22672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A8B4u; }
        if (ctx->pc != 0x17A8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A8B4u; }
        if (ctx->pc != 0x17A8B4u) { return; }
    }
    ctx->pc = 0x17A8B4u;
label_17a8b4:
    // 0x17a8b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17a8b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17a8b8:
    // 0x17a8b8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x17a8b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a8bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x17a8bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a8c0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x17a8c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17a8c4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x17a8c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a8c8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x17a8c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17a8cc: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x17a8ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a8d0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x17a8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17a8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x17A8D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A8D4u;
            // 0x17a8d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A8DCu;
    // 0x17a8dc: 0x0  nop
    ctx->pc = 0x17a8dcu;
    // NOP
label_17a8e0:
    // 0x17a8e0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17a8e4: 0x24634404  addiu       $v1, $v1, 0x4404
    ctx->pc = 0x17a8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17412));
    // 0x17a8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x17A8E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A8E8u;
            // 0x17a8ec: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A8F0u;
label_17a8f0:
    // 0x17a8f0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17a8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17a8f4: 0x24634408  addiu       $v1, $v1, 0x4408
    ctx->pc = 0x17a8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17416));
    // 0x17a8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x17A8F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A8F8u;
            // 0x17a8fc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A900u;
label_17a900:
    // 0x17a900: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17a900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17a904: 0x24424400  addiu       $v0, $v0, 0x4400
    ctx->pc = 0x17a904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17408));
    // 0x17a908: 0x3e00008  jr          $ra
    ctx->pc = 0x17A908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A908u;
            // 0x17a90c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A910u;
label_17a910:
    // 0x17a910: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17a910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17a914: 0x24634400  addiu       $v1, $v1, 0x4400
    ctx->pc = 0x17a914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17408));
    // 0x17a918: 0x3e00008  jr          $ra
    ctx->pc = 0x17A918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A918u;
            // 0x17a91c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A920u;
}
