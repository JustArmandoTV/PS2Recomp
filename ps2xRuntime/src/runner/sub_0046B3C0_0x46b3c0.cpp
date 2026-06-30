#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0046B3C0
// Address: 0x46b3c0 - 0x46b8a0
void sub_0046B3C0_0x46b3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046B3C0_0x46b3c0");
#endif

    switch (ctx->pc) {
        case 0x46b3c0u: goto label_46b3c0;
        case 0x46b3c4u: goto label_46b3c4;
        case 0x46b3c8u: goto label_46b3c8;
        case 0x46b3ccu: goto label_46b3cc;
        case 0x46b3d0u: goto label_46b3d0;
        case 0x46b3d4u: goto label_46b3d4;
        case 0x46b3d8u: goto label_46b3d8;
        case 0x46b3dcu: goto label_46b3dc;
        case 0x46b3e0u: goto label_46b3e0;
        case 0x46b3e4u: goto label_46b3e4;
        case 0x46b3e8u: goto label_46b3e8;
        case 0x46b3ecu: goto label_46b3ec;
        case 0x46b3f0u: goto label_46b3f0;
        case 0x46b3f4u: goto label_46b3f4;
        case 0x46b3f8u: goto label_46b3f8;
        case 0x46b3fcu: goto label_46b3fc;
        case 0x46b400u: goto label_46b400;
        case 0x46b404u: goto label_46b404;
        case 0x46b408u: goto label_46b408;
        case 0x46b40cu: goto label_46b40c;
        case 0x46b410u: goto label_46b410;
        case 0x46b414u: goto label_46b414;
        case 0x46b418u: goto label_46b418;
        case 0x46b41cu: goto label_46b41c;
        case 0x46b420u: goto label_46b420;
        case 0x46b424u: goto label_46b424;
        case 0x46b428u: goto label_46b428;
        case 0x46b42cu: goto label_46b42c;
        case 0x46b430u: goto label_46b430;
        case 0x46b434u: goto label_46b434;
        case 0x46b438u: goto label_46b438;
        case 0x46b43cu: goto label_46b43c;
        case 0x46b440u: goto label_46b440;
        case 0x46b444u: goto label_46b444;
        case 0x46b448u: goto label_46b448;
        case 0x46b44cu: goto label_46b44c;
        case 0x46b450u: goto label_46b450;
        case 0x46b454u: goto label_46b454;
        case 0x46b458u: goto label_46b458;
        case 0x46b45cu: goto label_46b45c;
        case 0x46b460u: goto label_46b460;
        case 0x46b464u: goto label_46b464;
        case 0x46b468u: goto label_46b468;
        case 0x46b46cu: goto label_46b46c;
        case 0x46b470u: goto label_46b470;
        case 0x46b474u: goto label_46b474;
        case 0x46b478u: goto label_46b478;
        case 0x46b47cu: goto label_46b47c;
        case 0x46b480u: goto label_46b480;
        case 0x46b484u: goto label_46b484;
        case 0x46b488u: goto label_46b488;
        case 0x46b48cu: goto label_46b48c;
        case 0x46b490u: goto label_46b490;
        case 0x46b494u: goto label_46b494;
        case 0x46b498u: goto label_46b498;
        case 0x46b49cu: goto label_46b49c;
        case 0x46b4a0u: goto label_46b4a0;
        case 0x46b4a4u: goto label_46b4a4;
        case 0x46b4a8u: goto label_46b4a8;
        case 0x46b4acu: goto label_46b4ac;
        case 0x46b4b0u: goto label_46b4b0;
        case 0x46b4b4u: goto label_46b4b4;
        case 0x46b4b8u: goto label_46b4b8;
        case 0x46b4bcu: goto label_46b4bc;
        case 0x46b4c0u: goto label_46b4c0;
        case 0x46b4c4u: goto label_46b4c4;
        case 0x46b4c8u: goto label_46b4c8;
        case 0x46b4ccu: goto label_46b4cc;
        case 0x46b4d0u: goto label_46b4d0;
        case 0x46b4d4u: goto label_46b4d4;
        case 0x46b4d8u: goto label_46b4d8;
        case 0x46b4dcu: goto label_46b4dc;
        case 0x46b4e0u: goto label_46b4e0;
        case 0x46b4e4u: goto label_46b4e4;
        case 0x46b4e8u: goto label_46b4e8;
        case 0x46b4ecu: goto label_46b4ec;
        case 0x46b4f0u: goto label_46b4f0;
        case 0x46b4f4u: goto label_46b4f4;
        case 0x46b4f8u: goto label_46b4f8;
        case 0x46b4fcu: goto label_46b4fc;
        case 0x46b500u: goto label_46b500;
        case 0x46b504u: goto label_46b504;
        case 0x46b508u: goto label_46b508;
        case 0x46b50cu: goto label_46b50c;
        case 0x46b510u: goto label_46b510;
        case 0x46b514u: goto label_46b514;
        case 0x46b518u: goto label_46b518;
        case 0x46b51cu: goto label_46b51c;
        case 0x46b520u: goto label_46b520;
        case 0x46b524u: goto label_46b524;
        case 0x46b528u: goto label_46b528;
        case 0x46b52cu: goto label_46b52c;
        case 0x46b530u: goto label_46b530;
        case 0x46b534u: goto label_46b534;
        case 0x46b538u: goto label_46b538;
        case 0x46b53cu: goto label_46b53c;
        case 0x46b540u: goto label_46b540;
        case 0x46b544u: goto label_46b544;
        case 0x46b548u: goto label_46b548;
        case 0x46b54cu: goto label_46b54c;
        case 0x46b550u: goto label_46b550;
        case 0x46b554u: goto label_46b554;
        case 0x46b558u: goto label_46b558;
        case 0x46b55cu: goto label_46b55c;
        case 0x46b560u: goto label_46b560;
        case 0x46b564u: goto label_46b564;
        case 0x46b568u: goto label_46b568;
        case 0x46b56cu: goto label_46b56c;
        case 0x46b570u: goto label_46b570;
        case 0x46b574u: goto label_46b574;
        case 0x46b578u: goto label_46b578;
        case 0x46b57cu: goto label_46b57c;
        case 0x46b580u: goto label_46b580;
        case 0x46b584u: goto label_46b584;
        case 0x46b588u: goto label_46b588;
        case 0x46b58cu: goto label_46b58c;
        case 0x46b590u: goto label_46b590;
        case 0x46b594u: goto label_46b594;
        case 0x46b598u: goto label_46b598;
        case 0x46b59cu: goto label_46b59c;
        case 0x46b5a0u: goto label_46b5a0;
        case 0x46b5a4u: goto label_46b5a4;
        case 0x46b5a8u: goto label_46b5a8;
        case 0x46b5acu: goto label_46b5ac;
        case 0x46b5b0u: goto label_46b5b0;
        case 0x46b5b4u: goto label_46b5b4;
        case 0x46b5b8u: goto label_46b5b8;
        case 0x46b5bcu: goto label_46b5bc;
        case 0x46b5c0u: goto label_46b5c0;
        case 0x46b5c4u: goto label_46b5c4;
        case 0x46b5c8u: goto label_46b5c8;
        case 0x46b5ccu: goto label_46b5cc;
        case 0x46b5d0u: goto label_46b5d0;
        case 0x46b5d4u: goto label_46b5d4;
        case 0x46b5d8u: goto label_46b5d8;
        case 0x46b5dcu: goto label_46b5dc;
        case 0x46b5e0u: goto label_46b5e0;
        case 0x46b5e4u: goto label_46b5e4;
        case 0x46b5e8u: goto label_46b5e8;
        case 0x46b5ecu: goto label_46b5ec;
        case 0x46b5f0u: goto label_46b5f0;
        case 0x46b5f4u: goto label_46b5f4;
        case 0x46b5f8u: goto label_46b5f8;
        case 0x46b5fcu: goto label_46b5fc;
        case 0x46b600u: goto label_46b600;
        case 0x46b604u: goto label_46b604;
        case 0x46b608u: goto label_46b608;
        case 0x46b60cu: goto label_46b60c;
        case 0x46b610u: goto label_46b610;
        case 0x46b614u: goto label_46b614;
        case 0x46b618u: goto label_46b618;
        case 0x46b61cu: goto label_46b61c;
        case 0x46b620u: goto label_46b620;
        case 0x46b624u: goto label_46b624;
        case 0x46b628u: goto label_46b628;
        case 0x46b62cu: goto label_46b62c;
        case 0x46b630u: goto label_46b630;
        case 0x46b634u: goto label_46b634;
        case 0x46b638u: goto label_46b638;
        case 0x46b63cu: goto label_46b63c;
        case 0x46b640u: goto label_46b640;
        case 0x46b644u: goto label_46b644;
        case 0x46b648u: goto label_46b648;
        case 0x46b64cu: goto label_46b64c;
        case 0x46b650u: goto label_46b650;
        case 0x46b654u: goto label_46b654;
        case 0x46b658u: goto label_46b658;
        case 0x46b65cu: goto label_46b65c;
        case 0x46b660u: goto label_46b660;
        case 0x46b664u: goto label_46b664;
        case 0x46b668u: goto label_46b668;
        case 0x46b66cu: goto label_46b66c;
        case 0x46b670u: goto label_46b670;
        case 0x46b674u: goto label_46b674;
        case 0x46b678u: goto label_46b678;
        case 0x46b67cu: goto label_46b67c;
        case 0x46b680u: goto label_46b680;
        case 0x46b684u: goto label_46b684;
        case 0x46b688u: goto label_46b688;
        case 0x46b68cu: goto label_46b68c;
        case 0x46b690u: goto label_46b690;
        case 0x46b694u: goto label_46b694;
        case 0x46b698u: goto label_46b698;
        case 0x46b69cu: goto label_46b69c;
        case 0x46b6a0u: goto label_46b6a0;
        case 0x46b6a4u: goto label_46b6a4;
        case 0x46b6a8u: goto label_46b6a8;
        case 0x46b6acu: goto label_46b6ac;
        case 0x46b6b0u: goto label_46b6b0;
        case 0x46b6b4u: goto label_46b6b4;
        case 0x46b6b8u: goto label_46b6b8;
        case 0x46b6bcu: goto label_46b6bc;
        case 0x46b6c0u: goto label_46b6c0;
        case 0x46b6c4u: goto label_46b6c4;
        case 0x46b6c8u: goto label_46b6c8;
        case 0x46b6ccu: goto label_46b6cc;
        case 0x46b6d0u: goto label_46b6d0;
        case 0x46b6d4u: goto label_46b6d4;
        case 0x46b6d8u: goto label_46b6d8;
        case 0x46b6dcu: goto label_46b6dc;
        case 0x46b6e0u: goto label_46b6e0;
        case 0x46b6e4u: goto label_46b6e4;
        case 0x46b6e8u: goto label_46b6e8;
        case 0x46b6ecu: goto label_46b6ec;
        case 0x46b6f0u: goto label_46b6f0;
        case 0x46b6f4u: goto label_46b6f4;
        case 0x46b6f8u: goto label_46b6f8;
        case 0x46b6fcu: goto label_46b6fc;
        case 0x46b700u: goto label_46b700;
        case 0x46b704u: goto label_46b704;
        case 0x46b708u: goto label_46b708;
        case 0x46b70cu: goto label_46b70c;
        case 0x46b710u: goto label_46b710;
        case 0x46b714u: goto label_46b714;
        case 0x46b718u: goto label_46b718;
        case 0x46b71cu: goto label_46b71c;
        case 0x46b720u: goto label_46b720;
        case 0x46b724u: goto label_46b724;
        case 0x46b728u: goto label_46b728;
        case 0x46b72cu: goto label_46b72c;
        case 0x46b730u: goto label_46b730;
        case 0x46b734u: goto label_46b734;
        case 0x46b738u: goto label_46b738;
        case 0x46b73cu: goto label_46b73c;
        case 0x46b740u: goto label_46b740;
        case 0x46b744u: goto label_46b744;
        case 0x46b748u: goto label_46b748;
        case 0x46b74cu: goto label_46b74c;
        case 0x46b750u: goto label_46b750;
        case 0x46b754u: goto label_46b754;
        case 0x46b758u: goto label_46b758;
        case 0x46b75cu: goto label_46b75c;
        case 0x46b760u: goto label_46b760;
        case 0x46b764u: goto label_46b764;
        case 0x46b768u: goto label_46b768;
        case 0x46b76cu: goto label_46b76c;
        case 0x46b770u: goto label_46b770;
        case 0x46b774u: goto label_46b774;
        case 0x46b778u: goto label_46b778;
        case 0x46b77cu: goto label_46b77c;
        case 0x46b780u: goto label_46b780;
        case 0x46b784u: goto label_46b784;
        case 0x46b788u: goto label_46b788;
        case 0x46b78cu: goto label_46b78c;
        case 0x46b790u: goto label_46b790;
        case 0x46b794u: goto label_46b794;
        case 0x46b798u: goto label_46b798;
        case 0x46b79cu: goto label_46b79c;
        case 0x46b7a0u: goto label_46b7a0;
        case 0x46b7a4u: goto label_46b7a4;
        case 0x46b7a8u: goto label_46b7a8;
        case 0x46b7acu: goto label_46b7ac;
        case 0x46b7b0u: goto label_46b7b0;
        case 0x46b7b4u: goto label_46b7b4;
        case 0x46b7b8u: goto label_46b7b8;
        case 0x46b7bcu: goto label_46b7bc;
        case 0x46b7c0u: goto label_46b7c0;
        case 0x46b7c4u: goto label_46b7c4;
        case 0x46b7c8u: goto label_46b7c8;
        case 0x46b7ccu: goto label_46b7cc;
        case 0x46b7d0u: goto label_46b7d0;
        case 0x46b7d4u: goto label_46b7d4;
        case 0x46b7d8u: goto label_46b7d8;
        case 0x46b7dcu: goto label_46b7dc;
        case 0x46b7e0u: goto label_46b7e0;
        case 0x46b7e4u: goto label_46b7e4;
        case 0x46b7e8u: goto label_46b7e8;
        case 0x46b7ecu: goto label_46b7ec;
        case 0x46b7f0u: goto label_46b7f0;
        case 0x46b7f4u: goto label_46b7f4;
        case 0x46b7f8u: goto label_46b7f8;
        case 0x46b7fcu: goto label_46b7fc;
        case 0x46b800u: goto label_46b800;
        case 0x46b804u: goto label_46b804;
        case 0x46b808u: goto label_46b808;
        case 0x46b80cu: goto label_46b80c;
        case 0x46b810u: goto label_46b810;
        case 0x46b814u: goto label_46b814;
        case 0x46b818u: goto label_46b818;
        case 0x46b81cu: goto label_46b81c;
        case 0x46b820u: goto label_46b820;
        case 0x46b824u: goto label_46b824;
        case 0x46b828u: goto label_46b828;
        case 0x46b82cu: goto label_46b82c;
        case 0x46b830u: goto label_46b830;
        case 0x46b834u: goto label_46b834;
        case 0x46b838u: goto label_46b838;
        case 0x46b83cu: goto label_46b83c;
        case 0x46b840u: goto label_46b840;
        case 0x46b844u: goto label_46b844;
        case 0x46b848u: goto label_46b848;
        case 0x46b84cu: goto label_46b84c;
        case 0x46b850u: goto label_46b850;
        case 0x46b854u: goto label_46b854;
        case 0x46b858u: goto label_46b858;
        case 0x46b85cu: goto label_46b85c;
        case 0x46b860u: goto label_46b860;
        case 0x46b864u: goto label_46b864;
        case 0x46b868u: goto label_46b868;
        case 0x46b86cu: goto label_46b86c;
        case 0x46b870u: goto label_46b870;
        case 0x46b874u: goto label_46b874;
        case 0x46b878u: goto label_46b878;
        case 0x46b87cu: goto label_46b87c;
        case 0x46b880u: goto label_46b880;
        case 0x46b884u: goto label_46b884;
        case 0x46b888u: goto label_46b888;
        case 0x46b88cu: goto label_46b88c;
        case 0x46b890u: goto label_46b890;
        case 0x46b894u: goto label_46b894;
        case 0x46b898u: goto label_46b898;
        case 0x46b89cu: goto label_46b89c;
        default: break;
    }

    ctx->pc = 0x46b3c0u;

