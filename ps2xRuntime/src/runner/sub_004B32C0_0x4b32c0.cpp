#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B32C0
// Address: 0x4b32c0 - 0x4b35f0
void sub_004B32C0_0x4b32c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B32C0_0x4b32c0");
#endif

    switch (ctx->pc) {
        case 0x4b32f0u: goto label_4b32f0;
        case 0x4b3344u: goto label_4b3344;
        case 0x4b33d8u: goto label_4b33d8;
        case 0x4b33f8u: goto label_4b33f8;
        case 0x4b340cu: goto label_4b340c;
        case 0x4b3418u: goto label_4b3418;
        case 0x4b341cu: goto label_4b341c;
        case 0x4b3440u: goto label_4b3440;
        case 0x4b3484u: goto label_4b3484;
        case 0x4b348cu: goto label_4b348c;
        case 0x4b34acu: goto label_4b34ac;
        case 0x4b34b4u: goto label_4b34b4;
        case 0x4b34f8u: goto label_4b34f8;
        case 0x4b3500u: goto label_4b3500;
        default: break;
    }

    ctx->pc = 0x4b32c0u;

    // 0x4b32c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4b32c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4b32c4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4b32c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b32c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4b32c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4b32cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4b32ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4b32d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b32d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4b32d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4b32d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b32d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b32d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4b32dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b32dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4b32e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4b32e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b32e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4b32e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b32e8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x4B32E8u;
    SET_GPR_U32(ctx, 31, 0x4B32F0u);
    ctx->pc = 0x4B32ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B32E8u;
            // 0x4b32ec: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B32F0u; }
        if (ctx->pc != 0x4B32F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B32F0u; }
        if (ctx->pc != 0x4B32F0u) { return; }
    }
    ctx->pc = 0x4B32F0u;
label_4b32f0:
    // 0x4b32f0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4b32f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4b32f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b32f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4b32f8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4b32f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x4b32fc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4b32fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x4b3300: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4b3300u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4b3304: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4b3304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x4b3308: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4b3308u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4b330c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b330cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b3310: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4b3310u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x4b3314: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4b3314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4b3318: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4b3318u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x4b331c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4b331cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4b3320: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4b3320u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x4b3324: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4b3324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x4b3328: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4b3328u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x4b332c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4b332cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x4b3330: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4b3330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x4b3334: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4b3334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4b3338: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4b3338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4b333c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x4B333Cu;
    SET_GPR_U32(ctx, 31, 0x4B3344u);
    ctx->pc = 0x4B3340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B333Cu;
            // 0x4b3340: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3344u; }
        if (ctx->pc != 0x4B3344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3344u; }
        if (ctx->pc != 0x4B3344u) { return; }
    }
    ctx->pc = 0x4B3344u;
