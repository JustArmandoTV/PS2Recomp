#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015E350
// Address: 0x15e350 - 0x15e7c0
void sub_0015E350_0x15e350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E350_0x15e350");
#endif

    switch (ctx->pc) {
        case 0x15e350u: goto label_15e350;
        case 0x15e354u: goto label_15e354;
        case 0x15e358u: goto label_15e358;
        case 0x15e35cu: goto label_15e35c;
        case 0x15e360u: goto label_15e360;
        case 0x15e364u: goto label_15e364;
        case 0x15e368u: goto label_15e368;
        case 0x15e36cu: goto label_15e36c;
        case 0x15e370u: goto label_15e370;
        case 0x15e374u: goto label_15e374;
        case 0x15e378u: goto label_15e378;
        case 0x15e37cu: goto label_15e37c;
        case 0x15e380u: goto label_15e380;
        case 0x15e384u: goto label_15e384;
        case 0x15e388u: goto label_15e388;
        case 0x15e38cu: goto label_15e38c;
        case 0x15e390u: goto label_15e390;
        case 0x15e394u: goto label_15e394;
        case 0x15e398u: goto label_15e398;
        case 0x15e39cu: goto label_15e39c;
        case 0x15e3a0u: goto label_15e3a0;
        case 0x15e3a4u: goto label_15e3a4;
        case 0x15e3a8u: goto label_15e3a8;
        case 0x15e3acu: goto label_15e3ac;
        case 0x15e3b0u: goto label_15e3b0;
        case 0x15e3b4u: goto label_15e3b4;
        case 0x15e3b8u: goto label_15e3b8;
        case 0x15e3bcu: goto label_15e3bc;
        case 0x15e3c0u: goto label_15e3c0;
        case 0x15e3c4u: goto label_15e3c4;
        case 0x15e3c8u: goto label_15e3c8;
        case 0x15e3ccu: goto label_15e3cc;
        case 0x15e3d0u: goto label_15e3d0;
        case 0x15e3d4u: goto label_15e3d4;
        case 0x15e3d8u: goto label_15e3d8;
        case 0x15e3dcu: goto label_15e3dc;
        case 0x15e3e0u: goto label_15e3e0;
        case 0x15e3e4u: goto label_15e3e4;
        case 0x15e3e8u: goto label_15e3e8;
        case 0x15e3ecu: goto label_15e3ec;
        case 0x15e3f0u: goto label_15e3f0;
        case 0x15e3f4u: goto label_15e3f4;
        case 0x15e3f8u: goto label_15e3f8;
        case 0x15e3fcu: goto label_15e3fc;
        case 0x15e400u: goto label_15e400;
        case 0x15e404u: goto label_15e404;
        case 0x15e408u: goto label_15e408;
        case 0x15e40cu: goto label_15e40c;
        case 0x15e410u: goto label_15e410;
        case 0x15e414u: goto label_15e414;
        case 0x15e418u: goto label_15e418;
        case 0x15e41cu: goto label_15e41c;
        case 0x15e420u: goto label_15e420;
        case 0x15e424u: goto label_15e424;
        case 0x15e428u: goto label_15e428;
        case 0x15e42cu: goto label_15e42c;
        case 0x15e430u: goto label_15e430;
        case 0x15e434u: goto label_15e434;
        case 0x15e438u: goto label_15e438;
        case 0x15e43cu: goto label_15e43c;
        case 0x15e440u: goto label_15e440;
        case 0x15e444u: goto label_15e444;
        case 0x15e448u: goto label_15e448;
        case 0x15e44cu: goto label_15e44c;
        case 0x15e450u: goto label_15e450;
        case 0x15e454u: goto label_15e454;
        case 0x15e458u: goto label_15e458;
        case 0x15e45cu: goto label_15e45c;
        case 0x15e460u: goto label_15e460;
        case 0x15e464u: goto label_15e464;
        case 0x15e468u: goto label_15e468;
        case 0x15e46cu: goto label_15e46c;
        case 0x15e470u: goto label_15e470;
        case 0x15e474u: goto label_15e474;
        case 0x15e478u: goto label_15e478;
        case 0x15e47cu: goto label_15e47c;
        case 0x15e480u: goto label_15e480;
        case 0x15e484u: goto label_15e484;
        case 0x15e488u: goto label_15e488;
        case 0x15e48cu: goto label_15e48c;
        case 0x15e490u: goto label_15e490;
        case 0x15e494u: goto label_15e494;
        case 0x15e498u: goto label_15e498;
        case 0x15e49cu: goto label_15e49c;
        case 0x15e4a0u: goto label_15e4a0;
        case 0x15e4a4u: goto label_15e4a4;
        case 0x15e4a8u: goto label_15e4a8;
        case 0x15e4acu: goto label_15e4ac;
        case 0x15e4b0u: goto label_15e4b0;
        case 0x15e4b4u: goto label_15e4b4;
        case 0x15e4b8u: goto label_15e4b8;
        case 0x15e4bcu: goto label_15e4bc;
        case 0x15e4c0u: goto label_15e4c0;
        case 0x15e4c4u: goto label_15e4c4;
        case 0x15e4c8u: goto label_15e4c8;
        case 0x15e4ccu: goto label_15e4cc;
        case 0x15e4d0u: goto label_15e4d0;
        case 0x15e4d4u: goto label_15e4d4;
        case 0x15e4d8u: goto label_15e4d8;
        case 0x15e4dcu: goto label_15e4dc;
        case 0x15e4e0u: goto label_15e4e0;
        case 0x15e4e4u: goto label_15e4e4;
        case 0x15e4e8u: goto label_15e4e8;
        case 0x15e4ecu: goto label_15e4ec;
        case 0x15e4f0u: goto label_15e4f0;
        case 0x15e4f4u: goto label_15e4f4;
        case 0x15e4f8u: goto label_15e4f8;
        case 0x15e4fcu: goto label_15e4fc;
        case 0x15e500u: goto label_15e500;
        case 0x15e504u: goto label_15e504;
        case 0x15e508u: goto label_15e508;
        case 0x15e50cu: goto label_15e50c;
        case 0x15e510u: goto label_15e510;
        case 0x15e514u: goto label_15e514;
        case 0x15e518u: goto label_15e518;
        case 0x15e51cu: goto label_15e51c;
        case 0x15e520u: goto label_15e520;
        case 0x15e524u: goto label_15e524;
        case 0x15e528u: goto label_15e528;
        case 0x15e52cu: goto label_15e52c;
        case 0x15e530u: goto label_15e530;
        case 0x15e534u: goto label_15e534;
        case 0x15e538u: goto label_15e538;
        case 0x15e53cu: goto label_15e53c;
        case 0x15e540u: goto label_15e540;
        case 0x15e544u: goto label_15e544;
        case 0x15e548u: goto label_15e548;
        case 0x15e54cu: goto label_15e54c;
        case 0x15e550u: goto label_15e550;
        case 0x15e554u: goto label_15e554;
        case 0x15e558u: goto label_15e558;
        case 0x15e55cu: goto label_15e55c;
        case 0x15e560u: goto label_15e560;
        case 0x15e564u: goto label_15e564;
        case 0x15e568u: goto label_15e568;
        case 0x15e56cu: goto label_15e56c;
        case 0x15e570u: goto label_15e570;
        case 0x15e574u: goto label_15e574;
        case 0x15e578u: goto label_15e578;
        case 0x15e57cu: goto label_15e57c;
        case 0x15e580u: goto label_15e580;
        case 0x15e584u: goto label_15e584;
        case 0x15e588u: goto label_15e588;
        case 0x15e58cu: goto label_15e58c;
        case 0x15e590u: goto label_15e590;
        case 0x15e594u: goto label_15e594;
        case 0x15e598u: goto label_15e598;
        case 0x15e59cu: goto label_15e59c;
        case 0x15e5a0u: goto label_15e5a0;
        case 0x15e5a4u: goto label_15e5a4;
        case 0x15e5a8u: goto label_15e5a8;
        case 0x15e5acu: goto label_15e5ac;
        case 0x15e5b0u: goto label_15e5b0;
        case 0x15e5b4u: goto label_15e5b4;
        case 0x15e5b8u: goto label_15e5b8;
        case 0x15e5bcu: goto label_15e5bc;
        case 0x15e5c0u: goto label_15e5c0;
        case 0x15e5c4u: goto label_15e5c4;
        case 0x15e5c8u: goto label_15e5c8;
        case 0x15e5ccu: goto label_15e5cc;
        case 0x15e5d0u: goto label_15e5d0;
        case 0x15e5d4u: goto label_15e5d4;
        case 0x15e5d8u: goto label_15e5d8;
        case 0x15e5dcu: goto label_15e5dc;
        case 0x15e5e0u: goto label_15e5e0;
        case 0x15e5e4u: goto label_15e5e4;
        case 0x15e5e8u: goto label_15e5e8;
        case 0x15e5ecu: goto label_15e5ec;
        case 0x15e5f0u: goto label_15e5f0;
        case 0x15e5f4u: goto label_15e5f4;
        case 0x15e5f8u: goto label_15e5f8;
        case 0x15e5fcu: goto label_15e5fc;
        case 0x15e600u: goto label_15e600;
        case 0x15e604u: goto label_15e604;
        case 0x15e608u: goto label_15e608;
        case 0x15e60cu: goto label_15e60c;
        case 0x15e610u: goto label_15e610;
        case 0x15e614u: goto label_15e614;
        case 0x15e618u: goto label_15e618;
        case 0x15e61cu: goto label_15e61c;
        case 0x15e620u: goto label_15e620;
        case 0x15e624u: goto label_15e624;
        case 0x15e628u: goto label_15e628;
        case 0x15e62cu: goto label_15e62c;
        case 0x15e630u: goto label_15e630;
        case 0x15e634u: goto label_15e634;
        case 0x15e638u: goto label_15e638;
        case 0x15e63cu: goto label_15e63c;
        case 0x15e640u: goto label_15e640;
        case 0x15e644u: goto label_15e644;
        case 0x15e648u: goto label_15e648;
        case 0x15e64cu: goto label_15e64c;
        case 0x15e650u: goto label_15e650;
        case 0x15e654u: goto label_15e654;
        case 0x15e658u: goto label_15e658;
        case 0x15e65cu: goto label_15e65c;
        case 0x15e660u: goto label_15e660;
        case 0x15e664u: goto label_15e664;
        case 0x15e668u: goto label_15e668;
        case 0x15e66cu: goto label_15e66c;
        case 0x15e670u: goto label_15e670;
        case 0x15e674u: goto label_15e674;
        case 0x15e678u: goto label_15e678;
        case 0x15e67cu: goto label_15e67c;
        case 0x15e680u: goto label_15e680;
        case 0x15e684u: goto label_15e684;
        case 0x15e688u: goto label_15e688;
        case 0x15e68cu: goto label_15e68c;
        case 0x15e690u: goto label_15e690;
        case 0x15e694u: goto label_15e694;
        case 0x15e698u: goto label_15e698;
        case 0x15e69cu: goto label_15e69c;
        case 0x15e6a0u: goto label_15e6a0;
        case 0x15e6a4u: goto label_15e6a4;
        case 0x15e6a8u: goto label_15e6a8;
        case 0x15e6acu: goto label_15e6ac;
        case 0x15e6b0u: goto label_15e6b0;
        case 0x15e6b4u: goto label_15e6b4;
        case 0x15e6b8u: goto label_15e6b8;
        case 0x15e6bcu: goto label_15e6bc;
        case 0x15e6c0u: goto label_15e6c0;
        case 0x15e6c4u: goto label_15e6c4;
        case 0x15e6c8u: goto label_15e6c8;
        case 0x15e6ccu: goto label_15e6cc;
        case 0x15e6d0u: goto label_15e6d0;
        case 0x15e6d4u: goto label_15e6d4;
        case 0x15e6d8u: goto label_15e6d8;
        case 0x15e6dcu: goto label_15e6dc;
        case 0x15e6e0u: goto label_15e6e0;
        case 0x15e6e4u: goto label_15e6e4;
        case 0x15e6e8u: goto label_15e6e8;
        case 0x15e6ecu: goto label_15e6ec;
        case 0x15e6f0u: goto label_15e6f0;
        case 0x15e6f4u: goto label_15e6f4;
        case 0x15e6f8u: goto label_15e6f8;
        case 0x15e6fcu: goto label_15e6fc;
        case 0x15e700u: goto label_15e700;
        case 0x15e704u: goto label_15e704;
        case 0x15e708u: goto label_15e708;
        case 0x15e70cu: goto label_15e70c;
        case 0x15e710u: goto label_15e710;
        case 0x15e714u: goto label_15e714;
        case 0x15e718u: goto label_15e718;
        case 0x15e71cu: goto label_15e71c;
        case 0x15e720u: goto label_15e720;
        case 0x15e724u: goto label_15e724;
        case 0x15e728u: goto label_15e728;
        case 0x15e72cu: goto label_15e72c;
        case 0x15e730u: goto label_15e730;
        case 0x15e734u: goto label_15e734;
        case 0x15e738u: goto label_15e738;
        case 0x15e73cu: goto label_15e73c;
        case 0x15e740u: goto label_15e740;
        case 0x15e744u: goto label_15e744;
        case 0x15e748u: goto label_15e748;
        case 0x15e74cu: goto label_15e74c;
        case 0x15e750u: goto label_15e750;
        case 0x15e754u: goto label_15e754;
        case 0x15e758u: goto label_15e758;
        case 0x15e75cu: goto label_15e75c;
        case 0x15e760u: goto label_15e760;
        case 0x15e764u: goto label_15e764;
        case 0x15e768u: goto label_15e768;
        case 0x15e76cu: goto label_15e76c;
        case 0x15e770u: goto label_15e770;
        case 0x15e774u: goto label_15e774;
        case 0x15e778u: goto label_15e778;
        case 0x15e77cu: goto label_15e77c;
        case 0x15e780u: goto label_15e780;
        case 0x15e784u: goto label_15e784;
        case 0x15e788u: goto label_15e788;
        case 0x15e78cu: goto label_15e78c;
        case 0x15e790u: goto label_15e790;
        case 0x15e794u: goto label_15e794;
        case 0x15e798u: goto label_15e798;
        case 0x15e79cu: goto label_15e79c;
        case 0x15e7a0u: goto label_15e7a0;
        case 0x15e7a4u: goto label_15e7a4;
        case 0x15e7a8u: goto label_15e7a8;
        case 0x15e7acu: goto label_15e7ac;
        case 0x15e7b0u: goto label_15e7b0;
        case 0x15e7b4u: goto label_15e7b4;
        case 0x15e7b8u: goto label_15e7b8;
        case 0x15e7bcu: goto label_15e7bc;
        default: break;
    }

    ctx->pc = 0x15e350u;

