#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F06B0
// Address: 0x4f06b0 - 0x4f0970
void sub_004F06B0_0x4f06b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F06B0_0x4f06b0");
#endif

    switch (ctx->pc) {
        case 0x4f06e0u: goto label_4f06e0;
        case 0x4f0734u: goto label_4f0734;
        case 0x4f07c0u: goto label_4f07c0;
        case 0x4f07e0u: goto label_4f07e0;
        case 0x4f07f4u: goto label_4f07f4;
        case 0x4f0800u: goto label_4f0800;
        case 0x4f0804u: goto label_4f0804;
        case 0x4f0828u: goto label_4f0828;
        case 0x4f08b0u: goto label_4f08b0;
        case 0x4f08b8u: goto label_4f08b8;
        case 0x4f090cu: goto label_4f090c;
        default: break;
    }

    ctx->pc = 0x4f06b0u;

    // 0x4f06b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4f06b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4f06b4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4f06b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4f06b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4f06b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4f06bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4f06bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4f06c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f06c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4f06c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4f06c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f06c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f06c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4f06cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f06ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4f06d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4f06d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f06d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4f06d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f06d8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x4F06D8u;
    SET_GPR_U32(ctx, 31, 0x4F06E0u);
    ctx->pc = 0x4F06DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F06D8u;
            // 0x4f06dc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F06E0u; }
        if (ctx->pc != 0x4F06E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F06E0u; }
        if (ctx->pc != 0x4F06E0u) { return; }
    }
    ctx->pc = 0x4F06E0u;
label_4f06e0:
    // 0x4f06e0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4f06e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4f06e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f06e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4f06e8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4f06e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x4f06ec: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4f06ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x4f06f0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4f06f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4f06f4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4f06f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x4f06f8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4f06f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4f06fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4f06fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f0700: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4f0700u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x4f0704: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f0704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4f0708: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4f0708u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x4f070c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4f070cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4f0710: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4f0710u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x4f0714: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4f0714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x4f0718: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4f0718u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x4f071c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4f071cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x4f0720: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4f0720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x4f0724: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4f0724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4f0728: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4f0728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4f072c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x4F072Cu;
    SET_GPR_U32(ctx, 31, 0x4F0734u);
    ctx->pc = 0x4F0730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F072Cu;
            // 0x4f0730: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0734u; }
        if (ctx->pc != 0x4F0734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0734u; }
        if (ctx->pc != 0x4F0734u) { return; }
    }
    ctx->pc = 0x4F0734u;
label_4f0734:
    // 0x4f0734: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f0734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4f0738: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4f0738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x4f073c: 0x24633ef8  addiu       $v1, $v1, 0x3EF8
    ctx->pc = 0x4f073cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16120));
    // 0x4f0740: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4f0740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x4f0744: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4f0744u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x4f0748: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4f0748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4f074c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f074cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4f0750: 0xac44aad8  sw          $a0, -0x5528($v0)
    ctx->pc = 0x4f0750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945496), GPR_U32(ctx, 4));
    // 0x4f0754: 0x24633f10  addiu       $v1, $v1, 0x3F10
    ctx->pc = 0x4f0754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16144));
    // 0x4f0758: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f0758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4f075c: 0x24423f48  addiu       $v0, $v0, 0x3F48
    ctx->pc = 0x4f075cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16200));
    // 0x4f0760: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4f0760u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4f0764: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4f0764u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x4f0768: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4f0768u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x4f076c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4f076cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x4f0770: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4f0770u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x4f0774: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4f0774u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x4f0778: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4f0778u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x4f077c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4f077cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x4f0780: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4f0780u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x4f0784: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4f0784u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x4f0788: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4f0788u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x4f078c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4f078cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x4f0790: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x4f0790u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    // 0x4f0794: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x4f0794u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x4f0798: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4f0798u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x4f079c: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x4F079Cu;
    {
        const bool branch_taken_0x4f079c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f079c) {
            ctx->pc = 0x4F0838u;
            goto label_4f0838;
        }
    }
    ctx->pc = 0x4F07A4u;
    // 0x4f07a4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4f07a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4f07a8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4f07a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4f07ac: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4f07acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4f07b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4f07b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4f07b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4f07b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4f07b8: 0xc040138  jal         func_1004E0
    ctx->pc = 0x4F07B8u;
    SET_GPR_U32(ctx, 31, 0x4F07C0u);
    ctx->pc = 0x4F07BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F07B8u;
            // 0x4f07bc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F07C0u; }
        if (ctx->pc != 0x4F07C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F07C0u; }
        if (ctx->pc != 0x4F07C0u) { return; }
    }
    ctx->pc = 0x4F07C0u;
