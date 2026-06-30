#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C6850
// Address: 0x2c6850 - 0x2c69f0
void sub_002C6850_0x2c6850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6850_0x2c6850");
#endif

    switch (ctx->pc) {
        case 0x2c6880u: goto label_2c6880;
        case 0x2c68d4u: goto label_2c68d4;
        case 0x2c6950u: goto label_2c6950;
        case 0x2c6970u: goto label_2c6970;
        case 0x2c6984u: goto label_2c6984;
        case 0x2c6990u: goto label_2c6990;
        case 0x2c6994u: goto label_2c6994;
        case 0x2c69b8u: goto label_2c69b8;
        default: break;
    }

    ctx->pc = 0x2c6850u;

    // 0x2c6850: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c6850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c6854: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c6854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c6858: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c6858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c685c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c685cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c6860: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c6860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c6864: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c6864u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c6868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c686c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c686cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c6870: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c6870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6874: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2c6874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6878: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2C6878u;
    SET_GPR_U32(ctx, 31, 0x2C6880u);
    ctx->pc = 0x2C687Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6878u;
            // 0x2c687c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6880u; }
        if (ctx->pc != 0x2C6880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6880u; }
        if (ctx->pc != 0x2C6880u) { return; }
    }
    ctx->pc = 0x2C6880u;
label_2c6880:
    // 0x2c6880: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c6880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c6884: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c6884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c6888: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2c6888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2c688c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c688cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2c6890: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c6890u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c6894: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2c6894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2c6898: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2c6898u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2c689c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c689cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c68a0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2c68a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2c68a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c68a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c68a8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2c68a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2c68ac: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2c68acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c68b0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2c68b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2c68b4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2c68b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2c68b8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2c68b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2c68bc: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2c68bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2c68c0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2c68c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2c68c4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2c68c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2c68c8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2c68c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2c68cc: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2C68CCu;
    SET_GPR_U32(ctx, 31, 0x2C68D4u);
    ctx->pc = 0x2C68D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C68CCu;
            // 0x2c68d0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C68D4u; }
        if (ctx->pc != 0x2C68D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C68D4u; }
        if (ctx->pc != 0x2C68D4u) { return; }
    }
    ctx->pc = 0x2C68D4u;
label_2c68d4:
    // 0x2c68d4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c68d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c68d8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2c68d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2c68dc: 0x24630ac8  addiu       $v1, $v1, 0xAC8
    ctx->pc = 0x2c68dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2760));
    // 0x2c68e0: 0x2444ff90  addiu       $a0, $v0, -0x70
    ctx->pc = 0x2c68e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967184));
    // 0x2c68e4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2c68e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2c68e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c68e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c68ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c68ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c68f0: 0xac440de8  sw          $a0, 0xDE8($v0)
    ctx->pc = 0x2c68f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3560), GPR_U32(ctx, 4));
    // 0x2c68f4: 0x24630ae0  addiu       $v1, $v1, 0xAE0
    ctx->pc = 0x2c68f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2784));
    // 0x2c68f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c68f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c68fc: 0x24420b18  addiu       $v0, $v0, 0xB18
    ctx->pc = 0x2c68fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2840));
    // 0x2c6900: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c6900u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c6904: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2c6904u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2c6908: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2c6908u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2c690c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2c690cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2c6910: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2c6910u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2c6914: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2c6914u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2c6918: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2c6918u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2c691c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2c691cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2c6920: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2c6920u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2c6924: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2c6924u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2c6928: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2c6928u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2c692c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2c692cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2c6930: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2c6930u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2c6934: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C6934u;
    {
        const bool branch_taken_0x2c6934 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6934) {
            ctx->pc = 0x2C69C8u;
            goto label_2c69c8;
        }
    }
    ctx->pc = 0x2C693Cu;
    // 0x2c693c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2c693cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2c6940: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2c6940u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c6944: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c6944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2c6948: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2C6948u;
    SET_GPR_U32(ctx, 31, 0x2C6950u);
    ctx->pc = 0x2C694Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6948u;
            // 0x2c694c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6950u; }
        if (ctx->pc != 0x2C6950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6950u; }
        if (ctx->pc != 0x2C6950u) { return; }
    }
    ctx->pc = 0x2C6950u;
label_2c6950:
    // 0x2c6950: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c6950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c6954: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2c6954u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2c6958: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c695c: 0x24a569f0  addiu       $a1, $a1, 0x69F0
    ctx->pc = 0x2c695cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27120));
    // 0x2c6960: 0x24c665d0  addiu       $a2, $a2, 0x65D0
    ctx->pc = 0x2c6960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26064));
    // 0x2c6964: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x2c6964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2c6968: 0xc040840  jal         func_102100
    ctx->pc = 0x2C6968u;
    SET_GPR_U32(ctx, 31, 0x2C6970u);
    ctx->pc = 0x2C696Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6968u;
            // 0x2c696c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6970u; }
        if (ctx->pc != 0x2C6970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6970u; }
        if (ctx->pc != 0x2C6970u) { return; }
    }
    ctx->pc = 0x2C6970u;
label_2c6970:
    // 0x2c6970: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2c6970u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2c6974: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c6974u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6978: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2c6978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2c697c: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C697Cu;
    SET_GPR_U32(ctx, 31, 0x2C6984u);
    ctx->pc = 0x2C6980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C697Cu;
            // 0x2c6980: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6984u; }
        if (ctx->pc != 0x2C6984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6984u; }
        if (ctx->pc != 0x2C6984u) { return; }
    }
    ctx->pc = 0x2C6984u;
label_2c6984:
    // 0x2c6984: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c6984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c6988: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C6988u;
    SET_GPR_U32(ctx, 31, 0x2C6990u);
    ctx->pc = 0x2C698Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6988u;
            // 0x2c698c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6990u; }
        if (ctx->pc != 0x2C6990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6990u; }
        if (ctx->pc != 0x2C6990u) { return; }
    }
    ctx->pc = 0x2C6990u;
label_2c6990:
    // 0x2c6990: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c6990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c6994:
    // 0x2c6994: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2c6994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2c6998: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c6998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c699c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2c699cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2c69a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c69a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c69a4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2c69a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2c69a8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2c69a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2c69ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c69acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c69b0: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2C69B0u;
    SET_GPR_U32(ctx, 31, 0x2C69B8u);
    ctx->pc = 0x2C69B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C69B0u;
            // 0x2c69b4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C69B8u; }
        if (ctx->pc != 0x2C69B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C69B8u; }
        if (ctx->pc != 0x2C69B8u) { return; }
    }
    ctx->pc = 0x2C69B8u;
label_2c69b8:
    // 0x2c69b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c69b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c69bc: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2c69bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c69c0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C69C0u;
    {
        const bool branch_taken_0x2c69c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C69C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C69C0u;
            // 0x2c69c4: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c69c0) {
            ctx->pc = 0x2C6994u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c6994;
        }
    }
    ctx->pc = 0x2C69C8u;
label_2c69c8:
    // 0x2c69c8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c69c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c69cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c69ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c69d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c69d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c69d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c69d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c69d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c69d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c69dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c69dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c69e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C69E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C69E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C69E0u;
            // 0x2c69e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C69E8u;
    // 0x2c69e8: 0x0  nop
    ctx->pc = 0x2c69e8u;
    // NOP
    // 0x2c69ec: 0x0  nop
    ctx->pc = 0x2c69ecu;
    // NOP
}
