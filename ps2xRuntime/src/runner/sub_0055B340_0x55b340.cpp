#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055B340
// Address: 0x55b340 - 0x55b880
void sub_0055B340_0x55b340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055B340_0x55b340");
#endif

    switch (ctx->pc) {
        case 0x55b340u: goto label_55b340;
        case 0x55b344u: goto label_55b344;
        case 0x55b348u: goto label_55b348;
        case 0x55b34cu: goto label_55b34c;
        case 0x55b350u: goto label_55b350;
        case 0x55b354u: goto label_55b354;
        case 0x55b358u: goto label_55b358;
        case 0x55b35cu: goto label_55b35c;
        case 0x55b360u: goto label_55b360;
        case 0x55b364u: goto label_55b364;
        case 0x55b368u: goto label_55b368;
        case 0x55b36cu: goto label_55b36c;
        case 0x55b370u: goto label_55b370;
        case 0x55b374u: goto label_55b374;
        case 0x55b378u: goto label_55b378;
        case 0x55b37cu: goto label_55b37c;
        case 0x55b380u: goto label_55b380;
        case 0x55b384u: goto label_55b384;
        case 0x55b388u: goto label_55b388;
        case 0x55b38cu: goto label_55b38c;
        case 0x55b390u: goto label_55b390;
        case 0x55b394u: goto label_55b394;
        case 0x55b398u: goto label_55b398;
        case 0x55b39cu: goto label_55b39c;
        case 0x55b3a0u: goto label_55b3a0;
        case 0x55b3a4u: goto label_55b3a4;
        case 0x55b3a8u: goto label_55b3a8;
        case 0x55b3acu: goto label_55b3ac;
        case 0x55b3b0u: goto label_55b3b0;
        case 0x55b3b4u: goto label_55b3b4;
        case 0x55b3b8u: goto label_55b3b8;
        case 0x55b3bcu: goto label_55b3bc;
        case 0x55b3c0u: goto label_55b3c0;
        case 0x55b3c4u: goto label_55b3c4;
        case 0x55b3c8u: goto label_55b3c8;
        case 0x55b3ccu: goto label_55b3cc;
        case 0x55b3d0u: goto label_55b3d0;
        case 0x55b3d4u: goto label_55b3d4;
        case 0x55b3d8u: goto label_55b3d8;
        case 0x55b3dcu: goto label_55b3dc;
        case 0x55b3e0u: goto label_55b3e0;
        case 0x55b3e4u: goto label_55b3e4;
        case 0x55b3e8u: goto label_55b3e8;
        case 0x55b3ecu: goto label_55b3ec;
        case 0x55b3f0u: goto label_55b3f0;
        case 0x55b3f4u: goto label_55b3f4;
        case 0x55b3f8u: goto label_55b3f8;
        case 0x55b3fcu: goto label_55b3fc;
        case 0x55b400u: goto label_55b400;
        case 0x55b404u: goto label_55b404;
        case 0x55b408u: goto label_55b408;
        case 0x55b40cu: goto label_55b40c;
        case 0x55b410u: goto label_55b410;
        case 0x55b414u: goto label_55b414;
        case 0x55b418u: goto label_55b418;
        case 0x55b41cu: goto label_55b41c;
        case 0x55b420u: goto label_55b420;
        case 0x55b424u: goto label_55b424;
        case 0x55b428u: goto label_55b428;
        case 0x55b42cu: goto label_55b42c;
        case 0x55b430u: goto label_55b430;
        case 0x55b434u: goto label_55b434;
        case 0x55b438u: goto label_55b438;
        case 0x55b43cu: goto label_55b43c;
        case 0x55b440u: goto label_55b440;
        case 0x55b444u: goto label_55b444;
        case 0x55b448u: goto label_55b448;
        case 0x55b44cu: goto label_55b44c;
        case 0x55b450u: goto label_55b450;
        case 0x55b454u: goto label_55b454;
        case 0x55b458u: goto label_55b458;
        case 0x55b45cu: goto label_55b45c;
        case 0x55b460u: goto label_55b460;
        case 0x55b464u: goto label_55b464;
        case 0x55b468u: goto label_55b468;
        case 0x55b46cu: goto label_55b46c;
        case 0x55b470u: goto label_55b470;
        case 0x55b474u: goto label_55b474;
        case 0x55b478u: goto label_55b478;
        case 0x55b47cu: goto label_55b47c;
        case 0x55b480u: goto label_55b480;
        case 0x55b484u: goto label_55b484;
        case 0x55b488u: goto label_55b488;
        case 0x55b48cu: goto label_55b48c;
        case 0x55b490u: goto label_55b490;
        case 0x55b494u: goto label_55b494;
        case 0x55b498u: goto label_55b498;
        case 0x55b49cu: goto label_55b49c;
        case 0x55b4a0u: goto label_55b4a0;
        case 0x55b4a4u: goto label_55b4a4;
        case 0x55b4a8u: goto label_55b4a8;
        case 0x55b4acu: goto label_55b4ac;
        case 0x55b4b0u: goto label_55b4b0;
        case 0x55b4b4u: goto label_55b4b4;
        case 0x55b4b8u: goto label_55b4b8;
        case 0x55b4bcu: goto label_55b4bc;
        case 0x55b4c0u: goto label_55b4c0;
        case 0x55b4c4u: goto label_55b4c4;
        case 0x55b4c8u: goto label_55b4c8;
        case 0x55b4ccu: goto label_55b4cc;
        case 0x55b4d0u: goto label_55b4d0;
        case 0x55b4d4u: goto label_55b4d4;
        case 0x55b4d8u: goto label_55b4d8;
        case 0x55b4dcu: goto label_55b4dc;
        case 0x55b4e0u: goto label_55b4e0;
        case 0x55b4e4u: goto label_55b4e4;
        case 0x55b4e8u: goto label_55b4e8;
        case 0x55b4ecu: goto label_55b4ec;
        case 0x55b4f0u: goto label_55b4f0;
        case 0x55b4f4u: goto label_55b4f4;
        case 0x55b4f8u: goto label_55b4f8;
        case 0x55b4fcu: goto label_55b4fc;
        case 0x55b500u: goto label_55b500;
        case 0x55b504u: goto label_55b504;
        case 0x55b508u: goto label_55b508;
        case 0x55b50cu: goto label_55b50c;
        case 0x55b510u: goto label_55b510;
        case 0x55b514u: goto label_55b514;
        case 0x55b518u: goto label_55b518;
        case 0x55b51cu: goto label_55b51c;
        case 0x55b520u: goto label_55b520;
        case 0x55b524u: goto label_55b524;
        case 0x55b528u: goto label_55b528;
        case 0x55b52cu: goto label_55b52c;
        case 0x55b530u: goto label_55b530;
        case 0x55b534u: goto label_55b534;
        case 0x55b538u: goto label_55b538;
        case 0x55b53cu: goto label_55b53c;
        case 0x55b540u: goto label_55b540;
        case 0x55b544u: goto label_55b544;
        case 0x55b548u: goto label_55b548;
        case 0x55b54cu: goto label_55b54c;
        case 0x55b550u: goto label_55b550;
        case 0x55b554u: goto label_55b554;
        case 0x55b558u: goto label_55b558;
        case 0x55b55cu: goto label_55b55c;
        case 0x55b560u: goto label_55b560;
        case 0x55b564u: goto label_55b564;
        case 0x55b568u: goto label_55b568;
        case 0x55b56cu: goto label_55b56c;
        case 0x55b570u: goto label_55b570;
        case 0x55b574u: goto label_55b574;
        case 0x55b578u: goto label_55b578;
        case 0x55b57cu: goto label_55b57c;
        case 0x55b580u: goto label_55b580;
        case 0x55b584u: goto label_55b584;
        case 0x55b588u: goto label_55b588;
        case 0x55b58cu: goto label_55b58c;
        case 0x55b590u: goto label_55b590;
        case 0x55b594u: goto label_55b594;
        case 0x55b598u: goto label_55b598;
        case 0x55b59cu: goto label_55b59c;
        case 0x55b5a0u: goto label_55b5a0;
        case 0x55b5a4u: goto label_55b5a4;
        case 0x55b5a8u: goto label_55b5a8;
        case 0x55b5acu: goto label_55b5ac;
        case 0x55b5b0u: goto label_55b5b0;
        case 0x55b5b4u: goto label_55b5b4;
        case 0x55b5b8u: goto label_55b5b8;
        case 0x55b5bcu: goto label_55b5bc;
        case 0x55b5c0u: goto label_55b5c0;
        case 0x55b5c4u: goto label_55b5c4;
        case 0x55b5c8u: goto label_55b5c8;
        case 0x55b5ccu: goto label_55b5cc;
        case 0x55b5d0u: goto label_55b5d0;
        case 0x55b5d4u: goto label_55b5d4;
        case 0x55b5d8u: goto label_55b5d8;
        case 0x55b5dcu: goto label_55b5dc;
        case 0x55b5e0u: goto label_55b5e0;
        case 0x55b5e4u: goto label_55b5e4;
        case 0x55b5e8u: goto label_55b5e8;
        case 0x55b5ecu: goto label_55b5ec;
        case 0x55b5f0u: goto label_55b5f0;
        case 0x55b5f4u: goto label_55b5f4;
        case 0x55b5f8u: goto label_55b5f8;
        case 0x55b5fcu: goto label_55b5fc;
        case 0x55b600u: goto label_55b600;
        case 0x55b604u: goto label_55b604;
        case 0x55b608u: goto label_55b608;
        case 0x55b60cu: goto label_55b60c;
        case 0x55b610u: goto label_55b610;
        case 0x55b614u: goto label_55b614;
        case 0x55b618u: goto label_55b618;
        case 0x55b61cu: goto label_55b61c;
        case 0x55b620u: goto label_55b620;
        case 0x55b624u: goto label_55b624;
        case 0x55b628u: goto label_55b628;
        case 0x55b62cu: goto label_55b62c;
        case 0x55b630u: goto label_55b630;
        case 0x55b634u: goto label_55b634;
        case 0x55b638u: goto label_55b638;
        case 0x55b63cu: goto label_55b63c;
        case 0x55b640u: goto label_55b640;
        case 0x55b644u: goto label_55b644;
        case 0x55b648u: goto label_55b648;
        case 0x55b64cu: goto label_55b64c;
        case 0x55b650u: goto label_55b650;
        case 0x55b654u: goto label_55b654;
        case 0x55b658u: goto label_55b658;
        case 0x55b65cu: goto label_55b65c;
        case 0x55b660u: goto label_55b660;
        case 0x55b664u: goto label_55b664;
        case 0x55b668u: goto label_55b668;
        case 0x55b66cu: goto label_55b66c;
        case 0x55b670u: goto label_55b670;
        case 0x55b674u: goto label_55b674;
        case 0x55b678u: goto label_55b678;
        case 0x55b67cu: goto label_55b67c;
        case 0x55b680u: goto label_55b680;
        case 0x55b684u: goto label_55b684;
        case 0x55b688u: goto label_55b688;
        case 0x55b68cu: goto label_55b68c;
        case 0x55b690u: goto label_55b690;
        case 0x55b694u: goto label_55b694;
        case 0x55b698u: goto label_55b698;
        case 0x55b69cu: goto label_55b69c;
        case 0x55b6a0u: goto label_55b6a0;
        case 0x55b6a4u: goto label_55b6a4;
        case 0x55b6a8u: goto label_55b6a8;
        case 0x55b6acu: goto label_55b6ac;
        case 0x55b6b0u: goto label_55b6b0;
        case 0x55b6b4u: goto label_55b6b4;
        case 0x55b6b8u: goto label_55b6b8;
        case 0x55b6bcu: goto label_55b6bc;
        case 0x55b6c0u: goto label_55b6c0;
        case 0x55b6c4u: goto label_55b6c4;
        case 0x55b6c8u: goto label_55b6c8;
        case 0x55b6ccu: goto label_55b6cc;
        case 0x55b6d0u: goto label_55b6d0;
        case 0x55b6d4u: goto label_55b6d4;
        case 0x55b6d8u: goto label_55b6d8;
        case 0x55b6dcu: goto label_55b6dc;
        case 0x55b6e0u: goto label_55b6e0;
        case 0x55b6e4u: goto label_55b6e4;
        case 0x55b6e8u: goto label_55b6e8;
        case 0x55b6ecu: goto label_55b6ec;
        case 0x55b6f0u: goto label_55b6f0;
        case 0x55b6f4u: goto label_55b6f4;
        case 0x55b6f8u: goto label_55b6f8;
        case 0x55b6fcu: goto label_55b6fc;
        case 0x55b700u: goto label_55b700;
        case 0x55b704u: goto label_55b704;
        case 0x55b708u: goto label_55b708;
        case 0x55b70cu: goto label_55b70c;
        case 0x55b710u: goto label_55b710;
        case 0x55b714u: goto label_55b714;
        case 0x55b718u: goto label_55b718;
        case 0x55b71cu: goto label_55b71c;
        case 0x55b720u: goto label_55b720;
        case 0x55b724u: goto label_55b724;
        case 0x55b728u: goto label_55b728;
        case 0x55b72cu: goto label_55b72c;
        case 0x55b730u: goto label_55b730;
        case 0x55b734u: goto label_55b734;
        case 0x55b738u: goto label_55b738;
        case 0x55b73cu: goto label_55b73c;
        case 0x55b740u: goto label_55b740;
        case 0x55b744u: goto label_55b744;
        case 0x55b748u: goto label_55b748;
        case 0x55b74cu: goto label_55b74c;
        case 0x55b750u: goto label_55b750;
        case 0x55b754u: goto label_55b754;
        case 0x55b758u: goto label_55b758;
        case 0x55b75cu: goto label_55b75c;
        case 0x55b760u: goto label_55b760;
        case 0x55b764u: goto label_55b764;
        case 0x55b768u: goto label_55b768;
        case 0x55b76cu: goto label_55b76c;
        case 0x55b770u: goto label_55b770;
        case 0x55b774u: goto label_55b774;
        case 0x55b778u: goto label_55b778;
        case 0x55b77cu: goto label_55b77c;
        case 0x55b780u: goto label_55b780;
        case 0x55b784u: goto label_55b784;
        case 0x55b788u: goto label_55b788;
        case 0x55b78cu: goto label_55b78c;
        case 0x55b790u: goto label_55b790;
        case 0x55b794u: goto label_55b794;
        case 0x55b798u: goto label_55b798;
        case 0x55b79cu: goto label_55b79c;
        case 0x55b7a0u: goto label_55b7a0;
        case 0x55b7a4u: goto label_55b7a4;
        case 0x55b7a8u: goto label_55b7a8;
        case 0x55b7acu: goto label_55b7ac;
        case 0x55b7b0u: goto label_55b7b0;
        case 0x55b7b4u: goto label_55b7b4;
        case 0x55b7b8u: goto label_55b7b8;
        case 0x55b7bcu: goto label_55b7bc;
        case 0x55b7c0u: goto label_55b7c0;
        case 0x55b7c4u: goto label_55b7c4;
        case 0x55b7c8u: goto label_55b7c8;
        case 0x55b7ccu: goto label_55b7cc;
        case 0x55b7d0u: goto label_55b7d0;
        case 0x55b7d4u: goto label_55b7d4;
        case 0x55b7d8u: goto label_55b7d8;
        case 0x55b7dcu: goto label_55b7dc;
        case 0x55b7e0u: goto label_55b7e0;
        case 0x55b7e4u: goto label_55b7e4;
        case 0x55b7e8u: goto label_55b7e8;
        case 0x55b7ecu: goto label_55b7ec;
        case 0x55b7f0u: goto label_55b7f0;
        case 0x55b7f4u: goto label_55b7f4;
        case 0x55b7f8u: goto label_55b7f8;
        case 0x55b7fcu: goto label_55b7fc;
        case 0x55b800u: goto label_55b800;
        case 0x55b804u: goto label_55b804;
        case 0x55b808u: goto label_55b808;
        case 0x55b80cu: goto label_55b80c;
        case 0x55b810u: goto label_55b810;
        case 0x55b814u: goto label_55b814;
        case 0x55b818u: goto label_55b818;
        case 0x55b81cu: goto label_55b81c;
        case 0x55b820u: goto label_55b820;
        case 0x55b824u: goto label_55b824;
        case 0x55b828u: goto label_55b828;
        case 0x55b82cu: goto label_55b82c;
        case 0x55b830u: goto label_55b830;
        case 0x55b834u: goto label_55b834;
        case 0x55b838u: goto label_55b838;
        case 0x55b83cu: goto label_55b83c;
        case 0x55b840u: goto label_55b840;
        case 0x55b844u: goto label_55b844;
        case 0x55b848u: goto label_55b848;
        case 0x55b84cu: goto label_55b84c;
        case 0x55b850u: goto label_55b850;
        case 0x55b854u: goto label_55b854;
        case 0x55b858u: goto label_55b858;
        case 0x55b85cu: goto label_55b85c;
        case 0x55b860u: goto label_55b860;
        case 0x55b864u: goto label_55b864;
        case 0x55b868u: goto label_55b868;
        case 0x55b86cu: goto label_55b86c;
        case 0x55b870u: goto label_55b870;
        case 0x55b874u: goto label_55b874;
        case 0x55b878u: goto label_55b878;
        case 0x55b87cu: goto label_55b87c;
        default: break;
    }

    ctx->pc = 0x55b340u;