label_4b3344:
    // 0x4b3344: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b3344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4b3348: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4b3348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x4b334c: 0x246307a0  addiu       $v1, $v1, 0x7A0
    ctx->pc = 0x4b334cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1952));
    // 0x4b3350: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4b3350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x4b3354: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4b3354u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x4b3358: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4b3358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4b335c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b335cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4b3360: 0xac44a998  sw          $a0, -0x5668($v0)
    ctx->pc = 0x4b3360u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945176), GPR_U32(ctx, 4));
    // 0x4b3364: 0x246307b0  addiu       $v1, $v1, 0x7B0
    ctx->pc = 0x4b3364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1968));
    // 0x4b3368: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b3368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4b336c: 0x244207e8  addiu       $v0, $v0, 0x7E8
    ctx->pc = 0x4b336cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2024));
    // 0x4b3370: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4b3370u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4b3374: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4b3374u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x4b3378: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4b3378u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x4b337c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4b337cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x4b3380: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4b3380u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x4b3384: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4b3384u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x4b3388: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4b3388u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x4b338c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4b338cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x4b3390: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4b3390u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x4b3394: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4b3394u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x4b3398: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4b3398u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x4b339c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4b339cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x4b33a0: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x4b33a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    // 0x4b33a4: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x4b33a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x4b33a8: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x4b33a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
    // 0x4b33ac: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x4b33acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
    // 0x4b33b0: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x4b33b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
    // 0x4b33b4: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x4b33b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
    // 0x4b33b8: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4b33b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x4b33bc: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x4B33BCu;
    {
        const bool branch_taken_0x4b33bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b33bc) {
            ctx->pc = 0x4B3450u;
            goto label_4b3450;
        }
    }
    ctx->pc = 0x4B33C4u;
    // 0x4b33c4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x4b33c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x4b33c8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x4b33c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4b33cc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4b33ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x4b33d0: 0xc040138  jal         func_1004E0
    ctx->pc = 0x4B33D0u;
    SET_GPR_U32(ctx, 31, 0x4B33D8u);
    ctx->pc = 0x4B33D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B33D0u;
            // 0x4b33d4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B33D8u; }
        if (ctx->pc != 0x4B33D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B33D8u; }
        if (ctx->pc != 0x4B33D8u) { return; }
    }
    ctx->pc = 0x4B33D8u;
label_4b33d8:
    // 0x4b33d8: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x4b33d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
    // 0x4b33dc: 0x3c06004b  lui         $a2, 0x4B
    ctx->pc = 0x4b33dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)75 << 16));
    // 0x4b33e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b33e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b33e4: 0x24a53470  addiu       $a1, $a1, 0x3470
    ctx->pc = 0x4b33e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13424));
    // 0x4b33e8: 0x24c62d10  addiu       $a2, $a2, 0x2D10
    ctx->pc = 0x4b33e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11536));
    // 0x4b33ec: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x4b33ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x4b33f0: 0xc040840  jal         func_102100
    ctx->pc = 0x4B33F0u;
    SET_GPR_U32(ctx, 31, 0x4B33F8u);
    ctx->pc = 0x4B33F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B33F0u;
            // 0x4b33f4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B33F8u; }
        if (ctx->pc != 0x4B33F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B33F8u; }
        if (ctx->pc != 0x4B33F8u) { return; }
    }
    ctx->pc = 0x4B33F8u;
label_4b33f8:
    // 0x4b33f8: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4b33f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x4b33fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4b33fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3400: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4b3400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x4b3404: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x4B3404u;
    SET_GPR_U32(ctx, 31, 0x4B340Cu);
    ctx->pc = 0x4B3408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3404u;
            // 0x4b3408: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B340Cu; }
        if (ctx->pc != 0x4B340Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B340Cu; }
        if (ctx->pc != 0x4B340Cu) { return; }
    }
    ctx->pc = 0x4B340Cu;
label_4b340c:
    // 0x4b340c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4b340cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x4b3410: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x4B3410u;
    SET_GPR_U32(ctx, 31, 0x4B3418u);
    ctx->pc = 0x4B3414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3410u;
            // 0x4b3414: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3418u; }
        if (ctx->pc != 0x4B3418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3418u; }
        if (ctx->pc != 0x4B3418u) { return; }
    }
    ctx->pc = 0x4B3418u;
label_4b3418:
    // 0x4b3418: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4b3418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b341c:
    // 0x4b341c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4b341cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x4b3420: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4b3420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x4b3424: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4b3424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x4b3428: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4b3428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b342c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4b342cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x4b3430: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4b3430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x4b3434: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b3434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4b3438: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x4B3438u;
    SET_GPR_U32(ctx, 31, 0x4B3440u);
    ctx->pc = 0x4B343Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3438u;
            // 0x4b343c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3440u; }
        if (ctx->pc != 0x4B3440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3440u; }
        if (ctx->pc != 0x4B3440u) { return; }
    }
    ctx->pc = 0x4B3440u;
