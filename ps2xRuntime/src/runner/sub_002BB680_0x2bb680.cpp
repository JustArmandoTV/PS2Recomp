#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BB680
// Address: 0x2bb680 - 0x2bb900
void sub_002BB680_0x2bb680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB680_0x2bb680");
#endif

    switch (ctx->pc) {
        case 0x2bb6b0u: goto label_2bb6b0;
        case 0x2bb704u: goto label_2bb704;
        case 0x2bb780u: goto label_2bb780;
        case 0x2bb7a0u: goto label_2bb7a0;
        case 0x2bb7b4u: goto label_2bb7b4;
        case 0x2bb7c0u: goto label_2bb7c0;
        case 0x2bb7c4u: goto label_2bb7c4;
        case 0x2bb7e8u: goto label_2bb7e8;
        case 0x2bb834u: goto label_2bb834;
        case 0x2bb83cu: goto label_2bb83c;
        case 0x2bb85cu: goto label_2bb85c;
        case 0x2bb864u: goto label_2bb864;
        case 0x2bb8a8u: goto label_2bb8a8;
        case 0x2bb8b0u: goto label_2bb8b0;
        default: break;
    }

    ctx->pc = 0x2bb680u;

    // 0x2bb680: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bb680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2bb684: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2bb684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bb688: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bb688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2bb68c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bb68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2bb690: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bb690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bb694: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2bb694u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb698: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bb698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bb69c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bb69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bb6a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2bb6a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb6a4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2bb6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb6a8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2BB6A8u;
    SET_GPR_U32(ctx, 31, 0x2BB6B0u);
    ctx->pc = 0x2BB6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB6A8u;
            // 0x2bb6ac: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB6B0u; }
        if (ctx->pc != 0x2BB6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB6B0u; }
        if (ctx->pc != 0x2BB6B0u) { return; }
    }
    ctx->pc = 0x2BB6B0u;
label_2bb6b0:
    // 0x2bb6b0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bb6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bb6b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bb6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bb6b8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2bb6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2bb6bc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2bb6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2bb6c0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2bb6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2bb6c4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2bb6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2bb6c8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2bb6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2bb6cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2bb6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bb6d0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2bb6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2bb6d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bb6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2bb6d8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2bb6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2bb6dc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2bb6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bb6e0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2bb6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2bb6e4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2bb6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2bb6e8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2bb6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2bb6ec: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2bb6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2bb6f0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2bb6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2bb6f4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2bb6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2bb6f8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2bb6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2bb6fc: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2BB6FCu;
    SET_GPR_U32(ctx, 31, 0x2BB704u);
    ctx->pc = 0x2BB700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB6FCu;
            // 0x2bb700: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB704u; }
        if (ctx->pc != 0x2BB704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB704u; }
        if (ctx->pc != 0x2BB704u) { return; }
    }
    ctx->pc = 0x2BB704u;
label_2bb704:
    // 0x2bb704: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bb704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bb708: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2bb708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2bb70c: 0x24632330  addiu       $v1, $v1, 0x2330
    ctx->pc = 0x2bb70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9008));
    // 0x2bb710: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2bb710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2bb714: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2bb714u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2bb718: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bb718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2bb71c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bb71cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bb720: 0xac440cf8  sw          $a0, 0xCF8($v0)
    ctx->pc = 0x2bb720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3320), GPR_U32(ctx, 4));
    // 0x2bb724: 0x24632340  addiu       $v1, $v1, 0x2340
    ctx->pc = 0x2bb724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9024));
    // 0x2bb728: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bb728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bb72c: 0x24422378  addiu       $v0, $v0, 0x2378
    ctx->pc = 0x2bb72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9080));
    // 0x2bb730: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2bb730u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2bb734: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2bb734u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2bb738: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2bb738u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2bb73c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2bb73cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2bb740: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2bb740u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2bb744: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2bb744u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2bb748: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2bb748u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2bb74c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2bb74cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2bb750: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2bb750u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2bb754: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2bb754u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2bb758: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2bb758u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2bb75c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2bb75cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2bb760: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2bb760u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2bb764: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2BB764u;
    {
        const bool branch_taken_0x2bb764 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb764) {
            ctx->pc = 0x2BB7F8u;
            goto label_2bb7f8;
        }
    }
    ctx->pc = 0x2BB76Cu;
    // 0x2bb76c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2bb76cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2bb770: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2bb770u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2bb774: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2bb774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2bb778: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2BB778u;
    SET_GPR_U32(ctx, 31, 0x2BB780u);
    ctx->pc = 0x2BB77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB778u;
            // 0x2bb77c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB780u; }
        if (ctx->pc != 0x2BB780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB780u; }
        if (ctx->pc != 0x2BB780u) { return; }
    }
    ctx->pc = 0x2BB780u;
