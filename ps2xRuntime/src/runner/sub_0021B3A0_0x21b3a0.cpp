#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021B3A0
// Address: 0x21b3a0 - 0x21c740
void sub_0021B3A0_0x21b3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B3A0_0x21b3a0");
#endif

    switch (ctx->pc) {
        case 0x21b3a0u: goto label_21b3a0;
        case 0x21b3a4u: goto label_21b3a4;
        case 0x21b3a8u: goto label_21b3a8;
        case 0x21b3acu: goto label_21b3ac;
        case 0x21b3b0u: goto label_21b3b0;
        case 0x21b3b4u: goto label_21b3b4;
        case 0x21b3b8u: goto label_21b3b8;
        case 0x21b3bcu: goto label_21b3bc;
        case 0x21b3c0u: goto label_21b3c0;
        case 0x21b3c4u: goto label_21b3c4;
        case 0x21b3c8u: goto label_21b3c8;
        case 0x21b3ccu: goto label_21b3cc;
        case 0x21b3d0u: goto label_21b3d0;
        case 0x21b3d4u: goto label_21b3d4;
        case 0x21b3d8u: goto label_21b3d8;
        case 0x21b3dcu: goto label_21b3dc;
        case 0x21b3e0u: goto label_21b3e0;
        case 0x21b3e4u: goto label_21b3e4;
        case 0x21b3e8u: goto label_21b3e8;
        case 0x21b3ecu: goto label_21b3ec;
        case 0x21b3f0u: goto label_21b3f0;
        case 0x21b3f4u: goto label_21b3f4;
        case 0x21b3f8u: goto label_21b3f8;
        case 0x21b3fcu: goto label_21b3fc;
        case 0x21b400u: goto label_21b400;
        case 0x21b404u: goto label_21b404;
        case 0x21b408u: goto label_21b408;
        case 0x21b40cu: goto label_21b40c;
        case 0x21b410u: goto label_21b410;
        case 0x21b414u: goto label_21b414;
        case 0x21b418u: goto label_21b418;
        case 0x21b41cu: goto label_21b41c;
        case 0x21b420u: goto label_21b420;
        case 0x21b424u: goto label_21b424;
        case 0x21b428u: goto label_21b428;
        case 0x21b42cu: goto label_21b42c;
        case 0x21b430u: goto label_21b430;
        case 0x21b434u: goto label_21b434;
        case 0x21b438u: goto label_21b438;
        case 0x21b43cu: goto label_21b43c;
        case 0x21b440u: goto label_21b440;
        case 0x21b444u: goto label_21b444;
        case 0x21b448u: goto label_21b448;
        case 0x21b44cu: goto label_21b44c;
        case 0x21b450u: goto label_21b450;
        case 0x21b454u: goto label_21b454;
        case 0x21b458u: goto label_21b458;
        case 0x21b45cu: goto label_21b45c;
        case 0x21b460u: goto label_21b460;
        case 0x21b464u: goto label_21b464;
        case 0x21b468u: goto label_21b468;
        case 0x21b46cu: goto label_21b46c;
        case 0x21b470u: goto label_21b470;
        case 0x21b474u: goto label_21b474;
        case 0x21b478u: goto label_21b478;
        case 0x21b47cu: goto label_21b47c;
        case 0x21b480u: goto label_21b480;
        case 0x21b484u: goto label_21b484;
        case 0x21b488u: goto label_21b488;
        case 0x21b48cu: goto label_21b48c;
        case 0x21b490u: goto label_21b490;
        case 0x21b494u: goto label_21b494;
        case 0x21b498u: goto label_21b498;
        case 0x21b49cu: goto label_21b49c;
        case 0x21b4a0u: goto label_21b4a0;
        case 0x21b4a4u: goto label_21b4a4;
        case 0x21b4a8u: goto label_21b4a8;
        case 0x21b4acu: goto label_21b4ac;
        case 0x21b4b0u: goto label_21b4b0;
        case 0x21b4b4u: goto label_21b4b4;
        case 0x21b4b8u: goto label_21b4b8;
        case 0x21b4bcu: goto label_21b4bc;
        case 0x21b4c0u: goto label_21b4c0;
        case 0x21b4c4u: goto label_21b4c4;
        case 0x21b4c8u: goto label_21b4c8;
        case 0x21b4ccu: goto label_21b4cc;
        case 0x21b4d0u: goto label_21b4d0;
        case 0x21b4d4u: goto label_21b4d4;
        case 0x21b4d8u: goto label_21b4d8;
        case 0x21b4dcu: goto label_21b4dc;
        case 0x21b4e0u: goto label_21b4e0;
        case 0x21b4e4u: goto label_21b4e4;
        case 0x21b4e8u: goto label_21b4e8;
        case 0x21b4ecu: goto label_21b4ec;
        case 0x21b4f0u: goto label_21b4f0;
        case 0x21b4f4u: goto label_21b4f4;
        case 0x21b4f8u: goto label_21b4f8;
        case 0x21b4fcu: goto label_21b4fc;
        case 0x21b500u: goto label_21b500;
        case 0x21b504u: goto label_21b504;
        case 0x21b508u: goto label_21b508;
        case 0x21b50cu: goto label_21b50c;
        case 0x21b510u: goto label_21b510;
        case 0x21b514u: goto label_21b514;
        case 0x21b518u: goto label_21b518;
        case 0x21b51cu: goto label_21b51c;
        case 0x21b520u: goto label_21b520;
        case 0x21b524u: goto label_21b524;
        case 0x21b528u: goto label_21b528;
        case 0x21b52cu: goto label_21b52c;
        case 0x21b530u: goto label_21b530;
        case 0x21b534u: goto label_21b534;
        case 0x21b538u: goto label_21b538;
        case 0x21b53cu: goto label_21b53c;
        case 0x21b540u: goto label_21b540;
        case 0x21b544u: goto label_21b544;
        case 0x21b548u: goto label_21b548;
        case 0x21b54cu: goto label_21b54c;
        case 0x21b550u: goto label_21b550;
        case 0x21b554u: goto label_21b554;
        case 0x21b558u: goto label_21b558;
        case 0x21b55cu: goto label_21b55c;
        case 0x21b560u: goto label_21b560;
        case 0x21b564u: goto label_21b564;
        case 0x21b568u: goto label_21b568;
        case 0x21b56cu: goto label_21b56c;
        case 0x21b570u: goto label_21b570;
        case 0x21b574u: goto label_21b574;
        case 0x21b578u: goto label_21b578;
        case 0x21b57cu: goto label_21b57c;
        case 0x21b580u: goto label_21b580;
        case 0x21b584u: goto label_21b584;
        case 0x21b588u: goto label_21b588;
        case 0x21b58cu: goto label_21b58c;
        case 0x21b590u: goto label_21b590;
        case 0x21b594u: goto label_21b594;
        case 0x21b598u: goto label_21b598;
        case 0x21b59cu: goto label_21b59c;
        case 0x21b5a0u: goto label_21b5a0;
        case 0x21b5a4u: goto label_21b5a4;
        case 0x21b5a8u: goto label_21b5a8;
        case 0x21b5acu: goto label_21b5ac;
        case 0x21b5b0u: goto label_21b5b0;
        case 0x21b5b4u: goto label_21b5b4;
        case 0x21b5b8u: goto label_21b5b8;
        case 0x21b5bcu: goto label_21b5bc;
        case 0x21b5c0u: goto label_21b5c0;
        case 0x21b5c4u: goto label_21b5c4;
        case 0x21b5c8u: goto label_21b5c8;
        case 0x21b5ccu: goto label_21b5cc;
        case 0x21b5d0u: goto label_21b5d0;
        case 0x21b5d4u: goto label_21b5d4;
        case 0x21b5d8u: goto label_21b5d8;
        case 0x21b5dcu: goto label_21b5dc;
        case 0x21b5e0u: goto label_21b5e0;
        case 0x21b5e4u: goto label_21b5e4;
        case 0x21b5e8u: goto label_21b5e8;
        case 0x21b5ecu: goto label_21b5ec;
        case 0x21b5f0u: goto label_21b5f0;
        case 0x21b5f4u: goto label_21b5f4;
        case 0x21b5f8u: goto label_21b5f8;
        case 0x21b5fcu: goto label_21b5fc;
        case 0x21b600u: goto label_21b600;
        case 0x21b604u: goto label_21b604;
        case 0x21b608u: goto label_21b608;
        case 0x21b60cu: goto label_21b60c;
        case 0x21b610u: goto label_21b610;
        case 0x21b614u: goto label_21b614;
        case 0x21b618u: goto label_21b618;
        case 0x21b61cu: goto label_21b61c;
        case 0x21b620u: goto label_21b620;
        case 0x21b624u: goto label_21b624;
        case 0x21b628u: goto label_21b628;
        case 0x21b62cu: goto label_21b62c;
        case 0x21b630u: goto label_21b630;
        case 0x21b634u: goto label_21b634;
        case 0x21b638u: goto label_21b638;
        case 0x21b63cu: goto label_21b63c;
        case 0x21b640u: goto label_21b640;
        case 0x21b644u: goto label_21b644;
        case 0x21b648u: goto label_21b648;
        case 0x21b64cu: goto label_21b64c;
        case 0x21b650u: goto label_21b650;
        case 0x21b654u: goto label_21b654;
        case 0x21b658u: goto label_21b658;
        case 0x21b65cu: goto label_21b65c;
        case 0x21b660u: goto label_21b660;
        case 0x21b664u: goto label_21b664;
        case 0x21b668u: goto label_21b668;
        case 0x21b66cu: goto label_21b66c;
        case 0x21b670u: goto label_21b670;
        case 0x21b674u: goto label_21b674;
        case 0x21b678u: goto label_21b678;
        case 0x21b67cu: goto label_21b67c;
        case 0x21b680u: goto label_21b680;
        case 0x21b684u: goto label_21b684;
        case 0x21b688u: goto label_21b688;
        case 0x21b68cu: goto label_21b68c;
        case 0x21b690u: goto label_21b690;
        case 0x21b694u: goto label_21b694;
        case 0x21b698u: goto label_21b698;
        case 0x21b69cu: goto label_21b69c;
        case 0x21b6a0u: goto label_21b6a0;
        case 0x21b6a4u: goto label_21b6a4;
        case 0x21b6a8u: goto label_21b6a8;
        case 0x21b6acu: goto label_21b6ac;
        case 0x21b6b0u: goto label_21b6b0;
        case 0x21b6b4u: goto label_21b6b4;
        case 0x21b6b8u: goto label_21b6b8;
        case 0x21b6bcu: goto label_21b6bc;
        case 0x21b6c0u: goto label_21b6c0;
        case 0x21b6c4u: goto label_21b6c4;
        case 0x21b6c8u: goto label_21b6c8;
        case 0x21b6ccu: goto label_21b6cc;
        case 0x21b6d0u: goto label_21b6d0;
        case 0x21b6d4u: goto label_21b6d4;
        case 0x21b6d8u: goto label_21b6d8;
        case 0x21b6dcu: goto label_21b6dc;
        case 0x21b6e0u: goto label_21b6e0;
        case 0x21b6e4u: goto label_21b6e4;
        case 0x21b6e8u: goto label_21b6e8;
        case 0x21b6ecu: goto label_21b6ec;
        case 0x21b6f0u: goto label_21b6f0;
        case 0x21b6f4u: goto label_21b6f4;
        case 0x21b6f8u: goto label_21b6f8;
        case 0x21b6fcu: goto label_21b6fc;
        case 0x21b700u: goto label_21b700;
        case 0x21b704u: goto label_21b704;
        case 0x21b708u: goto label_21b708;
        case 0x21b70cu: goto label_21b70c;
        case 0x21b710u: goto label_21b710;
        case 0x21b714u: goto label_21b714;
        case 0x21b718u: goto label_21b718;
        case 0x21b71cu: goto label_21b71c;
        case 0x21b720u: goto label_21b720;
        case 0x21b724u: goto label_21b724;
        case 0x21b728u: goto label_21b728;
        case 0x21b72cu: goto label_21b72c;
        case 0x21b730u: goto label_21b730;
        case 0x21b734u: goto label_21b734;
        case 0x21b738u: goto label_21b738;
        case 0x21b73cu: goto label_21b73c;
        case 0x21b740u: goto label_21b740;
        case 0x21b744u: goto label_21b744;
        case 0x21b748u: goto label_21b748;
        case 0x21b74cu: goto label_21b74c;
        case 0x21b750u: goto label_21b750;
        case 0x21b754u: goto label_21b754;
        case 0x21b758u: goto label_21b758;
        case 0x21b75cu: goto label_21b75c;
        case 0x21b760u: goto label_21b760;
        case 0x21b764u: goto label_21b764;
        case 0x21b768u: goto label_21b768;
        case 0x21b76cu: goto label_21b76c;
        case 0x21b770u: goto label_21b770;
        case 0x21b774u: goto label_21b774;
        case 0x21b778u: goto label_21b778;
        case 0x21b77cu: goto label_21b77c;
        case 0x21b780u: goto label_21b780;
        case 0x21b784u: goto label_21b784;
        case 0x21b788u: goto label_21b788;
        case 0x21b78cu: goto label_21b78c;
        case 0x21b790u: goto label_21b790;
        case 0x21b794u: goto label_21b794;
        case 0x21b798u: goto label_21b798;
        case 0x21b79cu: goto label_21b79c;
        case 0x21b7a0u: goto label_21b7a0;
        case 0x21b7a4u: goto label_21b7a4;
        case 0x21b7a8u: goto label_21b7a8;
        case 0x21b7acu: goto label_21b7ac;
        case 0x21b7b0u: goto label_21b7b0;
        case 0x21b7b4u: goto label_21b7b4;
        case 0x21b7b8u: goto label_21b7b8;
        case 0x21b7bcu: goto label_21b7bc;
        case 0x21b7c0u: goto label_21b7c0;
        case 0x21b7c4u: goto label_21b7c4;
        case 0x21b7c8u: goto label_21b7c8;
        case 0x21b7ccu: goto label_21b7cc;
        case 0x21b7d0u: goto label_21b7d0;
        case 0x21b7d4u: goto label_21b7d4;
        case 0x21b7d8u: goto label_21b7d8;
        case 0x21b7dcu: goto label_21b7dc;
        case 0x21b7e0u: goto label_21b7e0;
        case 0x21b7e4u: goto label_21b7e4;
        case 0x21b7e8u: goto label_21b7e8;
        case 0x21b7ecu: goto label_21b7ec;
        case 0x21b7f0u: goto label_21b7f0;
        case 0x21b7f4u: goto label_21b7f4;
        case 0x21b7f8u: goto label_21b7f8;
        case 0x21b7fcu: goto label_21b7fc;
        case 0x21b800u: goto label_21b800;
        case 0x21b804u: goto label_21b804;
        case 0x21b808u: goto label_21b808;
        case 0x21b80cu: goto label_21b80c;
        case 0x21b810u: goto label_21b810;
        case 0x21b814u: goto label_21b814;
        case 0x21b818u: goto label_21b818;
        case 0x21b81cu: goto label_21b81c;
        case 0x21b820u: goto label_21b820;
        case 0x21b824u: goto label_21b824;
        case 0x21b828u: goto label_21b828;
        case 0x21b82cu: goto label_21b82c;
        case 0x21b830u: goto label_21b830;
        case 0x21b834u: goto label_21b834;
        case 0x21b838u: goto label_21b838;
        case 0x21b83cu: goto label_21b83c;
        case 0x21b840u: goto label_21b840;
        case 0x21b844u: goto label_21b844;
        case 0x21b848u: goto label_21b848;
        case 0x21b84cu: goto label_21b84c;
        case 0x21b850u: goto label_21b850;
        case 0x21b854u: goto label_21b854;
        case 0x21b858u: goto label_21b858;
        case 0x21b85cu: goto label_21b85c;
        case 0x21b860u: goto label_21b860;
        case 0x21b864u: goto label_21b864;
        case 0x21b868u: goto label_21b868;
        case 0x21b86cu: goto label_21b86c;
        case 0x21b870u: goto label_21b870;
        case 0x21b874u: goto label_21b874;
        case 0x21b878u: goto label_21b878;
        case 0x21b87cu: goto label_21b87c;
        case 0x21b880u: goto label_21b880;
        case 0x21b884u: goto label_21b884;
        case 0x21b888u: goto label_21b888;
        case 0x21b88cu: goto label_21b88c;
        case 0x21b890u: goto label_21b890;
        case 0x21b894u: goto label_21b894;
        case 0x21b898u: goto label_21b898;
        case 0x21b89cu: goto label_21b89c;
        case 0x21b8a0u: goto label_21b8a0;
        case 0x21b8a4u: goto label_21b8a4;
        case 0x21b8a8u: goto label_21b8a8;
        case 0x21b8acu: goto label_21b8ac;
        case 0x21b8b0u: goto label_21b8b0;
        case 0x21b8b4u: goto label_21b8b4;
        case 0x21b8b8u: goto label_21b8b8;
        case 0x21b8bcu: goto label_21b8bc;
        case 0x21b8c0u: goto label_21b8c0;
        case 0x21b8c4u: goto label_21b8c4;
        case 0x21b8c8u: goto label_21b8c8;
        case 0x21b8ccu: goto label_21b8cc;
        case 0x21b8d0u: goto label_21b8d0;
        case 0x21b8d4u: goto label_21b8d4;
        case 0x21b8d8u: goto label_21b8d8;
        case 0x21b8dcu: goto label_21b8dc;
        case 0x21b8e0u: goto label_21b8e0;
        case 0x21b8e4u: goto label_21b8e4;
        case 0x21b8e8u: goto label_21b8e8;
        case 0x21b8ecu: goto label_21b8ec;
        case 0x21b8f0u: goto label_21b8f0;
        case 0x21b8f4u: goto label_21b8f4;
        case 0x21b8f8u: goto label_21b8f8;
        case 0x21b8fcu: goto label_21b8fc;
        case 0x21b900u: goto label_21b900;
        case 0x21b904u: goto label_21b904;
        case 0x21b908u: goto label_21b908;
        case 0x21b90cu: goto label_21b90c;
        case 0x21b910u: goto label_21b910;
        case 0x21b914u: goto label_21b914;
        case 0x21b918u: goto label_21b918;
        case 0x21b91cu: goto label_21b91c;
        case 0x21b920u: goto label_21b920;
        case 0x21b924u: goto label_21b924;
        case 0x21b928u: goto label_21b928;
        case 0x21b92cu: goto label_21b92c;
        case 0x21b930u: goto label_21b930;
        case 0x21b934u: goto label_21b934;
        case 0x21b938u: goto label_21b938;
        case 0x21b93cu: goto label_21b93c;
        case 0x21b940u: goto label_21b940;
        case 0x21b944u: goto label_21b944;
        case 0x21b948u: goto label_21b948;
        case 0x21b94cu: goto label_21b94c;
        case 0x21b950u: goto label_21b950;
        case 0x21b954u: goto label_21b954;
        case 0x21b958u: goto label_21b958;
        case 0x21b95cu: goto label_21b95c;
        case 0x21b960u: goto label_21b960;
        case 0x21b964u: goto label_21b964;
        case 0x21b968u: goto label_21b968;
        case 0x21b96cu: goto label_21b96c;
        case 0x21b970u: goto label_21b970;
        case 0x21b974u: goto label_21b974;
        case 0x21b978u: goto label_21b978;
        case 0x21b97cu: goto label_21b97c;
        case 0x21b980u: goto label_21b980;
        case 0x21b984u: goto label_21b984;
        case 0x21b988u: goto label_21b988;
        case 0x21b98cu: goto label_21b98c;
        case 0x21b990u: goto label_21b990;
        case 0x21b994u: goto label_21b994;
        case 0x21b998u: goto label_21b998;
        case 0x21b99cu: goto label_21b99c;
        case 0x21b9a0u: goto label_21b9a0;
        case 0x21b9a4u: goto label_21b9a4;
        case 0x21b9a8u: goto label_21b9a8;
        case 0x21b9acu: goto label_21b9ac;
        case 0x21b9b0u: goto label_21b9b0;
        case 0x21b9b4u: goto label_21b9b4;
        case 0x21b9b8u: goto label_21b9b8;
        case 0x21b9bcu: goto label_21b9bc;
        case 0x21b9c0u: goto label_21b9c0;
        case 0x21b9c4u: goto label_21b9c4;
        case 0x21b9c8u: goto label_21b9c8;
        case 0x21b9ccu: goto label_21b9cc;
        case 0x21b9d0u: goto label_21b9d0;
        case 0x21b9d4u: goto label_21b9d4;
        case 0x21b9d8u: goto label_21b9d8;
        case 0x21b9dcu: goto label_21b9dc;
        case 0x21b9e0u: goto label_21b9e0;
        case 0x21b9e4u: goto label_21b9e4;
        case 0x21b9e8u: goto label_21b9e8;
        case 0x21b9ecu: goto label_21b9ec;
        case 0x21b9f0u: goto label_21b9f0;
        case 0x21b9f4u: goto label_21b9f4;
        case 0x21b9f8u: goto label_21b9f8;
        case 0x21b9fcu: goto label_21b9fc;
        case 0x21ba00u: goto label_21ba00;
        case 0x21ba04u: goto label_21ba04;
        case 0x21ba08u: goto label_21ba08;
        case 0x21ba0cu: goto label_21ba0c;
        case 0x21ba10u: goto label_21ba10;
        case 0x21ba14u: goto label_21ba14;
        case 0x21ba18u: goto label_21ba18;
        case 0x21ba1cu: goto label_21ba1c;
        case 0x21ba20u: goto label_21ba20;
        case 0x21ba24u: goto label_21ba24;
        case 0x21ba28u: goto label_21ba28;
        case 0x21ba2cu: goto label_21ba2c;
        case 0x21ba30u: goto label_21ba30;
        case 0x21ba34u: goto label_21ba34;
        case 0x21ba38u: goto label_21ba38;
        case 0x21ba3cu: goto label_21ba3c;
        case 0x21ba40u: goto label_21ba40;
        case 0x21ba44u: goto label_21ba44;
        case 0x21ba48u: goto label_21ba48;
        case 0x21ba4cu: goto label_21ba4c;
        case 0x21ba50u: goto label_21ba50;
        case 0x21ba54u: goto label_21ba54;
        case 0x21ba58u: goto label_21ba58;
        case 0x21ba5cu: goto label_21ba5c;
        case 0x21ba60u: goto label_21ba60;
        case 0x21ba64u: goto label_21ba64;
        case 0x21ba68u: goto label_21ba68;
        case 0x21ba6cu: goto label_21ba6c;
        case 0x21ba70u: goto label_21ba70;
        case 0x21ba74u: goto label_21ba74;
        case 0x21ba78u: goto label_21ba78;
        case 0x21ba7cu: goto label_21ba7c;
        case 0x21ba80u: goto label_21ba80;
        case 0x21ba84u: goto label_21ba84;
        case 0x21ba88u: goto label_21ba88;
        case 0x21ba8cu: goto label_21ba8c;
        case 0x21ba90u: goto label_21ba90;
        case 0x21ba94u: goto label_21ba94;
        case 0x21ba98u: goto label_21ba98;
        case 0x21ba9cu: goto label_21ba9c;
        case 0x21baa0u: goto label_21baa0;
        case 0x21baa4u: goto label_21baa4;
        case 0x21baa8u: goto label_21baa8;
        case 0x21baacu: goto label_21baac;
        case 0x21bab0u: goto label_21bab0;
        case 0x21bab4u: goto label_21bab4;
        case 0x21bab8u: goto label_21bab8;
        case 0x21babcu: goto label_21babc;
        case 0x21bac0u: goto label_21bac0;
        case 0x21bac4u: goto label_21bac4;
        case 0x21bac8u: goto label_21bac8;
        case 0x21baccu: goto label_21bacc;
        case 0x21bad0u: goto label_21bad0;
        case 0x21bad4u: goto label_21bad4;
        case 0x21bad8u: goto label_21bad8;
        case 0x21badcu: goto label_21badc;
        case 0x21bae0u: goto label_21bae0;
        case 0x21bae4u: goto label_21bae4;
        case 0x21bae8u: goto label_21bae8;
        case 0x21baecu: goto label_21baec;
        case 0x21baf0u: goto label_21baf0;
        case 0x21baf4u: goto label_21baf4;
        case 0x21baf8u: goto label_21baf8;
        case 0x21bafcu: goto label_21bafc;
        case 0x21bb00u: goto label_21bb00;
        case 0x21bb04u: goto label_21bb04;
        case 0x21bb08u: goto label_21bb08;
        case 0x21bb0cu: goto label_21bb0c;
        case 0x21bb10u: goto label_21bb10;
        case 0x21bb14u: goto label_21bb14;
        case 0x21bb18u: goto label_21bb18;
        case 0x21bb1cu: goto label_21bb1c;
        case 0x21bb20u: goto label_21bb20;
        case 0x21bb24u: goto label_21bb24;
        case 0x21bb28u: goto label_21bb28;
        case 0x21bb2cu: goto label_21bb2c;
        case 0x21bb30u: goto label_21bb30;
        case 0x21bb34u: goto label_21bb34;
        case 0x21bb38u: goto label_21bb38;
        case 0x21bb3cu: goto label_21bb3c;
        case 0x21bb40u: goto label_21bb40;
        case 0x21bb44u: goto label_21bb44;
        case 0x21bb48u: goto label_21bb48;
        case 0x21bb4cu: goto label_21bb4c;
        case 0x21bb50u: goto label_21bb50;
        case 0x21bb54u: goto label_21bb54;
        case 0x21bb58u: goto label_21bb58;
        case 0x21bb5cu: goto label_21bb5c;
        case 0x21bb60u: goto label_21bb60;
        case 0x21bb64u: goto label_21bb64;
        case 0x21bb68u: goto label_21bb68;
        case 0x21bb6cu: goto label_21bb6c;
        case 0x21bb70u: goto label_21bb70;
        case 0x21bb74u: goto label_21bb74;
        case 0x21bb78u: goto label_21bb78;
        case 0x21bb7cu: goto label_21bb7c;
        case 0x21bb80u: goto label_21bb80;
        case 0x21bb84u: goto label_21bb84;
        case 0x21bb88u: goto label_21bb88;
        case 0x21bb8cu: goto label_21bb8c;
        case 0x21bb90u: goto label_21bb90;
        case 0x21bb94u: goto label_21bb94;
        case 0x21bb98u: goto label_21bb98;
        case 0x21bb9cu: goto label_21bb9c;
        case 0x21bba0u: goto label_21bba0;
        case 0x21bba4u: goto label_21bba4;
        case 0x21bba8u: goto label_21bba8;
        case 0x21bbacu: goto label_21bbac;
        case 0x21bbb0u: goto label_21bbb0;
        case 0x21bbb4u: goto label_21bbb4;
        case 0x21bbb8u: goto label_21bbb8;
        case 0x21bbbcu: goto label_21bbbc;
        case 0x21bbc0u: goto label_21bbc0;
        case 0x21bbc4u: goto label_21bbc4;
        case 0x21bbc8u: goto label_21bbc8;
        case 0x21bbccu: goto label_21bbcc;
        case 0x21bbd0u: goto label_21bbd0;
        case 0x21bbd4u: goto label_21bbd4;
        case 0x21bbd8u: goto label_21bbd8;
        case 0x21bbdcu: goto label_21bbdc;
        case 0x21bbe0u: goto label_21bbe0;
        case 0x21bbe4u: goto label_21bbe4;
        case 0x21bbe8u: goto label_21bbe8;
        case 0x21bbecu: goto label_21bbec;
        case 0x21bbf0u: goto label_21bbf0;
        case 0x21bbf4u: goto label_21bbf4;
        case 0x21bbf8u: goto label_21bbf8;
        case 0x21bbfcu: goto label_21bbfc;
        case 0x21bc00u: goto label_21bc00;
        case 0x21bc04u: goto label_21bc04;
        case 0x21bc08u: goto label_21bc08;
        case 0x21bc0cu: goto label_21bc0c;
        case 0x21bc10u: goto label_21bc10;
        case 0x21bc14u: goto label_21bc14;
        case 0x21bc18u: goto label_21bc18;
        case 0x21bc1cu: goto label_21bc1c;
        case 0x21bc20u: goto label_21bc20;
        case 0x21bc24u: goto label_21bc24;
        case 0x21bc28u: goto label_21bc28;
        case 0x21bc2cu: goto label_21bc2c;
        case 0x21bc30u: goto label_21bc30;
        case 0x21bc34u: goto label_21bc34;
        case 0x21bc38u: goto label_21bc38;
        case 0x21bc3cu: goto label_21bc3c;
        case 0x21bc40u: goto label_21bc40;
        case 0x21bc44u: goto label_21bc44;
        case 0x21bc48u: goto label_21bc48;
        case 0x21bc4cu: goto label_21bc4c;
        case 0x21bc50u: goto label_21bc50;
        case 0x21bc54u: goto label_21bc54;
        case 0x21bc58u: goto label_21bc58;
        case 0x21bc5cu: goto label_21bc5c;
        case 0x21bc60u: goto label_21bc60;
        case 0x21bc64u: goto label_21bc64;
        case 0x21bc68u: goto label_21bc68;
        case 0x21bc6cu: goto label_21bc6c;
        case 0x21bc70u: goto label_21bc70;
        case 0x21bc74u: goto label_21bc74;
        case 0x21bc78u: goto label_21bc78;
        case 0x21bc7cu: goto label_21bc7c;
        case 0x21bc80u: goto label_21bc80;
        case 0x21bc84u: goto label_21bc84;
        case 0x21bc88u: goto label_21bc88;
        case 0x21bc8cu: goto label_21bc8c;
        case 0x21bc90u: goto label_21bc90;
        case 0x21bc94u: goto label_21bc94;
        case 0x21bc98u: goto label_21bc98;
        case 0x21bc9cu: goto label_21bc9c;
        case 0x21bca0u: goto label_21bca0;
        case 0x21bca4u: goto label_21bca4;
        case 0x21bca8u: goto label_21bca8;
        case 0x21bcacu: goto label_21bcac;
        case 0x21bcb0u: goto label_21bcb0;
        case 0x21bcb4u: goto label_21bcb4;
        case 0x21bcb8u: goto label_21bcb8;
        case 0x21bcbcu: goto label_21bcbc;
        case 0x21bcc0u: goto label_21bcc0;
        case 0x21bcc4u: goto label_21bcc4;
        case 0x21bcc8u: goto label_21bcc8;
        case 0x21bcccu: goto label_21bccc;
        case 0x21bcd0u: goto label_21bcd0;
        case 0x21bcd4u: goto label_21bcd4;
        case 0x21bcd8u: goto label_21bcd8;
        case 0x21bcdcu: goto label_21bcdc;
        case 0x21bce0u: goto label_21bce0;
        case 0x21bce4u: goto label_21bce4;
        case 0x21bce8u: goto label_21bce8;
        case 0x21bcecu: goto label_21bcec;
        case 0x21bcf0u: goto label_21bcf0;
        case 0x21bcf4u: goto label_21bcf4;
        case 0x21bcf8u: goto label_21bcf8;
        case 0x21bcfcu: goto label_21bcfc;
        case 0x21bd00u: goto label_21bd00;
        case 0x21bd04u: goto label_21bd04;
        case 0x21bd08u: goto label_21bd08;
        case 0x21bd0cu: goto label_21bd0c;
        case 0x21bd10u: goto label_21bd10;
        case 0x21bd14u: goto label_21bd14;
        case 0x21bd18u: goto label_21bd18;
        case 0x21bd1cu: goto label_21bd1c;
        case 0x21bd20u: goto label_21bd20;
        case 0x21bd24u: goto label_21bd24;
        case 0x21bd28u: goto label_21bd28;
        case 0x21bd2cu: goto label_21bd2c;
        case 0x21bd30u: goto label_21bd30;
        case 0x21bd34u: goto label_21bd34;
        case 0x21bd38u: goto label_21bd38;
        case 0x21bd3cu: goto label_21bd3c;
        case 0x21bd40u: goto label_21bd40;
        case 0x21bd44u: goto label_21bd44;
        case 0x21bd48u: goto label_21bd48;
        case 0x21bd4cu: goto label_21bd4c;
        case 0x21bd50u: goto label_21bd50;
        case 0x21bd54u: goto label_21bd54;
        case 0x21bd58u: goto label_21bd58;
        case 0x21bd5cu: goto label_21bd5c;
        case 0x21bd60u: goto label_21bd60;
        case 0x21bd64u: goto label_21bd64;
        case 0x21bd68u: goto label_21bd68;
        case 0x21bd6cu: goto label_21bd6c;
        case 0x21bd70u: goto label_21bd70;
        case 0x21bd74u: goto label_21bd74;
        case 0x21bd78u: goto label_21bd78;
        case 0x21bd7cu: goto label_21bd7c;
        case 0x21bd80u: goto label_21bd80;
        case 0x21bd84u: goto label_21bd84;
        case 0x21bd88u: goto label_21bd88;
        case 0x21bd8cu: goto label_21bd8c;
        case 0x21bd90u: goto label_21bd90;
        case 0x21bd94u: goto label_21bd94;
        case 0x21bd98u: goto label_21bd98;
        case 0x21bd9cu: goto label_21bd9c;
        case 0x21bda0u: goto label_21bda0;
        case 0x21bda4u: goto label_21bda4;
        case 0x21bda8u: goto label_21bda8;
        case 0x21bdacu: goto label_21bdac;
        case 0x21bdb0u: goto label_21bdb0;
        case 0x21bdb4u: goto label_21bdb4;
        case 0x21bdb8u: goto label_21bdb8;
        case 0x21bdbcu: goto label_21bdbc;
        case 0x21bdc0u: goto label_21bdc0;
        case 0x21bdc4u: goto label_21bdc4;
        case 0x21bdc8u: goto label_21bdc8;
        case 0x21bdccu: goto label_21bdcc;
        case 0x21bdd0u: goto label_21bdd0;
        case 0x21bdd4u: goto label_21bdd4;
        case 0x21bdd8u: goto label_21bdd8;
        case 0x21bddcu: goto label_21bddc;
        case 0x21bde0u: goto label_21bde0;
        case 0x21bde4u: goto label_21bde4;
        case 0x21bde8u: goto label_21bde8;
        case 0x21bdecu: goto label_21bdec;
        case 0x21bdf0u: goto label_21bdf0;
        case 0x21bdf4u: goto label_21bdf4;
        case 0x21bdf8u: goto label_21bdf8;
        case 0x21bdfcu: goto label_21bdfc;
        case 0x21be00u: goto label_21be00;
        case 0x21be04u: goto label_21be04;
        case 0x21be08u: goto label_21be08;
        case 0x21be0cu: goto label_21be0c;
        case 0x21be10u: goto label_21be10;
        case 0x21be14u: goto label_21be14;
        case 0x21be18u: goto label_21be18;
        case 0x21be1cu: goto label_21be1c;
        case 0x21be20u: goto label_21be20;
        case 0x21be24u: goto label_21be24;
        case 0x21be28u: goto label_21be28;
        case 0x21be2cu: goto label_21be2c;
        case 0x21be30u: goto label_21be30;
        case 0x21be34u: goto label_21be34;
        case 0x21be38u: goto label_21be38;
        case 0x21be3cu: goto label_21be3c;
        case 0x21be40u: goto label_21be40;
        case 0x21be44u: goto label_21be44;
        case 0x21be48u: goto label_21be48;
        case 0x21be4cu: goto label_21be4c;
        case 0x21be50u: goto label_21be50;
        case 0x21be54u: goto label_21be54;
        case 0x21be58u: goto label_21be58;
        case 0x21be5cu: goto label_21be5c;
        case 0x21be60u: goto label_21be60;
        case 0x21be64u: goto label_21be64;
        case 0x21be68u: goto label_21be68;
        case 0x21be6cu: goto label_21be6c;
        case 0x21be70u: goto label_21be70;
        case 0x21be74u: goto label_21be74;
        case 0x21be78u: goto label_21be78;
        case 0x21be7cu: goto label_21be7c;
        case 0x21be80u: goto label_21be80;
        case 0x21be84u: goto label_21be84;
        case 0x21be88u: goto label_21be88;
        case 0x21be8cu: goto label_21be8c;
        case 0x21be90u: goto label_21be90;
        case 0x21be94u: goto label_21be94;
        case 0x21be98u: goto label_21be98;
        case 0x21be9cu: goto label_21be9c;
        case 0x21bea0u: goto label_21bea0;
        case 0x21bea4u: goto label_21bea4;
        case 0x21bea8u: goto label_21bea8;
        case 0x21beacu: goto label_21beac;
        case 0x21beb0u: goto label_21beb0;
        case 0x21beb4u: goto label_21beb4;
        case 0x21beb8u: goto label_21beb8;
        case 0x21bebcu: goto label_21bebc;
        case 0x21bec0u: goto label_21bec0;
        case 0x21bec4u: goto label_21bec4;
        case 0x21bec8u: goto label_21bec8;
        case 0x21beccu: goto label_21becc;
        case 0x21bed0u: goto label_21bed0;
        case 0x21bed4u: goto label_21bed4;
        case 0x21bed8u: goto label_21bed8;
        case 0x21bedcu: goto label_21bedc;
        case 0x21bee0u: goto label_21bee0;
        case 0x21bee4u: goto label_21bee4;
        case 0x21bee8u: goto label_21bee8;
        case 0x21beecu: goto label_21beec;
        case 0x21bef0u: goto label_21bef0;
        case 0x21bef4u: goto label_21bef4;
        case 0x21bef8u: goto label_21bef8;
        case 0x21befcu: goto label_21befc;
        case 0x21bf00u: goto label_21bf00;
        case 0x21bf04u: goto label_21bf04;
        case 0x21bf08u: goto label_21bf08;
        case 0x21bf0cu: goto label_21bf0c;
        case 0x21bf10u: goto label_21bf10;
        case 0x21bf14u: goto label_21bf14;
        case 0x21bf18u: goto label_21bf18;
        case 0x21bf1cu: goto label_21bf1c;
        case 0x21bf20u: goto label_21bf20;
        case 0x21bf24u: goto label_21bf24;
        case 0x21bf28u: goto label_21bf28;
        case 0x21bf2cu: goto label_21bf2c;
        case 0x21bf30u: goto label_21bf30;
        case 0x21bf34u: goto label_21bf34;
        case 0x21bf38u: goto label_21bf38;
        case 0x21bf3cu: goto label_21bf3c;
        case 0x21bf40u: goto label_21bf40;
        case 0x21bf44u: goto label_21bf44;
        case 0x21bf48u: goto label_21bf48;
        case 0x21bf4cu: goto label_21bf4c;
        case 0x21bf50u: goto label_21bf50;
        case 0x21bf54u: goto label_21bf54;
        case 0x21bf58u: goto label_21bf58;
        case 0x21bf5cu: goto label_21bf5c;
        case 0x21bf60u: goto label_21bf60;
        case 0x21bf64u: goto label_21bf64;
        case 0x21bf68u: goto label_21bf68;
        case 0x21bf6cu: goto label_21bf6c;
        case 0x21bf70u: goto label_21bf70;
        case 0x21bf74u: goto label_21bf74;
        case 0x21bf78u: goto label_21bf78;
        case 0x21bf7cu: goto label_21bf7c;
        case 0x21bf80u: goto label_21bf80;
        case 0x21bf84u: goto label_21bf84;
        case 0x21bf88u: goto label_21bf88;
        case 0x21bf8cu: goto label_21bf8c;
        case 0x21bf90u: goto label_21bf90;
        case 0x21bf94u: goto label_21bf94;
        case 0x21bf98u: goto label_21bf98;
        case 0x21bf9cu: goto label_21bf9c;
        case 0x21bfa0u: goto label_21bfa0;
        case 0x21bfa4u: goto label_21bfa4;
        case 0x21bfa8u: goto label_21bfa8;
        case 0x21bfacu: goto label_21bfac;
        case 0x21bfb0u: goto label_21bfb0;
        case 0x21bfb4u: goto label_21bfb4;
        case 0x21bfb8u: goto label_21bfb8;
        case 0x21bfbcu: goto label_21bfbc;
        case 0x21bfc0u: goto label_21bfc0;
        case 0x21bfc4u: goto label_21bfc4;
        case 0x21bfc8u: goto label_21bfc8;
        case 0x21bfccu: goto label_21bfcc;
        case 0x21bfd0u: goto label_21bfd0;
        case 0x21bfd4u: goto label_21bfd4;
        case 0x21bfd8u: goto label_21bfd8;
        case 0x21bfdcu: goto label_21bfdc;
        case 0x21bfe0u: goto label_21bfe0;
        case 0x21bfe4u: goto label_21bfe4;
        case 0x21bfe8u: goto label_21bfe8;
        case 0x21bfecu: goto label_21bfec;
        case 0x21bff0u: goto label_21bff0;
        case 0x21bff4u: goto label_21bff4;
        case 0x21bff8u: goto label_21bff8;
        case 0x21bffcu: goto label_21bffc;
        case 0x21c000u: goto label_21c000;
        case 0x21c004u: goto label_21c004;
        case 0x21c008u: goto label_21c008;
        case 0x21c00cu: goto label_21c00c;
        case 0x21c010u: goto label_21c010;
        case 0x21c014u: goto label_21c014;
        case 0x21c018u: goto label_21c018;
        case 0x21c01cu: goto label_21c01c;
        case 0x21c020u: goto label_21c020;
        case 0x21c024u: goto label_21c024;
        case 0x21c028u: goto label_21c028;
        case 0x21c02cu: goto label_21c02c;
        case 0x21c030u: goto label_21c030;
        case 0x21c034u: goto label_21c034;
        case 0x21c038u: goto label_21c038;
        case 0x21c03cu: goto label_21c03c;
        case 0x21c040u: goto label_21c040;
        case 0x21c044u: goto label_21c044;
        case 0x21c048u: goto label_21c048;
        case 0x21c04cu: goto label_21c04c;
        case 0x21c050u: goto label_21c050;
        case 0x21c054u: goto label_21c054;
        case 0x21c058u: goto label_21c058;
        case 0x21c05cu: goto label_21c05c;
        case 0x21c060u: goto label_21c060;
        case 0x21c064u: goto label_21c064;
        case 0x21c068u: goto label_21c068;
        case 0x21c06cu: goto label_21c06c;
        case 0x21c070u: goto label_21c070;
        case 0x21c074u: goto label_21c074;
        case 0x21c078u: goto label_21c078;
        case 0x21c07cu: goto label_21c07c;
        case 0x21c080u: goto label_21c080;
        case 0x21c084u: goto label_21c084;
        case 0x21c088u: goto label_21c088;
        case 0x21c08cu: goto label_21c08c;
        case 0x21c090u: goto label_21c090;
        case 0x21c094u: goto label_21c094;
        case 0x21c098u: goto label_21c098;
        case 0x21c09cu: goto label_21c09c;
        case 0x21c0a0u: goto label_21c0a0;
        case 0x21c0a4u: goto label_21c0a4;
        case 0x21c0a8u: goto label_21c0a8;
        case 0x21c0acu: goto label_21c0ac;
        case 0x21c0b0u: goto label_21c0b0;
        case 0x21c0b4u: goto label_21c0b4;
        case 0x21c0b8u: goto label_21c0b8;
        case 0x21c0bcu: goto label_21c0bc;
        case 0x21c0c0u: goto label_21c0c0;
        case 0x21c0c4u: goto label_21c0c4;
        case 0x21c0c8u: goto label_21c0c8;
        case 0x21c0ccu: goto label_21c0cc;
        case 0x21c0d0u: goto label_21c0d0;
        case 0x21c0d4u: goto label_21c0d4;
        case 0x21c0d8u: goto label_21c0d8;
        case 0x21c0dcu: goto label_21c0dc;
        case 0x21c0e0u: goto label_21c0e0;
        case 0x21c0e4u: goto label_21c0e4;
        case 0x21c0e8u: goto label_21c0e8;
        case 0x21c0ecu: goto label_21c0ec;
        case 0x21c0f0u: goto label_21c0f0;
        case 0x21c0f4u: goto label_21c0f4;
        case 0x21c0f8u: goto label_21c0f8;
        case 0x21c0fcu: goto label_21c0fc;
        case 0x21c100u: goto label_21c100;
        case 0x21c104u: goto label_21c104;
        case 0x21c108u: goto label_21c108;
        case 0x21c10cu: goto label_21c10c;
        case 0x21c110u: goto label_21c110;
        case 0x21c114u: goto label_21c114;
        case 0x21c118u: goto label_21c118;
        case 0x21c11cu: goto label_21c11c;
        case 0x21c120u: goto label_21c120;
        case 0x21c124u: goto label_21c124;
        case 0x21c128u: goto label_21c128;
        case 0x21c12cu: goto label_21c12c;
        case 0x21c130u: goto label_21c130;
        case 0x21c134u: goto label_21c134;
        case 0x21c138u: goto label_21c138;
        case 0x21c13cu: goto label_21c13c;
        case 0x21c140u: goto label_21c140;
        case 0x21c144u: goto label_21c144;
        case 0x21c148u: goto label_21c148;
        case 0x21c14cu: goto label_21c14c;
        case 0x21c150u: goto label_21c150;
        case 0x21c154u: goto label_21c154;
        case 0x21c158u: goto label_21c158;
        case 0x21c15cu: goto label_21c15c;
        case 0x21c160u: goto label_21c160;
        case 0x21c164u: goto label_21c164;
        case 0x21c168u: goto label_21c168;
        case 0x21c16cu: goto label_21c16c;
        case 0x21c170u: goto label_21c170;
        case 0x21c174u: goto label_21c174;
        case 0x21c178u: goto label_21c178;
        case 0x21c17cu: goto label_21c17c;
        case 0x21c180u: goto label_21c180;
        case 0x21c184u: goto label_21c184;
        case 0x21c188u: goto label_21c188;
        case 0x21c18cu: goto label_21c18c;
        case 0x21c190u: goto label_21c190;
        case 0x21c194u: goto label_21c194;
        case 0x21c198u: goto label_21c198;
        case 0x21c19cu: goto label_21c19c;
        case 0x21c1a0u: goto label_21c1a0;
        case 0x21c1a4u: goto label_21c1a4;
        case 0x21c1a8u: goto label_21c1a8;
        case 0x21c1acu: goto label_21c1ac;
        case 0x21c1b0u: goto label_21c1b0;
        case 0x21c1b4u: goto label_21c1b4;
        case 0x21c1b8u: goto label_21c1b8;
        case 0x21c1bcu: goto label_21c1bc;
        case 0x21c1c0u: goto label_21c1c0;
        case 0x21c1c4u: goto label_21c1c4;
        case 0x21c1c8u: goto label_21c1c8;
        case 0x21c1ccu: goto label_21c1cc;
        case 0x21c1d0u: goto label_21c1d0;
        case 0x21c1d4u: goto label_21c1d4;
        case 0x21c1d8u: goto label_21c1d8;
        case 0x21c1dcu: goto label_21c1dc;
        case 0x21c1e0u: goto label_21c1e0;
        case 0x21c1e4u: goto label_21c1e4;
        case 0x21c1e8u: goto label_21c1e8;
        case 0x21c1ecu: goto label_21c1ec;
        case 0x21c1f0u: goto label_21c1f0;
        case 0x21c1f4u: goto label_21c1f4;
        case 0x21c1f8u: goto label_21c1f8;
        case 0x21c1fcu: goto label_21c1fc;
        case 0x21c200u: goto label_21c200;
        case 0x21c204u: goto label_21c204;
        case 0x21c208u: goto label_21c208;
        case 0x21c20cu: goto label_21c20c;
        case 0x21c210u: goto label_21c210;
        case 0x21c214u: goto label_21c214;
        case 0x21c218u: goto label_21c218;
        case 0x21c21cu: goto label_21c21c;
        case 0x21c220u: goto label_21c220;
        case 0x21c224u: goto label_21c224;
        case 0x21c228u: goto label_21c228;
        case 0x21c22cu: goto label_21c22c;
        case 0x21c230u: goto label_21c230;
        case 0x21c234u: goto label_21c234;
        case 0x21c238u: goto label_21c238;
        case 0x21c23cu: goto label_21c23c;
        case 0x21c240u: goto label_21c240;
        case 0x21c244u: goto label_21c244;
        case 0x21c248u: goto label_21c248;
        case 0x21c24cu: goto label_21c24c;
        case 0x21c250u: goto label_21c250;
        case 0x21c254u: goto label_21c254;
        case 0x21c258u: goto label_21c258;
        case 0x21c25cu: goto label_21c25c;
        case 0x21c260u: goto label_21c260;
        case 0x21c264u: goto label_21c264;
        case 0x21c268u: goto label_21c268;
        case 0x21c26cu: goto label_21c26c;
        case 0x21c270u: goto label_21c270;
        case 0x21c274u: goto label_21c274;
        case 0x21c278u: goto label_21c278;
        case 0x21c27cu: goto label_21c27c;
        case 0x21c280u: goto label_21c280;
        case 0x21c284u: goto label_21c284;
        case 0x21c288u: goto label_21c288;
        case 0x21c28cu: goto label_21c28c;
        case 0x21c290u: goto label_21c290;
        case 0x21c294u: goto label_21c294;
        case 0x21c298u: goto label_21c298;
        case 0x21c29cu: goto label_21c29c;
        case 0x21c2a0u: goto label_21c2a0;
        case 0x21c2a4u: goto label_21c2a4;
        case 0x21c2a8u: goto label_21c2a8;
        case 0x21c2acu: goto label_21c2ac;
        case 0x21c2b0u: goto label_21c2b0;
        case 0x21c2b4u: goto label_21c2b4;
        case 0x21c2b8u: goto label_21c2b8;
        case 0x21c2bcu: goto label_21c2bc;
        case 0x21c2c0u: goto label_21c2c0;
        case 0x21c2c4u: goto label_21c2c4;
        case 0x21c2c8u: goto label_21c2c8;
        case 0x21c2ccu: goto label_21c2cc;
        case 0x21c2d0u: goto label_21c2d0;
        case 0x21c2d4u: goto label_21c2d4;
        case 0x21c2d8u: goto label_21c2d8;
        case 0x21c2dcu: goto label_21c2dc;
        case 0x21c2e0u: goto label_21c2e0;
        case 0x21c2e4u: goto label_21c2e4;
        case 0x21c2e8u: goto label_21c2e8;
        case 0x21c2ecu: goto label_21c2ec;
        case 0x21c2f0u: goto label_21c2f0;
        case 0x21c2f4u: goto label_21c2f4;
        case 0x21c2f8u: goto label_21c2f8;
        case 0x21c2fcu: goto label_21c2fc;
        case 0x21c300u: goto label_21c300;
        case 0x21c304u: goto label_21c304;
        case 0x21c308u: goto label_21c308;
        case 0x21c30cu: goto label_21c30c;
        case 0x21c310u: goto label_21c310;
        case 0x21c314u: goto label_21c314;
        case 0x21c318u: goto label_21c318;
        case 0x21c31cu: goto label_21c31c;
        case 0x21c320u: goto label_21c320;
        case 0x21c324u: goto label_21c324;
        case 0x21c328u: goto label_21c328;
        case 0x21c32cu: goto label_21c32c;
        case 0x21c330u: goto label_21c330;
        case 0x21c334u: goto label_21c334;
        case 0x21c338u: goto label_21c338;
        case 0x21c33cu: goto label_21c33c;
        case 0x21c340u: goto label_21c340;
        case 0x21c344u: goto label_21c344;
        case 0x21c348u: goto label_21c348;
        case 0x21c34cu: goto label_21c34c;
        case 0x21c350u: goto label_21c350;
        case 0x21c354u: goto label_21c354;
        case 0x21c358u: goto label_21c358;
        case 0x21c35cu: goto label_21c35c;
        case 0x21c360u: goto label_21c360;
        case 0x21c364u: goto label_21c364;
        case 0x21c368u: goto label_21c368;
        case 0x21c36cu: goto label_21c36c;
        case 0x21c370u: goto label_21c370;
        case 0x21c374u: goto label_21c374;
        case 0x21c378u: goto label_21c378;
        case 0x21c37cu: goto label_21c37c;
        case 0x21c380u: goto label_21c380;
        case 0x21c384u: goto label_21c384;
        case 0x21c388u: goto label_21c388;
        case 0x21c38cu: goto label_21c38c;
        case 0x21c390u: goto label_21c390;
        case 0x21c394u: goto label_21c394;
        case 0x21c398u: goto label_21c398;
        case 0x21c39cu: goto label_21c39c;
        case 0x21c3a0u: goto label_21c3a0;
        case 0x21c3a4u: goto label_21c3a4;
        case 0x21c3a8u: goto label_21c3a8;
        case 0x21c3acu: goto label_21c3ac;
        case 0x21c3b0u: goto label_21c3b0;
        case 0x21c3b4u: goto label_21c3b4;
        case 0x21c3b8u: goto label_21c3b8;
        case 0x21c3bcu: goto label_21c3bc;
        case 0x21c3c0u: goto label_21c3c0;
        case 0x21c3c4u: goto label_21c3c4;
        case 0x21c3c8u: goto label_21c3c8;
        case 0x21c3ccu: goto label_21c3cc;
        case 0x21c3d0u: goto label_21c3d0;
        case 0x21c3d4u: goto label_21c3d4;
        case 0x21c3d8u: goto label_21c3d8;
        case 0x21c3dcu: goto label_21c3dc;
        case 0x21c3e0u: goto label_21c3e0;
        case 0x21c3e4u: goto label_21c3e4;
        case 0x21c3e8u: goto label_21c3e8;
        case 0x21c3ecu: goto label_21c3ec;
        case 0x21c3f0u: goto label_21c3f0;
        case 0x21c3f4u: goto label_21c3f4;
        case 0x21c3f8u: goto label_21c3f8;
        case 0x21c3fcu: goto label_21c3fc;
        case 0x21c400u: goto label_21c400;
        case 0x21c404u: goto label_21c404;
        case 0x21c408u: goto label_21c408;
        case 0x21c40cu: goto label_21c40c;
        case 0x21c410u: goto label_21c410;
        case 0x21c414u: goto label_21c414;
        case 0x21c418u: goto label_21c418;
        case 0x21c41cu: goto label_21c41c;
        case 0x21c420u: goto label_21c420;
        case 0x21c424u: goto label_21c424;
        case 0x21c428u: goto label_21c428;
        case 0x21c42cu: goto label_21c42c;
        case 0x21c430u: goto label_21c430;
        case 0x21c434u: goto label_21c434;
        case 0x21c438u: goto label_21c438;
        case 0x21c43cu: goto label_21c43c;
        case 0x21c440u: goto label_21c440;
        case 0x21c444u: goto label_21c444;
        case 0x21c448u: goto label_21c448;
        case 0x21c44cu: goto label_21c44c;
        case 0x21c450u: goto label_21c450;
        case 0x21c454u: goto label_21c454;
        case 0x21c458u: goto label_21c458;
        case 0x21c45cu: goto label_21c45c;
        case 0x21c460u: goto label_21c460;
        case 0x21c464u: goto label_21c464;
        case 0x21c468u: goto label_21c468;
        case 0x21c46cu: goto label_21c46c;
        case 0x21c470u: goto label_21c470;
        case 0x21c474u: goto label_21c474;
        case 0x21c478u: goto label_21c478;
        case 0x21c47cu: goto label_21c47c;
        case 0x21c480u: goto label_21c480;
        case 0x21c484u: goto label_21c484;
        case 0x21c488u: goto label_21c488;
        case 0x21c48cu: goto label_21c48c;
        case 0x21c490u: goto label_21c490;
        case 0x21c494u: goto label_21c494;
        case 0x21c498u: goto label_21c498;
        case 0x21c49cu: goto label_21c49c;
        case 0x21c4a0u: goto label_21c4a0;
        case 0x21c4a4u: goto label_21c4a4;
        case 0x21c4a8u: goto label_21c4a8;
        case 0x21c4acu: goto label_21c4ac;
        case 0x21c4b0u: goto label_21c4b0;
        case 0x21c4b4u: goto label_21c4b4;
        case 0x21c4b8u: goto label_21c4b8;
        case 0x21c4bcu: goto label_21c4bc;
        case 0x21c4c0u: goto label_21c4c0;
        case 0x21c4c4u: goto label_21c4c4;
        case 0x21c4c8u: goto label_21c4c8;
        case 0x21c4ccu: goto label_21c4cc;
        case 0x21c4d0u: goto label_21c4d0;
        case 0x21c4d4u: goto label_21c4d4;
        case 0x21c4d8u: goto label_21c4d8;
        case 0x21c4dcu: goto label_21c4dc;
        case 0x21c4e0u: goto label_21c4e0;
        case 0x21c4e4u: goto label_21c4e4;
        case 0x21c4e8u: goto label_21c4e8;
        case 0x21c4ecu: goto label_21c4ec;
        case 0x21c4f0u: goto label_21c4f0;
        case 0x21c4f4u: goto label_21c4f4;
        case 0x21c4f8u: goto label_21c4f8;
        case 0x21c4fcu: goto label_21c4fc;
        case 0x21c500u: goto label_21c500;
        case 0x21c504u: goto label_21c504;
        case 0x21c508u: goto label_21c508;
        case 0x21c50cu: goto label_21c50c;
        case 0x21c510u: goto label_21c510;
        case 0x21c514u: goto label_21c514;
        case 0x21c518u: goto label_21c518;
        case 0x21c51cu: goto label_21c51c;
        case 0x21c520u: goto label_21c520;
        case 0x21c524u: goto label_21c524;
        case 0x21c528u: goto label_21c528;
        case 0x21c52cu: goto label_21c52c;
        case 0x21c530u: goto label_21c530;
        case 0x21c534u: goto label_21c534;
        case 0x21c538u: goto label_21c538;
        case 0x21c53cu: goto label_21c53c;
        case 0x21c540u: goto label_21c540;
        case 0x21c544u: goto label_21c544;
        case 0x21c548u: goto label_21c548;
        case 0x21c54cu: goto label_21c54c;
        case 0x21c550u: goto label_21c550;
        case 0x21c554u: goto label_21c554;
        case 0x21c558u: goto label_21c558;
        case 0x21c55cu: goto label_21c55c;
        case 0x21c560u: goto label_21c560;
        case 0x21c564u: goto label_21c564;
        case 0x21c568u: goto label_21c568;
        case 0x21c56cu: goto label_21c56c;
        case 0x21c570u: goto label_21c570;
        case 0x21c574u: goto label_21c574;
        case 0x21c578u: goto label_21c578;
        case 0x21c57cu: goto label_21c57c;
        case 0x21c580u: goto label_21c580;
        case 0x21c584u: goto label_21c584;
        case 0x21c588u: goto label_21c588;
        case 0x21c58cu: goto label_21c58c;
        case 0x21c590u: goto label_21c590;
        case 0x21c594u: goto label_21c594;
        case 0x21c598u: goto label_21c598;
        case 0x21c59cu: goto label_21c59c;
        case 0x21c5a0u: goto label_21c5a0;
        case 0x21c5a4u: goto label_21c5a4;
        case 0x21c5a8u: goto label_21c5a8;
        case 0x21c5acu: goto label_21c5ac;
        case 0x21c5b0u: goto label_21c5b0;
        case 0x21c5b4u: goto label_21c5b4;
        case 0x21c5b8u: goto label_21c5b8;
        case 0x21c5bcu: goto label_21c5bc;
        case 0x21c5c0u: goto label_21c5c0;
        case 0x21c5c4u: goto label_21c5c4;
        case 0x21c5c8u: goto label_21c5c8;
        case 0x21c5ccu: goto label_21c5cc;
        case 0x21c5d0u: goto label_21c5d0;
        case 0x21c5d4u: goto label_21c5d4;
        case 0x21c5d8u: goto label_21c5d8;
        case 0x21c5dcu: goto label_21c5dc;
        case 0x21c5e0u: goto label_21c5e0;
        case 0x21c5e4u: goto label_21c5e4;
        case 0x21c5e8u: goto label_21c5e8;
        case 0x21c5ecu: goto label_21c5ec;
        case 0x21c5f0u: goto label_21c5f0;
        case 0x21c5f4u: goto label_21c5f4;
        case 0x21c5f8u: goto label_21c5f8;
        case 0x21c5fcu: goto label_21c5fc;
        case 0x21c600u: goto label_21c600;
        case 0x21c604u: goto label_21c604;
        case 0x21c608u: goto label_21c608;
        case 0x21c60cu: goto label_21c60c;
        case 0x21c610u: goto label_21c610;
        case 0x21c614u: goto label_21c614;
        case 0x21c618u: goto label_21c618;
        case 0x21c61cu: goto label_21c61c;
        case 0x21c620u: goto label_21c620;
        case 0x21c624u: goto label_21c624;
        case 0x21c628u: goto label_21c628;
        case 0x21c62cu: goto label_21c62c;
        case 0x21c630u: goto label_21c630;
        case 0x21c634u: goto label_21c634;
        case 0x21c638u: goto label_21c638;
        case 0x21c63cu: goto label_21c63c;
        case 0x21c640u: goto label_21c640;
        case 0x21c644u: goto label_21c644;
        case 0x21c648u: goto label_21c648;
        case 0x21c64cu: goto label_21c64c;
        case 0x21c650u: goto label_21c650;
        case 0x21c654u: goto label_21c654;
        case 0x21c658u: goto label_21c658;
        case 0x21c65cu: goto label_21c65c;
        case 0x21c660u: goto label_21c660;
        case 0x21c664u: goto label_21c664;
        case 0x21c668u: goto label_21c668;
        case 0x21c66cu: goto label_21c66c;
        case 0x21c670u: goto label_21c670;
        case 0x21c674u: goto label_21c674;
        case 0x21c678u: goto label_21c678;
        case 0x21c67cu: goto label_21c67c;
        case 0x21c680u: goto label_21c680;
        case 0x21c684u: goto label_21c684;
        case 0x21c688u: goto label_21c688;
        case 0x21c68cu: goto label_21c68c;
        case 0x21c690u: goto label_21c690;
        case 0x21c694u: goto label_21c694;
        case 0x21c698u: goto label_21c698;
        case 0x21c69cu: goto label_21c69c;
        case 0x21c6a0u: goto label_21c6a0;
        case 0x21c6a4u: goto label_21c6a4;
        case 0x21c6a8u: goto label_21c6a8;
        case 0x21c6acu: goto label_21c6ac;
        case 0x21c6b0u: goto label_21c6b0;
        case 0x21c6b4u: goto label_21c6b4;
        case 0x21c6b8u: goto label_21c6b8;
        case 0x21c6bcu: goto label_21c6bc;
        case 0x21c6c0u: goto label_21c6c0;
        case 0x21c6c4u: goto label_21c6c4;
        case 0x21c6c8u: goto label_21c6c8;
        case 0x21c6ccu: goto label_21c6cc;
        case 0x21c6d0u: goto label_21c6d0;
        case 0x21c6d4u: goto label_21c6d4;
        case 0x21c6d8u: goto label_21c6d8;
        case 0x21c6dcu: goto label_21c6dc;
        case 0x21c6e0u: goto label_21c6e0;
        case 0x21c6e4u: goto label_21c6e4;
        case 0x21c6e8u: goto label_21c6e8;
        case 0x21c6ecu: goto label_21c6ec;
        case 0x21c6f0u: goto label_21c6f0;
        case 0x21c6f4u: goto label_21c6f4;
        case 0x21c6f8u: goto label_21c6f8;
        case 0x21c6fcu: goto label_21c6fc;
        case 0x21c700u: goto label_21c700;
        case 0x21c704u: goto label_21c704;
        case 0x21c708u: goto label_21c708;
        case 0x21c70cu: goto label_21c70c;
        case 0x21c710u: goto label_21c710;
        case 0x21c714u: goto label_21c714;
        case 0x21c718u: goto label_21c718;
        case 0x21c71cu: goto label_21c71c;
        case 0x21c720u: goto label_21c720;
        case 0x21c724u: goto label_21c724;
        case 0x21c728u: goto label_21c728;
        case 0x21c72cu: goto label_21c72c;
        case 0x21c730u: goto label_21c730;
        case 0x21c734u: goto label_21c734;
        case 0x21c738u: goto label_21c738;
        case 0x21c73cu: goto label_21c73c;
        default: break;
    }

    ctx->pc = 0x21b3a0u;

