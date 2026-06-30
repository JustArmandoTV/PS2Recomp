#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004BFCE0
// Address: 0x4bfce0 - 0x4bfef0
void sub_004BFCE0_0x4bfce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BFCE0_0x4bfce0");
#endif

    switch (ctx->pc) {
        case 0x4bfd10u: goto label_4bfd10;
        case 0x4bfd64u: goto label_4bfd64;
        case 0x4bfde0u: goto label_4bfde0;
        case 0x4bfe00u: goto label_4bfe00;
        case 0x4bfe14u: goto label_4bfe14;
        case 0x4bfe20u: goto label_4bfe20;
        case 0x4bfe24u: goto label_4bfe24;
        case 0x4bfe48u: goto label_4bfe48;
        case 0x4bfe94u: goto label_4bfe94;
        case 0x4bfebcu: goto label_4bfebc;
        case 0x4bfedcu: goto label_4bfedc;
        default: break;
    }

    ctx->pc = 0x4bfce0u;

    // 0x4bfce0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4bfce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4bfce4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4bfce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4bfce8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4bfce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4bfcec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4bfcecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4bfcf0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4bfcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4bfcf4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4bfcf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bfcf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bfcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4bfcfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bfcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4bfd00: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4bfd00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bfd04: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4bfd04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bfd08: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x4BFD08u;
    SET_GPR_U32(ctx, 31, 0x4BFD10u);
    ctx->pc = 0x4BFD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFD08u;
            // 0x4bfd0c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFD10u; }
        if (ctx->pc != 0x4BFD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFD10u; }
        if (ctx->pc != 0x4BFD10u) { return; }
    }
    ctx->pc = 0x4BFD10u;
label_4bfd10:
    // 0x4bfd10: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4bfd10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4bfd14: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4bfd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4bfd18: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4bfd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x4bfd1c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4bfd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x4bfd20: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4bfd20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4bfd24: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4bfd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x4bfd28: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4bfd28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4bfd2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4bfd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4bfd30: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4bfd30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x4bfd34: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bfd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4bfd38: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4bfd38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x4bfd3c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4bfd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4bfd40: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4bfd40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x4bfd44: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4bfd44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x4bfd48: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4bfd48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x4bfd4c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4bfd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x4bfd50: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4bfd50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x4bfd54: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4bfd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4bfd58: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4bfd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4bfd5c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x4BFD5Cu;
    SET_GPR_U32(ctx, 31, 0x4BFD64u);
    ctx->pc = 0x4BFD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFD5Cu;
            // 0x4bfd60: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFD64u; }
        if (ctx->pc != 0x4BFD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFD64u; }
        if (ctx->pc != 0x4BFD64u) { return; }
    }
    ctx->pc = 0x4BFD64u;
label_4bfd64:
    // 0x4bfd64: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4bfd64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4bfd68: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4bfd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x4bfd6c: 0x24631138  addiu       $v1, $v1, 0x1138
    ctx->pc = 0x4bfd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4408));
    // 0x4bfd70: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4bfd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x4bfd74: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4bfd74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x4bfd78: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4bfd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4bfd7c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4bfd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4bfd80: 0xac44a9e8  sw          $a0, -0x5618($v0)
    ctx->pc = 0x4bfd80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945256), GPR_U32(ctx, 4));
    // 0x4bfd84: 0x24631150  addiu       $v1, $v1, 0x1150
    ctx->pc = 0x4bfd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4432));
    // 0x4bfd88: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4bfd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4bfd8c: 0x24421188  addiu       $v0, $v0, 0x1188
    ctx->pc = 0x4bfd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4488));
    // 0x4bfd90: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4bfd90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4bfd94: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4bfd94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x4bfd98: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4bfd98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x4bfd9c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4bfd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x4bfda0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4bfda0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x4bfda4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4bfda4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x4bfda8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4bfda8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x4bfdac: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4bfdacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x4bfdb0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4bfdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x4bfdb4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4bfdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x4bfdb8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4bfdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x4bfdbc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4bfdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x4bfdc0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4bfdc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x4bfdc4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x4BFDC4u;
    {
        const bool branch_taken_0x4bfdc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bfdc4) {
            ctx->pc = 0x4BFE58u;
            goto label_4bfe58;
        }
    }
    ctx->pc = 0x4BFDCCu;
    // 0x4bfdcc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x4bfdccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x4bfdd0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x4bfdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4bfdd4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4bfdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x4bfdd8: 0xc040138  jal         func_1004E0
    ctx->pc = 0x4BFDD8u;
    SET_GPR_U32(ctx, 31, 0x4BFDE0u);
    ctx->pc = 0x4BFDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFDD8u;
            // 0x4bfddc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFDE0u; }
        if (ctx->pc != 0x4BFDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFDE0u; }
        if (ctx->pc != 0x4BFDE0u) { return; }
    }
    ctx->pc = 0x4BFDE0u;
