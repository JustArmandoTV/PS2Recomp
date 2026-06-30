#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047B190
// Address: 0x47b190 - 0x47b7a0
void sub_0047B190_0x47b190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047B190_0x47b190");
#endif

    switch (ctx->pc) {
        case 0x47b190u: goto label_47b190;
        case 0x47b194u: goto label_47b194;
        case 0x47b198u: goto label_47b198;
        case 0x47b19cu: goto label_47b19c;
        case 0x47b1a0u: goto label_47b1a0;
        case 0x47b1a4u: goto label_47b1a4;
        case 0x47b1a8u: goto label_47b1a8;
        case 0x47b1acu: goto label_47b1ac;
        case 0x47b1b0u: goto label_47b1b0;
        case 0x47b1b4u: goto label_47b1b4;
        case 0x47b1b8u: goto label_47b1b8;
        case 0x47b1bcu: goto label_47b1bc;
        case 0x47b1c0u: goto label_47b1c0;
        case 0x47b1c4u: goto label_47b1c4;
        case 0x47b1c8u: goto label_47b1c8;
        case 0x47b1ccu: goto label_47b1cc;
        case 0x47b1d0u: goto label_47b1d0;
        case 0x47b1d4u: goto label_47b1d4;
        case 0x47b1d8u: goto label_47b1d8;
        case 0x47b1dcu: goto label_47b1dc;
        case 0x47b1e0u: goto label_47b1e0;
        case 0x47b1e4u: goto label_47b1e4;
        case 0x47b1e8u: goto label_47b1e8;
        case 0x47b1ecu: goto label_47b1ec;
        case 0x47b1f0u: goto label_47b1f0;
        case 0x47b1f4u: goto label_47b1f4;
        case 0x47b1f8u: goto label_47b1f8;
        case 0x47b1fcu: goto label_47b1fc;
        case 0x47b200u: goto label_47b200;
        case 0x47b204u: goto label_47b204;
        case 0x47b208u: goto label_47b208;
        case 0x47b20cu: goto label_47b20c;
        case 0x47b210u: goto label_47b210;
        case 0x47b214u: goto label_47b214;
        case 0x47b218u: goto label_47b218;
        case 0x47b21cu: goto label_47b21c;
        case 0x47b220u: goto label_47b220;
        case 0x47b224u: goto label_47b224;
        case 0x47b228u: goto label_47b228;
        case 0x47b22cu: goto label_47b22c;
        case 0x47b230u: goto label_47b230;
        case 0x47b234u: goto label_47b234;
        case 0x47b238u: goto label_47b238;
        case 0x47b23cu: goto label_47b23c;
        case 0x47b240u: goto label_47b240;
        case 0x47b244u: goto label_47b244;
        case 0x47b248u: goto label_47b248;
        case 0x47b24cu: goto label_47b24c;
        case 0x47b250u: goto label_47b250;
        case 0x47b254u: goto label_47b254;
        case 0x47b258u: goto label_47b258;
        case 0x47b25cu: goto label_47b25c;
        case 0x47b260u: goto label_47b260;
        case 0x47b264u: goto label_47b264;
        case 0x47b268u: goto label_47b268;
        case 0x47b26cu: goto label_47b26c;
        case 0x47b270u: goto label_47b270;
        case 0x47b274u: goto label_47b274;
        case 0x47b278u: goto label_47b278;
        case 0x47b27cu: goto label_47b27c;
        case 0x47b280u: goto label_47b280;
        case 0x47b284u: goto label_47b284;
        case 0x47b288u: goto label_47b288;
        case 0x47b28cu: goto label_47b28c;
        case 0x47b290u: goto label_47b290;
        case 0x47b294u: goto label_47b294;
        case 0x47b298u: goto label_47b298;
        case 0x47b29cu: goto label_47b29c;
        case 0x47b2a0u: goto label_47b2a0;
        case 0x47b2a4u: goto label_47b2a4;
        case 0x47b2a8u: goto label_47b2a8;
        case 0x47b2acu: goto label_47b2ac;
        case 0x47b2b0u: goto label_47b2b0;
        case 0x47b2b4u: goto label_47b2b4;
        case 0x47b2b8u: goto label_47b2b8;
        case 0x47b2bcu: goto label_47b2bc;
        case 0x47b2c0u: goto label_47b2c0;
        case 0x47b2c4u: goto label_47b2c4;
        case 0x47b2c8u: goto label_47b2c8;
        case 0x47b2ccu: goto label_47b2cc;
        case 0x47b2d0u: goto label_47b2d0;
        case 0x47b2d4u: goto label_47b2d4;
        case 0x47b2d8u: goto label_47b2d8;
        case 0x47b2dcu: goto label_47b2dc;
        case 0x47b2e0u: goto label_47b2e0;
        case 0x47b2e4u: goto label_47b2e4;
        case 0x47b2e8u: goto label_47b2e8;
        case 0x47b2ecu: goto label_47b2ec;
        case 0x47b2f0u: goto label_47b2f0;
        case 0x47b2f4u: goto label_47b2f4;
        case 0x47b2f8u: goto label_47b2f8;
        case 0x47b2fcu: goto label_47b2fc;
        case 0x47b300u: goto label_47b300;
        case 0x47b304u: goto label_47b304;
        case 0x47b308u: goto label_47b308;
        case 0x47b30cu: goto label_47b30c;
        case 0x47b310u: goto label_47b310;
        case 0x47b314u: goto label_47b314;
        case 0x47b318u: goto label_47b318;
        case 0x47b31cu: goto label_47b31c;
        case 0x47b320u: goto label_47b320;
        case 0x47b324u: goto label_47b324;
        case 0x47b328u: goto label_47b328;
        case 0x47b32cu: goto label_47b32c;
        case 0x47b330u: goto label_47b330;
        case 0x47b334u: goto label_47b334;
        case 0x47b338u: goto label_47b338;
        case 0x47b33cu: goto label_47b33c;
        case 0x47b340u: goto label_47b340;
        case 0x47b344u: goto label_47b344;
        case 0x47b348u: goto label_47b348;
        case 0x47b34cu: goto label_47b34c;
        case 0x47b350u: goto label_47b350;
        case 0x47b354u: goto label_47b354;
        case 0x47b358u: goto label_47b358;
        case 0x47b35cu: goto label_47b35c;
        case 0x47b360u: goto label_47b360;
        case 0x47b364u: goto label_47b364;
        case 0x47b368u: goto label_47b368;
        case 0x47b36cu: goto label_47b36c;
        case 0x47b370u: goto label_47b370;
        case 0x47b374u: goto label_47b374;
        case 0x47b378u: goto label_47b378;
        case 0x47b37cu: goto label_47b37c;
        case 0x47b380u: goto label_47b380;
        case 0x47b384u: goto label_47b384;
        case 0x47b388u: goto label_47b388;
        case 0x47b38cu: goto label_47b38c;
        case 0x47b390u: goto label_47b390;
        case 0x47b394u: goto label_47b394;
        case 0x47b398u: goto label_47b398;
        case 0x47b39cu: goto label_47b39c;
        case 0x47b3a0u: goto label_47b3a0;
        case 0x47b3a4u: goto label_47b3a4;
        case 0x47b3a8u: goto label_47b3a8;
        case 0x47b3acu: goto label_47b3ac;
        case 0x47b3b0u: goto label_47b3b0;
        case 0x47b3b4u: goto label_47b3b4;
        case 0x47b3b8u: goto label_47b3b8;
        case 0x47b3bcu: goto label_47b3bc;
        case 0x47b3c0u: goto label_47b3c0;
        case 0x47b3c4u: goto label_47b3c4;
        case 0x47b3c8u: goto label_47b3c8;
        case 0x47b3ccu: goto label_47b3cc;
        case 0x47b3d0u: goto label_47b3d0;
        case 0x47b3d4u: goto label_47b3d4;
        case 0x47b3d8u: goto label_47b3d8;
        case 0x47b3dcu: goto label_47b3dc;
        case 0x47b3e0u: goto label_47b3e0;
        case 0x47b3e4u: goto label_47b3e4;
        case 0x47b3e8u: goto label_47b3e8;
        case 0x47b3ecu: goto label_47b3ec;
        case 0x47b3f0u: goto label_47b3f0;
        case 0x47b3f4u: goto label_47b3f4;
        case 0x47b3f8u: goto label_47b3f8;
        case 0x47b3fcu: goto label_47b3fc;
        case 0x47b400u: goto label_47b400;
        case 0x47b404u: goto label_47b404;
        case 0x47b408u: goto label_47b408;
        case 0x47b40cu: goto label_47b40c;
        case 0x47b410u: goto label_47b410;
        case 0x47b414u: goto label_47b414;
        case 0x47b418u: goto label_47b418;
        case 0x47b41cu: goto label_47b41c;
        case 0x47b420u: goto label_47b420;
        case 0x47b424u: goto label_47b424;
        case 0x47b428u: goto label_47b428;
        case 0x47b42cu: goto label_47b42c;
        case 0x47b430u: goto label_47b430;
        case 0x47b434u: goto label_47b434;
        case 0x47b438u: goto label_47b438;
        case 0x47b43cu: goto label_47b43c;
        case 0x47b440u: goto label_47b440;
        case 0x47b444u: goto label_47b444;
        case 0x47b448u: goto label_47b448;
        case 0x47b44cu: goto label_47b44c;
        case 0x47b450u: goto label_47b450;
        case 0x47b454u: goto label_47b454;
        case 0x47b458u: goto label_47b458;
        case 0x47b45cu: goto label_47b45c;
        case 0x47b460u: goto label_47b460;
        case 0x47b464u: goto label_47b464;
        case 0x47b468u: goto label_47b468;
        case 0x47b46cu: goto label_47b46c;
        case 0x47b470u: goto label_47b470;
        case 0x47b474u: goto label_47b474;
        case 0x47b478u: goto label_47b478;
        case 0x47b47cu: goto label_47b47c;
        case 0x47b480u: goto label_47b480;
        case 0x47b484u: goto label_47b484;
        case 0x47b488u: goto label_47b488;
        case 0x47b48cu: goto label_47b48c;
        case 0x47b490u: goto label_47b490;
        case 0x47b494u: goto label_47b494;
        case 0x47b498u: goto label_47b498;
        case 0x47b49cu: goto label_47b49c;
        case 0x47b4a0u: goto label_47b4a0;
        case 0x47b4a4u: goto label_47b4a4;
        case 0x47b4a8u: goto label_47b4a8;
        case 0x47b4acu: goto label_47b4ac;
        case 0x47b4b0u: goto label_47b4b0;
        case 0x47b4b4u: goto label_47b4b4;
        case 0x47b4b8u: goto label_47b4b8;
        case 0x47b4bcu: goto label_47b4bc;
        case 0x47b4c0u: goto label_47b4c0;
        case 0x47b4c4u: goto label_47b4c4;
        case 0x47b4c8u: goto label_47b4c8;
        case 0x47b4ccu: goto label_47b4cc;
        case 0x47b4d0u: goto label_47b4d0;
        case 0x47b4d4u: goto label_47b4d4;
        case 0x47b4d8u: goto label_47b4d8;
        case 0x47b4dcu: goto label_47b4dc;
        case 0x47b4e0u: goto label_47b4e0;
        case 0x47b4e4u: goto label_47b4e4;
        case 0x47b4e8u: goto label_47b4e8;
        case 0x47b4ecu: goto label_47b4ec;
        case 0x47b4f0u: goto label_47b4f0;
        case 0x47b4f4u: goto label_47b4f4;
        case 0x47b4f8u: goto label_47b4f8;
        case 0x47b4fcu: goto label_47b4fc;
        case 0x47b500u: goto label_47b500;
        case 0x47b504u: goto label_47b504;
        case 0x47b508u: goto label_47b508;
        case 0x47b50cu: goto label_47b50c;
        case 0x47b510u: goto label_47b510;
        case 0x47b514u: goto label_47b514;
        case 0x47b518u: goto label_47b518;
        case 0x47b51cu: goto label_47b51c;
        case 0x47b520u: goto label_47b520;
        case 0x47b524u: goto label_47b524;
        case 0x47b528u: goto label_47b528;
        case 0x47b52cu: goto label_47b52c;
        case 0x47b530u: goto label_47b530;
        case 0x47b534u: goto label_47b534;
        case 0x47b538u: goto label_47b538;
        case 0x47b53cu: goto label_47b53c;
        case 0x47b540u: goto label_47b540;
        case 0x47b544u: goto label_47b544;
        case 0x47b548u: goto label_47b548;
        case 0x47b54cu: goto label_47b54c;
        case 0x47b550u: goto label_47b550;
        case 0x47b554u: goto label_47b554;
        case 0x47b558u: goto label_47b558;
        case 0x47b55cu: goto label_47b55c;
        case 0x47b560u: goto label_47b560;
        case 0x47b564u: goto label_47b564;
        case 0x47b568u: goto label_47b568;
        case 0x47b56cu: goto label_47b56c;
        case 0x47b570u: goto label_47b570;
        case 0x47b574u: goto label_47b574;
        case 0x47b578u: goto label_47b578;
        case 0x47b57cu: goto label_47b57c;
        case 0x47b580u: goto label_47b580;
        case 0x47b584u: goto label_47b584;
        case 0x47b588u: goto label_47b588;
        case 0x47b58cu: goto label_47b58c;
        case 0x47b590u: goto label_47b590;
        case 0x47b594u: goto label_47b594;
        case 0x47b598u: goto label_47b598;
        case 0x47b59cu: goto label_47b59c;
        case 0x47b5a0u: goto label_47b5a0;
        case 0x47b5a4u: goto label_47b5a4;
        case 0x47b5a8u: goto label_47b5a8;
        case 0x47b5acu: goto label_47b5ac;
        case 0x47b5b0u: goto label_47b5b0;
        case 0x47b5b4u: goto label_47b5b4;
        case 0x47b5b8u: goto label_47b5b8;
        case 0x47b5bcu: goto label_47b5bc;
        case 0x47b5c0u: goto label_47b5c0;
        case 0x47b5c4u: goto label_47b5c4;
        case 0x47b5c8u: goto label_47b5c8;
        case 0x47b5ccu: goto label_47b5cc;
        case 0x47b5d0u: goto label_47b5d0;
        case 0x47b5d4u: goto label_47b5d4;
        case 0x47b5d8u: goto label_47b5d8;
        case 0x47b5dcu: goto label_47b5dc;
        case 0x47b5e0u: goto label_47b5e0;
        case 0x47b5e4u: goto label_47b5e4;
        case 0x47b5e8u: goto label_47b5e8;
        case 0x47b5ecu: goto label_47b5ec;
        case 0x47b5f0u: goto label_47b5f0;
        case 0x47b5f4u: goto label_47b5f4;
        case 0x47b5f8u: goto label_47b5f8;
        case 0x47b5fcu: goto label_47b5fc;
        case 0x47b600u: goto label_47b600;
        case 0x47b604u: goto label_47b604;
        case 0x47b608u: goto label_47b608;
        case 0x47b60cu: goto label_47b60c;
        case 0x47b610u: goto label_47b610;
        case 0x47b614u: goto label_47b614;
        case 0x47b618u: goto label_47b618;
        case 0x47b61cu: goto label_47b61c;
        case 0x47b620u: goto label_47b620;
        case 0x47b624u: goto label_47b624;
        case 0x47b628u: goto label_47b628;
        case 0x47b62cu: goto label_47b62c;
        case 0x47b630u: goto label_47b630;
        case 0x47b634u: goto label_47b634;
        case 0x47b638u: goto label_47b638;
        case 0x47b63cu: goto label_47b63c;
        case 0x47b640u: goto label_47b640;
        case 0x47b644u: goto label_47b644;
        case 0x47b648u: goto label_47b648;
        case 0x47b64cu: goto label_47b64c;
        case 0x47b650u: goto label_47b650;
        case 0x47b654u: goto label_47b654;
        case 0x47b658u: goto label_47b658;
        case 0x47b65cu: goto label_47b65c;
        case 0x47b660u: goto label_47b660;
        case 0x47b664u: goto label_47b664;
        case 0x47b668u: goto label_47b668;
        case 0x47b66cu: goto label_47b66c;
        case 0x47b670u: goto label_47b670;
        case 0x47b674u: goto label_47b674;
        case 0x47b678u: goto label_47b678;
        case 0x47b67cu: goto label_47b67c;
        case 0x47b680u: goto label_47b680;
        case 0x47b684u: goto label_47b684;
        case 0x47b688u: goto label_47b688;
        case 0x47b68cu: goto label_47b68c;
        case 0x47b690u: goto label_47b690;
        case 0x47b694u: goto label_47b694;
        case 0x47b698u: goto label_47b698;
        case 0x47b69cu: goto label_47b69c;
        case 0x47b6a0u: goto label_47b6a0;
        case 0x47b6a4u: goto label_47b6a4;
        case 0x47b6a8u: goto label_47b6a8;
        case 0x47b6acu: goto label_47b6ac;
        case 0x47b6b0u: goto label_47b6b0;
        case 0x47b6b4u: goto label_47b6b4;
        case 0x47b6b8u: goto label_47b6b8;
        case 0x47b6bcu: goto label_47b6bc;
        case 0x47b6c0u: goto label_47b6c0;
        case 0x47b6c4u: goto label_47b6c4;
        case 0x47b6c8u: goto label_47b6c8;
        case 0x47b6ccu: goto label_47b6cc;
        case 0x47b6d0u: goto label_47b6d0;
        case 0x47b6d4u: goto label_47b6d4;
        case 0x47b6d8u: goto label_47b6d8;
        case 0x47b6dcu: goto label_47b6dc;
        case 0x47b6e0u: goto label_47b6e0;
        case 0x47b6e4u: goto label_47b6e4;
        case 0x47b6e8u: goto label_47b6e8;
        case 0x47b6ecu: goto label_47b6ec;
        case 0x47b6f0u: goto label_47b6f0;
        case 0x47b6f4u: goto label_47b6f4;
        case 0x47b6f8u: goto label_47b6f8;
        case 0x47b6fcu: goto label_47b6fc;
        case 0x47b700u: goto label_47b700;
        case 0x47b704u: goto label_47b704;
        case 0x47b708u: goto label_47b708;
        case 0x47b70cu: goto label_47b70c;
        case 0x47b710u: goto label_47b710;
        case 0x47b714u: goto label_47b714;
        case 0x47b718u: goto label_47b718;
        case 0x47b71cu: goto label_47b71c;
        case 0x47b720u: goto label_47b720;
        case 0x47b724u: goto label_47b724;
        case 0x47b728u: goto label_47b728;
        case 0x47b72cu: goto label_47b72c;
        case 0x47b730u: goto label_47b730;
        case 0x47b734u: goto label_47b734;
        case 0x47b738u: goto label_47b738;
        case 0x47b73cu: goto label_47b73c;
        case 0x47b740u: goto label_47b740;
        case 0x47b744u: goto label_47b744;
        case 0x47b748u: goto label_47b748;
        case 0x47b74cu: goto label_47b74c;
        case 0x47b750u: goto label_47b750;
        case 0x47b754u: goto label_47b754;
        case 0x47b758u: goto label_47b758;
        case 0x47b75cu: goto label_47b75c;
        case 0x47b760u: goto label_47b760;
        case 0x47b764u: goto label_47b764;
        case 0x47b768u: goto label_47b768;
        case 0x47b76cu: goto label_47b76c;
        case 0x47b770u: goto label_47b770;
        case 0x47b774u: goto label_47b774;
        case 0x47b778u: goto label_47b778;
        case 0x47b77cu: goto label_47b77c;
        case 0x47b780u: goto label_47b780;
        case 0x47b784u: goto label_47b784;
        case 0x47b788u: goto label_47b788;
        case 0x47b78cu: goto label_47b78c;
        case 0x47b790u: goto label_47b790;
        case 0x47b794u: goto label_47b794;
        case 0x47b798u: goto label_47b798;
        case 0x47b79cu: goto label_47b79c;
        default: break;
    }

    ctx->pc = 0x47b190u;