label_4f07c0:
    // 0x4f07c0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x4f07c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x4f07c4: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x4f07c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x4f07c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4f07c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f07cc: 0x24a50860  addiu       $a1, $a1, 0x860
    ctx->pc = 0x4f07ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2144));
    // 0x4f07d0: 0x24c60170  addiu       $a2, $a2, 0x170
    ctx->pc = 0x4f07d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 368));
    // 0x4f07d4: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x4f07d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x4f07d8: 0xc040840  jal         func_102100
    ctx->pc = 0x4F07D8u;
    SET_GPR_U32(ctx, 31, 0x4F07E0u);
    ctx->pc = 0x4F07DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F07D8u;
            // 0x4f07dc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F07E0u; }
        if (ctx->pc != 0x4F07E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F07E0u; }
        if (ctx->pc != 0x4F07E0u) { return; }
    }
    ctx->pc = 0x4F07E0u;
label_4f07e0:
    // 0x4f07e0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4f07e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x4f07e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4f07e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f07e8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4f07e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x4f07ec: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x4F07ECu;
    SET_GPR_U32(ctx, 31, 0x4F07F4u);
    ctx->pc = 0x4F07F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F07ECu;
            // 0x4f07f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F07F4u; }
        if (ctx->pc != 0x4F07F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F07F4u; }
        if (ctx->pc != 0x4F07F4u) { return; }
    }
    ctx->pc = 0x4F07F4u;
label_4f07f4:
    // 0x4f07f4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4f07f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x4f07f8: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x4F07F8u;
    SET_GPR_U32(ctx, 31, 0x4F0800u);
    ctx->pc = 0x4F07FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F07F8u;
            // 0x4f07fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0800u; }
        if (ctx->pc != 0x4F0800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0800u; }
        if (ctx->pc != 0x4F0800u) { return; }
    }
    ctx->pc = 0x4F0800u;
label_4f0800:
    // 0x4f0800: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4f0800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f0804:
    // 0x4f0804: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4f0804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x4f0808: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4f0808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x4f080c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4f080cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x4f0810: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4f0810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f0814: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4f0814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x4f0818: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4f0818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x4f081c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4f081cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4f0820: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x4F0820u;
    SET_GPR_U32(ctx, 31, 0x4F0828u);
    ctx->pc = 0x4F0824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0820u;
            // 0x4f0824: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0828u; }
        if (ctx->pc != 0x4F0828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F0828u; }
        if (ctx->pc != 0x4F0828u) { return; }
    }
    ctx->pc = 0x4F0828u;
label_4f0828:
    // 0x4f0828: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4f0828u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4f082c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4f082cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4f0830: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4F0830u;
    {
        const bool branch_taken_0x4f0830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F0834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0830u;
            // 0x4f0834: 0x265200b0  addiu       $s2, $s2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0830) {
            ctx->pc = 0x4F0804u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f0804;
        }
    }
    ctx->pc = 0x4F0838u;
label_4f0838:
    // 0x4f0838: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4f0838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f083c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4f083cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4f0840: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4f0840u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f0844: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f0844u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f0848: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f0848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f084c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f084cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f0850: 0x3e00008  jr          $ra
    ctx->pc = 0x4F0850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0850u;
            // 0x4f0854: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F0858u;
    // 0x4f0858: 0x0  nop
    ctx->pc = 0x4f0858u;
    // NOP
    // 0x4f085c: 0x0  nop
    ctx->pc = 0x4f085cu;
    // NOP
    // 0x4f0860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f0860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f0864: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f0864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4f0868: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f0868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4f086c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4f086cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4f0870: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f0870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4f0874: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4f0874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x4f0878: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4f0878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4f087c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4f087cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4f0880: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x4f0880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x4f0884: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4f0884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f0888: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f0888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4f088c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f088cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0890: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x4f0890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x4f0894: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4f0894u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x4f0898: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x4f0898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x4f089c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4f089cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x4f08a0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x4f08a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x4f08a4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x4f08a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x4f08a8: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x4F08A8u;
    SET_GPR_U32(ctx, 31, 0x4F08B0u);
    ctx->pc = 0x4F08ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F08A8u;
            // 0x4f08ac: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F08B0u; }
        if (ctx->pc != 0x4F08B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F08B0u; }
        if (ctx->pc != 0x4F08B0u) { return; }
    }
    ctx->pc = 0x4F08B0u;
