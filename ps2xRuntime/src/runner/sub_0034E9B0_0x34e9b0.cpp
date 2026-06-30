#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034E9B0
// Address: 0x34e9b0 - 0x34ec70
void sub_0034E9B0_0x34e9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E9B0_0x34e9b0");
#endif

    switch (ctx->pc) {
        case 0x34e9e0u: goto label_34e9e0;
        case 0x34ea34u: goto label_34ea34;
        case 0x34eab8u: goto label_34eab8;
        case 0x34ead8u: goto label_34ead8;
        case 0x34eaecu: goto label_34eaec;
        case 0x34eaf8u: goto label_34eaf8;
        case 0x34eafcu: goto label_34eafc;
        case 0x34eb20u: goto label_34eb20;
        case 0x34eba0u: goto label_34eba0;
        case 0x34eba8u: goto label_34eba8;
        case 0x34ebe4u: goto label_34ebe4;
        case 0x34ec58u: goto label_34ec58;
        default: break;
    }

    ctx->pc = 0x34e9b0u;

    // 0x34e9b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x34e9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x34e9b4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x34e9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34e9b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34e9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34e9bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34e9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34e9c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34e9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34e9c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x34e9c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e9c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34e9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34e9cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34e9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34e9d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x34e9d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e9d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x34e9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e9d8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x34E9D8u;
    SET_GPR_U32(ctx, 31, 0x34E9E0u);
    ctx->pc = 0x34E9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E9D8u;
            // 0x34e9dc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E9E0u; }
        if (ctx->pc != 0x34E9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E9E0u; }
        if (ctx->pc != 0x34E9E0u) { return; }
    }
    ctx->pc = 0x34E9E0u;
label_34e9e0:
    // 0x34e9e0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x34e9e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x34e9e8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x34e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x34e9ec: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x34e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x34e9f0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x34e9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x34e9f4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x34e9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x34e9f8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x34e9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x34e9fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x34e9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34ea00: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x34ea00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x34ea04: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x34ea08: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x34ea08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x34ea0c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x34ea0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34ea10: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x34ea10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x34ea14: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x34ea14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x34ea18: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x34ea18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x34ea1c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x34ea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x34ea20: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x34ea20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x34ea24: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x34ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x34ea28: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x34ea28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x34ea2c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x34EA2Cu;
    SET_GPR_U32(ctx, 31, 0x34EA34u);
    ctx->pc = 0x34EA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EA2Cu;
            // 0x34ea30: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EA34u; }
        if (ctx->pc != 0x34EA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EA34u; }
        if (ctx->pc != 0x34EA34u) { return; }
    }
    ctx->pc = 0x34EA34u;
label_34ea34:
    // 0x34ea34: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34ea34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x34ea38: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x34ea38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x34ea3c: 0x24635b70  addiu       $v1, $v1, 0x5B70
    ctx->pc = 0x34ea3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23408));
    // 0x34ea40: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x34ea40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x34ea44: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x34ea44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x34ea48: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x34ea4c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34ea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x34ea50: 0xac443fd0  sw          $a0, 0x3FD0($v0)
    ctx->pc = 0x34ea50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16336), GPR_U32(ctx, 4));
    // 0x34ea54: 0x24635b80  addiu       $v1, $v1, 0x5B80
    ctx->pc = 0x34ea54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23424));
    // 0x34ea58: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x34ea5c: 0x24425bb8  addiu       $v0, $v0, 0x5BB8
    ctx->pc = 0x34ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23480));
    // 0x34ea60: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x34ea60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x34ea64: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x34ea64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x34ea68: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x34ea68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x34ea6c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x34ea6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x34ea70: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x34ea70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x34ea74: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x34ea74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x34ea78: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x34ea78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x34ea7c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x34ea7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x34ea80: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x34ea80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x34ea84: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x34ea84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x34ea88: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x34ea88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x34ea8c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x34ea8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x34ea90: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x34ea90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x34ea94: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x34EA94u;
    {
        const bool branch_taken_0x34ea94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ea94) {
            ctx->pc = 0x34EB30u;
            goto label_34eb30;
        }
    }
    ctx->pc = 0x34EA9Cu;
    // 0x34ea9c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x34ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x34eaa0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34eaa4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x34eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x34eaa8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34eaac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x34eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x34eab0: 0xc040138  jal         func_1004E0
    ctx->pc = 0x34EAB0u;
    SET_GPR_U32(ctx, 31, 0x34EAB8u);
    ctx->pc = 0x34EAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EAB0u;
            // 0x34eab4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EAB8u; }
        if (ctx->pc != 0x34EAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EAB8u; }
        if (ctx->pc != 0x34EAB8u) { return; }
    }
    ctx->pc = 0x34EAB8u;