label_15e350:
    // 0x15e350: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x15e350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_15e354:
    // 0x15e354: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15e354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_15e358:
    // 0x15e358: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15e358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15e35c:
    // 0x15e35c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15e35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15e360:
    // 0x15e360: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x15e360u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15e364:
    // 0x15e364: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15e364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15e368:
    // 0x15e368: 0x268400b0  addiu       $a0, $s4, 0xB0
    ctx->pc = 0x15e368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
label_15e36c:
    // 0x15e36c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15e36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15e370:
    // 0x15e370: 0xc057b2c  jal         func_15ECB0
label_15e374:
    if (ctx->pc == 0x15E374u) {
        ctx->pc = 0x15E374u;
            // 0x15e374: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x15E378u;
        goto label_15e378;
    }
    ctx->pc = 0x15E370u;
    SET_GPR_U32(ctx, 31, 0x15E378u);
    ctx->pc = 0x15E374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E370u;
            // 0x15e374: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ECB0u;
    if (runtime->hasFunction(0x15ECB0u)) {
        auto targetFn = runtime->lookupFunction(0x15ECB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E378u; }
        if (ctx->pc != 0x15E378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ECB0_0x15ecb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E378u; }
        if (ctx->pc != 0x15E378u) { return; }
    }
    ctx->pc = 0x15E378u;
label_15e378:
    // 0x15e378: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_15e37c:
    if (ctx->pc == 0x15E37Cu) {
        ctx->pc = 0x15E37Cu;
            // 0x15e37c: 0x26840108  addiu       $a0, $s4, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 264));
        ctx->pc = 0x15E380u;
        goto label_15e380;
    }
    ctx->pc = 0x15E378u;
    {
        const bool branch_taken_0x15e378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e378) {
            ctx->pc = 0x15E37Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E378u;
            // 0x15e37c: 0x26840108  addiu       $a0, $s4, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 264));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E3D8u;
            goto label_15e3d8;
        }
    }
    ctx->pc = 0x15E380u;
label_15e380:
    // 0x15e380: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x15e380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_15e384:
    // 0x15e384: 0xc057b28  jal         func_15ECA0
label_15e388:
    if (ctx->pc == 0x15E388u) {
        ctx->pc = 0x15E388u;
            // 0x15e388: 0x268500b0  addiu       $a1, $s4, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
        ctx->pc = 0x15E38Cu;
        goto label_15e38c;
    }
    ctx->pc = 0x15E384u;
    SET_GPR_U32(ctx, 31, 0x15E38Cu);
    ctx->pc = 0x15E388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E384u;
            // 0x15e388: 0x268500b0  addiu       $a1, $s4, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ECA0u;
    if (runtime->hasFunction(0x15ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x15ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E38Cu; }
        if (ctx->pc != 0x15E38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ECA0_0x15eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E38Cu; }
        if (ctx->pc != 0x15E38Cu) { return; }
    }
    ctx->pc = 0x15E38Cu;
label_15e38c:
    // 0x15e38c: 0xc057b24  jal         func_15EC90
label_15e390:
    if (ctx->pc == 0x15E390u) {
        ctx->pc = 0x15E390u;
            // 0x15e390: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->pc = 0x15E394u;
        goto label_15e394;
    }
    ctx->pc = 0x15E38Cu;
    SET_GPR_U32(ctx, 31, 0x15E394u);
    ctx->pc = 0x15E390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E38Cu;
            // 0x15e390: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EC90u;
    if (runtime->hasFunction(0x15EC90u)) {
        auto targetFn = runtime->lookupFunction(0x15EC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E394u; }
        if (ctx->pc != 0x15E394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EC90_0x15ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E394u; }
        if (ctx->pc != 0x15E394u) { return; }
    }
    ctx->pc = 0x15E394u;
label_15e394:
    // 0x15e394: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15e394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15e398:
    // 0x15e398: 0xc057ac0  jal         func_15EB00
label_15e39c:
    if (ctx->pc == 0x15E39Cu) {
        ctx->pc = 0x15E39Cu;
            // 0x15e39c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E3A0u;
        goto label_15e3a0;
    }
    ctx->pc = 0x15E398u;
    SET_GPR_U32(ctx, 31, 0x15E3A0u);
    ctx->pc = 0x15E39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E398u;
            // 0x15e39c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EB00u;
    if (runtime->hasFunction(0x15EB00u)) {
        auto targetFn = runtime->lookupFunction(0x15EB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E3A0u; }
        if (ctx->pc != 0x15E3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EB00_0x15eb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E3A0u; }
        if (ctx->pc != 0x15E3A0u) { return; }
    }
    ctx->pc = 0x15E3A0u;
label_15e3a0:
    // 0x15e3a0: 0xc057ab8  jal         func_15EAE0
label_15e3a4:
    if (ctx->pc == 0x15E3A4u) {
        ctx->pc = 0x15E3A4u;
            // 0x15e3a4: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->pc = 0x15E3A8u;
        goto label_15e3a8;
    }
    ctx->pc = 0x15E3A0u;
    SET_GPR_U32(ctx, 31, 0x15E3A8u);
    ctx->pc = 0x15E3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E3A0u;
            // 0x15e3a4: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAE0u;
    if (runtime->hasFunction(0x15EAE0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E3A8u; }
        if (ctx->pc != 0x15E3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAE0_0x15eae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E3A8u; }
        if (ctx->pc != 0x15E3A8u) { return; }
    }
    ctx->pc = 0x15E3A8u;
label_15e3a8:
    // 0x15e3a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15e3a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15e3ac:
    // 0x15e3ac: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x15e3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_15e3b0:
    // 0x15e3b0: 0xc057ab4  jal         func_15EAD0
label_15e3b4:
    if (ctx->pc == 0x15E3B4u) {
        ctx->pc = 0x15E3B4u;
            // 0x15e3b4: 0x268500b0  addiu       $a1, $s4, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
        ctx->pc = 0x15E3B8u;
        goto label_15e3b8;
    }
    ctx->pc = 0x15E3B0u;
    SET_GPR_U32(ctx, 31, 0x15E3B8u);
    ctx->pc = 0x15E3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E3B0u;
            // 0x15e3b4: 0x268500b0  addiu       $a1, $s4, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAD0u;
    if (runtime->hasFunction(0x15EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E3B8u; }
        if (ctx->pc != 0x15E3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAD0_0x15ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E3B8u; }
        if (ctx->pc != 0x15E3B8u) { return; }
    }
    ctx->pc = 0x15E3B8u;
label_15e3b8:
    // 0x15e3b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15e3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15e3bc:
    // 0x15e3bc: 0xc057aac  jal         func_15EAB0
label_15e3c0:
    if (ctx->pc == 0x15E3C0u) {
        ctx->pc = 0x15E3C0u;
            // 0x15e3c0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x15E3C4u;
        goto label_15e3c4;
    }
    ctx->pc = 0x15E3BCu;
    SET_GPR_U32(ctx, 31, 0x15E3C4u);
    ctx->pc = 0x15E3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E3BCu;
            // 0x15e3c0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAB0u;
    if (runtime->hasFunction(0x15EAB0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E3C4u; }
        if (ctx->pc != 0x15E3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAB0_0x15eab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E3C4u; }
        if (ctx->pc != 0x15E3C4u) { return; }
    }
    ctx->pc = 0x15E3C4u;
