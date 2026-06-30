#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CC350
// Address: 0x4cc350 - 0x4cc600
void sub_004CC350_0x4cc350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CC350_0x4cc350");
#endif

    switch (ctx->pc) {
        case 0x4cc350u: goto label_4cc350;
        case 0x4cc354u: goto label_4cc354;
        case 0x4cc358u: goto label_4cc358;
        case 0x4cc35cu: goto label_4cc35c;
        case 0x4cc360u: goto label_4cc360;
        case 0x4cc364u: goto label_4cc364;
        case 0x4cc368u: goto label_4cc368;
        case 0x4cc36cu: goto label_4cc36c;
        case 0x4cc370u: goto label_4cc370;
        case 0x4cc374u: goto label_4cc374;
        case 0x4cc378u: goto label_4cc378;
        case 0x4cc37cu: goto label_4cc37c;
        case 0x4cc380u: goto label_4cc380;
        case 0x4cc384u: goto label_4cc384;
        case 0x4cc388u: goto label_4cc388;
        case 0x4cc38cu: goto label_4cc38c;
        case 0x4cc390u: goto label_4cc390;
        case 0x4cc394u: goto label_4cc394;
        case 0x4cc398u: goto label_4cc398;
        case 0x4cc39cu: goto label_4cc39c;
        case 0x4cc3a0u: goto label_4cc3a0;
        case 0x4cc3a4u: goto label_4cc3a4;
        case 0x4cc3a8u: goto label_4cc3a8;
        case 0x4cc3acu: goto label_4cc3ac;
        case 0x4cc3b0u: goto label_4cc3b0;
        case 0x4cc3b4u: goto label_4cc3b4;
        case 0x4cc3b8u: goto label_4cc3b8;
        case 0x4cc3bcu: goto label_4cc3bc;
        case 0x4cc3c0u: goto label_4cc3c0;
        case 0x4cc3c4u: goto label_4cc3c4;
        case 0x4cc3c8u: goto label_4cc3c8;
        case 0x4cc3ccu: goto label_4cc3cc;
        case 0x4cc3d0u: goto label_4cc3d0;
        case 0x4cc3d4u: goto label_4cc3d4;
        case 0x4cc3d8u: goto label_4cc3d8;
        case 0x4cc3dcu: goto label_4cc3dc;
        case 0x4cc3e0u: goto label_4cc3e0;
        case 0x4cc3e4u: goto label_4cc3e4;
        case 0x4cc3e8u: goto label_4cc3e8;
        case 0x4cc3ecu: goto label_4cc3ec;
        case 0x4cc3f0u: goto label_4cc3f0;
        case 0x4cc3f4u: goto label_4cc3f4;
        case 0x4cc3f8u: goto label_4cc3f8;
        case 0x4cc3fcu: goto label_4cc3fc;
        case 0x4cc400u: goto label_4cc400;
        case 0x4cc404u: goto label_4cc404;
        case 0x4cc408u: goto label_4cc408;
        case 0x4cc40cu: goto label_4cc40c;
        case 0x4cc410u: goto label_4cc410;
        case 0x4cc414u: goto label_4cc414;
        case 0x4cc418u: goto label_4cc418;
        case 0x4cc41cu: goto label_4cc41c;
        case 0x4cc420u: goto label_4cc420;
        case 0x4cc424u: goto label_4cc424;
        case 0x4cc428u: goto label_4cc428;
        case 0x4cc42cu: goto label_4cc42c;
        case 0x4cc430u: goto label_4cc430;
        case 0x4cc434u: goto label_4cc434;
        case 0x4cc438u: goto label_4cc438;
        case 0x4cc43cu: goto label_4cc43c;
        case 0x4cc440u: goto label_4cc440;
        case 0x4cc444u: goto label_4cc444;
        case 0x4cc448u: goto label_4cc448;
        case 0x4cc44cu: goto label_4cc44c;
        case 0x4cc450u: goto label_4cc450;
        case 0x4cc454u: goto label_4cc454;
        case 0x4cc458u: goto label_4cc458;
        case 0x4cc45cu: goto label_4cc45c;
        case 0x4cc460u: goto label_4cc460;
        case 0x4cc464u: goto label_4cc464;
        case 0x4cc468u: goto label_4cc468;
        case 0x4cc46cu: goto label_4cc46c;
        case 0x4cc470u: goto label_4cc470;
        case 0x4cc474u: goto label_4cc474;
        case 0x4cc478u: goto label_4cc478;
        case 0x4cc47cu: goto label_4cc47c;
        case 0x4cc480u: goto label_4cc480;
        case 0x4cc484u: goto label_4cc484;
        case 0x4cc488u: goto label_4cc488;
        case 0x4cc48cu: goto label_4cc48c;
        case 0x4cc490u: goto label_4cc490;
        case 0x4cc494u: goto label_4cc494;
        case 0x4cc498u: goto label_4cc498;
        case 0x4cc49cu: goto label_4cc49c;
        case 0x4cc4a0u: goto label_4cc4a0;
        case 0x4cc4a4u: goto label_4cc4a4;
        case 0x4cc4a8u: goto label_4cc4a8;
        case 0x4cc4acu: goto label_4cc4ac;
        case 0x4cc4b0u: goto label_4cc4b0;
        case 0x4cc4b4u: goto label_4cc4b4;
        case 0x4cc4b8u: goto label_4cc4b8;
        case 0x4cc4bcu: goto label_4cc4bc;
        case 0x4cc4c0u: goto label_4cc4c0;
        case 0x4cc4c4u: goto label_4cc4c4;
        case 0x4cc4c8u: goto label_4cc4c8;
        case 0x4cc4ccu: goto label_4cc4cc;
        case 0x4cc4d0u: goto label_4cc4d0;
        case 0x4cc4d4u: goto label_4cc4d4;
        case 0x4cc4d8u: goto label_4cc4d8;
        case 0x4cc4dcu: goto label_4cc4dc;
        case 0x4cc4e0u: goto label_4cc4e0;
        case 0x4cc4e4u: goto label_4cc4e4;
        case 0x4cc4e8u: goto label_4cc4e8;
        case 0x4cc4ecu: goto label_4cc4ec;
        case 0x4cc4f0u: goto label_4cc4f0;
        case 0x4cc4f4u: goto label_4cc4f4;
        case 0x4cc4f8u: goto label_4cc4f8;
        case 0x4cc4fcu: goto label_4cc4fc;
        case 0x4cc500u: goto label_4cc500;
        case 0x4cc504u: goto label_4cc504;
        case 0x4cc508u: goto label_4cc508;
        case 0x4cc50cu: goto label_4cc50c;
        case 0x4cc510u: goto label_4cc510;
        case 0x4cc514u: goto label_4cc514;
        case 0x4cc518u: goto label_4cc518;
        case 0x4cc51cu: goto label_4cc51c;
        case 0x4cc520u: goto label_4cc520;
        case 0x4cc524u: goto label_4cc524;
        case 0x4cc528u: goto label_4cc528;
        case 0x4cc52cu: goto label_4cc52c;
        case 0x4cc530u: goto label_4cc530;
        case 0x4cc534u: goto label_4cc534;
        case 0x4cc538u: goto label_4cc538;
        case 0x4cc53cu: goto label_4cc53c;
        case 0x4cc540u: goto label_4cc540;
        case 0x4cc544u: goto label_4cc544;
        case 0x4cc548u: goto label_4cc548;
        case 0x4cc54cu: goto label_4cc54c;
        case 0x4cc550u: goto label_4cc550;
        case 0x4cc554u: goto label_4cc554;
        case 0x4cc558u: goto label_4cc558;
        case 0x4cc55cu: goto label_4cc55c;
        case 0x4cc560u: goto label_4cc560;
        case 0x4cc564u: goto label_4cc564;
        case 0x4cc568u: goto label_4cc568;
        case 0x4cc56cu: goto label_4cc56c;
        case 0x4cc570u: goto label_4cc570;
        case 0x4cc574u: goto label_4cc574;
        case 0x4cc578u: goto label_4cc578;
        case 0x4cc57cu: goto label_4cc57c;
        case 0x4cc580u: goto label_4cc580;
        case 0x4cc584u: goto label_4cc584;
        case 0x4cc588u: goto label_4cc588;
        case 0x4cc58cu: goto label_4cc58c;
        case 0x4cc590u: goto label_4cc590;
        case 0x4cc594u: goto label_4cc594;
        case 0x4cc598u: goto label_4cc598;
        case 0x4cc59cu: goto label_4cc59c;
        case 0x4cc5a0u: goto label_4cc5a0;
        case 0x4cc5a4u: goto label_4cc5a4;
        case 0x4cc5a8u: goto label_4cc5a8;
        case 0x4cc5acu: goto label_4cc5ac;
        case 0x4cc5b0u: goto label_4cc5b0;
        case 0x4cc5b4u: goto label_4cc5b4;
        case 0x4cc5b8u: goto label_4cc5b8;
        case 0x4cc5bcu: goto label_4cc5bc;
        case 0x4cc5c0u: goto label_4cc5c0;
        case 0x4cc5c4u: goto label_4cc5c4;
        case 0x4cc5c8u: goto label_4cc5c8;
        case 0x4cc5ccu: goto label_4cc5cc;
        case 0x4cc5d0u: goto label_4cc5d0;
        case 0x4cc5d4u: goto label_4cc5d4;
        case 0x4cc5d8u: goto label_4cc5d8;
        case 0x4cc5dcu: goto label_4cc5dc;
        case 0x4cc5e0u: goto label_4cc5e0;
        case 0x4cc5e4u: goto label_4cc5e4;
        case 0x4cc5e8u: goto label_4cc5e8;
        case 0x4cc5ecu: goto label_4cc5ec;
        case 0x4cc5f0u: goto label_4cc5f0;
        case 0x4cc5f4u: goto label_4cc5f4;
        case 0x4cc5f8u: goto label_4cc5f8;
        case 0x4cc5fcu: goto label_4cc5fc;
        default: break;
    }

    ctx->pc = 0x4cc350u;