label_55b340:
    // 0x55b340: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x55b340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_55b344:
    // 0x55b344: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x55b344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_55b348:
    // 0x55b348: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x55b348u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_55b34c:
    // 0x55b34c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x55b34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_55b350:
    // 0x55b350: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x55b350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_55b354:
    // 0x55b354: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x55b354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
label_55b358:
    // 0x55b358: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x55b358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_55b35c:
    // 0x55b35c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x55b35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_55b360:
    // 0x55b360: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x55b360u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_55b364:
    // 0x55b364: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x55b364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_55b368:
    // 0x55b368: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x55b368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_55b36c:
    // 0x55b36c: 0x34454dd3  ori         $a1, $v0, 0x4DD3
    ctx->pc = 0x55b36cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
label_55b370:
    // 0x55b370: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x55b370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_55b374:
    // 0x55b374: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x55b374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_55b378:
    // 0x55b378: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x55b378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_55b37c:
    // 0x55b37c: 0x3c130067  lui         $s3, 0x67
    ctx->pc = 0x55b37cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)103 << 16));
label_55b380:
    // 0x55b380: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x55b380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_55b384:
    // 0x55b384: 0x3c120064  lui         $s2, 0x64
    ctx->pc = 0x55b384u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)100 << 16));
label_55b388:
    // 0x55b388: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x55b388u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_55b38c:
    // 0x55b38c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x55b38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_55b390:
    // 0x55b390: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x55b390u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_55b394:
    // 0x55b394: 0x26739bc0  addiu       $s3, $s3, -0x6440
    ctx->pc = 0x55b394u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941632));
