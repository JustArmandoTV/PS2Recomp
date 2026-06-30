#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BC380
// Address: 0x3bc380 - 0x3bc720
void sub_003BC380_0x3bc380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BC380_0x3bc380");
#endif

    switch (ctx->pc) {
        case 0x3bc380u: goto label_3bc380;
        case 0x3bc384u: goto label_3bc384;
        case 0x3bc388u: goto label_3bc388;
        case 0x3bc38cu: goto label_3bc38c;
        case 0x3bc390u: goto label_3bc390;
        case 0x3bc394u: goto label_3bc394;
        case 0x3bc398u: goto label_3bc398;
        case 0x3bc39cu: goto label_3bc39c;
        case 0x3bc3a0u: goto label_3bc3a0;
        case 0x3bc3a4u: goto label_3bc3a4;
        case 0x3bc3a8u: goto label_3bc3a8;
        case 0x3bc3acu: goto label_3bc3ac;
        case 0x3bc3b0u: goto label_3bc3b0;
        case 0x3bc3b4u: goto label_3bc3b4;
        case 0x3bc3b8u: goto label_3bc3b8;
        case 0x3bc3bcu: goto label_3bc3bc;
        case 0x3bc3c0u: goto label_3bc3c0;
        case 0x3bc3c4u: goto label_3bc3c4;
        case 0x3bc3c8u: goto label_3bc3c8;
        case 0x3bc3ccu: goto label_3bc3cc;
        case 0x3bc3d0u: goto label_3bc3d0;
        case 0x3bc3d4u: goto label_3bc3d4;
        case 0x3bc3d8u: goto label_3bc3d8;
        case 0x3bc3dcu: goto label_3bc3dc;
        case 0x3bc3e0u: goto label_3bc3e0;
        case 0x3bc3e4u: goto label_3bc3e4;
        case 0x3bc3e8u: goto label_3bc3e8;
        case 0x3bc3ecu: goto label_3bc3ec;
        case 0x3bc3f0u: goto label_3bc3f0;
        case 0x3bc3f4u: goto label_3bc3f4;
        case 0x3bc3f8u: goto label_3bc3f8;
        case 0x3bc3fcu: goto label_3bc3fc;
        case 0x3bc400u: goto label_3bc400;
        case 0x3bc404u: goto label_3bc404;
        case 0x3bc408u: goto label_3bc408;
        case 0x3bc40cu: goto label_3bc40c;
        case 0x3bc410u: goto label_3bc410;
        case 0x3bc414u: goto label_3bc414;
        case 0x3bc418u: goto label_3bc418;
        case 0x3bc41cu: goto label_3bc41c;
        case 0x3bc420u: goto label_3bc420;
        case 0x3bc424u: goto label_3bc424;
        case 0x3bc428u: goto label_3bc428;
        case 0x3bc42cu: goto label_3bc42c;
        case 0x3bc430u: goto label_3bc430;
        case 0x3bc434u: goto label_3bc434;
        case 0x3bc438u: goto label_3bc438;
        case 0x3bc43cu: goto label_3bc43c;
        case 0x3bc440u: goto label_3bc440;
        case 0x3bc444u: goto label_3bc444;
        case 0x3bc448u: goto label_3bc448;
        case 0x3bc44cu: goto label_3bc44c;
        case 0x3bc450u: goto label_3bc450;
        case 0x3bc454u: goto label_3bc454;
        case 0x3bc458u: goto label_3bc458;
        case 0x3bc45cu: goto label_3bc45c;
        case 0x3bc460u: goto label_3bc460;
        case 0x3bc464u: goto label_3bc464;
        case 0x3bc468u: goto label_3bc468;
        case 0x3bc46cu: goto label_3bc46c;
        case 0x3bc470u: goto label_3bc470;
        case 0x3bc474u: goto label_3bc474;
        case 0x3bc478u: goto label_3bc478;
        case 0x3bc47cu: goto label_3bc47c;
        case 0x3bc480u: goto label_3bc480;
        case 0x3bc484u: goto label_3bc484;
        case 0x3bc488u: goto label_3bc488;
        case 0x3bc48cu: goto label_3bc48c;
        case 0x3bc490u: goto label_3bc490;
        case 0x3bc494u: goto label_3bc494;
        case 0x3bc498u: goto label_3bc498;
        case 0x3bc49cu: goto label_3bc49c;
        case 0x3bc4a0u: goto label_3bc4a0;
        case 0x3bc4a4u: goto label_3bc4a4;
        case 0x3bc4a8u: goto label_3bc4a8;
        case 0x3bc4acu: goto label_3bc4ac;
        case 0x3bc4b0u: goto label_3bc4b0;
        case 0x3bc4b4u: goto label_3bc4b4;
        case 0x3bc4b8u: goto label_3bc4b8;
        case 0x3bc4bcu: goto label_3bc4bc;
        case 0x3bc4c0u: goto label_3bc4c0;
        case 0x3bc4c4u: goto label_3bc4c4;
        case 0x3bc4c8u: goto label_3bc4c8;
        case 0x3bc4ccu: goto label_3bc4cc;
        case 0x3bc4d0u: goto label_3bc4d0;
        case 0x3bc4d4u: goto label_3bc4d4;
        case 0x3bc4d8u: goto label_3bc4d8;
        case 0x3bc4dcu: goto label_3bc4dc;
        case 0x3bc4e0u: goto label_3bc4e0;
        case 0x3bc4e4u: goto label_3bc4e4;
        case 0x3bc4e8u: goto label_3bc4e8;
        case 0x3bc4ecu: goto label_3bc4ec;
        case 0x3bc4f0u: goto label_3bc4f0;
        case 0x3bc4f4u: goto label_3bc4f4;
        case 0x3bc4f8u: goto label_3bc4f8;
        case 0x3bc4fcu: goto label_3bc4fc;
        case 0x3bc500u: goto label_3bc500;
        case 0x3bc504u: goto label_3bc504;
        case 0x3bc508u: goto label_3bc508;
        case 0x3bc50cu: goto label_3bc50c;
        case 0x3bc510u: goto label_3bc510;
        case 0x3bc514u: goto label_3bc514;
        case 0x3bc518u: goto label_3bc518;
        case 0x3bc51cu: goto label_3bc51c;
        case 0x3bc520u: goto label_3bc520;
        case 0x3bc524u: goto label_3bc524;
        case 0x3bc528u: goto label_3bc528;
        case 0x3bc52cu: goto label_3bc52c;
        case 0x3bc530u: goto label_3bc530;
        case 0x3bc534u: goto label_3bc534;
        case 0x3bc538u: goto label_3bc538;
        case 0x3bc53cu: goto label_3bc53c;
        case 0x3bc540u: goto label_3bc540;
        case 0x3bc544u: goto label_3bc544;
        case 0x3bc548u: goto label_3bc548;
        case 0x3bc54cu: goto label_3bc54c;
        case 0x3bc550u: goto label_3bc550;
        case 0x3bc554u: goto label_3bc554;
        case 0x3bc558u: goto label_3bc558;
        case 0x3bc55cu: goto label_3bc55c;
        case 0x3bc560u: goto label_3bc560;
        case 0x3bc564u: goto label_3bc564;
        case 0x3bc568u: goto label_3bc568;
        case 0x3bc56cu: goto label_3bc56c;
        case 0x3bc570u: goto label_3bc570;
        case 0x3bc574u: goto label_3bc574;
        case 0x3bc578u: goto label_3bc578;
        case 0x3bc57cu: goto label_3bc57c;
        case 0x3bc580u: goto label_3bc580;
        case 0x3bc584u: goto label_3bc584;
        case 0x3bc588u: goto label_3bc588;
        case 0x3bc58cu: goto label_3bc58c;
        case 0x3bc590u: goto label_3bc590;
        case 0x3bc594u: goto label_3bc594;
        case 0x3bc598u: goto label_3bc598;
        case 0x3bc59cu: goto label_3bc59c;
        case 0x3bc5a0u: goto label_3bc5a0;
        case 0x3bc5a4u: goto label_3bc5a4;
        case 0x3bc5a8u: goto label_3bc5a8;
        case 0x3bc5acu: goto label_3bc5ac;
        case 0x3bc5b0u: goto label_3bc5b0;
        case 0x3bc5b4u: goto label_3bc5b4;
        case 0x3bc5b8u: goto label_3bc5b8;
        case 0x3bc5bcu: goto label_3bc5bc;
        case 0x3bc5c0u: goto label_3bc5c0;
        case 0x3bc5c4u: goto label_3bc5c4;
        case 0x3bc5c8u: goto label_3bc5c8;
        case 0x3bc5ccu: goto label_3bc5cc;
        case 0x3bc5d0u: goto label_3bc5d0;
        case 0x3bc5d4u: goto label_3bc5d4;
        case 0x3bc5d8u: goto label_3bc5d8;
        case 0x3bc5dcu: goto label_3bc5dc;
        case 0x3bc5e0u: goto label_3bc5e0;
        case 0x3bc5e4u: goto label_3bc5e4;
        case 0x3bc5e8u: goto label_3bc5e8;
        case 0x3bc5ecu: goto label_3bc5ec;
        case 0x3bc5f0u: goto label_3bc5f0;
        case 0x3bc5f4u: goto label_3bc5f4;
        case 0x3bc5f8u: goto label_3bc5f8;
        case 0x3bc5fcu: goto label_3bc5fc;
        case 0x3bc600u: goto label_3bc600;
        case 0x3bc604u: goto label_3bc604;
        case 0x3bc608u: goto label_3bc608;
        case 0x3bc60cu: goto label_3bc60c;
        case 0x3bc610u: goto label_3bc610;
        case 0x3bc614u: goto label_3bc614;
        case 0x3bc618u: goto label_3bc618;
        case 0x3bc61cu: goto label_3bc61c;
        case 0x3bc620u: goto label_3bc620;
        case 0x3bc624u: goto label_3bc624;
        case 0x3bc628u: goto label_3bc628;
        case 0x3bc62cu: goto label_3bc62c;
        case 0x3bc630u: goto label_3bc630;
        case 0x3bc634u: goto label_3bc634;
        case 0x3bc638u: goto label_3bc638;
        case 0x3bc63cu: goto label_3bc63c;
        case 0x3bc640u: goto label_3bc640;
        case 0x3bc644u: goto label_3bc644;
        case 0x3bc648u: goto label_3bc648;
        case 0x3bc64cu: goto label_3bc64c;
        case 0x3bc650u: goto label_3bc650;
        case 0x3bc654u: goto label_3bc654;
        case 0x3bc658u: goto label_3bc658;
        case 0x3bc65cu: goto label_3bc65c;
        case 0x3bc660u: goto label_3bc660;
        case 0x3bc664u: goto label_3bc664;
        case 0x3bc668u: goto label_3bc668;
        case 0x3bc66cu: goto label_3bc66c;
        case 0x3bc670u: goto label_3bc670;
        case 0x3bc674u: goto label_3bc674;
        case 0x3bc678u: goto label_3bc678;
        case 0x3bc67cu: goto label_3bc67c;
        case 0x3bc680u: goto label_3bc680;
        case 0x3bc684u: goto label_3bc684;
        case 0x3bc688u: goto label_3bc688;
        case 0x3bc68cu: goto label_3bc68c;
        case 0x3bc690u: goto label_3bc690;
        case 0x3bc694u: goto label_3bc694;
        case 0x3bc698u: goto label_3bc698;
        case 0x3bc69cu: goto label_3bc69c;
        case 0x3bc6a0u: goto label_3bc6a0;
        case 0x3bc6a4u: goto label_3bc6a4;
        case 0x3bc6a8u: goto label_3bc6a8;
        case 0x3bc6acu: goto label_3bc6ac;
        case 0x3bc6b0u: goto label_3bc6b0;
        case 0x3bc6b4u: goto label_3bc6b4;
        case 0x3bc6b8u: goto label_3bc6b8;
        case 0x3bc6bcu: goto label_3bc6bc;
        case 0x3bc6c0u: goto label_3bc6c0;
        case 0x3bc6c4u: goto label_3bc6c4;
        case 0x3bc6c8u: goto label_3bc6c8;
        case 0x3bc6ccu: goto label_3bc6cc;
        case 0x3bc6d0u: goto label_3bc6d0;
        case 0x3bc6d4u: goto label_3bc6d4;
        case 0x3bc6d8u: goto label_3bc6d8;
        case 0x3bc6dcu: goto label_3bc6dc;
        case 0x3bc6e0u: goto label_3bc6e0;
        case 0x3bc6e4u: goto label_3bc6e4;
        case 0x3bc6e8u: goto label_3bc6e8;
        case 0x3bc6ecu: goto label_3bc6ec;
        case 0x3bc6f0u: goto label_3bc6f0;
        case 0x3bc6f4u: goto label_3bc6f4;
        case 0x3bc6f8u: goto label_3bc6f8;
        case 0x3bc6fcu: goto label_3bc6fc;
        case 0x3bc700u: goto label_3bc700;
        case 0x3bc704u: goto label_3bc704;
        case 0x3bc708u: goto label_3bc708;
        case 0x3bc70cu: goto label_3bc70c;
        case 0x3bc710u: goto label_3bc710;
        case 0x3bc714u: goto label_3bc714;
        case 0x3bc718u: goto label_3bc718;
        case 0x3bc71cu: goto label_3bc71c;
        default: break;
    }

    ctx->pc = 0x3bc380u;