label_47b190:
    // 0x47b190: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x47b190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_47b194:
    // 0x47b194: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x47b194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_47b198:
    // 0x47b198: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x47b198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_47b19c:
    // 0x47b19c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x47b19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_47b1a0:
    // 0x47b1a0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x47b1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_47b1a4:
    // 0x47b1a4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x47b1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_47b1a8:
    // 0x47b1a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x47b1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_47b1ac:
    // 0x47b1ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x47b1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_47b1b0:
    // 0x47b1b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47b1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_47b1b4:
    // 0x47b1b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47b1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47b1b8:
    // 0x47b1b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47b1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47b1bc:
    // 0x47b1bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47b1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47b1c0:
    // 0x47b1c0: 0x8c650e80  lw          $a1, 0xE80($v1)
    ctx->pc = 0x47b1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_47b1c4:
    // 0x47b1c4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x47b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_47b1c8:
    // 0x47b1c8: 0x8cab0788  lw          $t3, 0x788($a1)
    ctx->pc = 0x47b1c8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1928)));
label_47b1cc:
    // 0x47b1cc: 0x8c630eac  lw          $v1, 0xEAC($v1)
    ctx->pc = 0x47b1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3756)));
label_47b1d0:
    // 0x47b1d0: 0x8c660098  lw          $a2, 0x98($v1)
    ctx->pc = 0x47b1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
