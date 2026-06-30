#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053EBB0
// Address: 0x53ebb0 - 0x53ee20
void sub_0053EBB0_0x53ebb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053EBB0_0x53ebb0");
#endif

    switch (ctx->pc) {
        case 0x53ebe0u: goto label_53ebe0;
        case 0x53ec34u: goto label_53ec34;
        case 0x53ecc8u: goto label_53ecc8;
        case 0x53ece8u: goto label_53ece8;
        case 0x53ecfcu: goto label_53ecfc;
        case 0x53ed08u: goto label_53ed08;
        case 0x53ed0cu: goto label_53ed0c;
        case 0x53ed30u: goto label_53ed30;
        case 0x53edb0u: goto label_53edb0;
        case 0x53edb8u: goto label_53edb8;
        default: break;
    }

    ctx->pc = 0x53ebb0u;

    // 0x53ebb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x53ebb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x53ebb4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x53ebb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x53ebb8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x53ebb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x53ebbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x53ebbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x53ebc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x53ebc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x53ebc4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x53ebc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53ebc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53ebc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x53ebcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53ebccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x53ebd0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x53ebd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53ebd4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x53ebd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53ebd8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x53EBD8u;
    SET_GPR_U32(ctx, 31, 0x53EBE0u);
    ctx->pc = 0x53EBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EBD8u;
            // 0x53ebdc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EBE0u; }
        if (ctx->pc != 0x53EBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EBE0u; }
        if (ctx->pc != 0x53EBE0u) { return; }
    }
    ctx->pc = 0x53EBE0u;
label_53ebe0:
    // 0x53ebe0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x53ebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x53ebe4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x53ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x53ebe8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x53ebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x53ebec: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x53ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x53ebf0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x53ebf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x53ebf4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x53ebf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x53ebf8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x53ebf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x53ebfc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x53ebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x53ec00: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x53ec00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x53ec04: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x53ec08: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x53ec08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x53ec0c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x53ec0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x53ec10: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x53ec10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x53ec14: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x53ec14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x53ec18: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x53ec18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x53ec1c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x53ec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x53ec20: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x53ec20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x53ec24: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x53ec24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x53ec28: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x53ec28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x53ec2c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x53EC2Cu;
    SET_GPR_U32(ctx, 31, 0x53EC34u);
    ctx->pc = 0x53EC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EC2Cu;
            // 0x53ec30: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EC34u; }
        if (ctx->pc != 0x53EC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EC34u; }
        if (ctx->pc != 0x53EC34u) { return; }
    }
    ctx->pc = 0x53EC34u;
label_53ec34:
    // 0x53ec34: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x53ec34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x53ec38: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x53ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x53ec3c: 0x246374f0  addiu       $v1, $v1, 0x74F0
    ctx->pc = 0x53ec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29936));
    // 0x53ec40: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x53ec40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x53ec44: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x53ec44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x53ec48: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x53ec4c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x53ec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x53ec50: 0xac441d90  sw          $a0, 0x1D90($v0)
    ctx->pc = 0x53ec50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7568), GPR_U32(ctx, 4));
    // 0x53ec54: 0x24637500  addiu       $v1, $v1, 0x7500
    ctx->pc = 0x53ec54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29952));
    // 0x53ec58: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x53ec58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x53ec5c: 0x24427538  addiu       $v0, $v0, 0x7538
    ctx->pc = 0x53ec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30008));
    // 0x53ec60: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x53ec60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x53ec64: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x53ec64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x53ec68: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x53ec68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x53ec6c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x53ec6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x53ec70: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x53ec70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x53ec74: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x53ec74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x53ec78: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x53ec78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x53ec7c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x53ec7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x53ec80: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x53ec80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x53ec84: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x53ec84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x53ec88: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x53ec88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x53ec8c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x53ec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x53ec90: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x53ec90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    // 0x53ec94: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x53ec94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x53ec98: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x53ec98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
    // 0x53ec9c: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x53ec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
    // 0x53eca0: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x53eca0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
    // 0x53eca4: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x53eca4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
    // 0x53eca8: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x53eca8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x53ecac: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x53ECACu;
    {
        const bool branch_taken_0x53ecac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x53ecac) {
            ctx->pc = 0x53ED40u;
            goto label_53ed40;
        }
    }
    ctx->pc = 0x53ECB4u;
    // 0x53ecb4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x53ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x53ecb8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x53ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x53ecbc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x53ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x53ecc0: 0xc040138  jal         func_1004E0
    ctx->pc = 0x53ECC0u;
    SET_GPR_U32(ctx, 31, 0x53ECC8u);
    ctx->pc = 0x53ECC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53ECC0u;
            // 0x53ecc4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53ECC8u; }
        if (ctx->pc != 0x53ECC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53ECC8u; }
        if (ctx->pc != 0x53ECC8u) { return; }
    }
    ctx->pc = 0x53ECC8u;
label_53ecc8:
    // 0x53ecc8: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x53ecc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x53eccc: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x53ecccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
    // 0x53ecd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x53ecd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53ecd4: 0x24a5ed60  addiu       $a1, $a1, -0x12A0
    ctx->pc = 0x53ecd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962528));
    // 0x53ecd8: 0x24c6dcb0  addiu       $a2, $a2, -0x2350
    ctx->pc = 0x53ecd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958256));
    // 0x53ecdc: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x53ecdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x53ece0: 0xc040840  jal         func_102100
    ctx->pc = 0x53ECE0u;
    SET_GPR_U32(ctx, 31, 0x53ECE8u);
    ctx->pc = 0x53ECE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53ECE0u;
            // 0x53ece4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53ECE8u; }
        if (ctx->pc != 0x53ECE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53ECE8u; }
        if (ctx->pc != 0x53ECE8u) { return; }
    }
    ctx->pc = 0x53ECE8u;
