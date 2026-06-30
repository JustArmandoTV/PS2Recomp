#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BCE10
// Address: 0x2bce10 - 0x2bd0a0
void sub_002BCE10_0x2bce10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BCE10_0x2bce10");
#endif

    switch (ctx->pc) {
        case 0x2bce40u: goto label_2bce40;
        case 0x2bce94u: goto label_2bce94;
        case 0x2bcf28u: goto label_2bcf28;
        case 0x2bcf48u: goto label_2bcf48;
        case 0x2bcf5cu: goto label_2bcf5c;
        case 0x2bcf68u: goto label_2bcf68;
        case 0x2bcf6cu: goto label_2bcf6c;
        case 0x2bcf90u: goto label_2bcf90;
        case 0x2bd010u: goto label_2bd010;
        case 0x2bd018u: goto label_2bd018;
        default: break;
    }

    ctx->pc = 0x2bce10u;

    // 0x2bce10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bce10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2bce14: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2bce14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bce18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bce18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2bce1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bce1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2bce20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bce20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bce24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2bce24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bce28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bce28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bce2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bce2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bce30: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2bce30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bce34: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2bce34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bce38: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2BCE38u;
    SET_GPR_U32(ctx, 31, 0x2BCE40u);
    ctx->pc = 0x2BCE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCE38u;
            // 0x2bce3c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCE40u; }
        if (ctx->pc != 0x2BCE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCE40u; }
        if (ctx->pc != 0x2BCE40u) { return; }
    }
    ctx->pc = 0x2BCE40u;
label_2bce40:
    // 0x2bce40: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bce40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bce44: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bce44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bce48: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2bce48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2bce4c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2bce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2bce50: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2bce50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2bce54: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2bce54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2bce58: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2bce58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2bce5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2bce5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bce60: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2bce60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2bce64: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bce64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2bce68: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2bce68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2bce6c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2bce6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bce70: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2bce70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2bce74: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2bce74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2bce78: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2bce78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2bce7c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2bce7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2bce80: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2bce80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2bce84: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2bce84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2bce88: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2bce88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2bce8c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2BCE8Cu;
    SET_GPR_U32(ctx, 31, 0x2BCE94u);
    ctx->pc = 0x2BCE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCE8Cu;
            // 0x2bce90: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCE94u; }
        if (ctx->pc != 0x2BCE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCE94u; }
        if (ctx->pc != 0x2BCE94u) { return; }
    }
    ctx->pc = 0x2BCE94u;
label_2bce94:
    // 0x2bce94: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bce94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bce98: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2bce98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2bce9c: 0x24631fd0  addiu       $v1, $v1, 0x1FD0
    ctx->pc = 0x2bce9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8144));
    // 0x2bcea0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2bcea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2bcea4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2bcea4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2bcea8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bcea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2bceac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bceacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bceb0: 0xac440d48  sw          $a0, 0xD48($v0)
    ctx->pc = 0x2bceb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3400), GPR_U32(ctx, 4));
    // 0x2bceb4: 0x24631fe0  addiu       $v1, $v1, 0x1FE0
    ctx->pc = 0x2bceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8160));
    // 0x2bceb8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bcebc: 0x24422018  addiu       $v0, $v0, 0x2018
    ctx->pc = 0x2bcebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8216));
    // 0x2bcec0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2bcec0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2bcec4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2bcec4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2bcec8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2bcec8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2bcecc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2bceccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2bced0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2bced0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2bced4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2bced4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2bced8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2bced8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2bcedc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2bcedcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2bcee0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2bcee0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2bcee4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2bcee4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2bcee8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2bcee8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2bceec: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2bceecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2bcef0: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x2bcef0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    // 0x2bcef4: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x2bcef4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x2bcef8: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x2bcef8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
    // 0x2bcefc: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x2bcefcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
    // 0x2bcf00: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x2bcf00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
    // 0x2bcf04: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x2bcf04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
    // 0x2bcf08: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2bcf08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2bcf0c: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2BCF0Cu;
    {
        const bool branch_taken_0x2bcf0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcf0c) {
            ctx->pc = 0x2BCFA0u;
            goto label_2bcfa0;
        }
    }
    ctx->pc = 0x2BCF14u;
    // 0x2bcf14: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2bcf14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2bcf18: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2bcf18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2bcf1c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2bcf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2bcf20: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2BCF20u;
    SET_GPR_U32(ctx, 31, 0x2BCF28u);
    ctx->pc = 0x2BCF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCF20u;
            // 0x2bcf24: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCF28u; }
        if (ctx->pc != 0x2BCF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCF28u; }
        if (ctx->pc != 0x2BCF28u) { return; }
    }
    ctx->pc = 0x2BCF28u;
