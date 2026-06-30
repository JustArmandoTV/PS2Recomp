#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00363F00
// Address: 0x363f00 - 0x364180
void sub_00363F00_0x363f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363F00_0x363f00");
#endif

    switch (ctx->pc) {
        case 0x363f30u: goto label_363f30;
        case 0x363f84u: goto label_363f84;
        case 0x364008u: goto label_364008;
        case 0x364028u: goto label_364028;
        case 0x36403cu: goto label_36403c;
        case 0x364048u: goto label_364048;
        case 0x36404cu: goto label_36404c;
        case 0x364070u: goto label_364070;
        case 0x3640f0u: goto label_3640f0;
        case 0x3640f8u: goto label_3640f8;
        default: break;
    }

    ctx->pc = 0x363f00u;

    // 0x363f00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x363f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x363f04: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x363f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x363f08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x363f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x363f0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x363f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x363f10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x363f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x363f14: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x363f14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363f18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x363f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x363f1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x363f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x363f20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x363f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363f24: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x363f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363f28: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x363F28u;
    SET_GPR_U32(ctx, 31, 0x363F30u);
    ctx->pc = 0x363F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363F28u;
            // 0x363f2c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363F30u; }
        if (ctx->pc != 0x363F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363F30u; }
        if (ctx->pc != 0x363F30u) { return; }
    }
    ctx->pc = 0x363F30u;
label_363f30:
    // 0x363f30: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x363f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x363f34: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x363f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x363f38: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x363f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x363f3c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x363f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x363f40: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x363f40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x363f44: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x363f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x363f48: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x363f48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x363f4c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x363f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x363f50: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x363f50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x363f54: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x363f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x363f58: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x363f58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x363f5c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x363f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x363f60: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x363f60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x363f64: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x363f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x363f68: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x363f68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x363f6c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x363f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x363f70: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x363f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x363f74: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x363f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x363f78: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x363f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x363f7c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x363F7Cu;
    SET_GPR_U32(ctx, 31, 0x363F84u);
    ctx->pc = 0x363F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363F7Cu;
            // 0x363f80: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363F84u; }
        if (ctx->pc != 0x363F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363F84u; }
        if (ctx->pc != 0x363F84u) { return; }
    }
    ctx->pc = 0x363F84u;
label_363f84:
    // 0x363f84: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x363f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x363f88: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x363f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x363f8c: 0x24636708  addiu       $v1, $v1, 0x6708
    ctx->pc = 0x363f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26376));
    // 0x363f90: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x363f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x363f94: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x363f94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x363f98: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x363f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x363f9c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x363f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x363fa0: 0xac444018  sw          $a0, 0x4018($v0)
    ctx->pc = 0x363fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16408), GPR_U32(ctx, 4));
    // 0x363fa4: 0x24636720  addiu       $v1, $v1, 0x6720
    ctx->pc = 0x363fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26400));
    // 0x363fa8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x363fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x363fac: 0x24426758  addiu       $v0, $v0, 0x6758
    ctx->pc = 0x363facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26456));
    // 0x363fb0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x363fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x363fb4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x363fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x363fb8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x363fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x363fbc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x363fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x363fc0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x363fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x363fc4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x363fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x363fc8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x363fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x363fcc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x363fccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x363fd0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x363fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x363fd4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x363fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x363fd8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x363fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x363fdc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x363fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x363fe0: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x363fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    // 0x363fe4: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x363fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x363fe8: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x363fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x363fec: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x363FECu;
    {
        const bool branch_taken_0x363fec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x363fec) {
            ctx->pc = 0x364080u;
            goto label_364080;
        }
    }
    ctx->pc = 0x363FF4u;
    // 0x363ff4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x363ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x363ff8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x363ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x363ffc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x363ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x364000: 0xc040138  jal         func_1004E0
    ctx->pc = 0x364000u;
    SET_GPR_U32(ctx, 31, 0x364008u);
    ctx->pc = 0x364004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364000u;
            // 0x364004: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364008u; }
        if (ctx->pc != 0x364008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364008u; }
        if (ctx->pc != 0x364008u) { return; }
    }
    ctx->pc = 0x364008u;
label_364008:
    // 0x364008: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x364008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x36400c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x36400cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x364010: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x364010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364014: 0x24a540a0  addiu       $a1, $a1, 0x40A0
    ctx->pc = 0x364014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16544));
    // 0x364018: 0x24c62e30  addiu       $a2, $a2, 0x2E30
    ctx->pc = 0x364018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11824));
    // 0x36401c: 0x240700a0  addiu       $a3, $zero, 0xA0
    ctx->pc = 0x36401cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x364020: 0xc040840  jal         func_102100
    ctx->pc = 0x364020u;
    SET_GPR_U32(ctx, 31, 0x364028u);
    ctx->pc = 0x364024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364020u;
            // 0x364024: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364028u; }
        if (ctx->pc != 0x364028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364028u; }
        if (ctx->pc != 0x364028u) { return; }
    }
    ctx->pc = 0x364028u;
label_364028:
    // 0x364028: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x364028u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x36402c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36402cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364030: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x364030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x364034: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x364034u;
    SET_GPR_U32(ctx, 31, 0x36403Cu);
    ctx->pc = 0x364038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364034u;
            // 0x364038: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36403Cu; }
        if (ctx->pc != 0x36403Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36403Cu; }
        if (ctx->pc != 0x36403Cu) { return; }
    }
    ctx->pc = 0x36403Cu;
