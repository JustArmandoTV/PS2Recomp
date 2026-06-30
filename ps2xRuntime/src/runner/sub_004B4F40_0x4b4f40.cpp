#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B4F40
// Address: 0x4b4f40 - 0x4b51c0
void sub_004B4F40_0x4b4f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4F40_0x4b4f40");
#endif

    switch (ctx->pc) {
        case 0x4b4f70u: goto label_4b4f70;
        case 0x4b4fc4u: goto label_4b4fc4;
        case 0x4b5040u: goto label_4b5040;
        case 0x4b5060u: goto label_4b5060;
        case 0x4b5074u: goto label_4b5074;
        case 0x4b5080u: goto label_4b5080;
        case 0x4b5084u: goto label_4b5084;
        case 0x4b50a8u: goto label_4b50a8;
        case 0x4b50f4u: goto label_4b50f4;
        case 0x4b50fcu: goto label_4b50fc;
        case 0x4b511cu: goto label_4b511c;
        case 0x4b5124u: goto label_4b5124;
        case 0x4b5168u: goto label_4b5168;
        case 0x4b5170u: goto label_4b5170;
        default: break;
    }

    ctx->pc = 0x4b4f40u;

    // 0x4b4f40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4b4f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4b4f44: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4b4f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b4f48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4b4f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4b4f4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4b4f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4b4f50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b4f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4b4f54: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4b4f54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4f58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b4f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4b4f5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b4f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4b4f60: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4b4f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4f64: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4b4f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4f68: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x4B4F68u;
    SET_GPR_U32(ctx, 31, 0x4B4F70u);
    ctx->pc = 0x4B4F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4F68u;
            // 0x4b4f6c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4F70u; }
        if (ctx->pc != 0x4B4F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4F70u; }
        if (ctx->pc != 0x4B4F70u) { return; }
    }
    ctx->pc = 0x4B4F70u;
label_4b4f70:
    // 0x4b4f70: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4b4f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4b4f74: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b4f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4b4f78: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4b4f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x4b4f7c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4b4f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x4b4f80: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4b4f80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4b4f84: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4b4f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x4b4f88: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4b4f88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4b4f8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b4f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b4f90: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4b4f90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x4b4f94: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4b4f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4b4f98: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4b4f98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x4b4f9c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4b4f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4b4fa0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4b4fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x4b4fa4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4b4fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x4b4fa8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4b4fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x4b4fac: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4b4facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x4b4fb0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4b4fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x4b4fb4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4b4fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4b4fb8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4b4fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4b4fbc: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x4B4FBCu;
    SET_GPR_U32(ctx, 31, 0x4B4FC4u);
    ctx->pc = 0x4B4FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4FBCu;
            // 0x4b4fc0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4FC4u; }
        if (ctx->pc != 0x4B4FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4FC4u; }
        if (ctx->pc != 0x4B4FC4u) { return; }
    }
    ctx->pc = 0x4B4FC4u;
label_4b4fc4:
    // 0x4b4fc4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b4fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4b4fc8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4b4fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x4b4fcc: 0x24630980  addiu       $v1, $v1, 0x980
    ctx->pc = 0x4b4fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2432));
    // 0x4b4fd0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4b4fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x4b4fd4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4b4fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x4b4fd8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4b4fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4b4fdc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b4fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4b4fe0: 0xac44a9a0  sw          $a0, -0x5660($v0)
    ctx->pc = 0x4b4fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945184), GPR_U32(ctx, 4));
    // 0x4b4fe4: 0x24630990  addiu       $v1, $v1, 0x990
    ctx->pc = 0x4b4fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2448));
    // 0x4b4fe8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b4fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4b4fec: 0x244209c8  addiu       $v0, $v0, 0x9C8
    ctx->pc = 0x4b4fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2504));
    // 0x4b4ff0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4b4ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4b4ff4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4b4ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x4b4ff8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4b4ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x4b4ffc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4b4ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x4b5000: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4b5000u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x4b5004: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4b5004u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x4b5008: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4b5008u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x4b500c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4b500cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x4b5010: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4b5010u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x4b5014: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4b5014u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x4b5018: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4b5018u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x4b501c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4b501cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x4b5020: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4b5020u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x4b5024: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x4B5024u;
    {
        const bool branch_taken_0x4b5024 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b5024) {
            ctx->pc = 0x4B50B8u;
            goto label_4b50b8;
        }
    }
    ctx->pc = 0x4B502Cu;
    // 0x4b502c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x4b502cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x4b5030: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x4b5030u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4b5034: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4b5034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x4b5038: 0xc040138  jal         func_1004E0
    ctx->pc = 0x4B5038u;
    SET_GPR_U32(ctx, 31, 0x4B5040u);
    ctx->pc = 0x4B503Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5038u;
            // 0x4b503c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5040u; }
        if (ctx->pc != 0x4B5040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5040u; }
        if (ctx->pc != 0x4B5040u) { return; }
    }
    ctx->pc = 0x4B5040u;