label_2bcf28:
    // 0x2bcf28: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bcf28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2bcf2c: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2bcf2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2bcf30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bcf30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf34: 0x24a5cfc0  addiu       $a1, $a1, -0x3040
    ctx->pc = 0x2bcf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954944));
    // 0x2bcf38: 0x24c6cc00  addiu       $a2, $a2, -0x3400
    ctx->pc = 0x2bcf38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953984));
    // 0x2bcf3c: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x2bcf3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2bcf40: 0xc040840  jal         func_102100
    ctx->pc = 0x2BCF40u;
    SET_GPR_U32(ctx, 31, 0x2BCF48u);
    ctx->pc = 0x2BCF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCF40u;
            // 0x2bcf44: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCF48u; }
        if (ctx->pc != 0x2BCF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCF48u; }
        if (ctx->pc != 0x2BCF48u) { return; }
    }
    ctx->pc = 0x2BCF48u;
label_2bcf48:
    // 0x2bcf48: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2bcf48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2bcf4c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2bcf4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf50: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2bcf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2bcf54: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2BCF54u;
    SET_GPR_U32(ctx, 31, 0x2BCF5Cu);
    ctx->pc = 0x2BCF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCF54u;
            // 0x2bcf58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCF5Cu; }
        if (ctx->pc != 0x2BCF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCF5Cu; }
        if (ctx->pc != 0x2BCF5Cu) { return; }
    }
    ctx->pc = 0x2BCF5Cu;
label_2bcf5c:
    // 0x2bcf5c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2bcf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2bcf60: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2BCF60u;
    SET_GPR_U32(ctx, 31, 0x2BCF68u);
    ctx->pc = 0x2BCF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCF60u;
            // 0x2bcf64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCF68u; }
        if (ctx->pc != 0x2BCF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCF68u; }
        if (ctx->pc != 0x2BCF68u) { return; }
    }
    ctx->pc = 0x2BCF68u;
label_2bcf68:
    // 0x2bcf68: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2bcf68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bcf6c:
    // 0x2bcf6c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2bcf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2bcf70: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2bcf70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2bcf74: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2bcf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2bcf78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2bcf78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bcf7c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2bcf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2bcf80: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2bcf80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2bcf84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bcf84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bcf88: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2BCF88u;
    SET_GPR_U32(ctx, 31, 0x2BCF90u);
    ctx->pc = 0x2BCF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCF88u;
            // 0x2bcf8c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCF90u; }
        if (ctx->pc != 0x2BCF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCF90u; }
        if (ctx->pc != 0x2BCF90u) { return; }
    }
    ctx->pc = 0x2BCF90u;
label_2bcf90:
    // 0x2bcf90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2bcf90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2bcf94: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2bcf94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2bcf98: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2BCF98u;
    {
        const bool branch_taken_0x2bcf98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BCF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCF98u;
            // 0x2bcf9c: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcf98) {
            ctx->pc = 0x2BCF6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bcf6c;
        }
    }
    ctx->pc = 0x2BCFA0u;