label_46b3c0:
    // 0x46b3c0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x46b3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_46b3c4:
    // 0x46b3c4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x46b3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_46b3c8:
    // 0x46b3c8: 0x246398e0  addiu       $v1, $v1, -0x6720
    ctx->pc = 0x46b3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940896));
label_46b3cc:
    // 0x46b3cc: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x46b3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_46b3d0:
    // 0x46b3d0: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x46b3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_46b3d4:
    // 0x46b3d4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x46b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_46b3d8:
    // 0x46b3d8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x46b3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_46b3dc:
    // 0x46b3dc: 0x2463a2a0  addiu       $v1, $v1, -0x5D60
    ctx->pc = 0x46b3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943392));
label_46b3e0:
    // 0x46b3e0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x46b3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_46b3e4:
    // 0x46b3e4: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x46b3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_46b3e8:
    // 0x46b3e8: 0x3c1e0064  lui         $fp, 0x64
    ctx->pc = 0x46b3e8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)100 << 16));
label_46b3ec:
    // 0x46b3ec: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x46b3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_46b3f0:
    // 0x46b3f0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x46b3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_46b3f4:
    // 0x46b3f4: 0x2463211c  addiu       $v1, $v1, 0x211C
    ctx->pc = 0x46b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8476));
label_46b3f8:
    // 0x46b3f8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x46b3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_46b3fc:
    // 0x46b3fc: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x46b3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_46b400:
    // 0x46b400: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x46b400u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46b404:
    // 0x46b404: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x46b404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_46b408:
    // 0x46b408: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x46b408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_46b40c:
    // 0x46b40c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x46b40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_46b410:
    // 0x46b410: 0x2463a3e0  addiu       $v1, $v1, -0x5C20
    ctx->pc = 0x46b410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943712));