label_4b5040:
    // 0x4b5040: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x4b5040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
    // 0x4b5044: 0x3c06004b  lui         $a2, 0x4B
    ctx->pc = 0x4b5044u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)75 << 16));
    // 0x4b5048: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b5048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b504c: 0x24a550e0  addiu       $a1, $a1, 0x50E0
    ctx->pc = 0x4b504cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20704));
    // 0x4b5050: 0x24c647a0  addiu       $a2, $a2, 0x47A0
    ctx->pc = 0x4b5050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18336));
    // 0x4b5054: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x4b5054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x4b5058: 0xc040840  jal         func_102100
    ctx->pc = 0x4B5058u;
    SET_GPR_U32(ctx, 31, 0x4B5060u);
    ctx->pc = 0x4B505Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5058u;
            // 0x4b505c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5060u; }
        if (ctx->pc != 0x4B5060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5060u; }
        if (ctx->pc != 0x4B5060u) { return; }
    }
    ctx->pc = 0x4B5060u;
label_4b5060:
    // 0x4b5060: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4b5060u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x4b5064: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4b5064u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5068: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4b5068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x4b506c: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x4B506Cu;
    SET_GPR_U32(ctx, 31, 0x4B5074u);
    ctx->pc = 0x4B5070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B506Cu;
            // 0x4b5070: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5074u; }
        if (ctx->pc != 0x4B5074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5074u; }
        if (ctx->pc != 0x4B5074u) { return; }
    }
    ctx->pc = 0x4B5074u;
label_4b5074:
    // 0x4b5074: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4b5074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x4b5078: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x4B5078u;
    SET_GPR_U32(ctx, 31, 0x4B5080u);
    ctx->pc = 0x4B507Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5078u;
            // 0x4b507c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5080u; }
        if (ctx->pc != 0x4B5080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5080u; }
        if (ctx->pc != 0x4B5080u) { return; }
    }
    ctx->pc = 0x4B5080u;
label_4b5080:
    // 0x4b5080: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4b5080u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b5084:
    // 0x4b5084: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4b5084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x4b5088: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4b5088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x4b508c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4b508cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x4b5090: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4b5090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b5094: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4b5094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x4b5098: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4b5098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x4b509c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b509cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4b50a0: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x4B50A0u;
    SET_GPR_U32(ctx, 31, 0x4B50A8u);
    ctx->pc = 0x4B50A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B50A0u;
            // 0x4b50a4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B50A8u; }
        if (ctx->pc != 0x4B50A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B50A8u; }
        if (ctx->pc != 0x4B50A8u) { return; }
    }
    ctx->pc = 0x4B50A8u;
label_4b50a8:
    // 0x4b50a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4b50a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4b50ac: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4b50acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4b50b0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4B50B0u;
    {
        const bool branch_taken_0x4b50b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B50B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B50B0u;
            // 0x4b50b4: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b50b0) {
            ctx->pc = 0x4B5084u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b5084;
        }
    }
    ctx->pc = 0x4B50B8u;
