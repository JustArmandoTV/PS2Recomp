#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C2880
// Address: 0x2c2880 - 0x2c2c50
void sub_002C2880_0x2c2880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2880_0x2c2880");
#endif

    switch (ctx->pc) {
        case 0x2c28b0u: goto label_2c28b0;
        case 0x2c2904u: goto label_2c2904;
        case 0x2c2988u: goto label_2c2988;
        case 0x2c29a8u: goto label_2c29a8;
        case 0x2c29bcu: goto label_2c29bc;
        case 0x2c29c8u: goto label_2c29c8;
        case 0x2c29ccu: goto label_2c29cc;
        case 0x2c29f0u: goto label_2c29f0;
        case 0x2c2a70u: goto label_2c2a70;
        case 0x2c2a78u: goto label_2c2a78;
        case 0x2c2b6cu: goto label_2c2b6c;
        case 0x2c2ba8u: goto label_2c2ba8;
        case 0x2c2bfcu: goto label_2c2bfc;
        case 0x2c2c38u: goto label_2c2c38;
        default: break;
    }

    ctx->pc = 0x2c2880u;

    // 0x2c2880: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c2880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c2884: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c2884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c2888: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c2888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c288c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c288cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c2890: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c2890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c2894: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c2894u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c2898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c289c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c289cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c28a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c28a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c28a4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2c28a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c28a8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2C28A8u;
    SET_GPR_U32(ctx, 31, 0x2C28B0u);
    ctx->pc = 0x2C28ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C28A8u;
            // 0x2c28ac: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C28B0u; }
        if (ctx->pc != 0x2C28B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C28B0u; }
        if (ctx->pc != 0x2C28B0u) { return; }
    }
    ctx->pc = 0x2C28B0u;
label_2c28b0:
    // 0x2c28b0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c28b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c28b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c28b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c28b8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2c28b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2c28bc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c28bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2c28c0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c28c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c28c4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2c28c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2c28c8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2c28c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2c28cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c28ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c28d0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2c28d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2c28d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c28d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c28d8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2c28d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2c28dc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2c28dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c28e0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2c28e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2c28e4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2c28e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2c28e8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2c28e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2c28ec: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2c28ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2c28f0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2c28f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2c28f4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2c28f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2c28f8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2c28f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2c28fc: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2C28FCu;
    SET_GPR_U32(ctx, 31, 0x2C2904u);
    ctx->pc = 0x2C2900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C28FCu;
            // 0x2c2900: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2904u; }
        if (ctx->pc != 0x2C2904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2904u; }
        if (ctx->pc != 0x2C2904u) { return; }
    }
    ctx->pc = 0x2C2904u;
label_2c2904:
    // 0x2c2904: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c2904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c2908: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2c2908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2c290c: 0x24631470  addiu       $v1, $v1, 0x1470
    ctx->pc = 0x2c290cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5232));
    // 0x2c2910: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2c2910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2c2914: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2c2914u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2c2918: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c2918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c291c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c291cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c2920: 0xac440e28  sw          $a0, 0xE28($v0)
    ctx->pc = 0x2c2920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3624), GPR_U32(ctx, 4));
    // 0x2c2924: 0x24631480  addiu       $v1, $v1, 0x1480
    ctx->pc = 0x2c2924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5248));
    // 0x2c2928: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c292c: 0x244214b8  addiu       $v0, $v0, 0x14B8
    ctx->pc = 0x2c292cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5304));
    // 0x2c2930: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c2930u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c2934: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2c2934u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2c2938: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2c2938u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2c293c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2c293cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2c2940: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2c2940u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2c2944: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2c2944u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2c2948: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2c2948u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2c294c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2c294cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2c2950: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2c2950u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2c2954: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2c2954u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2c2958: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2c2958u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2c295c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2c295cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2c2960: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2c2960u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2c2964: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2C2964u;
    {
        const bool branch_taken_0x2c2964 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2964) {
            ctx->pc = 0x2C2A00u;
            goto label_2c2a00;
        }
    }
    ctx->pc = 0x2C296Cu;
    // 0x2c296c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c296cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c2970: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2c2970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c2974: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2c2974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2c2978: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2c2978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c297c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2c297cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2c2980: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2C2980u;
    SET_GPR_U32(ctx, 31, 0x2C2988u);
    ctx->pc = 0x2C2984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2980u;
            // 0x2c2984: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2988u; }
        if (ctx->pc != 0x2C2988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2988u; }
        if (ctx->pc != 0x2C2988u) { return; }
    }
    ctx->pc = 0x2C2988u;
