#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D7CD0
// Address: 0x4d7cd0 - 0x4d7ee0
void sub_004D7CD0_0x4d7cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D7CD0_0x4d7cd0");
#endif

    switch (ctx->pc) {
        case 0x4d7d00u: goto label_4d7d00;
        case 0x4d7d54u: goto label_4d7d54;
        case 0x4d7df0u: goto label_4d7df0;
        case 0x4d7e10u: goto label_4d7e10;
        case 0x4d7e24u: goto label_4d7e24;
        case 0x4d7e30u: goto label_4d7e30;
        case 0x4d7e34u: goto label_4d7e34;
        case 0x4d7e58u: goto label_4d7e58;
        case 0x4d7ea4u: goto label_4d7ea4;
        default: break;
    }

    ctx->pc = 0x4d7cd0u;

    // 0x4d7cd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4d7cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4d7cd4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4d7cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d7cd8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4d7cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4d7cdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4d7cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4d7ce0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d7ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4d7ce4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4d7ce4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7ce8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d7ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4d7cec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d7cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d7cf0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4d7cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7cf4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4d7cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7cf8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x4D7CF8u;
    SET_GPR_U32(ctx, 31, 0x4D7D00u);
    ctx->pc = 0x4D7CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7CF8u;
            // 0x4d7cfc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7D00u; }
        if (ctx->pc != 0x4D7D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7D00u; }
        if (ctx->pc != 0x4D7D00u) { return; }
    }
    ctx->pc = 0x4D7D00u;
label_4d7d00:
    // 0x4d7d00: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4d7d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4d7d04: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4d7d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4d7d08: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4d7d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x4d7d0c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4d7d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x4d7d10: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d7d10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4d7d14: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4d7d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x4d7d18: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4d7d18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4d7d1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4d7d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4d7d20: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4d7d20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x4d7d24: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d7d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d7d28: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4d7d28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x4d7d2c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4d7d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4d7d30: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4d7d30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x4d7d34: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4d7d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x4d7d38: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4d7d38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x4d7d3c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4d7d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x4d7d40: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4d7d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x4d7d44: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4d7d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4d7d48: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4d7d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4d7d4c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x4D7D4Cu;
    SET_GPR_U32(ctx, 31, 0x4D7D54u);
    ctx->pc = 0x4D7D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7D4Cu;
            // 0x4d7d50: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7D54u; }
        if (ctx->pc != 0x4D7D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7D54u; }
        if (ctx->pc != 0x4D7D54u) { return; }
    }
    ctx->pc = 0x4D7D54u;
label_4d7d54:
    // 0x4d7d54: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d7d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4d7d58: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4d7d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x4d7d5c: 0x24632938  addiu       $v1, $v1, 0x2938
    ctx->pc = 0x4d7d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10552));
    // 0x4d7d60: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4d7d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x4d7d64: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4d7d64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x4d7d68: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d7d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d7d6c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d7d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4d7d70: 0xac441d98  sw          $a0, 0x1D98($v0)
    ctx->pc = 0x4d7d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7576), GPR_U32(ctx, 4));
    // 0x4d7d74: 0x24632950  addiu       $v1, $v1, 0x2950
    ctx->pc = 0x4d7d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10576));
    // 0x4d7d78: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d7d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d7d7c: 0x24422988  addiu       $v0, $v0, 0x2988
    ctx->pc = 0x4d7d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10632));
    // 0x4d7d80: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d7d80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4d7d84: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4d7d84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x4d7d88: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4d7d88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x4d7d8c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4d7d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x4d7d90: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4d7d90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x4d7d94: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4d7d94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x4d7d98: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4d7d98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x4d7d9c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4d7d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x4d7da0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4d7da0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x4d7da4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4d7da4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x4d7da8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4d7da8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x4d7dac: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4d7dacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x4d7db0: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x4d7db0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    // 0x4d7db4: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x4d7db4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x4d7db8: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x4d7db8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
    // 0x4d7dbc: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x4d7dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
    // 0x4d7dc0: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x4d7dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
    // 0x4d7dc4: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x4d7dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
    // 0x4d7dc8: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4d7dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x4d7dcc: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x4D7DCCu;
    {
        const bool branch_taken_0x4d7dcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d7dcc) {
            ctx->pc = 0x4D7E68u;
            goto label_4d7e68;
        }
    }
    ctx->pc = 0x4D7DD4u;
    // 0x4d7dd4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x4d7dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x4d7dd8: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x4d7dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4d7ddc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4d7ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x4d7de0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4d7de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4d7de4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4d7de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4d7de8: 0xc040138  jal         func_1004E0
    ctx->pc = 0x4D7DE8u;
    SET_GPR_U32(ctx, 31, 0x4D7DF0u);
    ctx->pc = 0x4D7DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7DE8u;
            // 0x4d7dec: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7DF0u; }
        if (ctx->pc != 0x4D7DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7DF0u; }
        if (ctx->pc != 0x4D7DF0u) { return; }
    }
    ctx->pc = 0x4D7DF0u;
