#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CA320
// Address: 0x2ca320 - 0x2ca480
void sub_002CA320_0x2ca320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA320_0x2ca320");
#endif

    switch (ctx->pc) {
        case 0x2ca320u: goto label_2ca320;
        case 0x2ca324u: goto label_2ca324;
        case 0x2ca328u: goto label_2ca328;
        case 0x2ca32cu: goto label_2ca32c;
        case 0x2ca330u: goto label_2ca330;
        case 0x2ca334u: goto label_2ca334;
        case 0x2ca338u: goto label_2ca338;
        case 0x2ca33cu: goto label_2ca33c;
        case 0x2ca340u: goto label_2ca340;
        case 0x2ca344u: goto label_2ca344;
        case 0x2ca348u: goto label_2ca348;
        case 0x2ca34cu: goto label_2ca34c;
        case 0x2ca350u: goto label_2ca350;
        case 0x2ca354u: goto label_2ca354;
        case 0x2ca358u: goto label_2ca358;
        case 0x2ca35cu: goto label_2ca35c;
        case 0x2ca360u: goto label_2ca360;
        case 0x2ca364u: goto label_2ca364;
        case 0x2ca368u: goto label_2ca368;
        case 0x2ca36cu: goto label_2ca36c;
        case 0x2ca370u: goto label_2ca370;
        case 0x2ca374u: goto label_2ca374;
        case 0x2ca378u: goto label_2ca378;
        case 0x2ca37cu: goto label_2ca37c;
        case 0x2ca380u: goto label_2ca380;
        case 0x2ca384u: goto label_2ca384;
        case 0x2ca388u: goto label_2ca388;
        case 0x2ca38cu: goto label_2ca38c;
        case 0x2ca390u: goto label_2ca390;
        case 0x2ca394u: goto label_2ca394;
        case 0x2ca398u: goto label_2ca398;
        case 0x2ca39cu: goto label_2ca39c;
        case 0x2ca3a0u: goto label_2ca3a0;
        case 0x2ca3a4u: goto label_2ca3a4;
        case 0x2ca3a8u: goto label_2ca3a8;
        case 0x2ca3acu: goto label_2ca3ac;
        case 0x2ca3b0u: goto label_2ca3b0;
        case 0x2ca3b4u: goto label_2ca3b4;
        case 0x2ca3b8u: goto label_2ca3b8;
        case 0x2ca3bcu: goto label_2ca3bc;
        case 0x2ca3c0u: goto label_2ca3c0;
        case 0x2ca3c4u: goto label_2ca3c4;
        case 0x2ca3c8u: goto label_2ca3c8;
        case 0x2ca3ccu: goto label_2ca3cc;
        case 0x2ca3d0u: goto label_2ca3d0;
        case 0x2ca3d4u: goto label_2ca3d4;
        case 0x2ca3d8u: goto label_2ca3d8;
        case 0x2ca3dcu: goto label_2ca3dc;
        case 0x2ca3e0u: goto label_2ca3e0;
        case 0x2ca3e4u: goto label_2ca3e4;
        case 0x2ca3e8u: goto label_2ca3e8;
        case 0x2ca3ecu: goto label_2ca3ec;
        case 0x2ca3f0u: goto label_2ca3f0;
        case 0x2ca3f4u: goto label_2ca3f4;
        case 0x2ca3f8u: goto label_2ca3f8;
        case 0x2ca3fcu: goto label_2ca3fc;
        case 0x2ca400u: goto label_2ca400;
        case 0x2ca404u: goto label_2ca404;
        case 0x2ca408u: goto label_2ca408;
        case 0x2ca40cu: goto label_2ca40c;
        case 0x2ca410u: goto label_2ca410;
        case 0x2ca414u: goto label_2ca414;
        case 0x2ca418u: goto label_2ca418;
        case 0x2ca41cu: goto label_2ca41c;
        case 0x2ca420u: goto label_2ca420;
        case 0x2ca424u: goto label_2ca424;
        case 0x2ca428u: goto label_2ca428;
        case 0x2ca42cu: goto label_2ca42c;
        case 0x2ca430u: goto label_2ca430;
        case 0x2ca434u: goto label_2ca434;
        case 0x2ca438u: goto label_2ca438;
        case 0x2ca43cu: goto label_2ca43c;
        case 0x2ca440u: goto label_2ca440;
        case 0x2ca444u: goto label_2ca444;
        case 0x2ca448u: goto label_2ca448;
        case 0x2ca44cu: goto label_2ca44c;
        case 0x2ca450u: goto label_2ca450;
        case 0x2ca454u: goto label_2ca454;
        case 0x2ca458u: goto label_2ca458;
        case 0x2ca45cu: goto label_2ca45c;
        case 0x2ca460u: goto label_2ca460;
        case 0x2ca464u: goto label_2ca464;
        case 0x2ca468u: goto label_2ca468;
        case 0x2ca46cu: goto label_2ca46c;
        case 0x2ca470u: goto label_2ca470;
        case 0x2ca474u: goto label_2ca474;
        case 0x2ca478u: goto label_2ca478;
        case 0x2ca47cu: goto label_2ca47c;
        default: break;
    }

    ctx->pc = 0x2ca320u;