label_55b398:
    // 0x55b398: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x55b398u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_55b39c:
    // 0x55b39c: 0x26522100  addiu       $s2, $s2, 0x2100
    ctx->pc = 0x55b39cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8448));
label_55b3a0:
    // 0x55b3a0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x55b3a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_55b3a4:
    // 0x55b3a4: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x55b3a4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
label_55b3a8:
    // 0x55b3a8: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x55b3a8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_55b3ac:
    // 0x55b3ac: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x55b3acu;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
label_55b3b0:
    // 0x55b3b0: 0x46007d06  mov.s       $f20, $f15
    ctx->pc = 0x55b3b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[15]);
label_55b3b4:
    // 0x55b3b4: 0x3010  mfhi        $a2
    ctx->pc = 0x55b3b4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_55b3b8:
    // 0x55b3b8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x55b3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_55b3bc:
    // 0x55b3bc: 0xa40019  multu       $a1, $a0
    ctx->pc = 0x55b3bcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_55b3c0:
    // 0x55b3c0: 0x30d7ffff  andi        $s7, $a2, 0xFFFF
    ctx->pc = 0x55b3c0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_55b3c4:
    // 0x55b3c4: 0x0  nop
    ctx->pc = 0x55b3c4u;
    // NOP
label_55b3c8:
    // 0x55b3c8: 0x2010  mfhi        $a0
    ctx->pc = 0x55b3c8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_55b3cc:
    // 0x55b3cc: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x55b3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