label_46b414:
    // 0x46b414: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x46b414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_46b418:
    // 0x46b418: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x46b418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_46b41c:
    // 0x46b41c: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x46b41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_46b420:
    // 0x46b420: 0x27de2114  addiu       $fp, $fp, 0x2114
    ctx->pc = 0x46b420u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8468));
label_46b424:
    // 0x46b424: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x46b424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_46b428:
    // 0x46b428: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x46b428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_46b42c:
    // 0x46b42c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x46b42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_46b430:
    // 0x46b430: 0x24632120  addiu       $v1, $v1, 0x2120
    ctx->pc = 0x46b430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8480));
label_46b434:
    // 0x46b434: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x46b434u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_46b438:
    // 0x46b438: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x46b438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_46b43c:
    // 0x46b43c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x46b43cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_46b440:
    // 0x46b440: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x46b440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_46b444:
    // 0x46b444: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x46b444u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_46b448:
    // 0x46b448: 0x24630820  addiu       $v1, $v1, 0x820
    ctx->pc = 0x46b448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2080));
label_46b44c:
    // 0x46b44c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46b44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46b450:
    // 0x46b450: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x46b450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46b454:
    // 0x46b454: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x46b454u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_46b458:
    // 0x46b458: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x46b458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_46b45c:
    // 0x46b45c: 0x90670001  lbu         $a3, 0x1($v1)
    ctx->pc = 0x46b45cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_46b460:
    // 0x46b460: 0x24841490  addiu       $a0, $a0, 0x1490
    ctx->pc = 0x46b460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5264));
label_46b464:
    // 0x46b464: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x46b464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_46b468:
    // 0x46b468: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x46b468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_46b46c:
    // 0x46b46c: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x46b46cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_46b470:
    // 0x46b470: 0x8c7389e0  lw          $s3, -0x7620($v1)
    ctx->pc = 0x46b470u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_46b474:
    // 0x46b474: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x46b474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_46b478:
    // 0x46b478: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x46b478u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_46b47c:
    // 0x46b47c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x46b47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_46b480:
    // 0x46b480: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
label_46b484:
    if (ctx->pc == 0x46B484u) {
        ctx->pc = 0x46B484u;
            // 0x46b484: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->pc = 0x46B488u;
        goto label_46b488;
    }
    ctx->pc = 0x46B480u;
    {
        const bool branch_taken_0x46b480 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x46B484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B480u;
            // 0x46b484: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b480) {
            ctx->pc = 0x46B4C8u;
            goto label_46b4c8;
        }
    }
    ctx->pc = 0x46B488u;
label_46b488:
    // 0x46b488: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x46b488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46b48c:
    // 0x46b48c: 0x50a3000c  beql        $a1, $v1, . + 4 + (0xC << 2)
label_46b490:
    if (ctx->pc == 0x46B490u) {
        ctx->pc = 0x46B490u;
            // 0x46b490: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x46B494u;
        goto label_46b494;
    }
    ctx->pc = 0x46B48Cu;
    {
        const bool branch_taken_0x46b48c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x46b48c) {
            ctx->pc = 0x46B490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46B48Cu;
            // 0x46b490: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46B4C0u;
            goto label_46b4c0;
        }
    }
    ctx->pc = 0x46B494u;
label_46b494:
    // 0x46b494: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46b494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46b498:
    // 0x46b498: 0x50a30007  beql        $a1, $v1, . + 4 + (0x7 << 2)