label_21b3a0:
    // 0x21b3a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21b3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_21b3a4:
    // 0x21b3a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21b3a8:
    // 0x21b3a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21b3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_21b3ac:
    // 0x21b3ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x21b3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_21b3b0:
    // 0x21b3b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21b3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_21b3b4:
    // 0x21b3b4: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x21b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_21b3b8:
    // 0x21b3b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21b3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_21b3bc:
    // 0x21b3bc: 0x2463e740  addiu       $v1, $v1, -0x18C0
    ctx->pc = 0x21b3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960960));
label_21b3c0:
    // 0x21b3c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21b3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21b3c4:
    // 0x21b3c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21b3c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21b3c8:
    // 0x21b3c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21b3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21b3cc:
    // 0x21b3cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21b3ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21b3d0:
    // 0x21b3d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21b3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_21b3d4:
    // 0x21b3d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21b3d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21b3d8:
    // 0x21b3d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21b3dc:
    // 0x21b3dc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x21b3dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_21b3e0:
    // 0x21b3e0: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x21b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_21b3e4:
    // 0x21b3e4: 0x26650044  addiu       $a1, $s3, 0x44
    ctx->pc = 0x21b3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 68));
label_21b3e8:
    // 0x21b3e8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21b3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_21b3ec:
    // 0x21b3ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b3f0:
    // 0x21b3f0: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x21b3f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_21b3f4:
    // 0x21b3f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21b3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21b3f8:
    // 0x21b3f8: 0x2442d830  addiu       $v0, $v0, -0x27D0
    ctx->pc = 0x21b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957104));
