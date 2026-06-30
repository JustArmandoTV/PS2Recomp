#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CC830
// Address: 0x2cc830 - 0x2ccaa0
void sub_002CC830_0x2cc830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC830_0x2cc830");
#endif

    switch (ctx->pc) {
        case 0x2cc860u: goto label_2cc860;
        case 0x2cc8b4u: goto label_2cc8b4;
        case 0x2cc930u: goto label_2cc930;
        case 0x2cc950u: goto label_2cc950;
        case 0x2cc964u: goto label_2cc964;
        case 0x2cc970u: goto label_2cc970;
        case 0x2cc974u: goto label_2cc974;
        case 0x2cc998u: goto label_2cc998;
        case 0x2cca20u: goto label_2cca20;
        case 0x2cca28u: goto label_2cca28;
        default: break;
    }

    ctx->pc = 0x2cc830u;

    // 0x2cc830: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cc830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2cc834: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2cc834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cc838: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cc838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2cc83c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cc83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2cc840: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cc840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cc844: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2cc844u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc848: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cc848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cc84c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cc84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cc850: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cc850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc854: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2cc854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc858: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2CC858u;
    SET_GPR_U32(ctx, 31, 0x2CC860u);
    ctx->pc = 0x2CC85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC858u;
            // 0x2cc85c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC860u; }
        if (ctx->pc != 0x2CC860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC860u; }
        if (ctx->pc != 0x2CC860u) { return; }
    }
    ctx->pc = 0x2CC860u;
label_2cc860:
    // 0x2cc860: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cc860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cc864: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cc864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cc868: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2cc868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2cc86c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2cc86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2cc870: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2cc870u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2cc874: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2cc874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2cc878: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2cc878u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2cc87c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2cc87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cc880: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2cc880u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2cc884: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cc884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2cc888: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2cc888u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2cc88c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2cc88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2cc890: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2cc890u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2cc894: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2cc894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2cc898: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2cc898u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2cc89c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2cc89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2cc8a0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2cc8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2cc8a4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2cc8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2cc8a8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2cc8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2cc8ac: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2CC8ACu;
    SET_GPR_U32(ctx, 31, 0x2CC8B4u);
    ctx->pc = 0x2CC8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC8ACu;
            // 0x2cc8b0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC8B4u; }
        if (ctx->pc != 0x2CC8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC8B4u; }
        if (ctx->pc != 0x2CC8B4u) { return; }
    }
    ctx->pc = 0x2CC8B4u;
label_2cc8b4:
    // 0x2cc8b4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cc8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cc8b8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2cc8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2cc8bc: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x2cc8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x2cc8c0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2cc8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2cc8c4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2cc8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2cc8c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cc8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2cc8cc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cc8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cc8d0: 0xac440e40  sw          $a0, 0xE40($v0)
    ctx->pc = 0x2cc8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3648), GPR_U32(ctx, 4));
    // 0x2cc8d4: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x2cc8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x2cc8d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cc8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cc8dc: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x2cc8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x2cc8e0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2cc8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2cc8e4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2cc8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2cc8e8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2cc8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2cc8ec: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2cc8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2cc8f0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2cc8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2cc8f4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2cc8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2cc8f8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2cc8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2cc8fc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2cc8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2cc900: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2cc900u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2cc904: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2cc904u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2cc908: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2cc908u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2cc90c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2cc90cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2cc910: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2cc910u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2cc914: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2CC914u;
    {
        const bool branch_taken_0x2cc914 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc914) {
            ctx->pc = 0x2CC9A8u;
            goto label_2cc9a8;
        }
    }
    ctx->pc = 0x2CC91Cu;
    // 0x2cc91c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2cc91cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2cc920: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2cc920u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2cc924: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2cc924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2cc928: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2CC928u;
    SET_GPR_U32(ctx, 31, 0x2CC930u);
    ctx->pc = 0x2CC92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC928u;
            // 0x2cc92c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC930u; }
        if (ctx->pc != 0x2CC930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC930u; }
        if (ctx->pc != 0x2CC930u) { return; }
    }
    ctx->pc = 0x2CC930u;
label_2cc930:
    // 0x2cc930: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2cc930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x2cc934: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2cc934u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x2cc938: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cc938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc93c: 0x24a5c9d0  addiu       $a1, $a1, -0x3630
    ctx->pc = 0x2cc93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953424));
    // 0x2cc940: 0x24c6c5c0  addiu       $a2, $a2, -0x3A40
    ctx->pc = 0x2cc940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952384));
    // 0x2cc944: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x2cc944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2cc948: 0xc040840  jal         func_102100
    ctx->pc = 0x2CC948u;
    SET_GPR_U32(ctx, 31, 0x2CC950u);
    ctx->pc = 0x2CC94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC948u;
            // 0x2cc94c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC950u; }
        if (ctx->pc != 0x2CC950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC950u; }
        if (ctx->pc != 0x2CC950u) { return; }
    }
    ctx->pc = 0x2CC950u;
label_2cc950:
    // 0x2cc950: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2cc950u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2cc954: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cc954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc958: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2cc958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2cc95c: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2CC95Cu;
    SET_GPR_U32(ctx, 31, 0x2CC964u);
    ctx->pc = 0x2CC960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC95Cu;
            // 0x2cc960: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC964u; }
        if (ctx->pc != 0x2CC964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC964u; }
        if (ctx->pc != 0x2CC964u) { return; }
    }
    ctx->pc = 0x2CC964u;