label_2c2988:
    // 0x2c2988: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c2988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c298c: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2c298cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2c2990: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c2990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2994: 0x24a52a20  addiu       $a1, $a1, 0x2A20
    ctx->pc = 0x2c2994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10784));
    // 0x2c2998: 0x24c625d0  addiu       $a2, $a2, 0x25D0
    ctx->pc = 0x2c2998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9680));
    // 0x2c299c: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x2c299cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x2c29a0: 0xc040840  jal         func_102100
    ctx->pc = 0x2C29A0u;
    SET_GPR_U32(ctx, 31, 0x2C29A8u);
    ctx->pc = 0x2C29A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C29A0u;
            // 0x2c29a4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C29A8u; }
        if (ctx->pc != 0x2C29A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C29A8u; }
        if (ctx->pc != 0x2C29A8u) { return; }
    }
    ctx->pc = 0x2C29A8u;
label_2c29a8:
    // 0x2c29a8: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2c29a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2c29ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c29acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c29b0: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2c29b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2c29b4: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C29B4u;
    SET_GPR_U32(ctx, 31, 0x2C29BCu);
    ctx->pc = 0x2C29B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C29B4u;
            // 0x2c29b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C29BCu; }
        if (ctx->pc != 0x2C29BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C29BCu; }
        if (ctx->pc != 0x2C29BCu) { return; }
    }
    ctx->pc = 0x2C29BCu;
label_2c29bc:
    // 0x2c29bc: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c29bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c29c0: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C29C0u;
    SET_GPR_U32(ctx, 31, 0x2C29C8u);
    ctx->pc = 0x2C29C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C29C0u;
            // 0x2c29c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C29C8u; }
        if (ctx->pc != 0x2C29C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C29C8u; }
        if (ctx->pc != 0x2C29C8u) { return; }
    }
    ctx->pc = 0x2C29C8u;
label_2c29c8:
    // 0x2c29c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c29c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c29cc:
    // 0x2c29cc: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2c29ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2c29d0: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c29d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c29d4: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2c29d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2c29d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c29d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c29dc: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2c29dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2c29e0: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2c29e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2c29e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c29e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c29e8: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2C29E8u;
    SET_GPR_U32(ctx, 31, 0x2C29F0u);
    ctx->pc = 0x2C29ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C29E8u;
            // 0x2c29ec: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C29F0u; }
        if (ctx->pc != 0x2C29F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C29F0u; }
        if (ctx->pc != 0x2C29F0u) { return; }
    }
    ctx->pc = 0x2C29F0u;
label_2c29f0:
    // 0x2c29f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c29f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c29f4: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2c29f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c29f8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C29F8u;
    {
        const bool branch_taken_0x2c29f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C29FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C29F8u;
            // 0x2c29fc: 0x265200b0  addiu       $s2, $s2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c29f8) {
            ctx->pc = 0x2C29CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c29cc;
        }
    }
    ctx->pc = 0x2C2A00u;