label_4cc350:
    // 0x4cc350: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4cc350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4cc354:
    // 0x4cc354: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4cc354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4cc358:
    // 0x4cc358: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4cc358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4cc35c:
    // 0x4cc35c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x4cc35cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4cc360:
    // 0x4cc360: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4cc360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4cc364:
    // 0x4cc364: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x4cc364u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
label_4cc368:
    // 0x4cc368: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4cc368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4cc36c:
    // 0x4cc36c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cc36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4cc370:
    // 0x4cc370: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4cc370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cc374:
    // 0x4cc374: 0xc0aeaf4  jal         func_2BABD0
label_4cc378:
    if (ctx->pc == 0x4CC378u) {
        ctx->pc = 0x4CC378u;
            // 0x4cc378: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x4CC37Cu;
        goto label_4cc37c;
    }
    ctx->pc = 0x4CC374u;
    SET_GPR_U32(ctx, 31, 0x4CC37Cu);
    ctx->pc = 0x4CC378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC374u;
            // 0x4cc378: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC37Cu; }
        if (ctx->pc != 0x4CC37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC37Cu; }
        if (ctx->pc != 0x4CC37Cu) { return; }
    }
    ctx->pc = 0x4CC37Cu;
label_4cc37c:
    // 0x4cc37c: 0xc1331c8  jal         func_4CC720
