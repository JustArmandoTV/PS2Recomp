#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0043B300
// Address: 0x43b300 - 0x43b960
void sub_0043B300_0x43b300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043B300_0x43b300");
#endif

    switch (ctx->pc) {
        case 0x43b300u: goto label_43b300;
        case 0x43b304u: goto label_43b304;
        case 0x43b308u: goto label_43b308;
        case 0x43b30cu: goto label_43b30c;
        case 0x43b310u: goto label_43b310;
        case 0x43b314u: goto label_43b314;
        case 0x43b318u: goto label_43b318;
        case 0x43b31cu: goto label_43b31c;
        case 0x43b320u: goto label_43b320;
        case 0x43b324u: goto label_43b324;
        case 0x43b328u: goto label_43b328;
        case 0x43b32cu: goto label_43b32c;
        case 0x43b330u: goto label_43b330;
        case 0x43b334u: goto label_43b334;
        case 0x43b338u: goto label_43b338;
        case 0x43b33cu: goto label_43b33c;
        case 0x43b340u: goto label_43b340;
        case 0x43b344u: goto label_43b344;
        case 0x43b348u: goto label_43b348;
        case 0x43b34cu: goto label_43b34c;
        case 0x43b350u: goto label_43b350;
        case 0x43b354u: goto label_43b354;
        case 0x43b358u: goto label_43b358;
        case 0x43b35cu: goto label_43b35c;
        case 0x43b360u: goto label_43b360;
        case 0x43b364u: goto label_43b364;
        case 0x43b368u: goto label_43b368;
        case 0x43b36cu: goto label_43b36c;
        case 0x43b370u: goto label_43b370;
        case 0x43b374u: goto label_43b374;
        case 0x43b378u: goto label_43b378;
        case 0x43b37cu: goto label_43b37c;
        case 0x43b380u: goto label_43b380;
        case 0x43b384u: goto label_43b384;
        case 0x43b388u: goto label_43b388;
        case 0x43b38cu: goto label_43b38c;
        case 0x43b390u: goto label_43b390;
        case 0x43b394u: goto label_43b394;
        case 0x43b398u: goto label_43b398;
        case 0x43b39cu: goto label_43b39c;
        case 0x43b3a0u: goto label_43b3a0;
        case 0x43b3a4u: goto label_43b3a4;
        case 0x43b3a8u: goto label_43b3a8;
        case 0x43b3acu: goto label_43b3ac;
        case 0x43b3b0u: goto label_43b3b0;
        case 0x43b3b4u: goto label_43b3b4;
        case 0x43b3b8u: goto label_43b3b8;
        case 0x43b3bcu: goto label_43b3bc;
        case 0x43b3c0u: goto label_43b3c0;
        case 0x43b3c4u: goto label_43b3c4;
        case 0x43b3c8u: goto label_43b3c8;
        case 0x43b3ccu: goto label_43b3cc;
        case 0x43b3d0u: goto label_43b3d0;
        case 0x43b3d4u: goto label_43b3d4;
        case 0x43b3d8u: goto label_43b3d8;
        case 0x43b3dcu: goto label_43b3dc;
        case 0x43b3e0u: goto label_43b3e0;
        case 0x43b3e4u: goto label_43b3e4;
        case 0x43b3e8u: goto label_43b3e8;
        case 0x43b3ecu: goto label_43b3ec;
        case 0x43b3f0u: goto label_43b3f0;
        case 0x43b3f4u: goto label_43b3f4;
        case 0x43b3f8u: goto label_43b3f8;
        case 0x43b3fcu: goto label_43b3fc;
        case 0x43b400u: goto label_43b400;
        case 0x43b404u: goto label_43b404;
        case 0x43b408u: goto label_43b408;
        case 0x43b40cu: goto label_43b40c;
        case 0x43b410u: goto label_43b410;
        case 0x43b414u: goto label_43b414;
        case 0x43b418u: goto label_43b418;
        case 0x43b41cu: goto label_43b41c;
        case 0x43b420u: goto label_43b420;
        case 0x43b424u: goto label_43b424;
        case 0x43b428u: goto label_43b428;
        case 0x43b42cu: goto label_43b42c;
        case 0x43b430u: goto label_43b430;
        case 0x43b434u: goto label_43b434;
        case 0x43b438u: goto label_43b438;
        case 0x43b43cu: goto label_43b43c;
        case 0x43b440u: goto label_43b440;
        case 0x43b444u: goto label_43b444;
        case 0x43b448u: goto label_43b448;
        case 0x43b44cu: goto label_43b44c;
        case 0x43b450u: goto label_43b450;
        case 0x43b454u: goto label_43b454;
        case 0x43b458u: goto label_43b458;
        case 0x43b45cu: goto label_43b45c;
        case 0x43b460u: goto label_43b460;
        case 0x43b464u: goto label_43b464;
        case 0x43b468u: goto label_43b468;
        case 0x43b46cu: goto label_43b46c;
        case 0x43b470u: goto label_43b470;
        case 0x43b474u: goto label_43b474;
        case 0x43b478u: goto label_43b478;
        case 0x43b47cu: goto label_43b47c;
        case 0x43b480u: goto label_43b480;
        case 0x43b484u: goto label_43b484;
        case 0x43b488u: goto label_43b488;
        case 0x43b48cu: goto label_43b48c;
        case 0x43b490u: goto label_43b490;
        case 0x43b494u: goto label_43b494;
        case 0x43b498u: goto label_43b498;
        case 0x43b49cu: goto label_43b49c;
        case 0x43b4a0u: goto label_43b4a0;
        case 0x43b4a4u: goto label_43b4a4;
        case 0x43b4a8u: goto label_43b4a8;
        case 0x43b4acu: goto label_43b4ac;
        case 0x43b4b0u: goto label_43b4b0;
        case 0x43b4b4u: goto label_43b4b4;
        case 0x43b4b8u: goto label_43b4b8;
        case 0x43b4bcu: goto label_43b4bc;
        case 0x43b4c0u: goto label_43b4c0;
        case 0x43b4c4u: goto label_43b4c4;
        case 0x43b4c8u: goto label_43b4c8;
        case 0x43b4ccu: goto label_43b4cc;
        case 0x43b4d0u: goto label_43b4d0;
        case 0x43b4d4u: goto label_43b4d4;
        case 0x43b4d8u: goto label_43b4d8;
        case 0x43b4dcu: goto label_43b4dc;
        case 0x43b4e0u: goto label_43b4e0;
        case 0x43b4e4u: goto label_43b4e4;
        case 0x43b4e8u: goto label_43b4e8;
        case 0x43b4ecu: goto label_43b4ec;
        case 0x43b4f0u: goto label_43b4f0;
        case 0x43b4f4u: goto label_43b4f4;
        case 0x43b4f8u: goto label_43b4f8;
        case 0x43b4fcu: goto label_43b4fc;
        case 0x43b500u: goto label_43b500;
        case 0x43b504u: goto label_43b504;
        case 0x43b508u: goto label_43b508;
        case 0x43b50cu: goto label_43b50c;
        case 0x43b510u: goto label_43b510;
        case 0x43b514u: goto label_43b514;
        case 0x43b518u: goto label_43b518;
        case 0x43b51cu: goto label_43b51c;
        case 0x43b520u: goto label_43b520;
        case 0x43b524u: goto label_43b524;
        case 0x43b528u: goto label_43b528;
        case 0x43b52cu: goto label_43b52c;
        case 0x43b530u: goto label_43b530;
        case 0x43b534u: goto label_43b534;
        case 0x43b538u: goto label_43b538;
        case 0x43b53cu: goto label_43b53c;
        case 0x43b540u: goto label_43b540;
        case 0x43b544u: goto label_43b544;
        case 0x43b548u: goto label_43b548;
        case 0x43b54cu: goto label_43b54c;
        case 0x43b550u: goto label_43b550;
        case 0x43b554u: goto label_43b554;
        case 0x43b558u: goto label_43b558;
        case 0x43b55cu: goto label_43b55c;
        case 0x43b560u: goto label_43b560;
        case 0x43b564u: goto label_43b564;
        case 0x43b568u: goto label_43b568;
        case 0x43b56cu: goto label_43b56c;
        case 0x43b570u: goto label_43b570;
        case 0x43b574u: goto label_43b574;
        case 0x43b578u: goto label_43b578;
        case 0x43b57cu: goto label_43b57c;
        case 0x43b580u: goto label_43b580;
        case 0x43b584u: goto label_43b584;
        case 0x43b588u: goto label_43b588;
        case 0x43b58cu: goto label_43b58c;
        case 0x43b590u: goto label_43b590;
        case 0x43b594u: goto label_43b594;
        case 0x43b598u: goto label_43b598;
        case 0x43b59cu: goto label_43b59c;
        case 0x43b5a0u: goto label_43b5a0;
        case 0x43b5a4u: goto label_43b5a4;
        case 0x43b5a8u: goto label_43b5a8;
        case 0x43b5acu: goto label_43b5ac;
        case 0x43b5b0u: goto label_43b5b0;
        case 0x43b5b4u: goto label_43b5b4;
        case 0x43b5b8u: goto label_43b5b8;
        case 0x43b5bcu: goto label_43b5bc;
        case 0x43b5c0u: goto label_43b5c0;
        case 0x43b5c4u: goto label_43b5c4;
        case 0x43b5c8u: goto label_43b5c8;
        case 0x43b5ccu: goto label_43b5cc;
        case 0x43b5d0u: goto label_43b5d0;
        case 0x43b5d4u: goto label_43b5d4;
        case 0x43b5d8u: goto label_43b5d8;
        case 0x43b5dcu: goto label_43b5dc;
        case 0x43b5e0u: goto label_43b5e0;
        case 0x43b5e4u: goto label_43b5e4;
        case 0x43b5e8u: goto label_43b5e8;
        case 0x43b5ecu: goto label_43b5ec;
        case 0x43b5f0u: goto label_43b5f0;
        case 0x43b5f4u: goto label_43b5f4;
        case 0x43b5f8u: goto label_43b5f8;
        case 0x43b5fcu: goto label_43b5fc;
        case 0x43b600u: goto label_43b600;
        case 0x43b604u: goto label_43b604;
        case 0x43b608u: goto label_43b608;
        case 0x43b60cu: goto label_43b60c;
        case 0x43b610u: goto label_43b610;
        case 0x43b614u: goto label_43b614;
        case 0x43b618u: goto label_43b618;
        case 0x43b61cu: goto label_43b61c;
        case 0x43b620u: goto label_43b620;
        case 0x43b624u: goto label_43b624;
        case 0x43b628u: goto label_43b628;
        case 0x43b62cu: goto label_43b62c;
        case 0x43b630u: goto label_43b630;
        case 0x43b634u: goto label_43b634;
        case 0x43b638u: goto label_43b638;
        case 0x43b63cu: goto label_43b63c;
        case 0x43b640u: goto label_43b640;
        case 0x43b644u: goto label_43b644;
        case 0x43b648u: goto label_43b648;
        case 0x43b64cu: goto label_43b64c;
        case 0x43b650u: goto label_43b650;
        case 0x43b654u: goto label_43b654;
        case 0x43b658u: goto label_43b658;
        case 0x43b65cu: goto label_43b65c;
        case 0x43b660u: goto label_43b660;
        case 0x43b664u: goto label_43b664;
        case 0x43b668u: goto label_43b668;
        case 0x43b66cu: goto label_43b66c;
        case 0x43b670u: goto label_43b670;
        case 0x43b674u: goto label_43b674;
        case 0x43b678u: goto label_43b678;
        case 0x43b67cu: goto label_43b67c;
        case 0x43b680u: goto label_43b680;
        case 0x43b684u: goto label_43b684;
        case 0x43b688u: goto label_43b688;
        case 0x43b68cu: goto label_43b68c;
        case 0x43b690u: goto label_43b690;
        case 0x43b694u: goto label_43b694;
        case 0x43b698u: goto label_43b698;
        case 0x43b69cu: goto label_43b69c;
        case 0x43b6a0u: goto label_43b6a0;
        case 0x43b6a4u: goto label_43b6a4;
        case 0x43b6a8u: goto label_43b6a8;
        case 0x43b6acu: goto label_43b6ac;
        case 0x43b6b0u: goto label_43b6b0;
        case 0x43b6b4u: goto label_43b6b4;
        case 0x43b6b8u: goto label_43b6b8;
        case 0x43b6bcu: goto label_43b6bc;
        case 0x43b6c0u: goto label_43b6c0;
        case 0x43b6c4u: goto label_43b6c4;
        case 0x43b6c8u: goto label_43b6c8;
        case 0x43b6ccu: goto label_43b6cc;
        case 0x43b6d0u: goto label_43b6d0;
        case 0x43b6d4u: goto label_43b6d4;
        case 0x43b6d8u: goto label_43b6d8;
        case 0x43b6dcu: goto label_43b6dc;
        case 0x43b6e0u: goto label_43b6e0;
        case 0x43b6e4u: goto label_43b6e4;
        case 0x43b6e8u: goto label_43b6e8;
        case 0x43b6ecu: goto label_43b6ec;
        case 0x43b6f0u: goto label_43b6f0;
        case 0x43b6f4u: goto label_43b6f4;
        case 0x43b6f8u: goto label_43b6f8;
        case 0x43b6fcu: goto label_43b6fc;
        case 0x43b700u: goto label_43b700;
        case 0x43b704u: goto label_43b704;
        case 0x43b708u: goto label_43b708;
        case 0x43b70cu: goto label_43b70c;
        case 0x43b710u: goto label_43b710;
        case 0x43b714u: goto label_43b714;
        case 0x43b718u: goto label_43b718;
        case 0x43b71cu: goto label_43b71c;
        case 0x43b720u: goto label_43b720;
        case 0x43b724u: goto label_43b724;
        case 0x43b728u: goto label_43b728;
        case 0x43b72cu: goto label_43b72c;
        case 0x43b730u: goto label_43b730;
        case 0x43b734u: goto label_43b734;
        case 0x43b738u: goto label_43b738;
        case 0x43b73cu: goto label_43b73c;
        case 0x43b740u: goto label_43b740;
        case 0x43b744u: goto label_43b744;
        case 0x43b748u: goto label_43b748;
        case 0x43b74cu: goto label_43b74c;
        case 0x43b750u: goto label_43b750;
        case 0x43b754u: goto label_43b754;
        case 0x43b758u: goto label_43b758;
        case 0x43b75cu: goto label_43b75c;
        case 0x43b760u: goto label_43b760;
        case 0x43b764u: goto label_43b764;
        case 0x43b768u: goto label_43b768;
        case 0x43b76cu: goto label_43b76c;
        case 0x43b770u: goto label_43b770;
        case 0x43b774u: goto label_43b774;
        case 0x43b778u: goto label_43b778;
        case 0x43b77cu: goto label_43b77c;
        case 0x43b780u: goto label_43b780;
        case 0x43b784u: goto label_43b784;
        case 0x43b788u: goto label_43b788;
        case 0x43b78cu: goto label_43b78c;
        case 0x43b790u: goto label_43b790;
        case 0x43b794u: goto label_43b794;
        case 0x43b798u: goto label_43b798;
        case 0x43b79cu: goto label_43b79c;
        case 0x43b7a0u: goto label_43b7a0;
        case 0x43b7a4u: goto label_43b7a4;
        case 0x43b7a8u: goto label_43b7a8;
        case 0x43b7acu: goto label_43b7ac;
        case 0x43b7b0u: goto label_43b7b0;
        case 0x43b7b4u: goto label_43b7b4;
        case 0x43b7b8u: goto label_43b7b8;
        case 0x43b7bcu: goto label_43b7bc;
        case 0x43b7c0u: goto label_43b7c0;
        case 0x43b7c4u: goto label_43b7c4;
        case 0x43b7c8u: goto label_43b7c8;
        case 0x43b7ccu: goto label_43b7cc;
        case 0x43b7d0u: goto label_43b7d0;
        case 0x43b7d4u: goto label_43b7d4;
        case 0x43b7d8u: goto label_43b7d8;
        case 0x43b7dcu: goto label_43b7dc;
        case 0x43b7e0u: goto label_43b7e0;
        case 0x43b7e4u: goto label_43b7e4;
        case 0x43b7e8u: goto label_43b7e8;
        case 0x43b7ecu: goto label_43b7ec;
        case 0x43b7f0u: goto label_43b7f0;
        case 0x43b7f4u: goto label_43b7f4;
        case 0x43b7f8u: goto label_43b7f8;
        case 0x43b7fcu: goto label_43b7fc;
        case 0x43b800u: goto label_43b800;
        case 0x43b804u: goto label_43b804;
        case 0x43b808u: goto label_43b808;
        case 0x43b80cu: goto label_43b80c;
        case 0x43b810u: goto label_43b810;
        case 0x43b814u: goto label_43b814;
        case 0x43b818u: goto label_43b818;
        case 0x43b81cu: goto label_43b81c;
        case 0x43b820u: goto label_43b820;
        case 0x43b824u: goto label_43b824;
        case 0x43b828u: goto label_43b828;
        case 0x43b82cu: goto label_43b82c;
        case 0x43b830u: goto label_43b830;
        case 0x43b834u: goto label_43b834;
        case 0x43b838u: goto label_43b838;
        case 0x43b83cu: goto label_43b83c;
        case 0x43b840u: goto label_43b840;
        case 0x43b844u: goto label_43b844;
        case 0x43b848u: goto label_43b848;
        case 0x43b84cu: goto label_43b84c;
        case 0x43b850u: goto label_43b850;
        case 0x43b854u: goto label_43b854;
        case 0x43b858u: goto label_43b858;
        case 0x43b85cu: goto label_43b85c;
        case 0x43b860u: goto label_43b860;
        case 0x43b864u: goto label_43b864;
        case 0x43b868u: goto label_43b868;
        case 0x43b86cu: goto label_43b86c;
        case 0x43b870u: goto label_43b870;
        case 0x43b874u: goto label_43b874;
        case 0x43b878u: goto label_43b878;
        case 0x43b87cu: goto label_43b87c;
        case 0x43b880u: goto label_43b880;
        case 0x43b884u: goto label_43b884;
        case 0x43b888u: goto label_43b888;
        case 0x43b88cu: goto label_43b88c;
        case 0x43b890u: goto label_43b890;
        case 0x43b894u: goto label_43b894;
        case 0x43b898u: goto label_43b898;
        case 0x43b89cu: goto label_43b89c;
        case 0x43b8a0u: goto label_43b8a0;
        case 0x43b8a4u: goto label_43b8a4;
        case 0x43b8a8u: goto label_43b8a8;
        case 0x43b8acu: goto label_43b8ac;
        case 0x43b8b0u: goto label_43b8b0;
        case 0x43b8b4u: goto label_43b8b4;
        case 0x43b8b8u: goto label_43b8b8;
        case 0x43b8bcu: goto label_43b8bc;
        case 0x43b8c0u: goto label_43b8c0;
        case 0x43b8c4u: goto label_43b8c4;
        case 0x43b8c8u: goto label_43b8c8;
        case 0x43b8ccu: goto label_43b8cc;
        case 0x43b8d0u: goto label_43b8d0;
        case 0x43b8d4u: goto label_43b8d4;
        case 0x43b8d8u: goto label_43b8d8;
        case 0x43b8dcu: goto label_43b8dc;
        case 0x43b8e0u: goto label_43b8e0;
        case 0x43b8e4u: goto label_43b8e4;
        case 0x43b8e8u: goto label_43b8e8;
        case 0x43b8ecu: goto label_43b8ec;
        case 0x43b8f0u: goto label_43b8f0;
        case 0x43b8f4u: goto label_43b8f4;
        case 0x43b8f8u: goto label_43b8f8;
        case 0x43b8fcu: goto label_43b8fc;
        case 0x43b900u: goto label_43b900;
        case 0x43b904u: goto label_43b904;
        case 0x43b908u: goto label_43b908;
        case 0x43b90cu: goto label_43b90c;
        case 0x43b910u: goto label_43b910;
        case 0x43b914u: goto label_43b914;
        case 0x43b918u: goto label_43b918;
        case 0x43b91cu: goto label_43b91c;
        case 0x43b920u: goto label_43b920;
        case 0x43b924u: goto label_43b924;
        case 0x43b928u: goto label_43b928;
        case 0x43b92cu: goto label_43b92c;
        case 0x43b930u: goto label_43b930;
        case 0x43b934u: goto label_43b934;
        case 0x43b938u: goto label_43b938;
        case 0x43b93cu: goto label_43b93c;
        case 0x43b940u: goto label_43b940;
        case 0x43b944u: goto label_43b944;
        case 0x43b948u: goto label_43b948;
        case 0x43b94cu: goto label_43b94c;
        case 0x43b950u: goto label_43b950;
        case 0x43b954u: goto label_43b954;
        case 0x43b958u: goto label_43b958;
        case 0x43b95cu: goto label_43b95c;
        default: break;
    }

    ctx->pc = 0x43b300u;