label_2bb780:
    // 0x2bb780: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bb780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2bb784: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2bb784u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2bb788: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb78c: 0x24a5b820  addiu       $a1, $a1, -0x47E0
    ctx->pc = 0x2bb78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948896));
    // 0x2bb790: 0x24c6af30  addiu       $a2, $a2, -0x50D0
    ctx->pc = 0x2bb790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946608));
    // 0x2bb794: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x2bb794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2bb798: 0xc040840  jal         func_102100
    ctx->pc = 0x2BB798u;
    SET_GPR_U32(ctx, 31, 0x2BB7A0u);
    ctx->pc = 0x2BB79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB798u;
            // 0x2bb79c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB7A0u; }
        if (ctx->pc != 0x2BB7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB7A0u; }
        if (ctx->pc != 0x2BB7A0u) { return; }
    }
    ctx->pc = 0x2BB7A0u;
label_2bb7a0:
    // 0x2bb7a0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2bb7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2bb7a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2bb7a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb7a8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2bb7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2bb7ac: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2BB7ACu;
    SET_GPR_U32(ctx, 31, 0x2BB7B4u);
    ctx->pc = 0x2BB7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB7ACu;
            // 0x2bb7b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB7B4u; }
        if (ctx->pc != 0x2BB7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB7B4u; }
        if (ctx->pc != 0x2BB7B4u) { return; }
    }
    ctx->pc = 0x2BB7B4u;
label_2bb7b4:
    // 0x2bb7b4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2bb7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2bb7b8: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2BB7B8u;
    SET_GPR_U32(ctx, 31, 0x2BB7C0u);
    ctx->pc = 0x2BB7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB7B8u;
            // 0x2bb7bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB7C0u; }
        if (ctx->pc != 0x2BB7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB7C0u; }
        if (ctx->pc != 0x2BB7C0u) { return; }
    }
    ctx->pc = 0x2BB7C0u;
label_2bb7c0:
    // 0x2bb7c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2bb7c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb7c4:
    // 0x2bb7c4: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2bb7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2bb7c8: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2bb7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2bb7cc: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2bb7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2bb7d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2bb7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb7d4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2bb7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2bb7d8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2bb7d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2bb7dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bb7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bb7e0: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2BB7E0u;
    SET_GPR_U32(ctx, 31, 0x2BB7E8u);
    ctx->pc = 0x2BB7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB7E0u;
            // 0x2bb7e4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB7E8u; }
        if (ctx->pc != 0x2BB7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB7E8u; }
        if (ctx->pc != 0x2BB7E8u) { return; }
    }
    ctx->pc = 0x2BB7E8u;
label_2bb7e8:
    // 0x2bb7e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2bb7e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2bb7ec: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2bb7ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2bb7f0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2BB7F0u;
    {
        const bool branch_taken_0x2bb7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB7F0u;
            // 0x2bb7f4: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7f0) {
            ctx->pc = 0x2BB7C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bb7c4;
        }
    }
    ctx->pc = 0x2BB7F8u;
label_2bb7f8:
    // 0x2bb7f8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2bb7f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb7fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bb7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bb800: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bb800u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bb804: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bb804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bb808: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bb808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb80c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bb80cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb810: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB810u;
            // 0x2bb814: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BB818u;
    // 0x2bb818: 0x0  nop
    ctx->pc = 0x2bb818u;
    // NOP
    // 0x2bb81c: 0x0  nop
    ctx->pc = 0x2bb81cu;
    // NOP
    // 0x2bb820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bb820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bb824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bb824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bb828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bb828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bb82c: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x2BB82Cu;
    SET_GPR_U32(ctx, 31, 0x2BB834u);
    ctx->pc = 0x2BB830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB82Cu;
            // 0x2bb830: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB834u; }
        if (ctx->pc != 0x2BB834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB834u; }
        if (ctx->pc != 0x2BB834u) { return; }
    }
    ctx->pc = 0x2BB834u;