label_4b50b8:
    // 0x4b50b8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4b50b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b50bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4b50bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b50c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4b50c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b50c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b50c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b50c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b50c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b50cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b50ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b50d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B50D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B50D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B50D0u;
            // 0x4b50d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B50D8u;
    // 0x4b50d8: 0x0  nop
    ctx->pc = 0x4b50d8u;
    // NOP
    // 0x4b50dc: 0x0  nop
    ctx->pc = 0x4b50dcu;
    // NOP
    // 0x4b50e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b50e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b50e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b50e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b50e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b50e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4b50ec: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x4B50ECu;
    SET_GPR_U32(ctx, 31, 0x4B50F4u);
    ctx->pc = 0x4B50F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B50ECu;
            // 0x4b50f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B50F4u; }
        if (ctx->pc != 0x4B50F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B50F4u; }
        if (ctx->pc != 0x4B50F4u) { return; }
    }
    ctx->pc = 0x4B50F4u;
label_4b50f4:
    // 0x4b50f4: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x4B50F4u;
    SET_GPR_U32(ctx, 31, 0x4B50FCu);
    ctx->pc = 0x4B50F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B50F4u;
            // 0x4b50f8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B50FCu; }
        if (ctx->pc != 0x4B50FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B50FCu; }
        if (ctx->pc != 0x4B50FCu) { return; }
    }
    ctx->pc = 0x4B50FCu;
label_4b50fc:
    // 0x4b50fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4b50fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4b5100: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b5100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4b5104: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4b5104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x4b5108: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4b5108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x4b510c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b510cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b5110: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4b5110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x4b5114: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x4B5114u;
    SET_GPR_U32(ctx, 31, 0x4B511Cu);
    ctx->pc = 0x4B5118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5114u;
            // 0x4b5118: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B511Cu; }
        if (ctx->pc != 0x4B511Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B511Cu; }
        if (ctx->pc != 0x4B511Cu) { return; }
    }
    ctx->pc = 0x4B511Cu;
label_4b511c:
    // 0x4b511c: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x4B511Cu;
    SET_GPR_U32(ctx, 31, 0x4B5124u);
    ctx->pc = 0x4B5120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B511Cu;
            // 0x4b5120: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5124u; }
        if (ctx->pc != 0x4B5124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5124u; }
        if (ctx->pc != 0x4B5124u) { return; }
    }
    ctx->pc = 0x4B5124u;
label_4b5124:
    // 0x4b5124: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4b5124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x4b5128: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x4b5128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x4b512c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x4b512cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x4b5130: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x4b5130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x4b5134: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x4b5134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x4b5138: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b5138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b513c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x4b513cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x4b5140: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b5140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b5144: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x4b5144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x4b5148: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x4b5148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x4b514c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x4b514cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x4b5150: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x4b5150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x4b5154: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x4b5154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x4b5158: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x4b5158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x4b515c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x4b515cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x4b5160: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x4B5160u;
    SET_GPR_U32(ctx, 31, 0x4B5168u);
    ctx->pc = 0x4B5164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5160u;
            // 0x4b5164: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5168u; }
        if (ctx->pc != 0x4B5168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5168u; }
        if (ctx->pc != 0x4B5168u) { return; }
    }
    ctx->pc = 0x4B5168u;
label_4b5168:
    // 0x4b5168: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x4B5168u;
    SET_GPR_U32(ctx, 31, 0x4B5170u);
    ctx->pc = 0x4B516Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5168u;
            // 0x4b516c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5170u; }
        if (ctx->pc != 0x4B5170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5170u; }
        if (ctx->pc != 0x4B5170u) { return; }
    }
    ctx->pc = 0x4B5170u;
label_4b5170:
    // 0x4b5170: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4b5170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x4b5174: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x4b5174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x4b5178: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x4b5178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x4b517c: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x4b517cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x4b5180: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4b5180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b5184: 0x248408e0  addiu       $a0, $a0, 0x8E0
    ctx->pc = 0x4b5184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2272));
    // 0x4b5188: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x4b5188u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b518c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b518cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4b5190: 0x24630920  addiu       $v1, $v1, 0x920
    ctx->pc = 0x4b5190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2336));
    // 0x4b5194: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x4b5194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4b5198: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b5198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b519c: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x4b519cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
    // 0x4b51a0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4b51a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4b51a4: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4b51a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x4b51a8: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x4b51a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x4b51ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b51acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b51b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b51b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b51b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4B51B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B51B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B51B4u;
            // 0x4b51b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B51BCu;
    // 0x4b51bc: 0x0  nop
    ctx->pc = 0x4b51bcu;
    // NOP
}