label_43b300:
    // 0x43b300: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x43b300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_43b304:
    // 0x43b304: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x43b304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_43b308:
    // 0x43b308: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x43b308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_43b30c:
    // 0x43b30c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x43b30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_43b310:
    // 0x43b310: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x43b310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_43b314:
    // 0x43b314: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x43b314u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_43b318:
    // 0x43b318: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x43b318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_43b31c:
    // 0x43b31c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x43b31cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_43b320:
    // 0x43b320: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43b320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43b324:
    // 0x43b324: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x43b324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_43b328:
    // 0x43b328: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43b328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43b32c:
    // 0x43b32c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x43b32cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43b330:
    // 0x43b330: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x43b330u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_43b334:
    // 0x43b334: 0x1060007c  beqz        $v1, . + 4 + (0x7C << 2)
label_43b338:
    if (ctx->pc == 0x43B338u) {
        ctx->pc = 0x43B338u;
            // 0x43b338: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B33Cu;
        goto label_43b33c;
    }
    ctx->pc = 0x43B334u;
    {
        const bool branch_taken_0x43b334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B334u;
            // 0x43b338: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b334) {
            ctx->pc = 0x43B528u;
            goto label_43b528;
        }
    }
    ctx->pc = 0x43B33Cu;
label_43b33c:
    // 0x43b33c: 0x922300f0  lbu         $v1, 0xF0($s1)
    ctx->pc = 0x43b33cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 240)));
