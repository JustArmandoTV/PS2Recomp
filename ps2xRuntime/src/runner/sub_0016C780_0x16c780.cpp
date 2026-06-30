#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016C780
// Address: 0x16c780 - 0x16c9f8
void sub_0016C780_0x16c780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C780_0x16c780");
#endif

    switch (ctx->pc) {
        case 0x16c798u: goto label_16c798;
        case 0x16c7f4u: goto label_16c7f4;
        case 0x16c80cu: goto label_16c80c;
        case 0x16c824u: goto label_16c824;
        case 0x16c888u: goto label_16c888;
        case 0x16c890u: goto label_16c890;
        case 0x16c8a0u: goto label_16c8a0;
        case 0x16c8c0u: goto label_16c8c0;
        case 0x16c918u: goto label_16c918;
        case 0x16c920u: goto label_16c920;
        case 0x16c928u: goto label_16c928;
        case 0x16c930u: goto label_16c930;
        case 0x16c950u: goto label_16c950;
        default: break;
    }

    ctx->pc = 0x16c780u;

    // 0x16c780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c784: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16c784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16c788: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16C788u;
    {
        const bool branch_taken_0x16c788 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x16C78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C788u;
            // 0x16c78c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c788) {
            ctx->pc = 0x16C7A8u;
            goto label_16c7a8;
        }
    }
    ctx->pc = 0x16C790u;
    // 0x16c790: 0xc05b51c  jal         func_16D470
    ctx->pc = 0x16C790u;
    SET_GPR_U32(ctx, 31, 0x16C798u);
    ctx->pc = 0x16D470u;
    if (runtime->hasFunction(0x16D470u)) {
        auto targetFn = runtime->lookupFunction(0x16D470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C798u; }
        if (ctx->pc != 0x16C798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D470_0x16d470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C798u; }
        if (ctx->pc != 0x16C798u) { return; }
    }
    ctx->pc = 0x16C798u;
label_16c798:
    // 0x16c798: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16c798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c79c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x16c79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x16c7a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16c7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c7a4: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x16c7a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_16c7a8:
    // 0x16c7a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c7ac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x16c7acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x16C7B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C7B0u;
            // 0x16c7b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16C7B8u;
    // 0x16c7b8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16c7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16c7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x16C7BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C7BCu;
            // 0x16c7c0: 0x8c62aa20  lw          $v0, -0x55E0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945312)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16C7C4u;
    // 0x16c7c4: 0x0  nop
    ctx->pc = 0x16c7c4u;
    // NOP
    // 0x16c7c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16c7cc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16c7d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16c7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16c7d4: 0x2452aa70  addiu       $s2, $v0, -0x5590
    ctx->pc = 0x16c7d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945392));
    // 0x16c7d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x16c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16c7dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16c7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16c7e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16c7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16c7e4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x16C7E4u;
    {
        const bool branch_taken_0x16c7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C7E4u;
            // 0x16c7e8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c7e4) {
            ctx->pc = 0x16C82Cu;
            goto label_16c82c;
        }
    }
    ctx->pc = 0x16C7ECu;
    // 0x16c7ec: 0xc043094  jal         func_10C250
    ctx->pc = 0x16C7ECu;
    SET_GPR_U32(ctx, 31, 0x16C7F4u);
    ctx->pc = 0x16C7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C7ECu;
            // 0x16c7f0: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C250u;
    if (runtime->hasFunction(0x10C250u)) {
        auto targetFn = runtime->lookupFunction(0x10C250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C7F4u; }
        if (ctx->pc != 0x16C7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C250_0x10c250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C7F4u; }
        if (ctx->pc != 0x16C7F4u) { return; }
    }
    ctx->pc = 0x16C7F4u;