label_4cc380:
    if (ctx->pc == 0x4CC380u) {
        ctx->pc = 0x4CC380u;
            // 0x4cc380: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4CC384u;
        goto label_4cc384;
    }
    ctx->pc = 0x4CC37Cu;
    SET_GPR_U32(ctx, 31, 0x4CC384u);
    ctx->pc = 0x4CC380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC37Cu;
            // 0x4cc380: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CC720u;
    if (runtime->hasFunction(0x4CC720u)) {
        auto targetFn = runtime->lookupFunction(0x4CC720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC384u; }
        if (ctx->pc != 0x4CC384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CC720_0x4cc720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC384u; }
        if (ctx->pc != 0x4CC384u) { return; }
    }
    ctx->pc = 0x4CC384u;
label_4cc384:
    // 0x4cc384: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4cc384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4cc388:
    // 0x4cc388: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4cc388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4cc38c:
    // 0x4cc38c: 0x24631cb0  addiu       $v1, $v1, 0x1CB0
    ctx->pc = 0x4cc38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7344));
label_4cc390:
    // 0x4cc390: 0x24421ce8  addiu       $v0, $v0, 0x1CE8
    ctx->pc = 0x4cc390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7400));
label_4cc394:
    // 0x4cc394: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4cc394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4cc398:
    // 0x4cc398: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x4cc398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4cc39c:
    // 0x4cc39c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4cc39cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4cc3a0:
    // 0x4cc3a0: 0xc1331c0  jal         func_4CC700
label_4cc3a4:
    if (ctx->pc == 0x4CC3A4u) {
        ctx->pc = 0x4CC3A4u;
            // 0x4cc3a4: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x4CC3A8u;
        goto label_4cc3a8;
    }
    ctx->pc = 0x4CC3A0u;
    SET_GPR_U32(ctx, 31, 0x4CC3A8u);
    ctx->pc = 0x4CC3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC3A0u;
            // 0x4cc3a4: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CC700u;
    if (runtime->hasFunction(0x4CC700u)) {
        auto targetFn = runtime->lookupFunction(0x4CC700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC3A8u; }
        if (ctx->pc != 0x4CC3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CC700_0x4cc700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC3A8u; }
        if (ctx->pc != 0x4CC3A8u) { return; }
    }
    ctx->pc = 0x4CC3A8u;
label_4cc3a8:
    // 0x4cc3a8: 0xc1331c0  jal         func_4CC700
label_4cc3ac:
    if (ctx->pc == 0x4CC3ACu) {
        ctx->pc = 0x4CC3ACu;
            // 0x4cc3ac: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4CC3B0u;
        goto label_4cc3b0;
    }
    ctx->pc = 0x4CC3A8u;
    SET_GPR_U32(ctx, 31, 0x4CC3B0u);
    ctx->pc = 0x4CC3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC3A8u;
            // 0x4cc3ac: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CC700u;
    if (runtime->hasFunction(0x4CC700u)) {
        auto targetFn = runtime->lookupFunction(0x4CC700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC3B0u; }
        if (ctx->pc != 0x4CC3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CC700_0x4cc700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC3B0u; }
        if (ctx->pc != 0x4CC3B0u) { return; }
    }
    ctx->pc = 0x4CC3B0u;
label_4cc3b0:
    // 0x4cc3b0: 0xc0aeac0  jal         func_2BAB00
label_4cc3b4:
    if (ctx->pc == 0x4CC3B4u) {
        ctx->pc = 0x4CC3B4u;
            // 0x4cc3b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CC3B8u;
        goto label_4cc3b8;
    }
    ctx->pc = 0x4CC3B0u;
    SET_GPR_U32(ctx, 31, 0x4CC3B8u);
    ctx->pc = 0x4CC3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC3B0u;
            // 0x4cc3b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC3B8u; }
        if (ctx->pc != 0x4CC3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC3B8u; }
        if (ctx->pc != 0x4CC3B8u) { return; }
    }
    ctx->pc = 0x4CC3B8u;