label_2bb834:
    // 0x2bb834: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x2BB834u;
    SET_GPR_U32(ctx, 31, 0x2BB83Cu);
    ctx->pc = 0x2BB838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB834u;
            // 0x2bb838: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB83Cu; }
        if (ctx->pc != 0x2BB83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB83Cu; }
        if (ctx->pc != 0x2BB83Cu) { return; }
    }
    ctx->pc = 0x2BB83Cu;
label_2bb83c:
    // 0x2bb83c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bb83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bb840: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bb840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bb844: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x2bb844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x2bb848: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x2bb848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x2bb84c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2bb84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2bb850: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x2bb850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x2bb854: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x2BB854u;
    SET_GPR_U32(ctx, 31, 0x2BB85Cu);
    ctx->pc = 0x2BB858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB854u;
            // 0x2bb858: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB85Cu; }
        if (ctx->pc != 0x2BB85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB85Cu; }
        if (ctx->pc != 0x2BB85Cu) { return; }
    }
    ctx->pc = 0x2BB85Cu;
label_2bb85c:
    // 0x2bb85c: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x2BB85Cu;
    SET_GPR_U32(ctx, 31, 0x2BB864u);
    ctx->pc = 0x2BB860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB85Cu;
            // 0x2bb860: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB864u; }
        if (ctx->pc != 0x2BB864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB864u; }
        if (ctx->pc != 0x2BB864u) { return; }
    }
    ctx->pc = 0x2BB864u;
label_2bb864:
    // 0x2bb864: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x2bb864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x2bb868: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x2bb868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x2bb86c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x2bb86cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x2bb870: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x2bb870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x2bb874: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x2bb874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x2bb878: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bb878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb87c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x2bb87cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x2bb880: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2bb880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bb884: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x2bb884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x2bb888: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x2bb888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x2bb88c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x2bb88cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x2bb890: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x2bb890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x2bb894: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x2bb894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x2bb898: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x2bb898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x2bb89c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x2bb89cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x2bb8a0: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x2BB8A0u;
    SET_GPR_U32(ctx, 31, 0x2BB8A8u);
    ctx->pc = 0x2BB8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB8A0u;
            // 0x2bb8a4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB8A8u; }
        if (ctx->pc != 0x2BB8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB8A8u; }
        if (ctx->pc != 0x2BB8A8u) { return; }
    }
    ctx->pc = 0x2BB8A8u;
label_2bb8a8:
    // 0x2bb8a8: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x2BB8A8u;
    SET_GPR_U32(ctx, 31, 0x2BB8B0u);
    ctx->pc = 0x2BB8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB8A8u;
            // 0x2bb8ac: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB8B0u; }
        if (ctx->pc != 0x2BB8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB8B0u; }
        if (ctx->pc != 0x2BB8B0u) { return; }
    }
    ctx->pc = 0x2BB8B0u;
label_2bb8b0:
    // 0x2bb8b0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x2bb8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x2bb8b4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2bb8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2bb8b8: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x2bb8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x2bb8bc: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x2bb8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x2bb8c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2bb8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bb8c4: 0x24843690  addiu       $a0, $a0, 0x3690
    ctx->pc = 0x2bb8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13968));
    // 0x2bb8c8: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x2bb8c8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bb8cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2bb8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2bb8d0: 0x246336d0  addiu       $v1, $v1, 0x36D0
    ctx->pc = 0x2bb8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14032));
    // 0x2bb8d4: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x2bb8d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2bb8d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bb8d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb8dc: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x2bb8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
    // 0x2bb8e0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2bb8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2bb8e4: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x2bb8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x2bb8e8: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x2bb8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x2bb8ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bb8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb8f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bb8f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB8F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB8F4u;
            // 0x2bb8f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BB8FCu;
    // 0x2bb8fc: 0x0  nop
    ctx->pc = 0x2bb8fcu;
    // NOP
}
