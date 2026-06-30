#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0041E780
// Address: 0x41e780 - 0x41eae0
void sub_0041E780_0x41e780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041E780_0x41e780");
#endif

    switch (ctx->pc) {
        case 0x41e7b0u: goto label_41e7b0;
        case 0x41e804u: goto label_41e804;
        case 0x41e898u: goto label_41e898;
        case 0x41e8b8u: goto label_41e8b8;
        case 0x41e8ccu: goto label_41e8cc;
        case 0x41e8d8u: goto label_41e8d8;
        case 0x41e8dcu: goto label_41e8dc;
        case 0x41e900u: goto label_41e900;
        case 0x41e948u: goto label_41e948;
        case 0x41e950u: goto label_41e950;
        case 0x41e970u: goto label_41e970;
        case 0x41e978u: goto label_41e978;
        case 0x41e9bcu: goto label_41e9bc;
        case 0x41e9c4u: goto label_41e9c4;
        case 0x41ea30u: goto label_41ea30;
        case 0x41ea44u: goto label_41ea44;
        case 0x41ea58u: goto label_41ea58;
        case 0x41ea6cu: goto label_41ea6c;
        case 0x41ea84u: goto label_41ea84;
        case 0x41ea8cu: goto label_41ea8c;
        case 0x41ea94u: goto label_41ea94;
        case 0x41eaacu: goto label_41eaac;
        case 0x41eab4u: goto label_41eab4;
        case 0x41eac4u: goto label_41eac4;
        default: break;
    }

    ctx->pc = 0x41e780u;

    // 0x41e780: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x41e780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x41e784: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x41e784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x41e788: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x41e788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x41e78c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x41e78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x41e790: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41e790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x41e794: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x41e794u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41e798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x41e79c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41e79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x41e7a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x41e7a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e7a4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x41e7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e7a8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x41E7A8u;
    SET_GPR_U32(ctx, 31, 0x41E7B0u);
    ctx->pc = 0x41E7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E7A8u;
            // 0x41e7ac: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E7B0u; }
        if (ctx->pc != 0x41E7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E7B0u; }
        if (ctx->pc != 0x41E7B0u) { return; }
    }
    ctx->pc = 0x41E7B0u;
label_41e7b0:
    // 0x41e7b0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x41e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x41e7b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x41e7b8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x41e7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x41e7bc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x41e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x41e7c0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x41e7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x41e7c4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x41e7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x41e7c8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x41e7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x41e7cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x41e7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x41e7d0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x41e7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x41e7d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x41e7d8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x41e7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x41e7dc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x41e7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x41e7e0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x41e7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x41e7e4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x41e7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x41e7e8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x41e7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x41e7ec: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x41e7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x41e7f0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x41e7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x41e7f4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x41e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x41e7f8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x41e7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x41e7fc: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x41E7FCu;
    SET_GPR_U32(ctx, 31, 0x41E804u);
    ctx->pc = 0x41E800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E7FCu;
            // 0x41e800: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E804u; }
        if (ctx->pc != 0x41E804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E804u; }
        if (ctx->pc != 0x41E804u) { return; }
    }
    ctx->pc = 0x41E804u;
label_41e804:
    // 0x41e804: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41e804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x41e808: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x41e808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x41e80c: 0x2463ba80  addiu       $v1, $v1, -0x4580
    ctx->pc = 0x41e80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949504));
    // 0x41e810: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x41e810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x41e814: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x41e814u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x41e818: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41e818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x41e81c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41e81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x41e820: 0xac446ee0  sw          $a0, 0x6EE0($v0)
    ctx->pc = 0x41e820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28384), GPR_U32(ctx, 4));
    // 0x41e824: 0x2463ba90  addiu       $v1, $v1, -0x4570
    ctx->pc = 0x41e824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949520));
    // 0x41e828: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41e828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x41e82c: 0x2442bac8  addiu       $v0, $v0, -0x4538
    ctx->pc = 0x41e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949576));
    // 0x41e830: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x41e830u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x41e834: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x41e834u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x41e838: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x41e838u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x41e83c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x41e83cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x41e840: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x41e840u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x41e844: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x41e844u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x41e848: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x41e848u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x41e84c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x41e84cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x41e850: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x41e850u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x41e854: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x41e854u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x41e858: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x41e858u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x41e85c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x41e85cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x41e860: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x41e860u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    // 0x41e864: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x41e864u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x41e868: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x41e868u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
    // 0x41e86c: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x41e86cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
    // 0x41e870: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x41e870u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
    // 0x41e874: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x41e874u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
    // 0x41e878: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x41e878u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x41e87c: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x41E87Cu;
    {
        const bool branch_taken_0x41e87c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x41e87c) {
            ctx->pc = 0x41E910u;
            goto label_41e910;
        }
    }
    ctx->pc = 0x41E884u;
    // 0x41e884: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x41e884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x41e888: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x41e888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x41e88c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x41e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x41e890: 0xc040138  jal         func_1004E0
    ctx->pc = 0x41E890u;
    SET_GPR_U32(ctx, 31, 0x41E898u);
    ctx->pc = 0x41E894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E890u;
            // 0x41e894: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E898u; }
        if (ctx->pc != 0x41E898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E898u; }
        if (ctx->pc != 0x41E898u) { return; }
    }
    ctx->pc = 0x41E898u;