label_4cc3b8:
    // 0x4cc3b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4cc3b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cc3bc:
    // 0x4cc3bc: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_4cc3c0:
    if (ctx->pc == 0x4CC3C0u) {
        ctx->pc = 0x4CC3C4u;
        goto label_4cc3c4;
    }
    ctx->pc = 0x4CC3BCu;
    {
        const bool branch_taken_0x4cc3bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc3bc) {
            ctx->pc = 0x4CC440u;
            goto label_4cc440;
        }
    }
    ctx->pc = 0x4CC3C4u;
label_4cc3c4:
    // 0x4cc3c4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x4cc3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_4cc3c8:
    // 0x4cc3c8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4cc3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4cc3cc:
    // 0x4cc3cc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4cc3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_4cc3d0:
    // 0x4cc3d0: 0xc040138  jal         func_1004E0
label_4cc3d4:
    if (ctx->pc == 0x4CC3D4u) {
        ctx->pc = 0x4CC3D4u;
            // 0x4cc3d4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4CC3D8u;
        goto label_4cc3d8;
    }
    ctx->pc = 0x4CC3D0u;
    SET_GPR_U32(ctx, 31, 0x4CC3D8u);
    ctx->pc = 0x4CC3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC3D0u;
            // 0x4cc3d4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC3D8u; }
        if (ctx->pc != 0x4CC3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC3D8u; }
        if (ctx->pc != 0x4CC3D8u) { return; }
    }
    ctx->pc = 0x4CC3D8u;
label_4cc3d8:
    // 0x4cc3d8: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4cc3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
label_4cc3dc:
    // 0x4cc3dc: 0x3c06004d  lui         $a2, 0x4D
    ctx->pc = 0x4cc3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)77 << 16));
label_4cc3e0:
    // 0x4cc3e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4cc3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cc3e4:
    // 0x4cc3e4: 0x24a5c630  addiu       $a1, $a1, -0x39D0
    ctx->pc = 0x4cc3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952496));
label_4cc3e8:
    // 0x4cc3e8: 0x24c6c160  addiu       $a2, $a2, -0x3EA0
    ctx->pc = 0x4cc3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951264));
label_4cc3ec:
    // 0x4cc3ec: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x4cc3ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_4cc3f0:
    // 0x4cc3f0: 0xc040840  jal         func_102100
label_4cc3f4:
    if (ctx->pc == 0x4CC3F4u) {
        ctx->pc = 0x4CC3F4u;
            // 0x4cc3f4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CC3F8u;
        goto label_4cc3f8;
    }
    ctx->pc = 0x4CC3F0u;
    SET_GPR_U32(ctx, 31, 0x4CC3F8u);
    ctx->pc = 0x4CC3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC3F0u;
            // 0x4cc3f4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC3F8u; }
        if (ctx->pc != 0x4CC3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC3F8u; }
        if (ctx->pc != 0x4CC3F8u) { return; }
    }
    ctx->pc = 0x4CC3F8u;
label_4cc3f8:
    // 0x4cc3f8: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x4cc3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_4cc3fc:
    // 0x4cc3fc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4cc3fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cc400:
    // 0x4cc400: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x4cc400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4cc404:
    // 0x4cc404: 0xc133188  jal         func_4CC620
label_4cc408:
    if (ctx->pc == 0x4CC408u) {
        ctx->pc = 0x4CC408u;
            // 0x4cc408: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CC40Cu;
        goto label_4cc40c;
    }
    ctx->pc = 0x4CC404u;
    SET_GPR_U32(ctx, 31, 0x4CC40Cu);
    ctx->pc = 0x4CC408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC404u;
            // 0x4cc408: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CC620u;
    if (runtime->hasFunction(0x4CC620u)) {
        auto targetFn = runtime->lookupFunction(0x4CC620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC40Cu; }
        if (ctx->pc != 0x4CC40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CC620_0x4cc620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC40Cu; }
        if (ctx->pc != 0x4CC40Cu) { return; }
    }
    ctx->pc = 0x4CC40Cu;
label_4cc40c:
    // 0x4cc40c: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x4cc40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4cc410:
    // 0x4cc410: 0xc133188  jal         func_4CC620
label_4cc414:
    if (ctx->pc == 0x4CC414u) {
        ctx->pc = 0x4CC414u;
            // 0x4cc414: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CC418u;
        goto label_4cc418;
    }
    ctx->pc = 0x4CC410u;
    SET_GPR_U32(ctx, 31, 0x4CC418u);
    ctx->pc = 0x4CC414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC410u;
            // 0x4cc414: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CC620u;
    if (runtime->hasFunction(0x4CC620u)) {
        auto targetFn = runtime->lookupFunction(0x4CC620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC418u; }
        if (ctx->pc != 0x4CC418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CC620_0x4cc620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC418u; }
        if (ctx->pc != 0x4CC418u) { return; }
    }
    ctx->pc = 0x4CC418u;
label_4cc418:
    // 0x4cc418: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4cc418u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cc41c:
    // 0x4cc41c: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x4cc41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4cc420:
    // 0x4cc420: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x4cc420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_4cc424:
    // 0x4cc424: 0xc133180  jal         func_4CC600