label_3bc380:
    // 0x3bc380: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3bc380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3bc384:
    // 0x3bc384: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3bc384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3bc388:
    // 0x3bc388: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3bc388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3bc38c:
    // 0x3bc38c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3bc38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3bc390:
    // 0x3bc390: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3bc390u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bc394:
    // 0x3bc394: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3bc394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3bc398:
    // 0x3bc398: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3bc398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3bc39c:
    // 0x3bc39c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bc39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3bc3a0:
    // 0x3bc3a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bc3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3bc3a4:
    // 0x3bc3a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3bc3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3bc3a8:
    // 0x3bc3a8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x3bc3a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3bc3ac:
    // 0x3bc3ac: 0x8e340550  lw          $s4, 0x550($s1)
    ctx->pc = 0x3bc3acu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_3bc3b0:
    // 0x3bc3b0: 0x26240440  addiu       $a0, $s1, 0x440
    ctx->pc = 0x3bc3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
label_3bc3b4:
    // 0x3bc3b4: 0xc0754b4  jal         func_1D52D0
label_3bc3b8:
    if (ctx->pc == 0x3BC3B8u) {
        ctx->pc = 0x3BC3B8u;
            // 0x3bc3b8: 0x26300580  addiu       $s0, $s1, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
        ctx->pc = 0x3BC3BCu;
        goto label_3bc3bc;
    }
    ctx->pc = 0x3BC3B4u;
    SET_GPR_U32(ctx, 31, 0x3BC3BCu);
    ctx->pc = 0x3BC3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC3B4u;
            // 0x3bc3b8: 0x26300580  addiu       $s0, $s1, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC3BCu; }
        if (ctx->pc != 0x3BC3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC3BCu; }
        if (ctx->pc != 0x3BC3BCu) { return; }
    }
    ctx->pc = 0x3BC3BCu;