label_2ca320:
    // 0x2ca320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ca320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ca324:
    // 0x2ca324: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ca324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2ca328:
    // 0x2ca328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ca328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ca32c:
    // 0x2ca32c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ca32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ca330:
    // 0x2ca330: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ca330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ca334:
    // 0x2ca334: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2ca338:
    if (ctx->pc == 0x2CA338u) {
        ctx->pc = 0x2CA338u;
            // 0x2ca338: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CA33Cu;
        goto label_2ca33c;
    }
    ctx->pc = 0x2CA334u;
    {
        const bool branch_taken_0x2ca334 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA334u;
            // 0x2ca338: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca334) {
            ctx->pc = 0x2CA468u;
            goto label_2ca468;
        }
    }
    ctx->pc = 0x2CA33Cu;
label_2ca33c:
    // 0x2ca33c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ca33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2ca340:
    // 0x2ca340: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ca340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ca344:
    // 0x2ca344: 0x246303b0  addiu       $v1, $v1, 0x3B0
    ctx->pc = 0x2ca344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 944));
label_2ca348:
    // 0x2ca348: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2ca348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_2ca34c:
    // 0x2ca34c: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x2ca34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
label_2ca350:
    // 0x2ca350: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2ca350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2ca354:
    // 0x2ca354: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2ca354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2ca358:
    // 0x2ca358: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2ca358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2ca35c:
    // 0x2ca35c: 0xc0407c0  jal         func_101F00
label_2ca360:
    if (ctx->pc == 0x2CA360u) {
        ctx->pc = 0x2CA360u;
            // 0x2ca360: 0x24a5a2b0  addiu       $a1, $a1, -0x5D50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943408));
        ctx->pc = 0x2CA364u;
        goto label_2ca364;
    }
    ctx->pc = 0x2CA35Cu;
    SET_GPR_U32(ctx, 31, 0x2CA364u);
    ctx->pc = 0x2CA360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA35Cu;
            // 0x2ca360: 0x24a5a2b0  addiu       $a1, $a1, -0x5D50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA364u; }
        if (ctx->pc != 0x2CA364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA364u; }
        if (ctx->pc != 0x2CA364u) { return; }
    }
    ctx->pc = 0x2CA364u;
label_2ca364:
    // 0x2ca364: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2ca364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2ca368:
    // 0x2ca368: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2ca36c:
    if (ctx->pc == 0x2CA36Cu) {
        ctx->pc = 0x2CA36Cu;
            // 0x2ca36c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2CA370u;
        goto label_2ca370;
    }
    ctx->pc = 0x2CA368u;
    {
        const bool branch_taken_0x2ca368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca368) {
            ctx->pc = 0x2CA36Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA368u;
            // 0x2ca36c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CA37Cu;
            goto label_2ca37c;
        }
    }
    ctx->pc = 0x2CA370u;
label_2ca370:
    // 0x2ca370: 0xc07507c  jal         func_1D41F0
label_2ca374:
    if (ctx->pc == 0x2CA374u) {
        ctx->pc = 0x2CA374u;
            // 0x2ca374: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2CA378u;
        goto label_2ca378;
    }
    ctx->pc = 0x2CA370u;
    SET_GPR_U32(ctx, 31, 0x2CA378u);
    ctx->pc = 0x2CA374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA370u;
            // 0x2ca374: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA378u; }
        if (ctx->pc != 0x2CA378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA378u; }
        if (ctx->pc != 0x2CA378u) { return; }
    }
    ctx->pc = 0x2CA378u;