label_46b49c:
    if (ctx->pc == 0x46B49Cu) {
        ctx->pc = 0x46B49Cu;
            // 0x46b49c: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->pc = 0x46B4A0u;
        goto label_46b4a0;
    }
    ctx->pc = 0x46B498u;
    {
        const bool branch_taken_0x46b498 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x46b498) {
            ctx->pc = 0x46B49Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46B498u;
            // 0x46b49c: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46B4B8u;
            goto label_46b4b8;
        }
    }
    ctx->pc = 0x46B4A0u;
label_46b4a0:
    // 0x46b4a0: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_46b4a4:
    if (ctx->pc == 0x46B4A4u) {
        ctx->pc = 0x46B4A4u;
            // 0x46b4a4: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->pc = 0x46B4A8u;
        goto label_46b4a8;
    }
    ctx->pc = 0x46B4A0u;
    {
        const bool branch_taken_0x46b4a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b4a0) {
            ctx->pc = 0x46B4A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46B4A0u;
            // 0x46b4a4: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46B4B0u;
            goto label_46b4b0;
        }
    }
    ctx->pc = 0x46B4A8u;
label_46b4a8:
    // 0x46b4a8: 0x1000000a  b           . + 4 + (0xA << 2)
label_46b4ac:
    if (ctx->pc == 0x46B4ACu) {
        ctx->pc = 0x46B4ACu;
            // 0x46b4ac: 0x24970004  addiu       $s7, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x46B4B0u;
        goto label_46b4b0;
    }
    ctx->pc = 0x46B4A8u;
    {
        const bool branch_taken_0x46b4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B4A8u;
            // 0x46b4ac: 0x24970004  addiu       $s7, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b4a8) {
            ctx->pc = 0x46B4D4u;
            goto label_46b4d4;
        }
    }
    ctx->pc = 0x46B4B0u;
label_46b4b0:
    // 0x46b4b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_46b4b4:
    if (ctx->pc == 0x46B4B4u) {
        ctx->pc = 0x46B4B4u;
            // 0x46b4b4: 0xafa300e0  sw          $v1, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x46B4B8u;
        goto label_46b4b8;
    }
    ctx->pc = 0x46B4B0u;
    {
        const bool branch_taken_0x46b4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B4B0u;
            // 0x46b4b4: 0xafa300e0  sw          $v1, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b4b0) {
            ctx->pc = 0x46B4D0u;
            goto label_46b4d0;
        }
    }
    ctx->pc = 0x46B4B8u;
label_46b4b8:
    // 0x46b4b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_46b4bc:
    if (ctx->pc == 0x46B4BCu) {
        ctx->pc = 0x46B4BCu;
            // 0x46b4bc: 0xafa300e0  sw          $v1, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x46B4C0u;
        goto label_46b4c0;
    }
    ctx->pc = 0x46B4B8u;
    {
        const bool branch_taken_0x46b4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B4B8u;
            // 0x46b4bc: 0xafa300e0  sw          $v1, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b4b8) {
            ctx->pc = 0x46B4D0u;
            goto label_46b4d0;
        }
    }
    ctx->pc = 0x46B4C0u;
label_46b4c0:
    // 0x46b4c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_46b4c4:
    if (ctx->pc == 0x46B4C4u) {
        ctx->pc = 0x46B4C4u;
            // 0x46b4c4: 0xafa300e0  sw          $v1, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x46B4C8u;
        goto label_46b4c8;
    }
    ctx->pc = 0x46B4C0u;
    {
        const bool branch_taken_0x46b4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B4C0u;
            // 0x46b4c4: 0xafa300e0  sw          $v1, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b4c0) {
            ctx->pc = 0x46B4D0u;
            goto label_46b4d0;
        }
    }
    ctx->pc = 0x46B4C8u;
label_46b4c8:
    // 0x46b4c8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x46b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_46b4cc:
    // 0x46b4cc: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x46b4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_46b4d0:
    // 0x46b4d0: 0x24970004  addiu       $s7, $a0, 0x4
    ctx->pc = 0x46b4d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_46b4d4:
    // 0x46b4d4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x46b4d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46b4d8:
    // 0x46b4d8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x46b4d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46b4dc:
    // 0x46b4dc: 0x8ee4002c  lw          $a0, 0x2C($s7)
    ctx->pc = 0x46b4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 44)));
label_46b4e0:
    // 0x46b4e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x46b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46b4e4:
    // 0x46b4e4: 0x10830086  beq         $a0, $v1, . + 4 + (0x86 << 2)
label_46b4e8:
    if (ctx->pc == 0x46B4E8u) {
        ctx->pc = 0x46B4ECu;
        goto label_46b4ec;
    }
    ctx->pc = 0x46B4E4u;
    {
        const bool branch_taken_0x46b4e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x46b4e4) {
            ctx->pc = 0x46B700u;
            goto label_46b700;
        }
    }
    ctx->pc = 0x46B4ECu;
label_46b4ec:
    // 0x46b4ec: 0xc078cf0  jal         func_1E33C0
label_46b4f0:
    if (ctx->pc == 0x46B4F0u) {
        ctx->pc = 0x46B4F0u;
            // 0x46b4f0: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x46B4F4u;
        goto label_46b4f4;
    }
    ctx->pc = 0x46B4ECu;
    SET_GPR_U32(ctx, 31, 0x46B4F4u);
    ctx->pc = 0x46B4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B4ECu;
            // 0x46b4f0: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E33C0u;
    if (runtime->hasFunction(0x1E33C0u)) {
        auto targetFn = runtime->lookupFunction(0x1E33C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B4F4u; }
        if (ctx->pc != 0x46B4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E33C0_0x1e33c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B4F4u; }
        if (ctx->pc != 0x46B4F4u) { return; }
    }
    ctx->pc = 0x46B4F4u;
label_46b4f4:
    // 0x46b4f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x46b4f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46b4f8:
    // 0x46b4f8: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x46b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_46b4fc:
    // 0x46b4fc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x46b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_46b500:
    // 0x46b500: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x46b500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_46b504:
    // 0x46b504: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x46b504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46b508:
    // 0x46b508: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46b508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46b50c:
    // 0x46b50c: 0xc123240  jal         func_48C900
label_46b510:
    if (ctx->pc == 0x46B510u) {
        ctx->pc = 0x46B510u;
            // 0x46b510: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x46B514u;
        goto label_46b514;
    }
    ctx->pc = 0x46B50Cu;
    SET_GPR_U32(ctx, 31, 0x46B514u);
    ctx->pc = 0x46B510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B50Cu;
            // 0x46b510: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C900u;
    if (runtime->hasFunction(0x48C900u)) {
        auto targetFn = runtime->lookupFunction(0x48C900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B514u; }
        if (ctx->pc != 0x46B514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C900_0x48c900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B514u; }
        if (ctx->pc != 0x46B514u) { return; }
    }
    ctx->pc = 0x46B514u;
label_46b514:
    // 0x46b514: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x46b514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46b518:
    // 0x46b518: 0x3c02c180  lui         $v0, 0xC180
    ctx->pc = 0x46b518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49536 << 16));
