#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BC050
// Address: 0x2bc050 - 0x2bc2b0
void sub_002BC050_0x2bc050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC050_0x2bc050");
#endif

    switch (ctx->pc) {
        case 0x2bc080u: goto label_2bc080;
        case 0x2bc0d4u: goto label_2bc0d4;
        case 0x2bc144u: goto label_2bc144;
        case 0x2bc164u: goto label_2bc164;
        case 0x2bc178u: goto label_2bc178;
        case 0x2bc184u: goto label_2bc184;
        case 0x2bc188u: goto label_2bc188;
        case 0x2bc1acu: goto label_2bc1ac;
        case 0x2bc230u: goto label_2bc230;
        case 0x2bc238u: goto label_2bc238;
        default: break;
    }

    ctx->pc = 0x2bc050u;

    // 0x2bc050: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bc050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2bc054: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2bc054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bc058: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bc058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2bc05c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bc05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2bc060: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bc060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bc064: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2bc064u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc068: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bc068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bc06c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bc06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bc070: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2bc070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc074: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2bc074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc078: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2BC078u;
    SET_GPR_U32(ctx, 31, 0x2BC080u);
    ctx->pc = 0x2BC07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC078u;
            // 0x2bc07c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC080u; }
        if (ctx->pc != 0x2BC080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC080u; }
        if (ctx->pc != 0x2BC080u) { return; }
    }
    ctx->pc = 0x2BC080u;
label_2bc080:
    // 0x2bc080: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bc080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bc084: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bc084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bc088: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2bc088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2bc08c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2bc08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2bc090: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2bc090u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2bc094: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2bc094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2bc098: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2bc098u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2bc09c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2bc09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bc0a0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2bc0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2bc0a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bc0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2bc0a8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2bc0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2bc0ac: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2bc0acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bc0b0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2bc0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2bc0b4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2bc0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2bc0b8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2bc0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2bc0bc: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2bc0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2bc0c0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2bc0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2bc0c4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2bc0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2bc0c8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2bc0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2bc0cc: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2BC0CCu;
    SET_GPR_U32(ctx, 31, 0x2BC0D4u);
    ctx->pc = 0x2BC0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC0CCu;
            // 0x2bc0d0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC0D4u; }
        if (ctx->pc != 0x2BC0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC0D4u; }
        if (ctx->pc != 0x2BC0D4u) { return; }
    }
    ctx->pc = 0x2BC0D4u;
label_2bc0d4:
    // 0x2bc0d4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bc0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bc0d8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2bc0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2bc0dc: 0x24632128  addiu       $v1, $v1, 0x2128
    ctx->pc = 0x2bc0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8488));
    // 0x2bc0e0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2bc0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2bc0e4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2bc0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2bc0e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bc0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2bc0ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bc0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bc0f0: 0xac440d38  sw          $a0, 0xD38($v0)
    ctx->pc = 0x2bc0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3384), GPR_U32(ctx, 4));
    // 0x2bc0f4: 0x24632140  addiu       $v1, $v1, 0x2140
    ctx->pc = 0x2bc0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8512));
    // 0x2bc0f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bc0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bc0fc: 0x24422178  addiu       $v0, $v0, 0x2178
    ctx->pc = 0x2bc0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8568));
    // 0x2bc100: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2bc100u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2bc104: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2bc104u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2bc108: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2bc108u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2bc10c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2bc10cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2bc110: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2bc110u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2bc114: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2bc114u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2bc118: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2bc118u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2bc11c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2bc11cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2bc120: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2bc120u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2bc124: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2bc124u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2bc128: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2bc128u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2bc12c: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2bc12cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2bc130: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2BC130u;
    {
        const bool branch_taken_0x2bc130 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc130) {
            ctx->pc = 0x2BC1C0u;
            goto label_2bc1c0;
        }
    }
    ctx->pc = 0x2BC138u;
    // 0x2bc138: 0x1011c0  sll         $v0, $s0, 7
    ctx->pc = 0x2bc138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x2bc13c: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2BC13Cu;
    SET_GPR_U32(ctx, 31, 0x2BC144u);
    ctx->pc = 0x2BC140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC13Cu;
            // 0x2bc140: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC144u; }
        if (ctx->pc != 0x2BC144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC144u; }
        if (ctx->pc != 0x2BC144u) { return; }
    }
    ctx->pc = 0x2BC144u;
label_2bc144:
    // 0x2bc144: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bc144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2bc148: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2bc148u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2bc14c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bc14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc150: 0x24a5c1e0  addiu       $a1, $a1, -0x3E20
    ctx->pc = 0x2bc150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951392));
    // 0x2bc154: 0x24c6bdf0  addiu       $a2, $a2, -0x4210
    ctx->pc = 0x2bc154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950384));
    // 0x2bc158: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2bc158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2bc15c: 0xc040840  jal         func_102100
    ctx->pc = 0x2BC15Cu;
    SET_GPR_U32(ctx, 31, 0x2BC164u);
    ctx->pc = 0x2BC160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC15Cu;
            // 0x2bc160: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC164u; }
        if (ctx->pc != 0x2BC164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC164u; }
        if (ctx->pc != 0x2BC164u) { return; }
    }
    ctx->pc = 0x2BC164u;