label_4bfde0:
    // 0x4bfde0: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x4bfde0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x4bfde4: 0x3c06004c  lui         $a2, 0x4C
    ctx->pc = 0x4bfde4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)76 << 16));
    // 0x4bfde8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bfde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bfdec: 0x24a50900  addiu       $a1, $a1, 0x900
    ctx->pc = 0x4bfdecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2304));
    // 0x4bfdf0: 0x24c6f6b0  addiu       $a2, $a2, -0x950
    ctx->pc = 0x4bfdf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964912));
    // 0x4bfdf4: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x4bfdf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x4bfdf8: 0xc040840  jal         func_102100
    ctx->pc = 0x4BFDF8u;
    SET_GPR_U32(ctx, 31, 0x4BFE00u);
    ctx->pc = 0x4BFDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFDF8u;
            // 0x4bfdfc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFE00u; }
        if (ctx->pc != 0x4BFE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFE00u; }
        if (ctx->pc != 0x4BFE00u) { return; }
    }
    ctx->pc = 0x4BFE00u;
label_4bfe00:
    // 0x4bfe00: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4bfe00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x4bfe04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4bfe04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bfe08: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4bfe08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x4bfe0c: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x4BFE0Cu;
    SET_GPR_U32(ctx, 31, 0x4BFE14u);
    ctx->pc = 0x4BFE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFE0Cu;
            // 0x4bfe10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFE14u; }
        if (ctx->pc != 0x4BFE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFE14u; }
        if (ctx->pc != 0x4BFE14u) { return; }
    }
    ctx->pc = 0x4BFE14u;
label_4bfe14:
    // 0x4bfe14: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4bfe14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x4bfe18: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x4BFE18u;
    SET_GPR_U32(ctx, 31, 0x4BFE20u);
    ctx->pc = 0x4BFE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFE18u;
            // 0x4bfe1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFE20u; }
        if (ctx->pc != 0x4BFE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFE20u; }
        if (ctx->pc != 0x4BFE20u) { return; }
    }
    ctx->pc = 0x4BFE20u;
label_4bfe20:
    // 0x4bfe20: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4bfe20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bfe24:
    // 0x4bfe24: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4bfe24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x4bfe28: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4bfe28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x4bfe2c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4bfe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x4bfe30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4bfe30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4bfe34: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4bfe34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x4bfe38: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4bfe38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x4bfe3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4bfe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4bfe40: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x4BFE40u;
    SET_GPR_U32(ctx, 31, 0x4BFE48u);
    ctx->pc = 0x4BFE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFE40u;
            // 0x4bfe44: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFE48u; }
        if (ctx->pc != 0x4BFE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFE48u; }
        if (ctx->pc != 0x4BFE48u) { return; }
    }
    ctx->pc = 0x4BFE48u;