label_46b51c:
    // 0x46b51c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x46b51cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46b520:
    // 0x46b520: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x46b520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_46b524:
    // 0x46b524: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x46b524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_46b528:
    // 0x46b528: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x46b528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_46b52c:
    // 0x46b52c: 0xc4770010  lwc1        $f23, 0x10($v1)
    ctx->pc = 0x46b52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_46b530:
    // 0x46b530: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x46b530u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_46b534:
    // 0x46b534: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_46b538:
    if (ctx->pc == 0x46B538u) {
        ctx->pc = 0x46B538u;
            // 0x46b538: 0x46010580  add.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x46B53Cu;
        goto label_46b53c;
    }
    ctx->pc = 0x46B534u;
    {
        const bool branch_taken_0x46b534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B534u;
            // 0x46b538: 0x46010580  add.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b534) {
            ctx->pc = 0x46B550u;
            goto label_46b550;
        }
    }
    ctx->pc = 0x46B53Cu;
label_46b53c:
    // 0x46b53c: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x46b53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_46b540:
    // 0x46b540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x46b540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46b544:
    // 0x46b544: 0x0  nop
    ctx->pc = 0x46b544u;
    // NOP
label_46b548:
    // 0x46b548: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x46b548u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_46b54c:
    // 0x46b54c: 0x0  nop
    ctx->pc = 0x46b54cu;
    // NOP
label_46b550:
    // 0x46b550: 0x8ea20068  lw          $v0, 0x68($s5)
    ctx->pc = 0x46b550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
label_46b554:
    // 0x46b554: 0x8c44060c  lw          $a0, 0x60C($v0)
    ctx->pc = 0x46b554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1548)));
label_46b558:
    // 0x46b558: 0xc0506ac  jal         func_141AB0
label_46b55c:
    if (ctx->pc == 0x46B55Cu) {
        ctx->pc = 0x46B55Cu;
            // 0x46b55c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46B560u;
        goto label_46b560;
    }
    ctx->pc = 0x46B558u;
    SET_GPR_U32(ctx, 31, 0x46B560u);
    ctx->pc = 0x46B55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B558u;
            // 0x46b55c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B560u; }
        if (ctx->pc != 0x46B560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B560u; }
        if (ctx->pc != 0x46B560u) { return; }
    }
    ctx->pc = 0x46B560u;
label_46b560:
    // 0x46b560: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x46b560u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_46b564:
    // 0x46b564: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x46b564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46b568:
    // 0x46b568: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x46b568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_46b56c:
    // 0x46b56c: 0x320f809  jalr        $t9
label_46b570:
    if (ctx->pc == 0x46B570u) {
        ctx->pc = 0x46B570u;
            // 0x46b570: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x46B574u;
        goto label_46b574;
    }
    ctx->pc = 0x46B56Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46B574u);
        ctx->pc = 0x46B570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B56Cu;
            // 0x46b570: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46B574u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46B574u; }
            if (ctx->pc != 0x46B574u) { return; }
        }
        }
    }
    ctx->pc = 0x46B574u;
label_46b574:
    // 0x46b574: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x46b574u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_46b578:
    // 0x46b578: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x46b578u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_46b57c:
    // 0x46b57c: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x46b57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
label_46b580:
    // 0x46b580: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x46b580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46b584:
    // 0x46b584: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x46b584u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_46b588:
    // 0x46b588: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x46b588u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46b58c:
    // 0x46b58c: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x46b58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_46b590:
    // 0x46b590: 0x87c40000  lh          $a0, 0x0($fp)
    ctx->pc = 0x46b590u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
label_46b594:
    // 0x46b594: 0x3462999a  ori         $v0, $v1, 0x999A
    ctx->pc = 0x46b594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_46b598:
    // 0x46b598: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x46b598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_46b59c:
    // 0x46b59c: 0x87c30002  lh          $v1, 0x2($fp)
    ctx->pc = 0x46b59cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_46b5a0:
    // 0x46b5a0: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x46b5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_46b5a4:
    // 0x46b5a4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x46b5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_46b5a8:
    // 0x46b5a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x46b5a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46b5ac:
    // 0x46b5ac: 0x0  nop
    ctx->pc = 0x46b5acu;
    // NOP
label_46b5b0:
    // 0x46b5b0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x46b5b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_46b5b4:
    // 0x46b5b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x46b5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_46b5b8:
    // 0x46b5b8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x46b5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_46b5bc:
    // 0x46b5bc: 0x46031542  mul.s       $f21, $f2, $f3
    ctx->pc = 0x46b5bcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_46b5c0:
    // 0x46b5c0: 0x46030d02  mul.s       $f20, $f1, $f3
    ctx->pc = 0x46b5c0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_46b5c4:
    // 0x46b5c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x46b5c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46b5c8:
    // 0x46b5c8: 0x0  nop
    ctx->pc = 0x46b5c8u;
    // NOP
label_46b5cc:
    // 0x46b5cc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x46b5ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_46b5d0:
    // 0x46b5d0: 0x4615bb80  add.s       $f14, $f23, $f21
    ctx->pc = 0x46b5d0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
label_46b5d4:
    // 0x46b5d4: 0x4614b3c0  add.s       $f15, $f22, $f20
    ctx->pc = 0x46b5d4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
label_46b5d8:
    // 0x46b5d8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x46b5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_46b5dc:
    // 0x46b5dc: 0xc0bc284  jal         func_2F0A10
label_46b5e0:
    if (ctx->pc == 0x46B5E0u) {
        ctx->pc = 0x46B5E0u;
            // 0x46b5e0: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x46B5E4u;
        goto label_46b5e4;
    }
    ctx->pc = 0x46B5DCu;
    SET_GPR_U32(ctx, 31, 0x46B5E4u);
    ctx->pc = 0x46B5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B5DCu;
            // 0x46b5e0: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B5E4u; }
        if (ctx->pc != 0x46B5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B5E4u; }
        if (ctx->pc != 0x46B5E4u) { return; }
    }
    ctx->pc = 0x46B5E4u;
label_46b5e4:
    // 0x46b5e4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x46b5e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_46b5e8:
    // 0x46b5e8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x46b5e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_46b5ec:
    // 0x46b5ec: 0x320f809  jalr        $t9
label_46b5f0:
    if (ctx->pc == 0x46B5F0u) {
        ctx->pc = 0x46B5F0u;
            // 0x46b5f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46B5F4u;
        goto label_46b5f4;
    }
    ctx->pc = 0x46B5ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46B5F4u);
        ctx->pc = 0x46B5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B5ECu;
            // 0x46b5f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46B5F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46B5F4u; }
            if (ctx->pc != 0x46B5F4u) { return; }
        }
        }
    }
    ctx->pc = 0x46B5F4u;
label_46b5f4:
    // 0x46b5f4: 0x4615bdc0  add.s       $f23, $f23, $f21
    ctx->pc = 0x46b5f4u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
label_46b5f8:
    // 0x46b5f8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x46b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_46b5fc:
    // 0x46b5fc: 0x2a41000e  slti        $at, $s2, 0xE
    ctx->pc = 0x46b5fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)14) ? 1 : 0);
label_46b600:
    // 0x46b600: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x46b600u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46b604:
    // 0x46b604: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x46b604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_46b608:
    // 0x46b608: 0x0  nop
    ctx->pc = 0x46b608u;
    // NOP