label_2bc164:
    // 0x2bc164: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2bc164u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2bc168: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2bc168u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc16c: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2bc16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2bc170: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2BC170u;
    SET_GPR_U32(ctx, 31, 0x2BC178u);
    ctx->pc = 0x2BC174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC170u;
            // 0x2bc174: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC178u; }
        if (ctx->pc != 0x2BC178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC178u; }
        if (ctx->pc != 0x2BC178u) { return; }
    }
    ctx->pc = 0x2BC178u;
label_2bc178:
    // 0x2bc178: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2bc178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2bc17c: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2BC17Cu;
    SET_GPR_U32(ctx, 31, 0x2BC184u);
    ctx->pc = 0x2BC180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC17Cu;
            // 0x2bc180: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC184u; }
        if (ctx->pc != 0x2BC184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC184u; }
        if (ctx->pc != 0x2BC184u) { return; }
    }
    ctx->pc = 0x2BC184u;
label_2bc184:
    // 0x2bc184: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2bc184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bc188:
    // 0x2bc188: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2bc188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2bc18c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2bc18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2bc190: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2bc190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2bc194: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2bc194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc198: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2bc198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2bc19c: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2bc19cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2bc1a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bc1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bc1a4: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2BC1A4u;
    SET_GPR_U32(ctx, 31, 0x2BC1ACu);
    ctx->pc = 0x2BC1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC1A4u;
            // 0x2bc1a8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC1ACu; }
        if (ctx->pc != 0x2BC1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC1ACu; }
        if (ctx->pc != 0x2BC1ACu) { return; }
    }
    ctx->pc = 0x2BC1ACu;
label_2bc1ac:
    // 0x2bc1ac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2bc1acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2bc1b0: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2bc1b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2bc1b4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2BC1B4u;
    {
        const bool branch_taken_0x2bc1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC1B4u;
            // 0x2bc1b8: 0x26520080  addiu       $s2, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc1b4) {
            ctx->pc = 0x2BC188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bc188;
        }
    }
    ctx->pc = 0x2BC1BCu;
    // 0x2bc1bc: 0x0  nop
    ctx->pc = 0x2bc1bcu;
    // NOP
label_2bc1c0:
    // 0x2bc1c0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2bc1c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc1c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bc1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bc1c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bc1c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bc1cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bc1ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bc1d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bc1d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc1d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bc1d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC1D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC1D8u;
            // 0x2bc1dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BC1E0u;
    // 0x2bc1e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bc1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bc1e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bc1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bc1e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bc1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bc1ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bc1ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bc1f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bc1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bc1f4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2bc1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2bc1f8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bc1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bc1fc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2bc1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2bc200: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2bc200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x2bc204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bc204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc208: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2bc208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2bc20c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bc20cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc210: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2bc210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2bc214: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2bc214u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2bc218: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2bc218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2bc21c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2bc21cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2bc220: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2bc220u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bc224: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2bc224u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bc228: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2BC228u;
    SET_GPR_U32(ctx, 31, 0x2BC230u);
    ctx->pc = 0x2BC22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC228u;
            // 0x2bc22c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC230u; }
        if (ctx->pc != 0x2BC230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC230u; }
        if (ctx->pc != 0x2BC230u) { return; }
    }
    ctx->pc = 0x2BC230u;
label_2bc230:
    // 0x2bc230: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2BC230u;
    SET_GPR_U32(ctx, 31, 0x2BC238u);
    ctx->pc = 0x2BC234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC230u;
            // 0x2bc234: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC238u; }
        if (ctx->pc != 0x2BC238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC238u; }
        if (ctx->pc != 0x2BC238u) { return; }
    }
    ctx->pc = 0x2BC238u;
label_2bc238:
    // 0x2bc238: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bc238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2bc23c: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x2bc23cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
    // 0x2bc240: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2bc240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2bc244: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x2bc244u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x2bc248: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x2bc248u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x2bc24c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x2bc24cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x2bc250: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2bc250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2bc254: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2bc254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2bc258: 0x8c490788  lw          $t1, 0x788($v0)
    ctx->pc = 0x2bc258u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
    // 0x2bc25c: 0x2508c560  addiu       $t0, $t0, -0x3AA0
    ctx->pc = 0x2bc25cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952288));
    // 0x2bc260: 0x24e72660  addiu       $a3, $a3, 0x2660
    ctx->pc = 0x2bc260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9824));
    // 0x2bc264: 0x24c62670  addiu       $a2, $a2, 0x2670
    ctx->pc = 0x2bc264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9840));
    // 0x2bc268: 0x24a526b0  addiu       $a1, $a1, 0x26B0
    ctx->pc = 0x2bc268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9904));
    // 0x2bc26c: 0x248454b0  addiu       $a0, $a0, 0x54B0
    ctx->pc = 0x2bc26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21680));
    // 0x2bc270: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2bc270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2bc274: 0x246354f0  addiu       $v1, $v1, 0x54F0
    ctx->pc = 0x2bc274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21744));
    // 0x2bc278: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x2bc278u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2bc27c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bc27cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc280: 0xa208004d  sb          $t0, 0x4D($s0)
    ctx->pc = 0x2bc280u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 8));
    // 0x2bc284: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x2bc284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
    // 0x2bc288: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2bc288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2bc28c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x2bc28cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x2bc290: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x2bc290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
    // 0x2bc294: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2bc294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2bc298: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x2bc298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x2bc29c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bc29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc2a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bc2a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC2A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC2A4u;
            // 0x2bc2a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BC2ACu;
    // 0x2bc2ac: 0x0  nop
    ctx->pc = 0x2bc2acu;
    // NOP
}