label_16c7f4:
    // 0x16c7f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16c7f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c7f8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16c7fc: 0x8c45aa40  lw          $a1, -0x55C0($v0)
    ctx->pc = 0x16c7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945344)));
    // 0x16c800: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c804: 0xc04307c  jal         func_10C1F0
    ctx->pc = 0x16C804u;
    SET_GPR_U32(ctx, 31, 0x16C80Cu);
    ctx->pc = 0x16C808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C804u;
            // 0x16c808: 0x2610aac8  addiu       $s0, $s0, -0x5538 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1F0u;
    if (runtime->hasFunction(0x10C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C80Cu; }
        if (ctx->pc != 0x16C80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C1F0_0x10c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C80Cu; }
        if (ctx->pc != 0x16C80Cu) { return; }
    }
    ctx->pc = 0x16C80Cu;
label_16c80c:
    // 0x16c80c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16c80cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16c810: 0xac622360  sw          $v0, 0x2360($v1)
    ctx->pc = 0x16c810u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9056), GPR_U32(ctx, 2));
    // 0x16c814: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x16c814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x16c818: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16c818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16c81c: 0xc05b3f0  jal         func_16CFC0
    ctx->pc = 0x16C81Cu;
    SET_GPR_U32(ctx, 31, 0x16C824u);
    ctx->pc = 0x16C820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C81Cu;
            // 0x16c820: 0xacb12364  sw          $s1, 0x2364($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 9060), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16CFC0u;
    if (runtime->hasFunction(0x16CFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16CFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C824u; }
        if (ctx->pc != 0x16C824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CFC0_0x16cfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C824u; }
        if (ctx->pc != 0x16C824u) { return; }
    }
    ctx->pc = 0x16C824u;
label_16c824:
    // 0x16c824: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16c824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16c828: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x16c828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16c82c:
    // 0x16c82c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16c830: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c834: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x16c834u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x16c838: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16c838u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c83c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16c83cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c840: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16c840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16c844: 0x3e00008  jr          $ra
    ctx->pc = 0x16C844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C844u;
            // 0x16c848: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16C84Cu;
    // 0x16c84c: 0x0  nop
    ctx->pc = 0x16c84cu;
    // NOP
    // 0x16c850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16c854: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16c854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16c858: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16c858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16c85c: 0x2471aa70  addiu       $s1, $v1, -0x5590
    ctx->pc = 0x16c85cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945392));
    // 0x16c860: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16c860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16c864: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16c864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16c868: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16c868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16c86c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16c86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16c870: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16C870u;
    {
        const bool branch_taken_0x16c870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C870u;
            // 0x16c874: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c870) {
            ctx->pc = 0x16C8A0u;
            goto label_16c8a0;
        }
    }
    ctx->pc = 0x16C878u;
    // 0x16c878: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x16c878u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x16c87c: 0x2610aac8  addiu       $s0, $s0, -0x5538
    ctx->pc = 0x16c87cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945480));
    // 0x16c880: 0xc05b40a  jal         func_16D028
    ctx->pc = 0x16C880u;
    SET_GPR_U32(ctx, 31, 0x16C888u);
    ctx->pc = 0x16C884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C880u;
            // 0x16c884: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16D028u;
    if (runtime->hasFunction(0x16D028u)) {
        auto targetFn = runtime->lookupFunction(0x16D028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C888u; }
        if (ctx->pc != 0x16C888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D028_0x16d028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C888u; }
        if (ctx->pc != 0x16C888u) { return; }
    }
    ctx->pc = 0x16C888u;
label_16c888:
    // 0x16c888: 0xc043094  jal         func_10C250
    ctx->pc = 0x16C888u;
    SET_GPR_U32(ctx, 31, 0x16C890u);
    ctx->pc = 0x16C88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C888u;
            // 0x16c88c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C250u;
    if (runtime->hasFunction(0x10C250u)) {
        auto targetFn = runtime->lookupFunction(0x10C250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C890u; }
        if (ctx->pc != 0x16C890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C250_0x10c250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C890u; }
        if (ctx->pc != 0x16C890u) { return; }
    }
    ctx->pc = 0x16C890u;