label_4cc428:
    if (ctx->pc == 0x4CC428u) {
        ctx->pc = 0x4CC428u;
            // 0x4cc428: 0xafb3005c  sw          $s3, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
        ctx->pc = 0x4CC42Cu;
        goto label_4cc42c;
    }
    ctx->pc = 0x4CC424u;
    SET_GPR_U32(ctx, 31, 0x4CC42Cu);
    ctx->pc = 0x4CC428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC424u;
            // 0x4cc428: 0xafb3005c  sw          $s3, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CC600u;
    if (runtime->hasFunction(0x4CC600u)) {
        auto targetFn = runtime->lookupFunction(0x4CC600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC42Cu; }
        if (ctx->pc != 0x4CC42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CC600_0x4cc600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC42Cu; }
        if (ctx->pc != 0x4CC42Cu) { return; }
    }
    ctx->pc = 0x4CC42Cu;
label_4cc42c:
    // 0x4cc42c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4cc42cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4cc430:
    // 0x4cc430: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4cc430u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4cc434:
    // 0x4cc434: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_4cc438:
    if (ctx->pc == 0x4CC438u) {
        ctx->pc = 0x4CC438u;
            // 0x4cc438: 0x26730060  addiu       $s3, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->pc = 0x4CC43Cu;
        goto label_4cc43c;
    }
    ctx->pc = 0x4CC434u;
    {
        const bool branch_taken_0x4cc434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CC438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC434u;
            // 0x4cc438: 0x26730060  addiu       $s3, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc434) {
            ctx->pc = 0x4CC41Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4cc41c;
        }
    }
    ctx->pc = 0x4CC43Cu;
label_4cc43c:
    // 0x4cc43c: 0x0  nop
    ctx->pc = 0x4cc43cu;
    // NOP
label_4cc440:
    // 0x4cc440: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4cc440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4cc444:
    // 0x4cc444: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x4cc444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4cc448:
    // 0x4cc448: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4cc448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4cc44c:
    // 0x4cc44c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x4cc44cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_4cc450:
    // 0x4cc450: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4cc450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4cc454:
    // 0x4cc454: 0x24a5c4f0  addiu       $a1, $a1, -0x3B10
    ctx->pc = 0x4cc454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952176));
label_4cc458:
    // 0x4cc458: 0x24841bd0  addiu       $a0, $a0, 0x1BD0
    ctx->pc = 0x4cc458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7120));
label_4cc45c:
    // 0x4cc45c: 0x8cc60968  lw          $a2, 0x968($a2)
    ctx->pc = 0x4cc45cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2408)));
label_4cc460:
    // 0x4cc460: 0x24631c08  addiu       $v1, $v1, 0x1C08
    ctx->pc = 0x4cc460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7176));
label_4cc464:
    // 0x4cc464: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4cc464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4cc468:
    // 0x4cc468: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4cc468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4cc46c:
    // 0x4cc46c: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x4cc46cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4cc470:
    // 0x4cc470: 0xa2250084  sb          $a1, 0x84($s1)
    ctx->pc = 0x4cc470u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 132), (uint8_t)GPR_U32(ctx, 5));
label_4cc474:
    // 0x4cc474: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4cc474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_4cc478:
    // 0x4cc478: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4cc478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4cc47c:
    // 0x4cc47c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4cc47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4cc480:
    // 0x4cc480: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4cc480u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4cc484:
    // 0x4cc484: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4cc484u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4cc488:
    // 0x4cc488: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cc488u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4cc48c:
    // 0x4cc48c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cc48cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cc490:
    // 0x4cc490: 0x3e00008  jr          $ra
label_4cc494:
    if (ctx->pc == 0x4CC494u) {
        ctx->pc = 0x4CC494u;
            // 0x4cc494: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4CC498u;
        goto label_4cc498;
    }
    ctx->pc = 0x4CC490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CC494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC490u;
            // 0x4cc494: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CC498u;
label_4cc498:
    // 0x4cc498: 0x0  nop
    ctx->pc = 0x4cc498u;
    // NOP
label_4cc49c:
    // 0x4cc49c: 0x0  nop
    ctx->pc = 0x4cc49cu;
    // NOP
label_4cc4a0:
    // 0x4cc4a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4cc4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4cc4a4:
    // 0x4cc4a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4cc4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4cc4a8:
    // 0x4cc4a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cc4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4cc4ac:
    // 0x4cc4ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cc4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cc4b0:
    // 0x4cc4b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4cc4b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cc4b4:
    // 0x4cc4b4: 0x12200049  beqz        $s1, . + 4 + (0x49 << 2)
label_4cc4b8:
    if (ctx->pc == 0x4CC4B8u) {
        ctx->pc = 0x4CC4B8u;
            // 0x4cc4b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CC4BCu;
        goto label_4cc4bc;
    }
    ctx->pc = 0x4CC4B4u;
    {
        const bool branch_taken_0x4cc4b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC4B4u;
            // 0x4cc4b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc4b4) {
            ctx->pc = 0x4CC5DCu;
            goto label_4cc5dc;
        }
    }
    ctx->pc = 0x4CC4BCu;
