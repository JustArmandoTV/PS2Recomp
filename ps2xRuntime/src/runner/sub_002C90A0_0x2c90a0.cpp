#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C90A0
// Address: 0x2c90a0 - 0x2c9330
void sub_002C90A0_0x2c90a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C90A0_0x2c90a0");
#endif

    switch (ctx->pc) {
        case 0x2c90d0u: goto label_2c90d0;
        case 0x2c9124u: goto label_2c9124;
        case 0x2c91a0u: goto label_2c91a0;
        case 0x2c91c0u: goto label_2c91c0;
        case 0x2c91d4u: goto label_2c91d4;
        case 0x2c91e0u: goto label_2c91e0;
        case 0x2c91e4u: goto label_2c91e4;
        case 0x2c9208u: goto label_2c9208;
        case 0x2c9254u: goto label_2c9254;
        case 0x2c925cu: goto label_2c925c;
        case 0x2c927cu: goto label_2c927c;
        case 0x2c9284u: goto label_2c9284;
        case 0x2c92c8u: goto label_2c92c8;
        case 0x2c92d0u: goto label_2c92d0;
        default: break;
    }

    ctx->pc = 0x2c90a0u;

    // 0x2c90a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c90a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c90a4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c90a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c90a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c90a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c90ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c90acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c90b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c90b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c90b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c90b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c90b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c90b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c90bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c90bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c90c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c90c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c90c4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2c90c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c90c8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2C90C8u;
    SET_GPR_U32(ctx, 31, 0x2C90D0u);
    ctx->pc = 0x2C90CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C90C8u;
            // 0x2c90cc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C90D0u; }
        if (ctx->pc != 0x2C90D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C90D0u; }
        if (ctx->pc != 0x2C90D0u) { return; }
    }
    ctx->pc = 0x2C90D0u;
label_2c90d0:
    // 0x2c90d0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c90d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c90d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c90d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c90d8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2c90d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2c90dc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c90dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2c90e0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c90e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c90e4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2c90e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2c90e8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2c90e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2c90ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c90ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c90f0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2c90f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2c90f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c90f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c90f8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2c90f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2c90fc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2c90fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c9100: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2c9100u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2c9104: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2c9104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2c9108: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2c9108u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2c910c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2c910cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2c9110: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2c9110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2c9114: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2c9114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2c9118: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2c9118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2c911c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2C911Cu;
    SET_GPR_U32(ctx, 31, 0x2C9124u);
    ctx->pc = 0x2C9120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C911Cu;
            // 0x2c9120: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9124u; }
        if (ctx->pc != 0x2C9124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9124u; }
        if (ctx->pc != 0x2C9124u) { return; }
    }
    ctx->pc = 0x2C9124u;
label_2c9124:
    // 0x2c9124: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c9124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c9128: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2c9128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2c912c: 0x246305a8  addiu       $v1, $v1, 0x5A8
    ctx->pc = 0x2c912cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1448));
    // 0x2c9130: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2c9130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2c9134: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2c9134u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2c9138: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c9138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c913c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c913cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c9140: 0xac440d78  sw          $a0, 0xD78($v0)
    ctx->pc = 0x2c9140u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3448), GPR_U32(ctx, 4));
    // 0x2c9144: 0x246305c0  addiu       $v1, $v1, 0x5C0
    ctx->pc = 0x2c9144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1472));
    // 0x2c9148: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c9148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c914c: 0x244205f8  addiu       $v0, $v0, 0x5F8
    ctx->pc = 0x2c914cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1528));
    // 0x2c9150: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c9150u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c9154: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2c9154u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2c9158: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2c9158u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2c915c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2c915cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2c9160: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2c9160u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2c9164: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2c9164u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2c9168: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2c9168u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2c916c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2c916cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2c9170: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2c9170u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2c9174: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2c9174u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2c9178: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2c9178u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2c917c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2c917cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2c9180: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2c9180u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2c9184: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C9184u;
    {
        const bool branch_taken_0x2c9184 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9184) {
            ctx->pc = 0x2C9218u;
            goto label_2c9218;
        }
    }
    ctx->pc = 0x2C918Cu;
    // 0x2c918c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2c918cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2c9190: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2c9190u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c9194: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c9194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2c9198: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2C9198u;
    SET_GPR_U32(ctx, 31, 0x2C91A0u);
    ctx->pc = 0x2C919Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9198u;
            // 0x2c919c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C91A0u; }
        if (ctx->pc != 0x2C91A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C91A0u; }
        if (ctx->pc != 0x2C91A0u) { return; }
    }
    ctx->pc = 0x2C91A0u;