label_41e898:
    // 0x41e898: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x41e898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x41e89c: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x41e89cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
    // 0x41e8a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41e8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e8a4: 0x24a5e930  addiu       $a1, $a1, -0x16D0
    ctx->pc = 0x41e8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961456));
    // 0x41e8a8: 0x24c6de00  addiu       $a2, $a2, -0x2200
    ctx->pc = 0x41e8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958592));
    // 0x41e8ac: 0x24070240  addiu       $a3, $zero, 0x240
    ctx->pc = 0x41e8acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x41e8b0: 0xc040840  jal         func_102100
    ctx->pc = 0x41E8B0u;
    SET_GPR_U32(ctx, 31, 0x41E8B8u);
    ctx->pc = 0x41E8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E8B0u;
            // 0x41e8b4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E8B8u; }
        if (ctx->pc != 0x41E8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E8B8u; }
        if (ctx->pc != 0x41E8B8u) { return; }
    }
    ctx->pc = 0x41E8B8u;
label_41e8b8:
    // 0x41e8b8: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x41e8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x41e8bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x41e8bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e8c0: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x41e8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x41e8c4: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x41E8C4u;
    SET_GPR_U32(ctx, 31, 0x41E8CCu);
    ctx->pc = 0x41E8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E8C4u;
            // 0x41e8c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E8CCu; }
        if (ctx->pc != 0x41E8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E8CCu; }
        if (ctx->pc != 0x41E8CCu) { return; }
    }
    ctx->pc = 0x41E8CCu;
label_41e8cc:
    // 0x41e8cc: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x41e8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x41e8d0: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x41E8D0u;
    SET_GPR_U32(ctx, 31, 0x41E8D8u);
    ctx->pc = 0x41E8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E8D0u;
            // 0x41e8d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E8D8u; }
        if (ctx->pc != 0x41E8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E8D8u; }
        if (ctx->pc != 0x41E8D8u) { return; }
    }
    ctx->pc = 0x41E8D8u;
label_41e8d8:
    // 0x41e8d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x41e8d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41e8dc:
    // 0x41e8dc: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x41e8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x41e8e0: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x41e8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x41e8e4: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x41e8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x41e8e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x41e8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41e8ec: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x41e8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x41e8f0: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x41e8f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x41e8f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x41e8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x41e8f8: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x41E8F8u;
    SET_GPR_U32(ctx, 31, 0x41E900u);
    ctx->pc = 0x41E8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E8F8u;
            // 0x41e8fc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E900u; }
        if (ctx->pc != 0x41E900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E900u; }
        if (ctx->pc != 0x41E900u) { return; }
    }
    ctx->pc = 0x41E900u;
label_41e900:
    // 0x41e900: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x41e900u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x41e904: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x41e904u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x41e908: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x41E908u;
    {
        const bool branch_taken_0x41e908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41E90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41E908u;
            // 0x41e90c: 0x26520240  addiu       $s2, $s2, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e908) {
            ctx->pc = 0x41E8DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_41e8dc;
        }
    }
    ctx->pc = 0x41E910u;
label_41e910:
    // 0x41e910: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x41e910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e914: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x41e914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x41e918: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x41e918u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41e91c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41e91cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41e920: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41e920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41e924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41e924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41e928: 0x3e00008  jr          $ra
    ctx->pc = 0x41E928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41E928u;
            // 0x41e92c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41E930u;
    // 0x41e930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41e930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x41e934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x41e934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x41e938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41e938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x41e93c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41e93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x41e940: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x41E940u;
    SET_GPR_U32(ctx, 31, 0x41E948u);
    ctx->pc = 0x41E944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E940u;
            // 0x41e944: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E948u; }
        if (ctx->pc != 0x41E948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E948u; }
        if (ctx->pc != 0x41E948u) { return; }
    }
    ctx->pc = 0x41E948u;
label_41e948:
    // 0x41e948: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x41E948u;
    SET_GPR_U32(ctx, 31, 0x41E950u);
    ctx->pc = 0x41E94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E948u;
            // 0x41e94c: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E950u; }
        if (ctx->pc != 0x41E950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E950u; }
        if (ctx->pc != 0x41E950u) { return; }
    }
    ctx->pc = 0x41E950u;
