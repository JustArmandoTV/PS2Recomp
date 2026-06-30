#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BECB0
// Address: 0x2becb0 - 0x2bef00
void sub_002BECB0_0x2becb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BECB0_0x2becb0");
#endif

    switch (ctx->pc) {
        case 0x2bece0u: goto label_2bece0;
        case 0x2bed34u: goto label_2bed34;
        case 0x2bedb8u: goto label_2bedb8;
        case 0x2bedd8u: goto label_2bedd8;
        case 0x2bedecu: goto label_2bedec;
        case 0x2bedf8u: goto label_2bedf8;
        case 0x2bedfcu: goto label_2bedfc;
        case 0x2bee20u: goto label_2bee20;
        case 0x2beea0u: goto label_2beea0;
        case 0x2beea8u: goto label_2beea8;
        default: break;
    }

    ctx->pc = 0x2becb0u;

    // 0x2becb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2becb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2becb4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2becb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2becb8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2becb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2becbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2becbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2becc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2becc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2becc4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2becc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2becc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2becc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2beccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2becccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2becd0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2becd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2becd4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2becd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2becd8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2BECD8u;
    SET_GPR_U32(ctx, 31, 0x2BECE0u);
    ctx->pc = 0x2BECDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BECD8u;
            // 0x2becdc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BECE0u; }
        if (ctx->pc != 0x2BECE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BECE0u; }
        if (ctx->pc != 0x2BECE0u) { return; }
    }
    ctx->pc = 0x2BECE0u;
label_2bece0:
    // 0x2bece0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bece0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bece4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bece4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bece8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2bece8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2becec: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2bececu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2becf0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2becf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2becf4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2becf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2becf8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2becf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2becfc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2becfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bed00: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2bed00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2bed04: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bed04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2bed08: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2bed08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2bed0c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2bed0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bed10: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2bed10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2bed14: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2bed14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2bed18: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2bed18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2bed1c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2bed1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2bed20: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2bed20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2bed24: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2bed24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2bed28: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2bed28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2bed2c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2BED2Cu;
    SET_GPR_U32(ctx, 31, 0x2BED34u);
    ctx->pc = 0x2BED30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BED2Cu;
            // 0x2bed30: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BED34u; }
        if (ctx->pc != 0x2BED34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BED34u; }
        if (ctx->pc != 0x2BED34u) { return; }
    }
    ctx->pc = 0x2BED34u;
label_2bed34:
    // 0x2bed34: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bed34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bed38: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2bed38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2bed3c: 0x24631bc0  addiu       $v1, $v1, 0x1BC0
    ctx->pc = 0x2bed3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7104));
    // 0x2bed40: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2bed40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2bed44: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2bed44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2bed48: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bed48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2bed4c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bed50: 0xac440d28  sw          $a0, 0xD28($v0)
    ctx->pc = 0x2bed50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3368), GPR_U32(ctx, 4));
    // 0x2bed54: 0x24631bd0  addiu       $v1, $v1, 0x1BD0
    ctx->pc = 0x2bed54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7120));
    // 0x2bed58: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bed58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bed5c: 0x24421c08  addiu       $v0, $v0, 0x1C08
    ctx->pc = 0x2bed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7176));
    // 0x2bed60: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2bed60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2bed64: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2bed64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2bed68: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2bed68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2bed6c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2bed6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2bed70: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2bed70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2bed74: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2bed74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2bed78: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2bed78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2bed7c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2bed7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2bed80: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2bed80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2bed84: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2bed84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2bed88: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2bed88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2bed8c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2bed8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2bed90: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x2bed90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    // 0x2bed94: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x2bed94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x2bed98: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2bed98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2bed9c: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2BED9Cu;
    {
        const bool branch_taken_0x2bed9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bed9c) {
            ctx->pc = 0x2BEE30u;
            goto label_2bee30;
        }
    }
    ctx->pc = 0x2BEDA4u;
    // 0x2beda4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2beda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2beda8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2beda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2bedac: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2bedacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2bedb0: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2BEDB0u;
    SET_GPR_U32(ctx, 31, 0x2BEDB8u);
    ctx->pc = 0x2BEDB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEDB0u;
            // 0x2bedb4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEDB8u; }
        if (ctx->pc != 0x2BEDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEDB8u; }
        if (ctx->pc != 0x2BEDB8u) { return; }
    }
    ctx->pc = 0x2BEDB8u;
label_2bedb8:
    // 0x2bedb8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bedb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2bedbc: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2bedbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2bedc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bedc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bedc4: 0x24a5ee50  addiu       $a1, $a1, -0x11B0
    ctx->pc = 0x2bedc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962768));
    // 0x2bedc8: 0x24c6eab0  addiu       $a2, $a2, -0x1550
    ctx->pc = 0x2bedc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961840));
    // 0x2bedcc: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x2bedccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2bedd0: 0xc040840  jal         func_102100
    ctx->pc = 0x2BEDD0u;
    SET_GPR_U32(ctx, 31, 0x2BEDD8u);
    ctx->pc = 0x2BEDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEDD0u;
            // 0x2bedd4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEDD8u; }
        if (ctx->pc != 0x2BEDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEDD8u; }
        if (ctx->pc != 0x2BEDD8u) { return; }
    }
    ctx->pc = 0x2BEDD8u;
