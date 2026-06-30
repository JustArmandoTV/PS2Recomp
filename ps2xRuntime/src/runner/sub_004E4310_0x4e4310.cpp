#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E4310
// Address: 0x4e4310 - 0x4e46b0
void sub_004E4310_0x4e4310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4310_0x4e4310");
#endif

    switch (ctx->pc) {
        case 0x4e4340u: goto label_4e4340;
        case 0x4e4394u: goto label_4e4394;
        case 0x4e4420u: goto label_4e4420;
        case 0x4e4440u: goto label_4e4440;
        case 0x4e4454u: goto label_4e4454;
        case 0x4e4460u: goto label_4e4460;
        case 0x4e4464u: goto label_4e4464;
        case 0x4e4488u: goto label_4e4488;
        case 0x4e44d4u: goto label_4e44d4;
        case 0x4e44dcu: goto label_4e44dc;
        case 0x4e44fcu: goto label_4e44fc;
        case 0x4e4504u: goto label_4e4504;
        case 0x4e4548u: goto label_4e4548;
        case 0x4e4550u: goto label_4e4550;
        case 0x4e45b4u: goto label_4e45b4;
        case 0x4e45e4u: goto label_4e45e4;
        case 0x4e45ecu: goto label_4e45ec;
        case 0x4e460cu: goto label_4e460c;
        case 0x4e4614u: goto label_4e4614;
        case 0x4e4658u: goto label_4e4658;
        case 0x4e4660u: goto label_4e4660;
        default: break;
    }

    ctx->pc = 0x4e4310u;

    // 0x4e4310: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4e4310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4e4314: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4e4314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4e4318: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4e4318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4e431c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4e431cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4e4320: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e4320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4e4324: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4e4324u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e4328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4e432c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e432cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4e4330: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4e4330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4334: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4e4334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4338: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x4E4338u;
    SET_GPR_U32(ctx, 31, 0x4E4340u);
    ctx->pc = 0x4E433Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4338u;
            // 0x4e433c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4340u; }
        if (ctx->pc != 0x4E4340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4340u; }
        if (ctx->pc != 0x4E4340u) { return; }
    }
    ctx->pc = 0x4E4340u;
label_4e4340:
    // 0x4e4340: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4e4340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4e4344: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4e4344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4e4348: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4e4348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x4e434c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4e434cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x4e4350: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4e4350u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4e4354: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4e4354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x4e4358: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4e4358u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4e435c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4e435cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4e4360: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4e4360u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x4e4364: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4e4364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4e4368: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4e4368u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x4e436c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4e436cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4e4370: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4e4370u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x4e4374: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4e4374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x4e4378: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4e4378u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x4e437c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4e437cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x4e4380: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4e4380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x4e4384: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4e4384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4e4388: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4e4388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4e438c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x4E438Cu;
    SET_GPR_U32(ctx, 31, 0x4E4394u);
    ctx->pc = 0x4E4390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E438Cu;
            // 0x4e4390: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4394u; }
        if (ctx->pc != 0x4E4394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4394u; }
        if (ctx->pc != 0x4E4394u) { return; }
    }
    ctx->pc = 0x4E4394u;
label_4e4394:
    // 0x4e4394: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e4394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4e4398: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4e4398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x4e439c: 0x24633880  addiu       $v1, $v1, 0x3880
    ctx->pc = 0x4e439cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14464));
    // 0x4e43a0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4e43a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x4e43a4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4e43a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x4e43a8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4e43a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4e43ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e43acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4e43b0: 0xac44aa98  sw          $a0, -0x5568($v0)
    ctx->pc = 0x4e43b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945432), GPR_U32(ctx, 4));
    // 0x4e43b4: 0x24633890  addiu       $v1, $v1, 0x3890
    ctx->pc = 0x4e43b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14480));
    // 0x4e43b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e43b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4e43bc: 0x244238c8  addiu       $v0, $v0, 0x38C8
    ctx->pc = 0x4e43bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14536));
    // 0x4e43c0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4e43c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4e43c4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4e43c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x4e43c8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4e43c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x4e43cc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4e43ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x4e43d0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4e43d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x4e43d4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4e43d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x4e43d8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4e43d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x4e43dc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4e43dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x4e43e0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4e43e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x4e43e4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4e43e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x4e43e8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4e43e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x4e43ec: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4e43ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x4e43f0: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x4e43f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    // 0x4e43f4: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x4e43f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
    // 0x4e43f8: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4e43f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x4e43fc: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x4E43FCu;
    {
        const bool branch_taken_0x4e43fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e43fc) {
            ctx->pc = 0x4E4498u;
            goto label_4e4498;
        }
    }
    ctx->pc = 0x4E4404u;
    // 0x4e4404: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4e4404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4e4408: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x4e4408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4e440c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4e440cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4e4410: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4e4410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4e4414: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x4e4414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x4e4418: 0xc040138  jal         func_1004E0
    ctx->pc = 0x4E4418u;
    SET_GPR_U32(ctx, 31, 0x4E4420u);
    ctx->pc = 0x4E441Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4418u;
            // 0x4e441c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4420u; }
        if (ctx->pc != 0x4E4420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4420u; }
        if (ctx->pc != 0x4E4420u) { return; }
    }
    ctx->pc = 0x4E4420u;