label_4cc4bc:
    // 0x4cc4bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4cc4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4cc4c0:
    // 0x4cc4c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4cc4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4cc4c4:
    // 0x4cc4c4: 0x24631cb0  addiu       $v1, $v1, 0x1CB0
    ctx->pc = 0x4cc4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7344));
label_4cc4c8:
    // 0x4cc4c8: 0x24421ce8  addiu       $v0, $v0, 0x1CE8
    ctx->pc = 0x4cc4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7400));
label_4cc4cc:
    // 0x4cc4cc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4cc4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4cc4d0:
    // 0x4cc4d0: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4cc4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4cc4d4:
    // 0x4cc4d4: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4cc4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4cc4d8:
    // 0x4cc4d8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_4cc4dc:
    if (ctx->pc == 0x4CC4DCu) {
        ctx->pc = 0x4CC4DCu;
            // 0x4cc4dc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4CC4E0u;
        goto label_4cc4e0;
    }
    ctx->pc = 0x4CC4D8u;
    {
        const bool branch_taken_0x4cc4d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc4d8) {
            ctx->pc = 0x4CC4DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC4D8u;
            // 0x4cc4dc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CC4F0u;
            goto label_4cc4f0;
        }
    }
    ctx->pc = 0x4CC4E0u;
label_4cc4e0:
    // 0x4cc4e0: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4cc4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
label_4cc4e4:
    // 0x4cc4e4: 0xc0407c0  jal         func_101F00
label_4cc4e8:
    if (ctx->pc == 0x4CC4E8u) {
        ctx->pc = 0x4CC4E8u;
            // 0x4cc4e8: 0x24a5c160  addiu       $a1, $a1, -0x3EA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951264));
        ctx->pc = 0x4CC4ECu;
        goto label_4cc4ec;
    }
    ctx->pc = 0x4CC4E4u;
    SET_GPR_U32(ctx, 31, 0x4CC4ECu);
    ctx->pc = 0x4CC4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC4E4u;
            // 0x4cc4e8: 0x24a5c160  addiu       $a1, $a1, -0x3EA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC4ECu; }
        if (ctx->pc != 0x4CC4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC4ECu; }
        if (ctx->pc != 0x4CC4ECu) { return; }
    }
    ctx->pc = 0x4CC4ECu;
label_4cc4ec:
    // 0x4cc4ec: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4cc4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4cc4f0:
    // 0x4cc4f0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4cc4f4:
    if (ctx->pc == 0x4CC4F4u) {
        ctx->pc = 0x4CC4F4u;
            // 0x4cc4f4: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4CC4F8u;
        goto label_4cc4f8;
    }
    ctx->pc = 0x4CC4F0u;
    {
        const bool branch_taken_0x4cc4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc4f0) {
            ctx->pc = 0x4CC4F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC4F0u;
            // 0x4cc4f4: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CC520u;
            goto label_4cc520;
        }
    }
    ctx->pc = 0x4CC4F8u;
label_4cc4f8:
    // 0x4cc4f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4cc4fc:
    if (ctx->pc == 0x4CC4FCu) {
        ctx->pc = 0x4CC500u;
        goto label_4cc500;
    }
    ctx->pc = 0x4CC4F8u;
    {
        const bool branch_taken_0x4cc4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc4f8) {
            ctx->pc = 0x4CC51Cu;
            goto label_4cc51c;
        }
    }
    ctx->pc = 0x4CC500u;
label_4cc500:
    // 0x4cc500: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4cc504:
    if (ctx->pc == 0x4CC504u) {
        ctx->pc = 0x4CC508u;
        goto label_4cc508;
    }
    ctx->pc = 0x4CC500u;
    {
        const bool branch_taken_0x4cc500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc500) {
            ctx->pc = 0x4CC51Cu;
            goto label_4cc51c;
        }
    }
    ctx->pc = 0x4CC508u;
label_4cc508:
    // 0x4cc508: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4cc508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4cc50c:
    // 0x4cc50c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4cc510:
    if (ctx->pc == 0x4CC510u) {
        ctx->pc = 0x4CC514u;
        goto label_4cc514;
    }
    ctx->pc = 0x4CC50Cu;
    {
        const bool branch_taken_0x4cc50c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc50c) {
            ctx->pc = 0x4CC51Cu;
            goto label_4cc51c;
        }
    }
    ctx->pc = 0x4CC514u;
label_4cc514:
    // 0x4cc514: 0xc0400a8  jal         func_1002A0
label_4cc518:
    if (ctx->pc == 0x4CC518u) {
        ctx->pc = 0x4CC51Cu;
        goto label_4cc51c;
    }
    ctx->pc = 0x4CC514u;
    SET_GPR_U32(ctx, 31, 0x4CC51Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC51Cu; }
        if (ctx->pc != 0x4CC51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC51Cu; }
        if (ctx->pc != 0x4CC51Cu) { return; }
    }
    ctx->pc = 0x4CC51Cu;