label_4b3440:
    // 0x4b3440: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4b3440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4b3444: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4b3444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4b3448: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4B3448u;
    {
        const bool branch_taken_0x4b3448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B344Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3448u;
            // 0x4b344c: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3448) {
            ctx->pc = 0x4B341Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b341c;
        }
    }
    ctx->pc = 0x4B3450u;
label_4b3450:
    // 0x4b3450: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4b3450u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3454: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4b3454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b3458: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4b3458u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b345c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b345cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b3460: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b3460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b3464: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b3464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b3468: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B346Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3468u;
            // 0x4b346c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B3470u;
    // 0x4b3470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b3470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b3474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b3474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b3478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b3478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4b347c: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x4B347Cu;
    SET_GPR_U32(ctx, 31, 0x4B3484u);
    ctx->pc = 0x4B3480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B347Cu;
            // 0x4b3480: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3484u; }
        if (ctx->pc != 0x4B3484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3484u; }
        if (ctx->pc != 0x4B3484u) { return; }
    }
    ctx->pc = 0x4B3484u;
label_4b3484:
    // 0x4b3484: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x4B3484u;
    SET_GPR_U32(ctx, 31, 0x4B348Cu);
    ctx->pc = 0x4B3488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3484u;
            // 0x4b3488: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B348Cu; }
        if (ctx->pc != 0x4B348Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B348Cu; }
        if (ctx->pc != 0x4B348Cu) { return; }
    }
    ctx->pc = 0x4B348Cu;
label_4b348c:
    // 0x4b348c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4b348cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4b3490: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b3490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4b3494: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4b3494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x4b3498: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4b3498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x4b349c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b349cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b34a0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4b34a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x4b34a4: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x4B34A4u;
    SET_GPR_U32(ctx, 31, 0x4B34ACu);
    ctx->pc = 0x4B34A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B34A4u;
            // 0x4b34a8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B34ACu; }
        if (ctx->pc != 0x4B34ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B34ACu; }
        if (ctx->pc != 0x4B34ACu) { return; }
    }
    ctx->pc = 0x4B34ACu;
label_4b34ac:
    // 0x4b34ac: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x4B34ACu;
    SET_GPR_U32(ctx, 31, 0x4B34B4u);
    ctx->pc = 0x4B34B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B34ACu;
            // 0x4b34b0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B34B4u; }
        if (ctx->pc != 0x4B34B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B34B4u; }
        if (ctx->pc != 0x4B34B4u) { return; }
    }
    ctx->pc = 0x4B34B4u;
label_4b34b4:
    // 0x4b34b4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4b34b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x4b34b8: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x4b34b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x4b34bc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x4b34bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x4b34c0: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x4b34c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x4b34c4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x4b34c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x4b34c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b34c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b34cc: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x4b34ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x4b34d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b34d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b34d4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x4b34d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x4b34d8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x4b34d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x4b34dc: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x4b34dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x4b34e0: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x4b34e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x4b34e4: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x4b34e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x4b34e8: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x4b34e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x4b34ec: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x4b34ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x4b34f0: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x4B34F0u;
    SET_GPR_U32(ctx, 31, 0x4B34F8u);
    ctx->pc = 0x4B34F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B34F0u;
            // 0x4b34f4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B34F8u; }
        if (ctx->pc != 0x4B34F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B34F8u; }
        if (ctx->pc != 0x4B34F8u) { return; }
    }
    ctx->pc = 0x4B34F8u;
label_4b34f8:
    // 0x4b34f8: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x4B34F8u;
    SET_GPR_U32(ctx, 31, 0x4B3500u);
    ctx->pc = 0x4B34FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B34F8u;
            // 0x4b34fc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3500u; }
        if (ctx->pc != 0x4B3500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B3500u; }
        if (ctx->pc != 0x4B3500u) { return; }
    }
    ctx->pc = 0x4B3500u;