label_46b60c:
    // 0x46b60c: 0x46160018  adda.s      $f0, $f22
    ctx->pc = 0x46b60cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_46b610:
    // 0x46b610: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_46b614:
    if (ctx->pc == 0x46B614u) {
        ctx->pc = 0x46B614u;
            // 0x46b614: 0x46140d9c  madd.s      $f22, $f1, $f20 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
        ctx->pc = 0x46B618u;
        goto label_46b618;
    }
    ctx->pc = 0x46B610u;
    {
        const bool branch_taken_0x46b610 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B610u;
            // 0x46b614: 0x46140d9c  madd.s      $f22, $f1, $f20 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b610) {
            ctx->pc = 0x46B640u;
            goto label_46b640;
        }
    }
    ctx->pc = 0x46B618u;
label_46b618:
    // 0x46b618: 0x8ea20068  lw          $v0, 0x68($s5)
    ctx->pc = 0x46b618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
label_46b61c:
    // 0x46b61c: 0x8c44060c  lw          $a0, 0x60C($v0)
    ctx->pc = 0x46b61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1548)));
label_46b620:
    // 0x46b620: 0xc0506ac  jal         func_141AB0
label_46b624:
    if (ctx->pc == 0x46B624u) {
        ctx->pc = 0x46B624u;
            // 0x46b624: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x46B628u;
        goto label_46b628;
    }
    ctx->pc = 0x46B620u;
    SET_GPR_U32(ctx, 31, 0x46B628u);
    ctx->pc = 0x46B624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B620u;
            // 0x46b624: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B628u; }
        if (ctx->pc != 0x46B628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B628u; }
        if (ctx->pc != 0x46B628u) { return; }
    }
    ctx->pc = 0x46B628u;
label_46b628:
    // 0x46b628: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x46b628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_46b62c:
    // 0x46b62c: 0x8fb40100  lw          $s4, 0x100($sp)
    ctx->pc = 0x46b62cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_46b630:
    // 0x46b630: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x46b630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_46b634:
    // 0x46b634: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x46b634u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_46b638:
    // 0x46b638: 0x1000000b  b           . + 4 + (0xB << 2)
label_46b63c:
    if (ctx->pc == 0x46B63Cu) {
        ctx->pc = 0x46B63Cu;
            // 0x46b63c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x46B640u;
        goto label_46b640;
    }
    ctx->pc = 0x46B638u;
    {
        const bool branch_taken_0x46b638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B638u;
            // 0x46b63c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b638) {
            ctx->pc = 0x46B668u;
            goto label_46b668;
        }
    }
    ctx->pc = 0x46B640u;
label_46b640:
    // 0x46b640: 0x8ea20068  lw          $v0, 0x68($s5)
    ctx->pc = 0x46b640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
label_46b644:
    // 0x46b644: 0x8c44060c  lw          $a0, 0x60C($v0)
    ctx->pc = 0x46b644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1548)));
label_46b648:
    // 0x46b648: 0xc0506ac  jal         func_141AB0
label_46b64c:
    if (ctx->pc == 0x46B64Cu) {
        ctx->pc = 0x46B64Cu;
            // 0x46b64c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x46B650u;
        goto label_46b650;
    }
    ctx->pc = 0x46B648u;
    SET_GPR_U32(ctx, 31, 0x46B650u);
    ctx->pc = 0x46B64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B648u;
            // 0x46b64c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B650u; }
        if (ctx->pc != 0x46B650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B650u; }
        if (ctx->pc != 0x46B650u) { return; }
    }
    ctx->pc = 0x46B650u;
label_46b650:
    // 0x46b650: 0x2642fff2  addiu       $v0, $s2, -0xE
    ctx->pc = 0x46b650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967282));
label_46b654:
    // 0x46b654: 0x8fb400f0  lw          $s4, 0xF0($sp)
    ctx->pc = 0x46b654u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_46b658:
    // 0x46b658: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x46b658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_46b65c:
    // 0x46b65c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x46b65cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_46b660:
    // 0x46b660: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x46b660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46b664:
    // 0x46b664: 0x0  nop
    ctx->pc = 0x46b664u;
    // NOP
label_46b668:
    // 0x46b668: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x46b668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_46b66c:
    // 0x46b66c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x46b66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46b670:
    // 0x46b670: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x46b670u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_46b674:
    // 0x46b674: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x46b674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_46b678:
    // 0x46b678: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x46b678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46b67c:
    // 0x46b67c: 0xc6150008  lwc1        $f21, 0x8($s0)
    ctx->pc = 0x46b67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_46b680:
    // 0x46b680: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x46b680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_46b684:
    // 0x46b684: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x46b684u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_46b688:
    // 0x46b688: 0x320f809  jalr        $t9
label_46b68c:
    if (ctx->pc == 0x46B68Cu) {
        ctx->pc = 0x46B68Cu;
            // 0x46b68c: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x46B690u;
        goto label_46b690;
    }
    ctx->pc = 0x46B688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46B690u);
        ctx->pc = 0x46B68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B688u;
            // 0x46b68c: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46B690u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46B690u; }
            if (ctx->pc != 0x46B690u) { return; }
        }
        }
    }
    ctx->pc = 0x46B690u;
label_46b690:
    // 0x46b690: 0x86870000  lh          $a3, 0x0($s4)
    ctx->pc = 0x46b690u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_46b694:
    // 0x46b694: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x46b694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_46b698:
    // 0x46b698: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x46b698u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_46b69c:
    // 0x46b69c: 0x4615bb80  add.s       $f14, $f23, $f21
    ctx->pc = 0x46b69cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
label_46b6a0:
    // 0x46b6a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46b6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46b6a4:
    // 0x46b6a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x46b6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_46b6a8:
    // 0x46b6a8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x46b6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46b6ac:
    // 0x46b6ac: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x46b6acu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46b6b0:
    // 0x46b6b0: 0x0  nop
    ctx->pc = 0x46b6b0u;
    // NOP
label_46b6b4:
    // 0x46b6b4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x46b6b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_46b6b8:
    // 0x46b6b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x46b6b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46b6bc:
    // 0x46b6bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x46b6bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46b6c0:
    // 0x46b6c0: 0x0  nop
    ctx->pc = 0x46b6c0u;
    // NOP
label_46b6c4:
    // 0x46b6c4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x46b6c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_46b6c8:
    // 0x46b6c8: 0x4614b341  sub.s       $f13, $f22, $f20
    ctx->pc = 0x46b6c8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
label_46b6cc:
    // 0x46b6cc: 0x4614b3c0  add.s       $f15, $f22, $f20
    ctx->pc = 0x46b6ccu;
    ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
label_46b6d0:
    // 0x46b6d0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x46b6d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_46b6d4:
    // 0x46b6d4: 0xc0bc284  jal         func_2F0A10
label_46b6d8:
    if (ctx->pc == 0x46B6D8u) {
        ctx->pc = 0x46B6D8u;
            // 0x46b6d8: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x46B6DCu;
        goto label_46b6dc;
    }
    ctx->pc = 0x46B6D4u;
    SET_GPR_U32(ctx, 31, 0x46B6DCu);
    ctx->pc = 0x46B6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B6D4u;
            // 0x46b6d8: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B6DCu; }
        if (ctx->pc != 0x46B6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B6DCu; }
        if (ctx->pc != 0x46B6DCu) { return; }
    }
    ctx->pc = 0x46B6DCu;