label_4cc51c:
    // 0x4cc51c: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4cc51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4cc520:
    // 0x4cc520: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4cc524:
    if (ctx->pc == 0x4CC524u) {
        ctx->pc = 0x4CC524u;
            // 0x4cc524: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4CC528u;
        goto label_4cc528;
    }
    ctx->pc = 0x4CC520u;
    {
        const bool branch_taken_0x4cc520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc520) {
            ctx->pc = 0x4CC524u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC520u;
            // 0x4cc524: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CC550u;
            goto label_4cc550;
        }
    }
    ctx->pc = 0x4CC528u;
label_4cc528:
    // 0x4cc528: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4cc52c:
    if (ctx->pc == 0x4CC52Cu) {
        ctx->pc = 0x4CC530u;
        goto label_4cc530;
    }
    ctx->pc = 0x4CC528u;
    {
        const bool branch_taken_0x4cc528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc528) {
            ctx->pc = 0x4CC54Cu;
            goto label_4cc54c;
        }
    }
    ctx->pc = 0x4CC530u;
label_4cc530:
    // 0x4cc530: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4cc534:
    if (ctx->pc == 0x4CC534u) {
        ctx->pc = 0x4CC538u;
        goto label_4cc538;
    }
    ctx->pc = 0x4CC530u;
    {
        const bool branch_taken_0x4cc530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc530) {
            ctx->pc = 0x4CC54Cu;
            goto label_4cc54c;
        }
    }
    ctx->pc = 0x4CC538u;
label_4cc538:
    // 0x4cc538: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4cc538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4cc53c:
    // 0x4cc53c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4cc540:
    if (ctx->pc == 0x4CC540u) {
        ctx->pc = 0x4CC544u;
        goto label_4cc544;
    }
    ctx->pc = 0x4CC53Cu;
    {
        const bool branch_taken_0x4cc53c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc53c) {
            ctx->pc = 0x4CC54Cu;
            goto label_4cc54c;
        }
    }
    ctx->pc = 0x4CC544u;
label_4cc544:
    // 0x4cc544: 0xc0400a8  jal         func_1002A0
label_4cc548:
    if (ctx->pc == 0x4CC548u) {
        ctx->pc = 0x4CC54Cu;
        goto label_4cc54c;
    }
    ctx->pc = 0x4CC544u;
    SET_GPR_U32(ctx, 31, 0x4CC54Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC54Cu; }
        if (ctx->pc != 0x4CC54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC54Cu; }
        if (ctx->pc != 0x4CC54Cu) { return; }
    }
    ctx->pc = 0x4CC54Cu;
label_4cc54c:
    // 0x4cc54c: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4cc54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4cc550:
    // 0x4cc550: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4cc554:
    if (ctx->pc == 0x4CC554u) {
        ctx->pc = 0x4CC558u;
        goto label_4cc558;
    }
    ctx->pc = 0x4CC550u;
    {
        const bool branch_taken_0x4cc550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc550) {
            ctx->pc = 0x4CC56Cu;
            goto label_4cc56c;
        }
    }
    ctx->pc = 0x4CC558u;
label_4cc558:
    // 0x4cc558: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4cc558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4cc55c:
    // 0x4cc55c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4cc55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4cc560:
    // 0x4cc560: 0x24631ca0  addiu       $v1, $v1, 0x1CA0
    ctx->pc = 0x4cc560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7328));
label_4cc564:
    // 0x4cc564: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4cc564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4cc568:
    // 0x4cc568: 0xac40aa18  sw          $zero, -0x55E8($v0)
    ctx->pc = 0x4cc568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945304), GPR_U32(ctx, 0));
label_4cc56c:
    // 0x4cc56c: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4cc570:
    if (ctx->pc == 0x4CC570u) {
        ctx->pc = 0x4CC570u;
            // 0x4cc570: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4CC574u;
        goto label_4cc574;
    }
    ctx->pc = 0x4CC56Cu;
    {
        const bool branch_taken_0x4cc56c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc56c) {
            ctx->pc = 0x4CC570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC56Cu;
            // 0x4cc570: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CC5C8u;
            goto label_4cc5c8;
        }
    }
    ctx->pc = 0x4CC574u;
label_4cc574:
    // 0x4cc574: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4cc574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4cc578:
    // 0x4cc578: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4cc578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4cc57c:
    // 0x4cc57c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4cc57cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4cc580:
    // 0x4cc580: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4cc580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4cc584:
    // 0x4cc584: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4cc588:
    if (ctx->pc == 0x4CC588u) {
        ctx->pc = 0x4CC588u;
            // 0x4cc588: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4CC58Cu;
        goto label_4cc58c;
    }
    ctx->pc = 0x4CC584u;
    {
        const bool branch_taken_0x4cc584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc584) {
            ctx->pc = 0x4CC588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC584u;
            // 0x4cc588: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CC5A0u;
            goto label_4cc5a0;
        }
    }
    ctx->pc = 0x4CC58Cu;
label_4cc58c:
    // 0x4cc58c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4cc58cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4cc590:
    // 0x4cc590: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4cc590u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4cc594:
    // 0x4cc594: 0x320f809  jalr        $t9