label_55b3d0:
    // 0x55b3d0: 0x440019  multu       $v0, $a0
    ctx->pc = 0x55b3d0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_55b3d4:
    // 0x55b3d4: 0x1010  mfhi        $v0
    ctx->pc = 0x55b3d4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_55b3d8:
    // 0x55b3d8: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x55b3d8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_55b3dc:
    // 0x55b3dc: 0x28142  srl         $s0, $v0, 5
    ctx->pc = 0x55b3dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_55b3e0:
    // 0x55b3e0: 0x2a010100  slti        $at, $s0, 0x100
    ctx->pc = 0x55b3e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
label_55b3e4:
    // 0x55b3e4: 0x1010  mfhi        $v0
    ctx->pc = 0x55b3e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_55b3e8:
    // 0x55b3e8: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_55b3ec:
    if (ctx->pc == 0x55B3ECu) {
        ctx->pc = 0x55B3ECu;
            // 0x55b3ec: 0x305600ff  andi        $s6, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x55B3F0u;
        goto label_55b3f0;
    }
    ctx->pc = 0x55B3E8u;
    {
        const bool branch_taken_0x55b3e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x55B3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55B3E8u;
            // 0x55b3ec: 0x305600ff  andi        $s6, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x55b3e8) {
            ctx->pc = 0x55B3FCu;
            goto label_55b3fc;
        }
    }
    ctx->pc = 0x55B3F0u;
label_55b3f0:
    // 0x55b3f0: 0x241000ff  addiu       $s0, $zero, 0xFF
    ctx->pc = 0x55b3f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_55b3f4:
    // 0x55b3f4: 0x641703e7  daddiu      $s7, $zero, 0x3E7
    ctx->pc = 0x55b3f4u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)999);
label_55b3f8:
    // 0x55b3f8: 0x6416003b  daddiu      $s6, $zero, 0x3B
    ctx->pc = 0x55b3f8u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)59);
label_55b3fc:
    // 0x55b3fc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x55b3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_55b400:
    // 0x55b400: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x55b400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_55b404:
    // 0x55b404: 0x8c7489e0  lw          $s4, -0x7620($v1)
    ctx->pc = 0x55b404u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_55b408:
    // 0x55b408: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x55b408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_55b40c:
    // 0x55b40c: 0xc0506ac  jal         func_141AB0
label_55b410:
    if (ctx->pc == 0x55B410u) {
        ctx->pc = 0x55B410u;
            // 0x55b410: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55B414u;
        goto label_55b414;
    }
    ctx->pc = 0x55B40Cu;
    SET_GPR_U32(ctx, 31, 0x55B414u);
    ctx->pc = 0x55B410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55B40Cu;
            // 0x55b410: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B414u; }
        if (ctx->pc != 0x55B414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B414u; }
        if (ctx->pc != 0x55B414u) { return; }
    }
    ctx->pc = 0x55B414u;
label_55b414:
    // 0x55b414: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x55b414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_55b418:
    // 0x55b418: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x55b418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55b41c:
    // 0x55b41c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x55b41cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_55b420:
    // 0x55b420: 0x320f809  jalr        $t9
label_55b424:
    if (ctx->pc == 0x55B424u) {
        ctx->pc = 0x55B424u;
            // 0x55b424: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x55B428u;
        goto label_55b428;
    }
    ctx->pc = 0x55B420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55B428u);
        ctx->pc = 0x55B424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55B420u;
            // 0x55b424: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55B428u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55B428u; }
            if (ctx->pc != 0x55B428u) { return; }
        }
        }
    }
    ctx->pc = 0x55B428u;
label_55b428:
    // 0x55b428: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x55b428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_55b42c:
    // 0x55b42c: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x55b42cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_55b430:
    // 0x55b430: 0x321100ff  andi        $s1, $s0, 0xFF
    ctx->pc = 0x55b430u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_55b434:
    // 0x55b434: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x55b434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_55b438:
    // 0x55b438: 0x510018  mult        $zero, $v0, $s1
    ctx->pc = 0x55b438u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_55b43c:
    // 0x55b43c: 0x112fc2  srl         $a1, $s1, 31
    ctx->pc = 0x55b43cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_55b440:
    // 0x55b440: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55b440u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b444:
    // 0x55b444: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55b444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55b448:
    // 0x55b448: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55b448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55b44c:
    // 0x55b44c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x55b44cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_55b450:
    // 0x55b450: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55b450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55b454:
    // 0x55b454: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x55b454u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_55b458:
    // 0x55b458: 0x1810  mfhi        $v1
    ctx->pc = 0x55b458u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_55b45c:
    // 0x55b45c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x55b45cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_55b460:
    // 0x55b460: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x55b460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_55b464:
    // 0x55b464: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55b464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b468:
    // 0x55b468: 0x2463000d  addiu       $v1, $v1, 0xD
    ctx->pc = 0x55b468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13));
label_55b46c:
    // 0x55b46c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55b46cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55b470:
    // 0x55b470: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x55b470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_55b474:
    // 0x55b474: 0x2638021  addu        $s0, $s3, $v1
    ctx->pc = 0x55b474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_55b478:
    // 0x55b478: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55b478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55b47c:
    // 0x55b47c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x55b47cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_55b480:
    // 0x55b480: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x55b480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_55b484:
    // 0x55b484: 0x46170818  adda.s      $f1, $f23
    ctx->pc = 0x55b484u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[23]);
label_55b488:
    // 0x55b488: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x55b488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55b48c:
    // 0x55b48c: 0x4615139c  madd.s      $f14, $f2, $f21
    ctx->pc = 0x55b48cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[21]));
label_55b490:
    // 0x55b490: 0x46160818  adda.s      $f1, $f22
    ctx->pc = 0x55b490u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