label_47b1d4:
    // 0x47b1d4: 0x8c6500a0  lw          $a1, 0xA0($v1)
    ctx->pc = 0x47b1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
label_47b1d8:
    // 0x47b1d8: 0x8c740078  lw          $s4, 0x78($v1)
    ctx->pc = 0x47b1d8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
label_47b1dc:
    // 0x47b1dc: 0x8c670094  lw          $a3, 0x94($v1)
    ctx->pc = 0x47b1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_47b1e0:
    // 0x47b1e0: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x47b1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_47b1e4:
    // 0x47b1e4: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x47b1e4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_47b1e8:
    // 0x47b1e8: 0xf45023  subu        $t2, $a3, $s4
    ctx->pc = 0x47b1e8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
label_47b1ec:
    // 0x47b1ec: 0x11640022  beq         $t3, $a0, . + 4 + (0x22 << 2)
label_47b1f0:
    if (ctx->pc == 0x47B1F0u) {
        ctx->pc = 0x47B1F0u;
            // 0x47b1f0: 0xc5a821  addu        $s5, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->pc = 0x47B1F4u;
        goto label_47b1f4;
    }
    ctx->pc = 0x47B1ECu;
    {
        const bool branch_taken_0x47b1ec = (GPR_U64(ctx, 11) == GPR_U64(ctx, 4));
        ctx->pc = 0x47B1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B1ECu;
            // 0x47b1f0: 0xc5a821  addu        $s5, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b1ec) {
            ctx->pc = 0x47B278u;
            goto label_47b278;
        }
    }
    ctx->pc = 0x47B1F4u;
label_47b1f4:
    // 0x47b1f4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x47b1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47b1f8:
    // 0x47b1f8: 0x51640020  beql        $t3, $a0, . + 4 + (0x20 << 2)
label_47b1fc:
    if (ctx->pc == 0x47B1FCu) {
        ctx->pc = 0x47B1FCu;
            // 0x47b1fc: 0x8c660080  lw          $a2, 0x80($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
        ctx->pc = 0x47B200u;
        goto label_47b200;
    }
    ctx->pc = 0x47B1F8u;
    {
        const bool branch_taken_0x47b1f8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 4));
        if (branch_taken_0x47b1f8) {
            ctx->pc = 0x47B1FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47B1F8u;
            // 0x47b1fc: 0x8c660080  lw          $a2, 0x80($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47B27Cu;
            goto label_47b27c;
        }
    }
    ctx->pc = 0x47B200u;
label_47b200:
    // 0x47b200: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x47b200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47b204:
    // 0x47b204: 0x5164000e  beql        $t3, $a0, . + 4 + (0xE << 2)
label_47b208:
    if (ctx->pc == 0x47B208u) {
        ctx->pc = 0x47B208u;
            // 0x47b208: 0x8c68008c  lw          $t0, 0x8C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
        ctx->pc = 0x47B20Cu;
        goto label_47b20c;
    }
    ctx->pc = 0x47B204u;
    {
        const bool branch_taken_0x47b204 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 4));
        if (branch_taken_0x47b204) {
            ctx->pc = 0x47B208u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47B204u;
            // 0x47b208: 0x8c68008c  lw          $t0, 0x8C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47B240u;
            goto label_47b240;
        }
    }
    ctx->pc = 0x47B20Cu;
label_47b20c:
    // 0x47b20c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x47b20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47b210:
    // 0x47b210: 0x51640003  beql        $t3, $a0, . + 4 + (0x3 << 2)
label_47b214:
    if (ctx->pc == 0x47B214u) {
        ctx->pc = 0x47B214u;
            // 0x47b214: 0x8c730084  lw          $s3, 0x84($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
        ctx->pc = 0x47B218u;
        goto label_47b218;
    }
    ctx->pc = 0x47B210u;
    {
        const bool branch_taken_0x47b210 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 4));
        if (branch_taken_0x47b210) {
            ctx->pc = 0x47B214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47B210u;
            // 0x47b214: 0x8c730084  lw          $s3, 0x84($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47B220u;
            goto label_47b220;
        }
    }
    ctx->pc = 0x47B218u;
label_47b218:
    // 0x47b218: 0x10000024  b           . + 4 + (0x24 << 2)
label_47b21c:
    if (ctx->pc == 0x47B21Cu) {
        ctx->pc = 0x47B220u;
        goto label_47b220;
    }
    ctx->pc = 0x47B218u;
    {
        const bool branch_taken_0x47b218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b218) {
            ctx->pc = 0x47B2ACu;
            goto label_47b2ac;
        }
    }
    ctx->pc = 0x47B220u;
label_47b220:
    // 0x47b220: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x47b220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_47b224:
    // 0x47b224: 0x24a5f3a0  addiu       $a1, $a1, -0xC60
    ctx->pc = 0x47b224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964128));
label_47b228:
    // 0x47b228: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x47b228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_47b22c:
    // 0x47b22c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x47b22cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b230:
    // 0x47b230: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x47b230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b234:
    // 0x47b234: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x47b234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b238:
    // 0x47b238: 0x1000001e  b           . + 4 + (0x1E << 2)
label_47b23c:
    if (ctx->pc == 0x47B23Cu) {
        ctx->pc = 0x47B23Cu;
            // 0x47b23c: 0xac857610  sw          $a1, 0x7610($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 30224), GPR_U32(ctx, 5));
        ctx->pc = 0x47B240u;
        goto label_47b240;
    }
    ctx->pc = 0x47B238u;
    {
        const bool branch_taken_0x47b238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B238u;
            // 0x47b23c: 0xac857610  sw          $a1, 0x7610($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 30224), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b238) {
            ctx->pc = 0x47B2B4u;
            goto label_47b2b4;
        }
    }
    ctx->pc = 0x47B240u;
label_47b240:
    // 0x47b240: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x47b240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_47b244:
    // 0x47b244: 0x90670090  lbu         $a3, 0x90($v1)
    ctx->pc = 0x47b244u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 144)));
label_47b248:
    // 0x47b248: 0x24a5f3e0  addiu       $a1, $a1, -0xC20
    ctx->pc = 0x47b248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964192));
label_47b24c:
    // 0x47b24c: 0x8c660084  lw          $a2, 0x84($v1)
    ctx->pc = 0x47b24cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_47b250:
    // 0x47b250: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x47b250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_47b254:
    // 0x47b254: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x47b254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b258:
    // 0x47b258: 0x1079823  subu        $s3, $t0, $a3
    ctx->pc = 0x47b258u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_47b25c:
    // 0x47b25c: 0xac857610  sw          $a1, 0x7610($a0)
    ctx->pc = 0x47b25cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 30224), GPR_U32(ctx, 5));
label_47b260:
    // 0x47b260: 0xd38823  subu        $s1, $a2, $s3
    ctx->pc = 0x47b260u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_47b264:
    // 0x47b264: 0x8c66008c  lw          $a2, 0x8C($v1)
    ctx->pc = 0x47b264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_47b268:
    // 0x47b268: 0x90640090  lbu         $a0, 0x90($v1)
    ctx->pc = 0x47b268u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 144)));
label_47b26c:
    // 0x47b26c: 0x2a63021  addu        $a2, $s5, $a2
    ctx->pc = 0x47b26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
label_47b270:
    // 0x47b270: 0x10000010  b           . + 4 + (0x10 << 2)
label_47b274:
    if (ctx->pc == 0x47B274u) {
        ctx->pc = 0x47B274u;
            // 0x47b274: 0xc43023  subu        $a2, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->pc = 0x47B278u;
        goto label_47b278;
    }
    ctx->pc = 0x47B270u;
    {
        const bool branch_taken_0x47b270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B270u;
            // 0x47b274: 0xc43023  subu        $a2, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b270) {
            ctx->pc = 0x47B2B4u;
            goto label_47b2b4;
        }
    }
    ctx->pc = 0x47B278u;