label_3bc3bc:
    // 0x3bc3bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3bc3bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bc3c0:
    // 0x3bc3c0: 0xc0eee28  jal         func_3BB8A0
label_3bc3c4:
    if (ctx->pc == 0x3BC3C4u) {
        ctx->pc = 0x3BC3C4u;
            // 0x3bc3c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BC3C8u;
        goto label_3bc3c8;
    }
    ctx->pc = 0x3BC3C0u;
    SET_GPR_U32(ctx, 31, 0x3BC3C8u);
    ctx->pc = 0x3BC3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC3C0u;
            // 0x3bc3c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BB8A0u;
    if (runtime->hasFunction(0x3BB8A0u)) {
        auto targetFn = runtime->lookupFunction(0x3BB8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC3C8u; }
        if (ctx->pc != 0x3BC3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BB8A0_0x3bb8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC3C8u; }
        if (ctx->pc != 0x3BC3C8u) { return; }
    }
    ctx->pc = 0x3BC3C8u;
label_3bc3c8:
    // 0x3bc3c8: 0x8e240d60  lw          $a0, 0xD60($s1)
    ctx->pc = 0x3bc3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_3bc3cc:
    // 0x3bc3cc: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x3bc3ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3bc3d0:
    // 0x3bc3d0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3bc3d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3bc3d4:
    // 0x3bc3d4: 0x320f809  jalr        $t9
label_3bc3d8:
    if (ctx->pc == 0x3BC3D8u) {
        ctx->pc = 0x3BC3D8u;
            // 0x3bc3d8: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x3BC3DCu;
        goto label_3bc3dc;
    }
    ctx->pc = 0x3BC3D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BC3DCu);
        ctx->pc = 0x3BC3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC3D4u;
            // 0x3bc3d8: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BC3DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BC3DCu; }
            if (ctx->pc != 0x3BC3DCu) { return; }
        }
        }
    }
    ctx->pc = 0x3BC3DCu;
label_3bc3dc:
    // 0x3bc3dc: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x3bc3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bc3e0:
    // 0x3bc3e0: 0x26240140  addiu       $a0, $s1, 0x140
    ctx->pc = 0x3bc3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
label_3bc3e4:
    // 0x3bc3e4: 0xc04f26c  jal         func_13C9B0
label_3bc3e8:
    if (ctx->pc == 0x3BC3E8u) {
        ctx->pc = 0x3BC3E8u;
            // 0x3bc3e8: 0xe6200de0  swc1        $f0, 0xDE0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3552), bits); }
        ctx->pc = 0x3BC3ECu;
        goto label_3bc3ec;
    }
    ctx->pc = 0x3BC3E4u;
    SET_GPR_U32(ctx, 31, 0x3BC3ECu);
    ctx->pc = 0x3BC3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC3E4u;
            // 0x3bc3e8: 0xe6200de0  swc1        $f0, 0xDE0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3552), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC3ECu; }
        if (ctx->pc != 0x3BC3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC3ECu; }
        if (ctx->pc != 0x3BC3ECu) { return; }
    }
    ctx->pc = 0x3BC3ECu;
label_3bc3ec:
    // 0x3bc3ec: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3bc3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3bc3f0:
    // 0x3bc3f0: 0x26240320  addiu       $a0, $s1, 0x320
    ctx->pc = 0x3bc3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
label_3bc3f4:
    // 0x3bc3f4: 0xc04cc04  jal         func_133010
label_3bc3f8:
    if (ctx->pc == 0x3BC3F8u) {
        ctx->pc = 0x3BC3F8u;
            // 0x3bc3f8: 0x24a583f0  addiu       $a1, $a1, -0x7C10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935536));
        ctx->pc = 0x3BC3FCu;
        goto label_3bc3fc;
    }
    ctx->pc = 0x3BC3F4u;
    SET_GPR_U32(ctx, 31, 0x3BC3FCu);
    ctx->pc = 0x3BC3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC3F4u;
            // 0x3bc3f8: 0x24a583f0  addiu       $a1, $a1, -0x7C10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC3FCu; }
        if (ctx->pc != 0x3BC3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC3FCu; }
        if (ctx->pc != 0x3BC3FCu) { return; }
    }
    ctx->pc = 0x3BC3FCu;
label_3bc3fc:
    // 0x3bc3fc: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x3bc3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
label_3bc400:
    // 0x3bc400: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x3bc400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