label_4bfe48:
    // 0x4bfe48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4bfe48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4bfe4c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4bfe4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4bfe50: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4BFE50u;
    {
        const bool branch_taken_0x4bfe50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BFE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFE50u;
            // 0x4bfe54: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfe50) {
            ctx->pc = 0x4BFE24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4bfe24;
        }
    }
    ctx->pc = 0x4BFE58u;
label_4bfe58:
    // 0x4bfe58: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4bfe58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bfe5c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4bfe5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4bfe60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4bfe60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bfe64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4bfe64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bfe68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bfe68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bfe6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bfe6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bfe70: 0x3e00008  jr          $ra
    ctx->pc = 0x4BFE70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BFE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFE70u;
            // 0x4bfe74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BFE78u;
    // 0x4bfe78: 0x0  nop
    ctx->pc = 0x4bfe78u;
    // NOP
    // 0x4bfe7c: 0x0  nop
    ctx->pc = 0x4bfe7cu;
    // NOP
    // 0x4bfe80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4bfe80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4bfe84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4bfe84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4bfe88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bfe88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4bfe8c: 0xc0e3444  jal         func_38D110
    ctx->pc = 0x4BFE8Cu;
    SET_GPR_U32(ctx, 31, 0x4BFE94u);
    ctx->pc = 0x4BFE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFE8Cu;
            // 0x4bfe90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D110u;
    if (runtime->hasFunction(0x38D110u)) {
        auto targetFn = runtime->lookupFunction(0x38D110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFE94u; }
        if (ctx->pc != 0x4BFE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D110_0x38d110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFE94u; }
        if (ctx->pc != 0x4BFE94u) { return; }
    }
    ctx->pc = 0x4BFE94u;
label_4bfe94:
    // 0x4bfe94: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x4bfe94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x4bfe98: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x4bfe98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
    // 0x4bfe9c: 0x34430100  ori         $v1, $v0, 0x100
    ctx->pc = 0x4bfe9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x4bfea0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4bfea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bfea4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4bfea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4bfea8: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x4bfea8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x4bfeac: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4bfeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x4bfeb0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4bfeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4bfeb4: 0xc08bff0  jal         func_22FFC0
    ctx->pc = 0x4BFEB4u;
    SET_GPR_U32(ctx, 31, 0x4BFEBCu);
    ctx->pc = 0x4BFEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFEB4u;
            // 0x4bfeb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFEBCu; }
        if (ctx->pc != 0x4BFEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFEBCu; }
        if (ctx->pc != 0x4BFEBCu) { return; }
    }
    ctx->pc = 0x4BFEBCu;
label_4bfebc:
    // 0x4bfebc: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x4bfebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x4bfec0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4bfec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4bfec4: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BFEC4u;
    {
        const bool branch_taken_0x4bfec4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4bfec4) {
            ctx->pc = 0x4BFEC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFEC4u;
            // 0x4bfec8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BFEE0u;
            goto label_4bfee0;
        }
    }
    ctx->pc = 0x4BFECCu;
    // 0x4bfecc: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x4bfeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x4bfed0: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x4bfed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4bfed4: 0xc122d2c  jal         func_48B4B0
    ctx->pc = 0x4BFED4u;
    SET_GPR_U32(ctx, 31, 0x4BFEDCu);
    ctx->pc = 0x4BFED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFED4u;
            // 0x4bfed8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFEDCu; }
        if (ctx->pc != 0x4BFEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFEDCu; }
        if (ctx->pc != 0x4BFEDCu) { return; }
    }
    ctx->pc = 0x4BFEDCu;
label_4bfedc:
    // 0x4bfedc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4bfedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4bfee0:
    // 0x4bfee0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bfee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bfee4: 0x3e00008  jr          $ra
    ctx->pc = 0x4BFEE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BFEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFEE4u;
            // 0x4bfee8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BFEECu;
    // 0x4bfeec: 0x0  nop
    ctx->pc = 0x4bfeecu;
    // NOP
}