label_47b278:
    // 0x47b278: 0x8c660080  lw          $a2, 0x80($v1)
    ctx->pc = 0x47b278u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_47b27c:
    // 0x47b27c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x47b27cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_47b280:
    // 0x47b280: 0x8c730084  lw          $s3, 0x84($v1)
    ctx->pc = 0x47b280u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_47b284:
    // 0x47b284: 0x24a5f420  addiu       $a1, $a1, -0xBE0
    ctx->pc = 0x47b284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964256));
label_47b288:
    // 0x47b288: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x47b288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_47b28c:
    // 0x47b28c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x47b28cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b290:
    // 0x47b290: 0xd49023  subu        $s2, $a2, $s4
    ctx->pc = 0x47b290u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
label_47b294:
    // 0x47b294: 0xac857610  sw          $a1, 0x7610($a0)
    ctx->pc = 0x47b294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 30224), GPR_U32(ctx, 5));
label_47b298:
    // 0x47b298: 0x8c66008c  lw          $a2, 0x8C($v1)
    ctx->pc = 0x47b298u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_47b29c:
    // 0x47b29c: 0x90640090  lbu         $a0, 0x90($v1)
    ctx->pc = 0x47b29cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 144)));
label_47b2a0:
    // 0x47b2a0: 0x2a63021  addu        $a2, $s5, $a2
    ctx->pc = 0x47b2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
label_47b2a4:
    // 0x47b2a4: 0x10000003  b           . + 4 + (0x3 << 2)
label_47b2a8:
    if (ctx->pc == 0x47B2A8u) {
        ctx->pc = 0x47B2A8u;
            // 0x47b2a8: 0xc43023  subu        $a2, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->pc = 0x47B2ACu;
        goto label_47b2ac;
    }
    ctx->pc = 0x47B2A4u;
    {
        const bool branch_taken_0x47b2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B2A4u;
            // 0x47b2a8: 0xc43023  subu        $a2, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b2a4) {
            ctx->pc = 0x47B2B4u;
            goto label_47b2b4;
        }
    }
    ctx->pc = 0x47B2ACu;
label_47b2ac:
    // 0x47b2ac: 0x10000086  b           . + 4 + (0x86 << 2)
label_47b2b0:
    if (ctx->pc == 0x47B2B0u) {
        ctx->pc = 0x47B2B0u;
            // 0x47b2b0: 0x7bbe0080  lq          $fp, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x47B2B4u;
        goto label_47b2b4;
    }
    ctx->pc = 0x47B2ACu;
    {
        const bool branch_taken_0x47b2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B2ACu;
            // 0x47b2b0: 0x7bbe0080  lq          $fp, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b2ac) {
            ctx->pc = 0x47B4C8u;
            goto label_47b4c8;
        }
    }
    ctx->pc = 0x47B2B4u;
label_47b2b4:
    // 0x47b2b4: 0x5483c  dsll32      $t1, $a1, 0
    ctx->pc = 0x47b2b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 0));
label_47b2b8:
    // 0x47b2b8: 0xd53823  subu        $a3, $a2, $s5
    ctx->pc = 0x47b2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
label_47b2bc:
    // 0x47b2bc: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x47b2bcu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
label_47b2c0:
    // 0x47b2c0: 0x3c054040  lui         $a1, 0x4040
    ctx->pc = 0x47b2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16448 << 16));
label_47b2c4:
    // 0x47b2c4: 0xc520002c  lwc1        $f0, 0x2C($t1)
    ctx->pc = 0x47b2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47b2c8:
    // 0x47b2c8: 0x3c0c00af  lui         $t4, 0xAF
    ctx->pc = 0x47b2c8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)175 << 16));
label_47b2cc:
    // 0x47b2cc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x47b2ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_47b2d0:
    // 0x47b2d0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x47b2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_47b2d4:
    // 0x47b2d4: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x47b2d4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b2d8:
    // 0x47b2d8: 0x258c7620  addiu       $t4, $t4, 0x7620
    ctx->pc = 0x47b2d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 30240));
label_47b2dc:
    // 0x47b2dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47b2dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47b2e0:
    // 0x47b2e0: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x47b2e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47b2e4:
    // 0x47b2e4: 0x24170003  addiu       $s7, $zero, 0x3
    ctx->pc = 0x47b2e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47b2e8:
    // 0x47b2e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x47b2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47b2ec:
    // 0x47b2ec: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x47b2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_47b2f0:
    // 0x47b2f0: 0xe4807750  swc1        $f0, 0x7750($a0)
    ctx->pc = 0x47b2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 30544), bits); }
label_47b2f4:
    // 0x47b2f4: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x47b2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_47b2f8:
    // 0x47b2f8: 0x2a72021  addu        $a0, $s5, $a3
    ctx->pc = 0x47b2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_47b2fc:
    // 0x47b2fc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x47b2fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_47b300:
    // 0x47b300: 0x741823  subu        $v1, $v1, $s4
    ctx->pc = 0x47b300u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_47b304:
    // 0x47b304: 0x6a4023  subu        $t0, $v1, $t2
    ctx->pc = 0x47b304u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_47b308:
    // 0x47b308: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x47b308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_47b30c:
    // 0x47b30c: 0x280782d  daddu       $t7, $s4, $zero
    ctx->pc = 0x47b30cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_47b310:
    // 0x47b310: 0x2a0702d  daddu       $t6, $s5, $zero
    ctx->pc = 0x47b310u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_47b314:
    // 0x47b314: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x47b314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_47b318:
    // 0x47b318: 0x260c82d  daddu       $t9, $s3, $zero
    ctx->pc = 0x47b318u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47b31c:
    // 0x47b31c: 0x1165000e  beq         $t3, $a1, . + 4 + (0xE << 2)
label_47b320:
    if (ctx->pc == 0x47B320u) {
        ctx->pc = 0x47B320u;
            // 0x47b320: 0xc0c02d  daddu       $t8, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47B324u;
        goto label_47b324;
    }
    ctx->pc = 0x47B31Cu;
    {
        const bool branch_taken_0x47b31c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 5));
        ctx->pc = 0x47B320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B31Cu;
            // 0x47b320: 0xc0c02d  daddu       $t8, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b31c) {
            ctx->pc = 0x47B358u;
            goto label_47b358;
        }
    }
    ctx->pc = 0x47B324u;
label_47b324:
    // 0x47b324: 0x1177000c  beq         $t3, $s7, . + 4 + (0xC << 2)
label_47b328:
    if (ctx->pc == 0x47B328u) {
        ctx->pc = 0x47B32Cu;
        goto label_47b32c;
    }
    ctx->pc = 0x47B324u;
    {
        const bool branch_taken_0x47b324 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 23));
        if (branch_taken_0x47b324) {
            ctx->pc = 0x47B358u;
            goto label_47b358;
        }
    }
    ctx->pc = 0x47B32Cu;
label_47b32c:
    // 0x47b32c: 0x117e0004  beq         $t3, $fp, . + 4 + (0x4 << 2)
label_47b330:
    if (ctx->pc == 0x47B330u) {
        ctx->pc = 0x47B334u;
        goto label_47b334;
    }
    ctx->pc = 0x47B32Cu;
    {
        const bool branch_taken_0x47b32c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 30));
        if (branch_taken_0x47b32c) {
            ctx->pc = 0x47B340u;
            goto label_47b340;
        }
    }
    ctx->pc = 0x47B334u;
label_47b334:
    // 0x47b334: 0x10000014  b           . + 4 + (0x14 << 2)
label_47b338:
    if (ctx->pc == 0x47B338u) {
        ctx->pc = 0x47B33Cu;
        goto label_47b33c;
    }
    ctx->pc = 0x47B334u;
    {
        const bool branch_taken_0x47b334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b334) {
            ctx->pc = 0x47B388u;
            goto label_47b388;
        }
    }
    ctx->pc = 0x47B33Cu;
label_47b33c:
    // 0x47b33c: 0x0  nop
    ctx->pc = 0x47b33cu;
    // NOP
label_47b340:
    // 0x47b340: 0x31b60001  andi        $s6, $t5, 0x1
    ctx->pc = 0x47b340u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
label_47b344:
    // 0x47b344: 0x12c00010  beqz        $s6, . + 4 + (0x10 << 2)
label_47b348:
    if (ctx->pc == 0x47B348u) {
        ctx->pc = 0x47B34Cu;
        goto label_47b34c;
    }
    ctx->pc = 0x47B344u;
    {
        const bool branch_taken_0x47b344 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b344) {
            ctx->pc = 0x47B388u;
            goto label_47b388;
        }
    }
    ctx->pc = 0x47B34Cu;
label_47b34c:
    // 0x47b34c: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x47b34cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47b350:
    // 0x47b350: 0x1000000d  b           . + 4 + (0xD << 2)
label_47b354:
    if (ctx->pc == 0x47B354u) {
        ctx->pc = 0x47B354u;
            // 0x47b354: 0x60c82d  daddu       $t9, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47B358u;
        goto label_47b358;
    }
    ctx->pc = 0x47B350u;
    {
        const bool branch_taken_0x47b350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B350u;
            // 0x47b354: 0x60c82d  daddu       $t9, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b350) {
            ctx->pc = 0x47B388u;
            goto label_47b388;
        }
    }
    ctx->pc = 0x47B358u;
label_47b358:
    // 0x47b358: 0x31b60001  andi        $s6, $t5, 0x1
    ctx->pc = 0x47b358u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
label_47b35c:
    // 0x47b35c: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_47b360:
    if (ctx->pc == 0x47B360u) {
        ctx->pc = 0x47B364u;
        goto label_47b364;
    }
    ctx->pc = 0x47B35Cu;
    {
        const bool branch_taken_0x47b35c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b35c) {
            ctx->pc = 0x47B370u;
            goto label_47b370;
        }
    }
    ctx->pc = 0x47B364u;
