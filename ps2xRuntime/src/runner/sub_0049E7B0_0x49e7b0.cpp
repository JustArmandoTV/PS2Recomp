#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049E7B0
// Address: 0x49e7b0 - 0x49e8f0
void sub_0049E7B0_0x49e7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049E7B0_0x49e7b0");
#endif

    switch (ctx->pc) {
        case 0x49e7ccu: goto label_49e7cc;
        case 0x49e7ecu: goto label_49e7ec;
        case 0x49e820u: goto label_49e820;
        case 0x49e880u: goto label_49e880;
        case 0x49e88cu: goto label_49e88c;
        case 0x49e898u: goto label_49e898;
        case 0x49e8a4u: goto label_49e8a4;
        case 0x49e8b0u: goto label_49e8b0;
        case 0x49e8bcu: goto label_49e8bc;
        case 0x49e8d4u: goto label_49e8d4;
        default: break;
    }

    ctx->pc = 0x49e7b0u;

    // 0x49e7b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49e7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x49e7b4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x49e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x49e7b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49e7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x49e7bc: 0x34468702  ori         $a2, $v0, 0x8702
    ctx->pc = 0x49e7bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34562);
    // 0x49e7c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49e7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x49e7c4: 0xc127a74  jal         func_49E9D0
    ctx->pc = 0x49E7C4u;
    SET_GPR_U32(ctx, 31, 0x49E7CCu);
    ctx->pc = 0x49E7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E7C4u;
            // 0x49e7c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49E9D0u;
    if (runtime->hasFunction(0x49E9D0u)) {
        auto targetFn = runtime->lookupFunction(0x49E9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E7CCu; }
        if (ctx->pc != 0x49E7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049E9D0_0x49e9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E7CCu; }
        if (ctx->pc != 0x49E7CCu) { return; }
    }
    ctx->pc = 0x49E7CCu;
label_49e7cc:
    // 0x49e7cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49e7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x49e7d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x49e7d4: 0x2463ff70  addiu       $v1, $v1, -0x90
    ctx->pc = 0x49e7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967152));
    // 0x49e7d8: 0x2442ffa8  addiu       $v0, $v0, -0x58
    ctx->pc = 0x49e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967208));
    // 0x49e7dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49e7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49e7e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49e7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e7e4: 0xc127a70  jal         func_49E9C0
    ctx->pc = 0x49E7E4u;
    SET_GPR_U32(ctx, 31, 0x49E7ECu);
    ctx->pc = 0x49E7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E7E4u;
            // 0x49e7e8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49E9C0u;
    if (runtime->hasFunction(0x49E9C0u)) {
        auto targetFn = runtime->lookupFunction(0x49E9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E7ECu; }
        if (ctx->pc != 0x49E7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049E9C0_0x49e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E7ECu; }
        if (ctx->pc != 0x49E7ECu) { return; }
    }
    ctx->pc = 0x49E7ECu;
label_49e7ec:
    // 0x49e7ec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x49e7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x49e7f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x49e7f4: 0x2442fec0  addiu       $v0, $v0, -0x140
    ctx->pc = 0x49e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966976));
    // 0x49e7f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x49e7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x49e7fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x49e800: 0x2442fef8  addiu       $v0, $v0, -0x108
    ctx->pc = 0x49e800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967032));
    // 0x49e804: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x49e804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x49e808: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49e808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e80c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49e80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49e810: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49e810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49e814: 0x3e00008  jr          $ra
    ctx->pc = 0x49E814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49E818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E814u;
            // 0x49e818: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49E81Cu;
    // 0x49e81c: 0x0  nop
    ctx->pc = 0x49e81cu;
    // NOP
label_49e820:
    // 0x49e820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49e820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49e824: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49e824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x49e828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49e828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x49e82c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49e82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x49e830: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49e830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e834: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x49E834u;
    {
        const bool branch_taken_0x49e834 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E834u;
            // 0x49e838: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e834) {
            ctx->pc = 0x49E8D4u;
            goto label_49e8d4;
        }
    }
    ctx->pc = 0x49E83Cu;
    // 0x49e83c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49e83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x49e840: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49e840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x49e844: 0x2463ff70  addiu       $v1, $v1, -0x90
    ctx->pc = 0x49e844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967152));
    // 0x49e848: 0x2442ffa8  addiu       $v0, $v0, -0x58
    ctx->pc = 0x49e848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967208));
    // 0x49e84c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49e84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49e850: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x49E850u;
    {
        const bool branch_taken_0x49e850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E850u;
            // 0x49e854: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e850) {
            ctx->pc = 0x49E8BCu;
            goto label_49e8bc;
        }
    }
    ctx->pc = 0x49E858u;
    // 0x49e858: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49e858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x49e85c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49e85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x49e860: 0x2463ff20  addiu       $v1, $v1, -0xE0
    ctx->pc = 0x49e860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967072));
    // 0x49e864: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x49e864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x49e868: 0x2442ff58  addiu       $v0, $v0, -0xA8
    ctx->pc = 0x49e868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967128));
    // 0x49e86c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49e86cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49e870: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x49e870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x49e874: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x49e874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x49e878: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x49E878u;
    SET_GPR_U32(ctx, 31, 0x49E880u);
    ctx->pc = 0x49E87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E878u;
            // 0x49e87c: 0x24a5e0e0  addiu       $a1, $a1, -0x1F20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E880u; }
        if (ctx->pc != 0x49E880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E880u; }
        if (ctx->pc != 0x49E880u) { return; }
    }
    ctx->pc = 0x49E880u;
