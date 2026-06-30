#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0044E010
// Address: 0x44e010 - 0x44e290
void sub_0044E010_0x44e010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044E010_0x44e010");
#endif

    switch (ctx->pc) {
        case 0x44e040u: goto label_44e040;
        case 0x44e094u: goto label_44e094;
        case 0x44e108u: goto label_44e108;
        case 0x44e128u: goto label_44e128;
        case 0x44e13cu: goto label_44e13c;
        case 0x44e148u: goto label_44e148;
        case 0x44e14cu: goto label_44e14c;
        case 0x44e170u: goto label_44e170;
        case 0x44e1f0u: goto label_44e1f0;
        case 0x44e1f8u: goto label_44e1f8;
        default: break;
    }

    ctx->pc = 0x44e010u;

    // 0x44e010: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x44e010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x44e014: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x44e014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x44e018: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x44e018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x44e01c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x44e01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x44e020: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x44e020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x44e024: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x44e024u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44e028: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44e028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x44e02c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44e02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x44e030: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x44e030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44e034: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x44e034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44e038: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x44E038u;
    SET_GPR_U32(ctx, 31, 0x44E040u);
    ctx->pc = 0x44E03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E038u;
            // 0x44e03c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E040u; }
        if (ctx->pc != 0x44E040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E040u; }
        if (ctx->pc != 0x44E040u) { return; }
    }
    ctx->pc = 0x44E040u;
label_44e040:
    // 0x44e040: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x44e040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x44e044: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44e044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x44e048: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x44e048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x44e04c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x44e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x44e050: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x44e050u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x44e054: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x44e054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x44e058: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x44e058u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x44e05c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x44e05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x44e060: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x44e060u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x44e064: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44e064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44e068: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x44e068u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x44e06c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x44e06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x44e070: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x44e070u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x44e074: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x44e074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x44e078: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x44e078u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x44e07c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x44e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x44e080: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x44e080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x44e084: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x44e084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x44e088: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x44e088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x44e08c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x44E08Cu;
    SET_GPR_U32(ctx, 31, 0x44E094u);
    ctx->pc = 0x44E090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E08Cu;
            // 0x44e090: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E094u; }
        if (ctx->pc != 0x44E094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E094u; }
        if (ctx->pc != 0x44E094u) { return; }
    }
    ctx->pc = 0x44E094u;
label_44e094:
    // 0x44e094: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44e094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x44e098: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x44e098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x44e09c: 0x2463daf8  addiu       $v1, $v1, -0x2508
    ctx->pc = 0x44e09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957816));
    // 0x44e0a0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x44e0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x44e0a4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x44e0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x44e0a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44e0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44e0ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44e0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x44e0b0: 0xac447598  sw          $a0, 0x7598($v0)
    ctx->pc = 0x44e0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30104), GPR_U32(ctx, 4));
    // 0x44e0b4: 0x2463db10  addiu       $v1, $v1, -0x24F0
    ctx->pc = 0x44e0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957840));
    // 0x44e0b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44e0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x44e0bc: 0x2442db48  addiu       $v0, $v0, -0x24B8
    ctx->pc = 0x44e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957896));
    // 0x44e0c0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x44e0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x44e0c4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x44e0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x44e0c8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x44e0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x44e0cc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x44e0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x44e0d0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x44e0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x44e0d4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x44e0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x44e0d8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x44e0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x44e0dc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x44e0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x44e0e0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x44e0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x44e0e4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x44e0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x44e0e8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x44e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x44e0ec: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x44e0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x44e0f0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x44e0f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x44e0f4: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x44E0F4u;
    {
        const bool branch_taken_0x44e0f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x44e0f4) {
            ctx->pc = 0x44E180u;
            goto label_44e180;
        }
    }
    ctx->pc = 0x44E0FCu;
    // 0x44e0fc: 0x1011c0  sll         $v0, $s0, 7
    ctx->pc = 0x44e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x44e100: 0xc040138  jal         func_1004E0
    ctx->pc = 0x44E100u;
    SET_GPR_U32(ctx, 31, 0x44E108u);
    ctx->pc = 0x44E104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E100u;
            // 0x44e104: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E108u; }
        if (ctx->pc != 0x44E108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E108u; }
        if (ctx->pc != 0x44E108u) { return; }
    }
    ctx->pc = 0x44E108u;
label_44e108:
    // 0x44e108: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x44e108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x44e10c: 0x3c060045  lui         $a2, 0x45
    ctx->pc = 0x44e10cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)69 << 16));
    // 0x44e110: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x44e110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44e114: 0x24a5e1a0  addiu       $a1, $a1, -0x1E60
    ctx->pc = 0x44e114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959520));
    // 0x44e118: 0x24c6db20  addiu       $a2, $a2, -0x24E0
    ctx->pc = 0x44e118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957856));
    // 0x44e11c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x44e11cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x44e120: 0xc040840  jal         func_102100
    ctx->pc = 0x44E120u;
    SET_GPR_U32(ctx, 31, 0x44E128u);
    ctx->pc = 0x44E124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E120u;
            // 0x44e124: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E128u; }
        if (ctx->pc != 0x44E128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E128u; }
        if (ctx->pc != 0x44E128u) { return; }
    }
    ctx->pc = 0x44E128u;
label_44e128:
    // 0x44e128: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x44e128u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x44e12c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x44e12cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44e130: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x44e130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x44e134: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x44E134u;
    SET_GPR_U32(ctx, 31, 0x44E13Cu);
    ctx->pc = 0x44E138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E134u;
            // 0x44e138: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E13Cu; }
        if (ctx->pc != 0x44E13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E13Cu; }
        if (ctx->pc != 0x44E13Cu) { return; }
    }
    ctx->pc = 0x44E13Cu;