label_53ece8:
    // 0x53ece8: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x53ece8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x53ecec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x53ececu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53ecf0: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x53ecf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x53ecf4: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x53ECF4u;
    SET_GPR_U32(ctx, 31, 0x53ECFCu);
    ctx->pc = 0x53ECF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53ECF4u;
            // 0x53ecf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53ECFCu; }
        if (ctx->pc != 0x53ECFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53ECFCu; }
        if (ctx->pc != 0x53ECFCu) { return; }
    }
    ctx->pc = 0x53ECFCu;
label_53ecfc:
    // 0x53ecfc: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x53ecfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x53ed00: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x53ED00u;
    SET_GPR_U32(ctx, 31, 0x53ED08u);
    ctx->pc = 0x53ED04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53ED00u;
            // 0x53ed04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53ED08u; }
        if (ctx->pc != 0x53ED08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53ED08u; }
        if (ctx->pc != 0x53ED08u) { return; }
    }
    ctx->pc = 0x53ED08u;
label_53ed08:
    // 0x53ed08: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x53ed08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53ed0c:
    // 0x53ed0c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x53ed0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x53ed10: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x53ed10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x53ed14: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x53ed14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x53ed18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x53ed18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x53ed1c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x53ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x53ed20: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x53ed20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x53ed24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x53ed24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x53ed28: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x53ED28u;
    SET_GPR_U32(ctx, 31, 0x53ED30u);
    ctx->pc = 0x53ED2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53ED28u;
            // 0x53ed2c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53ED30u; }
        if (ctx->pc != 0x53ED30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53ED30u; }
        if (ctx->pc != 0x53ED30u) { return; }
    }
    ctx->pc = 0x53ED30u;
label_53ed30:
    // 0x53ed30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x53ed30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x53ed34: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x53ed34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x53ed38: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x53ED38u;
    {
        const bool branch_taken_0x53ed38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x53ED3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53ED38u;
            // 0x53ed3c: 0x26520070  addiu       $s2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53ed38) {
            ctx->pc = 0x53ED0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_53ed0c;
        }
    }
    ctx->pc = 0x53ED40u;
label_53ed40:
    // 0x53ed40: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x53ed40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53ed44: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x53ed44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x53ed48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x53ed48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x53ed4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x53ed4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x53ed50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53ed50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x53ed54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53ed54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x53ed58: 0x3e00008  jr          $ra
    ctx->pc = 0x53ED58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53ED5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53ED58u;
            // 0x53ed5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53ED60u;
    // 0x53ed60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x53ed60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x53ed64: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x53ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x53ed68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x53ed68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x53ed6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x53ed6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x53ed70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53ed70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x53ed74: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x53ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x53ed78: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x53ed78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x53ed7c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x53ed7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x53ed80: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x53ed80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x53ed84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x53ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x53ed88: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x53ed88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x53ed8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x53ed8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53ed90: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x53ed90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x53ed94: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x53ed94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x53ed98: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x53ed98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x53ed9c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x53ed9cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x53eda0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x53eda0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x53eda4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x53eda4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x53eda8: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x53EDA8u;
    SET_GPR_U32(ctx, 31, 0x53EDB0u);
    ctx->pc = 0x53EDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EDA8u;
            // 0x53edac: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EDB0u; }
        if (ctx->pc != 0x53EDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EDB0u; }
        if (ctx->pc != 0x53EDB0u) { return; }
    }
    ctx->pc = 0x53EDB0u;
label_53edb0:
    // 0x53edb0: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x53EDB0u;
    SET_GPR_U32(ctx, 31, 0x53EDB8u);
    ctx->pc = 0x53EDB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EDB0u;
            // 0x53edb4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EDB8u; }
        if (ctx->pc != 0x53EDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EDB8u; }
        if (ctx->pc != 0x53EDB8u) { return; }
    }
    ctx->pc = 0x53EDB8u;
label_53edb8:
    // 0x53edb8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x53edbc: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x53edbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x53edc0: 0x8c470e80  lw          $a3, 0xE80($v0)
    ctx->pc = 0x53edc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x53edc4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x53edc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x53edc8: 0x24c6c560  addiu       $a2, $a2, -0x3AA0
    ctx->pc = 0x53edc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952288));
    // 0x53edcc: 0x24a574b0  addiu       $a1, $a1, 0x74B0
    ctx->pc = 0x53edccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29872));
    // 0x53edd0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x53edd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x53edd4: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x53edd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x53edd8: 0x8ce70788  lw          $a3, 0x788($a3)
    ctx->pc = 0x53edd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1928)));
    // 0x53eddc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x53eddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53ede0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x53ede0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x53ede4: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x53ede4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x53ede8: 0xa206004d  sb          $a2, 0x4D($s0)
    ctx->pc = 0x53ede8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 6));
    // 0x53edec: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x53edecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x53edf0: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x53edf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x53edf4: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x53edf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x53edf8: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x53edf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x53edfc: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x53edfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x53ee00: 0xa2000064  sb          $zero, 0x64($s0)
    ctx->pc = 0x53ee00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x53ee04: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x53ee04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x53ee08: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x53ee08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x53ee0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x53ee0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x53ee10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53ee10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x53ee14: 0x3e00008  jr          $ra
    ctx->pc = 0x53EE14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53EE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53EE14u;
            // 0x53ee18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53EE1Cu;
    // 0x53ee1c: 0x0  nop
    ctx->pc = 0x53ee1cu;
    // NOP
}
