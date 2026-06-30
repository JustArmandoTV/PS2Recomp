#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049E9D0
// Address: 0x49e9d0 - 0x49ec20
void sub_0049E9D0_0x49e9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049E9D0_0x49e9d0");
#endif

    switch (ctx->pc) {
        case 0x49ea00u: goto label_49ea00;
        case 0x49ea54u: goto label_49ea54;
        case 0x49ead8u: goto label_49ead8;
        case 0x49eaf8u: goto label_49eaf8;
        case 0x49eb0cu: goto label_49eb0c;
        case 0x49eb18u: goto label_49eb18;
        case 0x49eb1cu: goto label_49eb1c;
        case 0x49eb40u: goto label_49eb40;
        case 0x49ebc0u: goto label_49ebc0;
        case 0x49ebc8u: goto label_49ebc8;
        default: break;
    }

    ctx->pc = 0x49e9d0u;

    // 0x49e9d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x49e9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x49e9d4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x49e9d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x49e9d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x49e9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x49e9dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x49e9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x49e9e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49e9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x49e9e4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x49e9e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e9e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49e9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x49e9ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49e9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x49e9f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x49e9f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e9f4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x49e9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e9f8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x49E9F8u;
    SET_GPR_U32(ctx, 31, 0x49EA00u);
    ctx->pc = 0x49E9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E9F8u;
            // 0x49e9fc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EA00u; }
        if (ctx->pc != 0x49EA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EA00u; }
        if (ctx->pc != 0x49EA00u) { return; }
    }
    ctx->pc = 0x49EA00u;
label_49ea00:
    // 0x49ea00: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x49ea00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x49ea04: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x49ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x49ea08: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x49ea08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x49ea0c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x49ea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x49ea10: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x49ea10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x49ea14: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x49ea14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x49ea18: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x49ea18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x49ea1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x49ea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x49ea20: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x49ea20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x49ea24: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x49ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x49ea28: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x49ea28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x49ea2c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x49ea2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x49ea30: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x49ea30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x49ea34: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x49ea34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x49ea38: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x49ea38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x49ea3c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x49ea3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x49ea40: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x49ea40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x49ea44: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x49ea44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x49ea48: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x49ea48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x49ea4c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x49EA4Cu;
    SET_GPR_U32(ctx, 31, 0x49EA54u);
    ctx->pc = 0x49EA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49EA4Cu;
            // 0x49ea50: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EA54u; }
        if (ctx->pc != 0x49EA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EA54u; }
        if (ctx->pc != 0x49EA54u) { return; }
    }
    ctx->pc = 0x49EA54u;
label_49ea54:
    // 0x49ea54: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49ea54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x49ea58: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x49ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x49ea5c: 0x2463ff08  addiu       $v1, $v1, -0xF8
    ctx->pc = 0x49ea5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967048));
    // 0x49ea60: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x49ea60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x49ea64: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x49ea64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x49ea68: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x49ea68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x49ea6c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49ea6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x49ea70: 0xac447c18  sw          $a0, 0x7C18($v0)
    ctx->pc = 0x49ea70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31768), GPR_U32(ctx, 4));
    // 0x49ea74: 0x2463ff20  addiu       $v1, $v1, -0xE0
    ctx->pc = 0x49ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967072));
    // 0x49ea78: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49ea78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x49ea7c: 0x2442ff58  addiu       $v0, $v0, -0xA8
    ctx->pc = 0x49ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967128));
    // 0x49ea80: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x49ea80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x49ea84: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x49ea84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x49ea88: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x49ea88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x49ea8c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x49ea8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x49ea90: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x49ea90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x49ea94: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x49ea94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x49ea98: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x49ea98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x49ea9c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x49ea9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x49eaa0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x49eaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x49eaa4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x49eaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x49eaa8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x49eaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x49eaac: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x49eaacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x49eab0: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x49eab0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    // 0x49eab4: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x49eab4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x49eab8: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x49eab8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x49eabc: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x49EABCu;
    {
        const bool branch_taken_0x49eabc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49eabc) {
            ctx->pc = 0x49EB50u;
            goto label_49eb50;
        }
    }
    ctx->pc = 0x49EAC4u;
    // 0x49eac4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x49eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x49eac8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x49eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x49eacc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x49eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x49ead0: 0xc040138  jal         func_1004E0
    ctx->pc = 0x49EAD0u;
    SET_GPR_U32(ctx, 31, 0x49EAD8u);
    ctx->pc = 0x49EAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49EAD0u;
            // 0x49ead4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EAD8u; }
        if (ctx->pc != 0x49EAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EAD8u; }
        if (ctx->pc != 0x49EAD8u) { return; }
    }
    ctx->pc = 0x49EAD8u;
label_49ead8:
    // 0x49ead8: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x49ead8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x49eadc: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x49eadcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x49eae0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49eae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49eae4: 0x24a5eb70  addiu       $a1, $a1, -0x1490
    ctx->pc = 0x49eae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962032));
    // 0x49eae8: 0x24c6e0e0  addiu       $a2, $a2, -0x1F20
    ctx->pc = 0x49eae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959328));
    // 0x49eaec: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x49eaecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x49eaf0: 0xc040840  jal         func_102100
    ctx->pc = 0x49EAF0u;
    SET_GPR_U32(ctx, 31, 0x49EAF8u);
    ctx->pc = 0x49EAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49EAF0u;
            // 0x49eaf4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EAF8u; }
        if (ctx->pc != 0x49EAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EAF8u; }
        if (ctx->pc != 0x49EAF8u) { return; }
    }
    ctx->pc = 0x49EAF8u;
