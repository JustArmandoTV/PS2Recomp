#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BC780
// Address: 0x2bc780 - 0x2bc9f0
void sub_002BC780_0x2bc780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC780_0x2bc780");
#endif

    switch (ctx->pc) {
        case 0x2bc7b0u: goto label_2bc7b0;
        case 0x2bc804u: goto label_2bc804;
        case 0x2bc87cu: goto label_2bc87c;
        case 0x2bc89cu: goto label_2bc89c;
        case 0x2bc8b0u: goto label_2bc8b0;
        case 0x2bc8bcu: goto label_2bc8bc;
        case 0x2bc8c0u: goto label_2bc8c0;
        case 0x2bc8e4u: goto label_2bc8e4;
        case 0x2bc970u: goto label_2bc970;
        case 0x2bc978u: goto label_2bc978;
        default: break;
    }

    ctx->pc = 0x2bc780u;

    // 0x2bc780: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bc780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2bc784: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2bc784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bc788: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bc788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2bc78c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bc78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2bc790: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bc790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bc794: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2bc794u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bc798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bc79c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bc79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bc7a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2bc7a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc7a4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2bc7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc7a8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2BC7A8u;
    SET_GPR_U32(ctx, 31, 0x2BC7B0u);
    ctx->pc = 0x2BC7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC7A8u;
            // 0x2bc7ac: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC7B0u; }
        if (ctx->pc != 0x2BC7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC7B0u; }
        if (ctx->pc != 0x2BC7B0u) { return; }
    }
    ctx->pc = 0x2BC7B0u;
label_2bc7b0:
    // 0x2bc7b0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bc7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bc7b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bc7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bc7b8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2bc7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2bc7bc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2bc7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2bc7c0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2bc7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2bc7c4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2bc7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2bc7c8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2bc7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2bc7cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2bc7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bc7d0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2bc7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2bc7d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bc7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2bc7d8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2bc7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2bc7dc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2bc7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bc7e0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2bc7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2bc7e4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2bc7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2bc7e8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2bc7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2bc7ec: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2bc7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2bc7f0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2bc7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2bc7f4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2bc7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2bc7f8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2bc7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2bc7fc: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2BC7FCu;
    SET_GPR_U32(ctx, 31, 0x2BC804u);
    ctx->pc = 0x2BC800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC7FCu;
            // 0x2bc800: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC804u; }
        if (ctx->pc != 0x2BC804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC804u; }
        if (ctx->pc != 0x2BC804u) { return; }
    }
    ctx->pc = 0x2BC804u;
label_2bc804:
    // 0x2bc804: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bc804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bc808: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2bc808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2bc80c: 0x24632078  addiu       $v1, $v1, 0x2078
    ctx->pc = 0x2bc80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8312));
    // 0x2bc810: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2bc810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2bc814: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2bc814u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2bc818: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bc818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2bc81c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bc81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bc820: 0xac440d40  sw          $a0, 0xD40($v0)
    ctx->pc = 0x2bc820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3392), GPR_U32(ctx, 4));
    // 0x2bc824: 0x24632090  addiu       $v1, $v1, 0x2090
    ctx->pc = 0x2bc824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8336));
    // 0x2bc828: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bc828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bc82c: 0x244220c8  addiu       $v0, $v0, 0x20C8
    ctx->pc = 0x2bc82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8392));
    // 0x2bc830: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2bc830u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2bc834: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2bc834u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2bc838: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2bc838u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2bc83c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2bc83cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2bc840: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2bc840u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2bc844: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2bc844u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2bc848: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2bc848u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2bc84c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2bc84cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2bc850: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2bc850u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2bc854: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2bc854u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2bc858: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2bc858u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2bc85c: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2bc85cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2bc860: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2BC860u;
    {
        const bool branch_taken_0x2bc860 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc860) {
            ctx->pc = 0x2BC8F8u;
            goto label_2bc8f8;
        }
    }
    ctx->pc = 0x2BC868u;
    // 0x2bc868: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2bc868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2bc86c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2bc86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2bc870: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2bc870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2bc874: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2BC874u;
    SET_GPR_U32(ctx, 31, 0x2BC87Cu);
    ctx->pc = 0x2BC878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC874u;
            // 0x2bc878: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC87Cu; }
        if (ctx->pc != 0x2BC87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC87Cu; }
        if (ctx->pc != 0x2BC87Cu) { return; }
    }
    ctx->pc = 0x2BC87Cu;
label_2bc87c:
    // 0x2bc87c: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bc87cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2bc880: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2bc880u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2bc884: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bc884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc888: 0x24a5c920  addiu       $a1, $a1, -0x36E0
    ctx->pc = 0x2bc888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953248));
    // 0x2bc88c: 0x24c6c520  addiu       $a2, $a2, -0x3AE0
    ctx->pc = 0x2bc88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952224));
    // 0x2bc890: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x2bc890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2bc894: 0xc040840  jal         func_102100
    ctx->pc = 0x2BC894u;
    SET_GPR_U32(ctx, 31, 0x2BC89Cu);
    ctx->pc = 0x2BC898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC894u;
            // 0x2bc898: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC89Cu; }
        if (ctx->pc != 0x2BC89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC89Cu; }
        if (ctx->pc != 0x2BC89Cu) { return; }
    }
    ctx->pc = 0x2BC89Cu;
label_2bc89c:
    // 0x2bc89c: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2bc89cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2bc8a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2bc8a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc8a4: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2bc8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2bc8a8: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2BC8A8u;
    SET_GPR_U32(ctx, 31, 0x2BC8B0u);
    ctx->pc = 0x2BC8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC8A8u;
            // 0x2bc8ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC8B0u; }
        if (ctx->pc != 0x2BC8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC8B0u; }
        if (ctx->pc != 0x2BC8B0u) { return; }
    }
    ctx->pc = 0x2BC8B0u;