label_43b340:
    // 0x43b340: 0x5060007a  beql        $v1, $zero, . + 4 + (0x7A << 2)
label_43b344:
    if (ctx->pc == 0x43B344u) {
        ctx->pc = 0x43B344u;
            // 0x43b344: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x43B348u;
        goto label_43b348;
    }
    ctx->pc = 0x43B340u;
    {
        const bool branch_taken_0x43b340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x43b340) {
            ctx->pc = 0x43B344u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43B340u;
            // 0x43b344: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43B52Cu;
            goto label_43b52c;
        }
    }
    ctx->pc = 0x43B348u;
label_43b348:
    // 0x43b348: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x43b348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_43b34c:
    // 0x43b34c: 0xc04f278  jal         func_13C9E0
label_43b350:
    if (ctx->pc == 0x43B350u) {
        ctx->pc = 0x43B350u;
            // 0x43b350: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x43B354u;
        goto label_43b354;
    }
    ctx->pc = 0x43B34Cu;
    SET_GPR_U32(ctx, 31, 0x43B354u);
    ctx->pc = 0x43B350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B34Cu;
            // 0x43b350: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B354u; }
        if (ctx->pc != 0x43B354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B354u; }
        if (ctx->pc != 0x43B354u) { return; }
    }
    ctx->pc = 0x43B354u;
label_43b354:
    // 0x43b354: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x43b354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_43b358:
    // 0x43b358: 0xc04ce80  jal         func_133A00
label_43b35c:
    if (ctx->pc == 0x43B35Cu) {
        ctx->pc = 0x43B35Cu;
            // 0x43b35c: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x43B360u;
        goto label_43b360;
    }
    ctx->pc = 0x43B358u;
    SET_GPR_U32(ctx, 31, 0x43B360u);
    ctx->pc = 0x43B35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B358u;
            // 0x43b35c: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B360u; }
        if (ctx->pc != 0x43B360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B360u; }
        if (ctx->pc != 0x43B360u) { return; }
    }
    ctx->pc = 0x43B360u;
label_43b360:
    // 0x43b360: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x43b360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_43b364:
    // 0x43b364: 0x9226004c  lbu         $a2, 0x4C($s1)
    ctx->pc = 0x43b364u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
label_43b368:
    // 0x43b368: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x43b368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_43b36c:
    // 0x43b36c: 0xc07698c  jal         func_1DA630
label_43b370:
    if (ctx->pc == 0x43B370u) {
        ctx->pc = 0x43B370u;
            // 0x43b370: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B374u;
        goto label_43b374;
    }
    ctx->pc = 0x43B36Cu;
    SET_GPR_U32(ctx, 31, 0x43B374u);
    ctx->pc = 0x43B370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B36Cu;
            // 0x43b370: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B374u; }
        if (ctx->pc != 0x43B374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B374u; }
        if (ctx->pc != 0x43B374u) { return; }
    }
    ctx->pc = 0x43B374u;
label_43b374:
    // 0x43b374: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x43b374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_43b378:
    // 0x43b378: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_43b37c:
    if (ctx->pc == 0x43B37Cu) {
        ctx->pc = 0x43B380u;
        goto label_43b380;
    }
    ctx->pc = 0x43B378u;
    {
        const bool branch_taken_0x43b378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x43b378) {
            ctx->pc = 0x43B388u;
            goto label_43b388;
        }
    }
    ctx->pc = 0x43B380u;
label_43b380:
    // 0x43b380: 0x10000033  b           . + 4 + (0x33 << 2)
label_43b384:
    if (ctx->pc == 0x43B384u) {
        ctx->pc = 0x43B384u;
            // 0x43b384: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x43B388u;
        goto label_43b388;
    }
    ctx->pc = 0x43B380u;
    {
        const bool branch_taken_0x43b380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B380u;
            // 0x43b384: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b380) {
            ctx->pc = 0x43B450u;
            goto label_43b450;
        }
    }
    ctx->pc = 0x43B388u;
label_43b388:
    // 0x43b388: 0xc0576f4  jal         func_15DBD0
label_43b38c:
    if (ctx->pc == 0x43B38Cu) {
        ctx->pc = 0x43B390u;
        goto label_43b390;
    }
    ctx->pc = 0x43B388u;
    SET_GPR_U32(ctx, 31, 0x43B390u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B390u; }
        if (ctx->pc != 0x43B390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B390u; }
        if (ctx->pc != 0x43B390u) { return; }
    }
    ctx->pc = 0x43B390u;
label_43b390:
    // 0x43b390: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x43b390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_43b394:
    // 0x43b394: 0xc076984  jal         func_1DA610
label_43b398:
    if (ctx->pc == 0x43B398u) {
        ctx->pc = 0x43B398u;
            // 0x43b398: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B39Cu;
        goto label_43b39c;
    }
    ctx->pc = 0x43B394u;
    SET_GPR_U32(ctx, 31, 0x43B39Cu);
    ctx->pc = 0x43B398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B394u;
            // 0x43b398: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B39Cu; }
        if (ctx->pc != 0x43B39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B39Cu; }
        if (ctx->pc != 0x43B39Cu) { return; }
    }
    ctx->pc = 0x43B39Cu;
