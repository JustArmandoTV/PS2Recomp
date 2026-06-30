#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CC090
// Address: 0x2cc090 - 0x2cc320
void sub_002CC090_0x2cc090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC090_0x2cc090");
#endif

    switch (ctx->pc) {
        case 0x2cc0c0u: goto label_2cc0c0;
        case 0x2cc114u: goto label_2cc114;
        case 0x2cc198u: goto label_2cc198;
        case 0x2cc1b8u: goto label_2cc1b8;
        case 0x2cc1ccu: goto label_2cc1cc;
        case 0x2cc1d8u: goto label_2cc1d8;
        case 0x2cc1dcu: goto label_2cc1dc;
        case 0x2cc200u: goto label_2cc200;
        case 0x2cc280u: goto label_2cc280;
        case 0x2cc288u: goto label_2cc288;
        default: break;
    }

    ctx->pc = 0x2cc090u;

    // 0x2cc090: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cc090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2cc094: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2cc094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cc098: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cc098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2cc09c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cc09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2cc0a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cc0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cc0a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2cc0a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc0a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cc0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cc0ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cc0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cc0b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cc0b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc0b4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2cc0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc0b8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2CC0B8u;
    SET_GPR_U32(ctx, 31, 0x2CC0C0u);
    ctx->pc = 0x2CC0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC0B8u;
            // 0x2cc0bc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC0C0u; }
        if (ctx->pc != 0x2CC0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC0C0u; }
        if (ctx->pc != 0x2CC0C0u) { return; }
    }
    ctx->pc = 0x2CC0C0u;
label_2cc0c0:
    // 0x2cc0c0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cc0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cc0c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cc0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cc0c8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2cc0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2cc0cc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2cc0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2cc0d0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2cc0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2cc0d4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2cc0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2cc0d8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2cc0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2cc0dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2cc0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cc0e0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2cc0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2cc0e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cc0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2cc0e8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2cc0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2cc0ec: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2cc0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2cc0f0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2cc0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2cc0f4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2cc0f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2cc0f8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2cc0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2cc0fc: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2cc0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2cc100: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2cc100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2cc104: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2cc104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2cc108: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2cc108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2cc10c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2CC10Cu;
    SET_GPR_U32(ctx, 31, 0x2CC114u);
    ctx->pc = 0x2CC110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC10Cu;
            // 0x2cc110: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC114u; }
        if (ctx->pc != 0x2CC114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC114u; }
        if (ctx->pc != 0x2CC114u) { return; }
    }
    ctx->pc = 0x2CC114u;
label_2cc114:
    // 0x2cc114: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cc114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cc118: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2cc118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2cc11c: 0x24630098  addiu       $v1, $v1, 0x98
    ctx->pc = 0x2cc11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 152));
    // 0x2cc120: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2cc120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2cc124: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2cc124u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2cc128: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cc128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2cc12c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cc12cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cc130: 0xac440e30  sw          $a0, 0xE30($v0)
    ctx->pc = 0x2cc130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3632), GPR_U32(ctx, 4));
    // 0x2cc134: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x2cc134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x2cc138: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cc138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cc13c: 0x244200e8  addiu       $v0, $v0, 0xE8
    ctx->pc = 0x2cc13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x2cc140: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2cc140u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2cc144: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2cc144u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2cc148: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2cc148u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2cc14c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2cc14cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2cc150: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2cc150u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2cc154: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2cc154u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2cc158: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2cc158u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2cc15c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2cc15cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2cc160: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2cc160u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2cc164: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2cc164u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2cc168: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2cc168u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2cc16c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2cc16cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2cc170: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2cc170u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2cc174: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2CC174u;
    {
        const bool branch_taken_0x2cc174 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc174) {
            ctx->pc = 0x2CC210u;
            goto label_2cc210;
        }
    }
    ctx->pc = 0x2CC17Cu;
    // 0x2cc17c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2cc17cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2cc180: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2cc180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2cc184: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2cc184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2cc188: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2cc188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2cc18c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2cc18cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2cc190: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2CC190u;
    SET_GPR_U32(ctx, 31, 0x2CC198u);
    ctx->pc = 0x2CC194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC190u;
            // 0x2cc194: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC198u; }
        if (ctx->pc != 0x2CC198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC198u; }
        if (ctx->pc != 0x2CC198u) { return; }
    }
    ctx->pc = 0x2CC198u;
