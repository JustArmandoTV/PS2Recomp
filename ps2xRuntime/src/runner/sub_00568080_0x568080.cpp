#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00568080
// Address: 0x568080 - 0x568220
void sub_00568080_0x568080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00568080_0x568080");
#endif

    switch (ctx->pc) {
        case 0x5680b0u: goto label_5680b0;
        case 0x568104u: goto label_568104;
        case 0x568188u: goto label_568188;
        case 0x5681a8u: goto label_5681a8;
        case 0x5681bcu: goto label_5681bc;
        case 0x5681c8u: goto label_5681c8;
        case 0x5681ccu: goto label_5681cc;
        case 0x5681f0u: goto label_5681f0;
        default: break;
    }

    ctx->pc = 0x568080u;

    // 0x568080: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x568080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x568084: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x568084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x568088: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x568088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x56808c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x56808cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x568090: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x568090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x568094: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x568094u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x568098: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x568098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x56809c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x56809cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x5680a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x5680a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5680a4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x5680a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5680a8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x5680A8u;
    SET_GPR_U32(ctx, 31, 0x5680B0u);
    ctx->pc = 0x5680ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5680A8u;
            // 0x5680ac: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5680B0u; }
        if (ctx->pc != 0x5680B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5680B0u; }
        if (ctx->pc != 0x5680B0u) { return; }
    }
    ctx->pc = 0x5680B0u;
label_5680b0:
    // 0x5680b0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x5680b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x5680b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x5680b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x5680b8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x5680b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x5680bc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x5680bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x5680c0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x5680c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x5680c4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x5680c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x5680c8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x5680c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x5680cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x5680ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x5680d0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x5680d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x5680d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5680d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x5680d8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x5680d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x5680dc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x5680dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x5680e0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x5680e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x5680e4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x5680e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x5680e8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x5680e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x5680ec: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x5680ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x5680f0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x5680f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x5680f4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x5680f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x5680f8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x5680f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x5680fc: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x5680FCu;
    SET_GPR_U32(ctx, 31, 0x568104u);
    ctx->pc = 0x568100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5680FCu;
            // 0x568100: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568104u; }
        if (ctx->pc != 0x568104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568104u; }
        if (ctx->pc != 0x568104u) { return; }
    }
    ctx->pc = 0x568104u;
label_568104:
    // 0x568104: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x568104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x568108: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x568108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x56810c: 0x246380f8  addiu       $v1, $v1, -0x7F08
    ctx->pc = 0x56810cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934776));
    // 0x568110: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x568110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x568114: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x568114u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x568118: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x568118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x56811c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x56811cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x568120: 0xac443e98  sw          $a0, 0x3E98($v0)
    ctx->pc = 0x568120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16024), GPR_U32(ctx, 4));
    // 0x568124: 0x24638110  addiu       $v1, $v1, -0x7EF0
    ctx->pc = 0x568124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934800));
    // 0x568128: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x568128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x56812c: 0x24428148  addiu       $v0, $v0, -0x7EB8
    ctx->pc = 0x56812cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934856));
    // 0x568130: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x568130u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x568134: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x568134u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x568138: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x568138u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x56813c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x56813cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x568140: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x568140u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x568144: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x568144u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x568148: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x568148u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x56814c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x56814cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x568150: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x568150u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x568154: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x568154u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x568158: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x568158u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x56815c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x56815cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x568160: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x568160u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x568164: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x568164u;
    {
        const bool branch_taken_0x568164 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x568164) {
            ctx->pc = 0x568200u;
            goto label_568200;
        }
    }
    ctx->pc = 0x56816Cu;
    // 0x56816c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x56816cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x568170: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x568170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x568174: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x568174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x568178: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x568178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x56817c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x56817cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x568180: 0xc040138  jal         func_1004E0
    ctx->pc = 0x568180u;
    SET_GPR_U32(ctx, 31, 0x568188u);
    ctx->pc = 0x568184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568180u;
            // 0x568184: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568188u; }
        if (ctx->pc != 0x568188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568188u; }
        if (ctx->pc != 0x568188u) { return; }
    }
    ctx->pc = 0x568188u;
label_568188:
    // 0x568188: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x568188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x56818c: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x56818cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x568190: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x568190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x568194: 0x24a58f80  addiu       $a1, $a1, -0x7080
    ctx->pc = 0x568194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938496));
    // 0x568198: 0x24c65b00  addiu       $a2, $a2, 0x5B00
    ctx->pc = 0x568198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23296));
    // 0x56819c: 0x24070260  addiu       $a3, $zero, 0x260
    ctx->pc = 0x56819cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x5681a0: 0xc040840  jal         func_102100
    ctx->pc = 0x5681A0u;
    SET_GPR_U32(ctx, 31, 0x5681A8u);
    ctx->pc = 0x5681A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5681A0u;
            // 0x5681a4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5681A8u; }
        if (ctx->pc != 0x5681A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5681A8u; }
        if (ctx->pc != 0x5681A8u) { return; }
    }
    ctx->pc = 0x5681A8u;
label_5681a8:
    // 0x5681a8: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x5681a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x5681ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x5681acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5681b0: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x5681b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x5681b4: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x5681B4u;
    SET_GPR_U32(ctx, 31, 0x5681BCu);
    ctx->pc = 0x5681B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5681B4u;
            // 0x5681b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5681BCu; }
        if (ctx->pc != 0x5681BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5681BCu; }
        if (ctx->pc != 0x5681BCu) { return; }
    }
    ctx->pc = 0x5681BCu;
label_5681bc:
    // 0x5681bc: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x5681bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x5681c0: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x5681C0u;
    SET_GPR_U32(ctx, 31, 0x5681C8u);
    ctx->pc = 0x5681C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5681C0u;
            // 0x5681c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5681C8u; }
        if (ctx->pc != 0x5681C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5681C8u; }
        if (ctx->pc != 0x5681C8u) { return; }
    }
    ctx->pc = 0x5681C8u;
label_5681c8:
    // 0x5681c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x5681c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5681cc:
    // 0x5681cc: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x5681ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x5681d0: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x5681d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x5681d4: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x5681d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x5681d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5681d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5681dc: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x5681dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x5681e0: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x5681e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x5681e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x5681e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x5681e8: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x5681E8u;
    SET_GPR_U32(ctx, 31, 0x5681F0u);
    ctx->pc = 0x5681ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5681E8u;
            // 0x5681ec: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5681F0u; }
        if (ctx->pc != 0x5681F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5681F0u; }
        if (ctx->pc != 0x5681F0u) { return; }
    }
    ctx->pc = 0x5681F0u;
label_5681f0:
    // 0x5681f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x5681f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x5681f4: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x5681f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x5681f8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x5681F8u;
    {
        const bool branch_taken_0x5681f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x5681FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5681F8u;
            // 0x5681fc: 0x26520260  addiu       $s2, $s2, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5681f8) {
            ctx->pc = 0x5681CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5681cc;
        }
    }
    ctx->pc = 0x568200u;
label_568200:
    // 0x568200: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x568200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x568204: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x568204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x568208: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x568208u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x56820c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x56820cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x568210: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x568210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x568214: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x568214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x568218: 0x3e00008  jr          $ra
    ctx->pc = 0x568218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x56821Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x568218u;
            // 0x56821c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x568220u;
}