label_2c2a00:
    // 0x2c2a00: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c2a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a04: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c2a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c2a08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c2a08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c2a0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c2a0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c2a10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c2a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2a14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c2a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2a18: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2A18u;
            // 0x2c2a1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C2A20u;
    // 0x2c2a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c2a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c2a24: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c2a28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c2a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c2a2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c2a2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c2a30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c2a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c2a34: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c2a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2c2a38: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c2a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c2a3c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2c2a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2c2a40: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2c2a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x2c2a44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c2a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2a48: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2c2a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2c2a4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c2a4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a50: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2c2a50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2c2a54: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c2a54u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2c2a58: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2c2a58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2c2a5c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2c2a5cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2c2a60: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2c2a60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c2a64: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2c2a64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c2a68: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2C2A68u;
    SET_GPR_U32(ctx, 31, 0x2C2A70u);
    ctx->pc = 0x2C2A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2A68u;
            // 0x2c2a6c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A70u; }
        if (ctx->pc != 0x2C2A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A70u; }
        if (ctx->pc != 0x2C2A70u) { return; }
    }
    ctx->pc = 0x2C2A70u;
label_2c2a70:
    // 0x2c2a70: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2C2A70u;
    SET_GPR_U32(ctx, 31, 0x2C2A78u);
    ctx->pc = 0x2C2A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2A70u;
            // 0x2c2a74: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A78u; }
        if (ctx->pc != 0x2C2A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A78u; }
        if (ctx->pc != 0x2C2A78u) { return; }
    }
    ctx->pc = 0x2C2A78u;
label_2c2a78:
    // 0x2c2a78: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c2a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c2a7c: 0x3c0a0064  lui         $t2, 0x64
    ctx->pc = 0x2c2a7cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)100 << 16));
    // 0x2c2a80: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2c2a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2c2a84: 0x3c09006a  lui         $t1, 0x6A
    ctx->pc = 0x2c2a84u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)106 << 16));
    // 0x2c2a88: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x2c2a88u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
    // 0x2c2a8c: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x2c2a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x2c2a90: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x2c2a90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x2c2a94: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x2c2a94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x2c2a98: 0x8c4b0788  lw          $t3, 0x788($v0)
    ctx->pc = 0x2c2a98u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
    // 0x2c2a9c: 0x254ac560  addiu       $t2, $t2, -0x3AA0
    ctx->pc = 0x2c2a9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952288));
    // 0x2c2aa0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2c2aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x2c2aa4: 0x25291430  addiu       $t1, $t1, 0x1430
    ctx->pc = 0x2c2aa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5168));
    // 0x2c2aa8: 0x2508cfe0  addiu       $t0, $t0, -0x3020
    ctx->pc = 0x2c2aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954976));
    // 0x2c2aac: 0x24e724a0  addiu       $a3, $a3, 0x24A0
    ctx->pc = 0x2c2aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9376));
    // 0x2c2ab0: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x2c2ab0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x2c2ab4: 0x24c62460  addiu       $a2, $a2, 0x2460
    ctx->pc = 0x2c2ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9312));
    // 0x2c2ab8: 0x914a0000  lbu         $t2, 0x0($t2)
    ctx->pc = 0x2c2ab8u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2c2abc: 0x24a513b0  addiu       $a1, $a1, 0x13B0
    ctx->pc = 0x2c2abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5040));
    // 0x2c2ac0: 0x248413f0  addiu       $a0, $a0, 0x13F0
    ctx->pc = 0x2c2ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5104));
    // 0x2c2ac4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c2ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c2ac8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c2ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2acc: 0xa20a004d  sb          $t2, 0x4D($s0)
    ctx->pc = 0x2c2accu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 10));
    // 0x2c2ad0: 0xae090000  sw          $t1, 0x0($s0)
    ctx->pc = 0x2c2ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 9));
    // 0x2c2ad4: 0xae080050  sw          $t0, 0x50($s0)
    ctx->pc = 0x2c2ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 8));
    // 0x2c2ad8: 0xae070050  sw          $a3, 0x50($s0)
    ctx->pc = 0x2c2ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 7));
    // 0x2c2adc: 0xae060050  sw          $a2, 0x50($s0)
    ctx->pc = 0x2c2adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 6));
    // 0x2c2ae0: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x2c2ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x2c2ae4: 0xae050050  sw          $a1, 0x50($s0)
    ctx->pc = 0x2c2ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 5));
    // 0x2c2ae8: 0xae100058  sw          $s0, 0x58($s0)
    ctx->pc = 0x2c2ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 16));
    // 0x2c2aec: 0xae080060  sw          $t0, 0x60($s0)
    ctx->pc = 0x2c2aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 8));
    // 0x2c2af0: 0xae070060  sw          $a3, 0x60($s0)
    ctx->pc = 0x2c2af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 7));
    // 0x2c2af4: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x2c2af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
    // 0x2c2af8: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x2c2af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x2c2afc: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x2c2afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x2c2b00: 0xae100080  sw          $s0, 0x80($s0)
    ctx->pc = 0x2c2b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 16));
    // 0x2c2b04: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x2c2b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x2c2b08: 0xa2000088  sb          $zero, 0x88($s0)
    ctx->pc = 0x2c2b08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 136), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c2b0c: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x2c2b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x2c2b10: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x2c2b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x2c2b14: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x2c2b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
    // 0x2c2b18: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x2c2b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x2c2b1c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x2c2b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x2c2b20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c2b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2b24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c2b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2b28: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2B28u;
            // 0x2c2b2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C2B30u;
    // 0x2c2b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c2b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c2b34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c2b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c2b38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c2b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c2b3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c2b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c2b40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c2b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2b44: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C2B44u;
    {
        const bool branch_taken_0x2c2b44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2B44u;
            // 0x2c2b48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2b44) {
            ctx->pc = 0x2C2BA8u;
            goto label_2c2ba8;
        }
    }
    ctx->pc = 0x2C2B4Cu;
    // 0x2c2b4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c2b50: 0x244213f0  addiu       $v0, $v0, 0x13F0
    ctx->pc = 0x2c2b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5104));
    // 0x2c2b54: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C2B54u;
    {
        const bool branch_taken_0x2c2b54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2B54u;
            // 0x2c2b58: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2b54) {
            ctx->pc = 0x2C2B90u;
            goto label_2c2b90;
        }
    }
    ctx->pc = 0x2C2B5Cu;
    // 0x2c2b5c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c2b60: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x2c2b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
    // 0x2c2b64: 0xc0d37dc  jal         func_34DF70
    ctx->pc = 0x2C2B64u;
    SET_GPR_U32(ctx, 31, 0x2C2B6Cu);
    ctx->pc = 0x2C2B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2B64u;
            // 0x2c2b68: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2B6Cu; }
        if (ctx->pc != 0x2C2B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2B6Cu; }
        if (ctx->pc != 0x2C2B6Cu) { return; }
    }
    ctx->pc = 0x2C2B6Cu;