label_21b3fc:
    // 0x21b3fc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21b3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_21b400:
    // 0x21b400: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x21b400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_21b404:
    // 0x21b404: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21b404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21b408:
    // 0x21b408: 0x2442e7b0  addiu       $v0, $v0, -0x1850
    ctx->pc = 0x21b408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961072));
label_21b40c:
    // 0x21b40c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x21b40cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_21b410:
    // 0x21b410: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21b410u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_21b414:
    // 0x21b414: 0xc087aec  jal         func_21EBB0
label_21b418:
    if (ctx->pc == 0x21B418u) {
        ctx->pc = 0x21B418u;
            // 0x21b418: 0x26640014  addiu       $a0, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->pc = 0x21B41Cu;
        goto label_21b41c;
    }
    ctx->pc = 0x21B414u;
    SET_GPR_U32(ctx, 31, 0x21B41Cu);
    ctx->pc = 0x21B418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B414u;
            // 0x21b418: 0x26640014  addiu       $a0, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21EBB0u;
    if (runtime->hasFunction(0x21EBB0u)) {
        auto targetFn = runtime->lookupFunction(0x21EBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B41Cu; }
        if (ctx->pc != 0x21B41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021EBB0_0x21ebb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B41Cu; }
        if (ctx->pc != 0x21B41Cu) { return; }
    }
    ctx->pc = 0x21B41Cu;
label_21b41c:
    // 0x21b41c: 0x26640044  addiu       $a0, $s3, 0x44
    ctx->pc = 0x21b41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 68));
label_21b420:
    // 0x21b420: 0xc087e50  jal         func_21F940
label_21b424:
    if (ctx->pc == 0x21B424u) {
        ctx->pc = 0x21B424u;
            // 0x21b424: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x21B428u;
        goto label_21b428;
    }
    ctx->pc = 0x21B420u;
    SET_GPR_U32(ctx, 31, 0x21B428u);
    ctx->pc = 0x21B424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B420u;
            // 0x21b424: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F940u;
    if (runtime->hasFunction(0x21F940u)) {
        auto targetFn = runtime->lookupFunction(0x21F940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B428u; }
        if (ctx->pc != 0x21B428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021F940_0x21f940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B428u; }
        if (ctx->pc != 0x21B428u) { return; }
    }
    ctx->pc = 0x21B428u;
label_21b428:
    // 0x21b428: 0x26620014  addiu       $v0, $s3, 0x14
    ctx->pc = 0x21b428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_21b42c:
    // 0x21b42c: 0xae620050  sw          $v0, 0x50($s3)
    ctx->pc = 0x21b42cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 2));
label_21b430:
    // 0x21b430: 0xae710058  sw          $s1, 0x58($s3)
    ctx->pc = 0x21b430u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 17));
label_21b434:
    // 0x21b434: 0xae70005c  sw          $s0, 0x5C($s3)
    ctx->pc = 0x21b434u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 16));
label_21b438:
    // 0x21b438: 0xae72000c  sw          $s2, 0xC($s3)
    ctx->pc = 0x21b438u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 18));
label_21b43c:
    // 0x21b43c: 0xa6600012  sh          $zero, 0x12($s3)
    ctx->pc = 0x21b43cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 18), (uint16_t)GPR_U32(ctx, 0));
label_21b440:
    // 0x21b440: 0xa6600010  sh          $zero, 0x10($s3)
    ctx->pc = 0x21b440u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 0));
label_21b444:
    // 0x21b444: 0xa6600018  sh          $zero, 0x18($s3)
    ctx->pc = 0x21b444u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 24), (uint16_t)GPR_U32(ctx, 0));
label_21b448:
    // 0x21b448: 0xa6600048  sh          $zero, 0x48($s3)
    ctx->pc = 0x21b448u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 72), (uint16_t)GPR_U32(ctx, 0));
label_21b44c:
    // 0x21b44c: 0x9626002a  lhu         $a2, 0x2A($s1)
    ctx->pc = 0x21b44cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
label_21b450:
    // 0x21b450: 0x8e450074  lw          $a1, 0x74($s2)
    ctx->pc = 0x21b450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_21b454:
    // 0x21b454: 0x9603002a  lhu         $v1, 0x2A($s0)
    ctx->pc = 0x21b454u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
label_21b458:
    // 0x21b458: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x21b458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_21b45c:
    // 0x21b45c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x21b45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_21b460:
    // 0x21b460: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x21b460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_21b464:
    // 0x21b464: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x21b464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21b468:
    // 0x21b468: 0x804319f0  lb          $v1, 0x19F0($v0)
    ctx->pc = 0x21b468u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 6640)));
label_21b46c:
    // 0x21b46c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x21b46cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_21b470:
    // 0x21b470: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x21b470u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21b474:
    // 0x21b474: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21b474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21b478:
    // 0x21b478: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x21b478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_21b47c:
    // 0x21b47c: 0x94451a88  lhu         $a1, 0x1A88($v0)
    ctx->pc = 0x21b47cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6792)));
label_21b480:
    // 0x21b480: 0xc087e64  jal         func_21F990
label_21b484:
    if (ctx->pc == 0x21B484u) {
        ctx->pc = 0x21B484u;
            // 0x21b484: 0x26640044  addiu       $a0, $s3, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 68));
        ctx->pc = 0x21B488u;
        goto label_21b488;
    }
    ctx->pc = 0x21B480u;
    SET_GPR_U32(ctx, 31, 0x21B488u);
    ctx->pc = 0x21B484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B480u;
            // 0x21b484: 0x26640044  addiu       $a0, $s3, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F990u;
    if (runtime->hasFunction(0x21F990u)) {
        auto targetFn = runtime->lookupFunction(0x21F990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B488u; }
        if (ctx->pc != 0x21B488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021F990_0x21f990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B488u; }
        if (ctx->pc != 0x21B488u) { return; }
    }
    ctx->pc = 0x21B488u;
label_21b488:
    // 0x21b488: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x21b488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21b48c:
    // 0x21b48c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21b48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_21b490:
    // 0x21b490: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21b490u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21b494:
    // 0x21b494: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21b494u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21b498:
    // 0x21b498: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21b498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21b49c:
    // 0x21b49c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21b49cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21b4a0:
    // 0x21b4a0: 0x3e00008  jr          $ra
label_21b4a4:
    if (ctx->pc == 0x21B4A4u) {
        ctx->pc = 0x21B4A4u;
            // 0x21b4a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x21B4A8u;
        goto label_21b4a8;
    }
    ctx->pc = 0x21B4A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B4A0u;
            // 0x21b4a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B4A8u;
label_21b4a8:
    // 0x21b4a8: 0x0  nop
    ctx->pc = 0x21b4a8u;
    // NOP
label_21b4ac:
    // 0x21b4ac: 0x0  nop
    ctx->pc = 0x21b4acu;
    // NOP
label_21b4b0:
    // 0x21b4b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21b4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_21b4b4:
    // 0x21b4b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21b4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_21b4b8:
    // 0x21b4b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21b4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21b4bc:
    // 0x21b4bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21b4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21b4c0:
    // 0x21b4c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21b4c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21b4c4:
    // 0x21b4c4: 0x12200034  beqz        $s1, . + 4 + (0x34 << 2)
label_21b4c8:
    if (ctx->pc == 0x21B4C8u) {
        ctx->pc = 0x21B4C8u;
            // 0x21b4c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21B4CCu;
        goto label_21b4cc;
    }
    ctx->pc = 0x21B4C4u;
    {
        const bool branch_taken_0x21b4c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B4C4u;
            // 0x21b4c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b4c4) {
            ctx->pc = 0x21B598u;
            goto label_21b598;
        }
    }
    ctx->pc = 0x21B4CCu;
label_21b4cc:
    // 0x21b4cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21b4d0:
    // 0x21b4d0: 0x2442e910  addiu       $v0, $v0, -0x16F0
    ctx->pc = 0x21b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961424));
label_21b4d4:
    // 0x21b4d4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21b4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21b4d8:
    // 0x21b4d8: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x21b4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_21b4dc:
    // 0x21b4dc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_21b4e0:
    if (ctx->pc == 0x21B4E0u) {
        ctx->pc = 0x21B4E0u;
            // 0x21b4e0: 0x2622000c  addiu       $v0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->pc = 0x21B4E4u;
        goto label_21b4e4;
    }
    ctx->pc = 0x21B4DCu;
    {
        const bool branch_taken_0x21b4dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b4dc) {
            ctx->pc = 0x21B4E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21B4DCu;
            // 0x21b4e0: 0x2622000c  addiu       $v0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21B4F0u;
            goto label_21b4f0;
        }
    }
    ctx->pc = 0x21B4E4u;
label_21b4e4:
    // 0x21b4e4: 0xc0873dc  jal         func_21CF70
label_21b4e8:
    if (ctx->pc == 0x21B4E8u) {
        ctx->pc = 0x21B4ECu;
        goto label_21b4ec;
    }
    ctx->pc = 0x21B4E4u;
    SET_GPR_U32(ctx, 31, 0x21B4ECu);
    ctx->pc = 0x21CF70u;
    if (runtime->hasFunction(0x21CF70u)) {
        auto targetFn = runtime->lookupFunction(0x21CF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B4ECu; }
        if (ctx->pc != 0x21B4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CF70_0x21cf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B4ECu; }
        if (ctx->pc != 0x21B4ECu) { return; }
    }
    ctx->pc = 0x21B4ECu;
label_21b4ec:
    // 0x21b4ec: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x21b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_21b4f0:
    // 0x21b4f0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_21b4f4:
    if (ctx->pc == 0x21B4F4u) {
        ctx->pc = 0x21B4F8u;
        goto label_21b4f8;
    }
    ctx->pc = 0x21B4F0u;
    {
        const bool branch_taken_0x21b4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b4f0) {
            ctx->pc = 0x21B53Cu;
            goto label_21b53c;
        }
    }
    ctx->pc = 0x21B4F8u;
label_21b4f8:
    // 0x21b4f8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_21b4fc:
    if (ctx->pc == 0x21B4FCu) {
        ctx->pc = 0x21B500u;
        goto label_21b500;
    }
    ctx->pc = 0x21B4F8u;
    {
        const bool branch_taken_0x21b4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b4f8) {
            ctx->pc = 0x21B53Cu;
            goto label_21b53c;
        }
    }
    ctx->pc = 0x21B500u;
label_21b500:
    // 0x21b500: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_21b504:
    if (ctx->pc == 0x21B504u) {
        ctx->pc = 0x21B508u;
        goto label_21b508;
    }
    ctx->pc = 0x21B500u;
    {
        const bool branch_taken_0x21b500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b500) {
            ctx->pc = 0x21B53Cu;
            goto label_21b53c;
        }
    }
    ctx->pc = 0x21B508u;
label_21b508:
    // 0x21b508: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x21b508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_21b50c:
    // 0x21b50c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x21b50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_21b510:
    // 0x21b510: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21b510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_21b514:
    // 0x21b514: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_21b518:
    if (ctx->pc == 0x21B518u) {
        ctx->pc = 0x21B51Cu;
        goto label_21b51c;
    }
    ctx->pc = 0x21B514u;
    {
        const bool branch_taken_0x21b514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b514) {
            ctx->pc = 0x21B53Cu;
            goto label_21b53c;
        }
    }
    ctx->pc = 0x21B51Cu;
label_21b51c:
    // 0x21b51c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x21b51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_21b520:
    // 0x21b520: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21b520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_21b524:
    // 0x21b524: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x21b524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_21b528:
    // 0x21b528: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x21b528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_21b52c:
    // 0x21b52c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x21b52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_21b530:
    // 0x21b530: 0x330bc  dsll32      $a2, $v1, 2
    ctx->pc = 0x21b530u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 2));
label_21b534:
    // 0x21b534: 0xc0a7ab4  jal         func_29EAD0
label_21b538:
    if (ctx->pc == 0x21B538u) {
        ctx->pc = 0x21B538u;
            // 0x21b538: 0x630be  dsrl32      $a2, $a2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 2));
        ctx->pc = 0x21B53Cu;
        goto label_21b53c;
    }
    ctx->pc = 0x21B534u;
    SET_GPR_U32(ctx, 31, 0x21B53Cu);
    ctx->pc = 0x21B538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B534u;
            // 0x21b538: 0x630be  dsrl32      $a2, $a2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B53Cu; }
        if (ctx->pc != 0x21B53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B53Cu; }
        if (ctx->pc != 0x21B53Cu) { return; }
    }
    ctx->pc = 0x21B53Cu;
label_21b53c:
    // 0x21b53c: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
label_21b540:
    if (ctx->pc == 0x21B540u) {
        ctx->pc = 0x21B540u;
            // 0x21b540: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x21B544u;
        goto label_21b544;
    }
    ctx->pc = 0x21B53Cu;
    {
        const bool branch_taken_0x21b53c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b53c) {
            ctx->pc = 0x21B540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21B53Cu;
            // 0x21b540: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21B574u;
            goto label_21b574;
        }
    }
    ctx->pc = 0x21B544u;
label_21b544:
    // 0x21b544: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21b544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21b548:
    // 0x21b548: 0x2442e950  addiu       $v0, $v0, -0x16B0
    ctx->pc = 0x21b548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961488));
label_21b54c:
    // 0x21b54c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_21b550:
    if (ctx->pc == 0x21B550u) {
        ctx->pc = 0x21B550u;
            // 0x21b550: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x21B554u;
        goto label_21b554;
    }
    ctx->pc = 0x21B54Cu;
    {
        const bool branch_taken_0x21b54c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B54Cu;
            // 0x21b550: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b54c) {
            ctx->pc = 0x21B570u;
            goto label_21b570;
        }
    }
    ctx->pc = 0x21B554u;
label_21b554:
    // 0x21b554: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21b554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21b558:
    // 0x21b558: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x21b558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_21b55c:
    // 0x21b55c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_21b560:
    if (ctx->pc == 0x21B560u) {
        ctx->pc = 0x21B560u;
            // 0x21b560: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x21B564u;
        goto label_21b564;
    }
    ctx->pc = 0x21B55Cu;
    {
        const bool branch_taken_0x21b55c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B55Cu;
            // 0x21b560: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b55c) {
            ctx->pc = 0x21B570u;
            goto label_21b570;
        }
    }
    ctx->pc = 0x21B564u;
label_21b564:
    // 0x21b564: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21b564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21b568:
    // 0x21b568: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x21b568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_21b56c:
    // 0x21b56c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21b56cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21b570:
    // 0x21b570: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x21b570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_21b574:
    // 0x21b574: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x21b574u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_21b578:
    // 0x21b578: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_21b57c:
    if (ctx->pc == 0x21B57Cu) {
        ctx->pc = 0x21B57Cu;
            // 0x21b57c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21B580u;
        goto label_21b580;
    }
    ctx->pc = 0x21B578u;
    {
        const bool branch_taken_0x21b578 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x21b578) {
            ctx->pc = 0x21B57Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21B578u;
            // 0x21b57c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21B59Cu;
            goto label_21b59c;
        }
    }
    ctx->pc = 0x21B580u;
label_21b580:
    // 0x21b580: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21b580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_21b584:
    // 0x21b584: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x21b584u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_21b588:
    // 0x21b588: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x21b588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_21b58c:
    // 0x21b58c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21b58cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21b590:
    // 0x21b590: 0xc0a7ab4  jal         func_29EAD0
label_21b594:
    if (ctx->pc == 0x21B594u) {
        ctx->pc = 0x21B594u;
            // 0x21b594: 0x2407002a  addiu       $a3, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->pc = 0x21B598u;
        goto label_21b598;
    }
    ctx->pc = 0x21B590u;
    SET_GPR_U32(ctx, 31, 0x21B598u);
    ctx->pc = 0x21B594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B590u;
            // 0x21b594: 0x2407002a  addiu       $a3, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B598u; }
        if (ctx->pc != 0x21B598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B598u; }
        if (ctx->pc != 0x21B598u) { return; }
    }
    ctx->pc = 0x21B598u;
label_21b598:
    // 0x21b598: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x21b598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21b59c:
    // 0x21b59c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21b59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21b5a0:
    // 0x21b5a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21b5a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21b5a4:
    // 0x21b5a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21b5a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21b5a8:
    // 0x21b5a8: 0x3e00008  jr          $ra
label_21b5ac:
    if (ctx->pc == 0x21B5ACu) {
        ctx->pc = 0x21B5ACu;
            // 0x21b5ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x21B5B0u;
        goto label_21b5b0;
    }
    ctx->pc = 0x21B5A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B5A8u;
            // 0x21b5ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B5B0u;
label_21b5b0:
    // 0x21b5b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21b5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_21b5b4:
    // 0x21b5b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21b5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_21b5b8:
    // 0x21b5b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21b5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21b5bc:
    // 0x21b5bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21b5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21b5c0:
    // 0x21b5c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21b5c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21b5c4:
    // 0x21b5c4: 0x1220005a  beqz        $s1, . + 4 + (0x5A << 2)
label_21b5c8:
    if (ctx->pc == 0x21B5C8u) {
        ctx->pc = 0x21B5C8u;
            // 0x21b5c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21B5CCu;
        goto label_21b5cc;
    }
    ctx->pc = 0x21B5C4u;
    {
        const bool branch_taken_0x21b5c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B5C4u;
            // 0x21b5c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b5c4) {
            ctx->pc = 0x21B730u;
            goto label_21b730;
        }
    }
    ctx->pc = 0x21B5CCu;
label_21b5cc:
    // 0x21b5cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21b5d0:
    // 0x21b5d0: 0x2442e7b0  addiu       $v0, $v0, -0x1850
    ctx->pc = 0x21b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961072));
label_21b5d4:
    // 0x21b5d4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21b5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21b5d8:
    // 0x21b5d8: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x21b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_21b5dc:
    // 0x21b5dc: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x21b5dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_21b5e0:
    // 0x21b5e0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_21b5e4:
    if (ctx->pc == 0x21B5E4u) {
        ctx->pc = 0x21B5E4u;
            // 0x21b5e4: 0xae200058  sw          $zero, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
        ctx->pc = 0x21B5E8u;
        goto label_21b5e8;
    }
    ctx->pc = 0x21B5E0u;
    {
        const bool branch_taken_0x21b5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b5e0) {
            ctx->pc = 0x21B5E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21B5E0u;
            // 0x21b5e4: 0xae200058  sw          $zero, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21B5FCu;
            goto label_21b5fc;
        }
    }
    ctx->pc = 0x21B5E8u;
label_21b5e8:
    // 0x21b5e8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x21b5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_21b5ec:
    // 0x21b5ec: 0x26250044  addiu       $a1, $s1, 0x44
    ctx->pc = 0x21b5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
label_21b5f0:
    // 0x21b5f0: 0xc08fb34  jal         func_23ECD0
label_21b5f4:
    if (ctx->pc == 0x21B5F4u) {
        ctx->pc = 0x21B5F4u;
            // 0x21b5f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x21B5F8u;
        goto label_21b5f8;
    }
    ctx->pc = 0x21B5F0u;
    SET_GPR_U32(ctx, 31, 0x21B5F8u);
    ctx->pc = 0x21B5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B5F0u;
            // 0x21b5f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23ECD0u;
    if (runtime->hasFunction(0x23ECD0u)) {
        auto targetFn = runtime->lookupFunction(0x23ECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B5F8u; }
        if (ctx->pc != 0x21B5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023ECD0_0x23ecd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B5F8u; }
        if (ctx->pc != 0x21B5F8u) { return; }
    }
    ctx->pc = 0x21B5F8u;
label_21b5f8:
    // 0x21b5f8: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x21b5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_21b5fc:
    // 0x21b5fc: 0x26240044  addiu       $a0, $s1, 0x44
    ctx->pc = 0x21b5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
label_21b600:
    // 0x21b600: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x21b600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
label_21b604:
    // 0x21b604: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x21b604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21b608:
    // 0x21b608: 0xc087e80  jal         func_21FA00
label_21b60c:
    if (ctx->pc == 0x21B60Cu) {
        ctx->pc = 0x21B60Cu;
            // 0x21b60c: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x21B610u;
        goto label_21b610;
    }
    ctx->pc = 0x21B608u;
    SET_GPR_U32(ctx, 31, 0x21B610u);
    ctx->pc = 0x21B60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B608u;
            // 0x21b60c: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FA00u;
    if (runtime->hasFunction(0x21FA00u)) {
        auto targetFn = runtime->lookupFunction(0x21FA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B610u; }
        if (ctx->pc != 0x21B610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FA00_0x21fa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B610u; }
        if (ctx->pc != 0x21B610u) { return; }
    }
    ctx->pc = 0x21B610u;
label_21b610:
    // 0x21b610: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x21b610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_21b614:
    // 0x21b614: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_21b618:
    if (ctx->pc == 0x21B618u) {
        ctx->pc = 0x21B61Cu;
        goto label_21b61c;
    }
    ctx->pc = 0x21B614u;
    {
        const bool branch_taken_0x21b614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b614) {
            ctx->pc = 0x21B6C4u;
            goto label_21b6c4;
        }
    }
    ctx->pc = 0x21B61Cu;
label_21b61c:
    // 0x21b61c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21b620:
    // 0x21b620: 0x2442e910  addiu       $v0, $v0, -0x16F0
    ctx->pc = 0x21b620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961424));
label_21b624:
    // 0x21b624: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x21b624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_21b628:
    // 0x21b628: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x21b628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_21b62c:
    // 0x21b62c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_21b630:
    if (ctx->pc == 0x21B630u) {
        ctx->pc = 0x21B630u;
            // 0x21b630: 0x26220020  addiu       $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x21B634u;
        goto label_21b634;
    }
    ctx->pc = 0x21B62Cu;
    {
        const bool branch_taken_0x21b62c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b62c) {
            ctx->pc = 0x21B630u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21B62Cu;
            // 0x21b630: 0x26220020  addiu       $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21B640u;
            goto label_21b640;
        }
    }
    ctx->pc = 0x21B634u;
label_21b634:
    // 0x21b634: 0xc0873dc  jal         func_21CF70
label_21b638:
    if (ctx->pc == 0x21B638u) {
        ctx->pc = 0x21B63Cu;
        goto label_21b63c;
    }
    ctx->pc = 0x21B634u;
    SET_GPR_U32(ctx, 31, 0x21B63Cu);
    ctx->pc = 0x21CF70u;
    if (runtime->hasFunction(0x21CF70u)) {
        auto targetFn = runtime->lookupFunction(0x21CF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B63Cu; }
        if (ctx->pc != 0x21B63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CF70_0x21cf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B63Cu; }
        if (ctx->pc != 0x21B63Cu) { return; }
    }
    ctx->pc = 0x21B63Cu;