label_4b3500:
    // 0x4b3500: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4b3500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x4b3504: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x4b3504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x4b3508: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x4b3508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x4b350c: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x4b350cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x4b3510: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4b3510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b3514: 0x24840700  addiu       $a0, $a0, 0x700
    ctx->pc = 0x4b3514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1792));
    // 0x4b3518: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x4b3518u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b351c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b351cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4b3520: 0x24630740  addiu       $v1, $v1, 0x740
    ctx->pc = 0x4b3520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1856));
    // 0x4b3524: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x4b3524u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4b3528: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b3528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b352c: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x4b352cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
    // 0x4b3530: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4b3530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4b3534: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4b3534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x4b3538: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x4b3538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x4b353c: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x4b353cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x4b3540: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b3540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b3544: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b3544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b3548: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B354Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3548u;
            // 0x4b354c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B3550u;
    // 0x4b3550: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B3558u;
    // 0x4b3558: 0x0  nop
    ctx->pc = 0x4b3558u;
    // NOP
    // 0x4b355c: 0x0  nop
    ctx->pc = 0x4b355cu;
    // NOP
    // 0x4b3560: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B3568u;
    // 0x4b3568: 0x0  nop
    ctx->pc = 0x4b3568u;
    // NOP
    // 0x4b356c: 0x0  nop
    ctx->pc = 0x4b356cu;
    // NOP
    // 0x4b3570: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B3578u;
    // 0x4b3578: 0x0  nop
    ctx->pc = 0x4b3578u;
    // NOP
    // 0x4b357c: 0x0  nop
    ctx->pc = 0x4b357cu;
    // NOP
    // 0x4b3580: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x4b3580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x4b3584: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b3584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b3588: 0x50a30004  beql        $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B3588u;
    {
        const bool branch_taken_0x4b3588 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b3588) {
            ctx->pc = 0x4B358Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3588u;
            // 0x4b358c: 0xc48100d4  lwc1        $f1, 0xD4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B359Cu;
            goto label_4b359c;
        }
    }
    ctx->pc = 0x4B3590u;
    // 0x4b3590: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4B3590u;
    {
        const bool branch_taken_0x4b3590 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b3590) {
            ctx->pc = 0x4B3594u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B3590u;
            // 0x4b3594: 0xac8300d0  sw          $v1, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B3598u;
            goto label_4b3598;
        }
    }
    ctx->pc = 0x4B3598u;
label_4b3598:
    // 0x4b3598: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x4b3598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b359c:
    // 0x4b359c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4b359cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x4b35a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4b35a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b35a4: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x4b35a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
    // 0x4b35a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4b35a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4b35ac: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x4b35acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x4b35b0: 0x8c63a998  lw          $v1, -0x5668($v1)
    ctx->pc = 0x4b35b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945176)));
    // 0x4b35b4: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x4b35b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b35b8: 0x8c630098  lw          $v1, 0x98($v1)
    ctx->pc = 0x4b35b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
    // 0x4b35bc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x4b35bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b35c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4b35c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b35c4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x4B35C4u;
    {
        const bool branch_taken_0x4b35c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b35c4) {
            ctx->pc = 0x4B35D0u;
            goto label_4b35d0;
        }
    }
    ctx->pc = 0x4B35CCu;
    // 0x4b35cc: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x4b35ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
label_4b35d0:
    // 0x4b35d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B35D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B35D8u;
    // 0x4b35d8: 0x0  nop
    ctx->pc = 0x4b35d8u;
    // NOP
    // 0x4b35dc: 0x0  nop
    ctx->pc = 0x4b35dcu;
    // NOP
    // 0x4b35e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B35E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B35E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B35E0u;
            // 0x4b35e4: 0xac8000d4  sw          $zero, 0xD4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B35E8u;
    // 0x4b35e8: 0x0  nop
    ctx->pc = 0x4b35e8u;
    // NOP
    // 0x4b35ec: 0x0  nop
    ctx->pc = 0x4b35ecu;
    // NOP
}