label_49eaf8:
    // 0x49eaf8: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x49eaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x49eafc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x49eafcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49eb00: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x49eb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x49eb04: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x49EB04u;
    SET_GPR_U32(ctx, 31, 0x49EB0Cu);
    ctx->pc = 0x49EB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49EB04u;
            // 0x49eb08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EB0Cu; }
        if (ctx->pc != 0x49EB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EB0Cu; }
        if (ctx->pc != 0x49EB0Cu) { return; }
    }
    ctx->pc = 0x49EB0Cu;
label_49eb0c:
    // 0x49eb0c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x49eb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x49eb10: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x49EB10u;
    SET_GPR_U32(ctx, 31, 0x49EB18u);
    ctx->pc = 0x49EB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49EB10u;
            // 0x49eb14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EB18u; }
        if (ctx->pc != 0x49EB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EB18u; }
        if (ctx->pc != 0x49EB18u) { return; }
    }
    ctx->pc = 0x49EB18u;
label_49eb18:
    // 0x49eb18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x49eb18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49eb1c:
    // 0x49eb1c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x49eb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x49eb20: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x49eb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x49eb24: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x49eb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x49eb28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x49eb28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49eb2c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x49eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x49eb30: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x49eb30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x49eb34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49eb34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x49eb38: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x49EB38u;
    SET_GPR_U32(ctx, 31, 0x49EB40u);
    ctx->pc = 0x49EB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49EB38u;
            // 0x49eb3c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EB40u; }
        if (ctx->pc != 0x49EB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EB40u; }
        if (ctx->pc != 0x49EB40u) { return; }
    }
    ctx->pc = 0x49EB40u;
label_49eb40:
    // 0x49eb40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x49eb40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x49eb44: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x49eb44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x49eb48: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x49EB48u;
    {
        const bool branch_taken_0x49eb48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49EB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49EB48u;
            // 0x49eb4c: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49eb48) {
            ctx->pc = 0x49EB1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49eb1c;
        }
    }
    ctx->pc = 0x49EB50u;
label_49eb50:
    // 0x49eb50: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x49eb50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49eb54: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x49eb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49eb58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x49eb58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49eb5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49eb5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49eb60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49eb60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49eb64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49eb64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49eb68: 0x3e00008  jr          $ra
    ctx->pc = 0x49EB68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49EB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49EB68u;
            // 0x49eb6c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49EB70u;
    // 0x49eb70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49eb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x49eb74: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x49eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x49eb78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49eb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x49eb7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x49eb7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x49eb80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49eb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x49eb84: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x49eb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x49eb88: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x49eb88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x49eb8c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x49eb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x49eb90: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x49eb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x49eb94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49eb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49eb98: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x49eb98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x49eb9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49eb9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49eba0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x49eba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x49eba4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x49eba4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x49eba8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x49eba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x49ebac: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x49ebacu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x49ebb0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x49ebb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x49ebb4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x49ebb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x49ebb8: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x49EBB8u;
    SET_GPR_U32(ctx, 31, 0x49EBC0u);
    ctx->pc = 0x49EBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49EBB8u;
            // 0x49ebbc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EBC0u; }
        if (ctx->pc != 0x49EBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EBC0u; }
        if (ctx->pc != 0x49EBC0u) { return; }
    }
    ctx->pc = 0x49EBC0u;
label_49ebc0:
    // 0x49ebc0: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x49EBC0u;
    SET_GPR_U32(ctx, 31, 0x49EBC8u);
    ctx->pc = 0x49EBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49EBC0u;
            // 0x49ebc4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EBC8u; }
        if (ctx->pc != 0x49EBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49EBC8u; }
        if (ctx->pc != 0x49EBC8u) { return; }
    }
    ctx->pc = 0x49EBC8u;
label_49ebc8:
    // 0x49ebc8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x49ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x49ebcc: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x49ebccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x49ebd0: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x49ebd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x49ebd4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x49ebd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x49ebd8: 0x24a5c560  addiu       $a1, $a1, -0x3AA0
    ctx->pc = 0x49ebd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952288));
    // 0x49ebdc: 0x2484ffc0  addiu       $a0, $a0, -0x40
    ctx->pc = 0x49ebdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
    // 0x49ebe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49ebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49ebe4: 0x8cc60788  lw          $a2, 0x788($a2)
    ctx->pc = 0x49ebe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1928)));
    // 0x49ebe8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49ebe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ebec: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x49ebecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x49ebf0: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x49ebf0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49ebf4: 0xa205004d  sb          $a1, 0x4D($s0)
    ctx->pc = 0x49ebf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 5));
    // 0x49ebf8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x49ebf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x49ebfc: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x49ebfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x49ec00: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x49ec00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x49ec04: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x49ec04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x49ec08: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x49ec08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x49ec0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49ec0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49ec10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49ec10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ec14: 0x3e00008  jr          $ra
    ctx->pc = 0x49EC14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49EC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49EC14u;
            // 0x49ec18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49EC1Cu;
    // 0x49ec1c: 0x0  nop
    ctx->pc = 0x49ec1cu;
    // NOP
}
