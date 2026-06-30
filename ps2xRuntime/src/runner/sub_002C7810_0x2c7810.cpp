#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C7810
// Address: 0x2c7810 - 0x2c7950
void sub_002C7810_0x2c7810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7810_0x2c7810");
#endif

    switch (ctx->pc) {
        case 0x2c782cu: goto label_2c782c;
        case 0x2c7834u: goto label_2c7834;
        case 0x2c7880u: goto label_2c7880;
        case 0x2c78e0u: goto label_2c78e0;
        case 0x2c78ecu: goto label_2c78ec;
        case 0x2c78f8u: goto label_2c78f8;
        case 0x2c7904u: goto label_2c7904;
        case 0x2c7910u: goto label_2c7910;
        case 0x2c791cu: goto label_2c791c;
        case 0x2c7934u: goto label_2c7934;
        default: break;
    }

    ctx->pc = 0x2c7810u;

    // 0x2c7810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c7810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c7814: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2c7814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2c7818: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c7818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c781c: 0x34468a92  ori         $a2, $v0, 0x8A92
    ctx->pc = 0x2c781cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
    // 0x2c7820: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c7820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c7824: 0xc0b1f28  jal         func_2C7CA0
    ctx->pc = 0x2C7824u;
    SET_GPR_U32(ctx, 31, 0x2C782Cu);
    ctx->pc = 0x2C7828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7824u;
            // 0x2c7828: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7CA0u;
    if (runtime->hasFunction(0x2C7CA0u)) {
        auto targetFn = runtime->lookupFunction(0x2C7CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C782Cu; }
        if (ctx->pc != 0x2C782Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C7CA0_0x2c7ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C782Cu; }
        if (ctx->pc != 0x2C782Cu) { return; }
    }
    ctx->pc = 0x2C782Cu;
label_2c782c:
    // 0x2c782c: 0xc0aed9c  jal         func_2BB670
    ctx->pc = 0x2C782Cu;
    SET_GPR_U32(ctx, 31, 0x2C7834u);
    ctx->pc = 0x2C7830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C782Cu;
            // 0x2c7830: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB670u;
    if (runtime->hasFunction(0x2BB670u)) {
        auto targetFn = runtime->lookupFunction(0x2BB670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7834u; }
        if (ctx->pc != 0x2C7834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB670_0x2bb670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7834u; }
        if (ctx->pc != 0x2C7834u) { return; }
    }
    ctx->pc = 0x2C7834u;
label_2c7834:
    // 0x2c7834: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c7834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c7838: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c7838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c783c: 0x244208e0  addiu       $v0, $v0, 0x8E0
    ctx->pc = 0x2c783cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2272));
    // 0x2c7840: 0x24630918  addiu       $v1, $v1, 0x918
    ctx->pc = 0x2c7840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2328));
    // 0x2c7844: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c7844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c7848: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c7848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2c784c: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2c784cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2c7850: 0x2442eb80  addiu       $v0, $v0, -0x1480
    ctx->pc = 0x2c7850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962048));
    // 0x2c7854: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2c7854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2c7858: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c7858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c785c: 0x2463ebb8  addiu       $v1, $v1, -0x1448
    ctx->pc = 0x2c785cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962104));
    // 0x2c7860: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2c7860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2c7864: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c7864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7868: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c7868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c786c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c786cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7870: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7870u;
            // 0x2c7874: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C7878u;
    // 0x2c7878: 0x0  nop
    ctx->pc = 0x2c7878u;
    // NOP
    // 0x2c787c: 0x0  nop
    ctx->pc = 0x2c787cu;
    // NOP
label_2c7880:
    // 0x2c7880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c7880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c7884: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c7884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c7888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c7888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c788c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c788cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c7890: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c7890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7894: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C7894u;
    {
        const bool branch_taken_0x2c7894 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7894u;
            // 0x2c7898: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7894) {
            ctx->pc = 0x2C7934u;
            goto label_2c7934;
        }
    }
    ctx->pc = 0x2C789Cu;
    // 0x2c789c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c789cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c78a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c78a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c78a4: 0x246308e0  addiu       $v1, $v1, 0x8E0
    ctx->pc = 0x2c78a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2272));
    // 0x2c78a8: 0x24420918  addiu       $v0, $v0, 0x918
    ctx->pc = 0x2c78a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2328));
    // 0x2c78ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c78acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c78b0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C78B0u;
    {
        const bool branch_taken_0x2c78b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C78B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C78B0u;
            // 0x2c78b4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c78b0) {
            ctx->pc = 0x2C791Cu;
            goto label_2c791c;
        }
    }
    ctx->pc = 0x2C78B8u;
    // 0x2c78b8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c78b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c78bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c78bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c78c0: 0x24630890  addiu       $v1, $v1, 0x890
    ctx->pc = 0x2c78c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2192));
    // 0x2c78c4: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c78c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c78c8: 0x244208c8  addiu       $v0, $v0, 0x8C8
    ctx->pc = 0x2c78c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2248));
    // 0x2c78cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c78ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c78d0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2c78d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2c78d4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2c78d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2c78d8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2C78D8u;
    SET_GPR_U32(ctx, 31, 0x2C78E0u);
    ctx->pc = 0x2C78DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C78D8u;
            // 0x2c78dc: 0x24a57a90  addiu       $a1, $a1, 0x7A90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C78E0u; }
        if (ctx->pc != 0x2C78E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C78E0u; }
        if (ctx->pc != 0x2C78E0u) { return; }
    }
    ctx->pc = 0x2C78E0u;