label_34eab8:
    // 0x34eab8: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x34eab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x34eabc: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x34eabcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x34eac0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34eac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eac4: 0x24a5eb50  addiu       $a1, $a1, -0x14B0
    ctx->pc = 0x34eac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962000));
    // 0x34eac8: 0x24c6e2c0  addiu       $a2, $a2, -0x1D40
    ctx->pc = 0x34eac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959808));
    // 0x34eacc: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x34eaccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x34ead0: 0xc040840  jal         func_102100
    ctx->pc = 0x34EAD0u;
    SET_GPR_U32(ctx, 31, 0x34EAD8u);
    ctx->pc = 0x34EAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EAD0u;
            // 0x34ead4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EAD8u; }
        if (ctx->pc != 0x34EAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EAD8u; }
        if (ctx->pc != 0x34EAD8u) { return; }
    }
    ctx->pc = 0x34EAD8u;
label_34ead8:
    // 0x34ead8: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x34ead8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x34eadc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x34eadcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eae0: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x34eae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x34eae4: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x34EAE4u;
    SET_GPR_U32(ctx, 31, 0x34EAECu);
    ctx->pc = 0x34EAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EAE4u;
            // 0x34eae8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EAECu; }
        if (ctx->pc != 0x34EAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EAECu; }
        if (ctx->pc != 0x34EAECu) { return; }
    }
    ctx->pc = 0x34EAECu;
label_34eaec:
    // 0x34eaec: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x34eaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x34eaf0: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x34EAF0u;
    SET_GPR_U32(ctx, 31, 0x34EAF8u);
    ctx->pc = 0x34EAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EAF0u;
            // 0x34eaf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EAF8u; }
        if (ctx->pc != 0x34EAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EAF8u; }
        if (ctx->pc != 0x34EAF8u) { return; }
    }
    ctx->pc = 0x34EAF8u;
label_34eaf8:
    // 0x34eaf8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34eaf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34eafc:
    // 0x34eafc: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x34eafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x34eb00: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x34eb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x34eb04: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x34eb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x34eb08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x34eb08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34eb0c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x34eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x34eb10: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x34eb10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x34eb14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34eb14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34eb18: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x34EB18u;
    SET_GPR_U32(ctx, 31, 0x34EB20u);
    ctx->pc = 0x34EB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EB18u;
            // 0x34eb1c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EB20u; }
        if (ctx->pc != 0x34EB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EB20u; }
        if (ctx->pc != 0x34EB20u) { return; }
    }
    ctx->pc = 0x34EB20u;
label_34eb20:
    // 0x34eb20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x34eb20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x34eb24: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x34eb24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x34eb28: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x34EB28u;
    {
        const bool branch_taken_0x34eb28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34EB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34EB28u;
            // 0x34eb2c: 0x265200b0  addiu       $s2, $s2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34eb28) {
            ctx->pc = 0x34EAFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34eafc;
        }
    }
    ctx->pc = 0x34EB30u;
label_34eb30:
    // 0x34eb30: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x34eb30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eb34: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34eb34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34eb38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34eb38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34eb3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34eb3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34eb40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34eb40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34eb44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34eb44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34eb48: 0x3e00008  jr          $ra
    ctx->pc = 0x34EB48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34EB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34EB48u;
            // 0x34eb4c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34EB50u;
    // 0x34eb50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34eb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34eb54: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x34eb58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34eb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34eb5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x34eb5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34eb60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34eb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34eb64: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x34eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x34eb68: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34eb68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x34eb6c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x34eb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x34eb70: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x34eb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x34eb74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34eb78: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x34eb78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x34eb7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34eb7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eb80: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x34eb80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x34eb84: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x34eb84u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x34eb88: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x34eb88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x34eb8c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x34eb8cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x34eb90: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x34eb90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x34eb94: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x34eb94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x34eb98: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x34EB98u;
    SET_GPR_U32(ctx, 31, 0x34EBA0u);
    ctx->pc = 0x34EB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EB98u;
            // 0x34eb9c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EBA0u; }
        if (ctx->pc != 0x34EBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EBA0u; }
        if (ctx->pc != 0x34EBA0u) { return; }
    }
    ctx->pc = 0x34EBA0u;