label_3bc404:
    // 0x3bc404: 0xc0eeb1c  jal         func_3BAC70
label_3bc408:
    if (ctx->pc == 0x3BC408u) {
        ctx->pc = 0x3BC408u;
            // 0x3bc408: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x3BC40Cu;
        goto label_3bc40c;
    }
    ctx->pc = 0x3BC404u;
    SET_GPR_U32(ctx, 31, 0x3BC40Cu);
    ctx->pc = 0x3BC408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC404u;
            // 0x3bc408: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BAC70u;
    if (runtime->hasFunction(0x3BAC70u)) {
        auto targetFn = runtime->lookupFunction(0x3BAC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC40Cu; }
        if (ctx->pc != 0x3BC40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BAC70_0x3bac70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC40Cu; }
        if (ctx->pc != 0x3BC40Cu) { return; }
    }
    ctx->pc = 0x3BC40Cu;
label_3bc40c:
    // 0x3bc40c: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3bc40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3bc410:
    // 0x3bc410: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3bc410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3bc414:
    // 0x3bc414: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3bc418:
    if (ctx->pc == 0x3BC418u) {
        ctx->pc = 0x3BC418u;
            // 0x3bc418: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x3BC41Cu;
        goto label_3bc41c;
    }
    ctx->pc = 0x3BC414u;
    {
        const bool branch_taken_0x3bc414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc414) {
            ctx->pc = 0x3BC418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC414u;
            // 0x3bc418: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BC434u;
            goto label_3bc434;
        }
    }
    ctx->pc = 0x3BC41Cu;
label_3bc41c:
    // 0x3bc41c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3bc41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3bc420:
    // 0x3bc420: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3bc420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3bc424:
    // 0x3bc424: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x3bc424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
label_3bc428:
    // 0x3bc428: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3bc428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3bc42c:
    // 0x3bc42c: 0x10000005  b           . + 4 + (0x5 << 2)
label_3bc430:
    if (ctx->pc == 0x3BC430u) {
        ctx->pc = 0x3BC430u;
            // 0x3bc430: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x3BC434u;
        goto label_3bc434;
    }
    ctx->pc = 0x3BC42Cu;
    {
        const bool branch_taken_0x3bc42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC42Cu;
            // 0x3bc430: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc42c) {
            ctx->pc = 0x3BC444u;
            goto label_3bc444;
        }
    }
    ctx->pc = 0x3BC434u;
label_3bc434:
    // 0x3bc434: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3bc434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3bc438:
    // 0x3bc438: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x3bc438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
label_3bc43c:
    // 0x3bc43c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3bc43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3bc440:
    // 0x3bc440: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x3bc440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
label_3bc444:
    // 0x3bc444: 0xaea00070  sw          $zero, 0x70($s5)
    ctx->pc = 0x3bc444u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 0));
label_3bc448:
    // 0x3bc448: 0xaea0006c  sw          $zero, 0x6C($s5)
    ctx->pc = 0x3bc448u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 108), GPR_U32(ctx, 0));
label_3bc44c:
    // 0x3bc44c: 0x8ea40040  lw          $a0, 0x40($s5)
    ctx->pc = 0x3bc44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_3bc450:
    // 0x3bc450: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_3bc454:
    if (ctx->pc == 0x3BC454u) {
        ctx->pc = 0x3BC454u;
            // 0x3bc454: 0x8ea50044  lw          $a1, 0x44($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
        ctx->pc = 0x3BC458u;
        goto label_3bc458;
    }
    ctx->pc = 0x3BC450u;
    {
        const bool branch_taken_0x3bc450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc450) {
            ctx->pc = 0x3BC454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC450u;
            // 0x3bc454: 0x8ea50044  lw          $a1, 0x44($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BC470u;
            goto label_3bc470;
        }
    }
    ctx->pc = 0x3BC458u;
label_3bc458:
    // 0x3bc458: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3bc458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3bc45c:
    // 0x3bc45c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3bc45cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3bc460:
    // 0x3bc460: 0x320f809  jalr        $t9
label_3bc464:
    if (ctx->pc == 0x3BC464u) {
        ctx->pc = 0x3BC464u;
            // 0x3bc464: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BC468u;
        goto label_3bc468;
    }
    ctx->pc = 0x3BC460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BC468u);
        ctx->pc = 0x3BC464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC460u;
            // 0x3bc464: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BC468u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BC468u; }
            if (ctx->pc != 0x3BC468u) { return; }
        }
        }
    }
    ctx->pc = 0x3BC468u;
label_3bc468:
    // 0x3bc468: 0xaea00040  sw          $zero, 0x40($s5)
    ctx->pc = 0x3bc468u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 0));
label_3bc46c:
    // 0x3bc46c: 0x8ea50044  lw          $a1, 0x44($s5)
    ctx->pc = 0x3bc46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_3bc470:
    // 0x3bc470: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_3bc474:
    if (ctx->pc == 0x3BC474u) {
        ctx->pc = 0x3BC474u;
            // 0x3bc474: 0x8ea40048  lw          $a0, 0x48($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
        ctx->pc = 0x3BC478u;
        goto label_3bc478;
    }
    ctx->pc = 0x3BC470u;
    {
        const bool branch_taken_0x3bc470 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc470) {
            ctx->pc = 0x3BC474u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC470u;
            // 0x3bc474: 0x8ea40048  lw          $a0, 0x48($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BC490u;
            goto label_3bc490;
        }
    }
    ctx->pc = 0x3BC478u;
label_3bc478:
    // 0x3bc478: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3bc478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3bc47c:
    // 0x3bc47c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3bc47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3bc480:
    // 0x3bc480: 0xc057b7c  jal         func_15EDF0
label_3bc484:
    if (ctx->pc == 0x3BC484u) {
        ctx->pc = 0x3BC484u;
            // 0x3bc484: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3BC488u;
        goto label_3bc488;
    }
    ctx->pc = 0x3BC480u;
    SET_GPR_U32(ctx, 31, 0x3BC488u);
    ctx->pc = 0x3BC484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC480u;
            // 0x3bc484: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC488u; }
        if (ctx->pc != 0x3BC488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC488u; }
        if (ctx->pc != 0x3BC488u) { return; }
    }
    ctx->pc = 0x3BC488u;
label_3bc488:
    // 0x3bc488: 0xaea00044  sw          $zero, 0x44($s5)
    ctx->pc = 0x3bc488u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 0));
