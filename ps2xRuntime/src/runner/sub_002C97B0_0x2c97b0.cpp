#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C97B0
// Address: 0x2c97b0 - 0x2c9950
void sub_002C97B0_0x2c97b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C97B0_0x2c97b0");
#endif

    switch (ctx->pc) {
        case 0x2c97e0u: goto label_2c97e0;
        case 0x2c9834u: goto label_2c9834;
        case 0x2c98b0u: goto label_2c98b0;
        case 0x2c98d0u: goto label_2c98d0;
        case 0x2c98e4u: goto label_2c98e4;
        case 0x2c98f0u: goto label_2c98f0;
        case 0x2c98f4u: goto label_2c98f4;
        case 0x2c9918u: goto label_2c9918;
        default: break;
    }

    ctx->pc = 0x2c97b0u;

    // 0x2c97b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c97b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c97b4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c97b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c97b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c97b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c97bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c97bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c97c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c97c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c97c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c97c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c97c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c97c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c97cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c97ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c97d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c97d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c97d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2c97d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c97d8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2C97D8u;
    SET_GPR_U32(ctx, 31, 0x2C97E0u);
    ctx->pc = 0x2C97DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C97D8u;
            // 0x2c97dc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C97E0u; }
        if (ctx->pc != 0x2C97E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C97E0u; }
        if (ctx->pc != 0x2C97E0u) { return; }
    }
    ctx->pc = 0x2C97E0u;
label_2c97e0:
    // 0x2c97e0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c97e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c97e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c97e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c97e8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2c97e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2c97ec: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c97ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2c97f0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c97f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c97f4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2c97f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2c97f8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2c97f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2c97fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c97fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c9800: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2c9800u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2c9804: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c9804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c9808: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2c9808u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2c980c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2c980cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c9810: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2c9810u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2c9814: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2c9814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2c9818: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2c9818u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2c981c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2c981cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2c9820: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2c9820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2c9824: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2c9824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2c9828: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2c9828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2c982c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2C982Cu;
    SET_GPR_U32(ctx, 31, 0x2C9834u);
    ctx->pc = 0x2C9830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C982Cu;
            // 0x2c9830: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9834u; }
        if (ctx->pc != 0x2C9834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9834u; }
        if (ctx->pc != 0x2C9834u) { return; }
    }
    ctx->pc = 0x2C9834u;
label_2c9834:
    // 0x2c9834: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c9834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c9838: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2c9838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2c983c: 0x246304f8  addiu       $v1, $v1, 0x4F8
    ctx->pc = 0x2c983cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1272));
    // 0x2c9840: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2c9840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2c9844: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2c9844u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2c9848: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c9848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c984c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c984cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c9850: 0xac440d80  sw          $a0, 0xD80($v0)
    ctx->pc = 0x2c9850u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3456), GPR_U32(ctx, 4));
    // 0x2c9854: 0x24630510  addiu       $v1, $v1, 0x510
    ctx->pc = 0x2c9854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1296));
    // 0x2c9858: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c9858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c985c: 0x24420548  addiu       $v0, $v0, 0x548
    ctx->pc = 0x2c985cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1352));
    // 0x2c9860: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c9860u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c9864: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2c9864u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2c9868: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2c9868u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2c986c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2c986cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2c9870: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2c9870u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2c9874: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2c9874u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2c9878: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2c9878u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2c987c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2c987cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2c9880: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2c9880u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2c9884: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2c9884u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2c9888: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2c9888u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2c988c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2c988cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2c9890: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2c9890u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2c9894: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C9894u;
    {
        const bool branch_taken_0x2c9894 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9894) {
            ctx->pc = 0x2C9928u;
            goto label_2c9928;
        }
    }
    ctx->pc = 0x2C989Cu;
    // 0x2c989c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2c989cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2c98a0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2c98a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c98a4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c98a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2c98a8: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2C98A8u;
    SET_GPR_U32(ctx, 31, 0x2C98B0u);
    ctx->pc = 0x2C98ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C98A8u;
            // 0x2c98ac: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C98B0u; }
        if (ctx->pc != 0x2C98B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C98B0u; }
        if (ctx->pc != 0x2C98B0u) { return; }
    }
    ctx->pc = 0x2C98B0u;
label_2c98b0:
    // 0x2c98b0: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x2c98b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x2c98b4: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2c98b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x2c98b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c98b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c98bc: 0x24a5f410  addiu       $a1, $a1, -0xBF0
    ctx->pc = 0x2c98bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964240));
    // 0x2c98c0: 0x24c69540  addiu       $a2, $a2, -0x6AC0
    ctx->pc = 0x2c98c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939968));
    // 0x2c98c4: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x2c98c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2c98c8: 0xc040840  jal         func_102100
    ctx->pc = 0x2C98C8u;
    SET_GPR_U32(ctx, 31, 0x2C98D0u);
    ctx->pc = 0x2C98CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C98C8u;
            // 0x2c98cc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C98D0u; }
        if (ctx->pc != 0x2C98D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C98D0u; }
        if (ctx->pc != 0x2C98D0u) { return; }
    }
    ctx->pc = 0x2C98D0u;
label_2c98d0:
    // 0x2c98d0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2c98d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2c98d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c98d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c98d8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2c98d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2c98dc: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C98DCu;
    SET_GPR_U32(ctx, 31, 0x2C98E4u);
    ctx->pc = 0x2C98E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C98DCu;
            // 0x2c98e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C98E4u; }
        if (ctx->pc != 0x2C98E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C98E4u; }
        if (ctx->pc != 0x2C98E4u) { return; }
    }
    ctx->pc = 0x2C98E4u;
label_2c98e4:
    // 0x2c98e4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c98e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c98e8: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C98E8u;
    SET_GPR_U32(ctx, 31, 0x2C98F0u);
    ctx->pc = 0x2C98ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C98E8u;
            // 0x2c98ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C98F0u; }
        if (ctx->pc != 0x2C98F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C98F0u; }
        if (ctx->pc != 0x2C98F0u) { return; }
    }
    ctx->pc = 0x2C98F0u;
label_2c98f0:
    // 0x2c98f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c98f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c98f4:
    // 0x2c98f4: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2c98f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2c98f8: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c98f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c98fc: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2c98fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2c9900: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c9900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9904: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2c9904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2c9908: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2c9908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2c990c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c990cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c9910: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2C9910u;
    SET_GPR_U32(ctx, 31, 0x2C9918u);
    ctx->pc = 0x2C9914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9910u;
            // 0x2c9914: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9918u; }
        if (ctx->pc != 0x2C9918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9918u; }
        if (ctx->pc != 0x2C9918u) { return; }
    }
    ctx->pc = 0x2C9918u;
label_2c9918:
    // 0x2c9918: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c9918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c991c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2c991cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c9920: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C9920u;
    {
        const bool branch_taken_0x2c9920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9920u;
            // 0x2c9924: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9920) {
            ctx->pc = 0x2C98F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c98f4;
        }
    }
    ctx->pc = 0x2C9928u;
label_2c9928:
    // 0x2c9928: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c9928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c992c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c992cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9930: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c9930u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c9934: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c9934u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9938: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c9938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c993c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c993cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9940: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9940u;
            // 0x2c9944: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9948u;
    // 0x2c9948: 0x0  nop
    ctx->pc = 0x2c9948u;
    // NOP
    // 0x2c994c: 0x0  nop
    ctx->pc = 0x2c994cu;
    // NOP
}