label_16c890:
    // 0x16c890: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16c890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16c894: 0x8c652360  lw          $a1, 0x2360($v1)
    ctx->pc = 0x16c894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9056)));
    // 0x16c898: 0xc04307c  jal         func_10C1F0
    ctx->pc = 0x16C898u;
    SET_GPR_U32(ctx, 31, 0x16C8A0u);
    ctx->pc = 0x16C89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C898u;
            // 0x16c89c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1F0u;
    if (runtime->hasFunction(0x10C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C8A0u; }
        if (ctx->pc != 0x16C8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C1F0_0x10c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C8A0u; }
        if (ctx->pc != 0x16C8A0u) { return; }
    }
    ctx->pc = 0x16C8A0u;
label_16c8a0:
    // 0x16c8a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16c8a4: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x16C8A4u;
    {
        const bool branch_taken_0x16c8a4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x16c8a4) {
            ctx->pc = 0x16C8A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16C8A4u;
            // 0x16c8a8: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16C8ACu;
            goto label_16c8ac;
        }
    }
    ctx->pc = 0x16C8ACu;
label_16c8ac:
    // 0x16c8ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c8acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c8b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16c8b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c8b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16c8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x16C8B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C8B8u;
            // 0x16c8bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16C8C0u;
label_16c8c0:
    // 0x16c8c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16c8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16c8c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16c8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16c8c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16c8c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c8cc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x16c8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x16c8d0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x16c8d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c8d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16c8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16c8d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16c8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16c8dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16c8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16c8e0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16c8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16c8e4: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x16C8E4u;
    {
        const bool branch_taken_0x16c8e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C8E4u;
            // 0x16c8e8: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c8e4) {
            ctx->pc = 0x16C980u;
            goto label_16c980;
        }
    }
    ctx->pc = 0x16C8ECu;
    // 0x16c8ec: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16c8f0: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x16c8f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x16c8f4: 0x8c45aa40  lw          $a1, -0x55C0($v0)
    ctx->pc = 0x16c8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945344)));
    // 0x16c8f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16c8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c8fc: 0x2610aa74  addiu       $s0, $s0, -0x558C
    ctx->pc = 0x16c8fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945396));
    // 0x16c900: 0x3c120beb  lui         $s2, 0xBEB
    ctx->pc = 0x16c900u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)3051 << 16));
    // 0x16c904: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16c904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x16c908: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x16c908u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c90c: 0x3652c1ff  ori         $s2, $s2, 0xC1FF
    ctx->pc = 0x16c90cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)49663);
    // 0x16c910: 0xc04307c  jal         func_10C1F0
    ctx->pc = 0x16C910u;
    SET_GPR_U32(ctx, 31, 0x16C918u);
    ctx->pc = 0x16C914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C910u;
            // 0x16c914: 0x3c140063  lui         $s4, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1F0u;
    if (runtime->hasFunction(0x10C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C918u; }
        if (ctx->pc != 0x16C918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C1F0_0x10c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C918u; }
        if (ctx->pc != 0x16C918u) { return; }
    }
    ctx->pc = 0x16C918u;
label_16c918:
    // 0x16c918: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16c918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c91c: 0x0  nop
    ctx->pc = 0x16c91cu;
    // NOP
label_16c920:
    // 0x16c920: 0xc05b3d6  jal         func_16CF58
    ctx->pc = 0x16C920u;
    SET_GPR_U32(ctx, 31, 0x16C928u);
    ctx->pc = 0x16C924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C920u;
            // 0x16c924: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16CF58u;
    if (runtime->hasFunction(0x16CF58u)) {
        auto targetFn = runtime->lookupFunction(0x16CF58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C928u; }
        if (ctx->pc != 0x16C928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CF58_0x16cf58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C928u; }
        if (ctx->pc != 0x16C928u) { return; }
    }
    ctx->pc = 0x16C928u;