label_15e3c4:
    // 0x15e3c4: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_15e3c8:
    if (ctx->pc == 0x15E3C8u) {
        ctx->pc = 0x15E3CCu;
        goto label_15e3cc;
    }
    ctx->pc = 0x15E3C4u;
    {
        const bool branch_taken_0x15e3c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e3c4) {
            ctx->pc = 0x15E38Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15e38c;
        }
    }
    ctx->pc = 0x15E3CCu;
label_15e3cc:
    // 0x15e3cc: 0xc057a9c  jal         func_15EA70
label_15e3d0:
    if (ctx->pc == 0x15E3D0u) {
        ctx->pc = 0x15E3D0u;
            // 0x15e3d0: 0x268400b0  addiu       $a0, $s4, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
        ctx->pc = 0x15E3D4u;
        goto label_15e3d4;
    }
    ctx->pc = 0x15E3CCu;
    SET_GPR_U32(ctx, 31, 0x15E3D4u);
    ctx->pc = 0x15E3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E3CCu;
            // 0x15e3d0: 0x268400b0  addiu       $a0, $s4, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EA70u;
    if (runtime->hasFunction(0x15EA70u)) {
        auto targetFn = runtime->lookupFunction(0x15EA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E3D4u; }
        if (ctx->pc != 0x15E3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EA70_0x15ea70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E3D4u; }
        if (ctx->pc != 0x15E3D4u) { return; }
    }
    ctx->pc = 0x15E3D4u;
label_15e3d4:
    // 0x15e3d4: 0x26840108  addiu       $a0, $s4, 0x108
    ctx->pc = 0x15e3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 264));
label_15e3d8:
    // 0x15e3d8: 0xc057b2c  jal         func_15ECB0
label_15e3dc:
    if (ctx->pc == 0x15E3DCu) {
        ctx->pc = 0x15E3E0u;
        goto label_15e3e0;
    }
    ctx->pc = 0x15E3D8u;
    SET_GPR_U32(ctx, 31, 0x15E3E0u);
    ctx->pc = 0x15ECB0u;
    if (runtime->hasFunction(0x15ECB0u)) {
        auto targetFn = runtime->lookupFunction(0x15ECB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E3E0u; }
        if (ctx->pc != 0x15E3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ECB0_0x15ecb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E3E0u; }
        if (ctx->pc != 0x15E3E0u) { return; }
    }
    ctx->pc = 0x15E3E0u;
label_15e3e0:
    // 0x15e3e0: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
label_15e3e4:
    if (ctx->pc == 0x15E3E4u) {
        ctx->pc = 0x15E3E4u;
            // 0x15e3e4: 0x268400f0  addiu       $a0, $s4, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 240));
        ctx->pc = 0x15E3E8u;
        goto label_15e3e8;
    }
    ctx->pc = 0x15E3E0u;
    {
        const bool branch_taken_0x15e3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e3e0) {
            ctx->pc = 0x15E3E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E3E0u;
            // 0x15e3e4: 0x268400f0  addiu       $a0, $s4, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 240));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E450u;
            goto label_15e450;
        }
    }
    ctx->pc = 0x15E3E8u;
label_15e3e8:
    // 0x15e3e8: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x15e3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_15e3ec:
    // 0x15e3ec: 0xc057b28  jal         func_15ECA0
label_15e3f0:
    if (ctx->pc == 0x15E3F0u) {
        ctx->pc = 0x15E3F0u;
            // 0x15e3f0: 0x26850108  addiu       $a1, $s4, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 264));
        ctx->pc = 0x15E3F4u;
        goto label_15e3f4;
    }
    ctx->pc = 0x15E3ECu;
    SET_GPR_U32(ctx, 31, 0x15E3F4u);
    ctx->pc = 0x15E3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E3ECu;
            // 0x15e3f0: 0x26850108  addiu       $a1, $s4, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ECA0u;
    if (runtime->hasFunction(0x15ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x15ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E3F4u; }
        if (ctx->pc != 0x15E3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ECA0_0x15eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E3F4u; }
        if (ctx->pc != 0x15E3F4u) { return; }
    }
    ctx->pc = 0x15E3F4u;
label_15e3f4:
    // 0x15e3f4: 0xc057b24  jal         func_15EC90
label_15e3f8:
    if (ctx->pc == 0x15E3F8u) {
        ctx->pc = 0x15E3F8u;
            // 0x15e3f8: 0x27a400a8  addiu       $a0, $sp, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
        ctx->pc = 0x15E3FCu;
        goto label_15e3fc;
    }
    ctx->pc = 0x15E3F4u;
    SET_GPR_U32(ctx, 31, 0x15E3FCu);
    ctx->pc = 0x15E3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E3F4u;
            // 0x15e3f8: 0x27a400a8  addiu       $a0, $sp, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EC90u;
    if (runtime->hasFunction(0x15EC90u)) {
        auto targetFn = runtime->lookupFunction(0x15EC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E3FCu; }
        if (ctx->pc != 0x15E3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EC90_0x15ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E3FCu; }
        if (ctx->pc != 0x15E3FCu) { return; }
    }
    ctx->pc = 0x15E3FCu;
label_15e3fc:
    // 0x15e3fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15e3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15e400:
    // 0x15e400: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_15e404:
    if (ctx->pc == 0x15E404u) {
        ctx->pc = 0x15E408u;
        goto label_15e408;
    }
    ctx->pc = 0x15E400u;
    {
        const bool branch_taken_0x15e400 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e400) {
            ctx->pc = 0x15E418u;
            goto label_15e418;
        }
    }
    ctx->pc = 0x15E408u;
label_15e408:
    // 0x15e408: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x15e408u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15e40c:
    // 0x15e40c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x15e40cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_15e410:
    // 0x15e410: 0x320f809  jalr        $t9
label_15e414:
    if (ctx->pc == 0x15E414u) {
        ctx->pc = 0x15E414u;
            // 0x15e414: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x15E418u;
        goto label_15e418;
    }
    ctx->pc = 0x15E410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15E418u);
        ctx->pc = 0x15E414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E410u;
            // 0x15e414: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15E418u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15E418u; }
            if (ctx->pc != 0x15E418u) { return; }
        }
        }
    }
    ctx->pc = 0x15E418u;
label_15e418:
    // 0x15e418: 0xc057ab8  jal         func_15EAE0
label_15e41c:
    if (ctx->pc == 0x15E41Cu) {
        ctx->pc = 0x15E41Cu;
            // 0x15e41c: 0x27a400a8  addiu       $a0, $sp, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
        ctx->pc = 0x15E420u;
        goto label_15e420;
    }
    ctx->pc = 0x15E418u;
    SET_GPR_U32(ctx, 31, 0x15E420u);
    ctx->pc = 0x15E41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E418u;
            // 0x15e41c: 0x27a400a8  addiu       $a0, $sp, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAE0u;
    if (runtime->hasFunction(0x15EAE0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E420u; }
        if (ctx->pc != 0x15E420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAE0_0x15eae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E420u; }
        if (ctx->pc != 0x15E420u) { return; }
    }
    ctx->pc = 0x15E420u;
label_15e420:
    // 0x15e420: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15e420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15e424:
    // 0x15e424: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x15e424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_15e428:
    // 0x15e428: 0xc057ab4  jal         func_15EAD0
label_15e42c:
    if (ctx->pc == 0x15E42Cu) {
        ctx->pc = 0x15E42Cu;
            // 0x15e42c: 0x26850108  addiu       $a1, $s4, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 264));
        ctx->pc = 0x15E430u;
        goto label_15e430;
    }
    ctx->pc = 0x15E428u;
    SET_GPR_U32(ctx, 31, 0x15E430u);
    ctx->pc = 0x15E42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E428u;
            // 0x15e42c: 0x26850108  addiu       $a1, $s4, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAD0u;
    if (runtime->hasFunction(0x15EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E430u; }
        if (ctx->pc != 0x15E430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAD0_0x15ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E430u; }
        if (ctx->pc != 0x15E430u) { return; }
    }
    ctx->pc = 0x15E430u;
label_15e430:
    // 0x15e430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15e430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15e434:
    // 0x15e434: 0xc057aac  jal         func_15EAB0
label_15e438:
    if (ctx->pc == 0x15E438u) {
        ctx->pc = 0x15E438u;
            // 0x15e438: 0x27a5009c  addiu       $a1, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->pc = 0x15E43Cu;
        goto label_15e43c;
    }
    ctx->pc = 0x15E434u;
    SET_GPR_U32(ctx, 31, 0x15E43Cu);
    ctx->pc = 0x15E438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E434u;
            // 0x15e438: 0x27a5009c  addiu       $a1, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAB0u;
    if (runtime->hasFunction(0x15EAB0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E43Cu; }
        if (ctx->pc != 0x15E43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAB0_0x15eab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E43Cu; }
        if (ctx->pc != 0x15E43Cu) { return; }
    }
    ctx->pc = 0x15E43Cu;
label_15e43c:
    // 0x15e43c: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_15e440:
    if (ctx->pc == 0x15E440u) {
        ctx->pc = 0x15E444u;
        goto label_15e444;
    }
    ctx->pc = 0x15E43Cu;
    {
        const bool branch_taken_0x15e43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e43c) {
            ctx->pc = 0x15E3F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15e3f4;
        }
    }
    ctx->pc = 0x15E444u;
label_15e444:
    // 0x15e444: 0xc057a9c  jal         func_15EA70
label_15e448:
    if (ctx->pc == 0x15E448u) {
        ctx->pc = 0x15E448u;
            // 0x15e448: 0x26840108  addiu       $a0, $s4, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 264));
        ctx->pc = 0x15E44Cu;
        goto label_15e44c;
    }
    ctx->pc = 0x15E444u;
    SET_GPR_U32(ctx, 31, 0x15E44Cu);
    ctx->pc = 0x15E448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E444u;
            // 0x15e448: 0x26840108  addiu       $a0, $s4, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EA70u;
    if (runtime->hasFunction(0x15EA70u)) {
        auto targetFn = runtime->lookupFunction(0x15EA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E44Cu; }
        if (ctx->pc != 0x15E44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EA70_0x15ea70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E44Cu; }
        if (ctx->pc != 0x15E44Cu) { return; }
    }
    ctx->pc = 0x15E44Cu;
label_15e44c:
    // 0x15e44c: 0x268400f0  addiu       $a0, $s4, 0xF0
    ctx->pc = 0x15e44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 240));
label_15e450:
    // 0x15e450: 0xc057a64  jal         func_15E990
label_15e454:
    if (ctx->pc == 0x15E454u) {
        ctx->pc = 0x15E458u;
        goto label_15e458;
    }
    ctx->pc = 0x15E450u;
    SET_GPR_U32(ctx, 31, 0x15E458u);
    ctx->pc = 0x15E990u;
    if (runtime->hasFunction(0x15E990u)) {
        auto targetFn = runtime->lookupFunction(0x15E990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E458u; }
        if (ctx->pc != 0x15E458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E990_0x15e990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E458u; }
        if (ctx->pc != 0x15E458u) { return; }
    }
    ctx->pc = 0x15E458u;