label_47b364:
    // 0x47b364: 0x1e87821  addu        $t7, $t7, $t0
    ctx->pc = 0x47b364u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
label_47b368:
    // 0x47b368: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x47b368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_47b36c:
    // 0x47b36c: 0x2418ffff  addiu       $t8, $zero, -0x1
    ctx->pc = 0x47b36cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47b370:
    // 0x47b370: 0x31b60002  andi        $s6, $t5, 0x2
    ctx->pc = 0x47b370u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)2);
label_47b374:
    // 0x47b374: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_47b378:
    if (ctx->pc == 0x47B378u) {
        ctx->pc = 0x47B37Cu;
        goto label_47b37c;
    }
    ctx->pc = 0x47B374u;
    {
        const bool branch_taken_0x47b374 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b374) {
            ctx->pc = 0x47B388u;
            goto label_47b388;
        }
    }
    ctx->pc = 0x47B37Cu;
label_47b37c:
    // 0x47b37c: 0x1c77021  addu        $t6, $t6, $a3
    ctx->pc = 0x47b37cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
label_47b380:
    // 0x47b380: 0x331c821  addu        $t9, $t9, $s1
    ctx->pc = 0x47b380u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 17)));
label_47b384:
    // 0x47b384: 0x0  nop
    ctx->pc = 0x47b384u;
    // NOP
label_47b388:
    // 0x47b388: 0xad8f0000  sw          $t7, 0x0($t4)
    ctx->pc = 0x47b388u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 15));
label_47b38c:
    // 0x47b38c: 0x44980000  mtc1        $t8, $f0
    ctx->pc = 0x47b38cu;
    { uint32_t bits = GPR_U32(ctx, 24); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47b390:
    // 0x47b390: 0xad8e0004  sw          $t6, 0x4($t4)
    ctx->pc = 0x47b390u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 14));
label_47b394:
    // 0x47b394: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x47b394u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_47b398:
    // 0x47b398: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x47b398u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_47b39c:
    // 0x47b39c: 0xad860008  sw          $a2, 0x8($t4)
    ctx->pc = 0x47b39cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 6));
label_47b3a0:
    // 0x47b3a0: 0x1abb02a  slt         $s6, $t5, $t3
    ctx->pc = 0x47b3a0u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_47b3a4:
    // 0x47b3a4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x47b3a4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47b3a8:
    // 0x47b3a8: 0x0  nop
    ctx->pc = 0x47b3a8u;
    // NOP
label_47b3ac:
    // 0x47b3ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x47b3acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_47b3b0:
    // 0x47b3b0: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x47b3b0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_47b3b4:
    // 0x47b3b4: 0x44990000  mtc1        $t9, $f0
    ctx->pc = 0x47b3b4u;
    { uint32_t bits = GPR_U32(ctx, 25); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47b3b8:
    // 0x47b3b8: 0x0  nop
    ctx->pc = 0x47b3b8u;
    // NOP
label_47b3bc:
    // 0x47b3bc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x47b3bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_47b3c0:
    // 0x47b3c0: 0xc520001c  lwc1        $f0, 0x1C($t1)
    ctx->pc = 0x47b3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47b3c4:
    // 0x47b3c4: 0x4603001c  madd.s      $f0, $f0, $f3
    ctx->pc = 0x47b3c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
label_47b3c8:
    // 0x47b3c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47b3c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_47b3cc:
    // 0x47b3cc: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x47b3ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_47b3d0:
    // 0x47b3d0: 0x0  nop
    ctx->pc = 0x47b3d0u;
    // NOP
label_47b3d4:
    // 0x47b3d4: 0xad900014  sw          $s0, 0x14($t4)
    ctx->pc = 0x47b3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 16));
label_47b3d8:
    // 0x47b3d8: 0xc5200020  lwc1        $f0, 0x20($t1)
    ctx->pc = 0x47b3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47b3dc:
    // 0x47b3dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x47b3dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_47b3e0:
    // 0x47b3e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47b3e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_47b3e4:
    // 0x47b3e4: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x47b3e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_47b3e8:
    // 0x47b3e8: 0x0  nop
    ctx->pc = 0x47b3e8u;
    // NOP
label_47b3ec:
    // 0x47b3ec: 0xad900018  sw          $s0, 0x18($t4)
    ctx->pc = 0x47b3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 16));
label_47b3f0:
    // 0x47b3f0: 0xad80001c  sw          $zero, 0x1C($t4)
    ctx->pc = 0x47b3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 28), GPR_U32(ctx, 0));
label_47b3f4:
    // 0x47b3f4: 0xa58a0024  sh          $t2, 0x24($t4)
    ctx->pc = 0x47b3f4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 36), (uint16_t)GPR_U32(ctx, 10));
label_47b3f8:
    // 0x47b3f8: 0xa58a0020  sh          $t2, 0x20($t4)
    ctx->pc = 0x47b3f8u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 32), (uint16_t)GPR_U32(ctx, 10));
label_47b3fc:
    // 0x47b3fc: 0x81380027  lb          $t8, 0x27($t1)
    ctx->pc = 0x47b3fcu;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 39)));
label_47b400:
    // 0x47b400: 0x91300029  lbu         $s0, 0x29($t1)
    ctx->pc = 0x47b400u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 41)));
label_47b404:
    // 0x47b404: 0x3108023  subu        $s0, $t8, $s0
    ctx->pc = 0x47b404u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 16)));
label_47b408:
    // 0x47b408: 0xa5900022  sh          $s0, 0x22($t4)
    ctx->pc = 0x47b408u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 34), (uint16_t)GPR_U32(ctx, 16));
label_47b40c:
    // 0x47b40c: 0x81300027  lb          $s0, 0x27($t1)
    ctx->pc = 0x47b40cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 39)));
label_47b410:
    // 0x47b410: 0xa5900026  sh          $s0, 0x26($t4)
    ctx->pc = 0x47b410u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 38), (uint16_t)GPR_U32(ctx, 16));
label_47b414:
    // 0x47b414: 0xc520002c  lwc1        $f0, 0x2C($t1)
    ctx->pc = 0x47b414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47b418:
    // 0x47b418: 0xe5800028  swc1        $f0, 0x28($t4)
    ctx->pc = 0x47b418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 40), bits); }
label_47b41c:
    // 0x47b41c: 0x91300024  lbu         $s0, 0x24($t1)
    ctx->pc = 0x47b41cu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 36)));
label_47b420:
    // 0x47b420: 0xa5900030  sh          $s0, 0x30($t4)
    ctx->pc = 0x47b420u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 48), (uint16_t)GPR_U32(ctx, 16));
label_47b424:
    // 0x47b424: 0xa590002c  sh          $s0, 0x2C($t4)
    ctx->pc = 0x47b424u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 44), (uint16_t)GPR_U32(ctx, 16));
label_47b428:
    // 0x47b428: 0x81380027  lb          $t8, 0x27($t1)
    ctx->pc = 0x47b428u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 39)));
label_47b42c:
    // 0x47b42c: 0x91300029  lbu         $s0, 0x29($t1)
    ctx->pc = 0x47b42cu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 41)));
label_47b430:
    // 0x47b430: 0x3108023  subu        $s0, $t8, $s0
    ctx->pc = 0x47b430u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 16)));
label_47b434:
    // 0x47b434: 0xa590002e  sh          $s0, 0x2E($t4)
    ctx->pc = 0x47b434u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 46), (uint16_t)GPR_U32(ctx, 16));
label_47b438:
    // 0x47b438: 0x81300027  lb          $s0, 0x27($t1)
    ctx->pc = 0x47b438u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 39)));
label_47b43c:
    // 0x47b43c: 0xa5900032  sh          $s0, 0x32($t4)
    ctx->pc = 0x47b43cu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 50), (uint16_t)GPR_U32(ctx, 16));
label_47b440:
    // 0x47b440: 0xc520002c  lwc1        $f0, 0x2C($t1)
    ctx->pc = 0x47b440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47b444:
    // 0x47b444: 0xe5800034  swc1        $f0, 0x34($t4)
    ctx->pc = 0x47b444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 52), bits); }
label_47b448:
    // 0x47b448: 0x91300025  lbu         $s0, 0x25($t1)
    ctx->pc = 0x47b448u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 37)));
label_47b44c:
    // 0x47b44c: 0xa590003c  sh          $s0, 0x3C($t4)
    ctx->pc = 0x47b44cu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 60), (uint16_t)GPR_U32(ctx, 16));
label_47b450:
    // 0x47b450: 0xa5900038  sh          $s0, 0x38($t4)
    ctx->pc = 0x47b450u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 56), (uint16_t)GPR_U32(ctx, 16));
label_47b454:
    // 0x47b454: 0x81380028  lb          $t8, 0x28($t1)
    ctx->pc = 0x47b454u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 40)));
label_47b458:
    // 0x47b458: 0x91300029  lbu         $s0, 0x29($t1)
    ctx->pc = 0x47b458u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 41)));
label_47b45c:
    // 0x47b45c: 0x3108023  subu        $s0, $t8, $s0
    ctx->pc = 0x47b45cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 16)));
label_47b460:
    // 0x47b460: 0xa590003a  sh          $s0, 0x3A($t4)
    ctx->pc = 0x47b460u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 58), (uint16_t)GPR_U32(ctx, 16));
label_47b464:
    // 0x47b464: 0x81300028  lb          $s0, 0x28($t1)
    ctx->pc = 0x47b464u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 40)));
label_47b468:
    // 0x47b468: 0xa590003e  sh          $s0, 0x3E($t4)
    ctx->pc = 0x47b468u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 62), (uint16_t)GPR_U32(ctx, 16));
label_47b46c:
    // 0x47b46c: 0xc520002c  lwc1        $f0, 0x2C($t1)
    ctx->pc = 0x47b46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47b470:
    // 0x47b470: 0xe5800040  swc1        $f0, 0x40($t4)
    ctx->pc = 0x47b470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 64), bits); }