label_2cc198:
    // 0x2cc198: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2cc198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x2cc19c: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2cc19cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x2cc1a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cc1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc1a4: 0x24a5c230  addiu       $a1, $a1, -0x3DD0
    ctx->pc = 0x2cc1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951472));
    // 0x2cc1a8: 0x24c6be20  addiu       $a2, $a2, -0x41E0
    ctx->pc = 0x2cc1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950432));
    // 0x2cc1ac: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x2cc1acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x2cc1b0: 0xc040840  jal         func_102100
    ctx->pc = 0x2CC1B0u;
    SET_GPR_U32(ctx, 31, 0x2CC1B8u);
    ctx->pc = 0x2CC1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC1B0u;
            // 0x2cc1b4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC1B8u; }
        if (ctx->pc != 0x2CC1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC1B8u; }
        if (ctx->pc != 0x2CC1B8u) { return; }
    }
    ctx->pc = 0x2CC1B8u;
label_2cc1b8:
    // 0x2cc1b8: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2cc1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2cc1bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cc1bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc1c0: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2cc1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2cc1c4: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2CC1C4u;
    SET_GPR_U32(ctx, 31, 0x2CC1CCu);
    ctx->pc = 0x2CC1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC1C4u;
            // 0x2cc1c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC1CCu; }
        if (ctx->pc != 0x2CC1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC1CCu; }
        if (ctx->pc != 0x2CC1CCu) { return; }
    }
    ctx->pc = 0x2CC1CCu;
label_2cc1cc:
    // 0x2cc1cc: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2cc1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2cc1d0: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2CC1D0u;
    SET_GPR_U32(ctx, 31, 0x2CC1D8u);
    ctx->pc = 0x2CC1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC1D0u;
            // 0x2cc1d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC1D8u; }
        if (ctx->pc != 0x2CC1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC1D8u; }
        if (ctx->pc != 0x2CC1D8u) { return; }
    }
    ctx->pc = 0x2CC1D8u;
label_2cc1d8:
    // 0x2cc1d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2cc1d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cc1dc:
    // 0x2cc1dc: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2cc1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2cc1e0: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2cc1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2cc1e4: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2cc1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2cc1e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2cc1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc1ec: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2cc1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2cc1f0: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2cc1f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2cc1f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cc1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cc1f8: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2CC1F8u;
    SET_GPR_U32(ctx, 31, 0x2CC200u);
    ctx->pc = 0x2CC1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC1F8u;
            // 0x2cc1fc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC200u; }
        if (ctx->pc != 0x2CC200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC200u; }
        if (ctx->pc != 0x2CC200u) { return; }
    }
    ctx->pc = 0x2CC200u;
label_2cc200:
    // 0x2cc200: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2cc200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2cc204: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2cc204u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2cc208: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2CC208u;
    {
        const bool branch_taken_0x2cc208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC208u;
            // 0x2cc20c: 0x265200b0  addiu       $s2, $s2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc208) {
            ctx->pc = 0x2CC1DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cc1dc;
        }
    }
    ctx->pc = 0x2CC210u;