label_21b63c:
    // 0x21b63c: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x21b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_21b640:
    // 0x21b640: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_21b644:
    if (ctx->pc == 0x21B644u) {
        ctx->pc = 0x21B644u;
            // 0x21b644: 0x26230014  addiu       $v1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->pc = 0x21B648u;
        goto label_21b648;
    }
    ctx->pc = 0x21B640u;
    {
        const bool branch_taken_0x21b640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b640) {
            ctx->pc = 0x21B644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21B640u;
            // 0x21b644: 0x26230014  addiu       $v1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21B690u;
            goto label_21b690;
        }
    }
    ctx->pc = 0x21B648u;
label_21b648:
    // 0x21b648: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_21b64c:
    if (ctx->pc == 0x21B64Cu) {
        ctx->pc = 0x21B650u;
        goto label_21b650;
    }
    ctx->pc = 0x21B648u;
    {
        const bool branch_taken_0x21b648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b648) {
            ctx->pc = 0x21B68Cu;
            goto label_21b68c;
        }
    }
    ctx->pc = 0x21B650u;
label_21b650:
    // 0x21b650: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_21b654:
    if (ctx->pc == 0x21B654u) {
        ctx->pc = 0x21B658u;
        goto label_21b658;
    }
    ctx->pc = 0x21B650u;
    {
        const bool branch_taken_0x21b650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b650) {
            ctx->pc = 0x21B68Cu;
            goto label_21b68c;
        }
    }
    ctx->pc = 0x21B658u;
label_21b658:
    // 0x21b658: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x21b658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_21b65c:
    // 0x21b65c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x21b65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_21b660:
    // 0x21b660: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21b660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_21b664:
    // 0x21b664: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_21b668:
    if (ctx->pc == 0x21B668u) {
        ctx->pc = 0x21B66Cu;
        goto label_21b66c;
    }
    ctx->pc = 0x21B664u;
    {
        const bool branch_taken_0x21b664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b664) {
            ctx->pc = 0x21B68Cu;
            goto label_21b68c;
        }
    }
    ctx->pc = 0x21B66Cu;
label_21b66c:
    // 0x21b66c: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x21b66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_21b670:
    // 0x21b670: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21b670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_21b674:
    // 0x21b674: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x21b674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_21b678:
    // 0x21b678: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x21b678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_21b67c:
    // 0x21b67c: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x21b67cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_21b680:
    // 0x21b680: 0x330bc  dsll32      $a2, $v1, 2
    ctx->pc = 0x21b680u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 2));
label_21b684:
    // 0x21b684: 0xc0a7ab4  jal         func_29EAD0
label_21b688:
    if (ctx->pc == 0x21B688u) {
        ctx->pc = 0x21B688u;
            // 0x21b688: 0x630be  dsrl32      $a2, $a2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 2));
        ctx->pc = 0x21B68Cu;
        goto label_21b68c;
    }
    ctx->pc = 0x21B684u;
    SET_GPR_U32(ctx, 31, 0x21B68Cu);
    ctx->pc = 0x21B688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B684u;
            // 0x21b688: 0x630be  dsrl32      $a2, $a2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B68Cu; }
        if (ctx->pc != 0x21B68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B68Cu; }
        if (ctx->pc != 0x21B68Cu) { return; }
    }
    ctx->pc = 0x21B68Cu;
label_21b68c:
    // 0x21b68c: 0x26230014  addiu       $v1, $s1, 0x14
    ctx->pc = 0x21b68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_21b690:
    // 0x21b690: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_21b694:
    if (ctx->pc == 0x21B694u) {
        ctx->pc = 0x21B698u;
        goto label_21b698;
    }
    ctx->pc = 0x21B690u;
    {
        const bool branch_taken_0x21b690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b690) {
            ctx->pc = 0x21B6C4u;
            goto label_21b6c4;
        }
    }
    ctx->pc = 0x21B698u;
label_21b698:
    // 0x21b698: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21b698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21b69c:
    // 0x21b69c: 0x2442e950  addiu       $v0, $v0, -0x16B0
    ctx->pc = 0x21b69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961488));
label_21b6a0:
    // 0x21b6a0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_21b6a4:
    if (ctx->pc == 0x21B6A4u) {
        ctx->pc = 0x21B6A4u;
            // 0x21b6a4: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x21B6A8u;
        goto label_21b6a8;
    }
    ctx->pc = 0x21B6A0u;
    {
        const bool branch_taken_0x21b6a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B6A0u;
            // 0x21b6a4: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b6a0) {
            ctx->pc = 0x21B6C4u;
            goto label_21b6c4;
        }
    }
    ctx->pc = 0x21B6A8u;
label_21b6a8:
    // 0x21b6a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21b6ac:
    // 0x21b6ac: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x21b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_21b6b0:
    // 0x21b6b0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_21b6b4:
    if (ctx->pc == 0x21B6B4u) {
        ctx->pc = 0x21B6B4u;
            // 0x21b6b4: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x21B6B8u;
        goto label_21b6b8;
    }
    ctx->pc = 0x21B6B0u;
    {
        const bool branch_taken_0x21b6b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B6B0u;
            // 0x21b6b4: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b6b0) {
            ctx->pc = 0x21B6C4u;
            goto label_21b6c4;
        }
    }
    ctx->pc = 0x21B6B8u;
label_21b6b8:
    // 0x21b6b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21b6bc:
    // 0x21b6bc: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x21b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_21b6c0:
    // 0x21b6c0: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x21b6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_21b6c4:
    // 0x21b6c4: 0x52200011  beql        $s1, $zero, . + 4 + (0x11 << 2)
label_21b6c8:
    if (ctx->pc == 0x21B6C8u) {
        ctx->pc = 0x21B6C8u;
            // 0x21b6c8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x21B6CCu;
        goto label_21b6cc;
    }
    ctx->pc = 0x21B6C4u;
    {
        const bool branch_taken_0x21b6c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b6c4) {
            ctx->pc = 0x21B6C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21B6C4u;
            // 0x21b6c8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21B70Cu;
            goto label_21b70c;
        }
    }
    ctx->pc = 0x21B6CCu;
label_21b6cc:
    // 0x21b6cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21b6d0:
    // 0x21b6d0: 0x2442e740  addiu       $v0, $v0, -0x18C0
    ctx->pc = 0x21b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960960));
label_21b6d4:
    // 0x21b6d4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_21b6d8:
    if (ctx->pc == 0x21B6D8u) {
        ctx->pc = 0x21B6D8u;
            // 0x21b6d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x21B6DCu;
        goto label_21b6dc;
    }
    ctx->pc = 0x21B6D4u;
    {
        const bool branch_taken_0x21b6d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B6D4u;
            // 0x21b6d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b6d4) {
            ctx->pc = 0x21B708u;
            goto label_21b708;
        }
    }
    ctx->pc = 0x21B6DCu;
label_21b6dc:
    // 0x21b6dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21b6e0:
    // 0x21b6e0: 0x2442d830  addiu       $v0, $v0, -0x27D0
    ctx->pc = 0x21b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957104));
label_21b6e4:
    // 0x21b6e4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_21b6e8:
    if (ctx->pc == 0x21B6E8u) {
        ctx->pc = 0x21B6E8u;
            // 0x21b6e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x21B6ECu;
        goto label_21b6ec;
    }
    ctx->pc = 0x21B6E4u;
    {
        const bool branch_taken_0x21b6e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B6E4u;
            // 0x21b6e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b6e4) {
            ctx->pc = 0x21B708u;
            goto label_21b708;
        }
    }
    ctx->pc = 0x21B6ECu;
label_21b6ec:
    // 0x21b6ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21b6f0:
    // 0x21b6f0: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x21b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_21b6f4:
    // 0x21b6f4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_21b6f8:
    if (ctx->pc == 0x21B6F8u) {
        ctx->pc = 0x21B6F8u;
            // 0x21b6f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x21B6FCu;
        goto label_21b6fc;
    }
    ctx->pc = 0x21B6F4u;
    {
        const bool branch_taken_0x21b6f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B6F4u;
            // 0x21b6f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b6f4) {
            ctx->pc = 0x21B708u;
            goto label_21b708;
        }
    }
    ctx->pc = 0x21B6FCu;
label_21b6fc:
    // 0x21b6fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21b700:
    // 0x21b700: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x21b700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_21b704:
    // 0x21b704: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21b704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21b708:
    // 0x21b708: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x21b708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_21b70c:
    // 0x21b70c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x21b70cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_21b710:
    // 0x21b710: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_21b714:
    if (ctx->pc == 0x21B714u) {
        ctx->pc = 0x21B714u;
            // 0x21b714: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21B718u;
        goto label_21b718;
    }
    ctx->pc = 0x21B710u;
    {
        const bool branch_taken_0x21b710 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x21b710) {
            ctx->pc = 0x21B714u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21B710u;
            // 0x21b714: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21B734u;
            goto label_21b734;
        }
    }
    ctx->pc = 0x21B718u;
label_21b718:
    // 0x21b718: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21b718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_21b71c:
    // 0x21b71c: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x21b71cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_21b720:
    // 0x21b720: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x21b720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_21b724:
    // 0x21b724: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21b724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21b728:
    // 0x21b728: 0xc0a7ab4  jal         func_29EAD0
label_21b72c:
    if (ctx->pc == 0x21B72Cu) {
        ctx->pc = 0x21B72Cu;
            // 0x21b72c: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x21B730u;
        goto label_21b730;
    }
    ctx->pc = 0x21B728u;
    SET_GPR_U32(ctx, 31, 0x21B730u);
    ctx->pc = 0x21B72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B728u;
            // 0x21b72c: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B730u; }
        if (ctx->pc != 0x21B730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B730u; }
        if (ctx->pc != 0x21B730u) { return; }
    }
    ctx->pc = 0x21B730u;
label_21b730:
    // 0x21b730: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x21b730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21b734:
    // 0x21b734: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21b734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21b738:
    // 0x21b738: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21b738u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21b73c:
    // 0x21b73c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21b73cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21b740:
    // 0x21b740: 0x3e00008  jr          $ra
label_21b744:
    if (ctx->pc == 0x21B744u) {
        ctx->pc = 0x21B744u;
            // 0x21b744: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x21B748u;
        goto label_21b748;
    }
    ctx->pc = 0x21B740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B740u;
            // 0x21b744: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B748u;
label_21b748:
    // 0x21b748: 0x0  nop
    ctx->pc = 0x21b748u;
    // NOP
label_21b74c:
    // 0x21b74c: 0x0  nop
    ctx->pc = 0x21b74cu;
    // NOP
label_21b750:
    // 0x21b750: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x21b750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_21b754:
    // 0x21b754: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x21b754u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
label_21b758:
    // 0x21b758: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x21b758u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_21b75c:
    // 0x21b75c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x21b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_21b760:
    // 0x21b760: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x21b760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21b764:
    // 0x21b764: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x21b764u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
label_21b768:
    // 0x21b768: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_21b76c:
    if (ctx->pc == 0x21B76Cu) {
        ctx->pc = 0x21B76Cu;
            // 0x21b76c: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->pc = 0x21B770u;
        goto label_21b770;
    }
    ctx->pc = 0x21B768u;
    {
        const bool branch_taken_0x21b768 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b768) {
            ctx->pc = 0x21B76Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21B768u;
            // 0x21b76c: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21B778u;
            goto label_21b778;
        }
    }
    ctx->pc = 0x21B770u;
label_21b770:
    // 0x21b770: 0x10000004  b           . + 4 + (0x4 << 2)
label_21b774:
    if (ctx->pc == 0x21B774u) {
        ctx->pc = 0x21B774u;
            // 0x21b774: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x21B778u;
        goto label_21b778;
    }
    ctx->pc = 0x21B770u;
    {
        const bool branch_taken_0x21b770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B770u;
            // 0x21b774: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b770) {
            ctx->pc = 0x21B784u;
            goto label_21b784;
        }
    }
    ctx->pc = 0x21B778u;
label_21b778:
    // 0x21b778: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21b778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b77c:
    // 0x21b77c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x21b77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_21b780:
    // 0x21b780: 0xa4830010  sh          $v1, 0x10($a0)
    ctx->pc = 0x21b780u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 3));
label_21b784:
    // 0x21b784: 0x3e00008  jr          $ra
label_21b788:
    if (ctx->pc == 0x21B788u) {
        ctx->pc = 0x21B78Cu;
        goto label_21b78c;
    }
    ctx->pc = 0x21B784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B78Cu;
label_21b78c:
    // 0x21b78c: 0x0  nop
    ctx->pc = 0x21b78cu;
    // NOP
label_21b790:
    // 0x21b790: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x21b790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_21b794:
    // 0x21b794: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x21b794u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21b798:
    // 0x21b798: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21b798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_21b79c:
    // 0x21b79c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21b79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_21b7a0:
    // 0x21b7a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21b7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21b7a4:
    // 0x21b7a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21b7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21b7a8:
    // 0x21b7a8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x21b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_21b7ac:
    // 0x21b7ac: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x21b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_21b7b0:
    // 0x21b7b0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_21b7b4:
    if (ctx->pc == 0x21B7B4u) {
        ctx->pc = 0x21B7B4u;
            // 0x21b7b4: 0x160902d  daddu       $s2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21B7B8u;
        goto label_21b7b8;
    }
    ctx->pc = 0x21B7B0u;
    {
        const bool branch_taken_0x21b7b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B7B0u;
            // 0x21b7b4: 0x160902d  daddu       $s2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b7b0) {
            ctx->pc = 0x21B7D8u;
            goto label_21b7d8;
        }
    }
    ctx->pc = 0x21B7B8u;
label_21b7b8:
    // 0x21b7b8: 0x8dad000c  lw          $t5, 0xC($t5)
    ctx->pc = 0x21b7b8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
label_21b7bc:
    // 0x21b7bc: 0x8da3000c  lw          $v1, 0xC($t5)
    ctx->pc = 0x21b7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
label_21b7c0:
    // 0x21b7c0: 0x0  nop
    ctx->pc = 0x21b7c0u;
    // NOP
label_21b7c4:
    // 0x21b7c4: 0x0  nop
    ctx->pc = 0x21b7c4u;
    // NOP
label_21b7c8:
    // 0x21b7c8: 0x0  nop
    ctx->pc = 0x21b7c8u;
    // NOP
label_21b7cc:
    // 0x21b7cc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_21b7d0:
    if (ctx->pc == 0x21B7D0u) {
        ctx->pc = 0x21B7D4u;
        goto label_21b7d4;
    }
    ctx->pc = 0x21B7CCu;
    {
        const bool branch_taken_0x21b7cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b7cc) {
            ctx->pc = 0x21B7B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21b7b8;
        }
    }
    ctx->pc = 0x21B7D4u;
label_21b7d4:
    // 0x21b7d4: 0x0  nop
    ctx->pc = 0x21b7d4u;
    // NOP
label_21b7d8:
    // 0x21b7d8: 0x81ab0010  lb          $t3, 0x10($t5)
    ctx->pc = 0x21b7d8u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 13), 16)));
label_21b7dc:
    // 0x21b7dc: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x21b7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_21b7e0:
    // 0x21b7e0: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x21b7e0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21b7e4:
    // 0x21b7e4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_21b7e8:
    if (ctx->pc == 0x21B7E8u) {
        ctx->pc = 0x21B7E8u;
            // 0x21b7e8: 0x1ab8821  addu        $s1, $t5, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
        ctx->pc = 0x21B7ECu;
        goto label_21b7ec;
    }
    ctx->pc = 0x21B7E4u;
    {
        const bool branch_taken_0x21b7e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B7E4u;
            // 0x21b7e8: 0x1ab8821  addu        $s1, $t5, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b7e4) {
            ctx->pc = 0x21B808u;
            goto label_21b808;
        }
    }
    ctx->pc = 0x21B7ECu;
label_21b7ec:
    // 0x21b7ec: 0x8d8c000c  lw          $t4, 0xC($t4)
    ctx->pc = 0x21b7ecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
label_21b7f0:
    // 0x21b7f0: 0x8d83000c  lw          $v1, 0xC($t4)
    ctx->pc = 0x21b7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
label_21b7f4:
    // 0x21b7f4: 0x0  nop
    ctx->pc = 0x21b7f4u;
    // NOP
label_21b7f8:
    // 0x21b7f8: 0x0  nop
    ctx->pc = 0x21b7f8u;
    // NOP
label_21b7fc:
    // 0x21b7fc: 0x0  nop
    ctx->pc = 0x21b7fcu;
    // NOP
label_21b800:
    // 0x21b800: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_21b804:
    if (ctx->pc == 0x21B804u) {
        ctx->pc = 0x21B808u;
        goto label_21b808;
    }
    ctx->pc = 0x21B800u;
    {
        const bool branch_taken_0x21b800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b800) {
            ctx->pc = 0x21B7ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21b7ec;
        }
    }
    ctx->pc = 0x21B808u;
label_21b808:
    // 0x21b808: 0x81830010  lb          $v1, 0x10($t4)
    ctx->pc = 0x21b808u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 16)));
label_21b80c:
    // 0x21b80c: 0xc621005c  lwc1        $f1, 0x5C($s1)
    ctx->pc = 0x21b80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21b810:
    // 0x21b810: 0x262e0058  addiu       $t6, $s1, 0x58
    ctx->pc = 0x21b810u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_21b814:
    // 0x21b814: 0x1838021  addu        $s0, $t4, $v1
    ctx->pc = 0x21b814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
label_21b818:
    // 0x21b818: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x21b818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21b81c:
    // 0x21b81c: 0x260d0058  addiu       $t5, $s0, 0x58
    ctx->pc = 0x21b81cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_21b820:
    // 0x21b820: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21b820u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_21b824:
    // 0x21b824: 0x46000004  c1          0x4
    ctx->pc = 0x21b824u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_21b828:
    // 0x21b828: 0x3c190064  lui         $t9, 0x64
    ctx->pc = 0x21b828u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)100 << 16));
label_21b82c:
    // 0x21b82c: 0x3c180064  lui         $t8, 0x64
    ctx->pc = 0x21b82cu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)100 << 16));
label_21b830:
    // 0x21b830: 0x3c0b0064  lui         $t3, 0x64
    ctx->pc = 0x21b830u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)100 << 16));
label_21b834:
    // 0x21b834: 0x27390970  addiu       $t9, $t9, 0x970
    ctx->pc = 0x21b834u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2416));
label_21b838:
    // 0x21b838: 0x27180d70  addiu       $t8, $t8, 0xD70
    ctx->pc = 0x21b838u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 3440));
label_21b83c:
    // 0x21b83c: 0x256b0b70  addiu       $t3, $t3, 0xB70
    ctx->pc = 0x21b83cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2928));
label_21b840:
    // 0x21b840: 0x240f0006  addiu       $t7, $zero, 0x6
    ctx->pc = 0x21b840u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_21b844:
    // 0x21b844: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x21b844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_21b848:
    // 0x21b848: 0x8fac007c  lw          $t4, 0x7C($sp)
    ctx->pc = 0x21b848u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_21b84c:
    // 0x21b84c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x21b84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_21b850:
    // 0x21b850: 0x6c082a  slt         $at, $v1, $t4
    ctx->pc = 0x21b850u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_21b854:
    // 0x21b854: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_21b858:
    if (ctx->pc == 0x21B858u) {
        ctx->pc = 0x21B85Cu;
        goto label_21b85c;
    }
    ctx->pc = 0x21B854u;
    {
        const bool branch_taken_0x21b854 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b854) {
            ctx->pc = 0x21B868u;
            goto label_21b868;
        }
    }
    ctx->pc = 0x21B85Cu;
label_21b85c:
    // 0x21b85c: 0x10000004  b           . + 4 + (0x4 << 2)
label_21b860:
    if (ctx->pc == 0x21B860u) {
        ctx->pc = 0x21B860u;
            // 0x21b860: 0x160c82d  daddu       $t9, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21B864u;
        goto label_21b864;
    }
    ctx->pc = 0x21B85Cu;
    {
        const bool branch_taken_0x21b85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B85Cu;
            // 0x21b860: 0x160c82d  daddu       $t9, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b85c) {
            ctx->pc = 0x21B870u;
            goto label_21b870;
        }
    }
    ctx->pc = 0x21B864u;
label_21b864:
    // 0x21b864: 0x0  nop
    ctx->pc = 0x21b864u;
    // NOP
label_21b868:
    // 0x21b868: 0x160c02d  daddu       $t8, $t3, $zero
    ctx->pc = 0x21b868u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_21b86c:
    // 0x21b86c: 0x0  nop
    ctx->pc = 0x21b86cu;
    // NOP
label_21b870:
    // 0x21b870: 0x195842  srl         $t3, $t9, 1
    ctx->pc = 0x21b870u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 25), 1));
label_21b874:
    // 0x21b874: 0x181842  srl         $v1, $t8, 1
    ctx->pc = 0x21b874u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 24), 1));
label_21b878:
    // 0x21b878: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x21b878u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
label_21b87c:
    // 0x21b87c: 0x5e1fff3  bgez        $t7, . + 4 + (-0xD << 2)
label_21b880:
    if (ctx->pc == 0x21B880u) {
        ctx->pc = 0x21B880u;
            // 0x21b880: 0x1635821  addu        $t3, $t3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
        ctx->pc = 0x21B884u;
        goto label_21b884;
    }
    ctx->pc = 0x21B87Cu;
    {
        const bool branch_taken_0x21b87c = (GPR_S32(ctx, 15) >= 0);
        ctx->pc = 0x21B880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B87Cu;
            // 0x21b880: 0x1635821  addu        $t3, $t3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b87c) {
            ctx->pc = 0x21B84Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21b84c;
        }
    }
    ctx->pc = 0x21B884u;
label_21b884:
    // 0x21b884: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x21b884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_21b888:
    // 0x21b888: 0x6c082a  slt         $at, $v1, $t4
    ctx->pc = 0x21b888u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_21b88c:
    // 0x21b88c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_21b890:
    if (ctx->pc == 0x21B890u) {
        ctx->pc = 0x21B894u;
        goto label_21b894;
    }
    ctx->pc = 0x21B88Cu;
    {
        const bool branch_taken_0x21b88c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b88c) {
            ctx->pc = 0x21B898u;
            goto label_21b898;
        }
    }
    ctx->pc = 0x21B894u;
label_21b894:
    // 0x21b894: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x21b894u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_21b898:
    // 0x21b898: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x21b898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_21b89c:
    // 0x21b89c: 0x24630970  addiu       $v1, $v1, 0x970
    ctx->pc = 0x21b89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2416));
label_21b8a0:
    // 0x21b8a0: 0x1635823  subu        $t3, $t3, $v1
    ctx->pc = 0x21b8a0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_21b8a4:
    // 0x21b8a4: 0x5610003  bgez        $t3, . + 4 + (0x3 << 2)
label_21b8a8:
    if (ctx->pc == 0x21B8A8u) {
        ctx->pc = 0x21B8A8u;
            // 0x21b8a8: 0xb1883  sra         $v1, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), 2));
        ctx->pc = 0x21B8ACu;
        goto label_21b8ac;
    }
    ctx->pc = 0x21B8A4u;
    {
        const bool branch_taken_0x21b8a4 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x21B8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B8A4u;
            // 0x21b8a8: 0xb1883  sra         $v1, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b8a4) {
            ctx->pc = 0x21B8B4u;
            goto label_21b8b4;
        }
    }
    ctx->pc = 0x21B8ACu;
label_21b8ac:
    // 0x21b8ac: 0x25630003  addiu       $v1, $t3, 0x3
    ctx->pc = 0x21b8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
label_21b8b0:
    // 0x21b8b0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x21b8b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_21b8b4:
    // 0x21b8b4: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x21b8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
label_21b8b8:
    // 0x21b8b8: 0xc5c10008  lwc1        $f1, 0x8($t6)
    ctx->pc = 0x21b8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21b8bc:
    // 0x21b8bc: 0xc5a00008  lwc1        $f0, 0x8($t5)
    ctx->pc = 0x21b8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21b8c0:
    // 0x21b8c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21b8c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_21b8c4:
    // 0x21b8c4: 0x46000044  c1          0x44
    ctx->pc = 0x21b8c4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_21b8c8:
    // 0x21b8c8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21b8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
label_21b8cc:
    // 0x21b8cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21b8ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21b8d0:
    // 0x21b8d0: 0x0  nop
    ctx->pc = 0x21b8d0u;
    // NOP
label_21b8d4:
    // 0x21b8d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21b8d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_21b8d8:
    // 0x21b8d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21b8d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_21b8dc:
    // 0x21b8dc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x21b8dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_21b8e0:
    // 0x21b8e0: 0x0  nop
    ctx->pc = 0x21b8e0u;
    // NOP
label_21b8e4:
    // 0x21b8e4: 0xa0430005  sb          $v1, 0x5($v0)
    ctx->pc = 0x21b8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 3));
label_21b8e8:
    // 0x21b8e8: 0xa0400006  sb          $zero, 0x6($v0)
    ctx->pc = 0x21b8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6), (uint8_t)GPR_U32(ctx, 0));
label_21b8ec:
    // 0x21b8ec: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x21b8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21b8f0:
    // 0x21b8f0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x21b8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_21b8f4:
    // 0x21b8f4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x21b8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_21b8f8:
    // 0x21b8f8: 0xafa60044  sw          $a2, 0x44($sp)
    ctx->pc = 0x21b8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 6));
label_21b8fc:
    // 0x21b8fc: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x21b8fcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_21b900:
    // 0x21b900: 0xafa90050  sw          $t1, 0x50($sp)
    ctx->pc = 0x21b900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 9));
label_21b904:
    // 0x21b904: 0xafaa0054  sw          $t2, 0x54($sp)
    ctx->pc = 0x21b904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 10));
label_21b908:
    // 0x21b908: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x21b908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_21b90c:
    // 0x21b90c: 0xafa70068  sw          $a3, 0x68($sp)
    ctx->pc = 0x21b90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 7));
label_21b910:
    // 0x21b910: 0xafa8006c  sw          $t0, 0x6C($sp)
    ctx->pc = 0x21b910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 8));
label_21b914:
    // 0x21b914: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x21b914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_21b918:
    // 0x21b918: 0xafa40064  sw          $a0, 0x64($sp)
    ctx->pc = 0x21b918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
label_21b91c:
    // 0x21b91c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x21b91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_21b920:
    // 0x21b920: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x21b920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_21b924:
    // 0x21b924: 0xc08e634  jal         func_2398D0
label_21b928:
    if (ctx->pc == 0x21B928u) {
        ctx->pc = 0x21B928u;
            // 0x21b928: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x21B92Cu;
        goto label_21b92c;
    }
    ctx->pc = 0x21B924u;
    SET_GPR_U32(ctx, 31, 0x21B92Cu);
    ctx->pc = 0x21B928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B924u;
            // 0x21b928: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2398D0u;
    if (runtime->hasFunction(0x2398D0u)) {
        auto targetFn = runtime->lookupFunction(0x2398D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B92Cu; }
        if (ctx->pc != 0x21B92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002398D0_0x2398d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B92Cu; }
        if (ctx->pc != 0x21B92Cu) { return; }
    }
    ctx->pc = 0x21B92Cu;
label_21b92c:
    // 0x21b92c: 0x962201d4  lhu         $v0, 0x1D4($s1)
    ctx->pc = 0x21b92cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 468)));
label_21b930:
    // 0x21b930: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_21b934:
    if (ctx->pc == 0x21B934u) {
        ctx->pc = 0x21B934u;
            // 0x21b934: 0x960201d4  lhu         $v0, 0x1D4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 468)));
        ctx->pc = 0x21B938u;
        goto label_21b938;
    }
    ctx->pc = 0x21B930u;
    {
        const bool branch_taken_0x21b930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b930) {
            ctx->pc = 0x21B934u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21B930u;
            // 0x21b934: 0x960201d4  lhu         $v0, 0x1D4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 468)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21B948u;
            goto label_21b948;
        }
    }
    ctx->pc = 0x21B938u;
label_21b938:
    // 0x21b938: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21b938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21b93c:
    // 0x21b93c: 0xc0894d4  jal         func_225350
label_21b940:
    if (ctx->pc == 0x21B940u) {
        ctx->pc = 0x21B940u;
            // 0x21b940: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x21B944u;
        goto label_21b944;
    }
    ctx->pc = 0x21B93Cu;
    SET_GPR_U32(ctx, 31, 0x21B944u);
    ctx->pc = 0x21B940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B93Cu;
            // 0x21b940: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225350u;
    if (runtime->hasFunction(0x225350u)) {
        auto targetFn = runtime->lookupFunction(0x225350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B944u; }
        if (ctx->pc != 0x21B944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225350_0x225350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B944u; }
        if (ctx->pc != 0x21B944u) { return; }
    }
    ctx->pc = 0x21B944u;
label_21b944:
    // 0x21b944: 0x960201d4  lhu         $v0, 0x1D4($s0)
    ctx->pc = 0x21b944u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 468)));
label_21b948:
    // 0x21b948: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_21b94c:
    if (ctx->pc == 0x21B94Cu) {
        ctx->pc = 0x21B94Cu;
            // 0x21b94c: 0xc7a0005c  lwc1        $f0, 0x5C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x21B950u;
        goto label_21b950;
    }
    ctx->pc = 0x21B948u;
    {
        const bool branch_taken_0x21b948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b948) {
            ctx->pc = 0x21B94Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21B948u;
            // 0x21b94c: 0xc7a0005c  lwc1        $f0, 0x5C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x21B960u;
            goto label_21b960;
        }
    }
    ctx->pc = 0x21B950u;
label_21b950:
    // 0x21b950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21b950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21b954:
    // 0x21b954: 0xc0894d4  jal         func_225350