label_3bc48c:
    // 0x3bc48c: 0x8ea40048  lw          $a0, 0x48($s5)
    ctx->pc = 0x3bc48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_3bc490:
    // 0x3bc490: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_3bc494:
    if (ctx->pc == 0x3BC494u) {
        ctx->pc = 0x3BC494u;
            // 0x3bc494: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x3BC498u;
        goto label_3bc498;
    }
    ctx->pc = 0x3BC490u;
    {
        const bool branch_taken_0x3bc490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc490) {
            ctx->pc = 0x3BC494u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC490u;
            // 0x3bc494: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BC4C0u;
            goto label_3bc4c0;
        }
    }
    ctx->pc = 0x3BC498u;
label_3bc498:
    // 0x3bc498: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x3bc498u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_3bc49c:
    // 0x3bc49c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3bc49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3bc4a0:
    // 0x3bc4a0: 0x34630180  ori         $v1, $v1, 0x180
    ctx->pc = 0x3bc4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)384);
label_3bc4a4:
    // 0x3bc4a4: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x3bc4a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_3bc4a8:
    // 0x3bc4a8: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3bc4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3bc4ac:
    // 0x3bc4ac: 0x8ea50048  lw          $a1, 0x48($s5)
    ctx->pc = 0x3bc4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_3bc4b0:
    // 0x3bc4b0: 0xc057b7c  jal         func_15EDF0
label_3bc4b4:
    if (ctx->pc == 0x3BC4B4u) {
        ctx->pc = 0x3BC4B4u;
            // 0x3bc4b4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3BC4B8u;
        goto label_3bc4b8;
    }
    ctx->pc = 0x3BC4B0u;
    SET_GPR_U32(ctx, 31, 0x3BC4B8u);
    ctx->pc = 0x3BC4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC4B0u;
            // 0x3bc4b4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC4B8u; }
        if (ctx->pc != 0x3BC4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC4B8u; }
        if (ctx->pc != 0x3BC4B8u) { return; }
    }
    ctx->pc = 0x3BC4B8u;
label_3bc4b8:
    // 0x3bc4b8: 0xaea00048  sw          $zero, 0x48($s5)
    ctx->pc = 0x3bc4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 0));
label_3bc4bc:
    // 0x3bc4bc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3bc4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3bc4c0:
    // 0x3bc4c0: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x3bc4c0u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3bc4c4:
    // 0x3bc4c4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x3bc4c4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3bc4c8:
    // 0x3bc4c8: 0x8e620e38  lw          $v0, 0xE38($s3)
    ctx->pc = 0x3bc4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3640)));
label_3bc4cc:
    // 0x3bc4cc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3bc4d0:
    if (ctx->pc == 0x3BC4D0u) {
        ctx->pc = 0x3BC4D0u;
            // 0x3bc4d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BC4D4u;
        goto label_3bc4d4;
    }
    ctx->pc = 0x3BC4CCu;
    {
        const bool branch_taken_0x3bc4cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3BC4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC4CCu;
            // 0x3bc4d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc4cc) {
            ctx->pc = 0x3BC4E4u;
            goto label_3bc4e4;
        }
    }
    ctx->pc = 0x3BC4D4u;
label_3bc4d4:
    // 0x3bc4d4: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x3bc4d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_3bc4d8:
    // 0x3bc4d8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3bc4dc:
    if (ctx->pc == 0x3BC4DCu) {
        ctx->pc = 0x3BC4E0u;
        goto label_3bc4e0;
    }
    ctx->pc = 0x3BC4D8u;
    {
        const bool branch_taken_0x3bc4d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc4d8) {
            ctx->pc = 0x3BC4E4u;
            goto label_3bc4e4;
        }
    }
    ctx->pc = 0x3BC4E0u;
label_3bc4e0:
    // 0x3bc4e0: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x3bc4e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3bc4e4:
    // 0x3bc4e4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3bc4e8:
    if (ctx->pc == 0x3BC4E8u) {
        ctx->pc = 0x3BC4ECu;
        goto label_3bc4ec;
    }
    ctx->pc = 0x3BC4E4u;
    {
        const bool branch_taken_0x3bc4e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc4e4) {
            ctx->pc = 0x3BC500u;
            goto label_3bc500;
        }
    }
    ctx->pc = 0x3BC4ECu;
label_3bc4ec:
    // 0x3bc4ec: 0xc075eb4  jal         func_1D7AD0
label_3bc4f0:
    if (ctx->pc == 0x3BC4F0u) {
        ctx->pc = 0x3BC4F0u;
            // 0x3bc4f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BC4F4u;
        goto label_3bc4f4;
    }
    ctx->pc = 0x3BC4ECu;
    SET_GPR_U32(ctx, 31, 0x3BC4F4u);
    ctx->pc = 0x3BC4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC4ECu;
            // 0x3bc4f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC4F4u; }
        if (ctx->pc != 0x3BC4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC4F4u; }
        if (ctx->pc != 0x3BC4F4u) { return; }
    }
    ctx->pc = 0x3BC4F4u;
label_3bc4f4:
    // 0x3bc4f4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3bc4f8:
    if (ctx->pc == 0x3BC4F8u) {
        ctx->pc = 0x3BC4FCu;
        goto label_3bc4fc;
    }
    ctx->pc = 0x3BC4F4u;
    {
        const bool branch_taken_0x3bc4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc4f4) {
            ctx->pc = 0x3BC500u;
            goto label_3bc500;
        }
    }
    ctx->pc = 0x3BC4FCu;
label_3bc4fc:
    // 0x3bc4fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3bc4fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bc500:
    // 0x3bc500: 0x52400007  beql        $s2, $zero, . + 4 + (0x7 << 2)
label_3bc504:
    if (ctx->pc == 0x3BC504u) {
        ctx->pc = 0x3BC504u;
            // 0x3bc504: 0x8ea20050  lw          $v0, 0x50($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
        ctx->pc = 0x3BC508u;
        goto label_3bc508;
    }
    ctx->pc = 0x3BC500u;
    {
        const bool branch_taken_0x3bc500 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc500) {
            ctx->pc = 0x3BC504u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC500u;
            // 0x3bc504: 0x8ea20050  lw          $v0, 0x50($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BC520u;
            goto label_3bc520;
        }
    }
    ctx->pc = 0x3BC508u;
label_3bc508:
    // 0x3bc508: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3bc508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3bc50c:
    // 0x3bc50c: 0x8e630d98  lw          $v1, 0xD98($s3)
    ctx->pc = 0x3bc50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
label_3bc510:
    // 0x3bc510: 0x8c423e58  lw          $v0, 0x3E58($v0)
    ctx->pc = 0x3bc510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15960)));