label_2c91a0:
    // 0x2c91a0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2c91a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x2c91a4: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2c91a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x2c91a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c91a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c91ac: 0x24a59240  addiu       $a1, $a1, -0x6DC0
    ctx->pc = 0x2c91acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939200));
    // 0x2c91b0: 0x24c68e20  addiu       $a2, $a2, -0x71E0
    ctx->pc = 0x2c91b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938144));
    // 0x2c91b4: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x2c91b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2c91b8: 0xc040840  jal         func_102100
    ctx->pc = 0x2C91B8u;
    SET_GPR_U32(ctx, 31, 0x2C91C0u);
    ctx->pc = 0x2C91BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C91B8u;
            // 0x2c91bc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C91C0u; }
        if (ctx->pc != 0x2C91C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C91C0u; }
        if (ctx->pc != 0x2C91C0u) { return; }
    }
    ctx->pc = 0x2C91C0u;
label_2c91c0:
    // 0x2c91c0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2c91c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2c91c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c91c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c91c8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2c91c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2c91cc: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C91CCu;
    SET_GPR_U32(ctx, 31, 0x2C91D4u);
    ctx->pc = 0x2C91D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C91CCu;
            // 0x2c91d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C91D4u; }
        if (ctx->pc != 0x2C91D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C91D4u; }
        if (ctx->pc != 0x2C91D4u) { return; }
    }
    ctx->pc = 0x2C91D4u;
label_2c91d4:
    // 0x2c91d4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c91d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c91d8: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C91D8u;
    SET_GPR_U32(ctx, 31, 0x2C91E0u);
    ctx->pc = 0x2C91DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C91D8u;
            // 0x2c91dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C91E0u; }
        if (ctx->pc != 0x2C91E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C91E0u; }
        if (ctx->pc != 0x2C91E0u) { return; }
    }
    ctx->pc = 0x2C91E0u;
label_2c91e0:
    // 0x2c91e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c91e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c91e4:
    // 0x2c91e4: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2c91e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2c91e8: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c91e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c91ec: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2c91ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2c91f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c91f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c91f4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2c91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2c91f8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2c91f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2c91fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c91fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c9200: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2C9200u;
    SET_GPR_U32(ctx, 31, 0x2C9208u);
    ctx->pc = 0x2C9204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9200u;
            // 0x2c9204: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9208u; }
        if (ctx->pc != 0x2C9208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9208u; }
        if (ctx->pc != 0x2C9208u) { return; }
    }
    ctx->pc = 0x2C9208u;
label_2c9208:
    // 0x2c9208: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c9208u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c920c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2c920cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c9210: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C9210u;
    {
        const bool branch_taken_0x2c9210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9210u;
            // 0x2c9214: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9210) {
            ctx->pc = 0x2C91E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c91e4;
        }
    }
    ctx->pc = 0x2C9218u;
label_2c9218:
    // 0x2c9218: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c9218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c921c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c921cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9220: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c9220u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c9224: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c9224u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9228: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c9228u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c922c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c922cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9230: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9230u;
            // 0x2c9234: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9238u;
    // 0x2c9238: 0x0  nop
    ctx->pc = 0x2c9238u;
    // NOP
    // 0x2c923c: 0x0  nop
    ctx->pc = 0x2c923cu;
    // NOP
    // 0x2c9240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c9240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c9244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c9244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c9248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c9248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c924c: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x2C924Cu;
    SET_GPR_U32(ctx, 31, 0x2C9254u);
    ctx->pc = 0x2C9250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C924Cu;
            // 0x2c9250: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9254u; }
        if (ctx->pc != 0x2C9254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9254u; }
        if (ctx->pc != 0x2C9254u) { return; }
    }
    ctx->pc = 0x2C9254u;