label_21b958:
    if (ctx->pc == 0x21B958u) {
        ctx->pc = 0x21B958u;
            // 0x21b958: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x21B95Cu;
        goto label_21b95c;
    }
    ctx->pc = 0x21B954u;
    SET_GPR_U32(ctx, 31, 0x21B95Cu);
    ctx->pc = 0x21B958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B954u;
            // 0x21b958: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225350u;
    if (runtime->hasFunction(0x225350u)) {
        auto targetFn = runtime->lookupFunction(0x225350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B95Cu; }
        if (ctx->pc != 0x21B95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225350_0x225350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B95Cu; }
        if (ctx->pc != 0x21B95Cu) { return; }
    }
    ctx->pc = 0x21B95Cu;
label_21b95c:
    // 0x21b95c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x21b95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21b960:
    // 0x21b960: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x21b960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_21b964:
    // 0x21b964: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x21b964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_21b968:
    // 0x21b968: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21b968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_21b96c:
    // 0x21b96c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21b96cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21b970:
    // 0x21b970: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21b970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21b974:
    // 0x21b974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21b974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21b978:
    // 0x21b978: 0x3e00008  jr          $ra
label_21b97c:
    if (ctx->pc == 0x21B97Cu) {
        ctx->pc = 0x21B97Cu;
            // 0x21b97c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x21B980u;
        goto label_21b980;
    }
    ctx->pc = 0x21B978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B978u;
            // 0x21b97c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B980u;
label_21b980:
    // 0x21b980: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21b980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_21b984:
    // 0x21b984: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b988:
    // 0x21b988: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21b988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_21b98c:
    // 0x21b98c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21b98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21b990:
    // 0x21b990: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21b990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21b994:
    // 0x21b994: 0x80a30018  lb          $v1, 0x18($a1)
    ctx->pc = 0x21b994u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
label_21b998:
    // 0x21b998: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_21b99c:
    if (ctx->pc == 0x21B99Cu) {
        ctx->pc = 0x21B99Cu;
            // 0x21b99c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21B9A0u;
        goto label_21b9a0;
    }
    ctx->pc = 0x21B998u;
    {
        const bool branch_taken_0x21b998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21b998) {
            ctx->pc = 0x21B99Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21B998u;
            // 0x21b99c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21B9A8u;
            goto label_21b9a8;
        }
    }
    ctx->pc = 0x21B9A0u;
label_21b9a0:
    // 0x21b9a0: 0x80a20010  lb          $v0, 0x10($a1)
    ctx->pc = 0x21b9a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_21b9a4:
    // 0x21b9a4: 0xa28021  addu        $s0, $a1, $v0
    ctx->pc = 0x21b9a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_21b9a8:
    // 0x21b9a8: 0x80c30018  lb          $v1, 0x18($a2)
    ctx->pc = 0x21b9a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 24)));
label_21b9ac:
    // 0x21b9ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b9b0:
    // 0x21b9b0: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_21b9b4:
    if (ctx->pc == 0x21B9B4u) {
        ctx->pc = 0x21B9B4u;
            // 0x21b9b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21B9B8u;
        goto label_21b9b8;
    }
    ctx->pc = 0x21B9B0u;
    {
        const bool branch_taken_0x21b9b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21b9b0) {
            ctx->pc = 0x21B9B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21B9B0u;
            // 0x21b9b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21B9C0u;
            goto label_21b9c0;
        }
    }
    ctx->pc = 0x21B9B8u;
label_21b9b8:
    // 0x21b9b8: 0x80c20010  lb          $v0, 0x10($a2)
    ctx->pc = 0x21b9b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
label_21b9bc:
    // 0x21b9bc: 0xc28821  addu        $s1, $a2, $v0
    ctx->pc = 0x21b9bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_21b9c0:
    // 0x21b9c0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x21b9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_21b9c4:
    // 0x21b9c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21b9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_21b9c8:
    // 0x21b9c8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x21b9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_21b9cc:
    // 0x21b9cc: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x21b9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
label_21b9d0:
    // 0x21b9d0: 0xa7a20030  sh          $v0, 0x30($sp)
    ctx->pc = 0x21b9d0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 2));
label_21b9d4:
    // 0x21b9d4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x21b9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_21b9d8:
    // 0x21b9d8: 0xafa80034  sw          $t0, 0x34($sp)
    ctx->pc = 0x21b9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 8));
label_21b9dc:
    // 0x21b9dc: 0xafa70048  sw          $a3, 0x48($sp)
    ctx->pc = 0x21b9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
label_21b9e0:
    // 0x21b9e0: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x21b9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
label_21b9e4:
    // 0x21b9e4: 0xc08e6bc  jal         func_239AF0
label_21b9e8:
    if (ctx->pc == 0x21B9E8u) {
        ctx->pc = 0x21B9E8u;
            // 0x21b9e8: 0xafb1003c  sw          $s1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 17));
        ctx->pc = 0x21B9ECu;
        goto label_21b9ec;
    }
    ctx->pc = 0x21B9E4u;
    SET_GPR_U32(ctx, 31, 0x21B9ECu);
    ctx->pc = 0x21B9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B9E4u;
            // 0x21b9e8: 0xafb1003c  sw          $s1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239AF0u;
    if (runtime->hasFunction(0x239AF0u)) {
        auto targetFn = runtime->lookupFunction(0x239AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B9ECu; }
        if (ctx->pc != 0x21B9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239AF0_0x239af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B9ECu; }
        if (ctx->pc != 0x21B9ECu) { return; }
    }
    ctx->pc = 0x21B9ECu;
label_21b9ec:
    // 0x21b9ec: 0x960301d4  lhu         $v1, 0x1D4($s0)
    ctx->pc = 0x21b9ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 468)));
label_21b9f0:
    // 0x21b9f0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_21b9f4:
    if (ctx->pc == 0x21B9F4u) {
        ctx->pc = 0x21B9F4u;
            // 0x21b9f4: 0x962301d4  lhu         $v1, 0x1D4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 468)));
        ctx->pc = 0x21B9F8u;
        goto label_21b9f8;
    }
    ctx->pc = 0x21B9F0u;
    {
        const bool branch_taken_0x21b9f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b9f0) {
            ctx->pc = 0x21B9F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21B9F0u;
            // 0x21b9f4: 0x962301d4  lhu         $v1, 0x1D4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 468)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21BA08u;
            goto label_21ba08;
        }
    }
    ctx->pc = 0x21B9F8u;
label_21b9f8:
    // 0x21b9f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21b9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21b9fc:
    // 0x21b9fc: 0xc08955c  jal         func_225570
label_21ba00:
    if (ctx->pc == 0x21BA00u) {
        ctx->pc = 0x21BA00u;
            // 0x21ba00: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x21BA04u;
        goto label_21ba04;
    }
    ctx->pc = 0x21B9FCu;
    SET_GPR_U32(ctx, 31, 0x21BA04u);
    ctx->pc = 0x21BA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B9FCu;
            // 0x21ba00: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225570u;
    if (runtime->hasFunction(0x225570u)) {
        auto targetFn = runtime->lookupFunction(0x225570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BA04u; }
        if (ctx->pc != 0x21BA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225570_0x225570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BA04u; }
        if (ctx->pc != 0x21BA04u) { return; }
    }
    ctx->pc = 0x21BA04u;
label_21ba04:
    // 0x21ba04: 0x962301d4  lhu         $v1, 0x1D4($s1)
    ctx->pc = 0x21ba04u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 468)));
label_21ba08:
    // 0x21ba08: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_21ba0c:
    if (ctx->pc == 0x21BA0Cu) {
        ctx->pc = 0x21BA0Cu;
            // 0x21ba0c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x21BA10u;
        goto label_21ba10;
    }
    ctx->pc = 0x21BA08u;
    {
        const bool branch_taken_0x21ba08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ba08) {
            ctx->pc = 0x21BA0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21BA08u;
            // 0x21ba0c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21BA20u;
            goto label_21ba20;
        }
    }
    ctx->pc = 0x21BA10u;
label_21ba10:
    // 0x21ba10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21ba10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21ba14:
    // 0x21ba14: 0xc08955c  jal         func_225570
label_21ba18:
    if (ctx->pc == 0x21BA18u) {
        ctx->pc = 0x21BA18u;
            // 0x21ba18: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x21BA1Cu;
        goto label_21ba1c;
    }
    ctx->pc = 0x21BA14u;
    SET_GPR_U32(ctx, 31, 0x21BA1Cu);
    ctx->pc = 0x21BA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BA14u;
            // 0x21ba18: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225570u;
    if (runtime->hasFunction(0x225570u)) {
        auto targetFn = runtime->lookupFunction(0x225570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BA1Cu; }
        if (ctx->pc != 0x21BA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225570_0x225570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BA1Cu; }
        if (ctx->pc != 0x21BA1Cu) { return; }
    }
    ctx->pc = 0x21BA1Cu;
label_21ba1c:
    // 0x21ba1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21ba1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21ba20:
    // 0x21ba20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21ba20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21ba24:
    // 0x21ba24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21ba24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21ba28:
    // 0x21ba28: 0x3e00008  jr          $ra
label_21ba2c:
    if (ctx->pc == 0x21BA2Cu) {
        ctx->pc = 0x21BA2Cu;
            // 0x21ba2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x21BA30u;
        goto label_21ba30;
    }
    ctx->pc = 0x21BA28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BA28u;
            // 0x21ba2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21BA30u;
label_21ba30:
    // 0x21ba30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x21ba30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_21ba34:
    // 0x21ba34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21ba34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_21ba38:
    // 0x21ba38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21ba38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_21ba3c:
    // 0x21ba3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21ba3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21ba40:
    // 0x21ba40: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21ba40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21ba44:
    // 0x21ba44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21ba44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21ba48:
    // 0x21ba48: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21ba48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21ba4c:
    // 0x21ba4c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x21ba4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_21ba50:
    // 0x21ba50: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x21ba50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21ba54:
    // 0x21ba54: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x21ba54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_21ba58:
    // 0x21ba58: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x21ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_21ba5c:
    // 0x21ba5c: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x21ba5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_21ba60:
    // 0x21ba60: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x21ba60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_21ba64:
    // 0x21ba64: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x21ba64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_21ba68:
    // 0x21ba68: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x21ba68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_21ba6c:
    // 0x21ba6c: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x21ba6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_21ba70:
    // 0x21ba70: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x21ba70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_21ba74:
    // 0x21ba74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ba74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21ba78:
    // 0x21ba78: 0xafa60044  sw          $a2, 0x44($sp)
    ctx->pc = 0x21ba78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 6));
label_21ba7c:
    // 0x21ba7c: 0xe7ac0054  swc1        $f12, 0x54($sp)
    ctx->pc = 0x21ba7cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_21ba80:
    // 0x21ba80: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x21ba80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
label_21ba84:
    // 0x21ba84: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x21ba84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_21ba88:
    // 0x21ba88: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x21ba88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_21ba8c:
    // 0x21ba8c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x21ba8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_21ba90:
    // 0x21ba90: 0xc08e678  jal         func_2399E0
label_21ba94:
    if (ctx->pc == 0x21BA94u) {
        ctx->pc = 0x21BA94u;
            // 0x21ba94: 0xafa00060  sw          $zero, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
        ctx->pc = 0x21BA98u;
        goto label_21ba98;
    }
    ctx->pc = 0x21BA90u;
    SET_GPR_U32(ctx, 31, 0x21BA98u);
    ctx->pc = 0x21BA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BA90u;
            // 0x21ba94: 0xafa00060  sw          $zero, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2399E0u;
    if (runtime->hasFunction(0x2399E0u)) {
        auto targetFn = runtime->lookupFunction(0x2399E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BA98u; }
        if (ctx->pc != 0x21BA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002399E0_0x2399e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BA98u; }
        if (ctx->pc != 0x21BA98u) { return; }
    }
    ctx->pc = 0x21BA98u;
label_21ba98:
    // 0x21ba98: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x21ba98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_21ba9c:
    // 0x21ba9c: 0x948301d4  lhu         $v1, 0x1D4($a0)
    ctx->pc = 0x21ba9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 468)));
label_21baa0:
    // 0x21baa0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_21baa4:
    if (ctx->pc == 0x21BAA4u) {
        ctx->pc = 0x21BAA4u;
            // 0x21baa4: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x21BAA8u;
        goto label_21baa8;
    }
    ctx->pc = 0x21BAA0u;
    {
        const bool branch_taken_0x21baa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21baa0) {
            ctx->pc = 0x21BAA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21BAA0u;
            // 0x21baa4: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21BAB4u;
            goto label_21bab4;
        }
    }
    ctx->pc = 0x21BAA8u;
label_21baa8:
    // 0x21baa8: 0xc089518  jal         func_225460
label_21baac:
    if (ctx->pc == 0x21BAACu) {
        ctx->pc = 0x21BAACu;
            // 0x21baac: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x21BAB0u;
        goto label_21bab0;
    }
    ctx->pc = 0x21BAA8u;
    SET_GPR_U32(ctx, 31, 0x21BAB0u);
    ctx->pc = 0x21BAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BAA8u;
            // 0x21baac: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225460u;
    if (runtime->hasFunction(0x225460u)) {
        auto targetFn = runtime->lookupFunction(0x225460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BAB0u; }
        if (ctx->pc != 0x21BAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225460_0x225460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BAB0u; }
        if (ctx->pc != 0x21BAB0u) { return; }
    }
    ctx->pc = 0x21BAB0u;
label_21bab0:
    // 0x21bab0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x21bab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_21bab4:
    // 0x21bab4: 0x948301d4  lhu         $v1, 0x1D4($a0)
    ctx->pc = 0x21bab4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 468)));
label_21bab8:
    // 0x21bab8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_21babc:
    if (ctx->pc == 0x21BABCu) {
        ctx->pc = 0x21BABCu;
            // 0x21babc: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x21BAC0u;
        goto label_21bac0;
    }
    ctx->pc = 0x21BAB8u;
    {
        const bool branch_taken_0x21bab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bab8) {
            ctx->pc = 0x21BABCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21BAB8u;
            // 0x21babc: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21BACCu;
            goto label_21bacc;
        }
    }
    ctx->pc = 0x21BAC0u;
label_21bac0:
    // 0x21bac0: 0xc089518  jal         func_225460
label_21bac4:
    if (ctx->pc == 0x21BAC4u) {
        ctx->pc = 0x21BAC4u;
            // 0x21bac4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x21BAC8u;
        goto label_21bac8;
    }
    ctx->pc = 0x21BAC0u;
    SET_GPR_U32(ctx, 31, 0x21BAC8u);
    ctx->pc = 0x21BAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BAC0u;
            // 0x21bac4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225460u;
    if (runtime->hasFunction(0x225460u)) {
        auto targetFn = runtime->lookupFunction(0x225460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BAC8u; }
        if (ctx->pc != 0x21BAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225460_0x225460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BAC8u; }
        if (ctx->pc != 0x21BAC8u) { return; }
    }
    ctx->pc = 0x21BAC8u;
label_21bac8:
    // 0x21bac8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x21bac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_21bacc:
    // 0x21bacc: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x21baccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_21bad0:
    // 0x21bad0: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x21bad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_21bad4:
    // 0x21bad4: 0x906400a8  lbu         $a0, 0xA8($v1)
    ctx->pc = 0x21bad4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 168)));
label_21bad8:
    // 0x21bad8: 0x38830007  xori        $v1, $a0, 0x7
    ctx->pc = 0x21bad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
label_21badc:
    // 0x21badc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x21badcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_21bae0:
    // 0x21bae0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_21bae4:
    if (ctx->pc == 0x21BAE4u) {
        ctx->pc = 0x21BAE4u;
            // 0x21bae4: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x21BAE8u;
        goto label_21bae8;
    }
    ctx->pc = 0x21BAE0u;
    {
        const bool branch_taken_0x21bae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BAE0u;
            // 0x21bae4: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bae0) {
            ctx->pc = 0x21BAFCu;
            goto label_21bafc;
        }
    }
    ctx->pc = 0x21BAE8u;
label_21bae8:
    // 0x21bae8: 0x38830006  xori        $v1, $a0, 0x6
    ctx->pc = 0x21bae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)6);
label_21baec:
    // 0x21baec: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x21baecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_21baf0:
    // 0x21baf0: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_21baf4:
    if (ctx->pc == 0x21BAF4u) {
        ctx->pc = 0x21BAF4u;
            // 0x21baf4: 0x61e3c  dsll32      $v1, $a2, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
        ctx->pc = 0x21BAF8u;
        goto label_21baf8;
    }
    ctx->pc = 0x21BAF0u;
    {
        const bool branch_taken_0x21baf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21baf0) {
            ctx->pc = 0x21BAF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21BAF0u;
            // 0x21baf4: 0x61e3c  dsll32      $v1, $a2, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21BB00u;
            goto label_21bb00;
        }
    }
    ctx->pc = 0x21BAF8u;
label_21baf8:
    // 0x21baf8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21baf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21bafc:
    // 0x21bafc: 0x61e3c  dsll32      $v1, $a2, 24
    ctx->pc = 0x21bafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
label_21bb00:
    // 0x21bb00: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x21bb00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_21bb04:
    // 0x21bb04: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_21bb08:
    if (ctx->pc == 0x21BB08u) {
        ctx->pc = 0x21BB08u;
            // 0x21bb08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21BB0Cu;
        goto label_21bb0c;
    }
    ctx->pc = 0x21BB04u;
    {
        const bool branch_taken_0x21bb04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bb04) {
            ctx->pc = 0x21BB08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21BB04u;
            // 0x21bb08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21BB48u;
            goto label_21bb48;
        }
    }
    ctx->pc = 0x21BB0Cu;
label_21bb0c:
    // 0x21bb0c: 0x90a400a8  lbu         $a0, 0xA8($a1)
    ctx->pc = 0x21bb0cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 168)));
label_21bb10:
    // 0x21bb10: 0x38830007  xori        $v1, $a0, 0x7
    ctx->pc = 0x21bb10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
label_21bb14:
    // 0x21bb14: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x21bb14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_21bb18:
    // 0x21bb18: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_21bb1c:
    if (ctx->pc == 0x21BB1Cu) {
        ctx->pc = 0x21BB1Cu;
            // 0x21bb1c: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x21BB20u;
        goto label_21bb20;
    }
    ctx->pc = 0x21BB18u;
    {
        const bool branch_taken_0x21bb18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BB18u;
            // 0x21bb1c: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bb18) {
            ctx->pc = 0x21BB34u;
            goto label_21bb34;
        }
    }
    ctx->pc = 0x21BB20u;
label_21bb20:
    // 0x21bb20: 0x38830006  xori        $v1, $a0, 0x6
    ctx->pc = 0x21bb20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)6);
label_21bb24:
    // 0x21bb24: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x21bb24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_21bb28:
    // 0x21bb28: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_21bb2c:
    if (ctx->pc == 0x21BB2Cu) {
        ctx->pc = 0x21BB2Cu;
            // 0x21bb2c: 0x51e3c  dsll32      $v1, $a1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
        ctx->pc = 0x21BB30u;
        goto label_21bb30;
    }
    ctx->pc = 0x21BB28u;
    {
        const bool branch_taken_0x21bb28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bb28) {
            ctx->pc = 0x21BB2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21BB28u;
            // 0x21bb2c: 0x51e3c  dsll32      $v1, $a1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21BB38u;
            goto label_21bb38;
        }
    }
    ctx->pc = 0x21BB30u;
label_21bb30:
    // 0x21bb30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21bb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21bb34:
    // 0x21bb34: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x21bb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
label_21bb38:
    // 0x21bb38: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x21bb38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_21bb3c:
    // 0x21bb3c: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_21bb40:
    if (ctx->pc == 0x21BB40u) {
        ctx->pc = 0x21BB40u;
            // 0x21bb40: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x21BB44u;
        goto label_21bb44;
    }
    ctx->pc = 0x21BB3Cu;
    {
        const bool branch_taken_0x21bb3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bb3c) {
            ctx->pc = 0x21BB40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21BB3Cu;
            // 0x21bb40: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21BB58u;
            goto label_21bb58;
        }
    }
    ctx->pc = 0x21BB44u;
label_21bb44:
    // 0x21bb44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21bb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21bb48:
    // 0x21bb48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21bb48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21bb4c:
    // 0x21bb4c: 0xc09f8e4  jal         func_27E390
label_21bb50:
    if (ctx->pc == 0x21BB50u) {
        ctx->pc = 0x21BB50u;
            // 0x21bb50: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21BB54u;
        goto label_21bb54;
    }
    ctx->pc = 0x21BB4Cu;
    SET_GPR_U32(ctx, 31, 0x21BB54u);
    ctx->pc = 0x21BB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BB4Cu;
            // 0x21bb50: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27E390u;
    if (runtime->hasFunction(0x27E390u)) {
        auto targetFn = runtime->lookupFunction(0x27E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BB54u; }
        if (ctx->pc != 0x21BB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027E390_0x27e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BB54u; }
        if (ctx->pc != 0x21BB54u) { return; }
    }
    ctx->pc = 0x21BB54u;
label_21bb54:
    // 0x21bb54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21bb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_21bb58:
    // 0x21bb58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21bb58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21bb5c:
    // 0x21bb5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21bb5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21bb60:
    // 0x21bb60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21bb60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21bb64:
    // 0x21bb64: 0x3e00008  jr          $ra
label_21bb68:
    if (ctx->pc == 0x21BB68u) {
        ctx->pc = 0x21BB68u;
            // 0x21bb68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x21BB6Cu;
        goto label_21bb6c;
    }
    ctx->pc = 0x21BB64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BB64u;
            // 0x21bb68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21BB6Cu;
label_21bb6c:
    // 0x21bb6c: 0x0  nop
    ctx->pc = 0x21bb6cu;
    // NOP
label_21bb70:
    // 0x21bb70: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x21bb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_21bb74:
    // 0x21bb74: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x21bb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_21bb78:
    // 0x21bb78: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x21bb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_21bb7c:
    // 0x21bb7c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x21bb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_21bb80:
    // 0x21bb80: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x21bb80u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_21bb84:
    // 0x21bb84: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x21bb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_21bb88:
    // 0x21bb88: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x21bb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_21bb8c:
    // 0x21bb8c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x21bb8cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21bb90:
    // 0x21bb90: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x21bb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_21bb94:
    // 0x21bb94: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x21bb94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21bb98:
    // 0x21bb98: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x21bb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_21bb9c:
    // 0x21bb9c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x21bb9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21bba0:
    // 0x21bba0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x21bba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_21bba4:
    // 0x21bba4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x21bba4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_21bba8:
    // 0x21bba8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x21bba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_21bbac:
    // 0x21bbac: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x21bbacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_21bbb0:
    // 0x21bbb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21bbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_21bbb4:
    // 0x21bbb4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x21bbb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_21bbb8:
    // 0x21bbb8: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x21bbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_21bbbc:
    // 0x21bbbc: 0x94820010  lhu         $v0, 0x10($a0)
    ctx->pc = 0x21bbbcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
label_21bbc0:
    // 0x21bbc0: 0x94640004  lhu         $a0, 0x4($v1)
    ctx->pc = 0x21bbc0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_21bbc4:
    // 0x21bbc4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x21bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_21bbc8:
    // 0x21bbc8: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x21bbc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
label_21bbcc:
    // 0x21bbcc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_21bbd0:
    if (ctx->pc == 0x21BBD0u) {
        ctx->pc = 0x21BBD0u;
            // 0x21bbd0: 0xafa900bc  sw          $t1, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 9));
        ctx->pc = 0x21BBD4u;
        goto label_21bbd4;
    }
    ctx->pc = 0x21BBCCu;
    {
        const bool branch_taken_0x21bbcc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BBCCu;
            // 0x21bbd0: 0xafa900bc  sw          $t1, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bbcc) {
            ctx->pc = 0x21BBDCu;
            goto label_21bbdc;
        }
    }
    ctx->pc = 0x21BBD4u;
label_21bbd4:
    // 0x21bbd4: 0x10000113  b           . + 4 + (0x113 << 2)
label_21bbd8:
    if (ctx->pc == 0x21BBD8u) {
        ctx->pc = 0x21BBD8u;
            // 0x21bbd8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x21BBDCu;
        goto label_21bbdc;
    }
    ctx->pc = 0x21BBD4u;
    {
        const bool branch_taken_0x21bbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BBD4u;
            // 0x21bbd8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bbd4) {
            ctx->pc = 0x21C024u;
            goto label_21c024;
        }
    }
    ctx->pc = 0x21BBDCu;
label_21bbdc:
    // 0x21bbdc: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x21bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_21bbe0:
    // 0x21bbe0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_21bbe4:
    if (ctx->pc == 0x21BBE4u) {
        ctx->pc = 0x21BBE4u;
            // 0x21bbe4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21BBE8u;
        goto label_21bbe8;
    }
    ctx->pc = 0x21BBE0u;
    {
        const bool branch_taken_0x21bbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BBE0u;
            // 0x21bbe4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bbe0) {
            ctx->pc = 0x21BC08u;
            goto label_21bc08;
        }
    }
    ctx->pc = 0x21BBE8u;
label_21bbe8:
    // 0x21bbe8: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x21bbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_21bbec:
    // 0x21bbec: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x21bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_21bbf0:
    // 0x21bbf0: 0x0  nop
    ctx->pc = 0x21bbf0u;
    // NOP
label_21bbf4:
    // 0x21bbf4: 0x0  nop
    ctx->pc = 0x21bbf4u;
    // NOP
label_21bbf8:
    // 0x21bbf8: 0x0  nop
    ctx->pc = 0x21bbf8u;
    // NOP
label_21bbfc:
    // 0x21bbfc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_21bc00:
    if (ctx->pc == 0x21BC00u) {
        ctx->pc = 0x21BC04u;
        goto label_21bc04;
    }
    ctx->pc = 0x21BBFCu;
    {
        const bool branch_taken_0x21bbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bbfc) {
            ctx->pc = 0x21BBE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21bbe8;
        }
    }
    ctx->pc = 0x21BC04u;
label_21bc04:
    // 0x21bc04: 0x0  nop
    ctx->pc = 0x21bc04u;
    // NOP
label_21bc08:
    // 0x21bc08: 0x80c30010  lb          $v1, 0x10($a2)
    ctx->pc = 0x21bc08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
label_21bc0c:
    // 0x21bc0c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x21bc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_21bc10:
    // 0x21bc10: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x21bc10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_21bc14:
    // 0x21bc14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_21bc18:
    if (ctx->pc == 0x21BC18u) {
        ctx->pc = 0x21BC18u;
            // 0x21bc18: 0xc38821  addu        $s1, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->pc = 0x21BC1Cu;
        goto label_21bc1c;
    }
    ctx->pc = 0x21BC14u;
    {
        const bool branch_taken_0x21bc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BC14u;
            // 0x21bc18: 0xc38821  addu        $s1, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bc14) {
            ctx->pc = 0x21BC38u;
            goto label_21bc38;
        }
    }
    ctx->pc = 0x21BC1Cu;
label_21bc1c:
    // 0x21bc1c: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x21bc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_21bc20:
    // 0x21bc20: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x21bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_21bc24:
    // 0x21bc24: 0x0  nop
    ctx->pc = 0x21bc24u;
    // NOP
label_21bc28:
    // 0x21bc28: 0x0  nop
    ctx->pc = 0x21bc28u;
    // NOP
label_21bc2c:
    // 0x21bc2c: 0x0  nop
    ctx->pc = 0x21bc2cu;
    // NOP
label_21bc30:
    // 0x21bc30: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_21bc34:
    if (ctx->pc == 0x21BC34u) {
        ctx->pc = 0x21BC38u;
        goto label_21bc38;
    }
    ctx->pc = 0x21BC30u;
    {
        const bool branch_taken_0x21bc30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bc30) {
            ctx->pc = 0x21BC1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21bc1c;
        }
    }
    ctx->pc = 0x21BC38u;
label_21bc38:
    // 0x21bc38: 0x80a20010  lb          $v0, 0x10($a1)
    ctx->pc = 0x21bc38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_21bc3c:
    // 0x21bc3c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_21bc40:
    if (ctx->pc == 0x21BC40u) {
        ctx->pc = 0x21BC40u;
            // 0x21bc40: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x21BC44u;
        goto label_21bc44;
    }
    ctx->pc = 0x21BC3Cu;
    {
        const bool branch_taken_0x21bc3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BC3Cu;
            // 0x21bc40: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bc3c) {
            ctx->pc = 0x21BC58u;
            goto label_21bc58;
        }
    }
    ctx->pc = 0x21BC44u;
label_21bc44:
    // 0x21bc44: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x21bc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_21bc48:
    // 0x21bc48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x21bc48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_21bc4c:
    // 0x21bc4c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x21bc4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_21bc50:
    // 0x21bc50: 0x320f809  jalr        $t9
label_21bc54:
    if (ctx->pc == 0x21BC54u) {
        ctx->pc = 0x21BC54u;
            // 0x21bc54: 0x26a50044  addiu       $a1, $s5, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 68));
        ctx->pc = 0x21BC58u;
        goto label_21bc58;
    }
    ctx->pc = 0x21BC50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x21BC58u);
        ctx->pc = 0x21BC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BC50u;
            // 0x21bc54: 0x26a50044  addiu       $a1, $s5, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 68));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21BC58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21BC58u; }
            if (ctx->pc != 0x21BC58u) { return; }
        }
        }
    }
    ctx->pc = 0x21BC58u;
label_21bc58:
    // 0x21bc58: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x21bc58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_21bc5c:
    // 0x21bc5c: 0x26a40014  addiu       $a0, $s5, 0x14
    ctx->pc = 0x21bc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
label_21bc60:
    // 0x21bc60: 0x27a600f8  addiu       $a2, $sp, 0xF8
    ctx->pc = 0x21bc60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_21bc64:
    // 0x21bc64: 0xc0879c4  jal         func_21E710