label_43b39c:
    // 0x43b39c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x43b39cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43b3a0:
    // 0x43b3a0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x43b3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_43b3a4:
    // 0x43b3a4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x43b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_43b3a8:
    // 0x43b3a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x43b3a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_43b3ac:
    // 0x43b3ac: 0xc4420150  lwc1        $f2, 0x150($v0)
    ctx->pc = 0x43b3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43b3b0:
    // 0x43b3b0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x43b3b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43b3b4:
    // 0x43b3b4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x43b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_43b3b8:
    // 0x43b3b8: 0xc4410158  lwc1        $f1, 0x158($v0)
    ctx->pc = 0x43b3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43b3bc:
    // 0x43b3bc: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x43b3bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_43b3c0:
    // 0x43b3c0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x43b3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_43b3c4:
    // 0x43b3c4: 0xc440015c  lwc1        $f0, 0x15C($v0)
    ctx->pc = 0x43b3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43b3c8:
    // 0x43b3c8: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x43b3c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_43b3cc:
    // 0x43b3cc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x43b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_43b3d0:
    // 0x43b3d0: 0x8c420154  lw          $v0, 0x154($v0)
    ctx->pc = 0x43b3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
label_43b3d4:
    // 0x43b3d4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x43b3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_43b3d8:
    // 0x43b3d8: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x43b3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_43b3dc:
    // 0x43b3dc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x43b3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43b3e0:
    // 0x43b3e0: 0xc04cca0  jal         func_133280
label_43b3e4:
    if (ctx->pc == 0x43B3E4u) {
        ctx->pc = 0x43B3E4u;
            // 0x43b3e4: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x43B3E8u;
        goto label_43b3e8;
    }
    ctx->pc = 0x43B3E0u;
    SET_GPR_U32(ctx, 31, 0x43B3E8u);
    ctx->pc = 0x43B3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B3E0u;
            // 0x43b3e4: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B3E8u; }
        if (ctx->pc != 0x43B3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B3E8u; }
        if (ctx->pc != 0x43B3E8u) { return; }
    }
    ctx->pc = 0x43B3E8u;
label_43b3e8:
    // 0x43b3e8: 0xc076980  jal         func_1DA600
label_43b3ec:
    if (ctx->pc == 0x43B3ECu) {
        ctx->pc = 0x43B3ECu;
            // 0x43b3ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B3F0u;
        goto label_43b3f0;
    }
    ctx->pc = 0x43B3E8u;
    SET_GPR_U32(ctx, 31, 0x43B3F0u);
    ctx->pc = 0x43B3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B3E8u;
            // 0x43b3ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B3F0u; }
        if (ctx->pc != 0x43B3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B3F0u; }
        if (ctx->pc != 0x43B3F0u) { return; }
    }
    ctx->pc = 0x43B3F0u;
label_43b3f0:
    // 0x43b3f0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x43b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_43b3f4:
    // 0x43b3f4: 0xc04cc34  jal         func_1330D0
label_43b3f8:
    if (ctx->pc == 0x43B3F8u) {
        ctx->pc = 0x43B3F8u;
            // 0x43b3f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B3FCu;
        goto label_43b3fc;
    }
    ctx->pc = 0x43B3F4u;
    SET_GPR_U32(ctx, 31, 0x43B3FCu);
    ctx->pc = 0x43B3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B3F4u;
            // 0x43b3f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B3FCu; }
        if (ctx->pc != 0x43B3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B3FCu; }
        if (ctx->pc != 0x43B3FCu) { return; }
    }
    ctx->pc = 0x43B3FCu;
label_43b3fc:
    // 0x43b3fc: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x43b3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_43b400:
    // 0x43b400: 0xc461cf88  lwc1        $f1, -0x3078($v1)
    ctx->pc = 0x43b400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43b404:
    // 0x43b404: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x43b404u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_43b408:
    // 0x43b408: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_43b40c:
    if (ctx->pc == 0x43B40Cu) {
        ctx->pc = 0x43B40Cu;
            // 0x43b40c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B410u;
        goto label_43b410;
    }
    ctx->pc = 0x43B408u;
    {
        const bool branch_taken_0x43b408 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x43b408) {
            ctx->pc = 0x43B40Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43B408u;
            // 0x43b40c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43B418u;
            goto label_43b418;
        }
    }
    ctx->pc = 0x43B410u;
label_43b410:
    // 0x43b410: 0x1000000f  b           . + 4 + (0xF << 2)
label_43b414:
    if (ctx->pc == 0x43B414u) {
        ctx->pc = 0x43B414u;
            // 0x43b414: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x43B418u;
        goto label_43b418;
    }
    ctx->pc = 0x43B410u;
    {
        const bool branch_taken_0x43b410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B410u;
            // 0x43b414: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b410) {
            ctx->pc = 0x43B450u;
            goto label_43b450;
        }
    }
    ctx->pc = 0x43B418u;
label_43b418:
    // 0x43b418: 0xc07697c  jal         func_1DA5F0
label_43b41c:
    if (ctx->pc == 0x43B41Cu) {
        ctx->pc = 0x43B420u;
        goto label_43b420;
    }
    ctx->pc = 0x43B418u;
    SET_GPR_U32(ctx, 31, 0x43B420u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B420u; }
        if (ctx->pc != 0x43B420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B420u; }
        if (ctx->pc != 0x43B420u) { return; }
    }
    ctx->pc = 0x43B420u;
label_43b420:
    // 0x43b420: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x43b420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43b424:
    // 0x43b424: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x43b424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_43b428:
    // 0x43b428: 0xc04cd60  jal         func_133580
label_43b42c:
    if (ctx->pc == 0x43B42Cu) {
        ctx->pc = 0x43B42Cu;
            // 0x43b42c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B430u;
        goto label_43b430;
    }
    ctx->pc = 0x43B428u;
    SET_GPR_U32(ctx, 31, 0x43B430u);
    ctx->pc = 0x43B42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B428u;
            // 0x43b42c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B430u; }
        if (ctx->pc != 0x43B430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B430u; }
        if (ctx->pc != 0x43B430u) { return; }
    }
    ctx->pc = 0x43B430u;
label_43b430:
    // 0x43b430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43b430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43b434:
    // 0x43b434: 0xc04c650  jal         func_131940
label_43b438:
    if (ctx->pc == 0x43B438u) {
        ctx->pc = 0x43B438u;
            // 0x43b438: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x43B43Cu;
        goto label_43b43c;
    }
    ctx->pc = 0x43B434u;
    SET_GPR_U32(ctx, 31, 0x43B43Cu);
    ctx->pc = 0x43B438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B434u;
            // 0x43b438: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B43Cu; }
        if (ctx->pc != 0x43B43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B43Cu; }
        if (ctx->pc != 0x43B43Cu) { return; }
    }
    ctx->pc = 0x43B43Cu;
label_43b43c:
    // 0x43b43c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x43b43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_43b440:
    // 0x43b440: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x43b440u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_43b444:
    // 0x43b444: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x43b444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_43b448:
    // 0x43b448: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x43b448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_43b44c:
    // 0x43b44c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x43b44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_43b450:
    // 0x43b450: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x43b450u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_43b454:
    // 0x43b454: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
label_43b458:
    if (ctx->pc == 0x43B458u) {
        ctx->pc = 0x43B458u;
            // 0x43b458: 0xae230044  sw          $v1, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x43B45Cu;
        goto label_43b45c;
    }
    ctx->pc = 0x43B454u;
    {
        const bool branch_taken_0x43b454 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B454u;
            // 0x43b458: 0xae230044  sw          $v1, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b454) {
            ctx->pc = 0x43B528u;
            goto label_43b528;
        }
    }
    ctx->pc = 0x43B45Cu;
label_43b45c:
    // 0x43b45c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43b45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43b460:
    // 0x43b460: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43b460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43b464:
    // 0x43b464: 0x8c65e3c0  lw          $a1, -0x1C40($v1)
    ctx->pc = 0x43b464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_43b468:
    // 0x43b468: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x43b468u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_43b46c:
    // 0x43b46c: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x43b46cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_43b470:
    // 0x43b470: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43b470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43b474:
    // 0x43b474: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x43b474u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_43b478:
    // 0x43b478: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43b478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43b47c:
    // 0x43b47c: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x43b47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_43b480:
    // 0x43b480: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x43b480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_43b484:
    // 0x43b484: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x43b484u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_43b488:
    // 0x43b488: 0x86a821  addu        $s5, $a0, $a2
    ctx->pc = 0x43b488u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_43b48c:
    // 0x43b48c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43b48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43b490:
    // 0x43b490: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x43b490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_43b494:
    // 0x43b494: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43b494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43b498:
    // 0x43b498: 0xacb50000  sw          $s5, 0x0($a1)
    ctx->pc = 0x43b498u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 21));
label_43b49c:
    // 0x43b49c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x43b49cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_43b4a0:
    // 0x43b4a0: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x43b4a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_43b4a4:
    // 0x43b4a4: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x43b4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_43b4a8:
    // 0x43b4a8: 0x8c48e378  lw          $t0, -0x1C88($v0)
    ctx->pc = 0x43b4a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_43b4ac:
    // 0x43b4ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x43b4acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43b4b0:
    // 0x43b4b0: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x43b4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_43b4b4:
    // 0x43b4b4: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x43b4b4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_43b4b8:
    // 0x43b4b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43b4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43b4bc:
    // 0x43b4bc: 0x1099021  addu        $s2, $t0, $t1
    ctx->pc = 0x43b4bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_43b4c0:
    // 0x43b4c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43b4c4:
    // 0x43b4c4: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x43b4c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_43b4c8:
    // 0x43b4c8: 0xad120000  sw          $s2, 0x0($t0)
    ctx->pc = 0x43b4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 18));