label_4f08b0:
    // 0x4f08b0: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x4F08B0u;
    SET_GPR_U32(ctx, 31, 0x4F08B8u);
    ctx->pc = 0x4F08B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F08B0u;
            // 0x4f08b4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F08B8u; }
        if (ctx->pc != 0x4F08B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F08B8u; }
        if (ctx->pc != 0x4F08B8u) { return; }
    }
    ctx->pc = 0x4F08B8u;
label_4f08b8:
    // 0x4f08b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f08b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4f08bc: 0x3c090064  lui         $t1, 0x64
    ctx->pc = 0x4f08bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)100 << 16));
    // 0x4f08c0: 0x8c470e80  lw          $a3, 0xE80($v0)
    ctx->pc = 0x4f08c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x4f08c4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f08c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4f08c8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x4f08c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x4f08cc: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x4f08ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x4f08d0: 0x2529c560  addiu       $t1, $t1, -0x3AA0
    ctx->pc = 0x4f08d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952288));
    // 0x4f08d4: 0x24633fb0  addiu       $v1, $v1, 0x3FB0
    ctx->pc = 0x4f08d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16304));
    // 0x4f08d8: 0x8cea0788  lw          $t2, 0x788($a3)
    ctx->pc = 0x4f08d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1928)));
    // 0x4f08dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4f08dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f08e0: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x4f08e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x4f08e4: 0x24a50930  addiu       $a1, $a1, 0x930
    ctx->pc = 0x4f08e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2352));
    // 0x4f08e8: 0x24c60220  addiu       $a2, $a2, 0x220
    ctx->pc = 0x4f08e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 544));
    // 0x4f08ec: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x4f08ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4f08f0: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x4f08f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x4f08f4: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x4f08f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x4f08f8: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x4f08f8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f08fc: 0xa209004d  sb          $t1, 0x4D($s0)
    ctx->pc = 0x4f08fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 9));
    // 0x4f0900: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f0900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f0904: 0xc040804  jal         func_102010
    ctx->pc = 0x4F0904u;
    SET_GPR_U32(ctx, 31, 0x4F090Cu);
    ctx->pc = 0x4F0908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0904u;
            // 0x4f0908: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F090Cu; }
        if (ctx->pc != 0x4F090Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F090Cu; }
        if (ctx->pc != 0x4F090Cu) { return; }
    }
    ctx->pc = 0x4F090Cu;
label_4f090c:
    // 0x4f090c: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x4f090cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x4f0910: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4f0910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0914: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f0914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f0918: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f0918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f091c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F091Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F091Cu;
            // 0x4f0920: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F0924u;
    // 0x4f0924: 0x0  nop
    ctx->pc = 0x4f0924u;
    // NOP
    // 0x4f0928: 0x0  nop
    ctx->pc = 0x4f0928u;
    // NOP
    // 0x4f092c: 0x0  nop
    ctx->pc = 0x4f092cu;
    // NOP
    // 0x4f0930: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f0930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4f0934: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4f0934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4f0938: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4f0938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x4f093c: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x4f093cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x4f0940: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4f0940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4f0944: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f0944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4f0948: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x4f0948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
    // 0x4f094c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4f094cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4f0950: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4f0950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4f0954: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x4f0954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
    // 0x4f0958: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4f0958u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4f095c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x4f095cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x4f0960: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4f0960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f0964: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f0964u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4f0968: 0x3e00008  jr          $ra
    ctx->pc = 0x4F0968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F096Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F0968u;
            // 0x4f096c: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F0970u;
}