label_47b474:
    // 0x47b474: 0x91300026  lbu         $s0, 0x26($t1)
    ctx->pc = 0x47b474u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 38)));
label_47b478:
    // 0x47b478: 0xa5900048  sh          $s0, 0x48($t4)
    ctx->pc = 0x47b478u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 72), (uint16_t)GPR_U32(ctx, 16));
label_47b47c:
    // 0x47b47c: 0xa5900044  sh          $s0, 0x44($t4)
    ctx->pc = 0x47b47cu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 68), (uint16_t)GPR_U32(ctx, 16));
label_47b480:
    // 0x47b480: 0x81380028  lb          $t8, 0x28($t1)
    ctx->pc = 0x47b480u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 40)));
label_47b484:
    // 0x47b484: 0x91300029  lbu         $s0, 0x29($t1)
    ctx->pc = 0x47b484u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 41)));
label_47b488:
    // 0x47b488: 0x3108023  subu        $s0, $t8, $s0
    ctx->pc = 0x47b488u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 16)));
label_47b48c:
    // 0x47b48c: 0xa5900046  sh          $s0, 0x46($t4)
    ctx->pc = 0x47b48cu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 70), (uint16_t)GPR_U32(ctx, 16));
label_47b490:
    // 0x47b490: 0x81300028  lb          $s0, 0x28($t1)
    ctx->pc = 0x47b490u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 40)));
label_47b494:
    // 0x47b494: 0xa590004a  sh          $s0, 0x4A($t4)
    ctx->pc = 0x47b494u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 74), (uint16_t)GPR_U32(ctx, 16));
label_47b498:
    // 0x47b498: 0x85900044  lh          $s0, 0x44($t4)
    ctx->pc = 0x47b498u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 68)));
label_47b49c:
    // 0x47b49c: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x47b49cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_47b4a0:
    // 0x47b4a0: 0xad8f000c  sw          $t7, 0xC($t4)
    ctx->pc = 0x47b4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 15));
label_47b4a4:
    // 0x47b4a4: 0x81300028  lb          $s0, 0x28($t1)
    ctx->pc = 0x47b4a4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 40)));
label_47b4a8:
    // 0x47b4a8: 0x912f0029  lbu         $t7, 0x29($t1)
    ctx->pc = 0x47b4a8u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 41)));
label_47b4ac:
    // 0x47b4ac: 0x1d08021  addu        $s0, $t6, $s0
    ctx->pc = 0x47b4acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
label_47b4b0:
    // 0x47b4b0: 0xf7043  sra         $t6, $t7, 1
    ctx->pc = 0x47b4b0u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 15), 1));
label_47b4b4:
    // 0x47b4b4: 0x20e7023  subu        $t6, $s0, $t6
    ctx->pc = 0x47b4b4u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 14)));
label_47b4b8:
    // 0x47b4b8: 0xad8e0010  sw          $t6, 0x10($t4)
    ctx->pc = 0x47b4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 14));
label_47b4bc:
    // 0x47b4bc: 0x16c0ff93  bnez        $s6, . + 4 + (-0x6D << 2)
label_47b4c0:
    if (ctx->pc == 0x47B4C0u) {
        ctx->pc = 0x47B4C0u;
            // 0x47b4c0: 0x258c004c  addiu       $t4, $t4, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 76));
        ctx->pc = 0x47B4C4u;
        goto label_47b4c4;
    }
    ctx->pc = 0x47B4BCu;
    {
        const bool branch_taken_0x47b4bc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x47B4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B4BCu;
            // 0x47b4c0: 0x258c004c  addiu       $t4, $t4, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b4bc) {
            ctx->pc = 0x47B30Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47b30c;
        }
    }
    ctx->pc = 0x47B4C4u;
label_47b4c4:
    // 0x47b4c4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x47b4c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_47b4c8:
    // 0x47b4c8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x47b4c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_47b4cc:
    // 0x47b4cc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x47b4ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_47b4d0:
    // 0x47b4d0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x47b4d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47b4d4:
    // 0x47b4d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x47b4d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47b4d8:
    // 0x47b4d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47b4d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47b4dc:
    // 0x47b4dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47b4dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47b4e0:
    // 0x47b4e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47b4e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47b4e4:
    // 0x47b4e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47b4e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47b4e8:
    // 0x47b4e8: 0x3e00008  jr          $ra
label_47b4ec:
    if (ctx->pc == 0x47B4ECu) {
        ctx->pc = 0x47B4ECu;
            // 0x47b4ec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x47B4F0u;
        goto label_47b4f0;
    }
    ctx->pc = 0x47B4E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47B4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B4E8u;
            // 0x47b4ec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47B4F0u;
label_47b4f0:
    // 0x47b4f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47b4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_47b4f4:
    // 0x47b4f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x47b4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_47b4f8:
    // 0x47b4f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47b4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47b4fc:
    // 0x47b4fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47b4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47b500:
    // 0x47b500: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47b500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47b504:
    // 0x47b504: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_47b508:
    if (ctx->pc == 0x47B508u) {
        ctx->pc = 0x47B508u;
            // 0x47b508: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47B50Cu;
        goto label_47b50c;
    }
    ctx->pc = 0x47B504u;
    {
        const bool branch_taken_0x47b504 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B504u;
            // 0x47b508: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b504) {
            ctx->pc = 0x47B560u;
            goto label_47b560;
        }
    }
    ctx->pc = 0x47B50Cu;
label_47b50c:
    // 0x47b50c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x47b50cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_47b510:
    // 0x47b510: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x47b510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_47b514:
    // 0x47b514: 0x2463ec40  addiu       $v1, $v1, -0x13C0
    ctx->pc = 0x47b514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962240));
label_47b518:
    // 0x47b518: 0x2442ec78  addiu       $v0, $v0, -0x1388
    ctx->pc = 0x47b518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962296));
label_47b51c:
    // 0x47b51c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x47b51cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_47b520:
    // 0x47b520: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_47b524:
    if (ctx->pc == 0x47B524u) {
        ctx->pc = 0x47B524u;
            // 0x47b524: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x47B528u;
        goto label_47b528;
    }
    ctx->pc = 0x47B520u;
    {
        const bool branch_taken_0x47b520 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B520u;
            // 0x47b524: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b520) {
            ctx->pc = 0x47B548u;
            goto label_47b548;
        }
    }
    ctx->pc = 0x47B528u;
label_47b528:
    // 0x47b528: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x47b528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_47b52c:
    // 0x47b52c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x47b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_47b530:
    // 0x47b530: 0x24631f40  addiu       $v1, $v1, 0x1F40
    ctx->pc = 0x47b530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8000));
label_47b534:
    // 0x47b534: 0x24421f78  addiu       $v0, $v0, 0x1F78
    ctx->pc = 0x47b534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8056));
label_47b538:
    // 0x47b538: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x47b538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_47b53c:
    // 0x47b53c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47b53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b540:
    // 0x47b540: 0xc0af52c  jal         func_2BD4B0
label_47b544:
    if (ctx->pc == 0x47B544u) {
        ctx->pc = 0x47B544u;
            // 0x47b544: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x47B548u;
        goto label_47b548;
    }
    ctx->pc = 0x47B540u;
    SET_GPR_U32(ctx, 31, 0x47B548u);
    ctx->pc = 0x47B544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47B540u;
            // 0x47b544: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BD4B0u;
    if (runtime->hasFunction(0x2BD4B0u)) {
        auto targetFn = runtime->lookupFunction(0x2BD4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B548u; }
        if (ctx->pc != 0x47B548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BD4B0_0x2bd4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B548u; }
        if (ctx->pc != 0x47B548u) { return; }
    }
    ctx->pc = 0x47B548u;
label_47b548:
    // 0x47b548: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x47b548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_47b54c:
    // 0x47b54c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47b54cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_47b550:
    // 0x47b550: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_47b554:
    if (ctx->pc == 0x47B554u) {
        ctx->pc = 0x47B554u;
            // 0x47b554: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47B558u;
        goto label_47b558;
    }
    ctx->pc = 0x47B550u;
    {
        const bool branch_taken_0x47b550 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x47b550) {
            ctx->pc = 0x47B554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47B550u;
            // 0x47b554: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47B564u;
            goto label_47b564;
        }
    }
    ctx->pc = 0x47B558u;
label_47b558:
    // 0x47b558: 0xc0400a8  jal         func_1002A0
label_47b55c:
    if (ctx->pc == 0x47B55Cu) {
        ctx->pc = 0x47B55Cu;
            // 0x47b55c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47B560u;
        goto label_47b560;
    }
    ctx->pc = 0x47B558u;
    SET_GPR_U32(ctx, 31, 0x47B560u);
    ctx->pc = 0x47B55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47B558u;
            // 0x47b55c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B560u; }
        if (ctx->pc != 0x47B560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B560u; }
        if (ctx->pc != 0x47B560u) { return; }
    }
    ctx->pc = 0x47B560u;
label_47b560:
    // 0x47b560: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47b560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47b564:
    // 0x47b564: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x47b564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_47b568:
    // 0x47b568: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47b568u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47b56c:
    // 0x47b56c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47b56cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47b570:
    // 0x47b570: 0x3e00008  jr          $ra
label_47b574:
    if (ctx->pc == 0x47B574u) {
        ctx->pc = 0x47B574u;
            // 0x47b574: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x47B578u;
        goto label_47b578;
    }
    ctx->pc = 0x47B570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47B574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B570u;
            // 0x47b574: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47B578u;
label_47b578:
    // 0x47b578: 0x0  nop
    ctx->pc = 0x47b578u;
    // NOP
label_47b57c:
    // 0x47b57c: 0x0  nop
    ctx->pc = 0x47b57cu;
    // NOP