label_44e13c:
    // 0x44e13c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x44e13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x44e140: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x44E140u;
    SET_GPR_U32(ctx, 31, 0x44E148u);
    ctx->pc = 0x44E144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E140u;
            // 0x44e144: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E148u; }
        if (ctx->pc != 0x44E148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E148u; }
        if (ctx->pc != 0x44E148u) { return; }
    }
    ctx->pc = 0x44E148u;
label_44e148:
    // 0x44e148: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x44e148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44e14c:
    // 0x44e14c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x44e14cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x44e150: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x44e150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x44e154: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x44e154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x44e158: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x44e158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44e15c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x44e15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x44e160: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x44e160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x44e164: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x44e164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x44e168: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x44E168u;
    SET_GPR_U32(ctx, 31, 0x44E170u);
    ctx->pc = 0x44E16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E168u;
            // 0x44e16c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E170u; }
        if (ctx->pc != 0x44E170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E170u; }
        if (ctx->pc != 0x44E170u) { return; }
    }
    ctx->pc = 0x44E170u;
label_44e170:
    // 0x44e170: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x44e170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x44e174: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x44e174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x44e178: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x44E178u;
    {
        const bool branch_taken_0x44e178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44E17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44E178u;
            // 0x44e17c: 0x26520080  addiu       $s2, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44e178) {
            ctx->pc = 0x44E14Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44e14c;
        }
    }
    ctx->pc = 0x44E180u;
label_44e180:
    // 0x44e180: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x44e180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44e184: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x44e184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44e188: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x44e188u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44e18c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44e18cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44e190: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44e190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44e194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44e194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44e198: 0x3e00008  jr          $ra
    ctx->pc = 0x44E198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44E19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44E198u;
            // 0x44e19c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44E1A0u;
    // 0x44e1a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44e1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x44e1a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x44e1a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44e1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x44e1ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x44e1acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x44e1b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44e1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x44e1b4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x44e1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x44e1b8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x44e1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x44e1bc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x44e1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x44e1c0: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x44e1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x44e1c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44e1c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x44e1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x44e1cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44e1ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44e1d0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x44e1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x44e1d4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x44e1d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x44e1d8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x44e1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x44e1dc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x44e1dcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x44e1e0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x44e1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x44e1e4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x44e1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x44e1e8: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x44E1E8u;
    SET_GPR_U32(ctx, 31, 0x44E1F0u);
    ctx->pc = 0x44E1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E1E8u;
            // 0x44e1ec: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E1F0u; }
        if (ctx->pc != 0x44E1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E1F0u; }
        if (ctx->pc != 0x44E1F0u) { return; }
    }
    ctx->pc = 0x44E1F0u;
label_44e1f0:
    // 0x44e1f0: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x44E1F0u;
    SET_GPR_U32(ctx, 31, 0x44E1F8u);
    ctx->pc = 0x44E1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44E1F0u;
            // 0x44e1f4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E1F8u; }
        if (ctx->pc != 0x44E1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44E1F8u; }
        if (ctx->pc != 0x44E1F8u) { return; }
    }
    ctx->pc = 0x44E1F8u;
label_44e1f8:
    // 0x44e1f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44e1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44e1fc: 0x3c090064  lui         $t1, 0x64
    ctx->pc = 0x44e1fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)100 << 16));
    // 0x44e200: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x44e200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x44e204: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x44e204u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
    // 0x44e208: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x44e208u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x44e20c: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x44e20cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x44e210: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x44e210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x44e214: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x44e214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x44e218: 0x8c4a0788  lw          $t2, 0x788($v0)
    ctx->pc = 0x44e218u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
    // 0x44e21c: 0x2529c560  addiu       $t1, $t1, -0x3AA0
    ctx->pc = 0x44e21cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952288));
    // 0x44e220: 0x25082660  addiu       $t0, $t0, 0x2660
    ctx->pc = 0x44e220u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9824));
    // 0x44e224: 0x24e72670  addiu       $a3, $a3, 0x2670
    ctx->pc = 0x44e224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9840));
    // 0x44e228: 0x24c626b0  addiu       $a2, $a2, 0x26B0
    ctx->pc = 0x44e228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9904));
    // 0x44e22c: 0x24a5dbb0  addiu       $a1, $a1, -0x2450
    ctx->pc = 0x44e22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958000));
    // 0x44e230: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x44e230u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x44e234: 0x2484dbf0  addiu       $a0, $a0, -0x2410
    ctx->pc = 0x44e234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
    // 0x44e238: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x44e238u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x44e23c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x44e23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x44e240: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x44e240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44e244: 0xa209004d  sb          $t1, 0x4D($s0)
    ctx->pc = 0x44e244u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 9));
    // 0x44e248: 0xae080054  sw          $t0, 0x54($s0)
    ctx->pc = 0x44e248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 8));
    // 0x44e24c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x44e24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x44e250: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x44e250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x44e254: 0xae060054  sw          $a2, 0x54($s0)
    ctx->pc = 0x44e254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 6));
    // 0x44e258: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x44e258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x44e25c: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x44e25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x44e260: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x44e260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x44e264: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x44e264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x44e268: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x44e268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x44e26c: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x44e26cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x44e270: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x44e270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x44e274: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x44e274u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
    // 0x44e278: 0xa203007c  sb          $v1, 0x7C($s0)
    ctx->pc = 0x44e278u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 3));
    // 0x44e27c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44e27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44e280: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44e280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44e284: 0x3e00008  jr          $ra
    ctx->pc = 0x44E284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44E288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44E284u;
            // 0x44e288: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44E28Cu;
    // 0x44e28c: 0x0  nop
    ctx->pc = 0x44e28cu;
    // NOP
}