label_55b494:
    // 0x55b494: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x55b494u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_55b498:
    // 0x55b498: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x55b498u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_55b49c:
    // 0x55b49c: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x55b49cu;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
label_55b4a0:
    // 0x55b4a0: 0xc0bc284  jal         func_2F0A10
label_55b4a4:
    if (ctx->pc == 0x55B4A4u) {
        ctx->pc = 0x55B4A4u;
            // 0x55b4a4: 0x461503dc  madd.s      $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->pc = 0x55B4A8u;
        goto label_55b4a8;
    }
    ctx->pc = 0x55B4A0u;
    SET_GPR_U32(ctx, 31, 0x55B4A8u);
    ctx->pc = 0x55B4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55B4A0u;
            // 0x55b4a4: 0x461503dc  madd.s      $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B4A8u; }
        if (ctx->pc != 0x55B4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B4A8u; }
        if (ctx->pc != 0x55B4A8u) { return; }
    }
    ctx->pc = 0x55B4A8u;
label_55b4a8:
    // 0x55b4a8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x55b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_55b4ac:
    // 0x55b4ac: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x55b4acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_55b4b0:
    // 0x55b4b0: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x55b4b0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_55b4b4:
    // 0x55b4b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55b4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55b4b8:
    // 0x55b4b8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x55b4b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_55b4bc:
    // 0x55b4bc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x55b4bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_55b4c0:
    // 0x55b4c0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x55b4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55b4c4:
    // 0x55b4c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55b4c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55b4c8:
    // 0x55b4c8: 0x46171018  adda.s      $f2, $f23
    ctx->pc = 0x55b4c8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[23]);
label_55b4cc:
    // 0x55b4cc: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x55b4ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_55b4d0:
    // 0x55b4d0: 0x461505dc  madd.s      $f23, $f0, $f21
    ctx->pc = 0x55b4d0u;
    ctx->f[23] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
label_55b4d4:
    // 0x55b4d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55b4d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b4d8:
    // 0x55b4d8: 0x0  nop
    ctx->pc = 0x55b4d8u;
    // NOP
label_55b4dc:
    // 0x55b4dc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55b4dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55b4e0:
    // 0x55b4e0: 0x46171018  adda.s      $f2, $f23
    ctx->pc = 0x55b4e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[23]);
label_55b4e4:
    // 0x55b4e4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x55b4e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_55b4e8:
    // 0x55b4e8: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x55b4e8u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
label_55b4ec:
    // 0x55b4ec: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x55b4ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_55b4f0:
    // 0x55b4f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55b4f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b4f4:
    // 0x55b4f4: 0x1010  mfhi        $v0
    ctx->pc = 0x55b4f4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_55b4f8:
    // 0x55b4f8: 0x2442000d  addiu       $v0, $v0, 0xD
    ctx->pc = 0x55b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
label_55b4fc:
    // 0x55b4fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x55b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_55b500:
    // 0x55b500: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x55b500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_55b504:
    // 0x55b504: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55b504u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55b508:
    // 0x55b508: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55b508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55b50c:
    // 0x55b50c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x55b50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55b510:
    // 0x55b510: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x55b510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55b514:
    // 0x55b514: 0x46150b9c  madd.s      $f14, $f1, $f21
    ctx->pc = 0x55b514u;
    ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[21]));
label_55b518:
    // 0x55b518: 0x46161018  adda.s      $f2, $f22
    ctx->pc = 0x55b518u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[22]);
label_55b51c:
    // 0x55b51c: 0xc0bc284  jal         func_2F0A10
label_55b520:
    if (ctx->pc == 0x55B520u) {
        ctx->pc = 0x55B520u;
            // 0x55b520: 0x461503dc  madd.s      $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->pc = 0x55B524u;
        goto label_55b524;
    }
    ctx->pc = 0x55B51Cu;
    SET_GPR_U32(ctx, 31, 0x55B524u);
    ctx->pc = 0x55B520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55B51Cu;
            // 0x55b520: 0x461503dc  madd.s      $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B524u; }
        if (ctx->pc != 0x55B524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B524u; }
        if (ctx->pc != 0x55B524u) { return; }
    }
    ctx->pc = 0x55B524u;
label_55b524:
    // 0x55b524: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x55b524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55b528:
    // 0x55b528: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x55b528u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_55b52c:
    // 0x55b52c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x55b52cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_55b530:
    // 0x55b530: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x55b530u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_55b534:
    // 0x55b534: 0x46171018  adda.s      $f2, $f23
    ctx->pc = 0x55b534u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[23]);
label_55b538:
    // 0x55b538: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55b538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55b53c:
    // 0x55b53c: 0x461505dc  madd.s      $f23, $f0, $f21
    ctx->pc = 0x55b53cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
label_55b540:
    // 0x55b540: 0x267002d0  addiu       $s0, $s3, 0x2D0
    ctx->pc = 0x55b540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 720));
label_55b544:
    // 0x55b544: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55b544u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b548:
    // 0x55b548: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55b548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55b54c:
    // 0x55b54c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55b54cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55b550:
    // 0x55b550: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x55b550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_55b554:
    // 0x55b554: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55b554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55b558:
    // 0x55b558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55b558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b55c:
    // 0x55b55c: 0x0  nop
    ctx->pc = 0x55b55cu;
    // NOP
label_55b560:
    // 0x55b560: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55b560u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55b564:
    // 0x55b564: 0xc66102d8  lwc1        $f1, 0x2D8($s3)
    ctx->pc = 0x55b564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55b568:
    // 0x55b568: 0x46171018  adda.s      $f2, $f23
    ctx->pc = 0x55b568u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[23]);
label_55b56c:
    // 0x55b56c: 0xc66002dc  lwc1        $f0, 0x2DC($s3)
    ctx->pc = 0x55b56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55b570:
    // 0x55b570: 0x46150b9c  madd.s      $f14, $f1, $f21
    ctx->pc = 0x55b570u;
    ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[21]));
label_55b574:
    // 0x55b574: 0x46161018  adda.s      $f2, $f22
    ctx->pc = 0x55b574u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[22]);
label_55b578:
    // 0x55b578: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x55b578u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_55b57c:
    // 0x55b57c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x55b57cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_55b580:
    // 0x55b580: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x55b580u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
label_55b584:
    // 0x55b584: 0xc0bc284  jal         func_2F0A10