label_47b580:
    // 0x47b580: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x47b580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_47b584:
    // 0x47b584: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x47b584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_47b588:
    // 0x47b588: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x47b588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_47b58c:
    // 0x47b58c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x47b58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_47b590:
    // 0x47b590: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x47b590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_47b594:
    // 0x47b594: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x47b594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_47b598:
    // 0x47b598: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x47b598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_47b59c:
    // 0x47b59c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x47b59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_47b5a0:
    // 0x47b5a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47b5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_47b5a4:
    // 0x47b5a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47b5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47b5a8:
    // 0x47b5a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47b5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47b5ac:
    // 0x47b5ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47b5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47b5b0:
    // 0x47b5b0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x47b5b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_47b5b4:
    // 0x47b5b4: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_47b5b8:
    if (ctx->pc == 0x47B5B8u) {
        ctx->pc = 0x47B5B8u;
            // 0x47b5b8: 0xafa400dc  sw          $a0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 4));
        ctx->pc = 0x47B5BCu;
        goto label_47b5bc;
    }
    ctx->pc = 0x47B5B4u;
    {
        const bool branch_taken_0x47b5b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x47B5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B5B4u;
            // 0x47b5b8: 0xafa400dc  sw          $a0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b5b4) {
            ctx->pc = 0x47B604u;
            goto label_47b604;
        }
    }
    ctx->pc = 0x47B5BCu;
label_47b5bc:
    // 0x47b5bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x47b5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47b5c0:
    // 0x47b5c0: 0x50a3006c  beql        $a1, $v1, . + 4 + (0x6C << 2)
label_47b5c4:
    if (ctx->pc == 0x47B5C4u) {
        ctx->pc = 0x47B5C4u;
            // 0x47b5c4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x47B5C8u;
        goto label_47b5c8;
    }
    ctx->pc = 0x47B5C0u;
    {
        const bool branch_taken_0x47b5c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x47b5c0) {
            ctx->pc = 0x47B5C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47B5C0u;
            // 0x47b5c4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47B774u;
            goto label_47b774;
        }
    }
    ctx->pc = 0x47B5C8u;
label_47b5c8:
    // 0x47b5c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x47b5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47b5cc:
    // 0x47b5cc: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_47b5d0:
    if (ctx->pc == 0x47B5D0u) {
        ctx->pc = 0x47B5D4u;
        goto label_47b5d4;
    }
    ctx->pc = 0x47B5CCu;
    {
        const bool branch_taken_0x47b5cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x47b5cc) {
            ctx->pc = 0x47B5DCu;
            goto label_47b5dc;
        }
    }
    ctx->pc = 0x47B5D4u;
label_47b5d4:
    // 0x47b5d4: 0x10000066  b           . + 4 + (0x66 << 2)
label_47b5d8:
    if (ctx->pc == 0x47B5D8u) {
        ctx->pc = 0x47B5DCu;
        goto label_47b5dc;
    }
    ctx->pc = 0x47B5D4u;
    {
        const bool branch_taken_0x47b5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b5d4) {
            ctx->pc = 0x47B770u;
            goto label_47b770;
        }
    }
    ctx->pc = 0x47B5DCu;
label_47b5dc:
    // 0x47b5dc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47b5e0:
    // 0x47b5e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x47b5e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47b5e4:
    // 0x47b5e4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x47b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_47b5e8:
    // 0x47b5e8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x47b5e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_47b5ec:
    // 0x47b5ec: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x47b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_47b5f0:
    // 0x47b5f0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x47b5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_47b5f4:
    // 0x47b5f4: 0x320f809  jalr        $t9
label_47b5f8:
    if (ctx->pc == 0x47B5F8u) {
        ctx->pc = 0x47B5F8u;
            // 0x47b5f8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x47B5FCu;
        goto label_47b5fc;
    }
    ctx->pc = 0x47B5F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47B5FCu);
        ctx->pc = 0x47B5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B5F4u;
            // 0x47b5f8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47B5FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47B5FCu; }
            if (ctx->pc != 0x47B5FCu) { return; }
        }
        }
    }
    ctx->pc = 0x47B5FCu;
label_47b5fc:
    // 0x47b5fc: 0x1000005c  b           . + 4 + (0x5C << 2)
label_47b600:
    if (ctx->pc == 0x47B600u) {
        ctx->pc = 0x47B604u;
        goto label_47b604;
    }
    ctx->pc = 0x47B5FCu;
    {
        const bool branch_taken_0x47b5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b5fc) {
            ctx->pc = 0x47B770u;
            goto label_47b770;
        }
    }
    ctx->pc = 0x47B604u;
label_47b604:
    // 0x47b604: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x47b604u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47b608:
    // 0x47b608: 0x8c770070  lw          $s7, 0x70($v1)
    ctx->pc = 0x47b608u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_47b60c:
    // 0x47b60c: 0x12e00058  beqz        $s7, . + 4 + (0x58 << 2)
label_47b610:
    if (ctx->pc == 0x47B610u) {
        ctx->pc = 0x47B614u;
        goto label_47b614;
    }
    ctx->pc = 0x47B60Cu;
    {
        const bool branch_taken_0x47b60c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b60c) {
            ctx->pc = 0x47B770u;
            goto label_47b770;
        }
    }
    ctx->pc = 0x47B614u;
label_47b614:
    // 0x47b614: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47b614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47b618:
    // 0x47b618: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x47b618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_47b61c:
    // 0x47b61c: 0x8c5ee378  lw          $fp, -0x1C88($v0)
    ctx->pc = 0x47b61cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_47b620:
    // 0x47b620: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x47b620u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b624:
    // 0x47b624: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x47b624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_47b628:
    // 0x47b628: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x47b628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b62c:
    // 0x47b62c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x47b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_47b630:
    // 0x47b630: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x47b630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_47b634:
    // 0x47b634: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47b634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_47b638:
    // 0x47b638: 0x8cb60130  lw          $s6, 0x130($a1)
    ctx->pc = 0x47b638u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_47b63c:
    // 0x47b63c: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x47b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_47b640:
    // 0x47b640: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x47b640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_47b644:
    // 0x47b644: 0x162880  sll         $a1, $s6, 2
    ctx->pc = 0x47b644u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_47b648:
    // 0x47b648: 0x24550084  addiu       $s5, $v0, 0x84
    ctx->pc = 0x47b648u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
label_47b64c:
    // 0x47b64c: 0x8c62e370  lw          $v0, -0x1C90($v1)
    ctx->pc = 0x47b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959984)));
label_47b650:
    // 0x47b650: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x47b650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_47b654:
    // 0x47b654: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x47b654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47b658:
    // 0x47b658: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x47b658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_47b65c:
    // 0x47b65c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47b65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_47b660:
    // 0x47b660: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47b660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47b664:
    // 0x47b664: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x47b664u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_47b668:
    // 0x47b668: 0xac40e3d8  sw          $zero, -0x1C28($v0)
    ctx->pc = 0x47b668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960088), GPR_U32(ctx, 0));
label_47b66c:
    // 0x47b66c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x47b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_47b670:
    // 0x47b670: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x47b670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_47b674:
    // 0x47b674: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x47b674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_47b678:
    // 0x47b678: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x47b678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_47b67c:
    // 0x47b67c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x47b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_47b680:
    // 0x47b680: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47b680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47b684:
    // 0x47b684: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x47b684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_47b688:
    // 0x47b688: 0xc0d1c0c  jal         func_347030
label_47b68c:
    if (ctx->pc == 0x47B68Cu) {
        ctx->pc = 0x47B68Cu;
            // 0x47b68c: 0x24440064  addiu       $a0, $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
        ctx->pc = 0x47B690u;
        goto label_47b690;
    }
    ctx->pc = 0x47B688u;
    SET_GPR_U32(ctx, 31, 0x47B690u);
    ctx->pc = 0x47B68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47B688u;
            // 0x47b68c: 0x24440064  addiu       $a0, $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347030u;
    if (runtime->hasFunction(0x347030u)) {
        auto targetFn = runtime->lookupFunction(0x347030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B690u; }
        if (ctx->pc != 0x47B690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347030_0x347030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B690u; }
        if (ctx->pc != 0x47B690u) { return; }
    }
    ctx->pc = 0x47B690u;
label_47b690:
    // 0x47b690: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x47b690u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47b694:
    // 0x47b694: 0x12600022  beqz        $s3, . + 4 + (0x22 << 2)
label_47b698:
    if (ctx->pc == 0x47B698u) {
        ctx->pc = 0x47B69Cu;
        goto label_47b69c;
    }
    ctx->pc = 0x47B694u;
    {
        const bool branch_taken_0x47b694 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b694) {
            ctx->pc = 0x47B720u;
            goto label_47b720;
        }
    }
    ctx->pc = 0x47B69Cu;
label_47b69c:
    // 0x47b69c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x47b69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_47b6a0:
    // 0x47b6a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47b6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47b6a4:
    // 0x47b6a4: 0xc11edf0  jal         func_47B7C0
label_47b6a8:
    if (ctx->pc == 0x47B6A8u) {
        ctx->pc = 0x47B6A8u;
            // 0x47b6a8: 0x24440064  addiu       $a0, $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
        ctx->pc = 0x47B6ACu;
        goto label_47b6ac;
    }
    ctx->pc = 0x47B6A4u;
    SET_GPR_U32(ctx, 31, 0x47B6ACu);
    ctx->pc = 0x47B6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47B6A4u;
            // 0x47b6a8: 0x24440064  addiu       $a0, $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47B7C0u;
    if (runtime->hasFunction(0x47B7C0u)) {
        auto targetFn = runtime->lookupFunction(0x47B7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B6ACu; }
        if (ctx->pc != 0x47B6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047B7C0_0x47b7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B6ACu; }
        if (ctx->pc != 0x47B6ACu) { return; }
    }
    ctx->pc = 0x47B6ACu;