label_3bc514:
    // 0x3bc514: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3bc514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3bc518:
    // 0x3bc518: 0xa04000c0  sb          $zero, 0xC0($v0)
    ctx->pc = 0x3bc518u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 192), (uint8_t)GPR_U32(ctx, 0));
label_3bc51c:
    // 0x3bc51c: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3bc51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3bc520:
    // 0x3bc520: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3bc520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3bc524:
    // 0x3bc524: 0x54400054  bnel        $v0, $zero, . + 4 + (0x54 << 2)
label_3bc528:
    if (ctx->pc == 0x3BC528u) {
        ctx->pc = 0x3BC528u;
            // 0x3bc528: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x3BC52Cu;
        goto label_3bc52c;
    }
    ctx->pc = 0x3BC524u;
    {
        const bool branch_taken_0x3bc524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc524) {
            ctx->pc = 0x3BC528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC524u;
            // 0x3bc528: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BC678u;
            goto label_3bc678;
        }
    }
    ctx->pc = 0x3BC52Cu;
label_3bc52c:
    // 0x3bc52c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3bc52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3bc530:
    // 0x3bc530: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x3bc530u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3bc534:
    // 0x3bc534: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x3bc534u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3bc538:
    // 0x3bc538: 0x8e620e34  lw          $v0, 0xE34($s3)
    ctx->pc = 0x3bc538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_3bc53c:
    // 0x3bc53c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3bc540:
    if (ctx->pc == 0x3BC540u) {
        ctx->pc = 0x3BC540u;
            // 0x3bc540: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BC544u;
        goto label_3bc544;
    }
    ctx->pc = 0x3BC53Cu;
    {
        const bool branch_taken_0x3bc53c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3BC540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC53Cu;
            // 0x3bc540: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc53c) {
            ctx->pc = 0x3BC554u;
            goto label_3bc554;
        }
    }
    ctx->pc = 0x3BC544u;
label_3bc544:
    // 0x3bc544: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x3bc544u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_3bc548:
    // 0x3bc548: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3bc54c:
    if (ctx->pc == 0x3BC54Cu) {
        ctx->pc = 0x3BC550u;
        goto label_3bc550;
    }
    ctx->pc = 0x3BC548u;
    {
        const bool branch_taken_0x3bc548 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc548) {
            ctx->pc = 0x3BC554u;
            goto label_3bc554;
        }
    }
    ctx->pc = 0x3BC550u;
label_3bc550:
    // 0x3bc550: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x3bc550u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3bc554:
    // 0x3bc554: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3bc558:
    if (ctx->pc == 0x3BC558u) {
        ctx->pc = 0x3BC55Cu;
        goto label_3bc55c;
    }
    ctx->pc = 0x3BC554u;
    {
        const bool branch_taken_0x3bc554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc554) {
            ctx->pc = 0x3BC570u;
            goto label_3bc570;
        }
    }
    ctx->pc = 0x3BC55Cu;
label_3bc55c:
    // 0x3bc55c: 0xc075eb4  jal         func_1D7AD0
label_3bc560:
    if (ctx->pc == 0x3BC560u) {
        ctx->pc = 0x3BC560u;
            // 0x3bc560: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BC564u;
        goto label_3bc564;
    }
    ctx->pc = 0x3BC55Cu;
    SET_GPR_U32(ctx, 31, 0x3BC564u);
    ctx->pc = 0x3BC560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC55Cu;
            // 0x3bc560: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC564u; }
        if (ctx->pc != 0x3BC564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC564u; }
        if (ctx->pc != 0x3BC564u) { return; }
    }
    ctx->pc = 0x3BC564u;
label_3bc564:
    // 0x3bc564: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3bc568:
    if (ctx->pc == 0x3BC568u) {
        ctx->pc = 0x3BC56Cu;
        goto label_3bc56c;
    }
    ctx->pc = 0x3BC564u;
    {
        const bool branch_taken_0x3bc564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc564) {
            ctx->pc = 0x3BC570u;
            goto label_3bc570;
        }
    }
    ctx->pc = 0x3BC56Cu;
label_3bc56c:
    // 0x3bc56c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3bc56cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bc570:
    // 0x3bc570: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_3bc574:
    if (ctx->pc == 0x3BC574u) {
        ctx->pc = 0x3BC578u;
        goto label_3bc578;
    }
    ctx->pc = 0x3BC570u;
    {
        const bool branch_taken_0x3bc570 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc570) {
            ctx->pc = 0x3BC588u;
            goto label_3bc588;
        }
    }
    ctx->pc = 0x3BC578u;
label_3bc578:
    // 0x3bc578: 0x8e630e34  lw          $v1, 0xE34($s3)
    ctx->pc = 0x3bc578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_3bc57c:
    // 0x3bc57c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3bc57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3bc580:
    // 0x3bc580: 0x1462003c  bne         $v1, $v0, . + 4 + (0x3C << 2)
label_3bc584:
    if (ctx->pc == 0x3BC584u) {
        ctx->pc = 0x3BC588u;
        goto label_3bc588;
    }
    ctx->pc = 0x3BC580u;
    {
        const bool branch_taken_0x3bc580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3bc580) {
            ctx->pc = 0x3BC674u;
            goto label_3bc674;
        }
    }
    ctx->pc = 0x3BC588u;
label_3bc588:
    // 0x3bc588: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3bc588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3bc58c:
    // 0x3bc58c: 0x8c550e80  lw          $s5, 0xE80($v0)
    ctx->pc = 0x3bc58cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3bc590:
    // 0x3bc590: 0xc040180  jal         func_100600
label_3bc594:
    if (ctx->pc == 0x3BC594u) {
        ctx->pc = 0x3BC594u;
            // 0x3bc594: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x3BC598u;
        goto label_3bc598;
    }
    ctx->pc = 0x3BC590u;
    SET_GPR_U32(ctx, 31, 0x3BC598u);
    ctx->pc = 0x3BC594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC590u;
            // 0x3bc594: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC598u; }
        if (ctx->pc != 0x3BC598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC598u; }
        if (ctx->pc != 0x3BC598u) { return; }
    }
    ctx->pc = 0x3BC598u;
label_3bc598:
    // 0x3bc598: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3bc59c:
    if (ctx->pc == 0x3BC59Cu) {
        ctx->pc = 0x3BC5A0u;
        goto label_3bc5a0;
    }
    ctx->pc = 0x3BC598u;
    {
        const bool branch_taken_0x3bc598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc598) {
            ctx->pc = 0x3BC5CCu;
            goto label_3bc5cc;
        }
    }
    ctx->pc = 0x3BC5A0u;
label_3bc5a0:
    // 0x3bc5a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3bc5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bc5a4:
    // 0x3bc5a4: 0x826911aa  lb          $t1, 0x11AA($s3)
    ctx->pc = 0x3bc5a4u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4522)));