label_21bc68:
    if (ctx->pc == 0x21BC68u) {
        ctx->pc = 0x21BC68u;
            // 0x21bc68: 0x27a700fc  addiu       $a3, $sp, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
        ctx->pc = 0x21BC6Cu;
        goto label_21bc6c;
    }
    ctx->pc = 0x21BC64u;
    SET_GPR_U32(ctx, 31, 0x21BC6Cu);
    ctx->pc = 0x21BC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BC64u;
            // 0x21bc68: 0x27a700fc  addiu       $a3, $sp, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E710u;
    if (runtime->hasFunction(0x21E710u)) {
        auto targetFn = runtime->lookupFunction(0x21E710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BC6Cu; }
        if (ctx->pc != 0x21BC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021E710_0x21e710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BC6Cu; }
        if (ctx->pc != 0x21BC6Cu) { return; }
    }
    ctx->pc = 0x21BC6Cu;
label_21bc6c:
    // 0x21bc6c: 0x3057ffff  andi        $s7, $v0, 0xFFFF
    ctx->pc = 0x21bc6cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_21bc70:
    // 0x21bc70: 0x26270058  addiu       $a3, $s1, 0x58
    ctx->pc = 0x21bc70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_21bc74:
    // 0x21bc74: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x21bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_21bc78:
    // 0x21bc78: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x21bc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21bc7c:
    // 0x21bc7c: 0x26060058  addiu       $a2, $s0, 0x58
    ctx->pc = 0x21bc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_21bc80:
    // 0x21bc80: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x21bc80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_21bc84:
    // 0x21bc84: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x21bc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21bc88:
    // 0x21bc88: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x21bc88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_21bc8c:
    // 0x21bc8c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x21bc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21bc90:
    // 0x21bc90: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x21bc90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_21bc94:
    // 0x21bc94: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x21bc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21bc98:
    // 0x21bc98: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x21bc98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_21bc9c:
    // 0x21bc9c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x21bc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21bca0:
    // 0x21bca0: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x21bca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_21bca4:
    // 0x21bca4: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x21bca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21bca8:
    // 0x21bca8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x21bca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_21bcac:
    // 0x21bcac: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x21bcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21bcb0:
    // 0x21bcb0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x21bcb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_21bcb4:
    // 0x21bcb4: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x21bcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21bcb8:
    // 0x21bcb8: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x21bcb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_21bcbc:
    // 0x21bcbc: 0xc64d0000  lwc1        $f13, 0x0($s2)
    ctx->pc = 0x21bcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_21bcc0:
    // 0x21bcc0: 0xc6210100  lwc1        $f1, 0x100($s1)
    ctx->pc = 0x21bcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21bcc4:
    // 0x21bcc4: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x21bcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_21bcc8:
    // 0x21bcc8: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x21bcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21bccc:
    // 0x21bccc: 0x460169c1  sub.s       $f7, $f13, $f1
    ctx->pc = 0x21bcccu;
    ctx->f[7] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
label_21bcd0:
    // 0x21bcd0: 0x46006181  sub.s       $f6, $f12, $f0
    ctx->pc = 0x21bcd0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_21bcd4:
    // 0x21bcd4: 0xc64b0008  lwc1        $f11, 0x8($s2)
    ctx->pc = 0x21bcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_21bcd8:
    // 0x21bcd8: 0xc6210108  lwc1        $f1, 0x108($s1)
    ctx->pc = 0x21bcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21bcdc:
    // 0x21bcdc: 0xc6250194  lwc1        $f5, 0x194($s1)
    ctx->pc = 0x21bcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_21bce0:
    // 0x21bce0: 0xc6200198  lwc1        $f0, 0x198($s1)
    ctx->pc = 0x21bce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21bce4:
    // 0x21bce4: 0x46015881  sub.s       $f2, $f11, $f1
    ctx->pc = 0x21bce4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[11], ctx->f[1]);
label_21bce8:
    // 0x21bce8: 0x4602281a  mula.s      $f5, $f2
    ctx->pc = 0x21bce8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_21bcec:
    // 0x21bcec: 0x4606011d  msub.s      $f4, $f0, $f6
    ctx->pc = 0x21bcecu;
    ctx->f[4] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[6]));
label_21bcf0:
    // 0x21bcf0: 0xc6210180  lwc1        $f1, 0x180($s1)
    ctx->pc = 0x21bcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21bcf4:
    // 0x21bcf4: 0x4607001a  mula.s      $f0, $f7
    ctx->pc = 0x21bcf4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_21bcf8:
    // 0x21bcf8: 0xc6230190  lwc1        $f3, 0x190($s1)
    ctx->pc = 0x21bcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_21bcfc:
    // 0x21bcfc: 0x46012280  add.s       $f10, $f4, $f1
    ctx->pc = 0x21bcfcu;
    ctx->f[10] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_21bd00:
    // 0x21bd00: 0x4602189d  msub.s      $f2, $f3, $f2
    ctx->pc = 0x21bd00u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_21bd04:
    // 0x21bd04: 0xc6200184  lwc1        $f0, 0x184($s1)
    ctx->pc = 0x21bd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21bd08:
    // 0x21bd08: 0x4606181a  mula.s      $f3, $f6
    ctx->pc = 0x21bd08u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
label_21bd0c:
    // 0x21bd0c: 0x460728dd  msub.s      $f3, $f5, $f7
    ctx->pc = 0x21bd0cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[7]));
label_21bd10:
    // 0x21bd10: 0x46001240  add.s       $f9, $f2, $f0
    ctx->pc = 0x21bd10u;
    ctx->f[9] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_21bd14:
    // 0x21bd14: 0xc6010100  lwc1        $f1, 0x100($s0)
    ctx->pc = 0x21bd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21bd18:
    // 0x21bd18: 0xc6220188  lwc1        $f2, 0x188($s1)
    ctx->pc = 0x21bd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21bd1c:
    // 0x21bd1c: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x21bd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21bd20:
    // 0x21bd20: 0x460169c1  sub.s       $f7, $f13, $f1
    ctx->pc = 0x21bd20u;
    ctx->f[7] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
label_21bd24:
    // 0x21bd24: 0x46021a00  add.s       $f8, $f3, $f2
    ctx->pc = 0x21bd24u;
    ctx->f[8] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_21bd28:
    // 0x21bd28: 0xc6010108  lwc1        $f1, 0x108($s0)
    ctx->pc = 0x21bd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21bd2c:
    // 0x21bd2c: 0x46006181  sub.s       $f6, $f12, $f0
    ctx->pc = 0x21bd2cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_21bd30:
    // 0x21bd30: 0x460158c1  sub.s       $f3, $f11, $f1
    ctx->pc = 0x21bd30u;
    ctx->f[3] = FPU_SUB_S(ctx->f[11], ctx->f[1]);
label_21bd34:
    // 0x21bd34: 0xc6050194  lwc1        $f5, 0x194($s0)
    ctx->pc = 0x21bd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_21bd38:
    // 0x21bd38: 0xc6000198  lwc1        $f0, 0x198($s0)
    ctx->pc = 0x21bd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21bd3c:
    // 0x21bd3c: 0xc6020190  lwc1        $f2, 0x190($s0)
    ctx->pc = 0x21bd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21bd40:
    // 0x21bd40: 0x4603281a  mula.s      $f5, $f3
    ctx->pc = 0x21bd40u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_21bd44:
    // 0x21bd44: 0x4606011d  msub.s      $f4, $f0, $f6
    ctx->pc = 0x21bd44u;
    ctx->f[4] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[6]));
label_21bd48:
    // 0x21bd48: 0x4607001a  mula.s      $f0, $f7
    ctx->pc = 0x21bd48u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_21bd4c:
    // 0x21bd4c: 0x460310dd  msub.s      $f3, $f2, $f3
    ctx->pc = 0x21bd4cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_21bd50:
    // 0x21bd50: 0x4606101a  mula.s      $f2, $f6
    ctx->pc = 0x21bd50u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_21bd54:
    // 0x21bd54: 0xc6000184  lwc1        $f0, 0x184($s0)
    ctx->pc = 0x21bd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21bd58:
    // 0x21bd58: 0xc6010180  lwc1        $f1, 0x180($s0)
    ctx->pc = 0x21bd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21bd5c:
    // 0x21bd5c: 0x4607289d  msub.s      $f2, $f5, $f7
    ctx->pc = 0x21bd5cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[7]));
label_21bd60:
    // 0x21bd60: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x21bd60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_21bd64:
    // 0x21bd64: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x21bd64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_21bd68:
    // 0x21bd68: 0x460048c1  sub.s       $f3, $f9, $f0
    ctx->pc = 0x21bd68u;
    ctx->f[3] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
label_21bd6c:
    // 0x21bd6c: 0xc6000188  lwc1        $f0, 0x188($s0)
    ctx->pc = 0x21bd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21bd70:
    // 0x21bd70: 0x46015141  sub.s       $f5, $f10, $f1
    ctx->pc = 0x21bd70u;
    ctx->f[5] = FPU_SUB_S(ctx->f[10], ctx->f[1]);
label_21bd74:
    // 0x21bd74: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x21bd74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_21bd78:
    // 0x21bd78: 0x460041c1  sub.s       $f7, $f8, $f0
    ctx->pc = 0x21bd78u;
    ctx->f[7] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
label_21bd7c:
    // 0x21bd7c: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x21bd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21bd80:
    // 0x21bd80: 0xc621005c  lwc1        $f1, 0x5C($s1)
    ctx->pc = 0x21bd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21bd84:
    // 0x21bd84: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x21bd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21bd88:
    // 0x21bd88: 0xc6440010  lwc1        $f4, 0x10($s2)
    ctx->pc = 0x21bd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_21bd8c:
    // 0x21bd8c: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x21bd8cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_21bd90:
    // 0x21bd90: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21bd90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_21bd94:
    // 0x21bd94: 0xc6460018  lwc1        $f6, 0x18($s2)
    ctx->pc = 0x21bd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_21bd98:
    // 0x21bd98: 0x4604281e  madda.s     $f5, $f4
    ctx->pc = 0x21bd98u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_21bd9c:
    // 0x21bd9c: 0x46063d1c  madd.s      $f20, $f7, $f6
    ctx->pc = 0x21bd9cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[6]));
label_21bda0:
    // 0x21bda0: 0x46000004  c1          0x4
    ctx->pc = 0x21bda0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_21bda4:
    // 0x21bda4: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x21bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_21bda8:
    // 0x21bda8: 0x3c0a0064  lui         $t2, 0x64
    ctx->pc = 0x21bda8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)100 << 16));
label_21bdac:
    // 0x21bdac: 0x3c090064  lui         $t1, 0x64
    ctx->pc = 0x21bdacu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)100 << 16));
label_21bdb0:
    // 0x21bdb0: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x21bdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_21bdb4:
    // 0x21bdb4: 0x254a0970  addiu       $t2, $t2, 0x970
    ctx->pc = 0x21bdb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2416));
label_21bdb8:
    // 0x21bdb8: 0x25290d70  addiu       $t1, $t1, 0xD70
    ctx->pc = 0x21bdb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3440));
label_21bdbc:
    // 0x21bdbc: 0x24630b70  addiu       $v1, $v1, 0xB70
    ctx->pc = 0x21bdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2928));
label_21bdc0:
    // 0x21bdc0: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x21bdc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_21bdc4:
    // 0x21bdc4: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x21bdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_21bdc8:
    // 0x21bdc8: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x21bdc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_21bdcc:
    // 0x21bdcc: 0x8fa400f4  lw          $a0, 0xF4($sp)
    ctx->pc = 0x21bdccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_21bdd0:
    // 0x21bdd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21bdd4:
    // 0x21bdd4: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x21bdd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_21bdd8:
    // 0x21bdd8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_21bddc:
    if (ctx->pc == 0x21BDDCu) {
        ctx->pc = 0x21BDE0u;
        goto label_21bde0;
    }
    ctx->pc = 0x21BDD8u;
    {
        const bool branch_taken_0x21bdd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bdd8) {
            ctx->pc = 0x21BDE8u;
            goto label_21bde8;
        }
    }
    ctx->pc = 0x21BDE0u;
label_21bde0:
    // 0x21bde0: 0x10000003  b           . + 4 + (0x3 << 2)
label_21bde4:
    if (ctx->pc == 0x21BDE4u) {
        ctx->pc = 0x21BDE4u;
            // 0x21bde4: 0x60502d  daddu       $t2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21BDE8u;
        goto label_21bde8;
    }
    ctx->pc = 0x21BDE0u;
    {
        const bool branch_taken_0x21bde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BDE0u;
            // 0x21bde4: 0x60502d  daddu       $t2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bde0) {
            ctx->pc = 0x21BDF0u;
            goto label_21bdf0;
        }
    }
    ctx->pc = 0x21BDE8u;
label_21bde8:
    // 0x21bde8: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x21bde8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_21bdec:
    // 0x21bdec: 0x0  nop
    ctx->pc = 0x21bdecu;
    // NOP
label_21bdf0:
    // 0x21bdf0: 0xa1842  srl         $v1, $t2, 1
    ctx->pc = 0x21bdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
label_21bdf4:
    // 0x21bdf4: 0x91042  srl         $v0, $t1, 1
    ctx->pc = 0x21bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
label_21bdf8:
    // 0x21bdf8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x21bdf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_21bdfc:
    // 0x21bdfc: 0x501fff4  bgez        $t0, . + 4 + (-0xC << 2)
label_21be00:
    if (ctx->pc == 0x21BE00u) {
        ctx->pc = 0x21BE00u;
            // 0x21be00: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x21BE04u;
        goto label_21be04;
    }
    ctx->pc = 0x21BDFCu;
    {
        const bool branch_taken_0x21bdfc = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x21BE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BDFCu;
            // 0x21be00: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bdfc) {
            ctx->pc = 0x21BDD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21bdd0;
        }
    }
    ctx->pc = 0x21BE04u;
label_21be04:
    // 0x21be04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21be04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21be08:
    // 0x21be08: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x21be08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_21be0c:
    // 0x21be0c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_21be10:
    if (ctx->pc == 0x21BE10u) {
        ctx->pc = 0x21BE14u;
        goto label_21be14;
    }
    ctx->pc = 0x21BE0Cu;
    {
        const bool branch_taken_0x21be0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21be0c) {
            ctx->pc = 0x21BE18u;
            goto label_21be18;
        }
    }
    ctx->pc = 0x21BE14u;
label_21be14:
    // 0x21be14: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x21be14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_21be18:
    // 0x21be18: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x21be18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_21be1c:
    // 0x21be1c: 0x24420970  addiu       $v0, $v0, 0x970
    ctx->pc = 0x21be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2416));
label_21be20:
    // 0x21be20: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x21be20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21be24:
    // 0x21be24: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_21be28:
    if (ctx->pc == 0x21BE28u) {
        ctx->pc = 0x21BE28u;
            // 0x21be28: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->pc = 0x21BE2Cu;
        goto label_21be2c;
    }
    ctx->pc = 0x21BE24u;
    {
        const bool branch_taken_0x21be24 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x21BE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BE24u;
            // 0x21be28: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21be24) {
            ctx->pc = 0x21BE34u;
            goto label_21be34;
        }
    }
    ctx->pc = 0x21BE2Cu;
label_21be2c:
    // 0x21be2c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x21be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_21be30:
    // 0x21be30: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x21be30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_21be34:
    // 0x21be34: 0xa0a20004  sb          $v0, 0x4($a1)
    ctx->pc = 0x21be34u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 2));
label_21be38:
    // 0x21be38: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x21be38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21be3c:
    // 0x21be3c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x21be3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21be40:
    // 0x21be40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21be40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_21be44:
    // 0x21be44: 0x46000044  c1          0x44
    ctx->pc = 0x21be44u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_21be48:
    // 0x21be48: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21be48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
label_21be4c:
    // 0x21be4c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x21be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_21be50:
    // 0x21be50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21be50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21be54:
    // 0x21be54: 0x0  nop
    ctx->pc = 0x21be54u;
    // NOP
label_21be58:
    // 0x21be58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21be58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_21be5c:
    // 0x21be5c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21be5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_21be60:
    // 0x21be60: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x21be60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_21be64:
    // 0x21be64: 0x0  nop
    ctx->pc = 0x21be64u;
    // NOP
label_21be68:
    // 0x21be68: 0xa043000d  sb          $v1, 0xD($v0)
    ctx->pc = 0x21be68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 13), (uint8_t)GPR_U32(ctx, 3));
label_21be6c:
    // 0x21be6c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x21be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_21be70:
    // 0x21be70: 0xa040000e  sb          $zero, 0xE($v0)
    ctx->pc = 0x21be70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 14), (uint8_t)GPR_U32(ctx, 0));
label_21be74:
    // 0x21be74: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x21be74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_21be78:
    // 0x21be78: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x21be78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_21be7c:
    // 0x21be7c: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x21be7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_21be80:
    // 0x21be80: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_21be84:
    if (ctx->pc == 0x21BE84u) {
        ctx->pc = 0x21BE84u;
            // 0x21be84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x21BE88u;
        goto label_21be88;
    }
    ctx->pc = 0x21BE80u;
    {
        const bool branch_taken_0x21be80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21be80) {
            ctx->pc = 0x21BE84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21BE80u;
            // 0x21be84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21BE90u;
            goto label_21be90;
        }
    }
    ctx->pc = 0x21BE88u;
label_21be88:
    // 0x21be88: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x21be88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_21be8c:
    // 0x21be8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21be90:
    // 0x21be90: 0xafb600c0  sw          $s6, 0xC0($sp)
    ctx->pc = 0x21be90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 22));
label_21be94:
    // 0x21be94: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x21be94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_21be98:
    // 0x21be98: 0xe7b400dc  swc1        $f20, 0xDC($sp)
    ctx->pc = 0x21be98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_21be9c:
    // 0x21be9c: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x21be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_21bea0:
    // 0x21bea0: 0xafb400c4  sw          $s4, 0xC4($sp)
    ctx->pc = 0x21bea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 20));
label_21bea4:
    // 0x21bea4: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x21bea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
label_21bea8:
    // 0x21bea8: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x21bea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_21beac:
    // 0x21beac: 0xafbe00e8  sw          $fp, 0xE8($sp)
    ctx->pc = 0x21beacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 30));
label_21beb0:
    // 0x21beb0: 0xafb200d0  sw          $s2, 0xD0($sp)
    ctx->pc = 0x21beb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 18));
label_21beb4:
    // 0x21beb4: 0xafb500e4  sw          $s5, 0xE4($sp)
    ctx->pc = 0x21beb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 21));
label_21beb8:
    // 0x21beb8: 0xafb300ec  sw          $s3, 0xEC($sp)
    ctx->pc = 0x21beb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 19));
label_21bebc:
    // 0x21bebc: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x21bebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_21bec0:
    // 0x21bec0: 0xa7b700f0  sh          $s7, 0xF0($sp)
    ctx->pc = 0x21bec0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 23));
label_21bec4:
    // 0x21bec4: 0xa7a000f2  sh          $zero, 0xF2($sp)
    ctx->pc = 0x21bec4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 242), (uint16_t)GPR_U32(ctx, 0));
label_21bec8:
    // 0x21bec8: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x21bec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_21becc:
    // 0x21becc: 0xc08e634  jal         func_2398D0
label_21bed0:
    if (ctx->pc == 0x21BED0u) {
        ctx->pc = 0x21BED0u;
            // 0x21bed0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x21BED4u;
        goto label_21bed4;
    }
    ctx->pc = 0x21BECCu;
    SET_GPR_U32(ctx, 31, 0x21BED4u);
    ctx->pc = 0x21BED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BECCu;
            // 0x21bed0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2398D0u;
    if (runtime->hasFunction(0x2398D0u)) {
        auto targetFn = runtime->lookupFunction(0x2398D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BED4u; }
        if (ctx->pc != 0x21BED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002398D0_0x2398d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BED4u; }
        if (ctx->pc != 0x21BED4u) { return; }
    }
    ctx->pc = 0x21BED4u;
label_21bed4:
    // 0x21bed4: 0x962201d4  lhu         $v0, 0x1D4($s1)
    ctx->pc = 0x21bed4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 468)));
label_21bed8:
    // 0x21bed8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_21bedc:
    if (ctx->pc == 0x21BEDCu) {
        ctx->pc = 0x21BEDCu;
            // 0x21bedc: 0x960201d4  lhu         $v0, 0x1D4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 468)));
        ctx->pc = 0x21BEE0u;
        goto label_21bee0;
    }
    ctx->pc = 0x21BED8u;
    {
        const bool branch_taken_0x21bed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bed8) {
            ctx->pc = 0x21BEDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21BED8u;
            // 0x21bedc: 0x960201d4  lhu         $v0, 0x1D4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 468)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21BEF0u;
            goto label_21bef0;
        }
    }
    ctx->pc = 0x21BEE0u;
label_21bee0:
    // 0x21bee0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21bee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21bee4:
    // 0x21bee4: 0xc0894d4  jal         func_225350
label_21bee8:
    if (ctx->pc == 0x21BEE8u) {
        ctx->pc = 0x21BEE8u;
            // 0x21bee8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x21BEECu;
        goto label_21beec;
    }
    ctx->pc = 0x21BEE4u;
    SET_GPR_U32(ctx, 31, 0x21BEECu);
    ctx->pc = 0x21BEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BEE4u;
            // 0x21bee8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225350u;
    if (runtime->hasFunction(0x225350u)) {
        auto targetFn = runtime->lookupFunction(0x225350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BEECu; }
        if (ctx->pc != 0x21BEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225350_0x225350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BEECu; }
        if (ctx->pc != 0x21BEECu) { return; }
    }
    ctx->pc = 0x21BEECu;
label_21beec:
    // 0x21beec: 0x960201d4  lhu         $v0, 0x1D4($s0)
    ctx->pc = 0x21beecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 468)));
label_21bef0:
    // 0x21bef0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_21bef4:
    if (ctx->pc == 0x21BEF4u) {
        ctx->pc = 0x21BEF4u;
            // 0x21bef4: 0x8fa300e0  lw          $v1, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->pc = 0x21BEF8u;
        goto label_21bef8;
    }
    ctx->pc = 0x21BEF0u;
    {
        const bool branch_taken_0x21bef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bef0) {
            ctx->pc = 0x21BEF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21BEF0u;
            // 0x21bef4: 0x8fa300e0  lw          $v1, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21BF08u;
            goto label_21bf08;
        }
    }
    ctx->pc = 0x21BEF8u;
label_21bef8:
    // 0x21bef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21bef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21befc:
    // 0x21befc: 0xc0894d4  jal         func_225350
label_21bf00:
    if (ctx->pc == 0x21BF00u) {
        ctx->pc = 0x21BF00u;
            // 0x21bf00: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x21BF04u;
        goto label_21bf04;
    }
    ctx->pc = 0x21BEFCu;
    SET_GPR_U32(ctx, 31, 0x21BF04u);
    ctx->pc = 0x21BF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BEFCu;
            // 0x21bf00: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225350u;
    if (runtime->hasFunction(0x225350u)) {
        auto targetFn = runtime->lookupFunction(0x225350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BF04u; }
        if (ctx->pc != 0x21BF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225350_0x225350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BF04u; }
        if (ctx->pc != 0x21BF04u) { return; }
    }
    ctx->pc = 0x21BF04u;
label_21bf04:
    // 0x21bf04: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x21bf04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_21bf08:
    // 0x21bf08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21bf0c:
    // 0x21bf0c: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_21bf10:
    if (ctx->pc == 0x21BF10u) {
        ctx->pc = 0x21BF10u;
            // 0x21bf10: 0x97a200f2  lhu         $v0, 0xF2($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 242)));
        ctx->pc = 0x21BF14u;
        goto label_21bf14;
    }
    ctx->pc = 0x21BF0Cu;
    {
        const bool branch_taken_0x21bf0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21bf0c) {
            ctx->pc = 0x21BF10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21BF0Cu;
            // 0x21bf10: 0x97a200f2  lhu         $v0, 0xF2($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 242)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21BF34u;
            goto label_21bf34;
        }
    }
    ctx->pc = 0x21BF14u;
label_21bf14:
    // 0x21bf14: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x21bf14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_21bf18:
    // 0x21bf18: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x21bf18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_21bf1c:
    // 0x21bf1c: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x21bf1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_21bf20:
    // 0x21bf20: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x21bf20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_21bf24:
    // 0x21bf24: 0x320f809  jalr        $t9
label_21bf28:
    if (ctx->pc == 0x21BF28u) {
        ctx->pc = 0x21BF28u;
            // 0x21bf28: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21BF2Cu;
        goto label_21bf2c;
    }
    ctx->pc = 0x21BF24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x21BF2Cu);
        ctx->pc = 0x21BF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BF24u;
            // 0x21bf28: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21BF2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21BF2Cu; }
            if (ctx->pc != 0x21BF2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x21BF2Cu;
label_21bf2c:
    // 0x21bf2c: 0x1000003d  b           . + 4 + (0x3D << 2)
label_21bf30:
    if (ctx->pc == 0x21BF30u) {
        ctx->pc = 0x21BF30u;
            // 0x21bf30: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x21BF34u;
        goto label_21bf34;
    }
    ctx->pc = 0x21BF2Cu;
    {
        const bool branch_taken_0x21bf2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BF2Cu;
            // 0x21bf30: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bf2c) {
            ctx->pc = 0x21C024u;
            goto label_21c024;
        }
    }
    ctx->pc = 0x21BF34u;
label_21bf34:
    // 0x21bf34: 0xa6a20012  sh          $v0, 0x12($s5)
    ctx->pc = 0x21bf34u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 18), (uint16_t)GPR_U32(ctx, 2));
label_21bf38:
    // 0x21bf38: 0x8fa400fc  lw          $a0, 0xFC($sp)
    ctx->pc = 0x21bf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_21bf3c:
    // 0x21bf3c: 0x9082000d  lbu         $v0, 0xD($a0)
    ctx->pc = 0x21bf3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
label_21bf40:
    // 0x21bf40: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_21bf44:
    if (ctx->pc == 0x21BF44u) {
        ctx->pc = 0x21BF44u;
            // 0x21bf44: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x21BF48u;
        goto label_21bf48;
    }
    ctx->pc = 0x21BF40u;
    {
        const bool branch_taken_0x21bf40 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x21bf40) {
            ctx->pc = 0x21BF44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21BF40u;
            // 0x21bf44: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21BF54u;
            goto label_21bf54;
        }
    }
    ctx->pc = 0x21BF48u;
label_21bf48:
    // 0x21bf48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21bf48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21bf4c:
    // 0x21bf4c: 0x10000007  b           . + 4 + (0x7 << 2)
label_21bf50:
    if (ctx->pc == 0x21BF50u) {
        ctx->pc = 0x21BF50u;
            // 0x21bf50: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x21BF54u;
        goto label_21bf54;
    }
    ctx->pc = 0x21BF4Cu;
    {
        const bool branch_taken_0x21bf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BF4Cu;
            // 0x21bf50: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bf4c) {
            ctx->pc = 0x21BF6Cu;
            goto label_21bf6c;
        }
    }
    ctx->pc = 0x21BF54u;
label_21bf54:
    // 0x21bf54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21bf54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_21bf58:
    // 0x21bf58: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21bf58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_21bf5c:
    // 0x21bf5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21bf5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21bf60:
    // 0x21bf60: 0x0  nop
    ctx->pc = 0x21bf60u;
    // NOP
label_21bf64:
    // 0x21bf64: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x21bf64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_21bf68:
    // 0x21bf68: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x21bf68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_21bf6c:
    // 0x21bf6c: 0x3c023c00  lui         $v0, 0x3C00
    ctx->pc = 0x21bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15360 << 16));
label_21bf70:
    // 0x21bf70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21bf70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21bf74:
    // 0x21bf74: 0x0  nop
    ctx->pc = 0x21bf74u;
    // NOP
label_21bf78:
    // 0x21bf78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21bf78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_21bf7c:
    // 0x21bf7c: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x21bf7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_21bf80:
    // 0x21bf80: 0x0  nop
    ctx->pc = 0x21bf80u;
    // NOP
label_21bf84:
    // 0x21bf84: 0x46040032  c.eq.s      $f0, $f4
    ctx->pc = 0x21bf84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21bf88:
    // 0x21bf88: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_21bf8c:
    if (ctx->pc == 0x21BF8Cu) {
        ctx->pc = 0x21BF8Cu;
            // 0x21bf8c: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x21BF90u;
        goto label_21bf90;
    }
    ctx->pc = 0x21BF88u;
    {
        const bool branch_taken_0x21bf88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21bf88) {
            ctx->pc = 0x21BF8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21BF88u;
            // 0x21bf8c: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21BFACu;
            goto label_21bfac;
        }
    }
    ctx->pc = 0x21BF90u;
label_21bf90:
    // 0x21bf90: 0x962201d4  lhu         $v0, 0x1D4($s1)
    ctx->pc = 0x21bf90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 468)));
label_21bf94:
    // 0x21bf94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_21bf98:
    if (ctx->pc == 0x21BF98u) {
        ctx->pc = 0x21BF9Cu;
        goto label_21bf9c;
    }
    ctx->pc = 0x21BF94u;
    {
        const bool branch_taken_0x21bf94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bf94) {
            ctx->pc = 0x21BFA8u;
            goto label_21bfa8;
        }
    }
    ctx->pc = 0x21BF9Cu;
label_21bf9c:
    // 0x21bf9c: 0x960201d4  lhu         $v0, 0x1D4($s0)
    ctx->pc = 0x21bf9cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 468)));