label_4e4420:
    // 0x4e4420: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x4e4420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x4e4424: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x4e4424u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x4e4428: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4e4428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e442c: 0x24a544c0  addiu       $a1, $a1, 0x44C0
    ctx->pc = 0x4e442cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17600));
    // 0x4e4430: 0x24c63a00  addiu       $a2, $a2, 0x3A00
    ctx->pc = 0x4e4430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14848));
    // 0x4e4434: 0x24070c80  addiu       $a3, $zero, 0xC80
    ctx->pc = 0x4e4434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3200));
    // 0x4e4438: 0xc040840  jal         func_102100
    ctx->pc = 0x4E4438u;
    SET_GPR_U32(ctx, 31, 0x4E4440u);
    ctx->pc = 0x4E443Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4438u;
            // 0x4e443c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4440u; }
        if (ctx->pc != 0x4E4440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4440u; }
        if (ctx->pc != 0x4E4440u) { return; }
    }
    ctx->pc = 0x4E4440u;
label_4e4440:
    // 0x4e4440: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4e4440u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x4e4444: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4e4444u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4448: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4e4448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x4e444c: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x4E444Cu;
    SET_GPR_U32(ctx, 31, 0x4E4454u);
    ctx->pc = 0x4E4450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E444Cu;
            // 0x4e4450: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4454u; }
        if (ctx->pc != 0x4E4454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4454u; }
        if (ctx->pc != 0x4E4454u) { return; }
    }
    ctx->pc = 0x4E4454u;
label_4e4454:
    // 0x4e4454: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4e4454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x4e4458: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x4E4458u;
    SET_GPR_U32(ctx, 31, 0x4E4460u);
    ctx->pc = 0x4E445Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4458u;
            // 0x4e445c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4460u; }
        if (ctx->pc != 0x4E4460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4460u; }
        if (ctx->pc != 0x4E4460u) { return; }
    }
    ctx->pc = 0x4E4460u;
label_4e4460:
    // 0x4e4460: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4e4460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e4464:
    // 0x4e4464: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4e4464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x4e4468: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4e4468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x4e446c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4e446cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x4e4470: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4e4470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e4474: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4e4474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x4e4478: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4e4478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x4e447c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4e447cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4e4480: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x4E4480u;
    SET_GPR_U32(ctx, 31, 0x4E4488u);
    ctx->pc = 0x4E4484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4480u;
            // 0x4e4484: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4488u; }
        if (ctx->pc != 0x4E4488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4488u; }
        if (ctx->pc != 0x4E4488u) { return; }
    }
    ctx->pc = 0x4E4488u;
label_4e4488:
    // 0x4e4488: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4e4488u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4e448c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4e448cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4e4490: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4E4490u;
    {
        const bool branch_taken_0x4e4490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E4494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4490u;
            // 0x4e4494: 0x26520c80  addiu       $s2, $s2, 0xC80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4490) {
            ctx->pc = 0x4E4464u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e4464;
        }
    }
    ctx->pc = 0x4E4498u;
label_4e4498:
    // 0x4e4498: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4e4498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e449c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e449cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e44a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4e44a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e44a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e44a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e44a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e44a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e44ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e44acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e44b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4E44B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E44B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E44B0u;
            // 0x4e44b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E44B8u;
    // 0x4e44b8: 0x0  nop
    ctx->pc = 0x4e44b8u;
    // NOP
    // 0x4e44bc: 0x0  nop
    ctx->pc = 0x4e44bcu;
    // NOP
    // 0x4e44c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e44c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4e44c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e44c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4e44c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e44c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4e44cc: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x4E44CCu;
    SET_GPR_U32(ctx, 31, 0x4E44D4u);
    ctx->pc = 0x4E44D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E44CCu;
            // 0x4e44d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E44D4u; }
        if (ctx->pc != 0x4E44D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E44D4u; }
        if (ctx->pc != 0x4E44D4u) { return; }
    }
    ctx->pc = 0x4E44D4u;
label_4e44d4:
    // 0x4e44d4: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x4E44D4u;
    SET_GPR_U32(ctx, 31, 0x4E44DCu);
    ctx->pc = 0x4E44D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E44D4u;
            // 0x4e44d8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E44DCu; }
        if (ctx->pc != 0x4E44DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E44DCu; }
        if (ctx->pc != 0x4E44DCu) { return; }
    }
    ctx->pc = 0x4E44DCu;