label_55b588:
    if (ctx->pc == 0x55B588u) {
        ctx->pc = 0x55B588u;
            // 0x55b588: 0x461503dc  madd.s      $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->pc = 0x55B58Cu;
        goto label_55b58c;
    }
    ctx->pc = 0x55B584u;
    SET_GPR_U32(ctx, 31, 0x55B58Cu);
    ctx->pc = 0x55B588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55B584u;
            // 0x55b588: 0x461503dc  madd.s      $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B58Cu; }
        if (ctx->pc != 0x55B58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B58Cu; }
        if (ctx->pc != 0x55B58Cu) { return; }
    }
    ctx->pc = 0x55B58Cu;
label_55b58c:
    // 0x55b58c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x55b58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55b590:
    // 0x55b590: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x55b590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_55b594:
    // 0x55b594: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x55b594u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_55b598:
    // 0x55b598: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x55b598u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_55b59c:
    // 0x55b59c: 0x32d100ff  andi        $s1, $s6, 0xFF
    ctx->pc = 0x55b59cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_55b5a0:
    // 0x55b5a0: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x55b5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_55b5a4:
    // 0x55b5a4: 0x46171018  adda.s      $f2, $f23
    ctx->pc = 0x55b5a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[23]);
label_55b5a8:
    // 0x55b5a8: 0x112fc2  srl         $a1, $s1, 31
    ctx->pc = 0x55b5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_55b5ac:
    // 0x55b5ac: 0x461505dc  madd.s      $f23, $f0, $f21
    ctx->pc = 0x55b5acu;
    ctx->f[23] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
label_55b5b0:
    // 0x55b5b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55b5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55b5b4:
    // 0x55b5b4: 0x510018  mult        $zero, $v0, $s1
    ctx->pc = 0x55b5b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_55b5b8:
    // 0x55b5b8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x55b5b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_55b5bc:
    // 0x55b5bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55b5bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b5c0:
    // 0x55b5c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55b5c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55b5c4:
    // 0x55b5c4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55b5c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55b5c8:
    // 0x55b5c8: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x55b5c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_55b5cc:
    // 0x55b5cc: 0x1810  mfhi        $v1
    ctx->pc = 0x55b5ccu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_55b5d0:
    // 0x55b5d0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x55b5d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_55b5d4:
    // 0x55b5d4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x55b5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_55b5d8:
    // 0x55b5d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55b5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b5dc:
    // 0x55b5dc: 0x2463000d  addiu       $v1, $v1, 0xD
    ctx->pc = 0x55b5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13));
label_55b5e0:
    // 0x55b5e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x55b5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_55b5e4:
    // 0x55b5e4: 0x2638021  addu        $s0, $s3, $v1
    ctx->pc = 0x55b5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_55b5e8:
    // 0x55b5e8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55b5e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55b5ec:
    // 0x55b5ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55b5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55b5f0:
    // 0x55b5f0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x55b5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55b5f4:
    // 0x55b5f4: 0x46171018  adda.s      $f2, $f23
    ctx->pc = 0x55b5f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[23]);
label_55b5f8:
    // 0x55b5f8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x55b5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55b5fc:
    // 0x55b5fc: 0x46150b9c  madd.s      $f14, $f1, $f21
    ctx->pc = 0x55b5fcu;
    ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[21]));
label_55b600:
    // 0x55b600: 0x46161018  adda.s      $f2, $f22
    ctx->pc = 0x55b600u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[22]);
label_55b604:
    // 0x55b604: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x55b604u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_55b608:
    // 0x55b608: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x55b608u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_55b60c:
    // 0x55b60c: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x55b60cu;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
label_55b610:
    // 0x55b610: 0xc0bc284  jal         func_2F0A10
label_55b614:
    if (ctx->pc == 0x55B614u) {
        ctx->pc = 0x55B614u;
            // 0x55b614: 0x461503dc  madd.s      $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->pc = 0x55B618u;
        goto label_55b618;
    }
    ctx->pc = 0x55B610u;
    SET_GPR_U32(ctx, 31, 0x55B618u);
    ctx->pc = 0x55B614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55B610u;
            // 0x55b614: 0x461503dc  madd.s      $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B618u; }
        if (ctx->pc != 0x55B618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B618u; }
        if (ctx->pc != 0x55B618u) { return; }
    }
    ctx->pc = 0x55B618u;
label_55b618:
    // 0x55b618: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x55b618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_55b61c:
    // 0x55b61c: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x55b61cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_55b620:
    // 0x55b620: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x55b620u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_55b624:
    // 0x55b624: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55b624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55b628:
    // 0x55b628: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x55b628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_55b62c:
    // 0x55b62c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x55b62cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_55b630:
    // 0x55b630: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x55b630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55b634:
    // 0x55b634: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55b634u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55b638:
    // 0x55b638: 0x46171018  adda.s      $f2, $f23
    ctx->pc = 0x55b638u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[23]);
label_55b63c:
    // 0x55b63c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x55b63cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_55b640:
    // 0x55b640: 0x461505dc  madd.s      $f23, $f0, $f21
    ctx->pc = 0x55b640u;
    ctx->f[23] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
label_55b644:
    // 0x55b644: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55b644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b648:
    // 0x55b648: 0x0  nop
    ctx->pc = 0x55b648u;
    // NOP
label_55b64c:
    // 0x55b64c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55b64cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55b650:
    // 0x55b650: 0x46171018  adda.s      $f2, $f23
    ctx->pc = 0x55b650u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[23]);
label_55b654:
    // 0x55b654: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x55b654u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_55b658:
    // 0x55b658: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x55b658u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
label_55b65c:
    // 0x55b65c: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x55b65cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_55b660:
    // 0x55b660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55b660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b664:
    // 0x55b664: 0x1010  mfhi        $v0
    ctx->pc = 0x55b664u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_55b668:
    // 0x55b668: 0x2442000d  addiu       $v0, $v0, 0xD
    ctx->pc = 0x55b668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
label_55b66c:
    // 0x55b66c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x55b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_55b670:
    // 0x55b670: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x55b670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_55b674:
    // 0x55b674: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55b674u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55b678:
    // 0x55b678: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55b678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55b67c:
    // 0x55b67c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x55b67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55b680:
    // 0x55b680: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x55b680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55b684:
    // 0x55b684: 0x46150b9c  madd.s      $f14, $f1, $f21
    ctx->pc = 0x55b684u;
    ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[21]));
label_55b688:
    // 0x55b688: 0x46161018  adda.s      $f2, $f22
    ctx->pc = 0x55b688u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[22]);
label_55b68c:
    // 0x55b68c: 0xc0bc284  jal         func_2F0A10