label_2bc8b0:
    // 0x2bc8b0: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2bc8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2bc8b4: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2BC8B4u;
    SET_GPR_U32(ctx, 31, 0x2BC8BCu);
    ctx->pc = 0x2BC8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC8B4u;
            // 0x2bc8b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC8BCu; }
        if (ctx->pc != 0x2BC8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC8BCu; }
        if (ctx->pc != 0x2BC8BCu) { return; }
    }
    ctx->pc = 0x2BC8BCu;
label_2bc8bc:
    // 0x2bc8bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2bc8bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bc8c0:
    // 0x2bc8c0: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2bc8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2bc8c4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2bc8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2bc8c8: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2bc8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2bc8cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2bc8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc8d0: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2bc8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2bc8d4: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2bc8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2bc8d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bc8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bc8dc: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2BC8DCu;
    SET_GPR_U32(ctx, 31, 0x2BC8E4u);
    ctx->pc = 0x2BC8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC8DCu;
            // 0x2bc8e0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC8E4u; }
        if (ctx->pc != 0x2BC8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC8E4u; }
        if (ctx->pc != 0x2BC8E4u) { return; }
    }
    ctx->pc = 0x2BC8E4u;
label_2bc8e4:
    // 0x2bc8e4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2bc8e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2bc8e8: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2bc8e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2bc8ec: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2BC8ECu;
    {
        const bool branch_taken_0x2bc8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC8ECu;
            // 0x2bc8f0: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc8ec) {
            ctx->pc = 0x2BC8C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bc8c0;
        }
    }
    ctx->pc = 0x2BC8F4u;
    // 0x2bc8f4: 0x0  nop
    ctx->pc = 0x2bc8f4u;
    // NOP
label_2bc8f8:
    // 0x2bc8f8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2bc8f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc8fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bc8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bc900: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bc900u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bc904: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bc904u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bc908: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bc908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc90c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bc90cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc910: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC910u;
            // 0x2bc914: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BC918u;
    // 0x2bc918: 0x0  nop
    ctx->pc = 0x2bc918u;
    // NOP
    // 0x2bc91c: 0x0  nop
    ctx->pc = 0x2bc91cu;
    // NOP
    // 0x2bc920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bc920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bc924: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bc924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bc928: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bc928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bc92c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bc92cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bc930: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bc930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bc934: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2bc934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2bc938: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bc938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bc93c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2bc93cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2bc940: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2bc940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x2bc944: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bc944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc948: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2bc948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2bc94c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bc94cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc950: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2bc950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2bc954: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2bc954u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2bc958: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2bc958u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2bc95c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2bc95cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2bc960: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2bc960u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bc964: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2bc964u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bc968: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2BC968u;
    SET_GPR_U32(ctx, 31, 0x2BC970u);
    ctx->pc = 0x2BC96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC968u;
            // 0x2bc96c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC970u; }
        if (ctx->pc != 0x2BC970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC970u; }
        if (ctx->pc != 0x2BC970u) { return; }
    }
    ctx->pc = 0x2BC970u;
label_2bc970:
    // 0x2bc970: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2BC970u;
    SET_GPR_U32(ctx, 31, 0x2BC978u);
    ctx->pc = 0x2BC974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC970u;
            // 0x2bc974: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC978u; }
        if (ctx->pc != 0x2BC978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC978u; }
        if (ctx->pc != 0x2BC978u) { return; }
    }
    ctx->pc = 0x2BC978u;
label_2bc978:
    // 0x2bc978: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bc978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2bc97c: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x2bc97cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
    // 0x2bc980: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2bc980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2bc984: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x2bc984u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x2bc988: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x2bc988u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x2bc98c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x2bc98cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x2bc990: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2bc990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2bc994: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2bc994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2bc998: 0x8c490788  lw          $t1, 0x788($v0)
    ctx->pc = 0x2bc998u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
    // 0x2bc99c: 0x2508c560  addiu       $t0, $t0, -0x3AA0
    ctx->pc = 0x2bc99cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952288));
    // 0x2bc9a0: 0x24e72660  addiu       $a3, $a3, 0x2660
    ctx->pc = 0x2bc9a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9824));
    // 0x2bc9a4: 0x24c62670  addiu       $a2, $a2, 0x2670
    ctx->pc = 0x2bc9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9840));
    // 0x2bc9a8: 0x24a526b0  addiu       $a1, $a1, 0x26B0
    ctx->pc = 0x2bc9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9904));
    // 0x2bc9ac: 0x24845100  addiu       $a0, $a0, 0x5100
    ctx->pc = 0x2bc9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20736));
    // 0x2bc9b0: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2bc9b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2bc9b4: 0x24635140  addiu       $v1, $v1, 0x5140
    ctx->pc = 0x2bc9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20800));
    // 0x2bc9b8: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x2bc9b8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2bc9bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bc9bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc9c0: 0xa208004d  sb          $t0, 0x4D($s0)
    ctx->pc = 0x2bc9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 8));
    // 0x2bc9c4: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x2bc9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
    // 0x2bc9c8: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2bc9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2bc9cc: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x2bc9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x2bc9d0: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x2bc9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
    // 0x2bc9d4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2bc9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2bc9d8: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x2bc9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x2bc9dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bc9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc9e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bc9e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC9E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC9E4u;
            // 0x2bc9e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BC9ECu;
    // 0x2bc9ec: 0x0  nop
    ctx->pc = 0x2bc9ecu;
    // NOP
}