label_4e44dc:
    // 0x4e44dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4e44dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4e44e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4e44e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4e44e4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4e44e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x4e44e8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4e44e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x4e44ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e44ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e44f0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4e44f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x4e44f4: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x4E44F4u;
    SET_GPR_U32(ctx, 31, 0x4E44FCu);
    ctx->pc = 0x4E44F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E44F4u;
            // 0x4e44f8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E44FCu; }
        if (ctx->pc != 0x4E44FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E44FCu; }
        if (ctx->pc != 0x4E44FCu) { return; }
    }
    ctx->pc = 0x4E44FCu;
label_4e44fc:
    // 0x4e44fc: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x4E44FCu;
    SET_GPR_U32(ctx, 31, 0x4E4504u);
    ctx->pc = 0x4E4500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E44FCu;
            // 0x4e4500: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4504u; }
        if (ctx->pc != 0x4E4504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4504u; }
        if (ctx->pc != 0x4E4504u) { return; }
    }
    ctx->pc = 0x4E4504u;
label_4e4504:
    // 0x4e4504: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4e4504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x4e4508: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x4e4508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x4e450c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x4e450cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x4e4510: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x4e4510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x4e4514: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x4e4514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x4e4518: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4e4518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e451c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x4e451cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x4e4520: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4e4520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4e4524: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x4e4524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x4e4528: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x4e4528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x4e452c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x4e452cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x4e4530: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x4e4530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x4e4534: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x4e4534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x4e4538: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x4e4538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x4e453c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x4e453cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x4e4540: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x4E4540u;
    SET_GPR_U32(ctx, 31, 0x4E4548u);
    ctx->pc = 0x4E4544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4540u;
            // 0x4e4544: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4548u; }
        if (ctx->pc != 0x4E4548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4548u; }
        if (ctx->pc != 0x4E4548u) { return; }
    }
    ctx->pc = 0x4E4548u;
label_4e4548:
    // 0x4e4548: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x4E4548u;
    SET_GPR_U32(ctx, 31, 0x4E4550u);
    ctx->pc = 0x4E454Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4548u;
            // 0x4e454c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4550u; }
        if (ctx->pc != 0x4E4550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4550u; }
        if (ctx->pc != 0x4E4550u) { return; }
    }
    ctx->pc = 0x4E4550u;
label_4e4550:
    // 0x4e4550: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4e4550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x4e4554: 0x3c09006b  lui         $t1, 0x6B
    ctx->pc = 0x4e4554u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)107 << 16));
    // 0x4e4558: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x4e4558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x4e455c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x4e455cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x4e4560: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4e4560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4e4564: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x4e4564u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x4e4568: 0x90480000  lbu         $t0, 0x0($v0)
    ctx->pc = 0x4e4568u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e456c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e456cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4e4570: 0x8e0700c8  lw          $a3, 0xC8($s0)
    ctx->pc = 0x4e4570u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x4e4574: 0x252937e0  addiu       $t1, $t1, 0x37E0
    ctx->pc = 0x4e4574u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 14304));
    // 0x4e4578: 0x24633820  addiu       $v1, $v1, 0x3820
    ctx->pc = 0x4e4578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14368));
    // 0x4e457c: 0x26040130  addiu       $a0, $s0, 0x130
    ctx->pc = 0x4e457cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x4e4580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e4580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e4584: 0x24a545d0  addiu       $a1, $a1, 0x45D0
    ctx->pc = 0x4e4584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17872));
    // 0x4e4588: 0xe85018  mult        $t2, $a3, $t0
    ctx->pc = 0x4e4588u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x4e458c: 0x24c63b10  addiu       $a2, $a2, 0x3B10
    ctx->pc = 0x4e458cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15120));
    // 0x4e4590: 0xae0a00c8  sw          $t2, 0xC8($s0)
    ctx->pc = 0x4e4590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 10));
    // 0x4e4594: 0x24070120  addiu       $a3, $zero, 0x120
    ctx->pc = 0x4e4594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x4e4598: 0xae090000  sw          $t1, 0x0($s0)
    ctx->pc = 0x4e4598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 9));
    // 0x4e459c: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x4e459cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4e45a0: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4e45a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x4e45a4: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x4e45a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x4e45a8: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x4e45a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x4e45ac: 0xc040804  jal         func_102010
    ctx->pc = 0x4E45ACu;
    SET_GPR_U32(ctx, 31, 0x4E45B4u);
    ctx->pc = 0x4E45B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E45ACu;
            // 0x4e45b0: 0xae0000d8  sw          $zero, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E45B4u; }
        if (ctx->pc != 0x4E45B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E45B4u; }
        if (ctx->pc != 0x4E45B4u) { return; }
    }
    ctx->pc = 0x4E45B4u;