label_46b6dc:
    // 0x46b6dc: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x46b6dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_46b6e0:
    // 0x46b6e0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x46b6e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_46b6e4:
    // 0x46b6e4: 0x320f809  jalr        $t9
label_46b6e8:
    if (ctx->pc == 0x46B6E8u) {
        ctx->pc = 0x46B6E8u;
            // 0x46b6e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46B6ECu;
        goto label_46b6ec;
    }
    ctx->pc = 0x46B6E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46B6ECu);
        ctx->pc = 0x46B6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B6E4u;
            // 0x46b6e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46B6ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46B6ECu; }
            if (ctx->pc != 0x46B6ECu) { return; }
        }
        }
    }
    ctx->pc = 0x46B6ECu;
label_46b6ec:
    // 0x46b6ec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x46b6ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_46b6f0:
    // 0x46b6f0: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x46b6f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_46b6f4:
    // 0x46b6f4: 0x1460ff79  bnez        $v1, . + 4 + (-0x87 << 2)
label_46b6f8:
    if (ctx->pc == 0x46B6F8u) {
        ctx->pc = 0x46B6F8u;
            // 0x46b6f8: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->pc = 0x46B6FCu;
        goto label_46b6fc;
    }
    ctx->pc = 0x46B6F4u;
    {
        const bool branch_taken_0x46b6f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x46B6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B6F4u;
            // 0x46b6f8: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b6f4) {
            ctx->pc = 0x46B4DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46b4dc;
        }
    }
    ctx->pc = 0x46B6FCu;
label_46b6fc:
    // 0x46b6fc: 0x0  nop
    ctx->pc = 0x46b6fcu;
    // NOP
label_46b700:
    // 0x46b700: 0x56c00055  bnel        $s6, $zero, . + 4 + (0x55 << 2)
label_46b704:
    if (ctx->pc == 0x46B704u) {
        ctx->pc = 0x46B704u;
            // 0x46b704: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x46B708u;
        goto label_46b708;
    }
    ctx->pc = 0x46B700u;
    {
        const bool branch_taken_0x46b700 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x46b700) {
            ctx->pc = 0x46B704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46B700u;
            // 0x46b704: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46B858u;
            goto label_46b858;
        }
    }
    ctx->pc = 0x46B708u;
label_46b708:
    // 0x46b708: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x46b708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_46b70c:
    // 0x46b70c: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x46b70cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46b710:
    // 0x46b710: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x46b710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_46b714:
    // 0x46b714: 0x94510830  lhu         $s1, 0x830($v0)
    ctx->pc = 0x46b714u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2096)));
label_46b718:
    // 0x46b718: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x46b718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_46b71c:
    // 0x46b71c: 0x94500832  lhu         $s0, 0x832($v0)
    ctx->pc = 0x46b71cu;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2098)));
label_46b720:
    // 0x46b720: 0x8ea2006c  lw          $v0, 0x6C($s5)
    ctx->pc = 0x46b720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_46b724:
    // 0x46b724: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46b724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46b728:
    // 0x46b728: 0xc123240  jal         func_48C900
label_46b72c:
    if (ctx->pc == 0x46B72Cu) {
        ctx->pc = 0x46B72Cu;
            // 0x46b72c: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->pc = 0x46B730u;
        goto label_46b730;
    }
    ctx->pc = 0x46B728u;
    SET_GPR_U32(ctx, 31, 0x46B730u);
    ctx->pc = 0x46B72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B728u;
            // 0x46b72c: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C900u;
    if (runtime->hasFunction(0x48C900u)) {
        auto targetFn = runtime->lookupFunction(0x48C900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B730u; }
        if (ctx->pc != 0x46B730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C900_0x48c900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B730u; }
        if (ctx->pc != 0x46B730u) { return; }
    }
    ctx->pc = 0x46B730u;
label_46b730:
    // 0x46b730: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x46b730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46b734:
    // 0x46b734: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x46b734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_46b738:
    // 0x46b738: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46b738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46b73c:
    // 0x46b73c: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x46b73cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_46b740:
    // 0x46b740: 0xc4c40014  lwc1        $f4, 0x14($a2)
    ctx->pc = 0x46b740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_46b744:
    // 0x46b744: 0xc4d40010  lwc1        $f20, 0x10($a2)
    ctx->pc = 0x46b744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_46b748:
    // 0x46b748: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x46b748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46b74c:
    // 0x46b74c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x46b74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46b750:
    // 0x46b750: 0x8ea20068  lw          $v0, 0x68($s5)
    ctx->pc = 0x46b750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
label_46b754:
    // 0x46b754: 0x3c03c180  lui         $v1, 0xC180
    ctx->pc = 0x46b754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49536 << 16));
label_46b758:
    // 0x46b758: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x46b758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_46b75c:
    // 0x46b75c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x46b75cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_46b760:
    // 0x46b760: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x46b760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
label_46b764:
    // 0x46b764: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x46b764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_46b768:
    // 0x46b768: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x46b768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_46b76c:
    // 0x46b76c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x46b76cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_46b770:
    // 0x46b770: 0x0  nop
    ctx->pc = 0x46b770u;
    // NOP
label_46b774:
    // 0x46b774: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x46b774u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_46b778:
    // 0x46b778: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x46b778u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_46b77c:
    // 0x46b77c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x46b77cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46b780:
    // 0x46b780: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x46b780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_46b784:
    // 0x46b784: 0x0  nop
    ctx->pc = 0x46b784u;
    // NOP
label_46b788:
    // 0x46b788: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x46b788u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_46b78c:
    // 0x46b78c: 0xc0506ac  jal         func_141AB0
label_46b790:
    if (ctx->pc == 0x46B790u) {
        ctx->pc = 0x46B790u;
            // 0x46b790: 0x46020d5c  madd.s      $f21, $f1, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->pc = 0x46B794u;
        goto label_46b794;
    }
    ctx->pc = 0x46B78Cu;
    SET_GPR_U32(ctx, 31, 0x46B794u);
    ctx->pc = 0x46B790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B78Cu;
            // 0x46b790: 0x46020d5c  madd.s      $f21, $f1, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B794u; }
        if (ctx->pc != 0x46B794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B794u; }
        if (ctx->pc != 0x46B794u) { return; }
    }
    ctx->pc = 0x46B794u;
label_46b794:
    // 0x46b794: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x46b794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_46b798:
    // 0x46b798: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x46b798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46b79c:
    // 0x46b79c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x46b79cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_46b7a0:
    // 0x46b7a0: 0x320f809  jalr        $t9
label_46b7a4:
    if (ctx->pc == 0x46B7A4u) {
        ctx->pc = 0x46B7A4u;
            // 0x46b7a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x46B7A8u;
        goto label_46b7a8;
    }
    ctx->pc = 0x46B7A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46B7A8u);
        ctx->pc = 0x46B7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B7A0u;
            // 0x46b7a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46B7A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46B7A8u; }
            if (ctx->pc != 0x46B7A8u) { return; }
        }
        }
    }
    ctx->pc = 0x46B7A8u;