label_2c2b6c:
    // 0x2c2b6c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2B6Cu;
    {
        const bool branch_taken_0x2c2b6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2b6c) {
            ctx->pc = 0x2C2B70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2B6Cu;
            // 0x2c2b70: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C2B94u;
            goto label_2c2b94;
        }
    }
    ctx->pc = 0x2C2B74u;
    // 0x2c2b74: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c2b78: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x2c2b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
    // 0x2c2b7c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2B7Cu;
    {
        const bool branch_taken_0x2c2b7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2B7Cu;
            // 0x2c2b80: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2b7c) {
            ctx->pc = 0x2C2B90u;
            goto label_2c2b90;
        }
    }
    ctx->pc = 0x2C2B84u;
    // 0x2c2b84: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c2b88: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c2b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2c2b8c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c2b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2c2b90:
    // 0x2c2b90: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c2b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2c2b94:
    // 0x2c2b94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c2b94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c2b98: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2B98u;
    {
        const bool branch_taken_0x2c2b98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c2b98) {
            ctx->pc = 0x2C2B9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2B98u;
            // 0x2c2b9c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C2BACu;
            goto label_2c2bac;
        }
    }
    ctx->pc = 0x2C2BA0u;
    // 0x2c2ba0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C2BA0u;
    SET_GPR_U32(ctx, 31, 0x2C2BA8u);
    ctx->pc = 0x2C2BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2BA0u;
            // 0x2c2ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2BA8u; }
        if (ctx->pc != 0x2C2BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2BA8u; }
        if (ctx->pc != 0x2C2BA8u) { return; }
    }
    ctx->pc = 0x2C2BA8u;