label_49e880:
    // 0x49e880: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x49e880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x49e884: 0xc0aeacc  jal         func_2BAB30
    ctx->pc = 0x49E884u;
    SET_GPR_U32(ctx, 31, 0x49E88Cu);
    ctx->pc = 0x49E888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E884u;
            // 0x49e888: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB30u;
    if (runtime->hasFunction(0x2BAB30u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E88Cu; }
        if (ctx->pc != 0x49E88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB30_0x2bab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E88Cu; }
        if (ctx->pc != 0x49E88Cu) { return; }
    }
    ctx->pc = 0x49E88Cu;
label_49e88c:
    // 0x49e88c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x49e88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x49e890: 0xc127a54  jal         func_49E950
    ctx->pc = 0x49E890u;
    SET_GPR_U32(ctx, 31, 0x49E898u);
    ctx->pc = 0x49E894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E890u;
            // 0x49e894: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49E950u;
    if (runtime->hasFunction(0x49E950u)) {
        auto targetFn = runtime->lookupFunction(0x49E950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E898u; }
        if (ctx->pc != 0x49E898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049E950_0x49e950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E898u; }
        if (ctx->pc != 0x49E898u) { return; }
    }
    ctx->pc = 0x49E898u;
label_49e898:
    // 0x49e898: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x49e898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x49e89c: 0xc127a54  jal         func_49E950
    ctx->pc = 0x49E89Cu;
    SET_GPR_U32(ctx, 31, 0x49E8A4u);
    ctx->pc = 0x49E8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E89Cu;
            // 0x49e8a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49E950u;
    if (runtime->hasFunction(0x49E950u)) {
        auto targetFn = runtime->lookupFunction(0x49E950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E8A4u; }
        if (ctx->pc != 0x49E8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049E950_0x49e950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E8A4u; }
        if (ctx->pc != 0x49E8A4u) { return; }
    }
    ctx->pc = 0x49E8A4u;
label_49e8a4:
    // 0x49e8a4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x49e8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x49e8a8: 0xc127a3c  jal         func_49E8F0
    ctx->pc = 0x49E8A8u;
    SET_GPR_U32(ctx, 31, 0x49E8B0u);
    ctx->pc = 0x49E8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E8A8u;
            // 0x49e8ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49E8F0u;
    if (runtime->hasFunction(0x49E8F0u)) {
        auto targetFn = runtime->lookupFunction(0x49E8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E8B0u; }
        if (ctx->pc != 0x49E8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049E8F0_0x49e8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E8B0u; }
        if (ctx->pc != 0x49E8B0u) { return; }
    }
    ctx->pc = 0x49E8B0u;
label_49e8b0:
    // 0x49e8b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49e8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e8b4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x49E8B4u;
    SET_GPR_U32(ctx, 31, 0x49E8BCu);
    ctx->pc = 0x49E8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E8B4u;
            // 0x49e8b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E8BCu; }
        if (ctx->pc != 0x49E8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E8BCu; }
        if (ctx->pc != 0x49E8BCu) { return; }
    }
    ctx->pc = 0x49E8BCu;
label_49e8bc:
    // 0x49e8bc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x49e8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x49e8c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x49e8c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x49e8c4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49E8C4u;
    {
        const bool branch_taken_0x49e8c4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x49e8c4) {
            ctx->pc = 0x49E8C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49E8C4u;
            // 0x49e8c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49E8D8u;
            goto label_49e8d8;
        }
    }
    ctx->pc = 0x49E8CCu;
    // 0x49e8cc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x49E8CCu;
    SET_GPR_U32(ctx, 31, 0x49E8D4u);
    ctx->pc = 0x49E8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E8CCu;
            // 0x49e8d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E8D4u; }
        if (ctx->pc != 0x49E8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E8D4u; }
        if (ctx->pc != 0x49E8D4u) { return; }
    }
    ctx->pc = 0x49E8D4u;
label_49e8d4:
    // 0x49e8d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49e8d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49e8d8:
    // 0x49e8d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49e8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49e8dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49e8dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49e8e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49e8e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49e8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x49E8E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49E8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E8E4u;
            // 0x49e8e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49E8ECu;
    // 0x49e8ec: 0x0  nop
    ctx->pc = 0x49e8ecu;
    // NOP
}