label_2c78e0:
    // 0x2c78e0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2c78e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2c78e4: 0xc0b1e88  jal         func_2C7A20
    ctx->pc = 0x2C78E4u;
    SET_GPR_U32(ctx, 31, 0x2C78ECu);
    ctx->pc = 0x2C78E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C78E4u;
            // 0x2c78e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7A20u;
    if (runtime->hasFunction(0x2C7A20u)) {
        auto targetFn = runtime->lookupFunction(0x2C7A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C78ECu; }
        if (ctx->pc != 0x2C78ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C7A20_0x2c7a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C78ECu; }
        if (ctx->pc != 0x2C78ECu) { return; }
    }
    ctx->pc = 0x2C78ECu;
label_2c78ec:
    // 0x2c78ec: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2c78ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2c78f0: 0xc0b1e6c  jal         func_2C79B0
    ctx->pc = 0x2C78F0u;
    SET_GPR_U32(ctx, 31, 0x2C78F8u);
    ctx->pc = 0x2C78F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C78F0u;
            // 0x2c78f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C79B0u;
    if (runtime->hasFunction(0x2C79B0u)) {
        auto targetFn = runtime->lookupFunction(0x2C79B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C78F8u; }
        if (ctx->pc != 0x2C78F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C79B0_0x2c79b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C78F8u; }
        if (ctx->pc != 0x2C78F8u) { return; }
    }
    ctx->pc = 0x2C78F8u;
label_2c78f8:
    // 0x2c78f8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2c78f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2c78fc: 0xc0b1e6c  jal         func_2C79B0
    ctx->pc = 0x2C78FCu;
    SET_GPR_U32(ctx, 31, 0x2C7904u);
    ctx->pc = 0x2C7900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C78FCu;
            // 0x2c7900: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C79B0u;
    if (runtime->hasFunction(0x2C79B0u)) {
        auto targetFn = runtime->lookupFunction(0x2C79B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7904u; }
        if (ctx->pc != 0x2C7904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C79B0_0x2c79b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7904u; }
        if (ctx->pc != 0x2C7904u) { return; }
    }
    ctx->pc = 0x2C7904u;
label_2c7904:
    // 0x2c7904: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2c7904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2c7908: 0xc0b1e54  jal         func_2C7950
    ctx->pc = 0x2C7908u;
    SET_GPR_U32(ctx, 31, 0x2C7910u);
    ctx->pc = 0x2C790Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7908u;
            // 0x2c790c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7950u;
    if (runtime->hasFunction(0x2C7950u)) {
        auto targetFn = runtime->lookupFunction(0x2C7950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7910u; }
        if (ctx->pc != 0x2C7910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C7950_0x2c7950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7910u; }
        if (ctx->pc != 0x2C7910u) { return; }
    }
    ctx->pc = 0x2C7910u;
label_2c7910:
    // 0x2c7910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7914: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2C7914u;
    SET_GPR_U32(ctx, 31, 0x2C791Cu);
    ctx->pc = 0x2C7918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7914u;
            // 0x2c7918: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C791Cu; }
        if (ctx->pc != 0x2C791Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C791Cu; }
        if (ctx->pc != 0x2C791Cu) { return; }
    }
    ctx->pc = 0x2C791Cu;
label_2c791c:
    // 0x2c791c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c791cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2c7920: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c7920u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c7924: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7924u;
    {
        const bool branch_taken_0x2c7924 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c7924) {
            ctx->pc = 0x2C7928u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7924u;
            // 0x2c7928: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C7938u;
            goto label_2c7938;
        }
    }
    ctx->pc = 0x2C792Cu;
    // 0x2c792c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C792Cu;
    SET_GPR_U32(ctx, 31, 0x2C7934u);
    ctx->pc = 0x2C7930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C792Cu;
            // 0x2c7930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7934u; }
        if (ctx->pc != 0x2C7934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7934u; }
        if (ctx->pc != 0x2C7934u) { return; }
    }
    ctx->pc = 0x2C7934u;
label_2c7934:
    // 0x2c7934: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c7934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7938:
    // 0x2c7938: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c7938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c793c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c793cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7940: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c7940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7944: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7944u;
            // 0x2c7948: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C794Cu;
    // 0x2c794c: 0x0  nop
    ctx->pc = 0x2c794cu;
    // NOP
}