label_43b4cc:
    // 0x43b4cc: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x43b4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_43b4d0:
    // 0x43b4d0: 0x8e080028  lw          $t0, 0x28($s0)
    ctx->pc = 0x43b4d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_43b4d4:
    // 0x43b4d4: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x43b4d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_43b4d8:
    // 0x43b4d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x43b4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_43b4dc:
    // 0x43b4dc: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x43b4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_43b4e0:
    // 0x43b4e0: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x43b4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_43b4e4:
    // 0x43b4e4: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x43b4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_43b4e8:
    // 0x43b4e8: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x43b4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_43b4ec:
    // 0x43b4ec: 0xc04e4a4  jal         func_139290
label_43b4f0:
    if (ctx->pc == 0x43B4F0u) {
        ctx->pc = 0x43B4F0u;
            // 0x43b4f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B4F4u;
        goto label_43b4f4;
    }
    ctx->pc = 0x43B4ECu;
    SET_GPR_U32(ctx, 31, 0x43B4F4u);
    ctx->pc = 0x43B4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B4ECu;
            // 0x43b4f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B4F4u; }
        if (ctx->pc != 0x43B4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B4F4u; }
        if (ctx->pc != 0x43B4F4u) { return; }
    }
    ctx->pc = 0x43B4F4u;
label_43b4f4:
    // 0x43b4f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x43b4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_43b4f8:
    // 0x43b4f8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x43b4f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_43b4fc:
    // 0x43b4fc: 0xc04cd60  jal         func_133580
label_43b500:
    if (ctx->pc == 0x43B500u) {
        ctx->pc = 0x43B500u;
            // 0x43b500: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B504u;
        goto label_43b504;
    }
    ctx->pc = 0x43B4FCu;
    SET_GPR_U32(ctx, 31, 0x43B504u);
    ctx->pc = 0x43B500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B4FCu;
            // 0x43b500: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B504u; }
        if (ctx->pc != 0x43B504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B504u; }
        if (ctx->pc != 0x43B504u) { return; }
    }
    ctx->pc = 0x43B504u;
label_43b504:
    // 0x43b504: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x43b504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_43b508:
    // 0x43b508: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x43b508u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_43b50c:
    // 0x43b50c: 0x320f809  jalr        $t9
label_43b510:
    if (ctx->pc == 0x43B510u) {
        ctx->pc = 0x43B510u;
            // 0x43b510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B514u;
        goto label_43b514;
    }
    ctx->pc = 0x43B50Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43B514u);
        ctx->pc = 0x43B510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B50Cu;
            // 0x43b510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43B514u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43B514u; }
            if (ctx->pc != 0x43B514u) { return; }
        }
        }
    }
    ctx->pc = 0x43B514u;
label_43b514:
    // 0x43b514: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x43b514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_43b518:
    // 0x43b518: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x43b518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43b51c:
    // 0x43b51c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x43b51cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_43b520:
    // 0x43b520: 0xc054fd4  jal         func_153F50
label_43b524:
    if (ctx->pc == 0x43B524u) {
        ctx->pc = 0x43B524u;
            // 0x43b524: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B528u;
        goto label_43b528;
    }
    ctx->pc = 0x43B520u;
    SET_GPR_U32(ctx, 31, 0x43B528u);
    ctx->pc = 0x43B524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B520u;
            // 0x43b524: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B528u; }
        if (ctx->pc != 0x43B528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B528u; }
        if (ctx->pc != 0x43B528u) { return; }
    }
    ctx->pc = 0x43B528u;
label_43b528:
    // 0x43b528: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x43b528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_43b52c:
    // 0x43b52c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x43b52cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_43b530:
    // 0x43b530: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x43b530u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_43b534:
    // 0x43b534: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x43b534u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_43b538:
    // 0x43b538: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x43b538u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43b53c:
    // 0x43b53c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43b53cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43b540:
    // 0x43b540: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43b540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43b544:
    // 0x43b544: 0x3e00008  jr          $ra
label_43b548:
    if (ctx->pc == 0x43B548u) {
        ctx->pc = 0x43B548u;
            // 0x43b548: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x43B54Cu;
        goto label_43b54c;
    }
    ctx->pc = 0x43B544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43B548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B544u;
            // 0x43b548: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43B54Cu;
label_43b54c:
    // 0x43b54c: 0x0  nop
    ctx->pc = 0x43b54cu;
    // NOP
label_43b550:
    // 0x43b550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43b550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_43b554:
    // 0x43b554: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43b554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_43b558:
    // 0x43b558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43b558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43b55c:
    // 0x43b55c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43b55cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43b560:
    // 0x43b560: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
label_43b564:
    if (ctx->pc == 0x43B564u) {
        ctx->pc = 0x43B564u;
            // 0x43b564: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B568u;
        goto label_43b568;
    }
    ctx->pc = 0x43B560u;
    {
        const bool branch_taken_0x43b560 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x43b560) {
            ctx->pc = 0x43B564u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43B560u;
            // 0x43b564: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43B5B0u;
            goto label_43b5b0;
        }
    }
    ctx->pc = 0x43B568u;
label_43b568:
    // 0x43b568: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43b568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_43b56c:
    // 0x43b56c: 0x2442ce20  addiu       $v0, $v0, -0x31E0
    ctx->pc = 0x43b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954528));
label_43b570:
    // 0x43b570: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_43b574:
    if (ctx->pc == 0x43B574u) {
        ctx->pc = 0x43B574u;
            // 0x43b574: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x43B578u;
        goto label_43b578;
    }
    ctx->pc = 0x43B570u;
    {
        const bool branch_taken_0x43b570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B570u;
            // 0x43b574: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b570) {
            ctx->pc = 0x43B594u;
            goto label_43b594;
        }
    }
    ctx->pc = 0x43B578u;
label_43b578:
    // 0x43b578: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43b578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_43b57c:
    // 0x43b57c: 0x244285d0  addiu       $v0, $v0, -0x7A30
    ctx->pc = 0x43b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936016));
label_43b580:
    // 0x43b580: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_43b584:
    if (ctx->pc == 0x43B584u) {
        ctx->pc = 0x43B584u;
            // 0x43b584: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x43B588u;
        goto label_43b588;
    }
    ctx->pc = 0x43B580u;
    {
        const bool branch_taken_0x43b580 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B580u;
            // 0x43b584: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b580) {
            ctx->pc = 0x43B594u;
            goto label_43b594;
        }
    }
    ctx->pc = 0x43B588u;
label_43b588:
    // 0x43b588: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x43b588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_43b58c:
    // 0x43b58c: 0x244221e0  addiu       $v0, $v0, 0x21E0
    ctx->pc = 0x43b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8672));
label_43b590:
    // 0x43b590: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x43b590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_43b594:
    // 0x43b594: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x43b594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_43b598:
    // 0x43b598: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x43b598u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_43b59c:
    // 0x43b59c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_43b5a0:
    if (ctx->pc == 0x43B5A0u) {
        ctx->pc = 0x43B5A4u;
        goto label_43b5a4;
    }
    ctx->pc = 0x43B59Cu;
    {
        const bool branch_taken_0x43b59c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x43b59c) {
            ctx->pc = 0x43B5ACu;
            goto label_43b5ac;
        }
    }
    ctx->pc = 0x43B5A4u;
label_43b5a4:
    // 0x43b5a4: 0xc0400a8  jal         func_1002A0
label_43b5a8:
    if (ctx->pc == 0x43B5A8u) {
        ctx->pc = 0x43B5A8u;
            // 0x43b5a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B5ACu;
        goto label_43b5ac;
    }
    ctx->pc = 0x43B5A4u;
    SET_GPR_U32(ctx, 31, 0x43B5ACu);
    ctx->pc = 0x43B5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B5A4u;
            // 0x43b5a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B5ACu; }
        if (ctx->pc != 0x43B5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B5ACu; }
        if (ctx->pc != 0x43B5ACu) { return; }
    }
    ctx->pc = 0x43B5ACu;
label_43b5ac:
    // 0x43b5ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x43b5acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43b5b0:
    // 0x43b5b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43b5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_43b5b4:
    // 0x43b5b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43b5b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43b5b8:
    // 0x43b5b8: 0x3e00008  jr          $ra
label_43b5bc:
    if (ctx->pc == 0x43B5BCu) {
        ctx->pc = 0x43B5BCu;
            // 0x43b5bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x43B5C0u;
        goto label_43b5c0;
    }
    ctx->pc = 0x43B5B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43B5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B5B8u;
            // 0x43b5bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43B5C0u;
label_43b5c0:
    // 0x43b5c0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x43b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_43b5c4:
    // 0x43b5c4: 0x3e00008  jr          $ra
label_43b5c8:
    if (ctx->pc == 0x43B5C8u) {
        ctx->pc = 0x43B5C8u;
            // 0x43b5c8: 0x2442cf78  addiu       $v0, $v0, -0x3088 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954872));
        ctx->pc = 0x43B5CCu;
        goto label_43b5cc;
    }
    ctx->pc = 0x43B5C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43B5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B5C4u;
            // 0x43b5c8: 0x2442cf78  addiu       $v0, $v0, -0x3088 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954872));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43B5CCu;