label_15e458:
    // 0x15e458: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_15e45c:
    if (ctx->pc == 0x15E45Cu) {
        ctx->pc = 0x15E45Cu;
            // 0x15e45c: 0x8e8200a0  lw          $v0, 0xA0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 160)));
        ctx->pc = 0x15E460u;
        goto label_15e460;
    }
    ctx->pc = 0x15E458u;
    {
        const bool branch_taken_0x15e458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e458) {
            ctx->pc = 0x15E45Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E458u;
            // 0x15e45c: 0x8e8200a0  lw          $v0, 0xA0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E4B8u;
            goto label_15e4b8;
        }
    }
    ctx->pc = 0x15E460u;
label_15e460:
    // 0x15e460: 0x27a400a4  addiu       $a0, $sp, 0xA4
    ctx->pc = 0x15e460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_15e464:
    // 0x15e464: 0xc057a60  jal         func_15E980
label_15e468:
    if (ctx->pc == 0x15E468u) {
        ctx->pc = 0x15E468u;
            // 0x15e468: 0x268500f0  addiu       $a1, $s4, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 240));
        ctx->pc = 0x15E46Cu;
        goto label_15e46c;
    }
    ctx->pc = 0x15E464u;
    SET_GPR_U32(ctx, 31, 0x15E46Cu);
    ctx->pc = 0x15E468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E464u;
            // 0x15e468: 0x268500f0  addiu       $a1, $s4, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E980u;
    if (runtime->hasFunction(0x15E980u)) {
        auto targetFn = runtime->lookupFunction(0x15E980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E46Cu; }
        if (ctx->pc != 0x15E46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E980_0x15e980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E46Cu; }
        if (ctx->pc != 0x15E46Cu) { return; }
    }
    ctx->pc = 0x15E46Cu;
label_15e46c:
    // 0x15e46c: 0xc057a54  jal         func_15E950
label_15e470:
    if (ctx->pc == 0x15E470u) {
        ctx->pc = 0x15E470u;
            // 0x15e470: 0x27a400a4  addiu       $a0, $sp, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
        ctx->pc = 0x15E474u;
        goto label_15e474;
    }
    ctx->pc = 0x15E46Cu;
    SET_GPR_U32(ctx, 31, 0x15E474u);
    ctx->pc = 0x15E470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E46Cu;
            // 0x15e470: 0x27a400a4  addiu       $a0, $sp, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E950u;
    if (runtime->hasFunction(0x15E950u)) {
        auto targetFn = runtime->lookupFunction(0x15E950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E474u; }
        if (ctx->pc != 0x15E474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E950_0x15e950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E474u; }
        if (ctx->pc != 0x15E474u) { return; }
    }
    ctx->pc = 0x15E474u;
label_15e474:
    // 0x15e474: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15e474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e478:
    // 0x15e478: 0xc057a34  jal         func_15E8D0
label_15e47c:
    if (ctx->pc == 0x15E47Cu) {
        ctx->pc = 0x15E47Cu;
            // 0x15e47c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E480u;
        goto label_15e480;
    }
    ctx->pc = 0x15E478u;
    SET_GPR_U32(ctx, 31, 0x15E480u);
    ctx->pc = 0x15E47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E478u;
            // 0x15e47c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E8D0u;
    if (runtime->hasFunction(0x15E8D0u)) {
        auto targetFn = runtime->lookupFunction(0x15E8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E480u; }
        if (ctx->pc != 0x15E480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E8D0_0x15e8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E480u; }
        if (ctx->pc != 0x15E480u) { return; }
    }
    ctx->pc = 0x15E480u;
label_15e480:
    // 0x15e480: 0xc057a28  jal         func_15E8A0
label_15e484:
    if (ctx->pc == 0x15E484u) {
        ctx->pc = 0x15E484u;
            // 0x15e484: 0x27a400a4  addiu       $a0, $sp, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
        ctx->pc = 0x15E488u;
        goto label_15e488;
    }
    ctx->pc = 0x15E480u;
    SET_GPR_U32(ctx, 31, 0x15E488u);
    ctx->pc = 0x15E484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E480u;
            // 0x15e484: 0x27a400a4  addiu       $a0, $sp, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E8A0u;
    if (runtime->hasFunction(0x15E8A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E488u; }
        if (ctx->pc != 0x15E488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E8A0_0x15e8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E488u; }
        if (ctx->pc != 0x15E488u) { return; }
    }
    ctx->pc = 0x15E488u;
label_15e488:
    // 0x15e488: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15e488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15e48c:
    // 0x15e48c: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x15e48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_15e490:
    // 0x15e490: 0xc057a24  jal         func_15E890
label_15e494:
    if (ctx->pc == 0x15E494u) {
        ctx->pc = 0x15E494u;
            // 0x15e494: 0x268500f0  addiu       $a1, $s4, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 240));
        ctx->pc = 0x15E498u;
        goto label_15e498;
    }
    ctx->pc = 0x15E490u;
    SET_GPR_U32(ctx, 31, 0x15E498u);
    ctx->pc = 0x15E494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E490u;
            // 0x15e494: 0x268500f0  addiu       $a1, $s4, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E890u;
    if (runtime->hasFunction(0x15E890u)) {
        auto targetFn = runtime->lookupFunction(0x15E890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E498u; }
        if (ctx->pc != 0x15E498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E890_0x15e890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E498u; }
        if (ctx->pc != 0x15E498u) { return; }
    }
    ctx->pc = 0x15E498u;
label_15e498:
    // 0x15e498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15e498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15e49c:
    // 0x15e49c: 0xc057a1c  jal         func_15E870
label_15e4a0:
    if (ctx->pc == 0x15E4A0u) {
        ctx->pc = 0x15E4A0u;
            // 0x15e4a0: 0x27a50098  addiu       $a1, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->pc = 0x15E4A4u;
        goto label_15e4a4;
    }
    ctx->pc = 0x15E49Cu;
    SET_GPR_U32(ctx, 31, 0x15E4A4u);
    ctx->pc = 0x15E4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E49Cu;
            // 0x15e4a0: 0x27a50098  addiu       $a1, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E870u;
    if (runtime->hasFunction(0x15E870u)) {
        auto targetFn = runtime->lookupFunction(0x15E870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E4A4u; }
        if (ctx->pc != 0x15E4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E870_0x15e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E4A4u; }
        if (ctx->pc != 0x15E4A4u) { return; }
    }
    ctx->pc = 0x15E4A4u;
label_15e4a4:
    // 0x15e4a4: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_15e4a8:
    if (ctx->pc == 0x15E4A8u) {
        ctx->pc = 0x15E4ACu;
        goto label_15e4ac;
    }
    ctx->pc = 0x15E4A4u;
    {
        const bool branch_taken_0x15e4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e4a4) {
            ctx->pc = 0x15E46Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15e46c;
        }
    }
    ctx->pc = 0x15E4ACu;
label_15e4ac:
    // 0x15e4ac: 0xc057a18  jal         func_15E860
label_15e4b0:
    if (ctx->pc == 0x15E4B0u) {
        ctx->pc = 0x15E4B0u;
            // 0x15e4b0: 0x268400f0  addiu       $a0, $s4, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 240));
        ctx->pc = 0x15E4B4u;
        goto label_15e4b4;
    }
    ctx->pc = 0x15E4ACu;
    SET_GPR_U32(ctx, 31, 0x15E4B4u);
    ctx->pc = 0x15E4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E4ACu;
            // 0x15e4b0: 0x268400f0  addiu       $a0, $s4, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E860u;
    if (runtime->hasFunction(0x15E860u)) {
        auto targetFn = runtime->lookupFunction(0x15E860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E4B4u; }
        if (ctx->pc != 0x15E4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E860_0x15e860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E4B4u; }
        if (ctx->pc != 0x15E4B4u) { return; }
    }
    ctx->pc = 0x15E4B4u;
label_15e4b4:
    // 0x15e4b4: 0x8e8200a0  lw          $v0, 0xA0($s4)
    ctx->pc = 0x15e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 160)));
label_15e4b8:
    // 0x15e4b8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_15e4bc:
    if (ctx->pc == 0x15E4BCu) {
        ctx->pc = 0x15E4BCu;
            // 0x15e4bc: 0x92840124  lbu         $a0, 0x124($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 292)));
        ctx->pc = 0x15E4C0u;
        goto label_15e4c0;
    }
    ctx->pc = 0x15E4B8u;
    {
        const bool branch_taken_0x15e4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e4b8) {
            ctx->pc = 0x15E4BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E4B8u;
            // 0x15e4bc: 0x92840124  lbu         $a0, 0x124($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 292)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E4D0u;
            goto label_15e4d0;
        }
    }
    ctx->pc = 0x15E4C0u;
label_15e4c0:
    // 0x15e4c0: 0xa2800124  sb          $zero, 0x124($s4)
    ctx->pc = 0x15e4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 292), (uint8_t)GPR_U32(ctx, 0));
label_15e4c4:
    // 0x15e4c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e4c8:
    // 0x15e4c8: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_15e4cc:
    if (ctx->pc == 0x15E4CCu) {
        ctx->pc = 0x15E4CCu;
            // 0x15e4cc: 0xae800120  sw          $zero, 0x120($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 0));
        ctx->pc = 0x15E4D0u;
        goto label_15e4d0;
    }
    ctx->pc = 0x15E4C8u;
    {
        const bool branch_taken_0x15e4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E4C8u;
            // 0x15e4cc: 0xae800120  sw          $zero, 0x120($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e4c8) {
            ctx->pc = 0x15E794u;
            goto label_15e794;
        }
    }
    ctx->pc = 0x15E4D0u;
label_15e4d0:
    // 0x15e4d0: 0x54800076  bnel        $a0, $zero, . + 4 + (0x76 << 2)
label_15e4d4:
    if (ctx->pc == 0x15E4D4u) {
        ctx->pc = 0x15E4D4u;
            // 0x15e4d4: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x15E4D8u;
        goto label_15e4d8;
    }
    ctx->pc = 0x15E4D0u;
    {
        const bool branch_taken_0x15e4d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e4d0) {
            ctx->pc = 0x15E4D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E4D0u;
            // 0x15e4d4: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E6ACu;
            goto label_15e6ac;
        }
    }
    ctx->pc = 0x15E4D8u;
label_15e4d8:
    // 0x15e4d8: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x15e4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_15e4dc:
    // 0x15e4dc: 0xc057a14  jal         func_15E850
label_15e4e0:
    if (ctx->pc == 0x15E4E0u) {
        ctx->pc = 0x15E4E0u;
            // 0x15e4e0: 0x268500c4  addiu       $a1, $s4, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 196));
        ctx->pc = 0x15E4E4u;
        goto label_15e4e4;
    }
    ctx->pc = 0x15E4DCu;
    SET_GPR_U32(ctx, 31, 0x15E4E4u);
    ctx->pc = 0x15E4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E4DCu;
            // 0x15e4e0: 0x268500c4  addiu       $a1, $s4, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E850u;
    if (runtime->hasFunction(0x15E850u)) {
        auto targetFn = runtime->lookupFunction(0x15E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E4E4u; }
        if (ctx->pc != 0x15E4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E850_0x15e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E4E4u; }
        if (ctx->pc != 0x15E4E4u) { return; }
    }
    ctx->pc = 0x15E4E4u;
label_15e4e4:
    // 0x15e4e4: 0xc057a10  jal         func_15E840
