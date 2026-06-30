#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F1BA0
// Address: 0x4f1ba0 - 0x4f1e30
void sub_004F1BA0_0x4f1ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F1BA0_0x4f1ba0");
#endif

    switch (ctx->pc) {
        case 0x4f1bd0u: goto label_4f1bd0;
        case 0x4f1c24u: goto label_4f1c24;
        case 0x4f1ca0u: goto label_4f1ca0;
        case 0x4f1cc0u: goto label_4f1cc0;
        case 0x4f1cd4u: goto label_4f1cd4;
        case 0x4f1ce0u: goto label_4f1ce0;
        case 0x4f1ce4u: goto label_4f1ce4;
        case 0x4f1d08u: goto label_4f1d08;
        case 0x4f1d54u: goto label_4f1d54;
        case 0x4f1d5cu: goto label_4f1d5c;
        case 0x4f1d7cu: goto label_4f1d7c;
        case 0x4f1d84u: goto label_4f1d84;
        case 0x4f1dc8u: goto label_4f1dc8;
        case 0x4f1dd0u: goto label_4f1dd0;
        default: break;
    }

    ctx->pc = 0x4f1ba0u;

    // 0x4f1ba0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4f1ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4f1ba4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4f1ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4f1ba8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4f1ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4f1bac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4f1bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4f1bb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f1bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4f1bb4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4f1bb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f1bb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f1bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4f1bbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f1bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4f1bc0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4f1bc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f1bc4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4f1bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f1bc8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x4F1BC8u;
    SET_GPR_U32(ctx, 31, 0x4F1BD0u);
    ctx->pc = 0x4F1BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1BC8u;
            // 0x4f1bcc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1BD0u; }
        if (ctx->pc != 0x4F1BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1BD0u; }
        if (ctx->pc != 0x4F1BD0u) { return; }
    }
    ctx->pc = 0x4F1BD0u;
label_4f1bd0:
    // 0x4f1bd0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4f1bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4f1bd4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f1bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4f1bd8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4f1bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x4f1bdc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4f1bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x4f1be0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4f1be0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4f1be4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4f1be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x4f1be8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4f1be8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4f1bec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4f1becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f1bf0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4f1bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x4f1bf4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f1bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4f1bf8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4f1bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x4f1bfc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4f1bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4f1c00: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4f1c00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x4f1c04: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4f1c04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x4f1c08: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4f1c08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x4f1c0c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4f1c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x4f1c10: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4f1c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x4f1c14: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4f1c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4f1c18: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4f1c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4f1c1c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x4F1C1Cu;
    SET_GPR_U32(ctx, 31, 0x4F1C24u);
    ctx->pc = 0x4F1C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1C1Cu;
            // 0x4f1c20: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1C24u; }
        if (ctx->pc != 0x4F1C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1C24u; }
        if (ctx->pc != 0x4F1C24u) { return; }
    }
    ctx->pc = 0x4F1C24u;
label_4f1c24:
    // 0x4f1c24: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f1c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4f1c28: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4f1c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x4f1c2c: 0x24634088  addiu       $v1, $v1, 0x4088
    ctx->pc = 0x4f1c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16520));
    // 0x4f1c30: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4f1c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x4f1c34: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4f1c34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x4f1c38: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4f1c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4f1c3c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f1c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4f1c40: 0xac44aa58  sw          $a0, -0x55A8($v0)
    ctx->pc = 0x4f1c40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945368), GPR_U32(ctx, 4));
    // 0x4f1c44: 0x246340a0  addiu       $v1, $v1, 0x40A0
    ctx->pc = 0x4f1c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16544));
    // 0x4f1c48: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f1c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4f1c4c: 0x244240d8  addiu       $v0, $v0, 0x40D8
    ctx->pc = 0x4f1c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16600));
    // 0x4f1c50: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4f1c50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4f1c54: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4f1c54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x4f1c58: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4f1c58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x4f1c5c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4f1c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x4f1c60: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4f1c60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x4f1c64: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4f1c64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x4f1c68: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4f1c68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x4f1c6c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4f1c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x4f1c70: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4f1c70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x4f1c74: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4f1c74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x4f1c78: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4f1c78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x4f1c7c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4f1c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x4f1c80: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4f1c80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x4f1c84: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x4F1C84u;
    {
        const bool branch_taken_0x4f1c84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f1c84) {
            ctx->pc = 0x4F1D18u;
            goto label_4f1d18;
        }
    }
    ctx->pc = 0x4F1C8Cu;
    // 0x4f1c8c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x4f1c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x4f1c90: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x4f1c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4f1c94: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4f1c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x4f1c98: 0xc040138  jal         func_1004E0
    ctx->pc = 0x4F1C98u;
    SET_GPR_U32(ctx, 31, 0x4F1CA0u);
    ctx->pc = 0x4F1C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1C98u;
            // 0x4f1c9c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1CA0u; }
        if (ctx->pc != 0x4F1CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1CA0u; }
        if (ctx->pc != 0x4F1CA0u) { return; }
    }
    ctx->pc = 0x4F1CA0u;