label_41e950:
    // 0x41e950: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x41e950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x41e954: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41e954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x41e958: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x41e958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x41e95c: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x41e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x41e960: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x41e960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x41e964: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x41e964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x41e968: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x41E968u;
    SET_GPR_U32(ctx, 31, 0x41E970u);
    ctx->pc = 0x41E96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E968u;
            // 0x41e96c: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E970u; }
        if (ctx->pc != 0x41E970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E970u; }
        if (ctx->pc != 0x41E970u) { return; }
    }
    ctx->pc = 0x41E970u;
label_41e970:
    // 0x41e970: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x41E970u;
    SET_GPR_U32(ctx, 31, 0x41E978u);
    ctx->pc = 0x41E974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E970u;
            // 0x41e974: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E978u; }
        if (ctx->pc != 0x41E978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E978u; }
        if (ctx->pc != 0x41E978u) { return; }
    }
    ctx->pc = 0x41E978u;
label_41e978:
    // 0x41e978: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x41e978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x41e97c: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x41e97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x41e980: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x41e980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x41e984: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x41e984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x41e988: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x41e988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x41e98c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41e98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41e990: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x41e990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x41e994: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x41e994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x41e998: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x41e998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x41e99c: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x41e99cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x41e9a0: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x41e9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x41e9a4: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x41e9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x41e9a8: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x41e9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x41e9ac: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x41e9acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x41e9b0: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x41e9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x41e9b4: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x41E9B4u;
    SET_GPR_U32(ctx, 31, 0x41E9BCu);
    ctx->pc = 0x41E9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E9B4u;
            // 0x41e9b8: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E9BCu; }
        if (ctx->pc != 0x41E9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E9BCu; }
        if (ctx->pc != 0x41E9BCu) { return; }
    }
    ctx->pc = 0x41E9BCu;
label_41e9bc:
    // 0x41e9bc: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x41E9BCu;
    SET_GPR_U32(ctx, 31, 0x41E9C4u);
    ctx->pc = 0x41E9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E9BCu;
            // 0x41e9c0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E9C4u; }
        if (ctx->pc != 0x41E9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E9C4u; }
        if (ctx->pc != 0x41E9C4u) { return; }
    }
    ctx->pc = 0x41E9C4u;
label_41e9c4:
    // 0x41e9c4: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x41e9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x41e9c8: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x41e9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x41e9cc: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x41e9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x41e9d0: 0x8e0600c8  lw          $a2, 0xC8($s0)
    ctx->pc = 0x41e9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x41e9d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x41e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x41e9d8: 0x24a5b9e0  addiu       $a1, $a1, -0x4620
    ctx->pc = 0x41e9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949344));
    // 0x41e9dc: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x41e9dcu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x41e9e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x41e9e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x41e9e4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41e9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x41e9e8: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x41e9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x41e9ec: 0x2463ba20  addiu       $v1, $v1, -0x45E0
    ctx->pc = 0x41e9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949408));
    // 0x41e9f0: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x41e9f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x41e9f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x41e9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x41e9f8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x41e9f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x41e9fc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x41e9fcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x41ea00: 0xae0600c8  sw          $a2, 0xC8($s0)
    ctx->pc = 0x41ea00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 6));
    // 0x41ea04: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x41ea04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x41ea08: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x41ea08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x41ea0c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x41ea0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x41ea10: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x41ea10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x41ea14: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x41ea14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x41ea18: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x41ea18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
    // 0x41ea1c: 0xa6000130  sh          $zero, 0x130($s0)
    ctx->pc = 0x41ea1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 0));
    // 0x41ea20: 0xa6000132  sh          $zero, 0x132($s0)
    ctx->pc = 0x41ea20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 306), (uint16_t)GPR_U32(ctx, 0));
    // 0x41ea24: 0xa6020134  sh          $v0, 0x134($s0)
    ctx->pc = 0x41ea24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 308), (uint16_t)GPR_U32(ctx, 2));
    // 0x41ea28: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x41EA28u;
    SET_GPR_U32(ctx, 31, 0x41EA30u);
    ctx->pc = 0x41EA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EA28u;
            // 0x41ea2c: 0xa6000136  sh          $zero, 0x136($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 310), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EA30u; }
        if (ctx->pc != 0x41EA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EA30u; }
        if (ctx->pc != 0x41EA30u) { return; }
    }
    ctx->pc = 0x41EA30u;
label_41ea30:
    // 0x41ea30: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x41ea30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x41ea34: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x41ea34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x41ea38: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x41ea38u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x41ea3c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x41EA3Cu;
    SET_GPR_U32(ctx, 31, 0x41EA44u);
    ctx->pc = 0x41EA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EA3Cu;
            // 0x41ea40: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EA44u; }
        if (ctx->pc != 0x41EA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EA44u; }
        if (ctx->pc != 0x41EA44u) { return; }
    }
    ctx->pc = 0x41EA44u;