label_4d7df0:
    // 0x4d7df0: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4d7df0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
    // 0x4d7df4: 0x3c06004d  lui         $a2, 0x4D
    ctx->pc = 0x4d7df4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)77 << 16));
    // 0x4d7df8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d7df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7dfc: 0x24a57e90  addiu       $a1, $a1, 0x7E90
    ctx->pc = 0x4d7dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32400));
    // 0x4d7e00: 0x24c673d0  addiu       $a2, $a2, 0x73D0
    ctx->pc = 0x4d7e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29648));
    // 0x4d7e04: 0x24070310  addiu       $a3, $zero, 0x310
    ctx->pc = 0x4d7e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
    // 0x4d7e08: 0xc040840  jal         func_102100
    ctx->pc = 0x4D7E08u;
    SET_GPR_U32(ctx, 31, 0x4D7E10u);
    ctx->pc = 0x4D7E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7E08u;
            // 0x4d7e0c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7E10u; }
        if (ctx->pc != 0x4D7E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7E10u; }
        if (ctx->pc != 0x4D7E10u) { return; }
    }
    ctx->pc = 0x4D7E10u;
label_4d7e10:
    // 0x4d7e10: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4d7e10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x4d7e14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4d7e14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7e18: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4d7e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x4d7e1c: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x4D7E1Cu;
    SET_GPR_U32(ctx, 31, 0x4D7E24u);
    ctx->pc = 0x4D7E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7E1Cu;
            // 0x4d7e20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7E24u; }
        if (ctx->pc != 0x4D7E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7E24u; }
        if (ctx->pc != 0x4D7E24u) { return; }
    }
    ctx->pc = 0x4D7E24u;
label_4d7e24:
    // 0x4d7e24: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4d7e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x4d7e28: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x4D7E28u;
    SET_GPR_U32(ctx, 31, 0x4D7E30u);
    ctx->pc = 0x4D7E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7E28u;
            // 0x4d7e2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7E30u; }
        if (ctx->pc != 0x4D7E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7E30u; }
        if (ctx->pc != 0x4D7E30u) { return; }
    }
    ctx->pc = 0x4D7E30u;
label_4d7e30:
    // 0x4d7e30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4d7e30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d7e34:
    // 0x4d7e34: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4d7e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x4d7e38: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4d7e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x4d7e3c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4d7e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x4d7e40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4d7e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d7e44: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4d7e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x4d7e48: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4d7e48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x4d7e4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d7e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4d7e50: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x4D7E50u;
    SET_GPR_U32(ctx, 31, 0x4D7E58u);
    ctx->pc = 0x4D7E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7E50u;
            // 0x4d7e54: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7E58u; }
        if (ctx->pc != 0x4D7E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7E58u; }
        if (ctx->pc != 0x4D7E58u) { return; }
    }
    ctx->pc = 0x4D7E58u;
label_4d7e58:
    // 0x4d7e58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4d7e58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4d7e5c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4d7e5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4d7e60: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4D7E60u;
    {
        const bool branch_taken_0x4d7e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D7E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7E60u;
            // 0x4d7e64: 0x26520310  addiu       $s2, $s2, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7e60) {
            ctx->pc = 0x4D7E34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d7e34;
        }
    }
    ctx->pc = 0x4D7E68u;
label_4d7e68:
    // 0x4d7e68: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4d7e68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7e6c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4d7e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d7e70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4d7e70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d7e74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d7e74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d7e78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d7e78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d7e7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d7e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d7e80: 0x3e00008  jr          $ra
    ctx->pc = 0x4D7E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D7E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7E80u;
            // 0x4d7e84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D7E88u;
    // 0x4d7e88: 0x0  nop
    ctx->pc = 0x4d7e88u;
    // NOP
    // 0x4d7e8c: 0x0  nop
    ctx->pc = 0x4d7e8cu;
    // NOP
    // 0x4d7e90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d7e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4d7e94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d7e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4d7e98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d7e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d7e9c: 0xc12e6bc  jal         func_4B9AF0
    ctx->pc = 0x4D7E9Cu;
    SET_GPR_U32(ctx, 31, 0x4D7EA4u);
    ctx->pc = 0x4D7EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7E9Cu;
            // 0x4d7ea0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9AF0u;
    if (runtime->hasFunction(0x4B9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x4B9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7EA4u; }
        if (ctx->pc != 0x4D7EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9AF0_0x4b9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7EA4u; }
        if (ctx->pc != 0x4D7EA4u) { return; }
    }
    ctx->pc = 0x4D7EA4u;
label_4d7ea4:
    // 0x4d7ea4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d7ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d7ea8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d7ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4d7eac: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x4d7eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
    // 0x4d7eb0: 0x24632a30  addiu       $v1, $v1, 0x2A30
    ctx->pc = 0x4d7eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10800));
    // 0x4d7eb4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4d7eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4d7eb8: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4d7eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x4d7ebc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d7ebcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7ec0: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x4d7ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x4d7ec4: 0xae000300  sw          $zero, 0x300($s0)
    ctx->pc = 0x4d7ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 0));
    // 0x4d7ec8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d7ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d7ecc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d7eccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d7ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x4D7ED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D7ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7ED0u;
            // 0x4d7ed4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D7ED8u;
    // 0x4d7ed8: 0x0  nop
    ctx->pc = 0x4d7ed8u;
    // NOP
    // 0x4d7edc: 0x0  nop
    ctx->pc = 0x4d7edcu;
    // NOP
}