label_55b690:
    if (ctx->pc == 0x55B690u) {
        ctx->pc = 0x55B690u;
            // 0x55b690: 0x461503dc  madd.s      $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->pc = 0x55B694u;
        goto label_55b694;
    }
    ctx->pc = 0x55B68Cu;
    SET_GPR_U32(ctx, 31, 0x55B694u);
    ctx->pc = 0x55B690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55B68Cu;
            // 0x55b690: 0x461503dc  madd.s      $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B694u; }
        if (ctx->pc != 0x55B694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B694u; }
        if (ctx->pc != 0x55B694u) { return; }
    }
    ctx->pc = 0x55B694u;
label_55b694:
    // 0x55b694: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x55b694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55b698:
    // 0x55b698: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x55b698u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_55b69c:
    // 0x55b69c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x55b69cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_55b6a0:
    // 0x55b6a0: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x55b6a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_55b6a4:
    // 0x55b6a4: 0x46171018  adda.s      $f2, $f23
    ctx->pc = 0x55b6a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[23]);
label_55b6a8:
    // 0x55b6a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55b6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55b6ac:
    // 0x55b6ac: 0x461505dc  madd.s      $f23, $f0, $f21
    ctx->pc = 0x55b6acu;
    ctx->f[23] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
label_55b6b0:
    // 0x55b6b0: 0x267002e0  addiu       $s0, $s3, 0x2E0
    ctx->pc = 0x55b6b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 736));
label_55b6b4:
    // 0x55b6b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55b6b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b6b8:
    // 0x55b6b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55b6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55b6bc:
    // 0x55b6bc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55b6bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55b6c0:
    // 0x55b6c0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x55b6c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_55b6c4:
    // 0x55b6c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55b6c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55b6c8:
    // 0x55b6c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55b6c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b6cc:
    // 0x55b6cc: 0x0  nop
    ctx->pc = 0x55b6ccu;
    // NOP
label_55b6d0:
    // 0x55b6d0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55b6d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55b6d4:
    // 0x55b6d4: 0xc66102e8  lwc1        $f1, 0x2E8($s3)
    ctx->pc = 0x55b6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55b6d8:
    // 0x55b6d8: 0x46171018  adda.s      $f2, $f23
    ctx->pc = 0x55b6d8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[23]);
label_55b6dc:
    // 0x55b6dc: 0xc66002ec  lwc1        $f0, 0x2EC($s3)
    ctx->pc = 0x55b6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55b6e0:
    // 0x55b6e0: 0x46150b9c  madd.s      $f14, $f1, $f21
    ctx->pc = 0x55b6e0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[21]));
label_55b6e4:
    // 0x55b6e4: 0x46161018  adda.s      $f2, $f22
    ctx->pc = 0x55b6e4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[22]);
label_55b6e8:
    // 0x55b6e8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x55b6e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_55b6ec:
    // 0x55b6ec: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x55b6ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_55b6f0:
    // 0x55b6f0: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x55b6f0u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
label_55b6f4:
    // 0x55b6f4: 0xc0bc284  jal         func_2F0A10
label_55b6f8:
    if (ctx->pc == 0x55B6F8u) {
        ctx->pc = 0x55B6F8u;
            // 0x55b6f8: 0x461503dc  madd.s      $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->pc = 0x55B6FCu;
        goto label_55b6fc;
    }
    ctx->pc = 0x55B6F4u;
    SET_GPR_U32(ctx, 31, 0x55B6FCu);
    ctx->pc = 0x55B6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55B6F4u;
            // 0x55b6f8: 0x461503dc  madd.s      $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B6FCu; }
        if (ctx->pc != 0x55B6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B6FCu; }
        if (ctx->pc != 0x55B6FCu) { return; }
    }
    ctx->pc = 0x55B6FCu;
label_55b6fc:
    // 0x55b6fc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x55b6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55b700:
    // 0x55b700: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x55b700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_55b704:
    // 0x55b704: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x55b704u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_55b708:
    // 0x55b708: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x55b708u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_55b70c:
    // 0x55b70c: 0x46171018  adda.s      $f2, $f23
    ctx->pc = 0x55b70cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[23]);
label_55b710:
    // 0x55b710: 0x32f1ffff  andi        $s1, $s7, 0xFFFF
    ctx->pc = 0x55b710u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
label_55b714:
    // 0x55b714: 0x461505dc  madd.s      $f23, $f0, $f21
    ctx->pc = 0x55b714u;
    ctx->f[23] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
label_55b718:
    // 0x55b718: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x55b718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_55b71c:
    // 0x55b71c: 0x510019  multu       $v0, $s1
    ctx->pc = 0x55b71cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_55b720:
    // 0x55b720: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55b720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55b724:
    // 0x55b724: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55b724u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b728:
    // 0x55b728: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x55b728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_55b72c:
    // 0x55b72c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55b72cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55b730:
    // 0x55b730: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55b730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55b734:
    // 0x55b734: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x55b734u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_55b738:
    // 0x55b738: 0x1810  mfhi        $v1
    ctx->pc = 0x55b738u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_55b73c:
    // 0x55b73c: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x55b73cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_55b740:
    // 0x55b740: 0x2463000d  addiu       $v1, $v1, 0xD
    ctx->pc = 0x55b740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13));
label_55b744:
    // 0x55b744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55b744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b748:
    // 0x55b748: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x55b748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_55b74c:
    // 0x55b74c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55b74cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55b750:
    // 0x55b750: 0x2638021  addu        $s0, $s3, $v1
    ctx->pc = 0x55b750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_55b754:
    // 0x55b754: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55b754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55b758:
    // 0x55b758: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x55b758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55b75c:
    // 0x55b75c: 0x46171018  adda.s      $f2, $f23
    ctx->pc = 0x55b75cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[23]);
label_55b760:
    // 0x55b760: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x55b760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55b764:
    // 0x55b764: 0x46150b9c  madd.s      $f14, $f1, $f21
    ctx->pc = 0x55b764u;
    ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[21]));
label_55b768:
    // 0x55b768: 0x46161018  adda.s      $f2, $f22
    ctx->pc = 0x55b768u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[22]);
label_55b76c:
    // 0x55b76c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x55b76cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_55b770:
    // 0x55b770: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x55b770u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_55b774:
    // 0x55b774: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x55b774u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
label_55b778:
    // 0x55b778: 0xc0bc284  jal         func_2F0A10
label_55b77c:
    if (ctx->pc == 0x55B77Cu) {
        ctx->pc = 0x55B77Cu;
            // 0x55b77c: 0x461503dc  madd.s      $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->pc = 0x55B780u;
        goto label_55b780;
    }
    ctx->pc = 0x55B778u;
    SET_GPR_U32(ctx, 31, 0x55B780u);
    ctx->pc = 0x55B77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55B778u;
            // 0x55b77c: 0x461503dc  madd.s      $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B780u; }
        if (ctx->pc != 0x55B780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B780u; }
        if (ctx->pc != 0x55B780u) { return; }
    }
    ctx->pc = 0x55B780u;