label_16c928:
    // 0x16c928: 0xc05b3f0  jal         func_16CFC0
    ctx->pc = 0x16C928u;
    SET_GPR_U32(ctx, 31, 0x16C930u);
    ctx->pc = 0x16C92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C928u;
            // 0x16c92c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16CFC0u;
    if (runtime->hasFunction(0x16CFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16CFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C930u; }
        if (ctx->pc != 0x16C930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CFC0_0x16cfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C930u; }
        if (ctx->pc != 0x16C930u) { return; }
    }
    ctx->pc = 0x16C930u;
label_16c930:
    // 0x16c930: 0x250182a  slt         $v1, $s2, $s0
    ctx->pc = 0x16c930u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x16c934: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x16c934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16c938: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16C938u;
    {
        const bool branch_taken_0x16c938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C938u;
            // 0x16c93c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c938) {
            ctx->pc = 0x16C950u;
            goto label_16c950;
        }
    }
    ctx->pc = 0x16C940u;
    // 0x16c940: 0x1060fff7  beqz        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x16C940u;
    {
        const bool branch_taken_0x16c940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c940) {
            ctx->pc = 0x16C920u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16c920;
        }
    }
    ctx->pc = 0x16C948u;
    // 0x16c948: 0xc061fea  jal         func_187FA8
    ctx->pc = 0x16C948u;
    SET_GPR_U32(ctx, 31, 0x16C950u);
    ctx->pc = 0x16C94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C948u;
            // 0x16c94c: 0x26843e98  addiu       $a0, $s4, 0x3E98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187FA8u;
    if (runtime->hasFunction(0x187FA8u)) {
        auto targetFn = runtime->lookupFunction(0x187FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C950u; }
        if (ctx->pc != 0x16C950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187FA8_0x187fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C950u; }
        if (ctx->pc != 0x16C950u) { return; }
    }
    ctx->pc = 0x16C950u;
label_16c950:
    // 0x16c950: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c954: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16c954u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c958: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x16c958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c95c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x16c95cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16c960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c964: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16c964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c968: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16c968u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16c96c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16c96cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c970: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16c970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16c974: 0x804307c  j           func_10C1F0
    ctx->pc = 0x16C974u;
    ctx->pc = 0x16C978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C974u;
            // 0x16c978: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1F0u;
    if (runtime->hasFunction(0x10C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010C1F0_0x10c1f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16C97Cu;
    // 0x16c97c: 0x0  nop
    ctx->pc = 0x16c97cu;
    // NOP
label_16c980:
    // 0x16c980: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c984: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16c984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c988: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16c988u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c98c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16c98cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16c990: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16c990u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c994: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x16c994u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16c998: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16c998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16c99c: 0x3e00008  jr          $ra
    ctx->pc = 0x16C99Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C99Cu;
            // 0x16c9a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16C9A4u;
    // 0x16c9a4: 0x0  nop
    ctx->pc = 0x16c9a4u;
    // NOP
    // 0x16c9a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c9ac: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16c9b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c9b4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16c9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16c9b8: 0x2442aadc  addiu       $v0, $v0, -0x5524
    ctx->pc = 0x16c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945500));
    // 0x16c9bc: 0x8c65aa58  lw          $a1, -0x55A8($v1)
    ctx->pc = 0x16c9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945368)));
    // 0x16c9c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16c9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c9c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c9c8: 0x805b230  j           func_16C8C0
    ctx->pc = 0x16C9C8u;
    ctx->pc = 0x16C9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C9C8u;
            // 0x16c9cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16C8C0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_16c8c0;
    ctx->pc = 0x16C9D0u;
    // 0x16c9d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c9d4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16c9d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c9dc: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16c9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16c9e0: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x16c9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x16c9e4: 0x8c65aa5c  lw          $a1, -0x55A4($v1)
    ctx->pc = 0x16c9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945372)));
    // 0x16c9e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16c9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c9ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c9f0: 0x805b230  j           func_16C8C0
    ctx->pc = 0x16C9F0u;
    ctx->pc = 0x16C9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C9F0u;
            // 0x16c9f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16C8C0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_16c8c0;
    ctx->pc = 0x16C9F8u;
}