label_46b7a8:
    // 0x46b7a8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x46b7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_46b7ac:
    // 0x46b7ac: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x46b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_46b7b0:
    // 0x46b7b0: 0x24a5e410  addiu       $a1, $a1, -0x1BF0
    ctx->pc = 0x46b7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960144));
label_46b7b4:
    // 0x46b7b4: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x46b7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46b7b8:
    // 0x46b7b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x46b7b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_46b7bc:
    // 0x46b7bc: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x46b7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_46b7c0:
    // 0x46b7c0: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_46b7c4:
    if (ctx->pc == 0x46B7C4u) {
        ctx->pc = 0x46B7C4u;
            // 0x46b7c4: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x46B7C8u;
        goto label_46b7c8;
    }
    ctx->pc = 0x46B7C0u;
    {
        const bool branch_taken_0x46b7c0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x46B7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B7C0u;
            // 0x46b7c4: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b7c0) {
            ctx->pc = 0x46B7D4u;
            goto label_46b7d4;
        }
    }
    ctx->pc = 0x46B7C8u;
label_46b7c8:
    // 0x46b7c8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x46b7c8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46b7cc:
    // 0x46b7cc: 0x10000008  b           . + 4 + (0x8 << 2)
label_46b7d0:
    if (ctx->pc == 0x46B7D0u) {
        ctx->pc = 0x46B7D0u;
            // 0x46b7d0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x46B7D4u;
        goto label_46b7d4;
    }
    ctx->pc = 0x46B7CCu;
    {
        const bool branch_taken_0x46b7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B7CCu;
            // 0x46b7d0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b7cc) {
            ctx->pc = 0x46B7F0u;
            goto label_46b7f0;
        }
    }
    ctx->pc = 0x46B7D4u;
label_46b7d4:
    // 0x46b7d4: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x46b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_46b7d8:
    // 0x46b7d8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x46b7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_46b7dc:
    // 0x46b7dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x46b7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_46b7e0:
    // 0x46b7e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x46b7e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46b7e4:
    // 0x46b7e4: 0x0  nop
    ctx->pc = 0x46b7e4u;
    // NOP
label_46b7e8:
    // 0x46b7e8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x46b7e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_46b7ec:
    // 0x46b7ec: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x46b7ecu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_46b7f0:
    // 0x46b7f0: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_46b7f4:
    if (ctx->pc == 0x46B7F4u) {
        ctx->pc = 0x46B7F4u;
            // 0x46b7f4: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x46B7F8u;
        goto label_46b7f8;
    }
    ctx->pc = 0x46B7F0u;
    {
        const bool branch_taken_0x46b7f0 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x46b7f0) {
            ctx->pc = 0x46B7F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46B7F0u;
            // 0x46b7f4: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46B804u;
            goto label_46b804;
        }
    }
    ctx->pc = 0x46B7F8u;
label_46b7f8:
    // 0x46b7f8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x46b7f8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46b7fc:
    // 0x46b7fc: 0x10000007  b           . + 4 + (0x7 << 2)
label_46b800:
    if (ctx->pc == 0x46B800u) {
        ctx->pc = 0x46B800u;
            // 0x46b800: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x46B804u;
        goto label_46b804;
    }
    ctx->pc = 0x46B7FCu;
    {
        const bool branch_taken_0x46b7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B7FCu;
            // 0x46b800: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b7fc) {
            ctx->pc = 0x46B81Cu;
            goto label_46b81c;
        }
    }
    ctx->pc = 0x46B804u;
label_46b804:
    // 0x46b804: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x46b804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_46b808:
    // 0x46b808: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x46b808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_46b80c:
    // 0x46b80c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x46b80cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46b810:
    // 0x46b810: 0x0  nop
    ctx->pc = 0x46b810u;
    // NOP
label_46b814:
    // 0x46b814: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x46b814u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_46b818:
    // 0x46b818: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x46b818u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_46b81c:
    // 0x46b81c: 0x4602a380  add.s       $f14, $f20, $f2
    ctx->pc = 0x46b81cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
label_46b820:
    // 0x46b820: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x46b820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_46b824:
    // 0x46b824: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x46b824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_46b828:
    // 0x46b828: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x46b828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46b82c:
    // 0x46b82c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x46b82cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46b830:
    // 0x46b830: 0x4601ab41  sub.s       $f13, $f21, $f1
    ctx->pc = 0x46b830u;
    ctx->f[13] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_46b834:
    // 0x46b834: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x46b834u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_46b838:
    // 0x46b838: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x46b838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_46b83c:
    // 0x46b83c: 0xc0bc284  jal         func_2F0A10
label_46b840:
    if (ctx->pc == 0x46B840u) {
        ctx->pc = 0x46B840u;
            // 0x46b840: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x46B844u;
        goto label_46b844;
    }
    ctx->pc = 0x46B83Cu;
    SET_GPR_U32(ctx, 31, 0x46B844u);
    ctx->pc = 0x46B840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46B83Cu;
            // 0x46b840: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B844u; }
        if (ctx->pc != 0x46B844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46B844u; }
        if (ctx->pc != 0x46B844u) { return; }
    }
    ctx->pc = 0x46B844u;
label_46b844:
    // 0x46b844: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x46b844u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_46b848:
    // 0x46b848: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x46b848u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_46b84c:
    // 0x46b84c: 0x320f809  jalr        $t9
label_46b850:
    if (ctx->pc == 0x46B850u) {
        ctx->pc = 0x46B850u;
            // 0x46b850: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46B854u;
        goto label_46b854;
    }
    ctx->pc = 0x46B84Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46B854u);
        ctx->pc = 0x46B850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B84Cu;
            // 0x46b850: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46B854u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46B854u; }
            if (ctx->pc != 0x46B854u) { return; }
        }
        }
    }
    ctx->pc = 0x46B854u;
label_46b854:
    // 0x46b854: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x46b854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_46b858:
    // 0x46b858: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x46b858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_46b85c:
    // 0x46b85c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x46b85cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_46b860:
    // 0x46b860: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x46b860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_46b864:
    // 0x46b864: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x46b864u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_46b868:
    // 0x46b868: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x46b868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_46b86c:
    // 0x46b86c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x46b86cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_46b870:
    // 0x46b870: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x46b870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_46b874:
    // 0x46b874: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x46b874u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_46b878:
    // 0x46b878: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x46b878u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_46b87c:
    // 0x46b87c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x46b87cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46b880:
    // 0x46b880: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x46b880u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46b884:
    // 0x46b884: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x46b884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46b888:
    // 0x46b888: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x46b888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46b88c:
    // 0x46b88c: 0x3e00008  jr          $ra
label_46b890:
    if (ctx->pc == 0x46B890u) {
        ctx->pc = 0x46B890u;
            // 0x46b890: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x46B894u;
        goto label_46b894;
    }
    ctx->pc = 0x46B88Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46B890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46B88Cu;
            // 0x46b890: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x46B894u;
label_46b894:
    // 0x46b894: 0x0  nop
    ctx->pc = 0x46b894u;
    // NOP
label_46b898:
    // 0x46b898: 0x0  nop
    ctx->pc = 0x46b898u;
    // NOP
label_46b89c:
    // 0x46b89c: 0x0  nop
    ctx->pc = 0x46b89cu;
    // NOP
}