label_2c2ba8:
    // 0x2c2ba8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c2ba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c2bac:
    // 0x2c2bac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c2bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c2bb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c2bb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2bb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c2bb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2BB8u;
            // 0x2c2bbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C2BC0u;
    // 0x2c2bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c2bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c2bc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c2bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c2bc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c2bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c2bcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c2bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c2bd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c2bd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2bd4: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C2BD4u;
    {
        const bool branch_taken_0x2c2bd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2BD4u;
            // 0x2c2bd8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2bd4) {
            ctx->pc = 0x2C2C38u;
            goto label_2c2c38;
        }
    }
    ctx->pc = 0x2C2BDCu;
    // 0x2c2bdc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c2be0: 0x244213b0  addiu       $v0, $v0, 0x13B0
    ctx->pc = 0x2c2be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5040));
    // 0x2c2be4: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C2BE4u;
    {
        const bool branch_taken_0x2c2be4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2BE4u;
            // 0x2c2be8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2be4) {
            ctx->pc = 0x2C2C20u;
            goto label_2c2c20;
        }
    }
    ctx->pc = 0x2C2BECu;
    // 0x2c2bec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c2bf0: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x2c2bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
    // 0x2c2bf4: 0xc0d37dc  jal         func_34DF70
    ctx->pc = 0x2C2BF4u;
    SET_GPR_U32(ctx, 31, 0x2C2BFCu);
    ctx->pc = 0x2C2BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2BF4u;
            // 0x2c2bf8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2BFCu; }
        if (ctx->pc != 0x2C2BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2BFCu; }
        if (ctx->pc != 0x2C2BFCu) { return; }
    }
    ctx->pc = 0x2C2BFCu;
label_2c2bfc:
    // 0x2c2bfc: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2BFCu;
    {
        const bool branch_taken_0x2c2bfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2bfc) {
            ctx->pc = 0x2C2C00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2BFCu;
            // 0x2c2c00: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C2C24u;
            goto label_2c2c24;
        }
    }
    ctx->pc = 0x2C2C04u;
    // 0x2c2c04: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c2c08: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x2c2c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
    // 0x2c2c0c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2C0Cu;
    {
        const bool branch_taken_0x2c2c0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2C0Cu;
            // 0x2c2c10: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2c0c) {
            ctx->pc = 0x2C2C20u;
            goto label_2c2c20;
        }
    }
    ctx->pc = 0x2C2C14u;
    // 0x2c2c14: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c2c18: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c2c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2c2c1c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c2c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2c2c20:
    // 0x2c2c20: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c2c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2c2c24:
    // 0x2c2c24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c2c24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c2c28: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2C28u;
    {
        const bool branch_taken_0x2c2c28 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c2c28) {
            ctx->pc = 0x2C2C2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2C28u;
            // 0x2c2c2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C2C3Cu;
            goto label_2c2c3c;
        }
    }
    ctx->pc = 0x2C2C30u;
    // 0x2c2c30: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C2C30u;
    SET_GPR_U32(ctx, 31, 0x2C2C38u);
    ctx->pc = 0x2C2C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2C30u;
            // 0x2c2c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2C38u; }
        if (ctx->pc != 0x2C2C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2C38u; }
        if (ctx->pc != 0x2C2C38u) { return; }
    }
    ctx->pc = 0x2C2C38u;
label_2c2c38:
    // 0x2c2c38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c2c38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c2c3c:
    // 0x2c2c3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c2c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c2c40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c2c40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2c44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c2c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2c48: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2C48u;
            // 0x2c2c4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C2C50u;
}