label_4cc598:
    if (ctx->pc == 0x4CC598u) {
        ctx->pc = 0x4CC598u;
            // 0x4cc598: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4CC59Cu;
        goto label_4cc59c;
    }
    ctx->pc = 0x4CC594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CC59Cu);
        ctx->pc = 0x4CC598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC594u;
            // 0x4cc598: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CC59Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CC59Cu; }
            if (ctx->pc != 0x4CC59Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4CC59Cu;
label_4cc59c:
    // 0x4cc59c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4cc59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4cc5a0:
    // 0x4cc5a0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4cc5a4:
    if (ctx->pc == 0x4CC5A4u) {
        ctx->pc = 0x4CC5A4u;
            // 0x4cc5a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CC5A8u;
        goto label_4cc5a8;
    }
    ctx->pc = 0x4CC5A0u;
    {
        const bool branch_taken_0x4cc5a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc5a0) {
            ctx->pc = 0x4CC5A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC5A0u;
            // 0x4cc5a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CC5BCu;
            goto label_4cc5bc;
        }
    }
    ctx->pc = 0x4CC5A8u;
label_4cc5a8:
    // 0x4cc5a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4cc5a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4cc5ac:
    // 0x4cc5ac: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4cc5acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4cc5b0:
    // 0x4cc5b0: 0x320f809  jalr        $t9
label_4cc5b4:
    if (ctx->pc == 0x4CC5B4u) {
        ctx->pc = 0x4CC5B4u;
            // 0x4cc5b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4CC5B8u;
        goto label_4cc5b8;
    }
    ctx->pc = 0x4CC5B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CC5B8u);
        ctx->pc = 0x4CC5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC5B0u;
            // 0x4cc5b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CC5B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CC5B8u; }
            if (ctx->pc != 0x4CC5B8u) { return; }
        }
        }
    }
    ctx->pc = 0x4CC5B8u;
label_4cc5b8:
    // 0x4cc5b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4cc5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4cc5bc:
    // 0x4cc5bc: 0xc075bf8  jal         func_1D6FE0
label_4cc5c0:
    if (ctx->pc == 0x4CC5C0u) {
        ctx->pc = 0x4CC5C0u;
            // 0x4cc5c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CC5C4u;
        goto label_4cc5c4;
    }
    ctx->pc = 0x4CC5BCu;
    SET_GPR_U32(ctx, 31, 0x4CC5C4u);
    ctx->pc = 0x4CC5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC5BCu;
            // 0x4cc5c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC5C4u; }
        if (ctx->pc != 0x4CC5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC5C4u; }
        if (ctx->pc != 0x4CC5C4u) { return; }
    }
    ctx->pc = 0x4CC5C4u;
label_4cc5c4:
    // 0x4cc5c4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4cc5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4cc5c8:
    // 0x4cc5c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4cc5c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4cc5cc:
    // 0x4cc5cc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4cc5d0:
    if (ctx->pc == 0x4CC5D0u) {
        ctx->pc = 0x4CC5D0u;
            // 0x4cc5d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CC5D4u;
        goto label_4cc5d4;
    }
    ctx->pc = 0x4CC5CCu;
    {
        const bool branch_taken_0x4cc5cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4cc5cc) {
            ctx->pc = 0x4CC5D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC5CCu;
            // 0x4cc5d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CC5E0u;
            goto label_4cc5e0;
        }
    }
    ctx->pc = 0x4CC5D4u;
label_4cc5d4:
    // 0x4cc5d4: 0xc0400a8  jal         func_1002A0
label_4cc5d8:
    if (ctx->pc == 0x4CC5D8u) {
        ctx->pc = 0x4CC5D8u;
            // 0x4cc5d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CC5DCu;
        goto label_4cc5dc;
    }
    ctx->pc = 0x4CC5D4u;
    SET_GPR_U32(ctx, 31, 0x4CC5DCu);
    ctx->pc = 0x4CC5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC5D4u;
            // 0x4cc5d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC5DCu; }
        if (ctx->pc != 0x4CC5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC5DCu; }
        if (ctx->pc != 0x4CC5DCu) { return; }
    }
    ctx->pc = 0x4CC5DCu;
label_4cc5dc:
    // 0x4cc5dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4cc5dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4cc5e0:
    // 0x4cc5e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4cc5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4cc5e4:
    // 0x4cc5e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cc5e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4cc5e8:
    // 0x4cc5e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cc5e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cc5ec:
    // 0x4cc5ec: 0x3e00008  jr          $ra
label_4cc5f0:
    if (ctx->pc == 0x4CC5F0u) {
        ctx->pc = 0x4CC5F0u;
            // 0x4cc5f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4CC5F4u;
        goto label_4cc5f4;
    }
    ctx->pc = 0x4CC5ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CC5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC5ECu;
            // 0x4cc5f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CC5F4u;
label_4cc5f4:
    // 0x4cc5f4: 0x0  nop
    ctx->pc = 0x4cc5f4u;
    // NOP
label_4cc5f8:
    // 0x4cc5f8: 0x0  nop
    ctx->pc = 0x4cc5f8u;
    // NOP
label_4cc5fc:
    // 0x4cc5fc: 0x0  nop
    ctx->pc = 0x4cc5fcu;
    // NOP
}