label_55b780:
    // 0x55b780: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x55b780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_55b784:
    // 0x55b784: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x55b784u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_55b788:
    // 0x55b788: 0x222001b  divu        $zero, $s1, $v0
    ctx->pc = 0x55b788u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
label_55b78c:
    // 0x55b78c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x55b78cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_55b790:
    // 0x55b790: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x55b790u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_55b794:
    // 0x55b794: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55b794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55b798:
    // 0x55b798: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x55b798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55b79c:
    // 0x55b79c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55b79cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55b7a0:
    // 0x55b7a0: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x55b7a0u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
label_55b7a4:
    // 0x55b7a4: 0x46171018  adda.s      $f2, $f23
    ctx->pc = 0x55b7a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[23]);
label_55b7a8:
    // 0x55b7a8: 0x4615051c  madd.s      $f20, $f0, $f21
    ctx->pc = 0x55b7a8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
label_55b7ac:
    // 0x55b7ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55b7acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b7b0:
    // 0x55b7b0: 0x0  nop
    ctx->pc = 0x55b7b0u;
    // NOP
label_55b7b4:
    // 0x55b7b4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55b7b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55b7b8:
    // 0x55b7b8: 0x46141018  adda.s      $f2, $f20
    ctx->pc = 0x55b7b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
label_55b7bc:
    // 0x55b7bc: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x55b7bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_55b7c0:
    // 0x55b7c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x55b7c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_55b7c4:
    // 0x55b7c4: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x55b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_55b7c8:
    // 0x55b7c8: 0x3445cccd  ori         $a1, $v0, 0xCCCD
    ctx->pc = 0x55b7c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_55b7cc:
    // 0x55b7cc: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x55b7ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_55b7d0:
    // 0x55b7d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55b7d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b7d4:
    // 0x55b7d4: 0x1010  mfhi        $v0
    ctx->pc = 0x55b7d4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_55b7d8:
    // 0x55b7d8: 0xa20019  multu       $a1, $v0
    ctx->pc = 0x55b7d8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_55b7dc:
    // 0x55b7dc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55b7dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55b7e0:
    // 0x55b7e0: 0x0  nop
    ctx->pc = 0x55b7e0u;
    // NOP
label_55b7e4:
    // 0x55b7e4: 0x1010  mfhi        $v0
    ctx->pc = 0x55b7e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_55b7e8:
    // 0x55b7e8: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x55b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_55b7ec:
    // 0x55b7ec: 0x2442000d  addiu       $v0, $v0, 0xD
    ctx->pc = 0x55b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
label_55b7f0:
    // 0x55b7f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x55b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_55b7f4:
    // 0x55b7f4: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x55b7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_55b7f8:
    // 0x55b7f8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x55b7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55b7fc:
    // 0x55b7fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55b7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55b800:
    // 0x55b800: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x55b800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55b804:
    // 0x55b804: 0x46150b9c  madd.s      $f14, $f1, $f21
    ctx->pc = 0x55b804u;
    ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[21]));
label_55b808:
    // 0x55b808: 0x46161018  adda.s      $f2, $f22
    ctx->pc = 0x55b808u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[22]);
label_55b80c:
    // 0x55b80c: 0xc0bc284  jal         func_2F0A10
label_55b810:
    if (ctx->pc == 0x55B810u) {
        ctx->pc = 0x55B810u;
            // 0x55b810: 0x461503dc  madd.s      $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->pc = 0x55B814u;
        goto label_55b814;
    }
    ctx->pc = 0x55B80Cu;
    SET_GPR_U32(ctx, 31, 0x55B814u);
    ctx->pc = 0x55B810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55B80Cu;
            // 0x55b810: 0x461503dc  madd.s      $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B814u; }
        if (ctx->pc != 0x55B814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55B814u; }
        if (ctx->pc != 0x55B814u) { return; }
    }
    ctx->pc = 0x55B814u;
label_55b814:
    // 0x55b814: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x55b814u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_55b818:
    // 0x55b818: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x55b818u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55b81c:
    // 0x55b81c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x55b81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55b820:
    // 0x55b820: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x55b820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55b824:
    // 0x55b824: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x55b824u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_55b828:
    // 0x55b828: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x55b828u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_55b82c:
    // 0x55b82c: 0x320f809  jalr        $t9
label_55b830:
    if (ctx->pc == 0x55B830u) {
        ctx->pc = 0x55B830u;
            // 0x55b830: 0x46150d1c  madd.s      $f20, $f1, $f21 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[21]));
        ctx->pc = 0x55B834u;
        goto label_55b834;
    }
    ctx->pc = 0x55B82Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55B834u);
        ctx->pc = 0x55B830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55B82Cu;
            // 0x55b830: 0x46150d1c  madd.s      $f20, $f1, $f21 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[21]));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55B834u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55B834u; }
            if (ctx->pc != 0x55B834u) { return; }
        }
        }
    }
    ctx->pc = 0x55B834u;
label_55b834:
    // 0x55b834: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x55b834u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_55b838:
    // 0x55b838: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x55b838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_55b83c:
    // 0x55b83c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x55b83cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_55b840:
    // 0x55b840: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x55b840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_55b844:
    // 0x55b844: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x55b844u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_55b848:
    // 0x55b848: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x55b848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_55b84c:
    // 0x55b84c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x55b84cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_55b850:
    // 0x55b850: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x55b850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_55b854:
    // 0x55b854: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x55b854u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_55b858:
    // 0x55b858: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x55b858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_55b85c:
    // 0x55b85c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x55b85cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_55b860:
    // 0x55b860: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x55b860u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_55b864:
    // 0x55b864: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x55b864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_55b868:
    // 0x55b868: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x55b868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_55b86c:
    // 0x55b86c: 0x3e00008  jr          $ra
label_55b870:
    if (ctx->pc == 0x55B870u) {
        ctx->pc = 0x55B870u;
            // 0x55b870: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x55B874u;
        goto label_55b874;
    }
    ctx->pc = 0x55B86Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55B870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55B86Cu;
            // 0x55b870: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55B874u;
label_55b874:
    // 0x55b874: 0x0  nop
    ctx->pc = 0x55b874u;
    // NOP
label_55b878:
    // 0x55b878: 0x0  nop
    ctx->pc = 0x55b878u;
    // NOP
label_55b87c:
    // 0x55b87c: 0x0  nop
    ctx->pc = 0x55b87cu;
    // NOP
}
