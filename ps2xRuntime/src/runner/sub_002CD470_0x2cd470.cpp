#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CD470
// Address: 0x2cd470 - 0x2cd6e0
void sub_002CD470_0x2cd470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD470_0x2cd470");
#endif

    switch (ctx->pc) {
        case 0x2cd4a0u: goto label_2cd4a0;
        case 0x2cd4f4u: goto label_2cd4f4;
        case 0x2cd570u: goto label_2cd570;
        case 0x2cd590u: goto label_2cd590;
        case 0x2cd5a4u: goto label_2cd5a4;
        case 0x2cd5b0u: goto label_2cd5b0;
        case 0x2cd5b4u: goto label_2cd5b4;
        case 0x2cd5d8u: goto label_2cd5d8;
        case 0x2cd660u: goto label_2cd660;
        case 0x2cd668u: goto label_2cd668;
        default: break;
    }

    ctx->pc = 0x2cd470u;

    // 0x2cd470: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cd470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2cd474: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2cd474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cd478: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cd478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2cd47c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cd47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2cd480: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cd480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cd484: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2cd484u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cd488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cd48c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cd48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cd490: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cd490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd494: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2cd494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd498: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2CD498u;
    SET_GPR_U32(ctx, 31, 0x2CD4A0u);
    ctx->pc = 0x2CD49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD498u;
            // 0x2cd49c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD4A0u; }
        if (ctx->pc != 0x2CD4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD4A0u; }
        if (ctx->pc != 0x2CD4A0u) { return; }
    }
    ctx->pc = 0x2CD4A0u;
label_2cd4a0:
    // 0x2cd4a0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cd4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cd4a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cd4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cd4a8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2cd4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2cd4ac: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2cd4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2cd4b0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2cd4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2cd4b4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2cd4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2cd4b8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2cd4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2cd4bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2cd4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cd4c0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2cd4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2cd4c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cd4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2cd4c8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2cd4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2cd4cc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2cd4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2cd4d0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2cd4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2cd4d4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2cd4d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2cd4d8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2cd4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2cd4dc: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2cd4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2cd4e0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2cd4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2cd4e4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2cd4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2cd4e8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2cd4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2cd4ec: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2CD4ECu;
    SET_GPR_U32(ctx, 31, 0x2CD4F4u);
    ctx->pc = 0x2CD4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD4ECu;
            // 0x2cd4f0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD4F4u; }
        if (ctx->pc != 0x2CD4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD4F4u; }
        if (ctx->pc != 0x2CD4F4u) { return; }
    }
    ctx->pc = 0x2CD4F4u;
label_2cd4f4:
    // 0x2cd4f4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cd4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cd4f8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2cd4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2cd4fc: 0x2463fee8  addiu       $v1, $v1, -0x118
    ctx->pc = 0x2cd4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967016));
    // 0x2cd500: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2cd500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2cd504: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2cd504u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2cd508: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cd508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2cd50c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cd50cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cd510: 0xac440e48  sw          $a0, 0xE48($v0)
    ctx->pc = 0x2cd510u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3656), GPR_U32(ctx, 4));
    // 0x2cd514: 0x2463ff00  addiu       $v1, $v1, -0x100
    ctx->pc = 0x2cd514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
    // 0x2cd518: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cd518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cd51c: 0x2442ff38  addiu       $v0, $v0, -0xC8
    ctx->pc = 0x2cd51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967096));
    // 0x2cd520: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2cd520u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2cd524: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2cd524u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2cd528: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2cd528u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2cd52c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2cd52cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2cd530: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2cd530u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2cd534: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2cd534u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2cd538: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2cd538u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2cd53c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2cd53cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2cd540: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2cd540u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2cd544: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2cd544u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2cd548: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2cd548u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2cd54c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2cd54cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2cd550: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2cd550u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2cd554: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2CD554u;
    {
        const bool branch_taken_0x2cd554 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd554) {
            ctx->pc = 0x2CD5E8u;
            goto label_2cd5e8;
        }
    }
    ctx->pc = 0x2CD55Cu;
    // 0x2cd55c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2cd55cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2cd560: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2cd560u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2cd564: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2cd564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2cd568: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2CD568u;
    SET_GPR_U32(ctx, 31, 0x2CD570u);
    ctx->pc = 0x2CD56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD568u;
            // 0x2cd56c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD570u; }
        if (ctx->pc != 0x2CD570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD570u; }
        if (ctx->pc != 0x2CD570u) { return; }
    }
    ctx->pc = 0x2CD570u;
label_2cd570:
    // 0x2cd570: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2cd570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x2cd574: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2cd574u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x2cd578: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cd578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd57c: 0x24a5d610  addiu       $a1, $a1, -0x29F0
    ctx->pc = 0x2cd57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956560));
    // 0x2cd580: 0x24c6ceb0  addiu       $a2, $a2, -0x3150
    ctx->pc = 0x2cd580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954672));
    // 0x2cd584: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x2cd584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2cd588: 0xc040840  jal         func_102100
    ctx->pc = 0x2CD588u;
    SET_GPR_U32(ctx, 31, 0x2CD590u);
    ctx->pc = 0x2CD58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD588u;
            // 0x2cd58c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD590u; }
        if (ctx->pc != 0x2CD590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD590u; }
        if (ctx->pc != 0x2CD590u) { return; }
    }
    ctx->pc = 0x2CD590u;
label_2cd590:
    // 0x2cd590: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2cd590u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2cd594: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cd594u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd598: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2cd598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2cd59c: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2CD59Cu;
    SET_GPR_U32(ctx, 31, 0x2CD5A4u);
    ctx->pc = 0x2CD5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD59Cu;
            // 0x2cd5a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD5A4u; }
        if (ctx->pc != 0x2CD5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD5A4u; }
        if (ctx->pc != 0x2CD5A4u) { return; }
    }
    ctx->pc = 0x2CD5A4u;