label_15e4e8:
    if (ctx->pc == 0x15E4E8u) {
        ctx->pc = 0x15E4E8u;
            // 0x15e4e8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x15E4ECu;
        goto label_15e4ec;
    }
    ctx->pc = 0x15E4E4u;
    SET_GPR_U32(ctx, 31, 0x15E4ECu);
    ctx->pc = 0x15E4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E4E4u;
            // 0x15e4e8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E840u;
    if (runtime->hasFunction(0x15E840u)) {
        auto targetFn = runtime->lookupFunction(0x15E840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E4ECu; }
        if (ctx->pc != 0x15E4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E840_0x15e840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E4ECu; }
        if (ctx->pc != 0x15E4ECu) { return; }
    }
    ctx->pc = 0x15E4ECu;
label_15e4ec:
    // 0x15e4ec: 0xc057a10  jal         func_15E840
label_15e4f0:
    if (ctx->pc == 0x15E4F0u) {
        ctx->pc = 0x15E4F0u;
            // 0x15e4f0: 0x27a4008c  addiu       $a0, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->pc = 0x15E4F4u;
        goto label_15e4f4;
    }
    ctx->pc = 0x15E4ECu;
    SET_GPR_U32(ctx, 31, 0x15E4F4u);
    ctx->pc = 0x15E4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E4ECu;
            // 0x15e4f0: 0x27a4008c  addiu       $a0, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E840u;
    if (runtime->hasFunction(0x15E840u)) {
        auto targetFn = runtime->lookupFunction(0x15E840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E4F4u; }
        if (ctx->pc != 0x15E4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E840_0x15e840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E4F4u; }
        if (ctx->pc != 0x15E4F4u) { return; }
    }
    ctx->pc = 0x15E4F4u;
label_15e4f4:
    // 0x15e4f4: 0xc057a0c  jal         func_15E830
label_15e4f8:
    if (ctx->pc == 0x15E4F8u) {
        ctx->pc = 0x15E4F8u;
            // 0x15e4f8: 0x27a40094  addiu       $a0, $sp, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
        ctx->pc = 0x15E4FCu;
        goto label_15e4fc;
    }
    ctx->pc = 0x15E4F4u;
    SET_GPR_U32(ctx, 31, 0x15E4FCu);
    ctx->pc = 0x15E4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E4F4u;
            // 0x15e4f8: 0x27a40094  addiu       $a0, $sp, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E830u;
    if (runtime->hasFunction(0x15E830u)) {
        auto targetFn = runtime->lookupFunction(0x15E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E4FCu; }
        if (ctx->pc != 0x15E4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E830_0x15e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E4FCu; }
        if (ctx->pc != 0x15E4FCu) { return; }
    }
    ctx->pc = 0x15E4FCu;
label_15e4fc:
    // 0x15e4fc: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x15e4fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15e500:
    // 0x15e500: 0xc057a0c  jal         func_15E830
label_15e504:
    if (ctx->pc == 0x15E504u) {
        ctx->pc = 0x15E504u;
            // 0x15e504: 0x27a40094  addiu       $a0, $sp, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
        ctx->pc = 0x15E508u;
        goto label_15e508;
    }
    ctx->pc = 0x15E500u;
    SET_GPR_U32(ctx, 31, 0x15E508u);
    ctx->pc = 0x15E504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E500u;
            // 0x15e504: 0x27a40094  addiu       $a0, $sp, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E830u;
    if (runtime->hasFunction(0x15E830u)) {
        auto targetFn = runtime->lookupFunction(0x15E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E508u; }
        if (ctx->pc != 0x15E508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E830_0x15e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E508u; }
        if (ctx->pc != 0x15E508u) { return; }
    }
    ctx->pc = 0x15E508u;
label_15e508:
    // 0x15e508: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x15e508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e50c:
    // 0x15e50c: 0x8c53000c  lw          $s3, 0xC($v0)
    ctx->pc = 0x15e50cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_15e510:
    // 0x15e510: 0xc057b2c  jal         func_15ECB0
label_15e514:
    if (ctx->pc == 0x15E514u) {
        ctx->pc = 0x15E514u;
            // 0x15e514: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E518u;
        goto label_15e518;
    }
    ctx->pc = 0x15E510u;
    SET_GPR_U32(ctx, 31, 0x15E518u);
    ctx->pc = 0x15E514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E510u;
            // 0x15e514: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ECB0u;
    if (runtime->hasFunction(0x15ECB0u)) {
        auto targetFn = runtime->lookupFunction(0x15ECB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E518u; }
        if (ctx->pc != 0x15E518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ECB0_0x15ecb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E518u; }
        if (ctx->pc != 0x15E518u) { return; }
    }
    ctx->pc = 0x15E518u;
label_15e518:
    // 0x15e518: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
label_15e51c:
    if (ctx->pc == 0x15E51Cu) {
        ctx->pc = 0x15E520u;
        goto label_15e520;
    }
    ctx->pc = 0x15E518u;
    {
        const bool branch_taken_0x15e518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e518) {
            ctx->pc = 0x15E678u;
            goto label_15e678;
        }
    }
    ctx->pc = 0x15E520u;
label_15e520:
    // 0x15e520: 0xc057a0c  jal         func_15E830
label_15e524:
    if (ctx->pc == 0x15E524u) {
        ctx->pc = 0x15E524u;
            // 0x15e524: 0x27a40094  addiu       $a0, $sp, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
        ctx->pc = 0x15E528u;
        goto label_15e528;
    }
    ctx->pc = 0x15E520u;
    SET_GPR_U32(ctx, 31, 0x15E528u);
    ctx->pc = 0x15E524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E520u;
            // 0x15e524: 0x27a40094  addiu       $a0, $sp, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E830u;
    if (runtime->hasFunction(0x15E830u)) {
        auto targetFn = runtime->lookupFunction(0x15E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E528u; }
        if (ctx->pc != 0x15E528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E830_0x15e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E528u; }
        if (ctx->pc != 0x15E528u) { return; }
    }
    ctx->pc = 0x15E528u;
label_15e528:
    // 0x15e528: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x15e528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e52c:
    // 0x15e52c: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x15e52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_15e530:
    // 0x15e530: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15e530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15e534:
    // 0x15e534: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x15e534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_15e538:
    // 0x15e538: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x15e538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15e53c:
    // 0x15e53c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15e53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15e540:
    // 0x15e540: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x15e540u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_15e544:
    // 0x15e544: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x15e544u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_15e548:
    // 0x15e548: 0xc057ab4  jal         func_15EAD0
label_15e54c:
    if (ctx->pc == 0x15E54Cu) {
        ctx->pc = 0x15E54Cu;
            // 0x15e54c: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->pc = 0x15E550u;
        goto label_15e550;
    }
    ctx->pc = 0x15E548u;
    SET_GPR_U32(ctx, 31, 0x15E550u);
    ctx->pc = 0x15E54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E548u;
            // 0x15e54c: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAD0u;
    if (runtime->hasFunction(0x15EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E550u; }
        if (ctx->pc != 0x15E550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAD0_0x15ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E550u; }
        if (ctx->pc != 0x15E550u) { return; }
    }
    ctx->pc = 0x15E550u;
label_15e550:
    // 0x15e550: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x15e550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_15e554:
    // 0x15e554: 0xc057a08  jal         func_15E820
label_15e558:
    if (ctx->pc == 0x15E558u) {
        ctx->pc = 0x15E558u;
            // 0x15e558: 0x27a50088  addiu       $a1, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->pc = 0x15E55Cu;
        goto label_15e55c;
    }
    ctx->pc = 0x15E554u;
    SET_GPR_U32(ctx, 31, 0x15E55Cu);
    ctx->pc = 0x15E558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E554u;
            // 0x15e558: 0x27a50088  addiu       $a1, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E820u;
    if (runtime->hasFunction(0x15E820u)) {
        auto targetFn = runtime->lookupFunction(0x15E820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E55Cu; }
        if (ctx->pc != 0x15E55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E820_0x15e820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E55Cu; }
        if (ctx->pc != 0x15E55Cu) { return; }
    }
    ctx->pc = 0x15E55Cu;
label_15e55c:
    // 0x15e55c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15e55cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e560:
    // 0x15e560: 0x10000003  b           . + 4 + (0x3 << 2)
label_15e564:
    if (ctx->pc == 0x15E564u) {
        ctx->pc = 0x15E564u;
            // 0x15e564: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E568u;
        goto label_15e568;
    }
    ctx->pc = 0x15E560u;
    {
        const bool branch_taken_0x15e560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E560u;
            // 0x15e564: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e560) {
            ctx->pc = 0x15E570u;
            goto label_15e570;
        }
    }
    ctx->pc = 0x15E568u;
label_15e568:
    // 0x15e568: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15e568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15e56c:
    // 0x15e56c: 0x0  nop
    ctx->pc = 0x15e56cu;
    // NOP
label_15e570:
    // 0x15e570: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x15e570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_15e574:
    // 0x15e574: 0x90420125  lbu         $v0, 0x125($v0)
    ctx->pc = 0x15e574u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 293)));
label_15e578:
    // 0x15e578: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
label_15e57c:
    if (ctx->pc == 0x15E57Cu) {
        ctx->pc = 0x15E580u;
        goto label_15e580;
    }
    ctx->pc = 0x15E578u;
    {
        const bool branch_taken_0x15e578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e578) {
            ctx->pc = 0x15E568u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15e568;
        }
    }
    ctx->pc = 0x15E580u;
label_15e580:
    // 0x15e580: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x15e580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15e584:
    // 0x15e584: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15e584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15e588:
    // 0x15e588: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15e588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15e58c:
    // 0x15e58c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x15e58cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_15e590:
    // 0x15e590: 0x320f809  jalr        $t9
label_15e594:
    if (ctx->pc == 0x15E594u) {
        ctx->pc = 0x15E594u;
            // 0x15e594: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E598u;
        goto label_15e598;
    }
    ctx->pc = 0x15E590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15E598u);
        ctx->pc = 0x15E594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E590u;
            // 0x15e594: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15E598u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15E598u; }
            if (ctx->pc != 0x15E598u) { return; }
        }
        }
    }
    ctx->pc = 0x15E598u;
label_15e598:
    // 0x15e598: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x15e598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_15e59c:
    // 0x15e59c: 0xc057b28  jal         func_15ECA0
label_15e5a0:
    if (ctx->pc == 0x15E5A0u) {
        ctx->pc = 0x15E5A0u;
            // 0x15e5a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E5A4u;
        goto label_15e5a4;
    }
    ctx->pc = 0x15E59Cu;
    SET_GPR_U32(ctx, 31, 0x15E5A4u);
    ctx->pc = 0x15E5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E59Cu;
            // 0x15e5a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ECA0u;
    if (runtime->hasFunction(0x15ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x15ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E5A4u; }
        if (ctx->pc != 0x15E5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ECA0_0x15eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E5A4u; }
        if (ctx->pc != 0x15E5A4u) { return; }
    }
    ctx->pc = 0x15E5A4u;
label_15e5a4:
    // 0x15e5a4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15e5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_15e5a8:
    // 0x15e5a8: 0xc057a08  jal         func_15E820
