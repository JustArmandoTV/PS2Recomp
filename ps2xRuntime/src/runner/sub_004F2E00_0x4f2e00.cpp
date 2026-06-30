#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F2E00
// Address: 0x4f2e00 - 0x4f2fc0
void sub_004F2E00_0x4f2e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2E00_0x4f2e00");
#endif

    switch (ctx->pc) {
        case 0x4f2e30u: goto label_4f2e30;
        case 0x4f2e84u: goto label_4f2e84;
        case 0x4f2f20u: goto label_4f2f20;
        case 0x4f2f40u: goto label_4f2f40;
        case 0x4f2f54u: goto label_4f2f54;
        case 0x4f2f60u: goto label_4f2f60;
        case 0x4f2f64u: goto label_4f2f64;
        case 0x4f2f88u: goto label_4f2f88;
        default: break;
    }

    ctx->pc = 0x4f2e00u;

    // 0x4f2e00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4f2e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4f2e04: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4f2e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4f2e08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4f2e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4f2e0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4f2e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4f2e10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f2e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4f2e14: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4f2e14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2e18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f2e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4f2e1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f2e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4f2e20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4f2e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2e24: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4f2e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2e28: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x4F2E28u;
    SET_GPR_U32(ctx, 31, 0x4F2E30u);
    ctx->pc = 0x4F2E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2E28u;
            // 0x4f2e2c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2E30u; }
        if (ctx->pc != 0x4F2E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2E30u; }
        if (ctx->pc != 0x4F2E30u) { return; }
    }
    ctx->pc = 0x4F2E30u;
label_4f2e30:
    // 0x4f2e30: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4f2e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4f2e34: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f2e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4f2e38: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4f2e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x4f2e3c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4f2e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x4f2e40: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4f2e40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4f2e44: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4f2e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x4f2e48: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4f2e48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4f2e4c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4f2e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f2e50: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4f2e50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x4f2e54: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f2e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4f2e58: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4f2e58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x4f2e5c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4f2e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4f2e60: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4f2e60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x4f2e64: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4f2e64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x4f2e68: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4f2e68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x4f2e6c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4f2e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x4f2e70: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4f2e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x4f2e74: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4f2e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4f2e78: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4f2e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4f2e7c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x4F2E7Cu;
    SET_GPR_U32(ctx, 31, 0x4F2E84u);
    ctx->pc = 0x4F2E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2E7Cu;
            // 0x4f2e80: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2E84u; }
        if (ctx->pc != 0x4F2E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2E84u; }
        if (ctx->pc != 0x4F2E84u) { return; }
    }
    ctx->pc = 0x4F2E84u;
label_4f2e84:
    // 0x4f2e84: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f2e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4f2e88: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4f2e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x4f2e8c: 0x24634228  addiu       $v1, $v1, 0x4228
    ctx->pc = 0x4f2e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16936));
    // 0x4f2e90: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4f2e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x4f2e94: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4f2e94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x4f2e98: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4f2e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4f2e9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f2e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4f2ea0: 0xac44aae0  sw          $a0, -0x5520($v0)
    ctx->pc = 0x4f2ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945504), GPR_U32(ctx, 4));
    // 0x4f2ea4: 0x24634240  addiu       $v1, $v1, 0x4240
    ctx->pc = 0x4f2ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16960));
    // 0x4f2ea8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f2ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4f2eac: 0x24424278  addiu       $v0, $v0, 0x4278
    ctx->pc = 0x4f2eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17016));
    // 0x4f2eb0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4f2eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4f2eb4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4f2eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x4f2eb8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4f2eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x4f2ebc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4f2ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x4f2ec0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4f2ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x4f2ec4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4f2ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x4f2ec8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4f2ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x4f2ecc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4f2eccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x4f2ed0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4f2ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x4f2ed4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4f2ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x4f2ed8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4f2ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x4f2edc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4f2edcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x4f2ee0: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x4f2ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    // 0x4f2ee4: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x4f2ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x4f2ee8: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x4f2ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
    // 0x4f2eec: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x4f2eecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
    // 0x4f2ef0: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x4f2ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
    // 0x4f2ef4: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x4f2ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
    // 0x4f2ef8: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4f2ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x4f2efc: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x4F2EFCu;
    {
        const bool branch_taken_0x4f2efc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f2efc) {
            ctx->pc = 0x4F2F98u;
            goto label_4f2f98;
        }
    }
    ctx->pc = 0x4F2F04u;
    // 0x4f2f04: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x4f2f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x4f2f08: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x4f2f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4f2f0c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4f2f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4f2f10: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4f2f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f2f14: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4f2f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x4f2f18: 0xc040138  jal         func_1004E0
    ctx->pc = 0x4F2F18u;
    SET_GPR_U32(ctx, 31, 0x4F2F20u);
    ctx->pc = 0x4F2F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2F18u;
            // 0x4f2f1c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2F20u; }
        if (ctx->pc != 0x4F2F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2F20u; }
        if (ctx->pc != 0x4F2F20u) { return; }
    }
    ctx->pc = 0x4F2F20u;