label_2cd5a4:
    // 0x2cd5a4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2cd5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2cd5a8: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2CD5A8u;
    SET_GPR_U32(ctx, 31, 0x2CD5B0u);
    ctx->pc = 0x2CD5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD5A8u;
            // 0x2cd5ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD5B0u; }
        if (ctx->pc != 0x2CD5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD5B0u; }
        if (ctx->pc != 0x2CD5B0u) { return; }
    }
    ctx->pc = 0x2CD5B0u;
label_2cd5b0:
    // 0x2cd5b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2cd5b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cd5b4:
    // 0x2cd5b4: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2cd5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2cd5b8: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2cd5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2cd5bc: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2cd5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2cd5c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2cd5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd5c4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2cd5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2cd5c8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2cd5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2cd5cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cd5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cd5d0: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2CD5D0u;
    SET_GPR_U32(ctx, 31, 0x2CD5D8u);
    ctx->pc = 0x2CD5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD5D0u;
            // 0x2cd5d4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD5D8u; }
        if (ctx->pc != 0x2CD5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD5D8u; }
        if (ctx->pc != 0x2CD5D8u) { return; }
    }
    ctx->pc = 0x2CD5D8u;
label_2cd5d8:
    // 0x2cd5d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2cd5d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2cd5dc: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2cd5dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2cd5e0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2CD5E0u;
    {
        const bool branch_taken_0x2cd5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD5E0u;
            // 0x2cd5e4: 0x26520070  addiu       $s2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd5e0) {
            ctx->pc = 0x2CD5B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cd5b4;
        }
    }
    ctx->pc = 0x2CD5E8u;
label_2cd5e8:
    // 0x2cd5e8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2cd5e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd5ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cd5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cd5f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cd5f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cd5f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cd5f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd5f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cd5f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd5fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cd5fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd600: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD600u;
            // 0x2cd604: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD608u;
    // 0x2cd608: 0x0  nop
    ctx->pc = 0x2cd608u;
    // NOP
    // 0x2cd60c: 0x0  nop
    ctx->pc = 0x2cd60cu;
    // NOP
    // 0x2cd610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cd610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cd614: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cd614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cd618: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cd618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cd61c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2cd61cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cd620: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cd620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cd624: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2cd624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2cd628: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cd628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cd62c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2cd62cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2cd630: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2cd630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x2cd634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cd634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd638: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2cd638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2cd63c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cd63cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd640: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2cd640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2cd644: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2cd644u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2cd648: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2cd648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2cd64c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2cd64cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2cd650: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2cd650u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd654: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2cd654u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cd658: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2CD658u;
    SET_GPR_U32(ctx, 31, 0x2CD660u);
    ctx->pc = 0x2CD65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD658u;
            // 0x2cd65c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD660u; }
        if (ctx->pc != 0x2CD660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD660u; }
        if (ctx->pc != 0x2CD660u) { return; }
    }
    ctx->pc = 0x2CD660u;
label_2cd660:
    // 0x2cd660: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2CD660u;
    SET_GPR_U32(ctx, 31, 0x2CD668u);
    ctx->pc = 0x2CD664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD660u;
            // 0x2cd664: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD668u; }
        if (ctx->pc != 0x2CD668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD668u; }
        if (ctx->pc != 0x2CD668u) { return; }
    }
    ctx->pc = 0x2CD668u;
label_2cd668:
    // 0x2cd668: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cd668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2cd66c: 0x3c070064  lui         $a3, 0x64
    ctx->pc = 0x2cd66cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)100 << 16));
    // 0x2cd670: 0x8c480e80  lw          $t0, 0xE80($v0)
    ctx->pc = 0x2cd670u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2cd674: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x2cd674u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x2cd678: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x2cd678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x2cd67c: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2cd67cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x2cd680: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cd680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cd684: 0x24e7c560  addiu       $a3, $a3, -0x3AA0
    ctx->pc = 0x2cd684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952288));
    // 0x2cd688: 0x8d080788  lw          $t0, 0x788($t0)
    ctx->pc = 0x2cd688u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1928)));
    // 0x2cd68c: 0x24c66440  addiu       $a2, $a2, 0x6440
    ctx->pc = 0x2cd68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25664));
    // 0x2cd690: 0x24a52660  addiu       $a1, $a1, 0x2660
    ctx->pc = 0x2cd690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9824));
    // 0x2cd694: 0x248463d0  addiu       $a0, $a0, 0x63D0
    ctx->pc = 0x2cd694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25552));
    // 0x2cd698: 0x24636424  addiu       $v1, $v1, 0x6424
    ctx->pc = 0x2cd698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25636));
    // 0x2cd69c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cd69cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd6a0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2cd6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2cd6a4: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x2cd6a4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cd6a8: 0xa207004d  sb          $a3, 0x4D($s0)
    ctx->pc = 0x2cd6a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 7));
    // 0x2cd6ac: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x2cd6acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x2cd6b0: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2cd6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2cd6b4: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x2cd6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x2cd6b8: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2cd6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2cd6bc: 0xae050064  sw          $a1, 0x64($s0)
    ctx->pc = 0x2cd6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 5));
    // 0x2cd6c0: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2cd6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x2cd6c4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2cd6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2cd6c8: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2cd6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2cd6cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cd6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd6d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cd6d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd6d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD6D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD6D4u;
            // 0x2cd6d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD6DCu;
    // 0x2cd6dc: 0x0  nop
    ctx->pc = 0x2cd6dcu;
    // NOP
}