label_15e5ac:
    if (ctx->pc == 0x15E5ACu) {
        ctx->pc = 0x15E5ACu;
            // 0x15e5ac: 0x27a50084  addiu       $a1, $sp, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
        ctx->pc = 0x15E5B0u;
        goto label_15e5b0;
    }
    ctx->pc = 0x15E5A8u;
    SET_GPR_U32(ctx, 31, 0x15E5B0u);
    ctx->pc = 0x15E5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E5A8u;
            // 0x15e5ac: 0x27a50084  addiu       $a1, $sp, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E820u;
    if (runtime->hasFunction(0x15E820u)) {
        auto targetFn = runtime->lookupFunction(0x15E820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E5B0u; }
        if (ctx->pc != 0x15E5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E820_0x15e820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E5B0u; }
        if (ctx->pc != 0x15E5B0u) { return; }
    }
    ctx->pc = 0x15E5B0u;
label_15e5b0:
    // 0x15e5b0: 0x8e820120  lw          $v0, 0x120($s4)
    ctx->pc = 0x15e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
label_15e5b4:
    // 0x15e5b4: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x15e5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_15e5b8:
    // 0x15e5b8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_15e5bc:
    if (ctx->pc == 0x15E5BCu) {
        ctx->pc = 0x15E5C0u;
        goto label_15e5c0;
    }
    ctx->pc = 0x15E5B8u;
    {
        const bool branch_taken_0x15e5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e5b8) {
            ctx->pc = 0x15E618u;
            goto label_15e618;
        }
    }
    ctx->pc = 0x15E5C0u;
label_15e5c0:
    // 0x15e5c0: 0xc057b24  jal         func_15EC90
label_15e5c4:
    if (ctx->pc == 0x15E5C4u) {
        ctx->pc = 0x15E5C4u;
            // 0x15e5c4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x15E5C8u;
        goto label_15e5c8;
    }
    ctx->pc = 0x15E5C0u;
    SET_GPR_U32(ctx, 31, 0x15E5C8u);
    ctx->pc = 0x15E5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E5C0u;
            // 0x15e5c4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EC90u;
    if (runtime->hasFunction(0x15EC90u)) {
        auto targetFn = runtime->lookupFunction(0x15EC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E5C8u; }
        if (ctx->pc != 0x15E5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EC90_0x15ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E5C8u; }
        if (ctx->pc != 0x15E5C8u) { return; }
    }
    ctx->pc = 0x15E5C8u;
label_15e5c8:
    // 0x15e5c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15e5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15e5cc:
    // 0x15e5cc: 0xae84011c  sw          $a0, 0x11C($s4)
    ctx->pc = 0x15e5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 284), GPR_U32(ctx, 4));
label_15e5d0:
    // 0x15e5d0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x15e5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15e5d4:
    // 0x15e5d4: 0x8e820120  lw          $v0, 0x120($s4)
    ctx->pc = 0x15e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
label_15e5d8:
    // 0x15e5d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15e5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15e5dc:
    // 0x15e5dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_15e5e0:
    if (ctx->pc == 0x15E5E0u) {
        ctx->pc = 0x15E5E4u;
        goto label_15e5e4;
    }
    ctx->pc = 0x15E5DCu;
    {
        const bool branch_taken_0x15e5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e5dc) {
            ctx->pc = 0x15E5F0u;
            goto label_15e5f0;
        }
    }
    ctx->pc = 0x15E5E4u;
label_15e5e4:
    // 0x15e5e4: 0xc0408c8  jal         func_102320
label_15e5e8:
    if (ctx->pc == 0x15E5E8u) {
        ctx->pc = 0x15E5E8u;
            // 0x15e5e8: 0x27b90060  addiu       $t9, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x15E5ECu;
        goto label_15e5ec;
    }
    ctx->pc = 0x15E5E4u;
    SET_GPR_U32(ctx, 31, 0x15E5ECu);
    ctx->pc = 0x15E5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E5E4u;
            // 0x15e5e8: 0x27b90060  addiu       $t9, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102320u;
    if (runtime->hasFunction(0x102320u)) {
        auto targetFn = runtime->lookupFunction(0x102320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E5ECu; }
        if (ctx->pc != 0x15E5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102320_0x102320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E5ECu; }
        if (ctx->pc != 0x15E5ECu) { return; }
    }
    ctx->pc = 0x15E5ECu;
label_15e5ec:
    // 0x15e5ec: 0x0  nop
    ctx->pc = 0x15e5ecu;
    // NOP
label_15e5f0:
    // 0x15e5f0: 0xc057ab8  jal         func_15EAE0
label_15e5f4:
    if (ctx->pc == 0x15E5F4u) {
        ctx->pc = 0x15E5F4u;
            // 0x15e5f4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x15E5F8u;
        goto label_15e5f8;
    }
    ctx->pc = 0x15E5F0u;
    SET_GPR_U32(ctx, 31, 0x15E5F8u);
    ctx->pc = 0x15E5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E5F0u;
            // 0x15e5f4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAE0u;
    if (runtime->hasFunction(0x15EAE0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E5F8u; }
        if (ctx->pc != 0x15E5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAE0_0x15eae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E5F8u; }
        if (ctx->pc != 0x15E5F8u) { return; }
    }
    ctx->pc = 0x15E5F8u;
label_15e5f8:
    // 0x15e5f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15e5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15e5fc:
    // 0x15e5fc: 0xc057aac  jal         func_15EAB0
label_15e600:
    if (ctx->pc == 0x15E600u) {
        ctx->pc = 0x15E600u;
            // 0x15e600: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->pc = 0x15E604u;
        goto label_15e604;
    }
    ctx->pc = 0x15E5FCu;
    SET_GPR_U32(ctx, 31, 0x15E604u);
    ctx->pc = 0x15E600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E5FCu;
            // 0x15e600: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAB0u;
    if (runtime->hasFunction(0x15EAB0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E604u; }
        if (ctx->pc != 0x15E604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAB0_0x15eab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E604u; }
        if (ctx->pc != 0x15E604u) { return; }
    }
    ctx->pc = 0x15E604u;
label_15e604:
    // 0x15e604: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_15e608:
    if (ctx->pc == 0x15E608u) {
        ctx->pc = 0x15E60Cu;
        goto label_15e60c;
    }
    ctx->pc = 0x15E604u;
    {
        const bool branch_taken_0x15e604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e604) {
            ctx->pc = 0x15E5C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15e5c0;
        }
    }
    ctx->pc = 0x15E60Cu;
label_15e60c:
    // 0x15e60c: 0x10000010  b           . + 4 + (0x10 << 2)
label_15e610:
    if (ctx->pc == 0x15E610u) {
        ctx->pc = 0x15E614u;
        goto label_15e614;
    }
    ctx->pc = 0x15E60Cu;
    {
        const bool branch_taken_0x15e60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e60c) {
            ctx->pc = 0x15E650u;
            goto label_15e650;
        }
    }
    ctx->pc = 0x15E614u;
label_15e614:
    // 0x15e614: 0x0  nop
    ctx->pc = 0x15e614u;
    // NOP
label_15e618:
    // 0x15e618: 0xc057b24  jal         func_15EC90
label_15e61c:
    if (ctx->pc == 0x15E61Cu) {
        ctx->pc = 0x15E61Cu;
            // 0x15e61c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x15E620u;
        goto label_15e620;
    }
    ctx->pc = 0x15E618u;
    SET_GPR_U32(ctx, 31, 0x15E620u);
    ctx->pc = 0x15E61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E618u;
            // 0x15e61c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EC90u;
    if (runtime->hasFunction(0x15EC90u)) {
        auto targetFn = runtime->lookupFunction(0x15EC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E620u; }
        if (ctx->pc != 0x15E620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EC90_0x15ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E620u; }
        if (ctx->pc != 0x15E620u) { return; }
    }
    ctx->pc = 0x15E620u;
label_15e620:
    // 0x15e620: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15e620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15e624:
    // 0x15e624: 0x27b90060  addiu       $t9, $sp, 0x60
    ctx->pc = 0x15e624u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_15e628:
    // 0x15e628: 0xc0408c8  jal         func_102320
label_15e62c:
    if (ctx->pc == 0x15E62Cu) {
        ctx->pc = 0x15E62Cu;
            // 0x15e62c: 0xae84011c  sw          $a0, 0x11C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 284), GPR_U32(ctx, 4));
        ctx->pc = 0x15E630u;
        goto label_15e630;
    }
    ctx->pc = 0x15E628u;
    SET_GPR_U32(ctx, 31, 0x15E630u);
    ctx->pc = 0x15E62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E628u;
            // 0x15e62c: 0xae84011c  sw          $a0, 0x11C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 284), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102320u;
    if (runtime->hasFunction(0x102320u)) {
        auto targetFn = runtime->lookupFunction(0x102320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E630u; }
        if (ctx->pc != 0x15E630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102320_0x102320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E630u; }
        if (ctx->pc != 0x15E630u) { return; }
    }
    ctx->pc = 0x15E630u;
label_15e630:
    // 0x15e630: 0xc057ab8  jal         func_15EAE0
label_15e634:
    if (ctx->pc == 0x15E634u) {
        ctx->pc = 0x15E634u;
            // 0x15e634: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x15E638u;
        goto label_15e638;
    }
    ctx->pc = 0x15E630u;
    SET_GPR_U32(ctx, 31, 0x15E638u);
    ctx->pc = 0x15E634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E630u;
            // 0x15e634: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAE0u;
    if (runtime->hasFunction(0x15EAE0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E638u; }
        if (ctx->pc != 0x15E638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAE0_0x15eae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E638u; }
        if (ctx->pc != 0x15E638u) { return; }
    }
    ctx->pc = 0x15E638u;
label_15e638:
    // 0x15e638: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15e638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15e63c:
    // 0x15e63c: 0xc057aac  jal         func_15EAB0
label_15e640:
    if (ctx->pc == 0x15E640u) {
        ctx->pc = 0x15E640u;
            // 0x15e640: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->pc = 0x15E644u;
        goto label_15e644;
    }
    ctx->pc = 0x15E63Cu;
    SET_GPR_U32(ctx, 31, 0x15E644u);
    ctx->pc = 0x15E640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E63Cu;
            // 0x15e640: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAB0u;
    if (runtime->hasFunction(0x15EAB0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E644u; }
        if (ctx->pc != 0x15E644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAB0_0x15eab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E644u; }
        if (ctx->pc != 0x15E644u) { return; }
    }
    ctx->pc = 0x15E644u;
label_15e644:
    // 0x15e644: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_15e648:
    if (ctx->pc == 0x15E648u) {
        ctx->pc = 0x15E64Cu;
        goto label_15e64c;
    }
    ctx->pc = 0x15E644u;
    {
        const bool branch_taken_0x15e644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e644) {
            ctx->pc = 0x15E618u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15e618;
        }
    }
    ctx->pc = 0x15E64Cu;
label_15e64c:
    // 0x15e64c: 0x0  nop
    ctx->pc = 0x15e64cu;
    // NOP
