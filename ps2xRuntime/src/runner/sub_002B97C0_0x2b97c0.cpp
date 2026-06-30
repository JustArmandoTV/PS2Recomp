#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B97C0
// Address: 0x2b97c0 - 0x2b9970
void sub_002B97C0_0x2b97c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B97C0_0x2b97c0");
#endif

    switch (ctx->pc) {
        case 0x2b97f0u: goto label_2b97f0;
        case 0x2b9844u: goto label_2b9844;
        case 0x2b98d8u: goto label_2b98d8;
        case 0x2b98f8u: goto label_2b98f8;
        case 0x2b990cu: goto label_2b990c;
        case 0x2b9918u: goto label_2b9918;
        case 0x2b991cu: goto label_2b991c;
        case 0x2b9940u: goto label_2b9940;
        default: break;
    }

    ctx->pc = 0x2b97c0u;

    // 0x2b97c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b97c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b97c4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2b97c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b97c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b97c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b97cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b97ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b97d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b97d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b97d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b97d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b97d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b97d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b97dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b97dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b97e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b97e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b97e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2b97e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b97e8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2B97E8u;
    SET_GPR_U32(ctx, 31, 0x2B97F0u);
    ctx->pc = 0x2B97ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B97E8u;
            // 0x2b97ec: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B97F0u; }
        if (ctx->pc != 0x2B97F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B97F0u; }
        if (ctx->pc != 0x2B97F0u) { return; }
    }
    ctx->pc = 0x2B97F0u;
label_2b97f0:
    // 0x2b97f0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b97f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b97f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b97f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b97f8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2b97f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2b97fc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2b97fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2b9800: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2b9800u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2b9804: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2b9804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2b9808: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2b9808u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2b980c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b980cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b9810: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2b9810u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2b9814: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2b9814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2b9818: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2b9818u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2b981c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2b981cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b9820: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2b9820u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2b9824: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2b9824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2b9828: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2b9828u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2b982c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2b982cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2b9830: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2b9830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2b9834: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2b9834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2b9838: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2b9838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2b983c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2B983Cu;
    SET_GPR_U32(ctx, 31, 0x2B9844u);
    ctx->pc = 0x2B9840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B983Cu;
            // 0x2b9840: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9844u; }
        if (ctx->pc != 0x2B9844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9844u; }
        if (ctx->pc != 0x2B9844u) { return; }
    }
    ctx->pc = 0x2B9844u;
label_2b9844:
    // 0x2b9844: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b9844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b9848: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2b9848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2b984c: 0x246326c0  addiu       $v1, $v1, 0x26C0
    ctx->pc = 0x2b984cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9920));
    // 0x2b9850: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2b9850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2b9854: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2b9854u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2b9858: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2b9858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2b985c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b985cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b9860: 0xac440cd8  sw          $a0, 0xCD8($v0)
    ctx->pc = 0x2b9860u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3288), GPR_U32(ctx, 4));
    // 0x2b9864: 0x246326d0  addiu       $v1, $v1, 0x26D0
    ctx->pc = 0x2b9864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9936));
    // 0x2b9868: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b9868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b986c: 0x24422708  addiu       $v0, $v0, 0x2708
    ctx->pc = 0x2b986cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9992));
    // 0x2b9870: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2b9870u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2b9874: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2b9874u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2b9878: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2b9878u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2b987c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2b987cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2b9880: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2b9880u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2b9884: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2b9884u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2b9888: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2b9888u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2b988c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2b988cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2b9890: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2b9890u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2b9894: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2b9894u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2b9898: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2b9898u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2b989c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2b989cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2b98a0: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x2b98a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    // 0x2b98a4: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x2b98a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x2b98a8: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x2b98a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
    // 0x2b98ac: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x2b98acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
    // 0x2b98b0: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x2b98b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
    // 0x2b98b4: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x2b98b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
    // 0x2b98b8: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2b98b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2b98bc: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2B98BCu;
    {
        const bool branch_taken_0x2b98bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b98bc) {
            ctx->pc = 0x2B9950u;
            goto label_2b9950;
        }
    }
    ctx->pc = 0x2B98C4u;
    // 0x2b98c4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2b98c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2b98c8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2b98c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2b98cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2b98ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2b98d0: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2B98D0u;
    SET_GPR_U32(ctx, 31, 0x2B98D8u);
    ctx->pc = 0x2B98D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B98D0u;
            // 0x2b98d4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B98D8u; }
        if (ctx->pc != 0x2B98D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B98D8u; }
        if (ctx->pc != 0x2B98D8u) { return; }
    }
    ctx->pc = 0x2B98D8u;
label_2b98d8:
    // 0x2b98d8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b98d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b98dc: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2b98dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2b98e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b98e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b98e4: 0x24a57d00  addiu       $a1, $a1, 0x7D00
    ctx->pc = 0x2b98e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32000));
    // 0x2b98e8: 0x24c694b0  addiu       $a2, $a2, -0x6B50
    ctx->pc = 0x2b98e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939824));
    // 0x2b98ec: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x2b98ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2b98f0: 0xc040840  jal         func_102100
    ctx->pc = 0x2B98F0u;
    SET_GPR_U32(ctx, 31, 0x2B98F8u);
    ctx->pc = 0x2B98F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B98F0u;
            // 0x2b98f4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B98F8u; }
        if (ctx->pc != 0x2B98F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B98F8u; }
        if (ctx->pc != 0x2B98F8u) { return; }
    }
    ctx->pc = 0x2B98F8u;
label_2b98f8:
    // 0x2b98f8: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2b98f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2b98fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b98fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9900: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2b9900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2b9904: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2B9904u;
    SET_GPR_U32(ctx, 31, 0x2B990Cu);
    ctx->pc = 0x2B9908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9904u;
            // 0x2b9908: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B990Cu; }
        if (ctx->pc != 0x2B990Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B990Cu; }
        if (ctx->pc != 0x2B990Cu) { return; }
    }
    ctx->pc = 0x2B990Cu;
label_2b990c:
    // 0x2b990c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2b990cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2b9910: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2B9910u;
    SET_GPR_U32(ctx, 31, 0x2B9918u);
    ctx->pc = 0x2B9914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9910u;
            // 0x2b9914: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9918u; }
        if (ctx->pc != 0x2B9918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9918u; }
        if (ctx->pc != 0x2B9918u) { return; }
    }
    ctx->pc = 0x2B9918u;
label_2b9918:
    // 0x2b9918: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b9918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b991c:
    // 0x2b991c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2b991cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2b9920: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2b9920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2b9924: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2b9924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2b9928: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b9928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b992c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2b992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2b9930: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2b9930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2b9934: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b9934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b9938: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2B9938u;
    SET_GPR_U32(ctx, 31, 0x2B9940u);
    ctx->pc = 0x2B993Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9938u;
            // 0x2b993c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9940u; }
        if (ctx->pc != 0x2B9940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9940u; }
        if (ctx->pc != 0x2B9940u) { return; }
    }
    ctx->pc = 0x2B9940u;
label_2b9940:
    // 0x2b9940: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b9940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b9944: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2b9944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2b9948: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2B9948u;
    {
        const bool branch_taken_0x2b9948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B994Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9948u;
            // 0x2b994c: 0x26520070  addiu       $s2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9948) {
            ctx->pc = 0x2B991Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b991c;
        }
    }
    ctx->pc = 0x2B9950u;
label_2b9950:
    // 0x2b9950: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2b9950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9954: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b9954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b9958: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b9958u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b995c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b995cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b9960: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b9960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9964: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b9964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9968: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B996Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9968u;
            // 0x2b996c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B9970u;
}