label_41ea44:
    // 0x41ea44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x41ea44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x41ea48: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x41ea48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x41ea4c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x41ea4cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x41ea50: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x41EA50u;
    SET_GPR_U32(ctx, 31, 0x41EA58u);
    ctx->pc = 0x41EA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EA50u;
            // 0x41ea54: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EA58u; }
        if (ctx->pc != 0x41EA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EA58u; }
        if (ctx->pc != 0x41EA58u) { return; }
    }
    ctx->pc = 0x41EA58u;
label_41ea58:
    // 0x41ea58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x41ea58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x41ea5c: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x41ea5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x41ea60: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x41ea60u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x41ea64: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x41EA64u;
    SET_GPR_U32(ctx, 31, 0x41EA6Cu);
    ctx->pc = 0x41EA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EA64u;
            // 0x41ea68: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EA6Cu; }
        if (ctx->pc != 0x41EA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EA6Cu; }
        if (ctx->pc != 0x41EA6Cu) { return; }
    }
    ctx->pc = 0x41EA6Cu;
label_41ea6c:
    // 0x41ea6c: 0xae0001d0  sw          $zero, 0x1D0($s0)
    ctx->pc = 0x41ea6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 0));
    // 0x41ea70: 0x26110140  addiu       $s1, $s0, 0x140
    ctx->pc = 0x41ea70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x41ea74: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x41ea74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
    // 0x41ea78: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x41ea78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x41ea7c: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x41EA7Cu;
    SET_GPR_U32(ctx, 31, 0x41EA84u);
    ctx->pc = 0x41EA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EA7Cu;
            // 0x41ea80: 0xa20001d8  sb          $zero, 0x1D8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 472), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EA84u; }
        if (ctx->pc != 0x41EA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EA84u; }
        if (ctx->pc != 0x41EA84u) { return; }
    }
    ctx->pc = 0x41EA84u;
label_41ea84:
    // 0x41ea84: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x41EA84u;
    SET_GPR_U32(ctx, 31, 0x41EA8Cu);
    ctx->pc = 0x41EA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EA84u;
            // 0x41ea88: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EA8Cu; }
        if (ctx->pc != 0x41EA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EA8Cu; }
        if (ctx->pc != 0x41EA8Cu) { return; }
    }
    ctx->pc = 0x41EA8Cu;
label_41ea8c:
    // 0x41ea8c: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x41EA8Cu;
    SET_GPR_U32(ctx, 31, 0x41EA94u);
    ctx->pc = 0x41EA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EA8Cu;
            // 0x41ea90: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EA94u; }
        if (ctx->pc != 0x41EA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EA94u; }
        if (ctx->pc != 0x41EA94u) { return; }
    }
    ctx->pc = 0x41EA94u;
label_41ea94:
    // 0x41ea94: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x41ea94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
    // 0x41ea98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41ea98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ea9c: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x41ea9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
    // 0x41eaa0: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x41eaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
    // 0x41eaa4: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x41EAA4u;
    SET_GPR_U32(ctx, 31, 0x41EAACu);
    ctx->pc = 0x41EAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EAA4u;
            // 0x41eaa8: 0xae2000a8  sw          $zero, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EAACu; }
        if (ctx->pc != 0x41EAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EAACu; }
        if (ctx->pc != 0x41EAACu) { return; }
    }
    ctx->pc = 0x41EAACu;
label_41eaac:
    // 0x41eaac: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x41EAACu;
    SET_GPR_U32(ctx, 31, 0x41EAB4u);
    ctx->pc = 0x41EAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EAACu;
            // 0x41eab0: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EAB4u; }
        if (ctx->pc != 0x41EAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EAB4u; }
        if (ctx->pc != 0x41EAB4u) { return; }
    }
    ctx->pc = 0x41EAB4u;
label_41eab4:
    // 0x41eab4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x41eab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x41eab8: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x41eab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x41eabc: 0xc04cc04  jal         func_133010
    ctx->pc = 0x41EABCu;
    SET_GPR_U32(ctx, 31, 0x41EAC4u);
    ctx->pc = 0x41EAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EABCu;
            // 0x41eac0: 0x24a5c750  addiu       $a1, $a1, -0x38B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EAC4u; }
        if (ctx->pc != 0x41EAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EAC4u; }
        if (ctx->pc != 0x41EAC4u) { return; }
    }
    ctx->pc = 0x41EAC4u;
label_41eac4:
    // 0x41eac4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41eac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41eac8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41eac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41eacc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41eaccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41ead0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41ead0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41ead4: 0x3e00008  jr          $ra
    ctx->pc = 0x41EAD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41EAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41EAD4u;
            // 0x41ead8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41EADCu;
    // 0x41eadc: 0x0  nop
    ctx->pc = 0x41eadcu;
    // NOP
}