label_3bc5a8:
    // 0x3bc5a8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x3bc5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_3bc5ac:
    // 0x3bc5ac: 0x8e6a0d98  lw          $t2, 0xD98($s3)
    ctx->pc = 0x3bc5acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
label_3bc5b0:
    // 0x3bc5b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3bc5b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3bc5b4:
    // 0x3bc5b4: 0x3445abce  ori         $a1, $v0, 0xABCE
    ctx->pc = 0x3bc5b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43982);
label_3bc5b8:
    // 0x3bc5b8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x3bc5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3bc5bc:
    // 0x3bc5bc: 0x26a70438  addiu       $a3, $s5, 0x438
    ctx->pc = 0x3bc5bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 1080));
label_3bc5c0:
    // 0x3bc5c0: 0x24080081  addiu       $t0, $zero, 0x81
    ctx->pc = 0x3bc5c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_3bc5c4:
    // 0x3bc5c4: 0xc0b9404  jal         func_2E5010
label_3bc5c8:
    if (ctx->pc == 0x3BC5C8u) {
        ctx->pc = 0x3BC5C8u;
            // 0x3bc5c8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3BC5CCu;
        goto label_3bc5cc;
    }
    ctx->pc = 0x3BC5C4u;
    SET_GPR_U32(ctx, 31, 0x3BC5CCu);
    ctx->pc = 0x3BC5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC5C4u;
            // 0x3bc5c8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC5CCu; }
        if (ctx->pc != 0x3BC5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC5CCu; }
        if (ctx->pc != 0x3BC5CCu) { return; }
    }
    ctx->pc = 0x3BC5CCu;
label_3bc5cc:
    // 0x3bc5cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3bc5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3bc5d0:
    // 0x3bc5d0: 0x8e640d98  lw          $a0, 0xD98($s3)
    ctx->pc = 0x3bc5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
label_3bc5d4:
    // 0x3bc5d4: 0x90433db0  lbu         $v1, 0x3DB0($v0)
    ctx->pc = 0x3bc5d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 15792)));
label_3bc5d8:
    // 0x3bc5d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bc5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bc5dc:
    // 0x3bc5dc: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x3bc5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_3bc5e0:
    // 0x3bc5e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3bc5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3bc5e4:
    // 0x3bc5e4: 0x1c400023  bgtz        $v0, . + 4 + (0x23 << 2)
label_3bc5e8:
    if (ctx->pc == 0x3BC5E8u) {
        ctx->pc = 0x3BC5ECu;
        goto label_3bc5ec;
    }
    ctx->pc = 0x3BC5E4u;
    {
        const bool branch_taken_0x3bc5e4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3bc5e4) {
            ctx->pc = 0x3BC674u;
            goto label_3bc674;
        }
    }
    ctx->pc = 0x3BC5ECu;
label_3bc5ec:
    // 0x3bc5ec: 0x8e630e34  lw          $v1, 0xE34($s3)
    ctx->pc = 0x3bc5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_3bc5f0:
    // 0x3bc5f0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3bc5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3bc5f4:
    // 0x3bc5f4: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
label_3bc5f8:
    if (ctx->pc == 0x3BC5F8u) {
        ctx->pc = 0x3BC5FCu;
        goto label_3bc5fc;
    }
    ctx->pc = 0x3BC5F4u;
    {
        const bool branch_taken_0x3bc5f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3bc5f4) {
            ctx->pc = 0x3BC674u;
            goto label_3bc674;
        }
    }
    ctx->pc = 0x3BC5FCu;
label_3bc5fc:
    // 0x3bc5fc: 0x8ea202c0  lw          $v0, 0x2C0($s5)
    ctx->pc = 0x3bc5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 704)));
label_3bc600:
    // 0x3bc600: 0x240400d0  addiu       $a0, $zero, 0xD0
    ctx->pc = 0x3bc600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_3bc604:
    // 0x3bc604: 0x26b202b8  addiu       $s2, $s5, 0x2B8
    ctx->pc = 0x3bc604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 696));
label_3bc608:
    // 0x3bc608: 0xc040180  jal         func_100600
label_3bc60c:
    if (ctx->pc == 0x3BC60Cu) {
        ctx->pc = 0x3BC60Cu;
            // 0x3bc60c: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x3BC610u;
        goto label_3bc610;
    }
    ctx->pc = 0x3BC608u;
    SET_GPR_U32(ctx, 31, 0x3BC610u);
    ctx->pc = 0x3BC60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC608u;
            // 0x3bc60c: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC610u; }
        if (ctx->pc != 0x3BC610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC610u; }
        if (ctx->pc != 0x3BC610u) { return; }
    }
    ctx->pc = 0x3BC610u;
label_3bc610:
    // 0x3bc610: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_3bc614:
    if (ctx->pc == 0x3BC614u) {
        ctx->pc = 0x3BC614u;
            // 0x3bc614: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BC618u;
        goto label_3bc618;
    }
    ctx->pc = 0x3BC610u;
    {
        const bool branch_taken_0x3bc610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC610u;
            // 0x3bc614: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc610) {
            ctx->pc = 0x3BC674u;
            goto label_3bc674;
        }
    }
    ctx->pc = 0x3BC618u;
label_3bc618:
    // 0x3bc618: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3bc618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3bc61c:
    // 0x3bc61c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3bc61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_3bc620:
    // 0x3bc620: 0x8e720d98  lw          $s2, 0xD98($s3)
    ctx->pc = 0x3bc620u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
label_3bc624:
    // 0x3bc624: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3bc624u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3bc628:
    // 0x3bc628: 0x826911aa  lb          $t1, 0x11AA($s3)
    ctx->pc = 0x3bc628u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4522)));
label_3bc62c:
    // 0x3bc62c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3bc62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3bc630:
    // 0x3bc630: 0x344594a8  ori         $a1, $v0, 0x94A8
    ctx->pc = 0x3bc630u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38056);
label_3bc634:
    // 0x3bc634: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x3bc634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3bc638:
    // 0x3bc638: 0x24080821  addiu       $t0, $zero, 0x821
    ctx->pc = 0x3bc638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2081));
label_3bc63c:
    // 0x3bc63c: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x3bc63cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3bc640:
    // 0x3bc640: 0xc0b9404  jal         func_2E5010