label_2ca378:
    // 0x2ca378: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2ca378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2ca37c:
    // 0x2ca37c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2ca380:
    if (ctx->pc == 0x2CA380u) {
        ctx->pc = 0x2CA380u;
            // 0x2ca380: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2CA384u;
        goto label_2ca384;
    }
    ctx->pc = 0x2CA37Cu;
    {
        const bool branch_taken_0x2ca37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca37c) {
            ctx->pc = 0x2CA380u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA37Cu;
            // 0x2ca380: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CA3ACu;
            goto label_2ca3ac;
        }
    }
    ctx->pc = 0x2CA384u;
label_2ca384:
    // 0x2ca384: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2ca388:
    if (ctx->pc == 0x2CA388u) {
        ctx->pc = 0x2CA38Cu;
        goto label_2ca38c;
    }
    ctx->pc = 0x2CA384u;
    {
        const bool branch_taken_0x2ca384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca384) {
            ctx->pc = 0x2CA3A8u;
            goto label_2ca3a8;
        }
    }
    ctx->pc = 0x2CA38Cu;
label_2ca38c:
    // 0x2ca38c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2ca390:
    if (ctx->pc == 0x2CA390u) {
        ctx->pc = 0x2CA394u;
        goto label_2ca394;
    }
    ctx->pc = 0x2CA38Cu;
    {
        const bool branch_taken_0x2ca38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca38c) {
            ctx->pc = 0x2CA3A8u;
            goto label_2ca3a8;
        }
    }
    ctx->pc = 0x2CA394u;
label_2ca394:
    // 0x2ca394: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2ca394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2ca398:
    // 0x2ca398: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2ca39c:
    if (ctx->pc == 0x2CA39Cu) {
        ctx->pc = 0x2CA3A0u;
        goto label_2ca3a0;
    }
    ctx->pc = 0x2CA398u;
    {
        const bool branch_taken_0x2ca398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca398) {
            ctx->pc = 0x2CA3A8u;
            goto label_2ca3a8;
        }
    }
    ctx->pc = 0x2CA3A0u;
label_2ca3a0:
    // 0x2ca3a0: 0xc0400a8  jal         func_1002A0
label_2ca3a4:
    if (ctx->pc == 0x2CA3A4u) {
        ctx->pc = 0x2CA3A8u;
        goto label_2ca3a8;
    }
    ctx->pc = 0x2CA3A0u;
    SET_GPR_U32(ctx, 31, 0x2CA3A8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA3A8u; }
        if (ctx->pc != 0x2CA3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA3A8u; }
        if (ctx->pc != 0x2CA3A8u) { return; }
    }
    ctx->pc = 0x2CA3A8u;
label_2ca3a8:
    // 0x2ca3a8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2ca3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2ca3ac:
    // 0x2ca3ac: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2ca3b0:
    if (ctx->pc == 0x2CA3B0u) {
        ctx->pc = 0x2CA3B0u;
            // 0x2ca3b0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2CA3B4u;
        goto label_2ca3b4;
    }
    ctx->pc = 0x2CA3ACu;
    {
        const bool branch_taken_0x2ca3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca3ac) {
            ctx->pc = 0x2CA3B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA3ACu;
            // 0x2ca3b0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CA3DCu;
            goto label_2ca3dc;
        }
    }
    ctx->pc = 0x2CA3B4u;
label_2ca3b4:
    // 0x2ca3b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2ca3b8:
    if (ctx->pc == 0x2CA3B8u) {
        ctx->pc = 0x2CA3BCu;
        goto label_2ca3bc;
    }
    ctx->pc = 0x2CA3B4u;
    {
        const bool branch_taken_0x2ca3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca3b4) {
            ctx->pc = 0x2CA3D8u;
            goto label_2ca3d8;
        }
    }
    ctx->pc = 0x2CA3BCu;
label_2ca3bc:
    // 0x2ca3bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2ca3c0:
    if (ctx->pc == 0x2CA3C0u) {
        ctx->pc = 0x2CA3C4u;
        goto label_2ca3c4;
    }
    ctx->pc = 0x2CA3BCu;
    {
        const bool branch_taken_0x2ca3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca3bc) {
            ctx->pc = 0x2CA3D8u;
            goto label_2ca3d8;
        }
    }
    ctx->pc = 0x2CA3C4u;