label_2cc964:
    // 0x2cc964: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2cc964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2cc968: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2CC968u;
    SET_GPR_U32(ctx, 31, 0x2CC970u);
    ctx->pc = 0x2CC96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC968u;
            // 0x2cc96c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC970u; }
        if (ctx->pc != 0x2CC970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC970u; }
        if (ctx->pc != 0x2CC970u) { return; }
    }
    ctx->pc = 0x2CC970u;
label_2cc970:
    // 0x2cc970: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2cc970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cc974:
    // 0x2cc974: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2cc974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2cc978: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2cc978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2cc97c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2cc97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2cc980: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2cc980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc984: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2cc984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2cc988: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2cc988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2cc98c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cc98cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cc990: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2CC990u;
    SET_GPR_U32(ctx, 31, 0x2CC998u);
    ctx->pc = 0x2CC994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC990u;
            // 0x2cc994: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC998u; }
        if (ctx->pc != 0x2CC998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC998u; }
        if (ctx->pc != 0x2CC998u) { return; }
    }
    ctx->pc = 0x2CC998u;
label_2cc998:
    // 0x2cc998: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2cc998u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2cc99c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2cc99cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2cc9a0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2CC9A0u;
    {
        const bool branch_taken_0x2cc9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC9A0u;
            // 0x2cc9a4: 0x26520070  addiu       $s2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc9a0) {
            ctx->pc = 0x2CC974u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cc974;
        }
    }
    ctx->pc = 0x2CC9A8u;
label_2cc9a8:
    // 0x2cc9a8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2cc9a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc9ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cc9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cc9b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cc9b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cc9b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cc9b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc9b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cc9b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc9bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cc9bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC9C0u;
            // 0x2cc9c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CC9C8u;
    // 0x2cc9c8: 0x0  nop
    ctx->pc = 0x2cc9c8u;
    // NOP
    // 0x2cc9cc: 0x0  nop
    ctx->pc = 0x2cc9ccu;
    // NOP
    // 0x2cc9d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cc9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cc9d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cc9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cc9d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cc9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cc9dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2cc9dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cc9e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cc9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cc9e4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2cc9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2cc9e8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cc9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cc9ec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2cc9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2cc9f0: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2cc9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x2cc9f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cc9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc9f8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2cc9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2cc9fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cc9fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca00: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2cca00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2cca04: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2cca04u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2cca08: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2cca08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2cca0c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2cca0cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2cca10: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2cca10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cca14: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2cca14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cca18: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2CCA18u;
    SET_GPR_U32(ctx, 31, 0x2CCA20u);
    ctx->pc = 0x2CCA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCA18u;
            // 0x2cca1c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCA20u; }
        if (ctx->pc != 0x2CCA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCA20u; }
        if (ctx->pc != 0x2CCA20u) { return; }
    }
    ctx->pc = 0x2CCA20u;
label_2cca20:
    // 0x2cca20: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2CCA20u;
    SET_GPR_U32(ctx, 31, 0x2CCA28u);
    ctx->pc = 0x2CCA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCA20u;
            // 0x2cca24: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCA28u; }
        if (ctx->pc != 0x2CCA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCA28u; }
        if (ctx->pc != 0x2CCA28u) { return; }
    }
    ctx->pc = 0x2CCA28u;
label_2cca28:
    // 0x2cca28: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cca28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2cca2c: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x2cca2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
    // 0x2cca30: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2cca30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2cca34: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x2cca34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x2cca38: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x2cca38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x2cca3c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x2cca3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x2cca40: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2cca40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x2cca44: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cca44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cca48: 0x8c490788  lw          $t1, 0x788($v0)
    ctx->pc = 0x2cca48u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
    // 0x2cca4c: 0x2508c560  addiu       $t0, $t0, -0x3AA0
    ctx->pc = 0x2cca4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952288));
    // 0x2cca50: 0x24e72660  addiu       $a3, $a3, 0x2660
    ctx->pc = 0x2cca50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9824));
    // 0x2cca54: 0x24c62670  addiu       $a2, $a2, 0x2670
    ctx->pc = 0x2cca54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9840));
    // 0x2cca58: 0x24a526b0  addiu       $a1, $a1, 0x26B0
    ctx->pc = 0x2cca58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9904));
    // 0x2cca5c: 0x24845c70  addiu       $a0, $a0, 0x5C70
    ctx->pc = 0x2cca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23664));
    // 0x2cca60: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2cca60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2cca64: 0x24635cb0  addiu       $v1, $v1, 0x5CB0
    ctx->pc = 0x2cca64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23728));
    // 0x2cca68: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x2cca68u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2cca6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cca6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca70: 0xa208004d  sb          $t0, 0x4D($s0)
    ctx->pc = 0x2cca70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 8));
    // 0x2cca74: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x2cca74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
    // 0x2cca78: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2cca78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2cca7c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x2cca7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x2cca80: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x2cca80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
    // 0x2cca84: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2cca84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2cca88: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x2cca88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x2cca8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cca8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cca90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cca90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cca94: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCA94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCA94u;
            // 0x2cca98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CCA9Cu;
    // 0x2cca9c: 0x0  nop
    ctx->pc = 0x2cca9cu;
    // NOP
}