label_2cc210:
    // 0x2cc210: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2cc210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc214: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cc214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cc218: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cc218u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cc21c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cc21cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc220: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cc220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc224: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cc224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc228: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC228u;
            // 0x2cc22c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CC230u;
    // 0x2cc230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cc230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cc234: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cc234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cc238: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cc238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cc23c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2cc23cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cc240: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cc240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cc244: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2cc244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2cc248: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cc248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cc24c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2cc24cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2cc250: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2cc250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x2cc254: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cc254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc258: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2cc258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2cc25c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cc25cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc260: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2cc260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2cc264: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2cc264u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2cc268: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2cc268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2cc26c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2cc26cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2cc270: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2cc270u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cc274: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2cc274u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cc278: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2CC278u;
    SET_GPR_U32(ctx, 31, 0x2CC280u);
    ctx->pc = 0x2CC27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC278u;
            // 0x2cc27c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC280u; }
        if (ctx->pc != 0x2CC280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC280u; }
        if (ctx->pc != 0x2CC280u) { return; }
    }
    ctx->pc = 0x2CC280u;
label_2cc280:
    // 0x2cc280: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2CC280u;
    SET_GPR_U32(ctx, 31, 0x2CC288u);
    ctx->pc = 0x2CC284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC280u;
            // 0x2cc284: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC288u; }
        if (ctx->pc != 0x2CC288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC288u; }
        if (ctx->pc != 0x2CC288u) { return; }
    }
    ctx->pc = 0x2CC288u;
label_2cc288:
    // 0x2cc288: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cc288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2cc28c: 0x3c090064  lui         $t1, 0x64
    ctx->pc = 0x2cc28cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)100 << 16));
    // 0x2cc290: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2cc290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2cc294: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x2cc294u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
    // 0x2cc298: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x2cc298u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x2cc29c: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x2cc29cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x2cc2a0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x2cc2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x2cc2a4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2cc2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x2cc2a8: 0x8c4a0788  lw          $t2, 0x788($v0)
    ctx->pc = 0x2cc2a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
    // 0x2cc2ac: 0x2529c560  addiu       $t1, $t1, -0x3AA0
    ctx->pc = 0x2cc2acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952288));
    // 0x2cc2b0: 0x25082660  addiu       $t0, $t0, 0x2660
    ctx->pc = 0x2cc2b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9824));
    // 0x2cc2b4: 0x24e72670  addiu       $a3, $a3, 0x2670
    ctx->pc = 0x2cc2b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9840));
    // 0x2cc2b8: 0x24c626b0  addiu       $a2, $a2, 0x26B0
    ctx->pc = 0x2cc2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9904));
    // 0x2cc2bc: 0x24a564f0  addiu       $a1, $a1, 0x64F0
    ctx->pc = 0x2cc2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
    // 0x2cc2c0: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x2cc2c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2cc2c4: 0x24846530  addiu       $a0, $a0, 0x6530
    ctx->pc = 0x2cc2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25904));
    // 0x2cc2c8: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x2cc2c8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2cc2cc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2cc2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2cc2d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cc2d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc2d4: 0xa209004d  sb          $t1, 0x4D($s0)
    ctx->pc = 0x2cc2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 9));
    // 0x2cc2d8: 0xae080054  sw          $t0, 0x54($s0)
    ctx->pc = 0x2cc2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 8));
    // 0x2cc2dc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2cc2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2cc2e0: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x2cc2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x2cc2e4: 0xae060054  sw          $a2, 0x54($s0)
    ctx->pc = 0x2cc2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 6));
    // 0x2cc2e8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2cc2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2cc2ec: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x2cc2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x2cc2f0: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2cc2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x2cc2f4: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2cc2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2cc2f8: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x2cc2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x2cc2fc: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x2cc2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x2cc300: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x2cc300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
    // 0x2cc304: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x2cc304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x2cc308: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cc308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc30c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cc30cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc310: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC310u;
            // 0x2cc314: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CC318u;
    // 0x2cc318: 0x0  nop
    ctx->pc = 0x2cc318u;
    // NOP
    // 0x2cc31c: 0x0  nop
    ctx->pc = 0x2cc31cu;
    // NOP
}