label_4f1ca0:
    // 0x4f1ca0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x4f1ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x4f1ca4: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x4f1ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x4f1ca8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4f1ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f1cac: 0x24a51d40  addiu       $a1, $a1, 0x1D40
    ctx->pc = 0x4f1cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7488));
    // 0x4f1cb0: 0x24c613c0  addiu       $a2, $a2, 0x13C0
    ctx->pc = 0x4f1cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5056));
    // 0x4f1cb4: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x4f1cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x4f1cb8: 0xc040840  jal         func_102100
    ctx->pc = 0x4F1CB8u;
    SET_GPR_U32(ctx, 31, 0x4F1CC0u);
    ctx->pc = 0x4F1CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1CB8u;
            // 0x4f1cbc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1CC0u; }
        if (ctx->pc != 0x4F1CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1CC0u; }
        if (ctx->pc != 0x4F1CC0u) { return; }
    }
    ctx->pc = 0x4F1CC0u;
label_4f1cc0:
    // 0x4f1cc0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4f1cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x4f1cc4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4f1cc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f1cc8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4f1cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x4f1ccc: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x4F1CCCu;
    SET_GPR_U32(ctx, 31, 0x4F1CD4u);
    ctx->pc = 0x4F1CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1CCCu;
            // 0x4f1cd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1CD4u; }
        if (ctx->pc != 0x4F1CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1CD4u; }
        if (ctx->pc != 0x4F1CD4u) { return; }
    }
    ctx->pc = 0x4F1CD4u;
label_4f1cd4:
    // 0x4f1cd4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4f1cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x4f1cd8: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x4F1CD8u;
    SET_GPR_U32(ctx, 31, 0x4F1CE0u);
    ctx->pc = 0x4F1CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1CD8u;
            // 0x4f1cdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1CE0u; }
        if (ctx->pc != 0x4F1CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1CE0u; }
        if (ctx->pc != 0x4F1CE0u) { return; }
    }
    ctx->pc = 0x4F1CE0u;
label_4f1ce0:
    // 0x4f1ce0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4f1ce0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f1ce4:
    // 0x4f1ce4: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4f1ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x4f1ce8: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4f1ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x4f1cec: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4f1cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x4f1cf0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4f1cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f1cf4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4f1cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x4f1cf8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4f1cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x4f1cfc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4f1cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4f1d00: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x4F1D00u;
    SET_GPR_U32(ctx, 31, 0x4F1D08u);
    ctx->pc = 0x4F1D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1D00u;
            // 0x4f1d04: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1D08u; }
        if (ctx->pc != 0x4F1D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1D08u; }
        if (ctx->pc != 0x4F1D08u) { return; }
    }
    ctx->pc = 0x4F1D08u;
label_4f1d08:
    // 0x4f1d08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4f1d08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4f1d0c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4f1d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4f1d10: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4F1D10u;
    {
        const bool branch_taken_0x4f1d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F1D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1D10u;
            // 0x4f1d14: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1d10) {
            ctx->pc = 0x4F1CE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f1ce4;
        }
    }
    ctx->pc = 0x4F1D18u;
label_4f1d18:
    // 0x4f1d18: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4f1d18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f1d1c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4f1d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4f1d20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4f1d20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f1d24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f1d24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f1d28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f1d28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f1d2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f1d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f1d30: 0x3e00008  jr          $ra
    ctx->pc = 0x4F1D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F1D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1D30u;
            // 0x4f1d34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F1D38u;
    // 0x4f1d38: 0x0  nop
    ctx->pc = 0x4f1d38u;
    // NOP
    // 0x4f1d3c: 0x0  nop
    ctx->pc = 0x4f1d3cu;
    // NOP
    // 0x4f1d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f1d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f1d44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f1d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4f1d48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f1d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4f1d4c: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x4F1D4Cu;
    SET_GPR_U32(ctx, 31, 0x4F1D54u);
    ctx->pc = 0x4F1D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1D4Cu;
            // 0x4f1d50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1D54u; }
        if (ctx->pc != 0x4F1D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1D54u; }
        if (ctx->pc != 0x4F1D54u) { return; }
    }
    ctx->pc = 0x4F1D54u;