label_43b5cc:
    // 0x43b5cc: 0x0  nop
    ctx->pc = 0x43b5ccu;
    // NOP
label_43b5d0:
    // 0x43b5d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43b5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_43b5d4:
    // 0x43b5d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43b5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_43b5d8:
    // 0x43b5d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43b5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43b5dc:
    // 0x43b5dc: 0x908300f1  lbu         $v1, 0xF1($a0)
    ctx->pc = 0x43b5dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 241)));
label_43b5e0:
    // 0x43b5e0: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_43b5e4:
    if (ctx->pc == 0x43B5E4u) {
        ctx->pc = 0x43B5E4u;
            // 0x43b5e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B5E8u;
        goto label_43b5e8;
    }
    ctx->pc = 0x43B5E0u;
    {
        const bool branch_taken_0x43b5e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x43B5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B5E0u;
            // 0x43b5e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b5e0) {
            ctx->pc = 0x43B620u;
            goto label_43b620;
        }
    }
    ctx->pc = 0x43B5E8u;
label_43b5e8:
    // 0x43b5e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43b5ec:
    // 0x43b5ec: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x43b5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_43b5f0:
    // 0x43b5f0: 0xa20200f1  sb          $v0, 0xF1($s0)
    ctx->pc = 0x43b5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 241), (uint8_t)GPR_U32(ctx, 2));
label_43b5f4:
    // 0x43b5f4: 0xc04f278  jal         func_13C9E0
label_43b5f8:
    if (ctx->pc == 0x43B5F8u) {
        ctx->pc = 0x43B5F8u;
            // 0x43b5f8: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x43B5FCu;
        goto label_43b5fc;
    }
    ctx->pc = 0x43B5F4u;
    SET_GPR_U32(ctx, 31, 0x43B5FCu);
    ctx->pc = 0x43B5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B5F4u;
            // 0x43b5f8: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B5FCu; }
        if (ctx->pc != 0x43B5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B5FCu; }
        if (ctx->pc != 0x43B5FCu) { return; }
    }
    ctx->pc = 0x43B5FCu;
label_43b5fc:
    // 0x43b5fc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x43b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_43b600:
    // 0x43b600: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x43b600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_43b604:
    // 0x43b604: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x43b604u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_43b608:
    // 0x43b608: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x43b608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_43b60c:
    // 0x43b60c: 0x26060100  addiu       $a2, $s0, 0x100
    ctx->pc = 0x43b60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_43b610:
    // 0x43b610: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x43b610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_43b614:
    // 0x43b614: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x43b614u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43b618:
    // 0x43b618: 0xc0bb404  jal         func_2ED010
label_43b61c:
    if (ctx->pc == 0x43B61Cu) {
        ctx->pc = 0x43B61Cu;
            // 0x43b61c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x43B620u;
        goto label_43b620;
    }
    ctx->pc = 0x43B618u;
    SET_GPR_U32(ctx, 31, 0x43B620u);
    ctx->pc = 0x43B61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B618u;
            // 0x43b61c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B620u; }
        if (ctx->pc != 0x43B620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B620u; }
        if (ctx->pc != 0x43B620u) { return; }
    }
    ctx->pc = 0x43B620u;
label_43b620:
    // 0x43b620: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43b620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_43b624:
    // 0x43b624: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43b624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43b628:
    // 0x43b628: 0x3e00008  jr          $ra
label_43b62c:
    if (ctx->pc == 0x43B62Cu) {
        ctx->pc = 0x43B62Cu;
            // 0x43b62c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x43B630u;
        goto label_43b630;
    }
    ctx->pc = 0x43B628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43B62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B628u;
            // 0x43b62c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43B630u;
label_43b630:
    // 0x43b630: 0x3e00008  jr          $ra
label_43b634:
    if (ctx->pc == 0x43B634u) {
        ctx->pc = 0x43B634u;
            // 0x43b634: 0x240261e4  addiu       $v0, $zero, 0x61E4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25060));
        ctx->pc = 0x43B638u;
        goto label_43b638;
    }
    ctx->pc = 0x43B630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43B634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B630u;
            // 0x43b634: 0x240261e4  addiu       $v0, $zero, 0x61E4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25060));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43B638u;
label_43b638:
    // 0x43b638: 0x0  nop
    ctx->pc = 0x43b638u;
    // NOP
label_43b63c:
    // 0x43b63c: 0x0  nop
    ctx->pc = 0x43b63cu;
    // NOP
label_43b640:
    // 0x43b640: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x43b640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_43b644:
    // 0x43b644: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x43b644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_43b648:
    // 0x43b648: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x43b648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_43b64c:
    // 0x43b64c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x43b64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_43b650:
    // 0x43b650: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x43b650u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43b654:
    // 0x43b654: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x43b654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_43b658:
    // 0x43b658: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43b658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43b65c:
    // 0x43b65c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43b65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43b660:
    // 0x43b660: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x43b660u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_43b664:
    // 0x43b664: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_43b668:
    if (ctx->pc == 0x43B668u) {
        ctx->pc = 0x43B668u;
            // 0x43b668: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B66Cu;
        goto label_43b66c;
    }
    ctx->pc = 0x43B664u;
    {
        const bool branch_taken_0x43b664 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B664u;
            // 0x43b668: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b664) {
            ctx->pc = 0x43B6A8u;
            goto label_43b6a8;
        }
    }
    ctx->pc = 0x43B66Cu;
label_43b66c:
    // 0x43b66c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x43b66cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43b670:
    // 0x43b670: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x43b670u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43b674:
    // 0x43b674: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x43b674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43b678:
    // 0x43b678: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x43b678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_43b67c:
    // 0x43b67c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x43b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_43b680:
    // 0x43b680: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x43b680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_43b684:
    // 0x43b684: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x43b684u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43b688:
    // 0x43b688: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x43b688u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_43b68c:
    // 0x43b68c: 0x320f809  jalr        $t9
label_43b690:
    if (ctx->pc == 0x43B690u) {
        ctx->pc = 0x43B694u;
        goto label_43b694;
    }
    ctx->pc = 0x43B68Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43B694u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x43B694u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43B694u; }
            if (ctx->pc != 0x43B694u) { return; }
        }
        }
    }
    ctx->pc = 0x43B694u;
label_43b694:
    // 0x43b694: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x43b694u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_43b698:
    // 0x43b698: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x43b698u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_43b69c:
    // 0x43b69c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x43b69cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_43b6a0:
    // 0x43b6a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_43b6a4:
    if (ctx->pc == 0x43B6A4u) {
        ctx->pc = 0x43B6A4u;
            // 0x43b6a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x43B6A8u;
        goto label_43b6a8;
    }
    ctx->pc = 0x43B6A0u;
    {
        const bool branch_taken_0x43b6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43B6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B6A0u;
            // 0x43b6a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b6a0) {
            ctx->pc = 0x43B678u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_43b678;
        }
    }
    ctx->pc = 0x43B6A8u;
label_43b6a8:
    // 0x43b6a8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x43b6a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_43b6ac:
    // 0x43b6ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x43b6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_43b6b0:
    // 0x43b6b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x43b6b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_43b6b4:
    // 0x43b6b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x43b6b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_43b6b8:
    // 0x43b6b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x43b6b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43b6bc:
    // 0x43b6bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43b6bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43b6c0:
    // 0x43b6c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43b6c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43b6c4:
    // 0x43b6c4: 0x3e00008  jr          $ra
label_43b6c8:
    if (ctx->pc == 0x43B6C8u) {
        ctx->pc = 0x43B6C8u;
            // 0x43b6c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x43B6CCu;
        goto label_43b6cc;
    }
    ctx->pc = 0x43B6C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43B6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B6C4u;
            // 0x43b6c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43B6CCu;
label_43b6cc:
    // 0x43b6cc: 0x0  nop
    ctx->pc = 0x43b6ccu;
    // NOP
label_43b6d0:
    // 0x43b6d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43b6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_43b6d4:
    // 0x43b6d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x43b6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43b6d8:
    // 0x43b6d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43b6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_43b6dc:
    // 0x43b6dc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x43b6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_43b6e0:
    // 0x43b6e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43b6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43b6e4:
    // 0x43b6e4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x43b6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_43b6e8:
    // 0x43b6e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x43b6e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43b6ec:
    // 0x43b6ec: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x43b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_43b6f0:
    // 0x43b6f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x43b6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_43b6f4:
    // 0x43b6f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x43b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_43b6f8:
    // 0x43b6f8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x43b6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_43b6fc:
    // 0x43b6fc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x43b6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43b700:
    // 0x43b700: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x43b700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_43b704:
    // 0x43b704: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x43b704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_43b708:
    // 0x43b708: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x43b708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_43b70c:
    // 0x43b70c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x43b70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_43b710:
    // 0x43b710: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x43b710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_43b714:
    // 0x43b714: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x43b714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_43b718:
    // 0x43b718: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x43b718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_43b71c:
    // 0x43b71c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x43b71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_43b720:
    // 0x43b720: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x43b720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_43b724:
    // 0x43b724: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x43b724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_43b728:
    // 0x43b728: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x43b728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_43b72c:
    // 0x43b72c: 0xc0a997c  jal         func_2A65F0