label_2ca3c4:
    // 0x2ca3c4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2ca3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2ca3c8:
    // 0x2ca3c8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2ca3cc:
    if (ctx->pc == 0x2CA3CCu) {
        ctx->pc = 0x2CA3D0u;
        goto label_2ca3d0;
    }
    ctx->pc = 0x2CA3C8u;
    {
        const bool branch_taken_0x2ca3c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca3c8) {
            ctx->pc = 0x2CA3D8u;
            goto label_2ca3d8;
        }
    }
    ctx->pc = 0x2CA3D0u;
label_2ca3d0:
    // 0x2ca3d0: 0xc0400a8  jal         func_1002A0
label_2ca3d4:
    if (ctx->pc == 0x2CA3D4u) {
        ctx->pc = 0x2CA3D8u;
        goto label_2ca3d8;
    }
    ctx->pc = 0x2CA3D0u;
    SET_GPR_U32(ctx, 31, 0x2CA3D8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA3D8u; }
        if (ctx->pc != 0x2CA3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA3D8u; }
        if (ctx->pc != 0x2CA3D8u) { return; }
    }
    ctx->pc = 0x2CA3D8u;
label_2ca3d8:
    // 0x2ca3d8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2ca3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2ca3dc:
    // 0x2ca3dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2ca3e0:
    if (ctx->pc == 0x2CA3E0u) {
        ctx->pc = 0x2CA3E4u;
        goto label_2ca3e4;
    }
    ctx->pc = 0x2CA3DCu;
    {
        const bool branch_taken_0x2ca3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca3dc) {
            ctx->pc = 0x2CA3F8u;
            goto label_2ca3f8;
        }
    }
    ctx->pc = 0x2CA3E4u;
label_2ca3e4:
    // 0x2ca3e4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ca3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2ca3e8:
    // 0x2ca3e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ca3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2ca3ec:
    // 0x2ca3ec: 0x246303a0  addiu       $v1, $v1, 0x3A0
    ctx->pc = 0x2ca3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 928));
label_2ca3f0:
    // 0x2ca3f0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2ca3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2ca3f4:
    // 0x2ca3f4: 0xac400d90  sw          $zero, 0xD90($v0)
    ctx->pc = 0x2ca3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3472), GPR_U32(ctx, 0));
label_2ca3f8:
    // 0x2ca3f8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2ca3fc:
    if (ctx->pc == 0x2CA3FCu) {
        ctx->pc = 0x2CA3FCu;
            // 0x2ca3fc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2CA400u;
        goto label_2ca400;
    }
    ctx->pc = 0x2CA3F8u;
    {
        const bool branch_taken_0x2ca3f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca3f8) {
            ctx->pc = 0x2CA3FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA3F8u;
            // 0x2ca3fc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CA454u;
            goto label_2ca454;
        }
    }
    ctx->pc = 0x2CA400u;
label_2ca400:
    // 0x2ca400: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ca400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2ca404:
    // 0x2ca404: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2ca404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2ca408:
    // 0x2ca408: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2ca408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2ca40c:
    // 0x2ca40c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2ca40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2ca410:
    // 0x2ca410: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ca414:
    if (ctx->pc == 0x2CA414u) {
        ctx->pc = 0x2CA414u;
            // 0x2ca414: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2CA418u;
        goto label_2ca418;
    }
    ctx->pc = 0x2CA410u;
    {
        const bool branch_taken_0x2ca410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca410) {
            ctx->pc = 0x2CA414u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA410u;
            // 0x2ca414: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CA42Cu;
            goto label_2ca42c;
        }
    }
    ctx->pc = 0x2CA418u;
label_2ca418:
    // 0x2ca418: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ca418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ca41c:
    // 0x2ca41c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2ca41cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2ca420:
    // 0x2ca420: 0x320f809  jalr        $t9
label_2ca424:
    if (ctx->pc == 0x2CA424u) {
        ctx->pc = 0x2CA424u;
            // 0x2ca424: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CA428u;
        goto label_2ca428;
    }
    ctx->pc = 0x2CA420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CA428u);
        ctx->pc = 0x2CA424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA420u;
            // 0x2ca424: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CA428u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CA428u; }
            if (ctx->pc != 0x2CA428u) { return; }
        }
        }
    }
    ctx->pc = 0x2CA428u;