label_2bcfa0:
    // 0x2bcfa0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2bcfa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcfa4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bcfa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bcfa8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bcfa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bcfac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bcfacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bcfb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bcfb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bcfb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bcfb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bcfb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCFB8u;
            // 0x2bcfbc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BCFC0u;
    // 0x2bcfc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bcfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bcfc4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bcfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bcfc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bcfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bcfcc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bcfccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bcfd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bcfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bcfd4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2bcfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2bcfd8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bcfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bcfdc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2bcfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2bcfe0: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2bcfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x2bcfe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bcfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bcfe8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2bcfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2bcfec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bcfecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcff0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2bcff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2bcff4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2bcff4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2bcff8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2bcff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2bcffc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2bcffcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2bd000: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2bd000u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bd004: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2bd004u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bd008: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2BD008u;
    SET_GPR_U32(ctx, 31, 0x2BD010u);
    ctx->pc = 0x2BD00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD008u;
            // 0x2bd00c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD010u; }
        if (ctx->pc != 0x2BD010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD010u; }
        if (ctx->pc != 0x2BD010u) { return; }
    }
    ctx->pc = 0x2BD010u;
label_2bd010:
    // 0x2bd010: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2BD010u;
    SET_GPR_U32(ctx, 31, 0x2BD018u);
    ctx->pc = 0x2BD014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD010u;
            // 0x2bd014: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD018u; }
        if (ctx->pc != 0x2BD018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD018u; }
        if (ctx->pc != 0x2BD018u) { return; }
    }
    ctx->pc = 0x2BD018u;
label_2bd018:
    // 0x2bd018: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bd018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2bd01c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2bd01cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x2bd020: 0x8c450e80  lw          $a1, 0xE80($v0)
    ctx->pc = 0x2bd020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2bd024: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bd024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bd028: 0x2484c560  addiu       $a0, $a0, -0x3AA0
    ctx->pc = 0x2bd028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952288));
    // 0x2bd02c: 0x24631f90  addiu       $v1, $v1, 0x1F90
    ctx->pc = 0x2bd02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8080));
    // 0x2bd030: 0x8ca50788  lw          $a1, 0x788($a1)
    ctx->pc = 0x2bd030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1928)));
    // 0x2bd034: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2bd034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2bd038: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2bd038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2bd03c: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2bd03cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bd040: 0xa204004d  sb          $a0, 0x4D($s0)
    ctx->pc = 0x2bd040u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bd044: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2bd044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2bd048: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2bd048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2bd04c: 0xa2000058  sb          $zero, 0x58($s0)
    ctx->pc = 0x2bd04cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bd050: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x2bd050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x2bd054: 0x8042007a  lb          $v0, 0x7A($v0)
    ctx->pc = 0x2bd054u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
    // 0x2bd058: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x2bd058u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2bd05c: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD05Cu;
    {
        const bool branch_taken_0x2bd05c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd05c) {
            ctx->pc = 0x2BD074u;
            goto label_2bd074;
        }
    }
    ctx->pc = 0x2BD064u;
    // 0x2bd064: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2bd064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2bd068: 0xc4407508  lwc1        $f0, 0x7508($v0)
    ctx->pc = 0x2bd068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 29960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd06c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD06Cu;
    {
        const bool branch_taken_0x2bd06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD06Cu;
            // 0x2bd070: 0xe6000054  swc1        $f0, 0x54($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd06c) {
            ctx->pc = 0x2BD080u;
            goto label_2bd080;
        }
    }
    ctx->pc = 0x2BD074u;
label_2bd074:
    // 0x2bd074: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2bd074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2bd078: 0xc4407500  lwc1        $f0, 0x7500($v0)
    ctx->pc = 0x2bd078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 29952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd07c: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2bd07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_2bd080:
    // 0x2bd080: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bd080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd084: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bd084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd088: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bd088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd08c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD08Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD08Cu;
            // 0x2bd090: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BD094u;
    // 0x2bd094: 0x0  nop
    ctx->pc = 0x2bd094u;
    // NOP
    // 0x2bd098: 0x0  nop
    ctx->pc = 0x2bd098u;
    // NOP
    // 0x2bd09c: 0x0  nop
    ctx->pc = 0x2bd09cu;
    // NOP
}