label_43b730:
    if (ctx->pc == 0x43B730u) {
        ctx->pc = 0x43B730u;
            // 0x43b730: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x43B734u;
        goto label_43b734;
    }
    ctx->pc = 0x43B72Cu;
    SET_GPR_U32(ctx, 31, 0x43B734u);
    ctx->pc = 0x43B730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B72Cu;
            // 0x43b730: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B734u; }
        if (ctx->pc != 0x43B734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B734u; }
        if (ctx->pc != 0x43B734u) { return; }
    }
    ctx->pc = 0x43B734u;
label_43b734:
    // 0x43b734: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x43b734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_43b738:
    // 0x43b738: 0xc0d879c  jal         func_361E70
label_43b73c:
    if (ctx->pc == 0x43B73Cu) {
        ctx->pc = 0x43B73Cu;
            // 0x43b73c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B740u;
        goto label_43b740;
    }
    ctx->pc = 0x43B738u;
    SET_GPR_U32(ctx, 31, 0x43B740u);
    ctx->pc = 0x43B73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B738u;
            // 0x43b73c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B740u; }
        if (ctx->pc != 0x43B740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B740u; }
        if (ctx->pc != 0x43B740u) { return; }
    }
    ctx->pc = 0x43B740u;
label_43b740:
    // 0x43b740: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43b740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_43b744:
    // 0x43b744: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43b744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43b748:
    // 0x43b748: 0x3e00008  jr          $ra
label_43b74c:
    if (ctx->pc == 0x43B74Cu) {
        ctx->pc = 0x43B74Cu;
            // 0x43b74c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x43B750u;
        goto label_43b750;
    }
    ctx->pc = 0x43B748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43B74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B748u;
            // 0x43b74c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43B750u;
label_43b750:
    // 0x43b750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43b750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_43b754:
    // 0x43b754: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43b754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_43b758:
    // 0x43b758: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43b758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43b75c:
    // 0x43b75c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x43b75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_43b760:
    // 0x43b760: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_43b764:
    if (ctx->pc == 0x43B764u) {
        ctx->pc = 0x43B764u;
            // 0x43b764: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B768u;
        goto label_43b768;
    }
    ctx->pc = 0x43B760u;
    {
        const bool branch_taken_0x43b760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B760u;
            // 0x43b764: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b760) {
            ctx->pc = 0x43B880u;
            goto label_43b880;
        }
    }
    ctx->pc = 0x43B768u;
label_43b768:
    // 0x43b768: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x43b768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_43b76c:
    // 0x43b76c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x43b76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_43b770:
    // 0x43b770: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x43b770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_43b774:
    // 0x43b774: 0xc075128  jal         func_1D44A0
label_43b778:
    if (ctx->pc == 0x43B778u) {
        ctx->pc = 0x43B778u;
            // 0x43b778: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x43B77Cu;
        goto label_43b77c;
    }
    ctx->pc = 0x43B774u;
    SET_GPR_U32(ctx, 31, 0x43B77Cu);
    ctx->pc = 0x43B778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B774u;
            // 0x43b778: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B77Cu; }
        if (ctx->pc != 0x43B77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B77Cu; }
        if (ctx->pc != 0x43B77Cu) { return; }
    }
    ctx->pc = 0x43B77Cu;
label_43b77c:
    // 0x43b77c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x43b77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_43b780:
    // 0x43b780: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43b780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43b784:
    // 0x43b784: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x43b784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_43b788:
    // 0x43b788: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x43b788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_43b78c:
    // 0x43b78c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x43b78cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_43b790:
    // 0x43b790: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_43b794:
    if (ctx->pc == 0x43B794u) {
        ctx->pc = 0x43B794u;
            // 0x43b794: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x43B798u;
        goto label_43b798;
    }
    ctx->pc = 0x43B790u;
    {
        const bool branch_taken_0x43b790 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B790u;
            // 0x43b794: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b790) {
            ctx->pc = 0x43B7A0u;
            goto label_43b7a0;
        }
    }
    ctx->pc = 0x43B798u;
label_43b798:
    // 0x43b798: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43b798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43b79c:
    // 0x43b79c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x43b79cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_43b7a0:
    // 0x43b7a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x43b7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43b7a4:
    // 0x43b7a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43b7a8:
    // 0x43b7a8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x43b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_43b7ac:
    // 0x43b7ac: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x43b7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_43b7b0:
    // 0x43b7b0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x43b7b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_43b7b4:
    // 0x43b7b4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_43b7b8:
    if (ctx->pc == 0x43B7B8u) {
        ctx->pc = 0x43B7B8u;
            // 0x43b7b8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x43B7BCu;
        goto label_43b7bc;
    }
    ctx->pc = 0x43B7B4u;
    {
        const bool branch_taken_0x43b7b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x43b7b4) {
            ctx->pc = 0x43B7B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43B7B4u;
            // 0x43b7b8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43B7C8u;
            goto label_43b7c8;
        }
    }
    ctx->pc = 0x43B7BCu;
label_43b7bc:
    // 0x43b7bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43b7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43b7c0:
    // 0x43b7c0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x43b7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_43b7c4:
    // 0x43b7c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x43b7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43b7c8:
    // 0x43b7c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43b7cc:
    // 0x43b7cc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x43b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_43b7d0:
    // 0x43b7d0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x43b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_43b7d4:
    // 0x43b7d4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x43b7d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_43b7d8:
    // 0x43b7d8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_43b7dc:
    if (ctx->pc == 0x43B7DCu) {
        ctx->pc = 0x43B7DCu;
            // 0x43b7dc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x43B7E0u;
        goto label_43b7e0;
    }
    ctx->pc = 0x43B7D8u;
    {
        const bool branch_taken_0x43b7d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x43b7d8) {
            ctx->pc = 0x43B7DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43B7D8u;
            // 0x43b7dc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43B7ECu;
            goto label_43b7ec;
        }
    }
    ctx->pc = 0x43B7E0u;
label_43b7e0:
    // 0x43b7e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43b7e4:
    // 0x43b7e4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x43b7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_43b7e8:
    // 0x43b7e8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x43b7e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_43b7ec:
    // 0x43b7ec: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x43b7ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_43b7f0:
    // 0x43b7f0: 0x320f809  jalr        $t9
label_43b7f4:
    if (ctx->pc == 0x43B7F4u) {
        ctx->pc = 0x43B7F4u;
            // 0x43b7f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B7F8u;
        goto label_43b7f8;
    }
    ctx->pc = 0x43B7F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43B7F8u);
        ctx->pc = 0x43B7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B7F0u;
            // 0x43b7f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43B7F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43B7F8u; }
            if (ctx->pc != 0x43B7F8u) { return; }
        }
        }
    }
    ctx->pc = 0x43B7F8u;
label_43b7f8:
    // 0x43b7f8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x43b7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_43b7fc:
    // 0x43b7fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43b7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43b800:
    // 0x43b800: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x43b800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_43b804:
    // 0x43b804: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x43b804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_43b808:
    // 0x43b808: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x43b808u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_43b80c:
    // 0x43b80c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x43b80cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_43b810:
    // 0x43b810: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_43b814:
    if (ctx->pc == 0x43B814u) {
        ctx->pc = 0x43B814u;
            // 0x43b814: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x43B818u;
        goto label_43b818;
    }
    ctx->pc = 0x43B810u;
    {
        const bool branch_taken_0x43b810 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x43b810) {
            ctx->pc = 0x43B814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43B810u;
            // 0x43b814: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43B824u;
            goto label_43b824;
        }
    }
    ctx->pc = 0x43B818u;
label_43b818:
    // 0x43b818: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43b818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43b81c:
    // 0x43b81c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x43b81cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_43b820:
    // 0x43b820: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x43b820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_43b824:
    // 0x43b824: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43b824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43b828:
    // 0x43b828: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x43b828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_43b82c:
    // 0x43b82c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x43b82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_43b830:
    // 0x43b830: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x43b830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_43b834:
    // 0x43b834: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x43b834u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_43b838:
    // 0x43b838: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_43b83c:
    if (ctx->pc == 0x43B83Cu) {
        ctx->pc = 0x43B840u;
        goto label_43b840;
    }
    ctx->pc = 0x43B838u;
    {
        const bool branch_taken_0x43b838 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x43b838) {
            ctx->pc = 0x43B848u;
            goto label_43b848;
        }
    }
    ctx->pc = 0x43B840u;
label_43b840:
    // 0x43b840: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43b840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43b844:
    // 0x43b844: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x43b844u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_43b848:
    // 0x43b848: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43b848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43b84c:
    // 0x43b84c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x43b84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_43b850:
    // 0x43b850: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x43b850u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_43b854:
    // 0x43b854: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_43b858:
    if (ctx->pc == 0x43B858u) {
        ctx->pc = 0x43B85Cu;
        goto label_43b85c;
    }
    ctx->pc = 0x43B854u;
    {
        const bool branch_taken_0x43b854 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x43b854) {
            ctx->pc = 0x43B864u;
            goto label_43b864;
        }
    }
    ctx->pc = 0x43B85Cu;