label_21bfa0:
    // 0x21bfa0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_21bfa4:
    if (ctx->pc == 0x21BFA4u) {
        ctx->pc = 0x21BFA4u;
            // 0x21bfa4: 0xc623017c  lwc1        $f3, 0x17C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x21BFA8u;
        goto label_21bfa8;
    }
    ctx->pc = 0x21BFA0u;
    {
        const bool branch_taken_0x21bfa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bfa0) {
            ctx->pc = 0x21BFA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21BFA0u;
            // 0x21bfa4: 0xc623017c  lwc1        $f3, 0x17C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x21BFC8u;
            goto label_21bfc8;
        }
    }
    ctx->pc = 0x21BFA8u;
label_21bfa8:
    // 0x21bfa8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x21bfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_21bfac:
    // 0x21bfac: 0x8ea50038  lw          $a1, 0x38($s5)
    ctx->pc = 0x21bfacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
label_21bfb0:
    // 0x21bfb0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x21bfb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_21bfb4:
    // 0x21bfb4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x21bfb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_21bfb8:
    // 0x21bfb8: 0x320f809  jalr        $t9
label_21bfbc:
    if (ctx->pc == 0x21BFBCu) {
        ctx->pc = 0x21BFBCu;
            // 0x21bfbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x21BFC0u;
        goto label_21bfc0;
    }
    ctx->pc = 0x21BFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x21BFC0u);
        ctx->pc = 0x21BFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BFB8u;
            // 0x21bfbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21BFC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21BFC0u; }
            if (ctx->pc != 0x21BFC0u) { return; }
        }
        }
    }
    ctx->pc = 0x21BFC0u;
label_21bfc0:
    // 0x21bfc0: 0x10000018  b           . + 4 + (0x18 << 2)
label_21bfc4:
    if (ctx->pc == 0x21BFC4u) {
        ctx->pc = 0x21BFC4u;
            // 0x21bfc4: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21BFC8u;
        goto label_21bfc8;
    }
    ctx->pc = 0x21BFC0u;
    {
        const bool branch_taken_0x21bfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BFC0u;
            // 0x21bfc4: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bfc0) {
            ctx->pc = 0x21C024u;
            goto label_21c024;
        }
    }
    ctx->pc = 0x21BFC8u;
label_21bfc8:
    // 0x21bfc8: 0x3c022edb  lui         $v0, 0x2EDB
    ctx->pc = 0x21bfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11995 << 16));
label_21bfcc:
    // 0x21bfcc: 0xc602017c  lwc1        $f2, 0x17C($s0)
    ctx->pc = 0x21bfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21bfd0:
    // 0x21bfd0: 0x3442e6ff  ori         $v0, $v0, 0xE6FF
    ctx->pc = 0x21bfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59135);
label_21bfd4:
    // 0x21bfd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21bfd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21bfd8:
    // 0x21bfd8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_21bfdc:
    // 0x21bfdc: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x21bfdcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_21bfe0:
    // 0x21bfe0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x21bfe0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_21bfe4:
    // 0x21bfe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21bfe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21bfe8:
    // 0x21bfe8: 0x0  nop
    ctx->pc = 0x21bfe8u;
    // NOP
label_21bfec:
    // 0x21bfec: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x21bfecu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
label_21bff0:
    // 0x21bff0: 0x3c02be4c  lui         $v0, 0xBE4C
    ctx->pc = 0x21bff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48716 << 16));
label_21bff4:
    // 0x21bff4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21bff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_21bff8:
    // 0x21bff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21bff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21bffc:
    // 0x21bffc: 0x0  nop
    ctx->pc = 0x21bffcu;
    // NOP
label_21c000:
    // 0x21c000: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21c000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_21c004:
    // 0x21c004: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x21c004u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_21c008:
    // 0x21c008: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x21c008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_21c00c:
    // 0x21c00c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x21c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_21c010:
    // 0x21c010: 0xe4440004  swc1        $f4, 0x4($v0)
    ctx->pc = 0x21c010u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_21c014:
    // 0x21c014: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x21c014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21c018:
    // 0x21c018: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x21c018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_21c01c:
    // 0x21c01c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x21c01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_21c020:
    // 0x21c020: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x21c020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_21c024:
    // 0x21c024: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x21c024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_21c028:
    // 0x21c028: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x21c028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_21c02c:
    // 0x21c02c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x21c02cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_21c030:
    // 0x21c030: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x21c030u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_21c034:
    // 0x21c034: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x21c034u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21c038:
    // 0x21c038: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x21c038u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21c03c:
    // 0x21c03c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x21c03cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21c040:
    // 0x21c040: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x21c040u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21c044:
    // 0x21c044: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x21c044u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21c048:
    // 0x21c048: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x21c048u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21c04c:
    // 0x21c04c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21c04cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21c050:
    // 0x21c050: 0x3e00008  jr          $ra
label_21c054:
    if (ctx->pc == 0x21C054u) {
        ctx->pc = 0x21C054u;
            // 0x21c054: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x21C058u;
        goto label_21c058;
    }
    ctx->pc = 0x21C050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C050u;
            // 0x21c054: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C058u;
label_21c058:
    // 0x21c058: 0x0  nop
    ctx->pc = 0x21c058u;
    // NOP
label_21c05c:
    // 0x21c05c: 0x0  nop
    ctx->pc = 0x21c05cu;
    // NOP
label_21c060:
    // 0x21c060: 0x3e00008  jr          $ra
label_21c064:
    if (ctx->pc == 0x21C064u) {
        ctx->pc = 0x21C068u;
        goto label_21c068;
    }
    ctx->pc = 0x21C060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C068u;
label_21c068:
    // 0x21c068: 0x0  nop
    ctx->pc = 0x21c068u;
    // NOP
label_21c06c:
    // 0x21c06c: 0x0  nop
    ctx->pc = 0x21c06cu;
    // NOP
label_21c070:
    // 0x21c070: 0x3e00008  jr          $ra
label_21c074:
    if (ctx->pc == 0x21C074u) {
        ctx->pc = 0x21C078u;
        goto label_21c078;
    }
    ctx->pc = 0x21C070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C078u;
label_21c078:
    // 0x21c078: 0x0  nop
    ctx->pc = 0x21c078u;
    // NOP
label_21c07c:
    // 0x21c07c: 0x0  nop
    ctx->pc = 0x21c07cu;
    // NOP
label_21c080:
    // 0x21c080: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x21c080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_21c084:
    // 0x21c084: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x21c084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_21c088:
    // 0x21c088: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21c088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_21c08c:
    // 0x21c08c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21c08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_21c090:
    // 0x21c090: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x21c090u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21c094:
    // 0x21c094: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21c094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_21c098:
    // 0x21c098: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x21c098u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21c09c:
    // 0x21c09c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21c09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21c0a0:
    // 0x21c0a0: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x21c0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_21c0a4:
    // 0x21c0a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21c0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21c0a8:
    // 0x21c0a8: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x21c0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_21c0ac:
    // 0x21c0ac: 0x8c910058  lw          $s1, 0x58($a0)
    ctx->pc = 0x21c0acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_21c0b0:
    // 0x21c0b0: 0x8c90005c  lw          $s0, 0x5C($a0)
    ctx->pc = 0x21c0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_21c0b4:
    // 0x21c0b4: 0x8c85003c  lw          $a1, 0x3C($a0)
    ctx->pc = 0x21c0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_21c0b8:
    // 0x21c0b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21c0bc:
    // 0x21c0bc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21c0bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_21c0c0:
    // 0x21c0c0: 0x94a40006  lhu         $a0, 0x6($a1)
    ctx->pc = 0x21c0c0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_21c0c4:
    // 0x21c0c4: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x21c0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_21c0c8:
    // 0x21c0c8: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x21c0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_21c0cc:
    // 0x21c0cc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21c0d0:
    // 0x21c0d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21c0d4:
    // 0x21c0d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21c0d8:
    // 0x21c0d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21c0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_21c0dc:
    // 0x21c0dc: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x21c0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_21c0e0:
    // 0x21c0e0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_21c0e4:
    if (ctx->pc == 0x21C0E4u) {
        ctx->pc = 0x21C0E4u;
            // 0x21c0e4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21C0E8u;
        goto label_21c0e8;
    }
    ctx->pc = 0x21C0E0u;
    {
        const bool branch_taken_0x21c0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C0E0u;
            // 0x21c0e4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c0e0) {
            ctx->pc = 0x21C0ECu;
            goto label_21c0ec;
        }
    }
    ctx->pc = 0x21C0E8u;
label_21c0e8:
    // 0x21c0e8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x21c0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_21c0ec:
    // 0x21c0ec: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x21c0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_21c0f0:
    // 0x21c0f0: 0xa7b30060  sh          $s3, 0x60($sp)
    ctx->pc = 0x21c0f0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 96), (uint16_t)GPR_U32(ctx, 19));
label_21c0f4:
    // 0x21c0f4: 0xafb10068  sw          $s1, 0x68($sp)
    ctx->pc = 0x21c0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 17));
label_21c0f8:
    // 0x21c0f8: 0xafb0006c  sw          $s0, 0x6C($sp)
    ctx->pc = 0x21c0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 16));
label_21c0fc:
    // 0x21c0fc: 0xafb40074  sw          $s4, 0x74($sp)
    ctx->pc = 0x21c0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 20));
label_21c100:
    // 0x21c100: 0xafb20078  sw          $s2, 0x78($sp)
    ctx->pc = 0x21c100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 18));
label_21c104:
    // 0x21c104: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x21c104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_21c108:
    // 0x21c108: 0xc08e6bc  jal         func_239AF0
label_21c10c:
    if (ctx->pc == 0x21C10Cu) {
        ctx->pc = 0x21C10Cu;
            // 0x21c10c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x21C110u;
        goto label_21c110;
    }
    ctx->pc = 0x21C108u;
    SET_GPR_U32(ctx, 31, 0x21C110u);
    ctx->pc = 0x21C10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C108u;
            // 0x21c10c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239AF0u;
    if (runtime->hasFunction(0x239AF0u)) {
        auto targetFn = runtime->lookupFunction(0x239AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C110u; }
        if (ctx->pc != 0x21C110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239AF0_0x239af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C110u; }
        if (ctx->pc != 0x21C110u) { return; }
    }
    ctx->pc = 0x21C110u;
label_21c110:
    // 0x21c110: 0x962201d4  lhu         $v0, 0x1D4($s1)
    ctx->pc = 0x21c110u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 468)));
label_21c114:
    // 0x21c114: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_21c118:
    if (ctx->pc == 0x21C118u) {
        ctx->pc = 0x21C118u;
            // 0x21c118: 0x960201d4  lhu         $v0, 0x1D4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 468)));
        ctx->pc = 0x21C11Cu;
        goto label_21c11c;
    }
    ctx->pc = 0x21C114u;
    {
        const bool branch_taken_0x21c114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c114) {
            ctx->pc = 0x21C118u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21C114u;
            // 0x21c118: 0x960201d4  lhu         $v0, 0x1D4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 468)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21C12Cu;
            goto label_21c12c;
        }
    }
    ctx->pc = 0x21C11Cu;
label_21c11c:
    // 0x21c11c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21c11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21c120:
    // 0x21c120: 0xc08955c  jal         func_225570
label_21c124:
    if (ctx->pc == 0x21C124u) {
        ctx->pc = 0x21C124u;
            // 0x21c124: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x21C128u;
        goto label_21c128;
    }
    ctx->pc = 0x21C120u;
    SET_GPR_U32(ctx, 31, 0x21C128u);
    ctx->pc = 0x21C124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C120u;
            // 0x21c124: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225570u;
    if (runtime->hasFunction(0x225570u)) {
        auto targetFn = runtime->lookupFunction(0x225570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C128u; }
        if (ctx->pc != 0x21C128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225570_0x225570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C128u; }
        if (ctx->pc != 0x21C128u) { return; }
    }
    ctx->pc = 0x21C128u;
label_21c128:
    // 0x21c128: 0x960201d4  lhu         $v0, 0x1D4($s0)
    ctx->pc = 0x21c128u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 468)));
label_21c12c:
    // 0x21c12c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_21c130:
    if (ctx->pc == 0x21C130u) {
        ctx->pc = 0x21C130u;
            // 0x21c130: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21C134u;
        goto label_21c134;
    }
    ctx->pc = 0x21C12Cu;
    {
        const bool branch_taken_0x21c12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c12c) {
            ctx->pc = 0x21C130u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21C12Cu;
            // 0x21c130: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21C144u;
            goto label_21c144;
        }
    }
    ctx->pc = 0x21C134u;
label_21c134:
    // 0x21c134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21c138:
    // 0x21c138: 0xc08955c  jal         func_225570
label_21c13c:
    if (ctx->pc == 0x21C13Cu) {
        ctx->pc = 0x21C13Cu;
            // 0x21c13c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x21C140u;
        goto label_21c140;
    }
    ctx->pc = 0x21C138u;
    SET_GPR_U32(ctx, 31, 0x21C140u);
    ctx->pc = 0x21C13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C138u;
            // 0x21c13c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225570u;
    if (runtime->hasFunction(0x225570u)) {
        auto targetFn = runtime->lookupFunction(0x225570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C140u; }
        if (ctx->pc != 0x21C140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225570_0x225570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C140u; }
        if (ctx->pc != 0x21C140u) { return; }
    }
    ctx->pc = 0x21C140u;
label_21c140:
    // 0x21c140: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x21c140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21c144:
    // 0x21c144: 0x26840014  addiu       $a0, $s4, 0x14
    ctx->pc = 0x21c144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_21c148:
    // 0x21c148: 0xc087a70  jal         func_21E9C0
label_21c14c:
    if (ctx->pc == 0x21C14Cu) {
        ctx->pc = 0x21C14Cu;
            // 0x21c14c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21C150u;
        goto label_21c150;
    }
    ctx->pc = 0x21C148u;
    SET_GPR_U32(ctx, 31, 0x21C150u);
    ctx->pc = 0x21C14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C148u;
            // 0x21c14c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E9C0u;
    if (runtime->hasFunction(0x21E9C0u)) {
        auto targetFn = runtime->lookupFunction(0x21E9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C150u; }
        if (ctx->pc != 0x21C150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021E9C0_0x21e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C150u; }
        if (ctx->pc != 0x21C150u) { return; }
    }
    ctx->pc = 0x21C150u;
label_21c150:
    // 0x21c150: 0x8e83003c  lw          $v1, 0x3C($s4)
    ctx->pc = 0x21c150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_21c154:
    // 0x21c154: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x21c154u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_21c158:
    // 0x21c158: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
label_21c15c:
    if (ctx->pc == 0x21C15Cu) {
        ctx->pc = 0x21C15Cu;
            // 0x21c15c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x21C160u;
        goto label_21c160;
    }
    ctx->pc = 0x21C158u;
    {
        const bool branch_taken_0x21c158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c158) {
            ctx->pc = 0x21C15Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21C158u;
            // 0x21c15c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21C178u;
            goto label_21c178;
        }
    }
    ctx->pc = 0x21C160u;
label_21c160:
    // 0x21c160: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x21c160u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21c164:
    // 0x21c164: 0x26850044  addiu       $a1, $s4, 0x44
    ctx->pc = 0x21c164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 68));
label_21c168:
    // 0x21c168: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x21c168u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_21c16c:
    // 0x21c16c: 0x320f809  jalr        $t9
label_21c170:
    if (ctx->pc == 0x21C170u) {
        ctx->pc = 0x21C170u;
            // 0x21c170: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21C174u;
        goto label_21c174;
    }
    ctx->pc = 0x21C16Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x21C174u);
        ctx->pc = 0x21C170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C16Cu;
            // 0x21c170: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21C174u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21C174u; }
            if (ctx->pc != 0x21C174u) { return; }
        }
        }
    }
    ctx->pc = 0x21C174u;
label_21c174:
    // 0x21c174: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x21c174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_21c178:
    // 0x21c178: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21c178u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21c17c:
    // 0x21c17c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21c17cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21c180:
    // 0x21c180: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21c180u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21c184:
    // 0x21c184: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21c184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21c188:
    // 0x21c188: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21c188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21c18c:
    // 0x21c18c: 0x3e00008  jr          $ra
label_21c190:
    if (ctx->pc == 0x21C190u) {
        ctx->pc = 0x21C190u;
            // 0x21c190: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x21C194u;
        goto label_21c194;
    }
    ctx->pc = 0x21C18Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C18Cu;
            // 0x21c190: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C194u;
label_21c194:
    // 0x21c194: 0x0  nop
    ctx->pc = 0x21c194u;
    // NOP
label_21c198:
    // 0x21c198: 0x0  nop
    ctx->pc = 0x21c198u;
    // NOP
label_21c19c:
    // 0x21c19c: 0x0  nop
    ctx->pc = 0x21c19cu;
    // NOP
label_21c1a0:
    // 0x21c1a0: 0x3e00008  jr          $ra
label_21c1a4:
    if (ctx->pc == 0x21C1A4u) {
        ctx->pc = 0x21C1A8u;
        goto label_21c1a8;
    }
    ctx->pc = 0x21C1A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C1A8u;
label_21c1a8:
    // 0x21c1a8: 0x0  nop
    ctx->pc = 0x21c1a8u;
    // NOP
label_21c1ac:
    // 0x21c1ac: 0x0  nop
    ctx->pc = 0x21c1acu;
    // NOP
label_21c1b0:
    // 0x21c1b0: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x21c1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_21c1b4:
    // 0x21c1b4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x21c1b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_21c1b8:
    // 0x21c1b8: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x21c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_21c1bc:
    // 0x21c1bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x21c1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_21c1c0:
    // 0x21c1c0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x21c1c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_21c1c4:
    // 0x21c1c4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x21c1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_21c1c8:
    // 0x21c1c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x21c1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21c1cc:
    // 0x21c1cc: 0x3e00008  jr          $ra
label_21c1d0:
    if (ctx->pc == 0x21C1D0u) {
        ctx->pc = 0x21C1D0u;
            // 0x21c1d0: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->pc = 0x21C1D4u;
        goto label_21c1d4;
    }
    ctx->pc = 0x21C1CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C1CCu;
            // 0x21c1d0: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C1D4u;
label_21c1d4:
    // 0x21c1d4: 0x0  nop
    ctx->pc = 0x21c1d4u;
    // NOP
label_21c1d8:
    // 0x21c1d8: 0x0  nop
    ctx->pc = 0x21c1d8u;
    // NOP
label_21c1dc:
    // 0x21c1dc: 0x0  nop
    ctx->pc = 0x21c1dcu;
    // NOP
label_21c1e0:
    // 0x21c1e0: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x21c1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_21c1e4:
    // 0x21c1e4: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x21c1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_21c1e8:
    // 0x21c1e8: 0x8c85003c  lw          $a1, 0x3C($a0)
    ctx->pc = 0x21c1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_21c1ec:
    // 0x21c1ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21c1f0:
    // 0x21c1f0: 0x94a40006  lhu         $a0, 0x6($a1)
    ctx->pc = 0x21c1f0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_21c1f4:
    // 0x21c1f4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21c1f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_21c1f8:
    // 0x21c1f8: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x21c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_21c1fc:
    // 0x21c1fc: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x21c1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_21c200:
    // 0x21c200: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21c200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21c204:
    // 0x21c204: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21c204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21c208:
    // 0x21c208: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21c208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21c20c:
    // 0x21c20c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_21c210:
    // 0x21c210: 0x3e00008  jr          $ra
label_21c214:
    if (ctx->pc == 0x21C214u) {
        ctx->pc = 0x21C214u;
            // 0x21c214: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->pc = 0x21C218u;
        goto label_21c218;
    }
    ctx->pc = 0x21C210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C210u;
            // 0x21c214: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C218u;
label_21c218:
    // 0x21c218: 0x0  nop
    ctx->pc = 0x21c218u;
    // NOP
label_21c21c:
    // 0x21c21c: 0x0  nop
    ctx->pc = 0x21c21cu;
    // NOP
label_21c220:
    // 0x21c220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21c220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_21c224:
    // 0x21c224: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21c224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_21c228:
    // 0x21c228: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21c228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_21c22c:
    // 0x21c22c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21c22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_21c230:
    // 0x21c230: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21c230u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21c234:
    // 0x21c234: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21c234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21c238:
    // 0x21c238: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21c238u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21c23c:
    // 0x21c23c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21c23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21c240:
    // 0x21c240: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x21c240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_21c244:
    // 0x21c244: 0x1860001e  blez        $v1, . + 4 + (0x1E << 2)
label_21c248:
    if (ctx->pc == 0x21C248u) {
        ctx->pc = 0x21C248u;
            // 0x21c248: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21C24Cu;
        goto label_21c24c;
    }
    ctx->pc = 0x21C244u;
    {
        const bool branch_taken_0x21c244 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x21C248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C244u;
            // 0x21c248: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c244) {
            ctx->pc = 0x21C2C0u;
            goto label_21c2c0;
        }
    }
    ctx->pc = 0x21C24Cu;
label_21c24c:
    // 0x21c24c: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x21c24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_21c250:
    // 0x21c250: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x21c250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21c254:
    // 0x21c254: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x21c254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_21c258:
    // 0x21c258: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x21c258u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_21c25c:
    // 0x21c25c: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
label_21c260:
    if (ctx->pc == 0x21C260u) {
        ctx->pc = 0x21C264u;
        goto label_21c264;
    }
    ctx->pc = 0x21C25Cu;
    {
        const bool branch_taken_0x21c25c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21c25c) {
            ctx->pc = 0x21C2A8u;
            goto label_21c2a8;
        }
    }
    ctx->pc = 0x21C264u;
label_21c264:
    // 0x21c264: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x21c264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_21c268:
    // 0x21c268: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x21c268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_21c26c:
    // 0x21c26c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x21c26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_21c270:
    // 0x21c270: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x21c270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_21c274:
    // 0x21c274: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_21c278:
    if (ctx->pc == 0x21C278u) {
        ctx->pc = 0x21C278u;
            // 0x21c278: 0x3230ffff  andi        $s0, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x21C27Cu;
        goto label_21c27c;
    }
    ctx->pc = 0x21C274u;
    {
        const bool branch_taken_0x21c274 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x21C278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C274u;
            // 0x21c278: 0x3230ffff  andi        $s0, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c274) {
            ctx->pc = 0x21C288u;
            goto label_21c288;
        }
    }
    ctx->pc = 0x21C27Cu;
label_21c27c:
    // 0x21c27c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21c27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21c280:
    // 0x21c280: 0xc0a728c  jal         func_29CA30
label_21c284:
    if (ctx->pc == 0x21C284u) {
        ctx->pc = 0x21C284u;
            // 0x21c284: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x21C288u;
        goto label_21c288;
    }
    ctx->pc = 0x21C280u;
    SET_GPR_U32(ctx, 31, 0x21C288u);
    ctx->pc = 0x21C284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C280u;
            // 0x21c284: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C288u; }
        if (ctx->pc != 0x21C288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C288u; }
        if (ctx->pc != 0x21C288u) { return; }
    }
    ctx->pc = 0x21C288u;
label_21c288:
    // 0x21c288: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x21c288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_21c28c:
    // 0x21c28c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x21c28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_21c290:
    // 0x21c290: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x21c290u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_21c294:
    // 0x21c294: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x21c294u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_21c298:
    // 0x21c298: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x21c298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21c29c:
    // 0x21c29c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21c29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_21c2a0:
    // 0x21c2a0: 0xa4700000  sh          $s0, 0x0($v1)
    ctx->pc = 0x21c2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 16));
label_21c2a4:
    // 0x21c2a4: 0x0  nop
    ctx->pc = 0x21c2a4u;
    // NOP
label_21c2a8:
    // 0x21c2a8: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x21c2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_21c2ac:
    // 0x21c2ac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21c2acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21c2b0:
    // 0x21c2b0: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x21c2b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_21c2b4:
    // 0x21c2b4: 0x5460ffe6  bnel        $v1, $zero, . + 4 + (-0x1A << 2)
label_21c2b8:
    if (ctx->pc == 0x21C2B8u) {
        ctx->pc = 0x21C2B8u;
            // 0x21c2b8: 0x8e640020  lw          $a0, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->pc = 0x21C2BCu;
        goto label_21c2bc;
    }
    ctx->pc = 0x21C2B4u;
    {
        const bool branch_taken_0x21c2b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c2b4) {
            ctx->pc = 0x21C2B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21C2B4u;
            // 0x21c2b8: 0x8e640020  lw          $a0, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21C250u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21c250;
        }
    }
    ctx->pc = 0x21C2BCu;
label_21c2bc:
    // 0x21c2bc: 0x0  nop
    ctx->pc = 0x21c2bcu;
    // NOP
label_21c2c0:
    // 0x21c2c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21c2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_21c2c4:
    // 0x21c2c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21c2c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21c2c8:
    // 0x21c2c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21c2c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21c2cc:
    // 0x21c2cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21c2ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21c2d0:
    // 0x21c2d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21c2d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21c2d4:
    // 0x21c2d4: 0x3e00008  jr          $ra
label_21c2d8:
    if (ctx->pc == 0x21C2D8u) {
        ctx->pc = 0x21C2D8u;
            // 0x21c2d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x21C2DCu;
        goto label_21c2dc;
    }
    ctx->pc = 0x21C2D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C2D4u;
            // 0x21c2d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C2DCu;
label_21c2dc:
    // 0x21c2dc: 0x0  nop
    ctx->pc = 0x21c2dcu;
    // NOP
label_21c2e0:
    // 0x21c2e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_21c2e4:
    // 0x21c2e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x21c2e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21c2e8:
    // 0x21c2e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21c2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21c2ec:
    // 0x21c2ec: 0x8c590014  lw          $t9, 0x14($v0)
    ctx->pc = 0x21c2ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_21c2f0:
    // 0x21c2f0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x21c2f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_21c2f4:
    // 0x21c2f4: 0x320f809  jalr        $t9
label_21c2f8:
    if (ctx->pc == 0x21C2F8u) {
        ctx->pc = 0x21C2F8u;
            // 0x21c2f8: 0x24440014  addiu       $a0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->pc = 0x21C2FCu;
        goto label_21c2fc;
    }
    ctx->pc = 0x21C2F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x21C2FCu);
        ctx->pc = 0x21C2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C2F4u;
            // 0x21c2f8: 0x24440014  addiu       $a0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21C2FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21C2FCu; }
            if (ctx->pc != 0x21C2FCu) { return; }
        }
        }
    }
    ctx->pc = 0x21C2FCu;
label_21c2fc:
    // 0x21c2fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21c300:
    // 0x21c300: 0x3e00008  jr          $ra
label_21c304:
    if (ctx->pc == 0x21C304u) {
        ctx->pc = 0x21C304u;
            // 0x21c304: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x21C308u;
        goto label_21c308;
    }
    ctx->pc = 0x21C300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C300u;
            // 0x21c304: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C308u;
label_21c308:
    // 0x21c308: 0x0  nop
    ctx->pc = 0x21c308u;
    // NOP
label_21c30c:
    // 0x21c30c: 0x0  nop
    ctx->pc = 0x21c30cu;
    // NOP
label_21c310:
    // 0x21c310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_21c314:
    // 0x21c314: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x21c314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21c318:
    // 0x21c318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21c318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21c31c:
    // 0x21c31c: 0x8c590014  lw          $t9, 0x14($v0)
    ctx->pc = 0x21c31cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_21c320:
    // 0x21c320: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x21c320u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_21c324:
    // 0x21c324: 0x320f809  jalr        $t9
label_21c328:
    if (ctx->pc == 0x21C328u) {
        ctx->pc = 0x21C328u;
            // 0x21c328: 0x24440014  addiu       $a0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->pc = 0x21C32Cu;
        goto label_21c32c;
    }
    ctx->pc = 0x21C324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x21C32Cu);
        ctx->pc = 0x21C328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C324u;
            // 0x21c328: 0x24440014  addiu       $a0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21C32Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21C32Cu; }
            if (ctx->pc != 0x21C32Cu) { return; }
        }
        }
    }
    ctx->pc = 0x21C32Cu;
label_21c32c:
    // 0x21c32c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21c330:
    // 0x21c330: 0x3e00008  jr          $ra
label_21c334:
    if (ctx->pc == 0x21C334u) {
        ctx->pc = 0x21C334u;
            // 0x21c334: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x21C338u;
        goto label_21c338;
    }
    ctx->pc = 0x21C330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C330u;
            // 0x21c334: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C338u;
label_21c338:
    // 0x21c338: 0x0  nop
    ctx->pc = 0x21c338u;
    // NOP
label_21c33c:
    // 0x21c33c: 0x0  nop
    ctx->pc = 0x21c33cu;
    // NOP
label_21c340:
    // 0x21c340: 0x27bdfb90  addiu       $sp, $sp, -0x470
    ctx->pc = 0x21c340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966160));
label_21c344:
    // 0x21c344: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21c344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_21c348:
    // 0x21c348: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21c348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_21c34c:
    // 0x21c34c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21c34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_21c350:
    // 0x21c350: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21c350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21c354:
    // 0x21c354: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21c354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21c358:
    // 0x21c358: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21c358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21c35c:
    // 0x21c35c: 0x94870012  lhu         $a3, 0x12($a0)
    ctx->pc = 0x21c35cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
label_21c360:
    // 0x21c360: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x21c360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_21c364:
    // 0x21c364: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x21c364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_21c368:
    // 0x21c368: 0x14e000ca  bnez        $a3, . + 4 + (0xCA << 2)
label_21c36c:
    if (ctx->pc == 0x21C36Cu) {
        ctx->pc = 0x21C36Cu;
            // 0x21c36c: 0xa4830012  sh          $v1, 0x12($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x21C370u;
        goto label_21c370;
    }
    ctx->pc = 0x21C368u;
    {
        const bool branch_taken_0x21c368 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C368u;
            // 0x21c36c: 0xa4830012  sh          $v1, 0x12($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c368) {
            ctx->pc = 0x21C694u;
            goto label_21c694;
        }
    }
    ctx->pc = 0x21C370u;