label_2c9254:
    // 0x2c9254: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x2C9254u;
    SET_GPR_U32(ctx, 31, 0x2C925Cu);
    ctx->pc = 0x2C9258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9254u;
            // 0x2c9258: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C925Cu; }
        if (ctx->pc != 0x2C925Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C925Cu; }
        if (ctx->pc != 0x2C925Cu) { return; }
    }
    ctx->pc = 0x2C925Cu;
label_2c925c:
    // 0x2c925c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c925cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c9260: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c9260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c9264: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x2c9264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x2c9268: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x2c9268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x2c926c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c926cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c9270: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x2c9270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x2c9274: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x2C9274u;
    SET_GPR_U32(ctx, 31, 0x2C927Cu);
    ctx->pc = 0x2C9278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9274u;
            // 0x2c9278: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C927Cu; }
        if (ctx->pc != 0x2C927Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C927Cu; }
        if (ctx->pc != 0x2C927Cu) { return; }
    }
    ctx->pc = 0x2C927Cu;
label_2c927c:
    // 0x2c927c: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x2C927Cu;
    SET_GPR_U32(ctx, 31, 0x2C9284u);
    ctx->pc = 0x2C9280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C927Cu;
            // 0x2c9280: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9284u; }
        if (ctx->pc != 0x2C9284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9284u; }
        if (ctx->pc != 0x2C9284u) { return; }
    }
    ctx->pc = 0x2C9284u;
label_2c9284:
    // 0x2c9284: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x2c9284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x2c9288: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x2c9288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x2c928c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x2c928cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x2c9290: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x2c9290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x2c9294: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x2c9294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x2c9298: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c9298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c929c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x2c929cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x2c92a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c92a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c92a4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x2c92a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x2c92a8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x2c92a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x2c92ac: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x2c92acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x2c92b0: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x2c92b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x2c92b4: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x2c92b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x2c92b8: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x2c92b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x2c92bc: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x2c92bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x2c92c0: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x2C92C0u;
    SET_GPR_U32(ctx, 31, 0x2C92C8u);
    ctx->pc = 0x2C92C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C92C0u;
            // 0x2c92c4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C92C8u; }
        if (ctx->pc != 0x2C92C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C92C8u; }
        if (ctx->pc != 0x2C92C8u) { return; }
    }
    ctx->pc = 0x2C92C8u;
label_2c92c8:
    // 0x2c92c8: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x2C92C8u;
    SET_GPR_U32(ctx, 31, 0x2C92D0u);
    ctx->pc = 0x2C92CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C92C8u;
            // 0x2c92cc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C92D0u; }
        if (ctx->pc != 0x2C92D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C92D0u; }
        if (ctx->pc != 0x2C92D0u) { return; }
    }
    ctx->pc = 0x2C92D0u;
label_2c92d0:
    // 0x2c92d0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x2c92d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x2c92d4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2c92d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2c92d8: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x2c92d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x2c92dc: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x2c92dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x2c92e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c92e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c92e4: 0x2484ac00  addiu       $a0, $a0, -0x5400
    ctx->pc = 0x2c92e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945792));
    // 0x2c92e8: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x2c92e8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c92ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2c92ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2c92f0: 0x2463ac40  addiu       $v1, $v1, -0x53C0
    ctx->pc = 0x2c92f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945856));
    // 0x2c92f4: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x2c92f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2c92f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c92f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c92fc: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x2c92fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
    // 0x2c9300: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2c9300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2c9304: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x2c9304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x2c9308: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x2c9308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x2c930c: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x2c930cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x2c9310: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x2c9310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x2c9314: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c9314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9318: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c9318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c931c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C931Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C931Cu;
            // 0x2c9320: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9324u;
    // 0x2c9324: 0x0  nop
    ctx->pc = 0x2c9324u;
    // NOP
    // 0x2c9328: 0x0  nop
    ctx->pc = 0x2c9328u;
    // NOP
    // 0x2c932c: 0x0  nop
    ctx->pc = 0x2c932cu;
    // NOP
}