label_4f2f20:
    // 0x4f2f20: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x4f2f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x4f2f24: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x4f2f24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x4f2f28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4f2f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2f2c: 0x24a538a0  addiu       $a1, $a1, 0x38A0
    ctx->pc = 0x4f2f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14496));
    // 0x4f2f30: 0x24c637d0  addiu       $a2, $a2, 0x37D0
    ctx->pc = 0x4f2f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14288));
    // 0x4f2f34: 0x240702a0  addiu       $a3, $zero, 0x2A0
    ctx->pc = 0x4f2f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x4f2f38: 0xc040840  jal         func_102100
    ctx->pc = 0x4F2F38u;
    SET_GPR_U32(ctx, 31, 0x4F2F40u);
    ctx->pc = 0x4F2F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2F38u;
            // 0x4f2f3c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2F40u; }
        if (ctx->pc != 0x4F2F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2F40u; }
        if (ctx->pc != 0x4F2F40u) { return; }
    }
    ctx->pc = 0x4F2F40u;
label_4f2f40:
    // 0x4f2f40: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4f2f40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x4f2f44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4f2f44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2f48: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4f2f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x4f2f4c: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x4F2F4Cu;
    SET_GPR_U32(ctx, 31, 0x4F2F54u);
    ctx->pc = 0x4F2F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2F4Cu;
            // 0x4f2f50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2F54u; }
        if (ctx->pc != 0x4F2F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2F54u; }
        if (ctx->pc != 0x4F2F54u) { return; }
    }
    ctx->pc = 0x4F2F54u;
label_4f2f54:
    // 0x4f2f54: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4f2f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x4f2f58: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x4F2F58u;
    SET_GPR_U32(ctx, 31, 0x4F2F60u);
    ctx->pc = 0x4F2F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2F58u;
            // 0x4f2f5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2F60u; }
        if (ctx->pc != 0x4F2F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2F60u; }
        if (ctx->pc != 0x4F2F60u) { return; }
    }
    ctx->pc = 0x4F2F60u;
label_4f2f60:
    // 0x4f2f60: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4f2f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f2f64:
    // 0x4f2f64: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4f2f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x4f2f68: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4f2f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x4f2f6c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4f2f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x4f2f70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4f2f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f2f74: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4f2f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x4f2f78: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4f2f78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x4f2f7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4f2f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4f2f80: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x4F2F80u;
    SET_GPR_U32(ctx, 31, 0x4F2F88u);
    ctx->pc = 0x4F2F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2F80u;
            // 0x4f2f84: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2F88u; }
        if (ctx->pc != 0x4F2F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F2F88u; }
        if (ctx->pc != 0x4F2F88u) { return; }
    }
    ctx->pc = 0x4F2F88u;
label_4f2f88:
    // 0x4f2f88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4f2f88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4f2f8c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4f2f8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4f2f90: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4F2F90u;
    {
        const bool branch_taken_0x4f2f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F2F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2F90u;
            // 0x4f2f94: 0x265202a0  addiu       $s2, $s2, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2f90) {
            ctx->pc = 0x4F2F64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f2f64;
        }
    }
    ctx->pc = 0x4F2F98u;
label_4f2f98:
    // 0x4f2f98: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4f2f98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2f9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4f2f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4f2fa0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4f2fa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f2fa4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f2fa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f2fa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f2fa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f2fac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f2facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f2fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x4F2FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F2FB0u;
            // 0x4f2fb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F2FB8u;
    // 0x4f2fb8: 0x0  nop
    ctx->pc = 0x4f2fb8u;
    // NOP
    // 0x4f2fbc: 0x0  nop
    ctx->pc = 0x4f2fbcu;
    // NOP
}