label_4e45b4:
    // 0x4e45b4: 0xae000c70  sw          $zero, 0xC70($s0)
    ctx->pc = 0x4e45b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3184), GPR_U32(ctx, 0));
    // 0x4e45b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e45b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e45bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e45bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e45c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e45c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e45c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4E45C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E45C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E45C4u;
            // 0x4e45c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E45CCu;
    // 0x4e45cc: 0x0  nop
    ctx->pc = 0x4e45ccu;
    // NOP
    // 0x4e45d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e45d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4e45d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e45d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4e45d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e45d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4e45dc: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x4E45DCu;
    SET_GPR_U32(ctx, 31, 0x4E45E4u);
    ctx->pc = 0x4E45E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E45DCu;
            // 0x4e45e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E45E4u; }
        if (ctx->pc != 0x4E45E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E45E4u; }
        if (ctx->pc != 0x4E45E4u) { return; }
    }
    ctx->pc = 0x4E45E4u;
label_4e45e4:
    // 0x4e45e4: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x4E45E4u;
    SET_GPR_U32(ctx, 31, 0x4E45ECu);
    ctx->pc = 0x4E45E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E45E4u;
            // 0x4e45e8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E45ECu; }
        if (ctx->pc != 0x4E45ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E45ECu; }
        if (ctx->pc != 0x4E45ECu) { return; }
    }
    ctx->pc = 0x4E45ECu;
label_4e45ec:
    // 0x4e45ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4e45ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4e45f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4e45f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4e45f4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4e45f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x4e45f8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4e45f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x4e45fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e45fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e4600: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4e4600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x4e4604: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x4E4604u;
    SET_GPR_U32(ctx, 31, 0x4E460Cu);
    ctx->pc = 0x4E4608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4604u;
            // 0x4e4608: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E460Cu; }
        if (ctx->pc != 0x4E460Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E460Cu; }
        if (ctx->pc != 0x4E460Cu) { return; }
    }
    ctx->pc = 0x4E460Cu;
label_4e460c:
    // 0x4e460c: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x4E460Cu;
    SET_GPR_U32(ctx, 31, 0x4E4614u);
    ctx->pc = 0x4E4610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E460Cu;
            // 0x4e4610: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4614u; }
        if (ctx->pc != 0x4E4614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4614u; }
        if (ctx->pc != 0x4E4614u) { return; }
    }
    ctx->pc = 0x4E4614u;
label_4e4614:
    // 0x4e4614: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4e4614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x4e4618: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x4e4618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x4e461c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x4e461cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x4e4620: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x4e4620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x4e4624: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x4e4624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x4e4628: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4e4628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e462c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x4e462cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x4e4630: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4e4630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4e4634: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x4e4634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x4e4638: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x4e4638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x4e463c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x4e463cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x4e4640: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x4e4640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x4e4644: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x4e4644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x4e4648: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x4e4648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x4e464c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x4e464cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x4e4650: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x4E4650u;
    SET_GPR_U32(ctx, 31, 0x4E4658u);
    ctx->pc = 0x4E4654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4650u;
            // 0x4e4654: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4658u; }
        if (ctx->pc != 0x4E4658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4658u; }
        if (ctx->pc != 0x4E4658u) { return; }
    }
    ctx->pc = 0x4E4658u;
label_4e4658:
    // 0x4e4658: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x4E4658u;
    SET_GPR_U32(ctx, 31, 0x4E4660u);
    ctx->pc = 0x4E465Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4658u;
            // 0x4e465c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4660u; }
        if (ctx->pc != 0x4E4660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4660u; }
        if (ctx->pc != 0x4E4660u) { return; }
    }
    ctx->pc = 0x4E4660u;
label_4e4660:
    // 0x4e4660: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4e4660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x4e4664: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x4e4664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x4e4668: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x4e4668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x4e466c: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x4e466cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x4e4670: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4e4670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4e4674: 0x24843930  addiu       $a0, $a0, 0x3930
    ctx->pc = 0x4e4674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14640));
    // 0x4e4678: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x4e4678u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e467c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e467cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4e4680: 0x24633970  addiu       $v1, $v1, 0x3970
    ctx->pc = 0x4e4680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14704));
    // 0x4e4684: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x4e4684u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4e4688: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e4688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e468c: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x4e468cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
    // 0x4e4690: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4e4690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4e4694: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4e4694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x4e4698: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x4e4698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x4e469c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e469cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e46a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e46a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e46a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4E46A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E46A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E46A4u;
            // 0x4e46a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E46ACu;
    // 0x4e46ac: 0x0  nop
    ctx->pc = 0x4e46acu;
    // NOP
}