label_21c370:
    // 0x21c370: 0x80a30010  lb          $v1, 0x10($a1)
    ctx->pc = 0x21c370u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_21c374:
    // 0x21c374: 0x80c20010  lb          $v0, 0x10($a2)
    ctx->pc = 0x21c374u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
label_21c378:
    // 0x21c378: 0xa39821  addu        $s3, $a1, $v1
    ctx->pc = 0x21c378u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_21c37c:
    // 0x21c37c: 0xc29021  addu        $s2, $a2, $v0
    ctx->pc = 0x21c37cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_21c380:
    // 0x21c380: 0x9662006e  lhu         $v0, 0x6E($s3)
    ctx->pc = 0x21c380u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 110)));
label_21c384:
    // 0x21c384: 0x9643006e  lhu         $v1, 0x6E($s2)
    ctx->pc = 0x21c384u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 110)));
label_21c388:
    // 0x21c388: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x21c388u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_21c38c:
    // 0x21c38c: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_21c390:
    if (ctx->pc == 0x21C390u) {
        ctx->pc = 0x21C390u;
            // 0x21c390: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21C394u;
        goto label_21c394;
    }
    ctx->pc = 0x21C38Cu;
    {
        const bool branch_taken_0x21c38c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c38c) {
            ctx->pc = 0x21C390u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21C38Cu;
            // 0x21c390: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21C394u;
            goto label_21c394;
        }
    }
    ctx->pc = 0x21C394u;
label_21c394:
    // 0x21c394: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x21c394u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
label_21c398:
    // 0x21c398: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x21c398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_21c39c:
    // 0x21c39c: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x21c39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_21c3a0:
    // 0x21c3a0: 0xafa60054  sw          $a2, 0x54($sp)
    ctx->pc = 0x21c3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
label_21c3a4:
    // 0x21c3a4: 0xafb0005c  sw          $s0, 0x5C($sp)
    ctx->pc = 0x21c3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 16));
label_21c3a8:
    // 0x21c3a8: 0xafb10460  sw          $s1, 0x460($sp)
    ctx->pc = 0x21c3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 17));
label_21c3ac:
    // 0x21c3ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x21c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21c3b0:
    // 0x21c3b0: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x21c3b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_21c3b4:
    // 0x21c3b4: 0x102000a8  beqz        $at, . + 4 + (0xA8 << 2)
label_21c3b8:
    if (ctx->pc == 0x21C3B8u) {
        ctx->pc = 0x21C3B8u;
            // 0x21c3b8: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x21C3BCu;
        goto label_21c3bc;
    }
    ctx->pc = 0x21C3B4u;
    {
        const bool branch_taken_0x21c3b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C3B4u;
            // 0x21c3b8: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c3b4) {
            ctx->pc = 0x21C658u;
            goto label_21c658;
        }
    }
    ctx->pc = 0x21C3BCu;
label_21c3bc:
    // 0x21c3bc: 0x644823  subu        $t1, $v1, $a0
    ctx->pc = 0x21c3bcu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_21c3c0:
    // 0x21c3c0: 0x3c052aaa  lui         $a1, 0x2AAA
    ctx->pc = 0x21c3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10922 << 16));
label_21c3c4:
    // 0x21c3c4: 0x2528002f  addiu       $t0, $t1, 0x2F
    ctx->pc = 0x21c3c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 47));
label_21c3c8:
    // 0x21c3c8: 0x34a5aaab  ori         $a1, $a1, 0xAAAB
    ctx->pc = 0x21c3c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43691);
label_21c3cc:
    // 0x21c3cc: 0xa80018  mult        $zero, $a1, $t0
    ctx->pc = 0x21c3ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21c3d0:
    // 0x21c3d0: 0x837c2  srl         $a2, $t0, 31
    ctx->pc = 0x21c3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_21c3d4:
    // 0x21c3d4: 0x0  nop
    ctx->pc = 0x21c3d4u;
    // NOP
label_21c3d8:
    // 0x21c3d8: 0x2810  mfhi        $a1
    ctx->pc = 0x21c3d8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_21c3dc:
    // 0x21c3dc: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x21c3dcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_21c3e0:
    // 0x21c3e0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x21c3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21c3e4:
    // 0x21c3e4: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x21c3e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
label_21c3e8:
    // 0x21c3e8: 0x14200085  bnez        $at, . + 4 + (0x85 << 2)
label_21c3ec:
    if (ctx->pc == 0x21C3ECu) {
        ctx->pc = 0x21C3ECu;
            // 0x21c3ec: 0x2462fe80  addiu       $v0, $v1, -0x180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966912));
        ctx->pc = 0x21C3F0u;
        goto label_21c3f0;
    }
    ctx->pc = 0x21C3E8u;
    {
        const bool branch_taken_0x21c3e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C3E8u;
            // 0x21c3ec: 0x2462fe80  addiu       $v0, $v1, -0x180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c3e8) {
            ctx->pc = 0x21C600u;
            goto label_21c600;
        }
    }
    ctx->pc = 0x21C3F0u;
label_21c3f0:
    // 0x21c3f0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x21c3f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_21c3f4:
    // 0x21c3f4: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_21c3f8:
    if (ctx->pc == 0x21C3F8u) {
        ctx->pc = 0x21C3F8u;
            // 0x21c3f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21C3FCu;
        goto label_21c3fc;
    }
    ctx->pc = 0x21C3F4u;
    {
        const bool branch_taken_0x21c3f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C3F4u;
            // 0x21c3f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c3f4) {
            ctx->pc = 0x21C428u;
            goto label_21c428;
        }
    }
    ctx->pc = 0x21C3FCu;
label_21c3fc:
    // 0x21c3fc: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x21c3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_21c400:
    // 0x21c400: 0x1262824  and         $a1, $t1, $a2
    ctx->pc = 0x21c400u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
label_21c404:
    // 0x21c404: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_21c408:
    if (ctx->pc == 0x21C408u) {
        ctx->pc = 0x21C408u;
            // 0x21c408: 0x640a0001  daddiu      $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x21C40Cu;
        goto label_21c40c;
    }
    ctx->pc = 0x21C404u;
    {
        const bool branch_taken_0x21c404 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C404u;
            // 0x21c408: 0x640a0001  daddiu      $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c404) {
            ctx->pc = 0x21C41Cu;
            goto label_21c41c;
        }
    }
    ctx->pc = 0x21C40Cu;
label_21c40c:
    // 0x21c40c: 0x1062824  and         $a1, $t0, $a2
    ctx->pc = 0x21c40cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
label_21c410:
    // 0x21c410: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_21c414:
    if (ctx->pc == 0x21C414u) {
        ctx->pc = 0x21C418u;
        goto label_21c418;
    }
    ctx->pc = 0x21C410u;
    {
        const bool branch_taken_0x21c410 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c410) {
            ctx->pc = 0x21C41Cu;
            goto label_21c41c;
        }
    }
    ctx->pc = 0x21C418u;
label_21c418:
    // 0x21c418: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21c418u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c41c:
    // 0x21c41c: 0x11400002  beqz        $t2, . + 4 + (0x2 << 2)
label_21c420:
    if (ctx->pc == 0x21C420u) {
        ctx->pc = 0x21C424u;
        goto label_21c424;
    }
    ctx->pc = 0x21C41Cu;
    {
        const bool branch_taken_0x21c41c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c41c) {
            ctx->pc = 0x21C428u;
            goto label_21c428;
        }
    }
    ctx->pc = 0x21C424u;
label_21c424:
    // 0x21c424: 0x640b0001  daddiu      $t3, $zero, 0x1
    ctx->pc = 0x21c424u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_21c428:
    // 0x21c428: 0x11600075  beqz        $t3, . + 4 + (0x75 << 2)
label_21c42c:
    if (ctx->pc == 0x21C42Cu) {
        ctx->pc = 0x21C430u;
        goto label_21c430;
    }
    ctx->pc = 0x21C428u;
    {
        const bool branch_taken_0x21c428 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c428) {
            ctx->pc = 0x21C600u;
            goto label_21c600;
        }
    }
    ctx->pc = 0x21C430u;
label_21c430:
    // 0x21c430: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x21c430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_21c434:
    // 0x21c434: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x21c434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_21c438:
    // 0x21c438: 0x8e28003c  lw          $t0, 0x3C($s1)
    ctx->pc = 0x21c438u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_21c43c:
    // 0x21c43c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x21c43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21c440:
    // 0x21c440: 0x25090030  addiu       $t1, $t0, 0x30
    ctx->pc = 0x21c440u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
label_21c444:
    // 0x21c444: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x21c444u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_21c448:
    // 0x21c448: 0x95080006  lhu         $t0, 0x6($t0)
    ctx->pc = 0x21c448u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
label_21c44c:
    // 0x21c44c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x21c44cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_21c450:
    // 0x21c450: 0x84140  sll         $t0, $t0, 5
    ctx->pc = 0x21c450u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_21c454:
    // 0x21c454: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x21c454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21c458:
    // 0x21c458: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x21c458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_21c45c:
    // 0x21c45c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x21c45cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_21c460:
    // 0x21c460: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x21c460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_21c464:
    // 0x21c464: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x21c464u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_21c468:
    // 0x21c468: 0x8e28003c  lw          $t0, 0x3C($s1)
    ctx->pc = 0x21c468u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_21c46c:
    // 0x21c46c: 0x8c860050  lw          $a2, 0x50($a0)
    ctx->pc = 0x21c46cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_21c470:
    // 0x21c470: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x21c470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_21c474:
    // 0x21c474: 0x25090030  addiu       $t1, $t0, 0x30
    ctx->pc = 0x21c474u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
label_21c478:
    // 0x21c478: 0x95080006  lhu         $t0, 0x6($t0)
    ctx->pc = 0x21c478u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
label_21c47c:
    // 0x21c47c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x21c47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21c480:
    // 0x21c480: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x21c480u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_21c484:
    // 0x21c484: 0x84140  sll         $t0, $t0, 5
    ctx->pc = 0x21c484u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_21c488:
    // 0x21c488: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x21c488u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_21c48c:
    // 0x21c48c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x21c48cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_21c490:
    // 0x21c490: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x21c490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21c494:
    // 0x21c494: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x21c494u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_21c498:
    // 0x21c498: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x21c498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_21c49c:
    // 0x21c49c: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x21c49cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
label_21c4a0:
    // 0x21c4a0: 0x8e28003c  lw          $t0, 0x3C($s1)
    ctx->pc = 0x21c4a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_21c4a4:
    // 0x21c4a4: 0x8c860080  lw          $a2, 0x80($a0)
    ctx->pc = 0x21c4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_21c4a8:
    // 0x21c4a8: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x21c4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_21c4ac:
    // 0x21c4ac: 0x25090030  addiu       $t1, $t0, 0x30
    ctx->pc = 0x21c4acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
label_21c4b0:
    // 0x21c4b0: 0x95080006  lhu         $t0, 0x6($t0)
    ctx->pc = 0x21c4b0u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
label_21c4b4:
    // 0x21c4b4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x21c4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21c4b8:
    // 0x21c4b8: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x21c4b8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_21c4bc:
    // 0x21c4bc: 0x84140  sll         $t0, $t0, 5
    ctx->pc = 0x21c4bcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_21c4c0:
    // 0x21c4c0: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x21c4c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_21c4c4:
    // 0x21c4c4: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x21c4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_21c4c8:
    // 0x21c4c8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x21c4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21c4cc:
    // 0x21c4cc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x21c4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_21c4d0:
    // 0x21c4d0: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x21c4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_21c4d4:
    // 0x21c4d4: 0xace50008  sw          $a1, 0x8($a3)
    ctx->pc = 0x21c4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
label_21c4d8:
    // 0x21c4d8: 0x8e28003c  lw          $t0, 0x3C($s1)
    ctx->pc = 0x21c4d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_21c4dc:
    // 0x21c4dc: 0x8c8600b0  lw          $a2, 0xB0($a0)
    ctx->pc = 0x21c4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_21c4e0:
    // 0x21c4e0: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x21c4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_21c4e4:
    // 0x21c4e4: 0x25090030  addiu       $t1, $t0, 0x30
    ctx->pc = 0x21c4e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
label_21c4e8:
    // 0x21c4e8: 0x95080006  lhu         $t0, 0x6($t0)
    ctx->pc = 0x21c4e8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
label_21c4ec:
    // 0x21c4ec: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x21c4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21c4f0:
    // 0x21c4f0: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x21c4f0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_21c4f4:
    // 0x21c4f4: 0x84140  sll         $t0, $t0, 5
    ctx->pc = 0x21c4f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_21c4f8:
    // 0x21c4f8: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x21c4f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_21c4fc:
    // 0x21c4fc: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x21c4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_21c500:
    // 0x21c500: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x21c500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21c504:
    // 0x21c504: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x21c504u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_21c508:
    // 0x21c508: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x21c508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_21c50c:
    // 0x21c50c: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x21c50cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
label_21c510:
    // 0x21c510: 0x8e28003c  lw          $t0, 0x3C($s1)
    ctx->pc = 0x21c510u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_21c514:
    // 0x21c514: 0x8c8600e0  lw          $a2, 0xE0($a0)
    ctx->pc = 0x21c514u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_21c518:
    // 0x21c518: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x21c518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_21c51c:
    // 0x21c51c: 0x25090030  addiu       $t1, $t0, 0x30
    ctx->pc = 0x21c51cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
label_21c520:
    // 0x21c520: 0x95080006  lhu         $t0, 0x6($t0)
    ctx->pc = 0x21c520u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
label_21c524:
    // 0x21c524: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x21c524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21c528:
    // 0x21c528: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x21c528u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_21c52c:
    // 0x21c52c: 0x84140  sll         $t0, $t0, 5
    ctx->pc = 0x21c52cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_21c530:
    // 0x21c530: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x21c530u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_21c534:
    // 0x21c534: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x21c534u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_21c538:
    // 0x21c538: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x21c538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21c53c:
    // 0x21c53c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x21c53cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_21c540:
    // 0x21c540: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x21c540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_21c544:
    // 0x21c544: 0xace50010  sw          $a1, 0x10($a3)
    ctx->pc = 0x21c544u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 5));
label_21c548:
    // 0x21c548: 0x8e28003c  lw          $t0, 0x3C($s1)
    ctx->pc = 0x21c548u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_21c54c:
    // 0x21c54c: 0x8c860110  lw          $a2, 0x110($a0)
    ctx->pc = 0x21c54cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
label_21c550:
    // 0x21c550: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x21c550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_21c554:
    // 0x21c554: 0x25090030  addiu       $t1, $t0, 0x30
    ctx->pc = 0x21c554u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
label_21c558:
    // 0x21c558: 0x95080006  lhu         $t0, 0x6($t0)
    ctx->pc = 0x21c558u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
label_21c55c:
    // 0x21c55c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x21c55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21c560:
    // 0x21c560: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x21c560u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_21c564:
    // 0x21c564: 0x84140  sll         $t0, $t0, 5
    ctx->pc = 0x21c564u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_21c568:
    // 0x21c568: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x21c568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_21c56c:
    // 0x21c56c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x21c56cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_21c570:
    // 0x21c570: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x21c570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21c574:
    // 0x21c574: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x21c574u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_21c578:
    // 0x21c578: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x21c578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_21c57c:
    // 0x21c57c: 0xace50014  sw          $a1, 0x14($a3)
    ctx->pc = 0x21c57cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
label_21c580:
    // 0x21c580: 0x8e28003c  lw          $t0, 0x3C($s1)
    ctx->pc = 0x21c580u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_21c584:
    // 0x21c584: 0x8c860140  lw          $a2, 0x140($a0)
    ctx->pc = 0x21c584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
label_21c588:
    // 0x21c588: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x21c588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_21c58c:
    // 0x21c58c: 0x25090030  addiu       $t1, $t0, 0x30
    ctx->pc = 0x21c58cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
label_21c590:
    // 0x21c590: 0x95080006  lhu         $t0, 0x6($t0)
    ctx->pc = 0x21c590u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
label_21c594:
    // 0x21c594: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x21c594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21c598:
    // 0x21c598: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x21c598u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_21c59c:
    // 0x21c59c: 0x84140  sll         $t0, $t0, 5
    ctx->pc = 0x21c59cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_21c5a0:
    // 0x21c5a0: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x21c5a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_21c5a4:
    // 0x21c5a4: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x21c5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_21c5a8:
    // 0x21c5a8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x21c5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21c5ac:
    // 0x21c5ac: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x21c5acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_21c5b0:
    // 0x21c5b0: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x21c5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_21c5b4:
    // 0x21c5b4: 0xace50018  sw          $a1, 0x18($a3)
    ctx->pc = 0x21c5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 5));
label_21c5b8:
    // 0x21c5b8: 0x8e28003c  lw          $t0, 0x3C($s1)
    ctx->pc = 0x21c5b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_21c5bc:
    // 0x21c5bc: 0x8c860170  lw          $a2, 0x170($a0)
    ctx->pc = 0x21c5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 368)));
label_21c5c0:
    // 0x21c5c0: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x21c5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_21c5c4:
    // 0x21c5c4: 0x250a0030  addiu       $t2, $t0, 0x30
    ctx->pc = 0x21c5c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
label_21c5c8:
    // 0x21c5c8: 0x95080006  lhu         $t0, 0x6($t0)
    ctx->pc = 0x21c5c8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
label_21c5cc:
    // 0x21c5cc: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x21c5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
label_21c5d0:
    // 0x21c5d0: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x21c5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21c5d4:
    // 0x21c5d4: 0x82282b  sltu        $a1, $a0, $v0
    ctx->pc = 0x21c5d4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_21c5d8:
    // 0x21c5d8: 0x84940  sll         $t1, $t0, 5
    ctx->pc = 0x21c5d8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_21c5dc:
    // 0x21c5dc: 0x90c80000  lbu         $t0, 0x0($a2)
    ctx->pc = 0x21c5dcu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_21c5e0:
    // 0x21c5e0: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x21c5e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_21c5e4:
    // 0x21c5e4: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x21c5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_21c5e8:
    // 0x21c5e8: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x21c5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_21c5ec:
    // 0x21c5ec: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x21c5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_21c5f0:
    // 0x21c5f0: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x21c5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_21c5f4:
    // 0x21c5f4: 0xace6001c  sw          $a2, 0x1C($a3)
    ctx->pc = 0x21c5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 6));
label_21c5f8:
    // 0x21c5f8: 0x14a0ff8d  bnez        $a1, . + 4 + (-0x73 << 2)
label_21c5fc:
    if (ctx->pc == 0x21C5FCu) {
        ctx->pc = 0x21C5FCu;
            // 0x21c5fc: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->pc = 0x21C600u;
        goto label_21c600;
    }
    ctx->pc = 0x21C5F8u;
    {
        const bool branch_taken_0x21c5f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C5F8u;
            // 0x21c5fc: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c5f8) {
            ctx->pc = 0x21C430u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21c430;
        }
    }
    ctx->pc = 0x21C600u;
label_21c600:
    // 0x21c600: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x21c600u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_21c604:
    // 0x21c604: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_21c608:
    if (ctx->pc == 0x21C608u) {
        ctx->pc = 0x21C60Cu;
        goto label_21c60c;
    }
    ctx->pc = 0x21C604u;
    {
        const bool branch_taken_0x21c604 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c604) {
            ctx->pc = 0x21C658u;
            goto label_21c658;
        }
    }
    ctx->pc = 0x21C60Cu;
label_21c60c:
    // 0x21c60c: 0x8e26003c  lw          $a2, 0x3C($s1)
    ctx->pc = 0x21c60cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_21c610:
    // 0x21c610: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x21c610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_21c614:
    // 0x21c614: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x21c614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_21c618:
    // 0x21c618: 0x24c90030  addiu       $t1, $a2, 0x30
    ctx->pc = 0x21c618u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_21c61c:
    // 0x21c61c: 0x94c60006  lhu         $a2, 0x6($a2)
    ctx->pc = 0x21c61cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_21c620:
    // 0x21c620: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x21c620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_21c624:
    // 0x21c624: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x21c624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_21c628:
    // 0x21c628: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x21c628u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_21c62c:
    // 0x21c62c: 0x64140  sll         $t0, $a2, 5
    ctx->pc = 0x21c62cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_21c630:
    // 0x21c630: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x21c630u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_21c634:
    // 0x21c634: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x21c634u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_21c638:
    // 0x21c638: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x21c638u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_21c63c:
    // 0x21c63c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x21c63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21c640:
    // 0x21c640: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x21c640u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_21c644:
    // 0x21c644: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x21c644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_21c648:
    // 0x21c648: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x21c648u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_21c64c:
    // 0x21c64c: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_21c650:
    if (ctx->pc == 0x21C650u) {
        ctx->pc = 0x21C650u;
            // 0x21c650: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x21C654u;
        goto label_21c654;
    }
    ctx->pc = 0x21C64Cu;
    {
        const bool branch_taken_0x21c64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C64Cu;
            // 0x21c650: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c64c) {
            ctx->pc = 0x21C60Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21c60c;
        }
    }
    ctx->pc = 0x21C654u;
label_21c654:
    // 0x21c654: 0x0  nop
    ctx->pc = 0x21c654u;
    // NOP
label_21c658:
    // 0x21c658: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x21c658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_21c65c:
    // 0x21c65c: 0xc08e700  jal         func_239C00
label_21c660:
    if (ctx->pc == 0x21C660u) {
        ctx->pc = 0x21C660u;
            // 0x21c660: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x21C664u;
        goto label_21c664;
    }
    ctx->pc = 0x21C65Cu;
    SET_GPR_U32(ctx, 31, 0x21C664u);
    ctx->pc = 0x21C660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C65Cu;
            // 0x21c660: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239C00u;
    if (runtime->hasFunction(0x239C00u)) {
        auto targetFn = runtime->lookupFunction(0x239C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C664u; }
        if (ctx->pc != 0x21C664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239C00_0x239c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C664u; }
        if (ctx->pc != 0x21C664u) { return; }
    }
    ctx->pc = 0x21C664u;
label_21c664:
    // 0x21c664: 0x966301d4  lhu         $v1, 0x1D4($s3)
    ctx->pc = 0x21c664u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 468)));
label_21c668:
    // 0x21c668: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_21c66c:
    if (ctx->pc == 0x21C66Cu) {
        ctx->pc = 0x21C66Cu;
            // 0x21c66c: 0x964301d4  lhu         $v1, 0x1D4($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 468)));
        ctx->pc = 0x21C670u;
        goto label_21c670;
    }
    ctx->pc = 0x21C668u;
    {
        const bool branch_taken_0x21c668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c668) {
            ctx->pc = 0x21C66Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21C668u;
            // 0x21c66c: 0x964301d4  lhu         $v1, 0x1D4($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 468)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21C680u;
            goto label_21c680;
        }
    }
    ctx->pc = 0x21C670u;
label_21c670:
    // 0x21c670: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21c670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21c674:
    // 0x21c674: 0xc0895a0  jal         func_225680
label_21c678:
    if (ctx->pc == 0x21C678u) {
        ctx->pc = 0x21C678u;
            // 0x21c678: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x21C67Cu;
        goto label_21c67c;
    }
    ctx->pc = 0x21C674u;
    SET_GPR_U32(ctx, 31, 0x21C67Cu);
    ctx->pc = 0x21C678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C674u;
            // 0x21c678: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225680u;
    if (runtime->hasFunction(0x225680u)) {
        auto targetFn = runtime->lookupFunction(0x225680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C67Cu; }
        if (ctx->pc != 0x21C67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225680_0x225680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C67Cu; }
        if (ctx->pc != 0x21C67Cu) { return; }
    }
    ctx->pc = 0x21C67Cu;
label_21c67c:
    // 0x21c67c: 0x964301d4  lhu         $v1, 0x1D4($s2)
    ctx->pc = 0x21c67cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 468)));
label_21c680:
    // 0x21c680: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_21c684:
    if (ctx->pc == 0x21C684u) {
        ctx->pc = 0x21C684u;
            // 0x21c684: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x21C688u;
        goto label_21c688;
    }
    ctx->pc = 0x21C680u;
    {
        const bool branch_taken_0x21c680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c680) {
            ctx->pc = 0x21C684u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21C680u;
            // 0x21c684: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21C698u;
            goto label_21c698;
        }
    }
    ctx->pc = 0x21C688u;
label_21c688:
    // 0x21c688: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21c688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21c68c:
    // 0x21c68c: 0xc0895a0  jal         func_225680
label_21c690:
    if (ctx->pc == 0x21C690u) {
        ctx->pc = 0x21C690u;
            // 0x21c690: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x21C694u;
        goto label_21c694;
    }
    ctx->pc = 0x21C68Cu;
    SET_GPR_U32(ctx, 31, 0x21C694u);
    ctx->pc = 0x21C690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C68Cu;
            // 0x21c690: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225680u;
    if (runtime->hasFunction(0x225680u)) {
        auto targetFn = runtime->lookupFunction(0x225680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C694u; }
        if (ctx->pc != 0x21C694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225680_0x225680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C694u; }
        if (ctx->pc != 0x21C694u) { return; }
    }
    ctx->pc = 0x21C694u;
label_21c694:
    // 0x21c694: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x21c694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21c698:
    // 0x21c698: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x21c698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_21c69c:
    // 0x21c69c: 0xe6082b  sltu        $at, $a3, $a2
    ctx->pc = 0x21c69cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_21c6a0:
    // 0x21c6a0: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_21c6a4:
    if (ctx->pc == 0x21C6A4u) {
        ctx->pc = 0x21C6A8u;
        goto label_21c6a8;
    }
    ctx->pc = 0x21C6A0u;
    {
        const bool branch_taken_0x21c6a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c6a0) {
            ctx->pc = 0x21C718u;
            goto label_21c718;
        }
    }
    ctx->pc = 0x21C6A8u;
label_21c6a8:
    // 0x21c6a8: 0x8ce50020  lw          $a1, 0x20($a3)
    ctx->pc = 0x21c6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
label_21c6ac:
    // 0x21c6ac: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x21c6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21c6b0:
    // 0x21c6b0: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x21c6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_21c6b4:
    // 0x21c6b4: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x21c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_21c6b8:
    // 0x21c6b8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21c6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_21c6bc:
    // 0x21c6bc: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x21c6bcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_21c6c0:
    // 0x21c6c0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x21c6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_21c6c4:
    // 0x21c6c4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x21c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_21c6c8:
    // 0x21c6c8: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x21c6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_21c6cc:
    // 0x21c6cc: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x21c6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21c6d0:
    // 0x21c6d0: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x21c6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
label_21c6d4:
    // 0x21c6d4: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x21c6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21c6d8:
    // 0x21c6d8: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x21c6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_21c6dc:
    // 0x21c6dc: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x21c6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21c6e0:
    // 0x21c6e0: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x21c6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
label_21c6e4:
    // 0x21c6e4: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x21c6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21c6e8:
    // 0x21c6e8: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x21c6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
label_21c6ec:
    // 0x21c6ec: 0xc4e00014  lwc1        $f0, 0x14($a3)
    ctx->pc = 0x21c6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21c6f0:
    // 0x21c6f0: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x21c6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
label_21c6f4:
    // 0x21c6f4: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x21c6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21c6f8:
    // 0x21c6f8: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x21c6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
label_21c6fc:
    // 0x21c6fc: 0xc4e0001c  lwc1        $f0, 0x1C($a3)
    ctx->pc = 0x21c6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21c700:
    // 0x21c700: 0xe460004c  swc1        $f0, 0x4C($v1)
    ctx->pc = 0x21c700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 76), bits); }
label_21c704:
    // 0x21c704: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x21c704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
label_21c708:
    // 0x21c708: 0xe6182b  sltu        $v1, $a3, $a2
    ctx->pc = 0x21c708u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_21c70c:
    // 0x21c70c: 0x5460ffe7  bnel        $v1, $zero, . + 4 + (-0x19 << 2)
label_21c710:
    if (ctx->pc == 0x21C710u) {
        ctx->pc = 0x21C710u;
            // 0x21c710: 0x8ce50020  lw          $a1, 0x20($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
        ctx->pc = 0x21C714u;
        goto label_21c714;
    }
    ctx->pc = 0x21C70Cu;
    {
        const bool branch_taken_0x21c70c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c70c) {
            ctx->pc = 0x21C710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21C70Cu;
            // 0x21c710: 0x8ce50020  lw          $a1, 0x20($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21C6ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21c6ac;
        }
    }
    ctx->pc = 0x21C714u;
label_21c714:
    // 0x21c714: 0x0  nop
    ctx->pc = 0x21c714u;
    // NOP
label_21c718:
    // 0x21c718: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21c718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_21c71c:
    // 0x21c71c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21c71cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21c720:
    // 0x21c720: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21c720u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21c724:
    // 0x21c724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21c724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21c728:
    // 0x21c728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21c728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21c72c:
    // 0x21c72c: 0x3e00008  jr          $ra
label_21c730:
    if (ctx->pc == 0x21C730u) {
        ctx->pc = 0x21C730u;
            // 0x21c730: 0x27bd0470  addiu       $sp, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->pc = 0x21C734u;
        goto label_21c734;
    }
    ctx->pc = 0x21C72Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C72Cu;
            // 0x21c730: 0x27bd0470  addiu       $sp, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C734u;
label_21c734:
    // 0x21c734: 0x0  nop
    ctx->pc = 0x21c734u;
    // NOP
label_21c738:
    // 0x21c738: 0x0  nop
    ctx->pc = 0x21c738u;
    // NOP
label_21c73c:
    // 0x21c73c: 0x0  nop
    ctx->pc = 0x21c73cu;
    // NOP
}