label_4f1d54:
    // 0x4f1d54: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x4F1D54u;
    SET_GPR_U32(ctx, 31, 0x4F1D5Cu);
    ctx->pc = 0x4F1D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1D54u;
            // 0x4f1d58: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1D5Cu; }
        if (ctx->pc != 0x4F1D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1D5Cu; }
        if (ctx->pc != 0x4F1D5Cu) { return; }
    }
    ctx->pc = 0x4F1D5Cu;
label_4f1d5c:
    // 0x4f1d5c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4f1d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4f1d60: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f1d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4f1d64: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4f1d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x4f1d68: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4f1d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x4f1d6c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f1d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f1d70: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4f1d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x4f1d74: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x4F1D74u;
    SET_GPR_U32(ctx, 31, 0x4F1D7Cu);
    ctx->pc = 0x4F1D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1D74u;
            // 0x4f1d78: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1D7Cu; }
        if (ctx->pc != 0x4F1D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1D7Cu; }
        if (ctx->pc != 0x4F1D7Cu) { return; }
    }
    ctx->pc = 0x4F1D7Cu;
label_4f1d7c:
    // 0x4f1d7c: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x4F1D7Cu;
    SET_GPR_U32(ctx, 31, 0x4F1D84u);
    ctx->pc = 0x4F1D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1D7Cu;
            // 0x4f1d80: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1D84u; }
        if (ctx->pc != 0x4F1D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1D84u; }
        if (ctx->pc != 0x4F1D84u) { return; }
    }
    ctx->pc = 0x4F1D84u;
label_4f1d84:
    // 0x4f1d84: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4f1d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x4f1d88: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x4f1d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x4f1d8c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x4f1d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x4f1d90: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x4f1d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x4f1d94: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x4f1d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x4f1d98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4f1d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f1d9c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x4f1d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x4f1da0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4f1da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f1da4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x4f1da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x4f1da8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x4f1da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x4f1dac: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x4f1dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x4f1db0: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x4f1db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x4f1db4: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x4f1db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x4f1db8: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x4f1db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x4f1dbc: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x4f1dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x4f1dc0: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x4F1DC0u;
    SET_GPR_U32(ctx, 31, 0x4F1DC8u);
    ctx->pc = 0x4F1DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1DC0u;
            // 0x4f1dc4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1DC8u; }
        if (ctx->pc != 0x4F1DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1DC8u; }
        if (ctx->pc != 0x4F1DC8u) { return; }
    }
    ctx->pc = 0x4F1DC8u;
label_4f1dc8:
    // 0x4f1dc8: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x4F1DC8u;
    SET_GPR_U32(ctx, 31, 0x4F1DD0u);
    ctx->pc = 0x4F1DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1DC8u;
            // 0x4f1dcc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1DD0u; }
        if (ctx->pc != 0x4F1DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1DD0u; }
        if (ctx->pc != 0x4F1DD0u) { return; }
    }
    ctx->pc = 0x4F1DD0u;
label_4f1dd0:
    // 0x4f1dd0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4f1dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x4f1dd4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x4f1dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x4f1dd8: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x4f1dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x4f1ddc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x4f1ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x4f1de0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4f1de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f1de4: 0x8e0600c8  lw          $a2, 0xC8($s0)
    ctx->pc = 0x4f1de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x4f1de8: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x4f1de8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f1dec: 0x24a54140  addiu       $a1, $a1, 0x4140
    ctx->pc = 0x4f1decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16704));
    // 0x4f1df0: 0x24844180  addiu       $a0, $a0, 0x4180
    ctx->pc = 0x4f1df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16768));
    // 0x4f1df4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4f1df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f1df8: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x4f1df8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4f1dfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4f1dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f1e00: 0xae0600c8  sw          $a2, 0xC8($s0)
    ctx->pc = 0x4f1e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 6));
    // 0x4f1e04: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4f1e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4f1e08: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x4f1e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x4f1e0c: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x4f1e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x4f1e10: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x4f1e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x4f1e14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f1e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f1e18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f1e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f1e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F1E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F1E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1E1Cu;
            // 0x4f1e20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F1E24u;
    // 0x4f1e24: 0x0  nop
    ctx->pc = 0x4f1e24u;
    // NOP
    // 0x4f1e28: 0x0  nop
    ctx->pc = 0x4f1e28u;
    // NOP
    // 0x4f1e2c: 0x0  nop
    ctx->pc = 0x4f1e2cu;
    // NOP
}