label_36403c:
    // 0x36403c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x36403cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x364040: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x364040u;
    SET_GPR_U32(ctx, 31, 0x364048u);
    ctx->pc = 0x364044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364040u;
            // 0x364044: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364048u; }
        if (ctx->pc != 0x364048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364048u; }
        if (ctx->pc != 0x364048u) { return; }
    }
    ctx->pc = 0x364048u;
label_364048:
    // 0x364048: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x364048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36404c:
    // 0x36404c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x36404cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x364050: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x364050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x364054: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x364054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x364058: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x364058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36405c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x36405cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x364060: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x364060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x364064: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x364064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x364068: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x364068u;
    SET_GPR_U32(ctx, 31, 0x364070u);
    ctx->pc = 0x36406Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364068u;
            // 0x36406c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364070u; }
        if (ctx->pc != 0x364070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364070u; }
        if (ctx->pc != 0x364070u) { return; }
    }
    ctx->pc = 0x364070u;
label_364070:
    // 0x364070: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x364070u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x364074: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x364074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x364078: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x364078u;
    {
        const bool branch_taken_0x364078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36407Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x364078u;
            // 0x36407c: 0x265200a0  addiu       $s2, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364078) {
            ctx->pc = 0x36404Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36404c;
        }
    }
    ctx->pc = 0x364080u;
label_364080:
    // 0x364080: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x364080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364084: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x364084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x364088: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x364088u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36408c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36408cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x364090: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x364090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x364094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364098: 0x3e00008  jr          $ra
    ctx->pc = 0x364098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36409Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x364098u;
            // 0x36409c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3640A0u;
    // 0x3640a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3640a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3640a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3640a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3640a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3640a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3640ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3640acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3640b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3640b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3640b4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x3640b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x3640b8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3640b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x3640bc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3640bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3640c0: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x3640c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x3640c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3640c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3640c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3640c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3640cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3640ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3640d0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x3640d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x3640d4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3640d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3640d8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x3640d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x3640dc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3640dcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x3640e0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x3640e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x3640e4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x3640e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x3640e8: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3640E8u;
    SET_GPR_U32(ctx, 31, 0x3640F0u);
    ctx->pc = 0x3640ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3640E8u;
            // 0x3640ec: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3640F0u; }
        if (ctx->pc != 0x3640F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3640F0u; }
        if (ctx->pc != 0x3640F0u) { return; }
    }
    ctx->pc = 0x3640F0u;
label_3640f0:
    // 0x3640f0: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x3640F0u;
    SET_GPR_U32(ctx, 31, 0x3640F8u);
    ctx->pc = 0x3640F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3640F0u;
            // 0x3640f4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3640F8u; }
        if (ctx->pc != 0x3640F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3640F8u; }
        if (ctx->pc != 0x3640F8u) { return; }
    }
    ctx->pc = 0x3640F8u;
label_3640f8:
    // 0x3640f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3640f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3640fc: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x3640fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
    // 0x364100: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x364100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x364104: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x364104u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x364108: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x364108u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x36410c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x36410cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x364110: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x364110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x364114: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x364114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x364118: 0x8c490788  lw          $t1, 0x788($v0)
    ctx->pc = 0x364118u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
    // 0x36411c: 0x2508c560  addiu       $t0, $t0, -0x3AA0
    ctx->pc = 0x36411cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952288));
    // 0x364120: 0x24e72660  addiu       $a3, $a3, 0x2660
    ctx->pc = 0x364120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9824));
    // 0x364124: 0x24c62670  addiu       $a2, $a2, 0x2670
    ctx->pc = 0x364124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9840));
    // 0x364128: 0x24a526b0  addiu       $a1, $a1, 0x26B0
    ctx->pc = 0x364128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9904));
    // 0x36412c: 0x248467c0  addiu       $a0, $a0, 0x67C0
    ctx->pc = 0x36412cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26560));
    // 0x364130: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x364130u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x364134: 0x24636800  addiu       $v1, $v1, 0x6800
    ctx->pc = 0x364134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26624));
    // 0x364138: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x364138u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36413c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36413cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364140: 0xa208004d  sb          $t0, 0x4D($s0)
    ctx->pc = 0x364140u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 8));
    // 0x364144: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x364144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
    // 0x364148: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x364148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x36414c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x36414cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x364150: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x364150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
    // 0x364154: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x364154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x364158: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x364158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x36415c: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x36415cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x364160: 0xa2000094  sb          $zero, 0x94($s0)
    ctx->pc = 0x364160u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 148), (uint8_t)GPR_U32(ctx, 0));
    // 0x364164: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x364164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364168: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x364168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36416c: 0x3e00008  jr          $ra
    ctx->pc = 0x36416Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36416Cu;
            // 0x364170: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x364174u;
    // 0x364174: 0x0  nop
    ctx->pc = 0x364174u;
    // NOP
    // 0x364178: 0x0  nop
    ctx->pc = 0x364178u;
    // NOP
    // 0x36417c: 0x0  nop
    ctx->pc = 0x36417cu;
    // NOP
}