label_34eba0:
    // 0x34eba0: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x34EBA0u;
    SET_GPR_U32(ctx, 31, 0x34EBA8u);
    ctx->pc = 0x34EBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EBA0u;
            // 0x34eba4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EBA8u; }
        if (ctx->pc != 0x34EBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EBA8u; }
        if (ctx->pc != 0x34EBA8u) { return; }
    }
    ctx->pc = 0x34EBA8u;
label_34eba8:
    // 0x34eba8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x34ebac: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x34ebacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x34ebb0: 0x8c470e80  lw          $a3, 0xE80($v0)
    ctx->pc = 0x34ebb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x34ebb4: 0x2463c560  addiu       $v1, $v1, -0x3AA0
    ctx->pc = 0x34ebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952288));
    // 0x34ebb8: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x34ebb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x34ebbc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x34ebbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34ebc0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x34ebc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34ebc4: 0x8ce70788  lw          $a3, 0x788($a3)
    ctx->pc = 0x34ebc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1928)));
    // 0x34ebc8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x34ebcc: 0x24425b08  addiu       $v0, $v0, 0x5B08
    ctx->pc = 0x34ebccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23304));
    // 0x34ebd0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x34ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x34ebd4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x34ebd4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34ebd8: 0xa203004d  sb          $v1, 0x4D($s0)
    ctx->pc = 0x34ebd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 3));
    // 0x34ebdc: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x34EBDCu;
    SET_GPR_U32(ctx, 31, 0x34EBE4u);
    ctx->pc = 0x34EBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EBDCu;
            // 0x34ebe0: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EBE4u; }
        if (ctx->pc != 0x34EBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EBE4u; }
        if (ctx->pc != 0x34EBE4u) { return; }
    }
    ctx->pc = 0x34EBE4u;
label_34ebe4:
    // 0x34ebe4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x34ebe8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34ebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x34ebec: 0x24425b20  addiu       $v0, $v0, 0x5B20
    ctx->pc = 0x34ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23328));
    // 0x34ebf0: 0x24635b60  addiu       $v1, $v1, 0x5B60
    ctx->pc = 0x34ebf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23392));
    // 0x34ebf4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x34ebf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x34ebf8: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x34ebf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x34ebfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34ebfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ec00: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x34ec00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x34ec04: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x34ec04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x34ec08: 0xa20000a2  sb          $zero, 0xA2($s0)
    ctx->pc = 0x34ec08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 162), (uint8_t)GPR_U32(ctx, 0));
    // 0x34ec0c: 0xa20000a4  sb          $zero, 0xA4($s0)
    ctx->pc = 0x34ec0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 164), (uint8_t)GPR_U32(ctx, 0));
    // 0x34ec10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34ec10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34ec14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34ec14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34ec18: 0x3e00008  jr          $ra
    ctx->pc = 0x34EC18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34EC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34EC18u;
            // 0x34ec1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34EC20u;
    // 0x34ec20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34ec20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34ec24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34ec24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34ec28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34ec28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34ec2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34ec2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ec30: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x34EC30u;
    {
        const bool branch_taken_0x34ec30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ec30) {
            ctx->pc = 0x34EC34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34EC30u;
            // 0x34ec34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34EC5Cu;
            goto label_34ec5c;
        }
    }
    ctx->pc = 0x34EC38u;
    // 0x34ec38: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x34ec38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x34ec3c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34ec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x34ec40: 0x24635b08  addiu       $v1, $v1, 0x5B08
    ctx->pc = 0x34ec40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23304));
    // 0x34ec44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x34ec44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x34ec48: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34EC48u;
    {
        const bool branch_taken_0x34ec48 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x34EC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34EC48u;
            // 0x34ec4c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ec48) {
            ctx->pc = 0x34EC58u;
            goto label_34ec58;
        }
    }
    ctx->pc = 0x34EC50u;
    // 0x34ec50: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x34EC50u;
    SET_GPR_U32(ctx, 31, 0x34EC58u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EC58u; }
        if (ctx->pc != 0x34EC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EC58u; }
        if (ctx->pc != 0x34EC58u) { return; }
    }
    ctx->pc = 0x34EC58u;
label_34ec58:
    // 0x34ec58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34ec58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34ec5c:
    // 0x34ec5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34ec5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34ec60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34ec60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34ec64: 0x3e00008  jr          $ra
    ctx->pc = 0x34EC64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34EC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34EC64u;
            // 0x34ec68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34EC6Cu;
    // 0x34ec6c: 0x0  nop
    ctx->pc = 0x34ec6cu;
    // NOP
}