label_15e650:
    // 0x15e650: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x15e650u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15e654:
    // 0x15e654: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15e654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15e658:
    // 0x15e658: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15e658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15e65c:
    // 0x15e65c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15e65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15e660:
    // 0x15e660: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15e660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15e664:
    // 0x15e664: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x15e664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_15e668:
    // 0x15e668: 0x320f809  jalr        $t9
label_15e66c:
    if (ctx->pc == 0x15E66Cu) {
        ctx->pc = 0x15E66Cu;
            // 0x15e66c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x15E670u;
        goto label_15e670;
    }
    ctx->pc = 0x15E668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15E670u);
        ctx->pc = 0x15E66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E668u;
            // 0x15e66c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15E670u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15E670u; }
            if (ctx->pc != 0x15E670u) { return; }
        }
        }
    }
    ctx->pc = 0x15E670u;
label_15e670:
    // 0x15e670: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
label_15e674:
    if (ctx->pc == 0x15E674u) {
        ctx->pc = 0x15E678u;
        goto label_15e678;
    }
    ctx->pc = 0x15E670u;
    {
        const bool branch_taken_0x15e670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e670) {
            ctx->pc = 0x15E570u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15e570;
        }
    }
    ctx->pc = 0x15E678u;
label_15e678:
    // 0x15e678: 0xc0579fc  jal         func_15E7F0
label_15e67c:
    if (ctx->pc == 0x15E67Cu) {
        ctx->pc = 0x15E67Cu;
            // 0x15e67c: 0x27a40094  addiu       $a0, $sp, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
        ctx->pc = 0x15E680u;
        goto label_15e680;
    }
    ctx->pc = 0x15E678u;
    SET_GPR_U32(ctx, 31, 0x15E680u);
    ctx->pc = 0x15E67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E678u;
            // 0x15e67c: 0x27a40094  addiu       $a0, $sp, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E7F0u;
    if (runtime->hasFunction(0x15E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x15E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E680u; }
        if (ctx->pc != 0x15E680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E7F0_0x15e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E680u; }
        if (ctx->pc != 0x15E680u) { return; }
    }
    ctx->pc = 0x15E680u;
label_15e680:
    // 0x15e680: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15e680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15e684:
    // 0x15e684: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15e684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_15e688:
    // 0x15e688: 0xc0579f8  jal         func_15E7E0
label_15e68c:
    if (ctx->pc == 0x15E68Cu) {
        ctx->pc = 0x15E68Cu;
            // 0x15e68c: 0x268500c4  addiu       $a1, $s4, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 196));
        ctx->pc = 0x15E690u;
        goto label_15e690;
    }
    ctx->pc = 0x15E688u;
    SET_GPR_U32(ctx, 31, 0x15E690u);
    ctx->pc = 0x15E68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E688u;
            // 0x15e68c: 0x268500c4  addiu       $a1, $s4, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E7E0u;
    if (runtime->hasFunction(0x15E7E0u)) {
        auto targetFn = runtime->lookupFunction(0x15E7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E690u; }
        if (ctx->pc != 0x15E690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E7E0_0x15e7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E690u; }
        if (ctx->pc != 0x15E690u) { return; }
    }
    ctx->pc = 0x15E690u;
label_15e690:
    // 0x15e690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15e690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15e694:
    // 0x15e694: 0xc0579f0  jal         func_15E7C0
label_15e698:
    if (ctx->pc == 0x15E698u) {
        ctx->pc = 0x15E698u;
            // 0x15e698: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x15E69Cu;
        goto label_15e69c;
    }
    ctx->pc = 0x15E694u;
    SET_GPR_U32(ctx, 31, 0x15E69Cu);
    ctx->pc = 0x15E698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E694u;
            // 0x15e698: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E7C0u;
    if (runtime->hasFunction(0x15E7C0u)) {
        auto targetFn = runtime->lookupFunction(0x15E7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E69Cu; }
        if (ctx->pc != 0x15E69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E7C0_0x15e7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E69Cu; }
        if (ctx->pc != 0x15E69Cu) { return; }
    }
    ctx->pc = 0x15E69Cu;
label_15e69c:
    // 0x15e69c: 0x1440ff95  bnez        $v0, . + 4 + (-0x6B << 2)
label_15e6a0:
    if (ctx->pc == 0x15E6A0u) {
        ctx->pc = 0x15E6A4u;
        goto label_15e6a4;
    }
    ctx->pc = 0x15E69Cu;
    {
        const bool branch_taken_0x15e69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e69c) {
            ctx->pc = 0x15E4F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15e4f4;
        }
    }
    ctx->pc = 0x15E6A4u;
label_15e6a4:
    // 0x15e6a4: 0x1000003a  b           . + 4 + (0x3A << 2)
label_15e6a8:
    if (ctx->pc == 0x15E6A8u) {
        ctx->pc = 0x15E6A8u;
            // 0x15e6a8: 0xae80011c  sw          $zero, 0x11C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 284), GPR_U32(ctx, 0));
        ctx->pc = 0x15E6ACu;
        goto label_15e6ac;
    }
    ctx->pc = 0x15E6A4u;
    {
        const bool branch_taken_0x15e6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E6A4u;
            // 0x15e6a8: 0xae80011c  sw          $zero, 0x11C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e6a4) {
            ctx->pc = 0x15E790u;
            goto label_15e790;
        }
    }
    ctx->pc = 0x15E6ACu;
label_15e6ac:
    // 0x15e6ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15e6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e6b0:
    // 0x15e6b0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_15e6b4:
    if (ctx->pc == 0x15E6B4u) {
        ctx->pc = 0x15E6B4u;
            // 0x15e6b4: 0x27a4007c  addiu       $a0, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->pc = 0x15E6B8u;
        goto label_15e6b8;
    }
    ctx->pc = 0x15E6B0u;
    {
        const bool branch_taken_0x15e6b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15e6b0) {
            ctx->pc = 0x15E6B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E6B0u;
            // 0x15e6b4: 0x27a4007c  addiu       $a0, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E6C4u;
            goto label_15e6c4;
        }
    }
    ctx->pc = 0x15E6B8u;
label_15e6b8:
    // 0x15e6b8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x15e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_15e6bc:
    // 0x15e6bc: 0x10000031  b           . + 4 + (0x31 << 2)
label_15e6c0:
    if (ctx->pc == 0x15E6C0u) {
        ctx->pc = 0x15E6C0u;
            // 0x15e6c0: 0xa2820124  sb          $v0, 0x124($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 292), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x15E6C4u;
        goto label_15e6c4;
    }
    ctx->pc = 0x15E6BCu;
    {
        const bool branch_taken_0x15e6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E6BCu;
            // 0x15e6c0: 0xa2820124  sb          $v0, 0x124($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 292), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e6bc) {
            ctx->pc = 0x15E784u;
            goto label_15e784;
        }
    }
    ctx->pc = 0x15E6C4u;
label_15e6c4:
    // 0x15e6c4: 0xc057b28  jal         func_15ECA0
label_15e6c8:
    if (ctx->pc == 0x15E6C8u) {
        ctx->pc = 0x15E6C8u;
            // 0x15e6c8: 0x268500dc  addiu       $a1, $s4, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 220));
        ctx->pc = 0x15E6CCu;
        goto label_15e6cc;
    }
    ctx->pc = 0x15E6C4u;
    SET_GPR_U32(ctx, 31, 0x15E6CCu);
    ctx->pc = 0x15E6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E6C4u;
            // 0x15e6c8: 0x268500dc  addiu       $a1, $s4, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 220));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ECA0u;
    if (runtime->hasFunction(0x15ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x15ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E6CCu; }
        if (ctx->pc != 0x15E6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ECA0_0x15eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E6CCu; }
        if (ctx->pc != 0x15E6CCu) { return; }
    }
    ctx->pc = 0x15E6CCu;
label_15e6cc:
    // 0x15e6cc: 0xc057b24  jal         func_15EC90
label_15e6d0:
    if (ctx->pc == 0x15E6D0u) {
        ctx->pc = 0x15E6D0u;
            // 0x15e6d0: 0x27a4007c  addiu       $a0, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->pc = 0x15E6D4u;
        goto label_15e6d4;
    }
    ctx->pc = 0x15E6CCu;
    SET_GPR_U32(ctx, 31, 0x15E6D4u);
    ctx->pc = 0x15E6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E6CCu;
            // 0x15e6d0: 0x27a4007c  addiu       $a0, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EC90u;
    if (runtime->hasFunction(0x15EC90u)) {
        auto targetFn = runtime->lookupFunction(0x15EC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E6D4u; }
        if (ctx->pc != 0x15E6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EC90_0x15ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E6D4u; }
        if (ctx->pc != 0x15E6D4u) { return; }
    }
    ctx->pc = 0x15E6D4u;
label_15e6d4:
    // 0x15e6d4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x15e6d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15e6d8:
    // 0x15e6d8: 0xc057ab8  jal         func_15EAE0
label_15e6dc:
    if (ctx->pc == 0x15E6DCu) {
        ctx->pc = 0x15E6DCu;
            // 0x15e6dc: 0x27a4007c  addiu       $a0, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->pc = 0x15E6E0u;
        goto label_15e6e0;
    }
    ctx->pc = 0x15E6D8u;
    SET_GPR_U32(ctx, 31, 0x15E6E0u);
    ctx->pc = 0x15E6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E6D8u;
            // 0x15e6dc: 0x27a4007c  addiu       $a0, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAE0u;
    if (runtime->hasFunction(0x15EAE0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E6E0u; }
        if (ctx->pc != 0x15E6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAE0_0x15eae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E6E0u; }
        if (ctx->pc != 0x15E6E0u) { return; }
    }
    ctx->pc = 0x15E6E0u;
label_15e6e0:
    // 0x15e6e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15e6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15e6e4:
    // 0x15e6e4: 0xc057a34  jal         func_15E8D0
label_15e6e8:
    if (ctx->pc == 0x15E6E8u) {
        ctx->pc = 0x15E6E8u;
            // 0x15e6e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E6ECu;
        goto label_15e6ec;
    }
    ctx->pc = 0x15E6E4u;
    SET_GPR_U32(ctx, 31, 0x15E6ECu);
    ctx->pc = 0x15E6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E6E4u;
            // 0x15e6e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E8D0u;
    if (runtime->hasFunction(0x15E8D0u)) {
        auto targetFn = runtime->lookupFunction(0x15E8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E6ECu; }
        if (ctx->pc != 0x15E6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E8D0_0x15e8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E6ECu; }
        if (ctx->pc != 0x15E6ECu) { return; }
    }
    ctx->pc = 0x15E6ECu;
label_15e6ec:
    // 0x15e6ec: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x15e6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_15e6f0:
    // 0x15e6f0: 0xc057ab4  jal         func_15EAD0
label_15e6f4:
    if (ctx->pc == 0x15E6F4u) {
        ctx->pc = 0x15E6F4u;
            // 0x15e6f4: 0x268500dc  addiu       $a1, $s4, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 220));
        ctx->pc = 0x15E6F8u;
        goto label_15e6f8;
    }
    ctx->pc = 0x15E6F0u;
    SET_GPR_U32(ctx, 31, 0x15E6F8u);
    ctx->pc = 0x15E6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E6F0u;
            // 0x15e6f4: 0x268500dc  addiu       $a1, $s4, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 220));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAD0u;
    if (runtime->hasFunction(0x15EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E6F8u; }
        if (ctx->pc != 0x15E6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAD0_0x15ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E6F8u; }
        if (ctx->pc != 0x15E6F8u) { return; }
    }
    ctx->pc = 0x15E6F8u;