label_43b85c:
    // 0x43b85c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43b85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43b860:
    // 0x43b860: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x43b860u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_43b864:
    // 0x43b864: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43b864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43b868:
    // 0x43b868: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x43b868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_43b86c:
    // 0x43b86c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x43b86cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_43b870:
    // 0x43b870: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_43b874:
    if (ctx->pc == 0x43B874u) {
        ctx->pc = 0x43B874u;
            // 0x43b874: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x43B878u;
        goto label_43b878;
    }
    ctx->pc = 0x43B870u;
    {
        const bool branch_taken_0x43b870 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x43b870) {
            ctx->pc = 0x43B874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43B870u;
            // 0x43b874: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43B884u;
            goto label_43b884;
        }
    }
    ctx->pc = 0x43B878u;
label_43b878:
    // 0x43b878: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43b878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43b87c:
    // 0x43b87c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x43b87cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_43b880:
    // 0x43b880: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43b880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_43b884:
    // 0x43b884: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43b884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43b888:
    // 0x43b888: 0x3e00008  jr          $ra
label_43b88c:
    if (ctx->pc == 0x43B88Cu) {
        ctx->pc = 0x43B88Cu;
            // 0x43b88c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x43B890u;
        goto label_43b890;
    }
    ctx->pc = 0x43B888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43B88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B888u;
            // 0x43b88c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43B890u;
label_43b890:
    // 0x43b890: 0x810e890  j           func_43A240
label_43b894:
    if (ctx->pc == 0x43B894u) {
        ctx->pc = 0x43B894u;
            // 0x43b894: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x43B898u;
        goto label_43b898;
    }
    ctx->pc = 0x43B890u;
    ctx->pc = 0x43B894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B890u;
            // 0x43b894: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43A240u;
    {
        auto targetFn = runtime->lookupFunction(0x43A240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x43B898u;
label_43b898:
    // 0x43b898: 0x0  nop
    ctx->pc = 0x43b898u;
    // NOP
label_43b89c:
    // 0x43b89c: 0x0  nop
    ctx->pc = 0x43b89cu;
    // NOP
label_43b8a0:
    // 0x43b8a0: 0x810e62c  j           func_4398B0
label_43b8a4:
    if (ctx->pc == 0x43B8A4u) {
        ctx->pc = 0x43B8A4u;
            // 0x43b8a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x43B8A8u;
        goto label_43b8a8;
    }
    ctx->pc = 0x43B8A0u;
    ctx->pc = 0x43B8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B8A0u;
            // 0x43b8a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4398B0u;
    if (runtime->hasFunction(0x4398B0u)) {
        auto targetFn = runtime->lookupFunction(0x4398B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004398B0_0x4398b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x43B8A8u;
label_43b8a8:
    // 0x43b8a8: 0x0  nop
    ctx->pc = 0x43b8a8u;
    // NOP
label_43b8ac:
    // 0x43b8ac: 0x0  nop
    ctx->pc = 0x43b8acu;
    // NOP
label_43b8b0:
    // 0x43b8b0: 0x810e684  j           func_439A10
label_43b8b4:
    if (ctx->pc == 0x43B8B4u) {
        ctx->pc = 0x43B8B4u;
            // 0x43b8b4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x43B8B8u;
        goto label_43b8b8;
    }
    ctx->pc = 0x43B8B0u;
    ctx->pc = 0x43B8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B8B0u;
            // 0x43b8b4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x439A10u;
    {
        auto targetFn = runtime->lookupFunction(0x439A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x43B8B8u;
label_43b8b8:
    // 0x43b8b8: 0x0  nop
    ctx->pc = 0x43b8b8u;
    // NOP
label_43b8bc:
    // 0x43b8bc: 0x0  nop
    ctx->pc = 0x43b8bcu;
    // NOP
label_43b8c0:
    // 0x43b8c0: 0x810e608  j           func_439820
label_43b8c4:
    if (ctx->pc == 0x43B8C4u) {
        ctx->pc = 0x43B8C4u;
            // 0x43b8c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x43B8C8u;
        goto label_43b8c8;
    }
    ctx->pc = 0x43B8C0u;
    ctx->pc = 0x43B8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B8C0u;
            // 0x43b8c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x439820u;
    {
        auto targetFn = runtime->lookupFunction(0x439820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x43B8C8u;
label_43b8c8:
    // 0x43b8c8: 0x0  nop
    ctx->pc = 0x43b8c8u;
    // NOP
label_43b8cc:
    // 0x43b8cc: 0x0  nop
    ctx->pc = 0x43b8ccu;
    // NOP
label_43b8d0:
    // 0x43b8d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43b8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_43b8d4:
    // 0x43b8d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x43b8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_43b8d8:
    // 0x43b8d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43b8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43b8dc:
    // 0x43b8dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43b8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43b8e0:
    // 0x43b8e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43b8e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43b8e4:
    // 0x43b8e4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_43b8e8:
    if (ctx->pc == 0x43B8E8u) {
        ctx->pc = 0x43B8E8u;
            // 0x43b8e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B8ECu;
        goto label_43b8ec;
    }
    ctx->pc = 0x43B8E4u;
    {
        const bool branch_taken_0x43b8e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B8E4u;
            // 0x43b8e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b8e4) {
            ctx->pc = 0x43B940u;
            goto label_43b940;
        }
    }
    ctx->pc = 0x43B8ECu;
label_43b8ec:
    // 0x43b8ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43b8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_43b8f0:
    // 0x43b8f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_43b8f4:
    // 0x43b8f4: 0x2463cfb0  addiu       $v1, $v1, -0x3050
    ctx->pc = 0x43b8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954928));
label_43b8f8:
    // 0x43b8f8: 0x2442cfe8  addiu       $v0, $v0, -0x3018
    ctx->pc = 0x43b8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954984));
label_43b8fc:
    // 0x43b8fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43b8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_43b900:
    // 0x43b900: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_43b904:
    if (ctx->pc == 0x43B904u) {
        ctx->pc = 0x43B904u;
            // 0x43b904: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x43B908u;
        goto label_43b908;
    }
    ctx->pc = 0x43B900u;
    {
        const bool branch_taken_0x43b900 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B900u;
            // 0x43b904: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b900) {
            ctx->pc = 0x43B928u;
            goto label_43b928;
        }
    }
    ctx->pc = 0x43B908u;
label_43b908:
    // 0x43b908: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43b908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_43b90c:
    // 0x43b90c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43b90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_43b910:
    // 0x43b910: 0x2463d060  addiu       $v1, $v1, -0x2FA0
    ctx->pc = 0x43b910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955104));
label_43b914:
    // 0x43b914: 0x2442d098  addiu       $v0, $v0, -0x2F68
    ctx->pc = 0x43b914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955160));
label_43b918:
    // 0x43b918: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43b918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_43b91c:
    // 0x43b91c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x43b91cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43b920:
    // 0x43b920: 0xc10ee58  jal         func_43B960
label_43b924:
    if (ctx->pc == 0x43B924u) {
        ctx->pc = 0x43B924u;
            // 0x43b924: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x43B928u;
        goto label_43b928;
    }
    ctx->pc = 0x43B920u;
    SET_GPR_U32(ctx, 31, 0x43B928u);
    ctx->pc = 0x43B924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B920u;
            // 0x43b924: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43B960u;
    if (runtime->hasFunction(0x43B960u)) {
        auto targetFn = runtime->lookupFunction(0x43B960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B928u; }
        if (ctx->pc != 0x43B928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043B960_0x43b960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B928u; }
        if (ctx->pc != 0x43B928u) { return; }
    }
    ctx->pc = 0x43B928u;
label_43b928:
    // 0x43b928: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x43b928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_43b92c:
    // 0x43b92c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x43b92cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_43b930:
    // 0x43b930: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_43b934:
    if (ctx->pc == 0x43B934u) {
        ctx->pc = 0x43B934u;
            // 0x43b934: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B938u;
        goto label_43b938;
    }
    ctx->pc = 0x43B930u;
    {
        const bool branch_taken_0x43b930 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x43b930) {
            ctx->pc = 0x43B934u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43B930u;
            // 0x43b934: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43B944u;
            goto label_43b944;
        }
    }
    ctx->pc = 0x43B938u;
label_43b938:
    // 0x43b938: 0xc0400a8  jal         func_1002A0
label_43b93c:
    if (ctx->pc == 0x43B93Cu) {
        ctx->pc = 0x43B93Cu;
            // 0x43b93c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43B940u;
        goto label_43b940;
    }
    ctx->pc = 0x43B938u;
    SET_GPR_U32(ctx, 31, 0x43B940u);
    ctx->pc = 0x43B93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43B938u;
            // 0x43b93c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B940u; }
        if (ctx->pc != 0x43B940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43B940u; }
        if (ctx->pc != 0x43B940u) { return; }
    }
    ctx->pc = 0x43B940u;
label_43b940:
    // 0x43b940: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x43b940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43b944:
    // 0x43b944: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43b944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_43b948:
    // 0x43b948: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43b948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43b94c:
    // 0x43b94c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43b94cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43b950:
    // 0x43b950: 0x3e00008  jr          $ra
label_43b954:
    if (ctx->pc == 0x43B954u) {
        ctx->pc = 0x43B954u;
            // 0x43b954: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x43B958u;
        goto label_43b958;
    }
    ctx->pc = 0x43B950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43B954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43B950u;
            // 0x43b954: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43B958u;
label_43b958:
    // 0x43b958: 0x0  nop
    ctx->pc = 0x43b958u;
    // NOP
label_43b95c:
    // 0x43b95c: 0x0  nop
    ctx->pc = 0x43b95cu;
    // NOP
}