label_3bc644:
    if (ctx->pc == 0x3BC644u) {
        ctx->pc = 0x3BC644u;
            // 0x3bc644: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BC648u;
        goto label_3bc648;
    }
    ctx->pc = 0x3BC640u;
    SET_GPR_U32(ctx, 31, 0x3BC648u);
    ctx->pc = 0x3BC644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC640u;
            // 0x3bc644: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC648u; }
        if (ctx->pc != 0x3BC648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BC648u; }
        if (ctx->pc != 0x3BC648u) { return; }
    }
    ctx->pc = 0x3BC648u;
label_3bc648:
    // 0x3bc648: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bc648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bc64c:
    // 0x3bc64c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3bc64cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3bc650:
    // 0x3bc650: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x3bc650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
label_3bc654:
    // 0x3bc654: 0x24634160  addiu       $v1, $v1, 0x4160
    ctx->pc = 0x3bc654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16736));
label_3bc658:
    // 0x3bc658: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x3bc658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3bc65c:
    // 0x3bc65c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x3bc65cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_3bc660:
    // 0x3bc660: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3bc660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3bc664:
    // 0x3bc664: 0x90433db0  lbu         $v1, 0x3DB0($v0)
    ctx->pc = 0x3bc664u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 15792)));
label_3bc668:
    // 0x3bc668: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3bc668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3bc66c:
    // 0x3bc66c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3bc66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3bc670:
    // 0x3bc670: 0xa0433db0  sb          $v1, 0x3DB0($v0)
    ctx->pc = 0x3bc670u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 15792), (uint8_t)GPR_U32(ctx, 3));
label_3bc674:
    // 0x3bc674: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3bc674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3bc678:
    // 0x3bc678: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3bc678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bc67c:
    // 0x3bc67c: 0xae220dbc  sw          $v0, 0xDBC($s1)
    ctx->pc = 0x3bc67cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3516), GPR_U32(ctx, 2));
label_3bc680:
    // 0x3bc680: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3bc680u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3bc684:
    // 0x3bc684: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x3bc684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
label_3bc688:
    // 0x3bc688: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3bc688u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3bc68c:
    // 0x3bc68c: 0x8285010c  lb          $a1, 0x10C($s4)
    ctx->pc = 0x3bc68cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 268)));
label_3bc690:
    // 0x3bc690: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3bc690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3bc694:
    // 0x3bc694: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3bc694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3bc698:
    // 0x3bc698: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3bc698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3bc69c:
    // 0x3bc69c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x3bc69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3bc6a0:
    // 0x3bc6a0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3bc6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3bc6a4:
    // 0x3bc6a4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3bc6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3bc6a8:
    // 0x3bc6a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3bc6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3bc6ac:
    // 0x3bc6ac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3bc6acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3bc6b0:
    // 0x3bc6b0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x3bc6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3bc6b4:
    // 0x3bc6b4: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x3bc6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_3bc6b8:
    // 0x3bc6b8: 0x8e990058  lw          $t9, 0x58($s4)
    ctx->pc = 0x3bc6b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_3bc6bc:
    // 0x3bc6bc: 0x8285010d  lb          $a1, 0x10D($s4)
    ctx->pc = 0x3bc6bcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 269)));
label_3bc6c0:
    // 0x3bc6c0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3bc6c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3bc6c4:
    // 0x3bc6c4: 0x320f809  jalr        $t9
label_3bc6c8:
    if (ctx->pc == 0x3BC6C8u) {
        ctx->pc = 0x3BC6C8u;
            // 0x3bc6c8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3BC6CCu;
        goto label_3bc6cc;
    }
    ctx->pc = 0x3BC6C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BC6CCu);
        ctx->pc = 0x3BC6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC6C4u;
            // 0x3bc6c8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BC6CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BC6CCu; }
            if (ctx->pc != 0x3BC6CCu) { return; }
        }
        }
    }
    ctx->pc = 0x3BC6CCu;
label_3bc6cc:
    // 0x3bc6cc: 0x8e990058  lw          $t9, 0x58($s4)
    ctx->pc = 0x3bc6ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_3bc6d0:
    // 0x3bc6d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3bc6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3bc6d4:
    // 0x3bc6d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3bc6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3bc6d8:
    // 0x3bc6d8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3bc6d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3bc6dc:
    // 0x3bc6dc: 0x320f809  jalr        $t9
label_3bc6e0:
    if (ctx->pc == 0x3BC6E0u) {
        ctx->pc = 0x3BC6E0u;
            // 0x3bc6e0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BC6E4u;
        goto label_3bc6e4;
    }
    ctx->pc = 0x3BC6DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BC6E4u);
        ctx->pc = 0x3BC6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC6DCu;
            // 0x3bc6e0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BC6E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BC6E4u; }
            if (ctx->pc != 0x3BC6E4u) { return; }
        }
        }
    }
    ctx->pc = 0x3BC6E4u;
label_3bc6e4:
    // 0x3bc6e4: 0x8e240d60  lw          $a0, 0xD60($s1)
    ctx->pc = 0x3bc6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_3bc6e8:
    // 0x3bc6e8: 0x3c020012  lui         $v0, 0x12
    ctx->pc = 0x3bc6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
label_3bc6ec:
    // 0x3bc6ec: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x3bc6ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3bc6f0:
    // 0x3bc6f0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3bc6f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3bc6f4:
    // 0x3bc6f4: 0x320f809  jalr        $t9
label_3bc6f8:
    if (ctx->pc == 0x3BC6F8u) {
        ctx->pc = 0x3BC6F8u;
            // 0x3bc6f8: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x3BC6FCu;
        goto label_3bc6fc;
    }
    ctx->pc = 0x3BC6F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BC6FCu);
        ctx->pc = 0x3BC6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC6F4u;
            // 0x3bc6f8: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BC6FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BC6FCu; }
            if (ctx->pc != 0x3BC6FCu) { return; }
        }
        }
    }
    ctx->pc = 0x3BC6FCu;
label_3bc6fc:
    // 0x3bc6fc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3bc6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3bc700:
    // 0x3bc700: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3bc700u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3bc704:
    // 0x3bc704: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3bc704u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3bc708:
    // 0x3bc708: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3bc708u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bc70c:
    // 0x3bc70c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3bc70cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bc710:
    // 0x3bc710: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bc710u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bc714:
    // 0x3bc714: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bc714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3bc718:
    // 0x3bc718: 0x3e00008  jr          $ra
label_3bc71c:
    if (ctx->pc == 0x3BC71Cu) {
        ctx->pc = 0x3BC71Cu;
            // 0x3bc71c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3BC720u;
        goto label_fallthrough_0x3bc718;
    }
    ctx->pc = 0x3BC718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BC71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BC718u;
            // 0x3bc71c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3bc718:
    ctx->pc = 0x3BC720u;
}