label_15e6f8:
    // 0x15e6f8: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x15e6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_15e6fc:
    // 0x15e6fc: 0xc057aac  jal         func_15EAB0
label_15e700:
    if (ctx->pc == 0x15E700u) {
        ctx->pc = 0x15E700u;
            // 0x15e700: 0x27a50074  addiu       $a1, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->pc = 0x15E704u;
        goto label_15e704;
    }
    ctx->pc = 0x15E6FCu;
    SET_GPR_U32(ctx, 31, 0x15E704u);
    ctx->pc = 0x15E700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E6FCu;
            // 0x15e700: 0x27a50074  addiu       $a1, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAB0u;
    if (runtime->hasFunction(0x15EAB0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E704u; }
        if (ctx->pc != 0x15E704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAB0_0x15eab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E704u; }
        if (ctx->pc != 0x15E704u) { return; }
    }
    ctx->pc = 0x15E704u;
label_15e704:
    // 0x15e704: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_15e708:
    if (ctx->pc == 0x15E708u) {
        ctx->pc = 0x15E70Cu;
        goto label_15e70c;
    }
    ctx->pc = 0x15E704u;
    {
        const bool branch_taken_0x15e704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e704) {
            ctx->pc = 0x15E6CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15e6cc;
        }
    }
    ctx->pc = 0x15E70Cu;
label_15e70c:
    // 0x15e70c: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x15e70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_15e710:
    // 0x15e710: 0xc057b28  jal         func_15ECA0
label_15e714:
    if (ctx->pc == 0x15E714u) {
        ctx->pc = 0x15E714u;
            // 0x15e714: 0x26850108  addiu       $a1, $s4, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 264));
        ctx->pc = 0x15E718u;
        goto label_15e718;
    }
    ctx->pc = 0x15E710u;
    SET_GPR_U32(ctx, 31, 0x15E718u);
    ctx->pc = 0x15E714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E710u;
            // 0x15e714: 0x26850108  addiu       $a1, $s4, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ECA0u;
    if (runtime->hasFunction(0x15ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x15ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E718u; }
        if (ctx->pc != 0x15E718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ECA0_0x15eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E718u; }
        if (ctx->pc != 0x15E718u) { return; }
    }
    ctx->pc = 0x15E718u;
label_15e718:
    // 0x15e718: 0xc057b24  jal         func_15EC90
label_15e71c:
    if (ctx->pc == 0x15E71Cu) {
        ctx->pc = 0x15E71Cu;
            // 0x15e71c: 0x27a40078  addiu       $a0, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->pc = 0x15E720u;
        goto label_15e720;
    }
    ctx->pc = 0x15E718u;
    SET_GPR_U32(ctx, 31, 0x15E720u);
    ctx->pc = 0x15E71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E718u;
            // 0x15e71c: 0x27a40078  addiu       $a0, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EC90u;
    if (runtime->hasFunction(0x15EC90u)) {
        auto targetFn = runtime->lookupFunction(0x15EC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E720u; }
        if (ctx->pc != 0x15E720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EC90_0x15ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E720u; }
        if (ctx->pc != 0x15E720u) { return; }
    }
    ctx->pc = 0x15E720u;
label_15e720:
    // 0x15e720: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15e720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15e724:
    // 0x15e724: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_15e728:
    if (ctx->pc == 0x15E728u) {
        ctx->pc = 0x15E72Cu;
        goto label_15e72c;
    }
    ctx->pc = 0x15E724u;
    {
        const bool branch_taken_0x15e724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e724) {
            ctx->pc = 0x15E740u;
            goto label_15e740;
        }
    }
    ctx->pc = 0x15E72Cu;
label_15e72c:
    // 0x15e72c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x15e72cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15e730:
    // 0x15e730: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x15e730u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_15e734:
    // 0x15e734: 0x320f809  jalr        $t9
label_15e738:
    if (ctx->pc == 0x15E738u) {
        ctx->pc = 0x15E738u;
            // 0x15e738: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x15E73Cu;
        goto label_15e73c;
    }
    ctx->pc = 0x15E734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15E73Cu);
        ctx->pc = 0x15E738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E734u;
            // 0x15e738: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15E73Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15E73Cu; }
            if (ctx->pc != 0x15E73Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15E73Cu;
label_15e73c:
    // 0x15e73c: 0x0  nop
    ctx->pc = 0x15e73cu;
    // NOP
label_15e740:
    // 0x15e740: 0xc057ab8  jal         func_15EAE0
label_15e744:
    if (ctx->pc == 0x15E744u) {
        ctx->pc = 0x15E744u;
            // 0x15e744: 0x27a40078  addiu       $a0, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->pc = 0x15E748u;
        goto label_15e748;
    }
    ctx->pc = 0x15E740u;
    SET_GPR_U32(ctx, 31, 0x15E748u);
    ctx->pc = 0x15E744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E740u;
            // 0x15e744: 0x27a40078  addiu       $a0, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAE0u;
    if (runtime->hasFunction(0x15EAE0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E748u; }
        if (ctx->pc != 0x15E748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAE0_0x15eae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E748u; }
        if (ctx->pc != 0x15E748u) { return; }
    }
    ctx->pc = 0x15E748u;
label_15e748:
    // 0x15e748: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15e748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15e74c:
    // 0x15e74c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15e74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15e750:
    // 0x15e750: 0xc057ab4  jal         func_15EAD0
label_15e754:
    if (ctx->pc == 0x15E754u) {
        ctx->pc = 0x15E754u;
            // 0x15e754: 0x26850108  addiu       $a1, $s4, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 264));
        ctx->pc = 0x15E758u;
        goto label_15e758;
    }
    ctx->pc = 0x15E750u;
    SET_GPR_U32(ctx, 31, 0x15E758u);
    ctx->pc = 0x15E754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E750u;
            // 0x15e754: 0x26850108  addiu       $a1, $s4, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAD0u;
    if (runtime->hasFunction(0x15EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E758u; }
        if (ctx->pc != 0x15E758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAD0_0x15ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E758u; }
        if (ctx->pc != 0x15E758u) { return; }
    }
    ctx->pc = 0x15E758u;
label_15e758:
    // 0x15e758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15e758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15e75c:
    // 0x15e75c: 0xc057aac  jal         func_15EAB0
label_15e760:
    if (ctx->pc == 0x15E760u) {
        ctx->pc = 0x15E760u;
            // 0x15e760: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x15E764u;
        goto label_15e764;
    }
    ctx->pc = 0x15E75Cu;
    SET_GPR_U32(ctx, 31, 0x15E764u);
    ctx->pc = 0x15E760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E75Cu;
            // 0x15e760: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAB0u;
    if (runtime->hasFunction(0x15EAB0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E764u; }
        if (ctx->pc != 0x15E764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAB0_0x15eab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E764u; }
        if (ctx->pc != 0x15E764u) { return; }
    }
    ctx->pc = 0x15E764u;
label_15e764:
    // 0x15e764: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_15e768:
    if (ctx->pc == 0x15E768u) {
        ctx->pc = 0x15E76Cu;
        goto label_15e76c;
    }
    ctx->pc = 0x15E764u;
    {
        const bool branch_taken_0x15e764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e764) {
            ctx->pc = 0x15E718u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15e718;
        }
    }
    ctx->pc = 0x15E76Cu;
label_15e76c:
    // 0x15e76c: 0xc057a9c  jal         func_15EA70
label_15e770:
    if (ctx->pc == 0x15E770u) {
        ctx->pc = 0x15E770u;
            // 0x15e770: 0x26840108  addiu       $a0, $s4, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 264));
        ctx->pc = 0x15E774u;
        goto label_15e774;
    }
    ctx->pc = 0x15E76Cu;
    SET_GPR_U32(ctx, 31, 0x15E774u);
    ctx->pc = 0x15E770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E76Cu;
            // 0x15e770: 0x26840108  addiu       $a0, $s4, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EA70u;
    if (runtime->hasFunction(0x15EA70u)) {
        auto targetFn = runtime->lookupFunction(0x15EA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E774u; }
        if (ctx->pc != 0x15E774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EA70_0x15ea70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E774u; }
        if (ctx->pc != 0x15E774u) { return; }
    }
    ctx->pc = 0x15E774u;
label_15e774:
    // 0x15e774: 0xa2800124  sb          $zero, 0x124($s4)
    ctx->pc = 0x15e774u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 292), (uint8_t)GPR_U32(ctx, 0));
label_15e778:
    // 0x15e778: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x15e778u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_15e77c:
    // 0x15e77c: 0x10000002  b           . + 4 + (0x2 << 2)
label_15e780:
    if (ctx->pc == 0x15E780u) {
        ctx->pc = 0x15E780u;
            // 0x15e780: 0xae800120  sw          $zero, 0x120($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 0));
        ctx->pc = 0x15E784u;
        goto label_15e784;
    }
    ctx->pc = 0x15E77Cu;
    {
        const bool branch_taken_0x15e77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E77Cu;
            // 0x15e780: 0xae800120  sw          $zero, 0x120($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e77c) {
            ctx->pc = 0x15E788u;
            goto label_15e788;
        }
    }
    ctx->pc = 0x15E784u;
label_15e784:
    // 0x15e784: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15e784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e788:
    // 0x15e788: 0x10000003  b           . + 4 + (0x3 << 2)
label_15e78c:
    if (ctx->pc == 0x15E78Cu) {
        ctx->pc = 0x15E78Cu;
            // 0x15e78c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x15E790u;
        goto label_15e790;
    }
    ctx->pc = 0x15E788u;
    {
        const bool branch_taken_0x15e788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E788u;
            // 0x15e78c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e788) {
            ctx->pc = 0x15E798u;
            goto label_15e798;
        }
    }
    ctx->pc = 0x15E790u;
label_15e790:
    // 0x15e790: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15e790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e794:
    // 0x15e794: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15e794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_15e798:
    // 0x15e798: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15e798u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15e79c:
    // 0x15e79c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15e79cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15e7a0:
    // 0x15e7a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15e7a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15e7a4:
    // 0x15e7a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15e7a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15e7a8:
    // 0x15e7a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e7a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15e7ac:
    // 0x15e7ac: 0x3e00008  jr          $ra
label_15e7b0:
    if (ctx->pc == 0x15E7B0u) {
        ctx->pc = 0x15E7B0u;
            // 0x15e7b0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x15E7B4u;
        goto label_15e7b4;
    }
    ctx->pc = 0x15E7ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E7ACu;
            // 0x15e7b0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15E7B4u;
label_15e7b4:
    // 0x15e7b4: 0x0  nop
    ctx->pc = 0x15e7b4u;
    // NOP
label_15e7b8:
    // 0x15e7b8: 0x0  nop
    ctx->pc = 0x15e7b8u;
    // NOP
label_15e7bc:
    // 0x15e7bc: 0x0  nop
    ctx->pc = 0x15e7bcu;
    // NOP
}