label_2ca428:
    // 0x2ca428: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2ca428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2ca42c:
    // 0x2ca42c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ca430:
    if (ctx->pc == 0x2CA430u) {
        ctx->pc = 0x2CA430u;
            // 0x2ca430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CA434u;
        goto label_2ca434;
    }
    ctx->pc = 0x2CA42Cu;
    {
        const bool branch_taken_0x2ca42c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca42c) {
            ctx->pc = 0x2CA430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA42Cu;
            // 0x2ca430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CA448u;
            goto label_2ca448;
        }
    }
    ctx->pc = 0x2CA434u;
label_2ca434:
    // 0x2ca434: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ca434u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ca438:
    // 0x2ca438: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2ca438u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2ca43c:
    // 0x2ca43c: 0x320f809  jalr        $t9
label_2ca440:
    if (ctx->pc == 0x2CA440u) {
        ctx->pc = 0x2CA440u;
            // 0x2ca440: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CA444u;
        goto label_2ca444;
    }
    ctx->pc = 0x2CA43Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CA444u);
        ctx->pc = 0x2CA440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA43Cu;
            // 0x2ca440: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CA444u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CA444u; }
            if (ctx->pc != 0x2CA444u) { return; }
        }
        }
    }
    ctx->pc = 0x2CA444u;
label_2ca444:
    // 0x2ca444: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ca444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ca448:
    // 0x2ca448: 0xc075bf8  jal         func_1D6FE0
label_2ca44c:
    if (ctx->pc == 0x2CA44Cu) {
        ctx->pc = 0x2CA44Cu;
            // 0x2ca44c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CA450u;
        goto label_2ca450;
    }
    ctx->pc = 0x2CA448u;
    SET_GPR_U32(ctx, 31, 0x2CA450u);
    ctx->pc = 0x2CA44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA448u;
            // 0x2ca44c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA450u; }
        if (ctx->pc != 0x2CA450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA450u; }
        if (ctx->pc != 0x2CA450u) { return; }
    }
    ctx->pc = 0x2CA450u;
label_2ca450:
    // 0x2ca450: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2ca450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2ca454:
    // 0x2ca454: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ca454u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2ca458:
    // 0x2ca458: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2ca45c:
    if (ctx->pc == 0x2CA45Cu) {
        ctx->pc = 0x2CA45Cu;
            // 0x2ca45c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CA460u;
        goto label_2ca460;
    }
    ctx->pc = 0x2CA458u;
    {
        const bool branch_taken_0x2ca458 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ca458) {
            ctx->pc = 0x2CA45Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA458u;
            // 0x2ca45c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CA46Cu;
            goto label_2ca46c;
        }
    }
    ctx->pc = 0x2CA460u;
label_2ca460:
    // 0x2ca460: 0xc0400a8  jal         func_1002A0
label_2ca464:
    if (ctx->pc == 0x2CA464u) {
        ctx->pc = 0x2CA464u;
            // 0x2ca464: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CA468u;
        goto label_2ca468;
    }
    ctx->pc = 0x2CA460u;
    SET_GPR_U32(ctx, 31, 0x2CA468u);
    ctx->pc = 0x2CA464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA460u;
            // 0x2ca464: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA468u; }
        if (ctx->pc != 0x2CA468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA468u; }
        if (ctx->pc != 0x2CA468u) { return; }
    }
    ctx->pc = 0x2CA468u;
label_2ca468:
    // 0x2ca468: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ca468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ca46c:
    // 0x2ca46c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ca46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ca470:
    // 0x2ca470: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ca470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ca474:
    // 0x2ca474: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ca474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ca478:
    // 0x2ca478: 0x3e00008  jr          $ra
label_2ca47c:
    if (ctx->pc == 0x2CA47Cu) {
        ctx->pc = 0x2CA47Cu;
            // 0x2ca47c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2CA480u;
        goto label_fallthrough_0x2ca478;
    }
    ctx->pc = 0x2CA478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA478u;
            // 0x2ca47c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ca478:
    ctx->pc = 0x2CA480u;
}