label_2bedd8:
    // 0x2bedd8: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2bedd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2beddc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2beddcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bede0: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2bede0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2bede4: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2BEDE4u;
    SET_GPR_U32(ctx, 31, 0x2BEDECu);
    ctx->pc = 0x2BEDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEDE4u;
            // 0x2bede8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEDECu; }
        if (ctx->pc != 0x2BEDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEDECu; }
        if (ctx->pc != 0x2BEDECu) { return; }
    }
    ctx->pc = 0x2BEDECu;
label_2bedec:
    // 0x2bedec: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2bedecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2bedf0: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2BEDF0u;
    SET_GPR_U32(ctx, 31, 0x2BEDF8u);
    ctx->pc = 0x2BEDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEDF0u;
            // 0x2bedf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEDF8u; }
        if (ctx->pc != 0x2BEDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEDF8u; }
        if (ctx->pc != 0x2BEDF8u) { return; }
    }
    ctx->pc = 0x2BEDF8u;
label_2bedf8:
    // 0x2bedf8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2bedf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bedfc:
    // 0x2bedfc: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2bedfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2bee00: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2bee00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2bee04: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2bee04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2bee08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2bee08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bee0c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2bee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2bee10: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2bee10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2bee14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bee14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bee18: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2BEE18u;
    SET_GPR_U32(ctx, 31, 0x2BEE20u);
    ctx->pc = 0x2BEE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEE18u;
            // 0x2bee1c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEE20u; }
        if (ctx->pc != 0x2BEE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEE20u; }
        if (ctx->pc != 0x2BEE20u) { return; }
    }
    ctx->pc = 0x2BEE20u;
label_2bee20:
    // 0x2bee20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2bee20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2bee24: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2bee24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2bee28: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2BEE28u;
    {
        const bool branch_taken_0x2bee28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEE28u;
            // 0x2bee2c: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee28) {
            ctx->pc = 0x2BEDFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bedfc;
        }
    }
    ctx->pc = 0x2BEE30u;
label_2bee30:
    // 0x2bee30: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2bee30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bee34: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bee34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bee38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bee38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bee3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bee3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bee40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bee40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bee44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bee44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bee48: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEE48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEE48u;
            // 0x2bee4c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BEE50u;
    // 0x2bee50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bee50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bee54: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bee54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bee58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bee58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bee5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bee5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bee60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bee60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bee64: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2bee64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2bee68: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bee68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bee6c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2bee6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2bee70: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2bee70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x2bee74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bee74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bee78: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2bee78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2bee7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bee7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bee80: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2bee80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2bee84: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2bee84u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2bee88: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2bee88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2bee8c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2bee8cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2bee90: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2bee90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bee94: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2bee94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bee98: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2BEE98u;
    SET_GPR_U32(ctx, 31, 0x2BEEA0u);
    ctx->pc = 0x2BEE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEE98u;
            // 0x2bee9c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEEA0u; }
        if (ctx->pc != 0x2BEEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEEA0u; }
        if (ctx->pc != 0x2BEEA0u) { return; }
    }
    ctx->pc = 0x2BEEA0u;
label_2beea0:
    // 0x2beea0: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2BEEA0u;
    SET_GPR_U32(ctx, 31, 0x2BEEA8u);
    ctx->pc = 0x2BEEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEEA0u;
            // 0x2beea4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEEA8u; }
        if (ctx->pc != 0x2BEEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEEA8u; }
        if (ctx->pc != 0x2BEEA8u) { return; }
    }
    ctx->pc = 0x2BEEA8u;
label_2beea8:
    // 0x2beea8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2beea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2beeac: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2beeacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x2beeb0: 0x8c450e80  lw          $a1, 0xE80($v0)
    ctx->pc = 0x2beeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2beeb4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2beeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2beeb8: 0x2484c560  addiu       $a0, $a0, -0x3AA0
    ctx->pc = 0x2beeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952288));
    // 0x2beebc: 0x24631b80  addiu       $v1, $v1, 0x1B80
    ctx->pc = 0x2beebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7040));
    // 0x2beec0: 0x8ca50788  lw          $a1, 0x788($a1)
    ctx->pc = 0x2beec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1928)));
    // 0x2beec4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2beec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beec8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2beec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2beecc: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2beeccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2beed0: 0xa204004d  sb          $a0, 0x4D($s0)
    ctx->pc = 0x2beed0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 4));
    // 0x2beed4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2beed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2beed8: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2beed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2beedc: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x2beedcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x2beee0: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2beee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2beee4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2beee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2beee8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2beee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2beeec: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEEECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEEECu;
            // 0x2beef0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BEEF4u;
    // 0x2beef4: 0x0  nop
    ctx->pc = 0x2beef4u;
    // NOP
    // 0x2beef8: 0x0  nop
    ctx->pc = 0x2beef8u;
    // NOP
    // 0x2beefc: 0x0  nop
    ctx->pc = 0x2beefcu;
    // NOP
}