label_47b6ac:
    // 0x47b6ac: 0xc11edec  jal         func_47B7B0
label_47b6b0:
    if (ctx->pc == 0x47B6B0u) {
        ctx->pc = 0x47B6B0u;
            // 0x47b6b0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47B6B4u;
        goto label_47b6b4;
    }
    ctx->pc = 0x47B6ACu;
    SET_GPR_U32(ctx, 31, 0x47B6B4u);
    ctx->pc = 0x47B6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47B6ACu;
            // 0x47b6b0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47B7B0u;
    if (runtime->hasFunction(0x47B7B0u)) {
        auto targetFn = runtime->lookupFunction(0x47B7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B6B4u; }
        if (ctx->pc != 0x47B6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047B7B0_0x47b7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B6B4u; }
        if (ctx->pc != 0x47B6B4u) { return; }
    }
    ctx->pc = 0x47B6B4u;
label_47b6b4:
    // 0x47b6b4: 0xc11ede8  jal         func_47B7A0
label_47b6b8:
    if (ctx->pc == 0x47B6B8u) {
        ctx->pc = 0x47B6B8u;
            // 0x47b6b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47B6BCu;
        goto label_47b6bc;
    }
    ctx->pc = 0x47B6B4u;
    SET_GPR_U32(ctx, 31, 0x47B6BCu);
    ctx->pc = 0x47B6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47B6B4u;
            // 0x47b6b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47B7A0u;
    if (runtime->hasFunction(0x47B7A0u)) {
        auto targetFn = runtime->lookupFunction(0x47B7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B6BCu; }
        if (ctx->pc != 0x47B6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047B7A0_0x47b7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B6BCu; }
        if (ctx->pc != 0x47B6BCu) { return; }
    }
    ctx->pc = 0x47B6BCu;
label_47b6bc:
    // 0x47b6bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x47b6bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47b6c0:
    // 0x47b6c0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x47b6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_47b6c4:
    // 0x47b6c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x47b6c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47b6c8:
    // 0x47b6c8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x47b6c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47b6cc:
    // 0x47b6cc: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x47b6ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_47b6d0:
    // 0x47b6d0: 0x320f809  jalr        $t9
label_47b6d4:
    if (ctx->pc == 0x47B6D4u) {
        ctx->pc = 0x47B6D8u;
        goto label_47b6d8;
    }
    ctx->pc = 0x47B6D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47B6D8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x47B6D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47B6D8u; }
            if (ctx->pc != 0x47B6D8u) { return; }
        }
        }
    }
    ctx->pc = 0x47B6D8u;
label_47b6d8:
    // 0x47b6d8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x47b6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_47b6dc:
    // 0x47b6dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x47b6dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_47b6e0:
    // 0x47b6e0: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x47b6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_47b6e4:
    // 0x47b6e4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x47b6e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_47b6e8:
    // 0x47b6e8: 0x8fa800c0  lw          $t0, 0xC0($sp)
    ctx->pc = 0x47b6e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_47b6ec:
    // 0x47b6ec: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x47b6ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_47b6f0:
    // 0x47b6f0: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x47b6f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_47b6f4:
    // 0x47b6f4: 0xc11eec4  jal         func_47BB10
label_47b6f8:
    if (ctx->pc == 0x47B6F8u) {
        ctx->pc = 0x47B6F8u;
            // 0x47b6f8: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47B6FCu;
        goto label_47b6fc;
    }
    ctx->pc = 0x47B6F4u;
    SET_GPR_U32(ctx, 31, 0x47B6FCu);
    ctx->pc = 0x47B6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47B6F4u;
            // 0x47b6f8: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47BB10u;
    if (runtime->hasFunction(0x47BB10u)) {
        auto targetFn = runtime->lookupFunction(0x47BB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B6FCu; }
        if (ctx->pc != 0x47B6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047BB10_0x47bb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B6FCu; }
        if (ctx->pc != 0x47B6FCu) { return; }
    }
    ctx->pc = 0x47B6FCu;
label_47b6fc:
    // 0x47b6fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_47b700:
    if (ctx->pc == 0x47B700u) {
        ctx->pc = 0x47B704u;
        goto label_47b704;
    }
    ctx->pc = 0x47B6FCu;
    {
        const bool branch_taken_0x47b6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b6fc) {
            ctx->pc = 0x47B710u;
            goto label_47b710;
        }
    }
    ctx->pc = 0x47B704u;
label_47b704:
    // 0x47b704: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47b704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47b708:
    // 0x47b708: 0xc0e0dcc  jal         func_383730
label_47b70c:
    if (ctx->pc == 0x47B70Cu) {
        ctx->pc = 0x47B70Cu;
            // 0x47b70c: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x47B710u;
        goto label_47b710;
    }
    ctx->pc = 0x47B708u;
    SET_GPR_U32(ctx, 31, 0x47B710u);
    ctx->pc = 0x47B70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47B708u;
            // 0x47b70c: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x383730u;
    if (runtime->hasFunction(0x383730u)) {
        auto targetFn = runtime->lookupFunction(0x383730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B710u; }
        if (ctx->pc != 0x47B710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00383730_0x383730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B710u; }
        if (ctx->pc != 0x47B710u) { return; }
    }
    ctx->pc = 0x47B710u;
label_47b710:
    // 0x47b710: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x47b710u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_47b714:
    // 0x47b714: 0x13182b  sltu        $v1, $zero, $s3
    ctx->pc = 0x47b714u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_47b718:
    // 0x47b718: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_47b71c:
    if (ctx->pc == 0x47B71Cu) {
        ctx->pc = 0x47B71Cu;
            // 0x47b71c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x47B720u;
        goto label_47b720;
    }
    ctx->pc = 0x47B718u;
    {
        const bool branch_taken_0x47b718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x47B71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B718u;
            // 0x47b71c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b718) {
            ctx->pc = 0x47B6C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47b6c0;
        }
    }
    ctx->pc = 0x47B720u;
label_47b720:
    // 0x47b720: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x47b720u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_47b724:
    // 0x47b724: 0x297182b  sltu        $v1, $s4, $s7
    ctx->pc = 0x47b724u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_47b728:
    // 0x47b728: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
label_47b72c:
    if (ctx->pc == 0x47B72Cu) {
        ctx->pc = 0x47B72Cu;
            // 0x47b72c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x47B730u;
        goto label_47b730;
    }
    ctx->pc = 0x47B728u;
    {
        const bool branch_taken_0x47b728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x47B72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B728u;
            // 0x47b72c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b728) {
            ctx->pc = 0x47B674u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47b674;
        }
    }
    ctx->pc = 0x47B730u;
label_47b730:
    // 0x47b730: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47b730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_47b734:
    // 0x47b734: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x47b734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_47b738:
    // 0x47b738: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_47b73c:
    if (ctx->pc == 0x47B73Cu) {
        ctx->pc = 0x47B740u;
        goto label_47b740;
    }
    ctx->pc = 0x47B738u;
    {
        const bool branch_taken_0x47b738 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x47b738) {
            ctx->pc = 0x47B770u;
            goto label_47b770;
        }
    }
    ctx->pc = 0x47B740u;
label_47b740:
    // 0x47b740: 0xc04e738  jal         func_139CE0
label_47b744:
    if (ctx->pc == 0x47B744u) {
        ctx->pc = 0x47B744u;
            // 0x47b744: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->pc = 0x47B748u;
        goto label_47b748;
    }
    ctx->pc = 0x47B740u;
    SET_GPR_U32(ctx, 31, 0x47B748u);
    ctx->pc = 0x47B744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47B740u;
            // 0x47b744: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B748u; }
        if (ctx->pc != 0x47B748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B748u; }
        if (ctx->pc != 0x47B748u) { return; }
    }
    ctx->pc = 0x47B748u;
label_47b748:
    // 0x47b748: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47b748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47b74c:
    // 0x47b74c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x47b74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_47b750:
    // 0x47b750: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x47b750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_47b754:
    // 0x47b754: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x47b754u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_47b758:
    // 0x47b758: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47b758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47b75c:
    // 0x47b75c: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x47b75cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_47b760:
    // 0x47b760: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47b760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47b764:
    // 0x47b764: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x47b764u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_47b768:
    // 0x47b768: 0xc055754  jal         func_155D50
label_47b76c:
    if (ctx->pc == 0x47B76Cu) {
        ctx->pc = 0x47B76Cu;
            // 0x47b76c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x47B770u;
        goto label_47b770;
    }
    ctx->pc = 0x47B768u;
    SET_GPR_U32(ctx, 31, 0x47B770u);
    ctx->pc = 0x47B76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47B768u;
            // 0x47b76c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B770u; }
        if (ctx->pc != 0x47B770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47B770u; }
        if (ctx->pc != 0x47B770u) { return; }
    }
    ctx->pc = 0x47B770u;
label_47b770:
    // 0x47b770: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x47b770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_47b774:
    // 0x47b774: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x47b774u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_47b778:
    // 0x47b778: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x47b778u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_47b77c:
    // 0x47b77c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x47b77cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_47b780:
    // 0x47b780: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x47b780u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47b784:
    // 0x47b784: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x47b784u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47b788:
    // 0x47b788: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47b788u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47b78c:
    // 0x47b78c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47b78cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47b790:
    // 0x47b790: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47b790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47b794:
    // 0x47b794: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47b794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47b798:
    // 0x47b798: 0x3e00008  jr          $ra
label_47b79c:
    if (ctx->pc == 0x47B79Cu) {
        ctx->pc = 0x47B79Cu;
            // 0x47b79c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x47B7A0u;
        goto label_fallthrough_0x47b798;
    }
    ctx->pc = 0x47B798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47B79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B798u;
            // 0x47b79c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x47b798:
    ctx->pc = 0x47B7A0u;
}
