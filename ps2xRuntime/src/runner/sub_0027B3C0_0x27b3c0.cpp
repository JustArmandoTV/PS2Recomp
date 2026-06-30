#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027B3C0
// Address: 0x27b3c0 - 0x27c0d0
void sub_0027B3C0_0x27b3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B3C0_0x27b3c0");
#endif

    switch (ctx->pc) {
        case 0x27b3c0u: goto label_27b3c0;
        case 0x27b3c4u: goto label_27b3c4;
        case 0x27b3c8u: goto label_27b3c8;
        case 0x27b3ccu: goto label_27b3cc;
        case 0x27b3d0u: goto label_27b3d0;
        case 0x27b3d4u: goto label_27b3d4;
        case 0x27b3d8u: goto label_27b3d8;
        case 0x27b3dcu: goto label_27b3dc;
        case 0x27b3e0u: goto label_27b3e0;
        case 0x27b3e4u: goto label_27b3e4;
        case 0x27b3e8u: goto label_27b3e8;
        case 0x27b3ecu: goto label_27b3ec;
        case 0x27b3f0u: goto label_27b3f0;
        case 0x27b3f4u: goto label_27b3f4;
        case 0x27b3f8u: goto label_27b3f8;
        case 0x27b3fcu: goto label_27b3fc;
        case 0x27b400u: goto label_27b400;
        case 0x27b404u: goto label_27b404;
        case 0x27b408u: goto label_27b408;
        case 0x27b40cu: goto label_27b40c;
        case 0x27b410u: goto label_27b410;
        case 0x27b414u: goto label_27b414;
        case 0x27b418u: goto label_27b418;
        case 0x27b41cu: goto label_27b41c;
        case 0x27b420u: goto label_27b420;
        case 0x27b424u: goto label_27b424;
        case 0x27b428u: goto label_27b428;
        case 0x27b42cu: goto label_27b42c;
        case 0x27b430u: goto label_27b430;
        case 0x27b434u: goto label_27b434;
        case 0x27b438u: goto label_27b438;
        case 0x27b43cu: goto label_27b43c;
        case 0x27b440u: goto label_27b440;
        case 0x27b444u: goto label_27b444;
        case 0x27b448u: goto label_27b448;
        case 0x27b44cu: goto label_27b44c;
        case 0x27b450u: goto label_27b450;
        case 0x27b454u: goto label_27b454;
        case 0x27b458u: goto label_27b458;
        case 0x27b45cu: goto label_27b45c;
        case 0x27b460u: goto label_27b460;
        case 0x27b464u: goto label_27b464;
        case 0x27b468u: goto label_27b468;
        case 0x27b46cu: goto label_27b46c;
        case 0x27b470u: goto label_27b470;
        case 0x27b474u: goto label_27b474;
        case 0x27b478u: goto label_27b478;
        case 0x27b47cu: goto label_27b47c;
        case 0x27b480u: goto label_27b480;
        case 0x27b484u: goto label_27b484;
        case 0x27b488u: goto label_27b488;
        case 0x27b48cu: goto label_27b48c;
        case 0x27b490u: goto label_27b490;
        case 0x27b494u: goto label_27b494;
        case 0x27b498u: goto label_27b498;
        case 0x27b49cu: goto label_27b49c;
        case 0x27b4a0u: goto label_27b4a0;
        case 0x27b4a4u: goto label_27b4a4;
        case 0x27b4a8u: goto label_27b4a8;
        case 0x27b4acu: goto label_27b4ac;
        case 0x27b4b0u: goto label_27b4b0;
        case 0x27b4b4u: goto label_27b4b4;
        case 0x27b4b8u: goto label_27b4b8;
        case 0x27b4bcu: goto label_27b4bc;
        case 0x27b4c0u: goto label_27b4c0;
        case 0x27b4c4u: goto label_27b4c4;
        case 0x27b4c8u: goto label_27b4c8;
        case 0x27b4ccu: goto label_27b4cc;
        case 0x27b4d0u: goto label_27b4d0;
        case 0x27b4d4u: goto label_27b4d4;
        case 0x27b4d8u: goto label_27b4d8;
        case 0x27b4dcu: goto label_27b4dc;
        case 0x27b4e0u: goto label_27b4e0;
        case 0x27b4e4u: goto label_27b4e4;
        case 0x27b4e8u: goto label_27b4e8;
        case 0x27b4ecu: goto label_27b4ec;
        case 0x27b4f0u: goto label_27b4f0;
        case 0x27b4f4u: goto label_27b4f4;
        case 0x27b4f8u: goto label_27b4f8;
        case 0x27b4fcu: goto label_27b4fc;
        case 0x27b500u: goto label_27b500;
        case 0x27b504u: goto label_27b504;
        case 0x27b508u: goto label_27b508;
        case 0x27b50cu: goto label_27b50c;
        case 0x27b510u: goto label_27b510;
        case 0x27b514u: goto label_27b514;
        case 0x27b518u: goto label_27b518;
        case 0x27b51cu: goto label_27b51c;
        case 0x27b520u: goto label_27b520;
        case 0x27b524u: goto label_27b524;
        case 0x27b528u: goto label_27b528;
        case 0x27b52cu: goto label_27b52c;
        case 0x27b530u: goto label_27b530;
        case 0x27b534u: goto label_27b534;
        case 0x27b538u: goto label_27b538;
        case 0x27b53cu: goto label_27b53c;
        case 0x27b540u: goto label_27b540;
        case 0x27b544u: goto label_27b544;
        case 0x27b548u: goto label_27b548;
        case 0x27b54cu: goto label_27b54c;
        case 0x27b550u: goto label_27b550;
        case 0x27b554u: goto label_27b554;
        case 0x27b558u: goto label_27b558;
        case 0x27b55cu: goto label_27b55c;
        case 0x27b560u: goto label_27b560;
        case 0x27b564u: goto label_27b564;
        case 0x27b568u: goto label_27b568;
        case 0x27b56cu: goto label_27b56c;
        case 0x27b570u: goto label_27b570;
        case 0x27b574u: goto label_27b574;
        case 0x27b578u: goto label_27b578;
        case 0x27b57cu: goto label_27b57c;
        case 0x27b580u: goto label_27b580;
        case 0x27b584u: goto label_27b584;
        case 0x27b588u: goto label_27b588;
        case 0x27b58cu: goto label_27b58c;
        case 0x27b590u: goto label_27b590;
        case 0x27b594u: goto label_27b594;
        case 0x27b598u: goto label_27b598;
        case 0x27b59cu: goto label_27b59c;
        case 0x27b5a0u: goto label_27b5a0;
        case 0x27b5a4u: goto label_27b5a4;
        case 0x27b5a8u: goto label_27b5a8;
        case 0x27b5acu: goto label_27b5ac;
        case 0x27b5b0u: goto label_27b5b0;
        case 0x27b5b4u: goto label_27b5b4;
        case 0x27b5b8u: goto label_27b5b8;
        case 0x27b5bcu: goto label_27b5bc;
        case 0x27b5c0u: goto label_27b5c0;
        case 0x27b5c4u: goto label_27b5c4;
        case 0x27b5c8u: goto label_27b5c8;
        case 0x27b5ccu: goto label_27b5cc;
        case 0x27b5d0u: goto label_27b5d0;
        case 0x27b5d4u: goto label_27b5d4;
        case 0x27b5d8u: goto label_27b5d8;
        case 0x27b5dcu: goto label_27b5dc;
        case 0x27b5e0u: goto label_27b5e0;
        case 0x27b5e4u: goto label_27b5e4;
        case 0x27b5e8u: goto label_27b5e8;
        case 0x27b5ecu: goto label_27b5ec;
        case 0x27b5f0u: goto label_27b5f0;
        case 0x27b5f4u: goto label_27b5f4;
        case 0x27b5f8u: goto label_27b5f8;
        case 0x27b5fcu: goto label_27b5fc;
        case 0x27b600u: goto label_27b600;
        case 0x27b604u: goto label_27b604;
        case 0x27b608u: goto label_27b608;
        case 0x27b60cu: goto label_27b60c;
        case 0x27b610u: goto label_27b610;
        case 0x27b614u: goto label_27b614;
        case 0x27b618u: goto label_27b618;
        case 0x27b61cu: goto label_27b61c;
        case 0x27b620u: goto label_27b620;
        case 0x27b624u: goto label_27b624;
        case 0x27b628u: goto label_27b628;
        case 0x27b62cu: goto label_27b62c;
        case 0x27b630u: goto label_27b630;
        case 0x27b634u: goto label_27b634;
        case 0x27b638u: goto label_27b638;
        case 0x27b63cu: goto label_27b63c;
        case 0x27b640u: goto label_27b640;
        case 0x27b644u: goto label_27b644;
        case 0x27b648u: goto label_27b648;
        case 0x27b64cu: goto label_27b64c;
        case 0x27b650u: goto label_27b650;
        case 0x27b654u: goto label_27b654;
        case 0x27b658u: goto label_27b658;
        case 0x27b65cu: goto label_27b65c;
        case 0x27b660u: goto label_27b660;
        case 0x27b664u: goto label_27b664;
        case 0x27b668u: goto label_27b668;
        case 0x27b66cu: goto label_27b66c;
        case 0x27b670u: goto label_27b670;
        case 0x27b674u: goto label_27b674;
        case 0x27b678u: goto label_27b678;
        case 0x27b67cu: goto label_27b67c;
        case 0x27b680u: goto label_27b680;
        case 0x27b684u: goto label_27b684;
        case 0x27b688u: goto label_27b688;
        case 0x27b68cu: goto label_27b68c;
        case 0x27b690u: goto label_27b690;
        case 0x27b694u: goto label_27b694;
        case 0x27b698u: goto label_27b698;
        case 0x27b69cu: goto label_27b69c;
        case 0x27b6a0u: goto label_27b6a0;
        case 0x27b6a4u: goto label_27b6a4;
        case 0x27b6a8u: goto label_27b6a8;
        case 0x27b6acu: goto label_27b6ac;
        case 0x27b6b0u: goto label_27b6b0;
        case 0x27b6b4u: goto label_27b6b4;
        case 0x27b6b8u: goto label_27b6b8;
        case 0x27b6bcu: goto label_27b6bc;
        case 0x27b6c0u: goto label_27b6c0;
        case 0x27b6c4u: goto label_27b6c4;
        case 0x27b6c8u: goto label_27b6c8;
        case 0x27b6ccu: goto label_27b6cc;
        case 0x27b6d0u: goto label_27b6d0;
        case 0x27b6d4u: goto label_27b6d4;
        case 0x27b6d8u: goto label_27b6d8;
        case 0x27b6dcu: goto label_27b6dc;
        case 0x27b6e0u: goto label_27b6e0;
        case 0x27b6e4u: goto label_27b6e4;
        case 0x27b6e8u: goto label_27b6e8;
        case 0x27b6ecu: goto label_27b6ec;
        case 0x27b6f0u: goto label_27b6f0;
        case 0x27b6f4u: goto label_27b6f4;
        case 0x27b6f8u: goto label_27b6f8;
        case 0x27b6fcu: goto label_27b6fc;
        case 0x27b700u: goto label_27b700;
        case 0x27b704u: goto label_27b704;
        case 0x27b708u: goto label_27b708;
        case 0x27b70cu: goto label_27b70c;
        case 0x27b710u: goto label_27b710;
        case 0x27b714u: goto label_27b714;
        case 0x27b718u: goto label_27b718;
        case 0x27b71cu: goto label_27b71c;
        case 0x27b720u: goto label_27b720;
        case 0x27b724u: goto label_27b724;
        case 0x27b728u: goto label_27b728;
        case 0x27b72cu: goto label_27b72c;
        case 0x27b730u: goto label_27b730;
        case 0x27b734u: goto label_27b734;
        case 0x27b738u: goto label_27b738;
        case 0x27b73cu: goto label_27b73c;
        case 0x27b740u: goto label_27b740;
        case 0x27b744u: goto label_27b744;
        case 0x27b748u: goto label_27b748;
        case 0x27b74cu: goto label_27b74c;
        case 0x27b750u: goto label_27b750;
        case 0x27b754u: goto label_27b754;
        case 0x27b758u: goto label_27b758;
        case 0x27b75cu: goto label_27b75c;
        case 0x27b760u: goto label_27b760;
        case 0x27b764u: goto label_27b764;
        case 0x27b768u: goto label_27b768;
        case 0x27b76cu: goto label_27b76c;
        case 0x27b770u: goto label_27b770;
        case 0x27b774u: goto label_27b774;
        case 0x27b778u: goto label_27b778;
        case 0x27b77cu: goto label_27b77c;
        case 0x27b780u: goto label_27b780;
        case 0x27b784u: goto label_27b784;
        case 0x27b788u: goto label_27b788;
        case 0x27b78cu: goto label_27b78c;
        case 0x27b790u: goto label_27b790;
        case 0x27b794u: goto label_27b794;
        case 0x27b798u: goto label_27b798;
        case 0x27b79cu: goto label_27b79c;
        case 0x27b7a0u: goto label_27b7a0;
        case 0x27b7a4u: goto label_27b7a4;
        case 0x27b7a8u: goto label_27b7a8;
        case 0x27b7acu: goto label_27b7ac;
        case 0x27b7b0u: goto label_27b7b0;
        case 0x27b7b4u: goto label_27b7b4;
        case 0x27b7b8u: goto label_27b7b8;
        case 0x27b7bcu: goto label_27b7bc;
        case 0x27b7c0u: goto label_27b7c0;
        case 0x27b7c4u: goto label_27b7c4;
        case 0x27b7c8u: goto label_27b7c8;
        case 0x27b7ccu: goto label_27b7cc;
        case 0x27b7d0u: goto label_27b7d0;
        case 0x27b7d4u: goto label_27b7d4;
        case 0x27b7d8u: goto label_27b7d8;
        case 0x27b7dcu: goto label_27b7dc;
        case 0x27b7e0u: goto label_27b7e0;
        case 0x27b7e4u: goto label_27b7e4;
        case 0x27b7e8u: goto label_27b7e8;
        case 0x27b7ecu: goto label_27b7ec;
        case 0x27b7f0u: goto label_27b7f0;
        case 0x27b7f4u: goto label_27b7f4;
        case 0x27b7f8u: goto label_27b7f8;
        case 0x27b7fcu: goto label_27b7fc;
        case 0x27b800u: goto label_27b800;
        case 0x27b804u: goto label_27b804;
        case 0x27b808u: goto label_27b808;
        case 0x27b80cu: goto label_27b80c;
        case 0x27b810u: goto label_27b810;
        case 0x27b814u: goto label_27b814;
        case 0x27b818u: goto label_27b818;
        case 0x27b81cu: goto label_27b81c;
        case 0x27b820u: goto label_27b820;
        case 0x27b824u: goto label_27b824;
        case 0x27b828u: goto label_27b828;
        case 0x27b82cu: goto label_27b82c;
        case 0x27b830u: goto label_27b830;
        case 0x27b834u: goto label_27b834;
        case 0x27b838u: goto label_27b838;
        case 0x27b83cu: goto label_27b83c;
        case 0x27b840u: goto label_27b840;
        case 0x27b844u: goto label_27b844;
        case 0x27b848u: goto label_27b848;
        case 0x27b84cu: goto label_27b84c;
        case 0x27b850u: goto label_27b850;
        case 0x27b854u: goto label_27b854;
        case 0x27b858u: goto label_27b858;
        case 0x27b85cu: goto label_27b85c;
        case 0x27b860u: goto label_27b860;
        case 0x27b864u: goto label_27b864;
        case 0x27b868u: goto label_27b868;
        case 0x27b86cu: goto label_27b86c;
        case 0x27b870u: goto label_27b870;
        case 0x27b874u: goto label_27b874;
        case 0x27b878u: goto label_27b878;
        case 0x27b87cu: goto label_27b87c;
        case 0x27b880u: goto label_27b880;
        case 0x27b884u: goto label_27b884;
        case 0x27b888u: goto label_27b888;
        case 0x27b88cu: goto label_27b88c;
        case 0x27b890u: goto label_27b890;
        case 0x27b894u: goto label_27b894;
        case 0x27b898u: goto label_27b898;
        case 0x27b89cu: goto label_27b89c;
        case 0x27b8a0u: goto label_27b8a0;
        case 0x27b8a4u: goto label_27b8a4;
        case 0x27b8a8u: goto label_27b8a8;
        case 0x27b8acu: goto label_27b8ac;
        case 0x27b8b0u: goto label_27b8b0;
        case 0x27b8b4u: goto label_27b8b4;
        case 0x27b8b8u: goto label_27b8b8;
        case 0x27b8bcu: goto label_27b8bc;
        case 0x27b8c0u: goto label_27b8c0;
        case 0x27b8c4u: goto label_27b8c4;
        case 0x27b8c8u: goto label_27b8c8;
        case 0x27b8ccu: goto label_27b8cc;
        case 0x27b8d0u: goto label_27b8d0;
        case 0x27b8d4u: goto label_27b8d4;
        case 0x27b8d8u: goto label_27b8d8;
        case 0x27b8dcu: goto label_27b8dc;
        case 0x27b8e0u: goto label_27b8e0;
        case 0x27b8e4u: goto label_27b8e4;
        case 0x27b8e8u: goto label_27b8e8;
        case 0x27b8ecu: goto label_27b8ec;
        case 0x27b8f0u: goto label_27b8f0;
        case 0x27b8f4u: goto label_27b8f4;
        case 0x27b8f8u: goto label_27b8f8;
        case 0x27b8fcu: goto label_27b8fc;
        case 0x27b900u: goto label_27b900;
        case 0x27b904u: goto label_27b904;
        case 0x27b908u: goto label_27b908;
        case 0x27b90cu: goto label_27b90c;
        case 0x27b910u: goto label_27b910;
        case 0x27b914u: goto label_27b914;
        case 0x27b918u: goto label_27b918;
        case 0x27b91cu: goto label_27b91c;
        case 0x27b920u: goto label_27b920;
        case 0x27b924u: goto label_27b924;
        case 0x27b928u: goto label_27b928;
        case 0x27b92cu: goto label_27b92c;
        case 0x27b930u: goto label_27b930;
        case 0x27b934u: goto label_27b934;
        case 0x27b938u: goto label_27b938;
        case 0x27b93cu: goto label_27b93c;
        case 0x27b940u: goto label_27b940;
        case 0x27b944u: goto label_27b944;
        case 0x27b948u: goto label_27b948;
        case 0x27b94cu: goto label_27b94c;
        case 0x27b950u: goto label_27b950;
        case 0x27b954u: goto label_27b954;
        case 0x27b958u: goto label_27b958;
        case 0x27b95cu: goto label_27b95c;
        case 0x27b960u: goto label_27b960;
        case 0x27b964u: goto label_27b964;
        case 0x27b968u: goto label_27b968;
        case 0x27b96cu: goto label_27b96c;
        case 0x27b970u: goto label_27b970;
        case 0x27b974u: goto label_27b974;
        case 0x27b978u: goto label_27b978;
        case 0x27b97cu: goto label_27b97c;
        case 0x27b980u: goto label_27b980;
        case 0x27b984u: goto label_27b984;
        case 0x27b988u: goto label_27b988;
        case 0x27b98cu: goto label_27b98c;
        case 0x27b990u: goto label_27b990;
        case 0x27b994u: goto label_27b994;
        case 0x27b998u: goto label_27b998;
        case 0x27b99cu: goto label_27b99c;
        case 0x27b9a0u: goto label_27b9a0;
        case 0x27b9a4u: goto label_27b9a4;
        case 0x27b9a8u: goto label_27b9a8;
        case 0x27b9acu: goto label_27b9ac;
        case 0x27b9b0u: goto label_27b9b0;
        case 0x27b9b4u: goto label_27b9b4;
        case 0x27b9b8u: goto label_27b9b8;
        case 0x27b9bcu: goto label_27b9bc;
        case 0x27b9c0u: goto label_27b9c0;
        case 0x27b9c4u: goto label_27b9c4;
        case 0x27b9c8u: goto label_27b9c8;
        case 0x27b9ccu: goto label_27b9cc;
        case 0x27b9d0u: goto label_27b9d0;
        case 0x27b9d4u: goto label_27b9d4;
        case 0x27b9d8u: goto label_27b9d8;
        case 0x27b9dcu: goto label_27b9dc;
        case 0x27b9e0u: goto label_27b9e0;
        case 0x27b9e4u: goto label_27b9e4;
        case 0x27b9e8u: goto label_27b9e8;
        case 0x27b9ecu: goto label_27b9ec;
        case 0x27b9f0u: goto label_27b9f0;
        case 0x27b9f4u: goto label_27b9f4;
        case 0x27b9f8u: goto label_27b9f8;
        case 0x27b9fcu: goto label_27b9fc;
        case 0x27ba00u: goto label_27ba00;
        case 0x27ba04u: goto label_27ba04;
        case 0x27ba08u: goto label_27ba08;
        case 0x27ba0cu: goto label_27ba0c;
        case 0x27ba10u: goto label_27ba10;
        case 0x27ba14u: goto label_27ba14;
        case 0x27ba18u: goto label_27ba18;
        case 0x27ba1cu: goto label_27ba1c;
        case 0x27ba20u: goto label_27ba20;
        case 0x27ba24u: goto label_27ba24;
        case 0x27ba28u: goto label_27ba28;
        case 0x27ba2cu: goto label_27ba2c;
        case 0x27ba30u: goto label_27ba30;
        case 0x27ba34u: goto label_27ba34;
        case 0x27ba38u: goto label_27ba38;
        case 0x27ba3cu: goto label_27ba3c;
        case 0x27ba40u: goto label_27ba40;
        case 0x27ba44u: goto label_27ba44;
        case 0x27ba48u: goto label_27ba48;
        case 0x27ba4cu: goto label_27ba4c;
        case 0x27ba50u: goto label_27ba50;
        case 0x27ba54u: goto label_27ba54;
        case 0x27ba58u: goto label_27ba58;
        case 0x27ba5cu: goto label_27ba5c;
        case 0x27ba60u: goto label_27ba60;
        case 0x27ba64u: goto label_27ba64;
        case 0x27ba68u: goto label_27ba68;
        case 0x27ba6cu: goto label_27ba6c;
        case 0x27ba70u: goto label_27ba70;
        case 0x27ba74u: goto label_27ba74;
        case 0x27ba78u: goto label_27ba78;
        case 0x27ba7cu: goto label_27ba7c;
        case 0x27ba80u: goto label_27ba80;
        case 0x27ba84u: goto label_27ba84;
        case 0x27ba88u: goto label_27ba88;
        case 0x27ba8cu: goto label_27ba8c;
        case 0x27ba90u: goto label_27ba90;
        case 0x27ba94u: goto label_27ba94;
        case 0x27ba98u: goto label_27ba98;
        case 0x27ba9cu: goto label_27ba9c;
        case 0x27baa0u: goto label_27baa0;
        case 0x27baa4u: goto label_27baa4;
        case 0x27baa8u: goto label_27baa8;
        case 0x27baacu: goto label_27baac;
        case 0x27bab0u: goto label_27bab0;
        case 0x27bab4u: goto label_27bab4;
        case 0x27bab8u: goto label_27bab8;
        case 0x27babcu: goto label_27babc;
        case 0x27bac0u: goto label_27bac0;
        case 0x27bac4u: goto label_27bac4;
        case 0x27bac8u: goto label_27bac8;
        case 0x27baccu: goto label_27bacc;
        case 0x27bad0u: goto label_27bad0;
        case 0x27bad4u: goto label_27bad4;
        case 0x27bad8u: goto label_27bad8;
        case 0x27badcu: goto label_27badc;
        case 0x27bae0u: goto label_27bae0;
        case 0x27bae4u: goto label_27bae4;
        case 0x27bae8u: goto label_27bae8;
        case 0x27baecu: goto label_27baec;
        case 0x27baf0u: goto label_27baf0;
        case 0x27baf4u: goto label_27baf4;
        case 0x27baf8u: goto label_27baf8;
        case 0x27bafcu: goto label_27bafc;
        case 0x27bb00u: goto label_27bb00;
        case 0x27bb04u: goto label_27bb04;
        case 0x27bb08u: goto label_27bb08;
        case 0x27bb0cu: goto label_27bb0c;
        case 0x27bb10u: goto label_27bb10;
        case 0x27bb14u: goto label_27bb14;
        case 0x27bb18u: goto label_27bb18;
        case 0x27bb1cu: goto label_27bb1c;
        case 0x27bb20u: goto label_27bb20;
        case 0x27bb24u: goto label_27bb24;
        case 0x27bb28u: goto label_27bb28;
        case 0x27bb2cu: goto label_27bb2c;
        case 0x27bb30u: goto label_27bb30;
        case 0x27bb34u: goto label_27bb34;
        case 0x27bb38u: goto label_27bb38;
        case 0x27bb3cu: goto label_27bb3c;
        case 0x27bb40u: goto label_27bb40;
        case 0x27bb44u: goto label_27bb44;
        case 0x27bb48u: goto label_27bb48;
        case 0x27bb4cu: goto label_27bb4c;
        case 0x27bb50u: goto label_27bb50;
        case 0x27bb54u: goto label_27bb54;
        case 0x27bb58u: goto label_27bb58;
        case 0x27bb5cu: goto label_27bb5c;
        case 0x27bb60u: goto label_27bb60;
        case 0x27bb64u: goto label_27bb64;
        case 0x27bb68u: goto label_27bb68;
        case 0x27bb6cu: goto label_27bb6c;
        case 0x27bb70u: goto label_27bb70;
        case 0x27bb74u: goto label_27bb74;
        case 0x27bb78u: goto label_27bb78;
        case 0x27bb7cu: goto label_27bb7c;
        case 0x27bb80u: goto label_27bb80;
        case 0x27bb84u: goto label_27bb84;
        case 0x27bb88u: goto label_27bb88;
        case 0x27bb8cu: goto label_27bb8c;
        case 0x27bb90u: goto label_27bb90;
        case 0x27bb94u: goto label_27bb94;
        case 0x27bb98u: goto label_27bb98;
        case 0x27bb9cu: goto label_27bb9c;
        case 0x27bba0u: goto label_27bba0;
        case 0x27bba4u: goto label_27bba4;
        case 0x27bba8u: goto label_27bba8;
        case 0x27bbacu: goto label_27bbac;
        case 0x27bbb0u: goto label_27bbb0;
        case 0x27bbb4u: goto label_27bbb4;
        case 0x27bbb8u: goto label_27bbb8;
        case 0x27bbbcu: goto label_27bbbc;
        case 0x27bbc0u: goto label_27bbc0;
        case 0x27bbc4u: goto label_27bbc4;
        case 0x27bbc8u: goto label_27bbc8;
        case 0x27bbccu: goto label_27bbcc;
        case 0x27bbd0u: goto label_27bbd0;
        case 0x27bbd4u: goto label_27bbd4;
        case 0x27bbd8u: goto label_27bbd8;
        case 0x27bbdcu: goto label_27bbdc;
        case 0x27bbe0u: goto label_27bbe0;
        case 0x27bbe4u: goto label_27bbe4;
        case 0x27bbe8u: goto label_27bbe8;
        case 0x27bbecu: goto label_27bbec;
        case 0x27bbf0u: goto label_27bbf0;
        case 0x27bbf4u: goto label_27bbf4;
        case 0x27bbf8u: goto label_27bbf8;
        case 0x27bbfcu: goto label_27bbfc;
        case 0x27bc00u: goto label_27bc00;
        case 0x27bc04u: goto label_27bc04;
        case 0x27bc08u: goto label_27bc08;
        case 0x27bc0cu: goto label_27bc0c;
        case 0x27bc10u: goto label_27bc10;
        case 0x27bc14u: goto label_27bc14;
        case 0x27bc18u: goto label_27bc18;
        case 0x27bc1cu: goto label_27bc1c;
        case 0x27bc20u: goto label_27bc20;
        case 0x27bc24u: goto label_27bc24;
        case 0x27bc28u: goto label_27bc28;
        case 0x27bc2cu: goto label_27bc2c;
        case 0x27bc30u: goto label_27bc30;
        case 0x27bc34u: goto label_27bc34;
        case 0x27bc38u: goto label_27bc38;
        case 0x27bc3cu: goto label_27bc3c;
        case 0x27bc40u: goto label_27bc40;
        case 0x27bc44u: goto label_27bc44;
        case 0x27bc48u: goto label_27bc48;
        case 0x27bc4cu: goto label_27bc4c;
        case 0x27bc50u: goto label_27bc50;
        case 0x27bc54u: goto label_27bc54;
        case 0x27bc58u: goto label_27bc58;
        case 0x27bc5cu: goto label_27bc5c;
        case 0x27bc60u: goto label_27bc60;
        case 0x27bc64u: goto label_27bc64;
        case 0x27bc68u: goto label_27bc68;
        case 0x27bc6cu: goto label_27bc6c;
        case 0x27bc70u: goto label_27bc70;
        case 0x27bc74u: goto label_27bc74;
        case 0x27bc78u: goto label_27bc78;
        case 0x27bc7cu: goto label_27bc7c;
        case 0x27bc80u: goto label_27bc80;
        case 0x27bc84u: goto label_27bc84;
        case 0x27bc88u: goto label_27bc88;
        case 0x27bc8cu: goto label_27bc8c;
        case 0x27bc90u: goto label_27bc90;
        case 0x27bc94u: goto label_27bc94;
        case 0x27bc98u: goto label_27bc98;
        case 0x27bc9cu: goto label_27bc9c;
        case 0x27bca0u: goto label_27bca0;
        case 0x27bca4u: goto label_27bca4;
        case 0x27bca8u: goto label_27bca8;
        case 0x27bcacu: goto label_27bcac;
        case 0x27bcb0u: goto label_27bcb0;
        case 0x27bcb4u: goto label_27bcb4;
        case 0x27bcb8u: goto label_27bcb8;
        case 0x27bcbcu: goto label_27bcbc;
        case 0x27bcc0u: goto label_27bcc0;
        case 0x27bcc4u: goto label_27bcc4;
        case 0x27bcc8u: goto label_27bcc8;
        case 0x27bcccu: goto label_27bccc;
        case 0x27bcd0u: goto label_27bcd0;
        case 0x27bcd4u: goto label_27bcd4;
        case 0x27bcd8u: goto label_27bcd8;
        case 0x27bcdcu: goto label_27bcdc;
        case 0x27bce0u: goto label_27bce0;
        case 0x27bce4u: goto label_27bce4;
        case 0x27bce8u: goto label_27bce8;
        case 0x27bcecu: goto label_27bcec;
        case 0x27bcf0u: goto label_27bcf0;
        case 0x27bcf4u: goto label_27bcf4;
        case 0x27bcf8u: goto label_27bcf8;
        case 0x27bcfcu: goto label_27bcfc;
        case 0x27bd00u: goto label_27bd00;
        case 0x27bd04u: goto label_27bd04;
        case 0x27bd08u: goto label_27bd08;
        case 0x27bd0cu: goto label_27bd0c;
        case 0x27bd10u: goto label_27bd10;
        case 0x27bd14u: goto label_27bd14;
        case 0x27bd18u: goto label_27bd18;
        case 0x27bd1cu: goto label_27bd1c;
        case 0x27bd20u: goto label_27bd20;
        case 0x27bd24u: goto label_27bd24;
        case 0x27bd28u: goto label_27bd28;
        case 0x27bd2cu: goto label_27bd2c;
        case 0x27bd30u: goto label_27bd30;
        case 0x27bd34u: goto label_27bd34;
        case 0x27bd38u: goto label_27bd38;
        case 0x27bd3cu: goto label_27bd3c;
        case 0x27bd40u: goto label_27bd40;
        case 0x27bd44u: goto label_27bd44;
        case 0x27bd48u: goto label_27bd48;
        case 0x27bd4cu: goto label_27bd4c;
        case 0x27bd50u: goto label_27bd50;
        case 0x27bd54u: goto label_27bd54;
        case 0x27bd58u: goto label_27bd58;
        case 0x27bd5cu: goto label_27bd5c;
        case 0x27bd60u: goto label_27bd60;
        case 0x27bd64u: goto label_27bd64;
        case 0x27bd68u: goto label_27bd68;
        case 0x27bd6cu: goto label_27bd6c;
        case 0x27bd70u: goto label_27bd70;
        case 0x27bd74u: goto label_27bd74;
        case 0x27bd78u: goto label_27bd78;
        case 0x27bd7cu: goto label_27bd7c;
        case 0x27bd80u: goto label_27bd80;
        case 0x27bd84u: goto label_27bd84;
        case 0x27bd88u: goto label_27bd88;
        case 0x27bd8cu: goto label_27bd8c;
        case 0x27bd90u: goto label_27bd90;
        case 0x27bd94u: goto label_27bd94;
        case 0x27bd98u: goto label_27bd98;
        case 0x27bd9cu: goto label_27bd9c;
        case 0x27bda0u: goto label_27bda0;
        case 0x27bda4u: goto label_27bda4;
        case 0x27bda8u: goto label_27bda8;
        case 0x27bdacu: goto label_27bdac;
        case 0x27bdb0u: goto label_27bdb0;
        case 0x27bdb4u: goto label_27bdb4;
        case 0x27bdb8u: goto label_27bdb8;
        case 0x27bdbcu: goto label_27bdbc;
        case 0x27bdc0u: goto label_27bdc0;
        case 0x27bdc4u: goto label_27bdc4;
        case 0x27bdc8u: goto label_27bdc8;
        case 0x27bdccu: goto label_27bdcc;
        case 0x27bdd0u: goto label_27bdd0;
        case 0x27bdd4u: goto label_27bdd4;
        case 0x27bdd8u: goto label_27bdd8;
        case 0x27bddcu: goto label_27bddc;
        case 0x27bde0u: goto label_27bde0;
        case 0x27bde4u: goto label_27bde4;
        case 0x27bde8u: goto label_27bde8;
        case 0x27bdecu: goto label_27bdec;
        case 0x27bdf0u: goto label_27bdf0;
        case 0x27bdf4u: goto label_27bdf4;
        case 0x27bdf8u: goto label_27bdf8;
        case 0x27bdfcu: goto label_27bdfc;
        case 0x27be00u: goto label_27be00;
        case 0x27be04u: goto label_27be04;
        case 0x27be08u: goto label_27be08;
        case 0x27be0cu: goto label_27be0c;
        case 0x27be10u: goto label_27be10;
        case 0x27be14u: goto label_27be14;
        case 0x27be18u: goto label_27be18;
        case 0x27be1cu: goto label_27be1c;
        case 0x27be20u: goto label_27be20;
        case 0x27be24u: goto label_27be24;
        case 0x27be28u: goto label_27be28;
        case 0x27be2cu: goto label_27be2c;
        case 0x27be30u: goto label_27be30;
        case 0x27be34u: goto label_27be34;
        case 0x27be38u: goto label_27be38;
        case 0x27be3cu: goto label_27be3c;
        case 0x27be40u: goto label_27be40;
        case 0x27be44u: goto label_27be44;
        case 0x27be48u: goto label_27be48;
        case 0x27be4cu: goto label_27be4c;
        case 0x27be50u: goto label_27be50;
        case 0x27be54u: goto label_27be54;
        case 0x27be58u: goto label_27be58;
        case 0x27be5cu: goto label_27be5c;
        case 0x27be60u: goto label_27be60;
        case 0x27be64u: goto label_27be64;
        case 0x27be68u: goto label_27be68;
        case 0x27be6cu: goto label_27be6c;
        case 0x27be70u: goto label_27be70;
        case 0x27be74u: goto label_27be74;
        case 0x27be78u: goto label_27be78;
        case 0x27be7cu: goto label_27be7c;
        case 0x27be80u: goto label_27be80;
        case 0x27be84u: goto label_27be84;
        case 0x27be88u: goto label_27be88;
        case 0x27be8cu: goto label_27be8c;
        case 0x27be90u: goto label_27be90;
        case 0x27be94u: goto label_27be94;
        case 0x27be98u: goto label_27be98;
        case 0x27be9cu: goto label_27be9c;
        case 0x27bea0u: goto label_27bea0;
        case 0x27bea4u: goto label_27bea4;
        case 0x27bea8u: goto label_27bea8;
        case 0x27beacu: goto label_27beac;
        case 0x27beb0u: goto label_27beb0;
        case 0x27beb4u: goto label_27beb4;
        case 0x27beb8u: goto label_27beb8;
        case 0x27bebcu: goto label_27bebc;
        case 0x27bec0u: goto label_27bec0;
        case 0x27bec4u: goto label_27bec4;
        case 0x27bec8u: goto label_27bec8;
        case 0x27beccu: goto label_27becc;
        case 0x27bed0u: goto label_27bed0;
        case 0x27bed4u: goto label_27bed4;
        case 0x27bed8u: goto label_27bed8;
        case 0x27bedcu: goto label_27bedc;
        case 0x27bee0u: goto label_27bee0;
        case 0x27bee4u: goto label_27bee4;
        case 0x27bee8u: goto label_27bee8;
        case 0x27beecu: goto label_27beec;
        case 0x27bef0u: goto label_27bef0;
        case 0x27bef4u: goto label_27bef4;
        case 0x27bef8u: goto label_27bef8;
        case 0x27befcu: goto label_27befc;
        case 0x27bf00u: goto label_27bf00;
        case 0x27bf04u: goto label_27bf04;
        case 0x27bf08u: goto label_27bf08;
        case 0x27bf0cu: goto label_27bf0c;
        case 0x27bf10u: goto label_27bf10;
        case 0x27bf14u: goto label_27bf14;
        case 0x27bf18u: goto label_27bf18;
        case 0x27bf1cu: goto label_27bf1c;
        case 0x27bf20u: goto label_27bf20;
        case 0x27bf24u: goto label_27bf24;
        case 0x27bf28u: goto label_27bf28;
        case 0x27bf2cu: goto label_27bf2c;
        case 0x27bf30u: goto label_27bf30;
        case 0x27bf34u: goto label_27bf34;
        case 0x27bf38u: goto label_27bf38;
        case 0x27bf3cu: goto label_27bf3c;
        case 0x27bf40u: goto label_27bf40;
        case 0x27bf44u: goto label_27bf44;
        case 0x27bf48u: goto label_27bf48;
        case 0x27bf4cu: goto label_27bf4c;
        case 0x27bf50u: goto label_27bf50;
        case 0x27bf54u: goto label_27bf54;
        case 0x27bf58u: goto label_27bf58;
        case 0x27bf5cu: goto label_27bf5c;
        case 0x27bf60u: goto label_27bf60;
        case 0x27bf64u: goto label_27bf64;
        case 0x27bf68u: goto label_27bf68;
        case 0x27bf6cu: goto label_27bf6c;
        case 0x27bf70u: goto label_27bf70;
        case 0x27bf74u: goto label_27bf74;
        case 0x27bf78u: goto label_27bf78;
        case 0x27bf7cu: goto label_27bf7c;
        case 0x27bf80u: goto label_27bf80;
        case 0x27bf84u: goto label_27bf84;
        case 0x27bf88u: goto label_27bf88;
        case 0x27bf8cu: goto label_27bf8c;
        case 0x27bf90u: goto label_27bf90;
        case 0x27bf94u: goto label_27bf94;
        case 0x27bf98u: goto label_27bf98;
        case 0x27bf9cu: goto label_27bf9c;
        case 0x27bfa0u: goto label_27bfa0;
        case 0x27bfa4u: goto label_27bfa4;
        case 0x27bfa8u: goto label_27bfa8;
        case 0x27bfacu: goto label_27bfac;
        case 0x27bfb0u: goto label_27bfb0;
        case 0x27bfb4u: goto label_27bfb4;
        case 0x27bfb8u: goto label_27bfb8;
        case 0x27bfbcu: goto label_27bfbc;
        case 0x27bfc0u: goto label_27bfc0;
        case 0x27bfc4u: goto label_27bfc4;
        case 0x27bfc8u: goto label_27bfc8;
        case 0x27bfccu: goto label_27bfcc;
        case 0x27bfd0u: goto label_27bfd0;
        case 0x27bfd4u: goto label_27bfd4;
        case 0x27bfd8u: goto label_27bfd8;
        case 0x27bfdcu: goto label_27bfdc;
        case 0x27bfe0u: goto label_27bfe0;
        case 0x27bfe4u: goto label_27bfe4;
        case 0x27bfe8u: goto label_27bfe8;
        case 0x27bfecu: goto label_27bfec;
        case 0x27bff0u: goto label_27bff0;
        case 0x27bff4u: goto label_27bff4;
        case 0x27bff8u: goto label_27bff8;
        case 0x27bffcu: goto label_27bffc;
        case 0x27c000u: goto label_27c000;
        case 0x27c004u: goto label_27c004;
        case 0x27c008u: goto label_27c008;
        case 0x27c00cu: goto label_27c00c;
        case 0x27c010u: goto label_27c010;
        case 0x27c014u: goto label_27c014;
        case 0x27c018u: goto label_27c018;
        case 0x27c01cu: goto label_27c01c;
        case 0x27c020u: goto label_27c020;
        case 0x27c024u: goto label_27c024;
        case 0x27c028u: goto label_27c028;
        case 0x27c02cu: goto label_27c02c;
        case 0x27c030u: goto label_27c030;
        case 0x27c034u: goto label_27c034;
        case 0x27c038u: goto label_27c038;
        case 0x27c03cu: goto label_27c03c;
        case 0x27c040u: goto label_27c040;
        case 0x27c044u: goto label_27c044;
        case 0x27c048u: goto label_27c048;
        case 0x27c04cu: goto label_27c04c;
        case 0x27c050u: goto label_27c050;
        case 0x27c054u: goto label_27c054;
        case 0x27c058u: goto label_27c058;
        case 0x27c05cu: goto label_27c05c;
        case 0x27c060u: goto label_27c060;
        case 0x27c064u: goto label_27c064;
        case 0x27c068u: goto label_27c068;
        case 0x27c06cu: goto label_27c06c;
        case 0x27c070u: goto label_27c070;
        case 0x27c074u: goto label_27c074;
        case 0x27c078u: goto label_27c078;
        case 0x27c07cu: goto label_27c07c;
        case 0x27c080u: goto label_27c080;
        case 0x27c084u: goto label_27c084;
        case 0x27c088u: goto label_27c088;
        case 0x27c08cu: goto label_27c08c;
        case 0x27c090u: goto label_27c090;
        case 0x27c094u: goto label_27c094;
        case 0x27c098u: goto label_27c098;
        case 0x27c09cu: goto label_27c09c;
        case 0x27c0a0u: goto label_27c0a0;
        case 0x27c0a4u: goto label_27c0a4;
        case 0x27c0a8u: goto label_27c0a8;
        case 0x27c0acu: goto label_27c0ac;
        case 0x27c0b0u: goto label_27c0b0;
        case 0x27c0b4u: goto label_27c0b4;
        case 0x27c0b8u: goto label_27c0b8;
        case 0x27c0bcu: goto label_27c0bc;
        case 0x27c0c0u: goto label_27c0c0;
        case 0x27c0c4u: goto label_27c0c4;
        case 0x27c0c8u: goto label_27c0c8;
        case 0x27c0ccu: goto label_27c0cc;
        default: break;
    }

    ctx->pc = 0x27b3c0u;

label_27b3c0:
    // 0x27b3c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x27b3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_27b3c4:
    // 0x27b3c4: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x27b3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_27b3c8:
    // 0x27b3c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27b3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_27b3cc:
    // 0x27b3cc: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x27b3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_27b3d0:
    // 0x27b3d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27b3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_27b3d4:
    // 0x27b3d4: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x27b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_27b3d8:
    // 0x27b3d8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x27b3d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_27b3dc:
    // 0x27b3dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27b3dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27b3e0:
    // 0x27b3e0: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x27b3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_27b3e4:
    // 0x27b3e4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x27b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27b3e8:
    // 0x27b3e8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x27b3e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_27b3ec:
    // 0x27b3ec: 0xa3a20060  sb          $v0, 0x60($sp)
    ctx->pc = 0x27b3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 2));
label_27b3f0:
    // 0x27b3f0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x27b3f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_27b3f4:
    // 0x27b3f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_27b3f8:
    if (ctx->pc == 0x27B3F8u) {
        ctx->pc = 0x27B3FCu;
        goto label_27b3fc;
    }
    ctx->pc = 0x27B3F4u;
    {
        const bool branch_taken_0x27b3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b3f4) {
            ctx->pc = 0x27B428u;
            goto label_27b428;
        }
    }
    ctx->pc = 0x27B3FCu;
label_27b3fc:
    // 0x27b3fc: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x27b3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27b400:
    // 0x27b400: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x27b400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_27b404:
    // 0x27b404: 0x2442d460  addiu       $v0, $v0, -0x2BA0
    ctx->pc = 0x27b404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956128));
label_27b408:
    // 0x27b408: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x27b408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_27b40c:
    // 0x27b40c: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_27b410:
    // 0x27b410: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x27b410u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_27b414:
    // 0x27b414: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27b414u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27b418:
    // 0x27b418: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x27b418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_27b41c:
    // 0x27b41c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x27b41cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_27b420:
    // 0x27b420: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x27b420u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_27b424:
    // 0x27b424: 0x0  nop
    ctx->pc = 0x27b424u;
    // NOP
label_27b428:
    // 0x27b428: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x27b428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_27b42c:
    // 0x27b42c: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
label_27b430:
    if (ctx->pc == 0x27B430u) {
        ctx->pc = 0x27B430u;
            // 0x27b430: 0x3c05006f  lui         $a1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x27B434u;
        goto label_27b434;
    }
    ctx->pc = 0x27B42Cu;
    {
        const bool branch_taken_0x27b42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B42Cu;
            // 0x27b430: 0x3c05006f  lui         $a1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b42c) {
            ctx->pc = 0x27B588u;
            goto label_27b588;
        }
    }
    ctx->pc = 0x27B434u;
label_27b434:
    // 0x27b434: 0x27a3005c  addiu       $v1, $sp, 0x5C
    ctx->pc = 0x27b434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_27b438:
    // 0x27b438: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x27b438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_27b43c:
    // 0x27b43c: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x27b43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_27b440:
    // 0x27b440: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x27b440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27b444:
    // 0x27b444: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x27b444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_27b448:
    // 0x27b448: 0xa3a2005c  sb          $v0, 0x5C($sp)
    ctx->pc = 0x27b448u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 92), (uint8_t)GPR_U32(ctx, 2));
label_27b44c:
    // 0x27b44c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x27b44cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_27b450:
    // 0x27b450: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_27b454:
    if (ctx->pc == 0x27B454u) {
        ctx->pc = 0x27B458u;
        goto label_27b458;
    }
    ctx->pc = 0x27B450u;
    {
        const bool branch_taken_0x27b450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b450) {
            ctx->pc = 0x27B480u;
            goto label_27b480;
        }
    }
    ctx->pc = 0x27B458u;
label_27b458:
    // 0x27b458: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x27b458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27b45c:
    // 0x27b45c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x27b45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_27b460:
    // 0x27b460: 0x2442d470  addiu       $v0, $v0, -0x2B90
    ctx->pc = 0x27b460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956144));
label_27b464:
    // 0x27b464: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x27b464u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_27b468:
    // 0x27b468: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27b468u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_27b46c:
    // 0x27b46c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x27b46cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_27b470:
    // 0x27b470: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27b470u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27b474:
    // 0x27b474: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x27b474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_27b478:
    // 0x27b478: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x27b478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_27b47c:
    // 0x27b47c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x27b47cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_27b480:
    // 0x27b480: 0xc08d7c8  jal         func_235F20
label_27b484:
    if (ctx->pc == 0x27B484u) {
        ctx->pc = 0x27B484u;
            // 0x27b484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B488u;
        goto label_27b488;
    }
    ctx->pc = 0x27B480u;
    SET_GPR_U32(ctx, 31, 0x27B488u);
    ctx->pc = 0x27B484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B480u;
            // 0x27b484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235F20u;
    if (runtime->hasFunction(0x235F20u)) {
        auto targetFn = runtime->lookupFunction(0x235F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B488u; }
        if (ctx->pc != 0x27B488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235F20_0x235f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B488u; }
        if (ctx->pc != 0x27B488u) { return; }
    }
    ctx->pc = 0x27B488u;
label_27b488:
    // 0x27b488: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_27b48c:
    if (ctx->pc == 0x27B48Cu) {
        ctx->pc = 0x27B48Cu;
            // 0x27b48c: 0x3c06006f  lui         $a2, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x27B490u;
        goto label_27b490;
    }
    ctx->pc = 0x27B488u;
    {
        const bool branch_taken_0x27b488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B488u;
            // 0x27b48c: 0x3c06006f  lui         $a2, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b488) {
            ctx->pc = 0x27B538u;
            goto label_27b538;
        }
    }
    ctx->pc = 0x27B490u;
label_27b490:
    // 0x27b490: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x27b490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_27b494:
    // 0x27b494: 0x24c6ea60  addiu       $a2, $a2, -0x15A0
    ctx->pc = 0x27b494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
label_27b498:
    // 0x27b498: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x27b498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_27b49c:
    // 0x27b49c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x27b49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27b4a0:
    // 0x27b4a0: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x27b4a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_27b4a4:
    // 0x27b4a4: 0xa3a30054  sb          $v1, 0x54($sp)
    ctx->pc = 0x27b4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 84), (uint8_t)GPR_U32(ctx, 3));
label_27b4a8:
    // 0x27b4a8: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x27b4a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_27b4ac:
    // 0x27b4ac: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_27b4b0:
    if (ctx->pc == 0x27B4B0u) {
        ctx->pc = 0x27B4B4u;
        goto label_27b4b4;
    }
    ctx->pc = 0x27B4ACu;
    {
        const bool branch_taken_0x27b4ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b4ac) {
            ctx->pc = 0x27B4E0u;
            goto label_27b4e0;
        }
    }
    ctx->pc = 0x27B4B4u;
label_27b4b4:
    // 0x27b4b4: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x27b4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27b4b8:
    // 0x27b4b8: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x27b4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_27b4bc:
    // 0x27b4bc: 0x2463d618  addiu       $v1, $v1, -0x29E8
    ctx->pc = 0x27b4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956568));
label_27b4c0:
    // 0x27b4c0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x27b4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_27b4c4:
    // 0x27b4c4: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27b4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27b4c8:
    // 0x27b4c8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x27b4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_27b4cc:
    // 0x27b4cc: 0x4004c803  .word       0x4004C803                   # mfc0        $a0, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27b4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_perf);
label_27b4d0:
    // 0x27b4d0: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x27b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_27b4d4:
    // 0x27b4d4: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x27b4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_27b4d8:
    // 0x27b4d8: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x27b4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_27b4dc:
    // 0x27b4dc: 0x0  nop
    ctx->pc = 0x27b4dcu;
    // NOP
label_27b4e0:
    // 0x27b4e0: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x27b4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_27b4e4:
    // 0x27b4e4: 0x24c6ea60  addiu       $a2, $a2, -0x15A0
    ctx->pc = 0x27b4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
label_27b4e8:
    // 0x27b4e8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x27b4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_27b4ec:
    // 0x27b4ec: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x27b4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_27b4f0:
    // 0x27b4f0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x27b4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27b4f4:
    // 0x27b4f4: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x27b4f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_27b4f8:
    // 0x27b4f8: 0xa3a30050  sb          $v1, 0x50($sp)
    ctx->pc = 0x27b4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 3));
label_27b4fc:
    // 0x27b4fc: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x27b4fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_27b500:
    // 0x27b500: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_27b504:
    if (ctx->pc == 0x27B504u) {
        ctx->pc = 0x27B508u;
        goto label_27b508;
    }
    ctx->pc = 0x27B500u;
    {
        const bool branch_taken_0x27b500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b500) {
            ctx->pc = 0x27B530u;
            goto label_27b530;
        }
    }
    ctx->pc = 0x27B508u;
label_27b508:
    // 0x27b508: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x27b508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27b50c:
    // 0x27b50c: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x27b50cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_27b510:
    // 0x27b510: 0x2463d618  addiu       $v1, $v1, -0x29E8
    ctx->pc = 0x27b510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956568));
label_27b514:
    // 0x27b514: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x27b514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_27b518:
    // 0x27b518: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27b518u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27b51c:
    // 0x27b51c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x27b51cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_27b520:
    // 0x27b520: 0x4004c803  .word       0x4004C803                   # mfc0        $a0, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27b520u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_perf);
label_27b524:
    // 0x27b524: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x27b524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_27b528:
    // 0x27b528: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x27b528u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_27b52c:
    // 0x27b52c: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x27b52cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_27b530:
    // 0x27b530: 0x10000089  b           . + 4 + (0x89 << 2)
label_27b534:
    if (ctx->pc == 0x27B534u) {
        ctx->pc = 0x27B538u;
        goto label_27b538;
    }
    ctx->pc = 0x27B530u;
    {
        const bool branch_taken_0x27b530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b530) {
            ctx->pc = 0x27B758u;
            goto label_27b758;
        }
    }
    ctx->pc = 0x27B538u;
label_27b538:
    // 0x27b538: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x27b538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_27b53c:
    // 0x27b53c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x27b53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_27b540:
    // 0x27b540: 0x27a3004c  addiu       $v1, $sp, 0x4C
    ctx->pc = 0x27b540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_27b544:
    // 0x27b544: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x27b544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_27b548:
    // 0x27b548: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x27b548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27b54c:
    // 0x27b54c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x27b54cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_27b550:
    // 0x27b550: 0xa3a2004c  sb          $v0, 0x4C($sp)
    ctx->pc = 0x27b550u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 2));
label_27b554:
    // 0x27b554: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x27b554u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_27b558:
    // 0x27b558: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_27b55c:
    if (ctx->pc == 0x27B55Cu) {
        ctx->pc = 0x27B560u;
        goto label_27b560;
    }
    ctx->pc = 0x27B558u;
    {
        const bool branch_taken_0x27b558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b558) {
            ctx->pc = 0x27B588u;
            goto label_27b588;
        }
    }
    ctx->pc = 0x27B560u;
label_27b560:
    // 0x27b560: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x27b560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27b564:
    // 0x27b564: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x27b564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_27b568:
    // 0x27b568: 0x2442d618  addiu       $v0, $v0, -0x29E8
    ctx->pc = 0x27b568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956568));
label_27b56c:
    // 0x27b56c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x27b56cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_27b570:
    // 0x27b570: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27b570u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_27b574:
    // 0x27b574: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x27b574u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_27b578:
    // 0x27b578: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27b578u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27b57c:
    // 0x27b57c: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x27b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_27b580:
    // 0x27b580: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x27b580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_27b584:
    // 0x27b584: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x27b584u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_27b588:
    // 0x27b588: 0xc08d854  jal         func_236150
label_27b58c:
    if (ctx->pc == 0x27B58Cu) {
        ctx->pc = 0x27B58Cu;
            // 0x27b58c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B590u;
        goto label_27b590;
    }
    ctx->pc = 0x27B588u;
    SET_GPR_U32(ctx, 31, 0x27B590u);
    ctx->pc = 0x27B58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B588u;
            // 0x27b58c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x236150u;
    if (runtime->hasFunction(0x236150u)) {
        auto targetFn = runtime->lookupFunction(0x236150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B590u; }
        if (ctx->pc != 0x27B590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00236150_0x236150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B590u; }
        if (ctx->pc != 0x27B590u) { return; }
    }
    ctx->pc = 0x27B590u;
label_27b590:
    // 0x27b590: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x27b590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_27b594:
    // 0x27b594: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
label_27b598:
    if (ctx->pc == 0x27B598u) {
        ctx->pc = 0x27B598u;
            // 0x27b598: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x27B59Cu;
        goto label_27b59c;
    }
    ctx->pc = 0x27B594u;
    {
        const bool branch_taken_0x27b594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B594u;
            // 0x27b598: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b594) {
            ctx->pc = 0x27B700u;
            goto label_27b700;
        }
    }
    ctx->pc = 0x27B59Cu;
label_27b59c:
    // 0x27b59c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x27b59cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_27b5a0:
    // 0x27b5a0: 0x27a30058  addiu       $v1, $sp, 0x58
    ctx->pc = 0x27b5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_27b5a4:
    // 0x27b5a4: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x27b5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_27b5a8:
    // 0x27b5a8: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x27b5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_27b5ac:
    // 0x27b5ac: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x27b5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27b5b0:
    // 0x27b5b0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x27b5b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_27b5b4:
    // 0x27b5b4: 0xa3a20058  sb          $v0, 0x58($sp)
    ctx->pc = 0x27b5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 2));
label_27b5b8:
    // 0x27b5b8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x27b5b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_27b5bc:
    // 0x27b5bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_27b5c0:
    if (ctx->pc == 0x27B5C0u) {
        ctx->pc = 0x27B5C4u;
        goto label_27b5c4;
    }
    ctx->pc = 0x27B5BCu;
    {
        const bool branch_taken_0x27b5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b5bc) {
            ctx->pc = 0x27B5F0u;
            goto label_27b5f0;
        }
    }
    ctx->pc = 0x27B5C4u;
label_27b5c4:
    // 0x27b5c4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x27b5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27b5c8:
    // 0x27b5c8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x27b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_27b5cc:
    // 0x27b5cc: 0x2442d490  addiu       $v0, $v0, -0x2B70
    ctx->pc = 0x27b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956176));
label_27b5d0:
    // 0x27b5d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x27b5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_27b5d4:
    // 0x27b5d4: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_27b5d8:
    // 0x27b5d8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x27b5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_27b5dc:
    // 0x27b5dc: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27b5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27b5e0:
    // 0x27b5e0: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x27b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_27b5e4:
    // 0x27b5e4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x27b5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_27b5e8:
    // 0x27b5e8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x27b5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_27b5ec:
    // 0x27b5ec: 0x0  nop
    ctx->pc = 0x27b5ecu;
    // NOP
label_27b5f0:
    // 0x27b5f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27b5f4:
    // 0x27b5f4: 0xc09ebe4  jal         func_27AF90
label_27b5f8:
    if (ctx->pc == 0x27B5F8u) {
        ctx->pc = 0x27B5F8u;
            // 0x27b5f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x27B5FCu;
        goto label_27b5fc;
    }
    ctx->pc = 0x27B5F4u;
    SET_GPR_U32(ctx, 31, 0x27B5FCu);
    ctx->pc = 0x27B5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B5F4u;
            // 0x27b5f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x27AF90u;
    if (runtime->hasFunction(0x27AF90u)) {
        auto targetFn = runtime->lookupFunction(0x27AF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B5FCu; }
        if (ctx->pc != 0x27B5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027AF90_0x27af90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B5FCu; }
        if (ctx->pc != 0x27B5FCu) { return; }
    }
    ctx->pc = 0x27B5FCu;
label_27b5fc:
    // 0x27b5fc: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_27b600:
    if (ctx->pc == 0x27B600u) {
        ctx->pc = 0x27B600u;
            // 0x27b600: 0x3c06006f  lui         $a2, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x27B604u;
        goto label_27b604;
    }
    ctx->pc = 0x27B5FCu;
    {
        const bool branch_taken_0x27b5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B5FCu;
            // 0x27b600: 0x3c06006f  lui         $a2, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b5fc) {
            ctx->pc = 0x27B6B0u;
            goto label_27b6b0;
        }
    }
    ctx->pc = 0x27B604u;
label_27b604:
    // 0x27b604: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x27b604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_27b608:
    // 0x27b608: 0x24c6ea60  addiu       $a2, $a2, -0x15A0
    ctx->pc = 0x27b608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
label_27b60c:
    // 0x27b60c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x27b60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_27b610:
    // 0x27b610: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x27b610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_27b614:
    // 0x27b614: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x27b614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27b618:
    // 0x27b618: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x27b618u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_27b61c:
    // 0x27b61c: 0xa3a30048  sb          $v1, 0x48($sp)
    ctx->pc = 0x27b61cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 3));
label_27b620:
    // 0x27b620: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x27b620u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_27b624:
    // 0x27b624: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_27b628:
    if (ctx->pc == 0x27B628u) {
        ctx->pc = 0x27B62Cu;
        goto label_27b62c;
    }
    ctx->pc = 0x27B624u;
    {
        const bool branch_taken_0x27b624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b624) {
            ctx->pc = 0x27B658u;
            goto label_27b658;
        }
    }
    ctx->pc = 0x27B62Cu;
label_27b62c:
    // 0x27b62c: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x27b62cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27b630:
    // 0x27b630: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x27b630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_27b634:
    // 0x27b634: 0x2463d618  addiu       $v1, $v1, -0x29E8
    ctx->pc = 0x27b634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956568));
label_27b638:
    // 0x27b638: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x27b638u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_27b63c:
    // 0x27b63c: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27b63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27b640:
    // 0x27b640: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x27b640u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_27b644:
    // 0x27b644: 0x4004c803  .word       0x4004C803                   # mfc0        $a0, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27b644u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_perf);
label_27b648:
    // 0x27b648: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x27b648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_27b64c:
    // 0x27b64c: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x27b64cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_27b650:
    // 0x27b650: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x27b650u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_27b654:
    // 0x27b654: 0x0  nop
    ctx->pc = 0x27b654u;
    // NOP
label_27b658:
    // 0x27b658: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x27b658u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_27b65c:
    // 0x27b65c: 0x24c6ea60  addiu       $a2, $a2, -0x15A0
    ctx->pc = 0x27b65cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
label_27b660:
    // 0x27b660: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x27b660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_27b664:
    // 0x27b664: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x27b664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_27b668:
    // 0x27b668: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x27b668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27b66c:
    // 0x27b66c: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x27b66cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_27b670:
    // 0x27b670: 0xa3a30044  sb          $v1, 0x44($sp)
    ctx->pc = 0x27b670u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 3));
label_27b674:
    // 0x27b674: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x27b674u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_27b678:
    // 0x27b678: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_27b67c:
    if (ctx->pc == 0x27B67Cu) {
        ctx->pc = 0x27B680u;
        goto label_27b680;
    }
    ctx->pc = 0x27B678u;
    {
        const bool branch_taken_0x27b678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b678) {
            ctx->pc = 0x27B6A8u;
            goto label_27b6a8;
        }
    }
    ctx->pc = 0x27B680u;
label_27b680:
    // 0x27b680: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x27b680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27b684:
    // 0x27b684: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x27b684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_27b688:
    // 0x27b688: 0x2463d618  addiu       $v1, $v1, -0x29E8
    ctx->pc = 0x27b688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956568));
label_27b68c:
    // 0x27b68c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x27b68cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_27b690:
    // 0x27b690: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27b690u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27b694:
    // 0x27b694: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x27b694u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_27b698:
    // 0x27b698: 0x4004c803  .word       0x4004C803                   # mfc0        $a0, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27b698u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_perf);
label_27b69c:
    // 0x27b69c: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x27b69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_27b6a0:
    // 0x27b6a0: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x27b6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_27b6a4:
    // 0x27b6a4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x27b6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_27b6a8:
    // 0x27b6a8: 0x1000002b  b           . + 4 + (0x2B << 2)
label_27b6ac:
    if (ctx->pc == 0x27B6ACu) {
        ctx->pc = 0x27B6B0u;
        goto label_27b6b0;
    }
    ctx->pc = 0x27B6A8u;
    {
        const bool branch_taken_0x27b6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b6a8) {
            ctx->pc = 0x27B758u;
            goto label_27b758;
        }
    }
    ctx->pc = 0x27B6B0u;
label_27b6b0:
    // 0x27b6b0: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x27b6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_27b6b4:
    // 0x27b6b4: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x27b6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_27b6b8:
    // 0x27b6b8: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x27b6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_27b6bc:
    // 0x27b6bc: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x27b6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_27b6c0:
    // 0x27b6c0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x27b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27b6c4:
    // 0x27b6c4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x27b6c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_27b6c8:
    // 0x27b6c8: 0xa3a20040  sb          $v0, 0x40($sp)
    ctx->pc = 0x27b6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
label_27b6cc:
    // 0x27b6cc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x27b6ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_27b6d0:
    // 0x27b6d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_27b6d4:
    if (ctx->pc == 0x27B6D4u) {
        ctx->pc = 0x27B6D8u;
        goto label_27b6d8;
    }
    ctx->pc = 0x27B6D0u;
    {
        const bool branch_taken_0x27b6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b6d0) {
            ctx->pc = 0x27B700u;
            goto label_27b700;
        }
    }
    ctx->pc = 0x27B6D8u;
label_27b6d8:
    // 0x27b6d8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x27b6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27b6dc:
    // 0x27b6dc: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x27b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_27b6e0:
    // 0x27b6e0: 0x2442d618  addiu       $v0, $v0, -0x29E8
    ctx->pc = 0x27b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956568));
label_27b6e4:
    // 0x27b6e4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x27b6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_27b6e8:
    // 0x27b6e8: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_27b6ec:
    // 0x27b6ec: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x27b6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_27b6f0:
    // 0x27b6f0: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27b6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27b6f4:
    // 0x27b6f4: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x27b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_27b6f8:
    // 0x27b6f8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x27b6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_27b6fc:
    // 0x27b6fc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x27b6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_27b700:
    // 0x27b700: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x27b700u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_27b704:
    // 0x27b704: 0xe6140010  swc1        $f20, 0x10($s0)
    ctx->pc = 0x27b704u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_27b708:
    // 0x27b708: 0x24c6ea60  addiu       $a2, $a2, -0x15A0
    ctx->pc = 0x27b708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
label_27b70c:
    // 0x27b70c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x27b70cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_27b710:
    // 0x27b710: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x27b710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_27b714:
    // 0x27b714: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x27b714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_27b718:
    // 0x27b718: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x27b718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27b71c:
    // 0x27b71c: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x27b71cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_27b720:
    // 0x27b720: 0xa3a3003c  sb          $v1, 0x3C($sp)
    ctx->pc = 0x27b720u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 60), (uint8_t)GPR_U32(ctx, 3));
label_27b724:
    // 0x27b724: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x27b724u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_27b728:
    // 0x27b728: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_27b72c:
    if (ctx->pc == 0x27B72Cu) {
        ctx->pc = 0x27B72Cu;
            // 0x27b72c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B730u;
        goto label_27b730;
    }
    ctx->pc = 0x27B728u;
    {
        const bool branch_taken_0x27b728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B728u;
            // 0x27b72c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b728) {
            ctx->pc = 0x27B758u;
            goto label_27b758;
        }
    }
    ctx->pc = 0x27B730u;
label_27b730:
    // 0x27b730: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x27b730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27b734:
    // 0x27b734: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x27b734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_27b738:
    // 0x27b738: 0x2463d618  addiu       $v1, $v1, -0x29E8
    ctx->pc = 0x27b738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956568));
label_27b73c:
    // 0x27b73c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x27b73cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_27b740:
    // 0x27b740: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27b740u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27b744:
    // 0x27b744: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x27b744u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_27b748:
    // 0x27b748: 0x4004c803  .word       0x4004C803                   # mfc0        $a0, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27b748u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_perf);
label_27b74c:
    // 0x27b74c: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x27b74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_27b750:
    // 0x27b750: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x27b750u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_27b754:
    // 0x27b754: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x27b754u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_27b758:
    // 0x27b758: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27b758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_27b75c:
    // 0x27b75c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27b75cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27b760:
    // 0x27b760: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27b760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27b764:
    // 0x27b764: 0x3e00008  jr          $ra
label_27b768:
    if (ctx->pc == 0x27B768u) {
        ctx->pc = 0x27B768u;
            // 0x27b768: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x27B76Cu;
        goto label_27b76c;
    }
    ctx->pc = 0x27B764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B764u;
            // 0x27b768: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27B76Cu;
label_27b76c:
    // 0x27b76c: 0x0  nop
    ctx->pc = 0x27b76cu;
    // NOP
label_27b770:
    // 0x27b770: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x27b770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_27b774:
    // 0x27b774: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x27b774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_27b778:
    // 0x27b778: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27b778u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27b77c:
    // 0x27b77c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x27b77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_27b780:
    // 0x27b780: 0x27a30088  addiu       $v1, $sp, 0x88
    ctx->pc = 0x27b780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_27b784:
    // 0x27b784: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27b784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_27b788:
    // 0x27b788: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x27b788u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_27b78c:
    // 0x27b78c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27b78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_27b790:
    // 0x27b790: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x27b790u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27b794:
    // 0x27b794: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27b794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27b798:
    // 0x27b798: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x27b798u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27b79c:
    // 0x27b79c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27b79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27b7a0:
    // 0x27b7a0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x27b7a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_27b7a4:
    // 0x27b7a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27b7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27b7a8:
    // 0x27b7a8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x27b7a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_27b7ac:
    // 0x27b7ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27b7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27b7b0:
    // 0x27b7b0: 0x8ce20084  lw          $v0, 0x84($a3)
    ctx->pc = 0x27b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 132)));
label_27b7b4:
    // 0x27b7b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27b7b8:
    // 0x27b7b8: 0xace20084  sw          $v0, 0x84($a3)
    ctx->pc = 0x27b7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 132), GPR_U32(ctx, 2));
label_27b7bc:
    // 0x27b7bc: 0x8ce2006c  lw          $v0, 0x6C($a3)
    ctx->pc = 0x27b7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 108)));
label_27b7c0:
    // 0x27b7c0: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x27b7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b7c4:
    // 0x27b7c4: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x27b7c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_27b7c8:
    // 0x27b7c8: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x27b7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b7cc:
    // 0x27b7cc: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x27b7ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_27b7d0:
    // 0x27b7d0: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x27b7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b7d4:
    // 0x27b7d4: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x27b7d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_27b7d8:
    // 0x27b7d8: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x27b7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b7dc:
    // 0x27b7dc: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x27b7dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_27b7e0:
    // 0x27b7e0: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x27b7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27b7e4:
    // 0x27b7e4: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x27b7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27b7e8:
    // 0x27b7e8: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x27b7e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_27b7ec:
    // 0x27b7ec: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x27b7ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_27b7f0:
    // 0x27b7f0: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x27b7f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_27b7f4:
    // 0x27b7f4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x27b7f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27b7f8:
    // 0x27b7f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_27b7fc:
    if (ctx->pc == 0x27B7FCu) {
        ctx->pc = 0x27B7FCu;
            // 0x27b7fc: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x27B800u;
        goto label_27b800;
    }
    ctx->pc = 0x27B7F8u;
    {
        const bool branch_taken_0x27b7f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27B7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B7F8u;
            // 0x27b7fc: 0xe4610000  swc1        $f1, 0x0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b7f8) {
            ctx->pc = 0x27B808u;
            goto label_27b808;
        }
    }
    ctx->pc = 0x27B800u;
label_27b800:
    // 0x27b800: 0x10000006  b           . + 4 + (0x6 << 2)
label_27b804:
    if (ctx->pc == 0x27B804u) {
        ctx->pc = 0x27B804u;
            // 0x27b804: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->pc = 0x27B808u;
        goto label_27b808;
    }
    ctx->pc = 0x27B800u;
    {
        const bool branch_taken_0x27b800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B800u;
            // 0x27b804: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b800) {
            ctx->pc = 0x27B81Cu;
            goto label_27b81c;
        }
    }
    ctx->pc = 0x27B808u;
label_27b808:
    // 0x27b808: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27b808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_27b80c:
    // 0x27b80c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27b80cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27b810:
    // 0x27b810: 0x0  nop
    ctx->pc = 0x27b810u;
    // NOP
label_27b814:
    // 0x27b814: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27b814u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_27b818:
    // 0x27b818: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x27b818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_27b81c:
    // 0x27b81c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x27b81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_27b820:
    // 0x27b820: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27b820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b824:
    // 0x27b824: 0x8e46006c  lw          $a2, 0x6C($s2)
    ctx->pc = 0x27b824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_27b828:
    // 0x27b828: 0x27a50084  addiu       $a1, $sp, 0x84
    ctx->pc = 0x27b828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_27b82c:
    // 0x27b82c: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x27b82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_27b830:
    // 0x27b830: 0x27a3008c  addiu       $v1, $sp, 0x8C
    ctx->pc = 0x27b830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_27b834:
    // 0x27b834: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x27b834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
label_27b838:
    // 0x27b838: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x27b838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_27b83c:
    // 0x27b83c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x27b83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b840:
    // 0x27b840: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x27b840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
label_27b844:
    // 0x27b844: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x27b844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b848:
    // 0x27b848: 0xe4c00028  swc1        $f0, 0x28($a2)
    ctx->pc = 0x27b848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
label_27b84c:
    // 0x27b84c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x27b84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b850:
    // 0x27b850: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_27b854:
    if (ctx->pc == 0x27B854u) {
        ctx->pc = 0x27B854u;
            // 0x27b854: 0xe4c0002c  swc1        $f0, 0x2C($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
        ctx->pc = 0x27B858u;
        goto label_27b858;
    }
    ctx->pc = 0x27B850u;
    {
        const bool branch_taken_0x27b850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B850u;
            // 0x27b854: 0xe4c0002c  swc1        $f0, 0x2C($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b850) {
            ctx->pc = 0x27B8A0u;
            goto label_27b8a0;
        }
    }
    ctx->pc = 0x27B858u;
label_27b858:
    // 0x27b858: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x27b858u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_27b85c:
    // 0x27b85c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_27b860:
    if (ctx->pc == 0x27B860u) {
        ctx->pc = 0x27B860u;
            // 0x27b860: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B864u;
        goto label_27b864;
    }
    ctx->pc = 0x27B85Cu;
    {
        const bool branch_taken_0x27b85c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B85Cu;
            // 0x27b860: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b85c) {
            ctx->pc = 0x27B888u;
            goto label_27b888;
        }
    }
    ctx->pc = 0x27B864u;
label_27b864:
    // 0x27b864: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x27b864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27b868:
    // 0x27b868: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x27b868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27b86c:
    // 0x27b86c: 0xc6ac0010  lwc1        $f12, 0x10($s5)
    ctx->pc = 0x27b86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27b870:
    // 0x27b870: 0xc0a3f04  jal         func_28FC10
label_27b874:
    if (ctx->pc == 0x27B874u) {
        ctx->pc = 0x27B874u;
            // 0x27b874: 0x244400b0  addiu       $a0, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->pc = 0x27B878u;
        goto label_27b878;
    }
    ctx->pc = 0x27B870u;
    SET_GPR_U32(ctx, 31, 0x27B878u);
    ctx->pc = 0x27B874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B870u;
            // 0x27b874: 0x244400b0  addiu       $a0, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28FC10u;
    if (runtime->hasFunction(0x28FC10u)) {
        auto targetFn = runtime->lookupFunction(0x28FC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B878u; }
        if (ctx->pc != 0x27B878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028FC10_0x28fc10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B878u; }
        if (ctx->pc != 0x27B878u) { return; }
    }
    ctx->pc = 0x27B878u;
label_27b878:
    // 0x27b878: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27b878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_27b87c:
    // 0x27b87c: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x27b87cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_27b880:
    // 0x27b880: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_27b884:
    if (ctx->pc == 0x27B884u) {
        ctx->pc = 0x27B884u;
            // 0x27b884: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x27B888u;
        goto label_27b888;
    }
    ctx->pc = 0x27B880u;
    {
        const bool branch_taken_0x27b880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B880u;
            // 0x27b884: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b880) {
            ctx->pc = 0x27B868u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27b868;
        }
    }
    ctx->pc = 0x27B888u;
label_27b888:
    // 0x27b888: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27b888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_27b88c:
    // 0x27b88c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27b88cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27b890:
    // 0x27b890: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x27b890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27b894:
    // 0x27b894: 0xc089c04  jal         func_227010
label_27b898:
    if (ctx->pc == 0x27B898u) {
        ctx->pc = 0x27B898u;
            // 0x27b898: 0x240700a0  addiu       $a3, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->pc = 0x27B89Cu;
        goto label_27b89c;
    }
    ctx->pc = 0x27B894u;
    SET_GPR_U32(ctx, 31, 0x27B89Cu);
    ctx->pc = 0x27B898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B894u;
            // 0x27b898: 0x240700a0  addiu       $a3, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227010u;
    if (runtime->hasFunction(0x227010u)) {
        auto targetFn = runtime->lookupFunction(0x227010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B89Cu; }
        if (ctx->pc != 0x27B89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227010_0x227010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B89Cu; }
        if (ctx->pc != 0x27B89Cu) { return; }
    }
    ctx->pc = 0x27B89Cu;
label_27b89c:
    // 0x27b89c: 0x0  nop
    ctx->pc = 0x27b89cu;
    // NOP
label_27b8a0:
    // 0x27b8a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b8a4:
    // 0x27b8a4: 0xa3a200ac  sb          $v0, 0xAC($sp)
    ctx->pc = 0x27b8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 172), (uint8_t)GPR_U32(ctx, 2));
label_27b8a8:
    // 0x27b8a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27b8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27b8ac:
    // 0x27b8ac: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x27b8acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_27b8b0:
    // 0x27b8b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27b8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27b8b4:
    // 0x27b8b4: 0x83a800ac  lb          $t0, 0xAC($sp)
    ctx->pc = 0x27b8b4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 172)));
label_27b8b8:
    // 0x27b8b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x27b8b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27b8bc:
    // 0x27b8bc: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x27b8bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_27b8c0:
    // 0x27b8c0: 0x320f809  jalr        $t9
label_27b8c4:
    if (ctx->pc == 0x27B8C4u) {
        ctx->pc = 0x27B8C4u;
            // 0x27b8c4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B8C8u;
        goto label_27b8c8;
    }
    ctx->pc = 0x27B8C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27B8C8u);
        ctx->pc = 0x27B8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B8C0u;
            // 0x27b8c4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27B8C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27B8C8u; }
            if (ctx->pc != 0x27B8C8u) { return; }
        }
        }
    }
    ctx->pc = 0x27B8C8u;
label_27b8c8:
    // 0x27b8c8: 0x32c30002  andi        $v1, $s6, 0x2
    ctx->pc = 0x27b8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
label_27b8cc:
    // 0x27b8cc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_27b8d0:
    if (ctx->pc == 0x27B8D0u) {
        ctx->pc = 0x27B8D0u;
            // 0x27b8d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B8D4u;
        goto label_27b8d4;
    }
    ctx->pc = 0x27B8CCu;
    {
        const bool branch_taken_0x27b8cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B8CCu;
            // 0x27b8d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b8cc) {
            ctx->pc = 0x27B8E8u;
            goto label_27b8e8;
        }
    }
    ctx->pc = 0x27B8D4u;
label_27b8d4:
    // 0x27b8d4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27b8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27b8d8:
    // 0x27b8d8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x27b8d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27b8dc:
    // 0x27b8dc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x27b8dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27b8e0:
    // 0x27b8e0: 0xc09f034  jal         func_27C0D0
label_27b8e4:
    if (ctx->pc == 0x27B8E4u) {
        ctx->pc = 0x27B8E4u;
            // 0x27b8e4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B8E8u;
        goto label_27b8e8;
    }
    ctx->pc = 0x27B8E0u;
    SET_GPR_U32(ctx, 31, 0x27B8E8u);
    ctx->pc = 0x27B8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B8E0u;
            // 0x27b8e4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27C0D0u;
    if (runtime->hasFunction(0x27C0D0u)) {
        auto targetFn = runtime->lookupFunction(0x27C0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B8E8u; }
        if (ctx->pc != 0x27B8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027C0D0_0x27c0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B8E8u; }
        if (ctx->pc != 0x27B8E8u) { return; }
    }
    ctx->pc = 0x27B8E8u;
label_27b8e8:
    // 0x27b8e8: 0x32c30004  andi        $v1, $s6, 0x4
    ctx->pc = 0x27b8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
label_27b8ec:
    // 0x27b8ec: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_27b8f0:
    if (ctx->pc == 0x27B8F0u) {
        ctx->pc = 0x27B8F4u;
        goto label_27b8f4;
    }
    ctx->pc = 0x27B8ECu;
    {
        const bool branch_taken_0x27b8ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b8ec) {
            ctx->pc = 0x27B908u;
            goto label_27b908;
        }
    }
    ctx->pc = 0x27B8F4u;
label_27b8f4:
    // 0x27b8f4: 0x8e47006c  lw          $a3, 0x6C($s2)
    ctx->pc = 0x27b8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_27b8f8:
    // 0x27b8f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27b8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27b8fc:
    // 0x27b8fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27b8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27b900:
    // 0x27b900: 0xc09f410  jal         func_27D040
label_27b904:
    if (ctx->pc == 0x27B904u) {
        ctx->pc = 0x27B904u;
            // 0x27b904: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B908u;
        goto label_27b908;
    }
    ctx->pc = 0x27B900u;
    SET_GPR_U32(ctx, 31, 0x27B908u);
    ctx->pc = 0x27B904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B900u;
            // 0x27b904: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D040u;
    if (runtime->hasFunction(0x27D040u)) {
        auto targetFn = runtime->lookupFunction(0x27D040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B908u; }
        if (ctx->pc != 0x27B908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D040_0x27d040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B908u; }
        if (ctx->pc != 0x27B908u) { return; }
    }
    ctx->pc = 0x27B908u;
label_27b908:
    // 0x27b908: 0x8e430084  lw          $v1, 0x84($s2)
    ctx->pc = 0x27b908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_27b90c:
    // 0x27b90c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27b90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_27b910:
    // 0x27b910: 0xae430084  sw          $v1, 0x84($s2)
    ctx->pc = 0x27b910u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 3));
label_27b914:
    // 0x27b914: 0x8e430084  lw          $v1, 0x84($s2)
    ctx->pc = 0x27b914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_27b918:
    // 0x27b918: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_27b91c:
    if (ctx->pc == 0x27B91Cu) {
        ctx->pc = 0x27B920u;
        goto label_27b920;
    }
    ctx->pc = 0x27B918u;
    {
        const bool branch_taken_0x27b918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b918) {
            ctx->pc = 0x27B940u;
            goto label_27b940;
        }
    }
    ctx->pc = 0x27B920u;
label_27b920:
    // 0x27b920: 0x8e430080  lw          $v1, 0x80($s2)
    ctx->pc = 0x27b920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_27b924:
    // 0x27b924: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_27b928:
    if (ctx->pc == 0x27B928u) {
        ctx->pc = 0x27B92Cu;
        goto label_27b92c;
    }
    ctx->pc = 0x27B924u;
    {
        const bool branch_taken_0x27b924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b924) {
            ctx->pc = 0x27B940u;
            goto label_27b940;
        }
    }
    ctx->pc = 0x27B92Cu;
label_27b92c:
    // 0x27b92c: 0x8243008c  lb          $v1, 0x8C($s2)
    ctx->pc = 0x27b92cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
label_27b930:
    // 0x27b930: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_27b934:
    if (ctx->pc == 0x27B934u) {
        ctx->pc = 0x27B934u;
            // 0x27b934: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B938u;
        goto label_27b938;
    }
    ctx->pc = 0x27B930u;
    {
        const bool branch_taken_0x27b930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B930u;
            // 0x27b934: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b930) {
            ctx->pc = 0x27B940u;
            goto label_27b940;
        }
    }
    ctx->pc = 0x27B938u;
label_27b938:
    // 0x27b938: 0xc08d1c4  jal         func_234710
label_27b93c:
    if (ctx->pc == 0x27B93Cu) {
        ctx->pc = 0x27B940u;
        goto label_27b940;
    }
    ctx->pc = 0x27B938u;
    SET_GPR_U32(ctx, 31, 0x27B940u);
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B940u; }
        if (ctx->pc != 0x27B940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B940u; }
        if (ctx->pc != 0x27B940u) { return; }
    }
    ctx->pc = 0x27B940u;
label_27b940:
    // 0x27b940: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x27b940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_27b944:
    // 0x27b944: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x27b944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b948:
    // 0x27b948: 0x8e46006c  lw          $a2, 0x6C($s2)
    ctx->pc = 0x27b948u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_27b94c:
    // 0x27b94c: 0x27a50094  addiu       $a1, $sp, 0x94
    ctx->pc = 0x27b94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_27b950:
    // 0x27b950: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x27b950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_27b954:
    // 0x27b954: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x27b954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
label_27b958:
    // 0x27b958: 0x27a3009c  addiu       $v1, $sp, 0x9C
    ctx->pc = 0x27b958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_27b95c:
    // 0x27b95c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x27b95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b960:
    // 0x27b960: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x27b960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
label_27b964:
    // 0x27b964: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x27b964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b968:
    // 0x27b968: 0xe4c00028  swc1        $f0, 0x28($a2)
    ctx->pc = 0x27b968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
label_27b96c:
    // 0x27b96c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x27b96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27b970:
    // 0x27b970: 0xe4c0002c  swc1        $f0, 0x2C($a2)
    ctx->pc = 0x27b970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
label_27b974:
    // 0x27b974: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x27b974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_27b978:
    // 0x27b978: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x27b978u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27b97c:
    // 0x27b97c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27b97cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27b980:
    // 0x27b980: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27b980u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27b984:
    // 0x27b984: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27b984u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27b988:
    // 0x27b988: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27b988u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27b98c:
    // 0x27b98c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27b98cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27b990:
    // 0x27b990: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27b990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27b994:
    // 0x27b994: 0x3e00008  jr          $ra
label_27b998:
    if (ctx->pc == 0x27B998u) {
        ctx->pc = 0x27B998u;
            // 0x27b998: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x27B99Cu;
        goto label_27b99c;
    }
    ctx->pc = 0x27B994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B994u;
            // 0x27b998: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27B99Cu;
label_27b99c:
    // 0x27b99c: 0x0  nop
    ctx->pc = 0x27b99cu;
    // NOP
label_27b9a0:
    // 0x27b9a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27b9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_27b9a4:
    // 0x27b9a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27b9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_27b9a8:
    // 0x27b9a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27b9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27b9ac:
    // 0x27b9ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27b9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27b9b0:
    // 0x27b9b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27b9b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27b9b4:
    // 0x27b9b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27b9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27b9b8:
    // 0x27b9b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27b9b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27b9bc:
    // 0x27b9bc: 0xa3a8004c  sb          $t0, 0x4C($sp)
    ctx->pc = 0x27b9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 8));
label_27b9c0:
    // 0x27b9c0: 0x83a8004c  lb          $t0, 0x4C($sp)
    ctx->pc = 0x27b9c0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 76)));
label_27b9c4:
    // 0x27b9c4: 0xc08de4c  jal         func_237930
label_27b9c8:
    if (ctx->pc == 0x27B9C8u) {
        ctx->pc = 0x27B9C8u;
            // 0x27b9c8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B9CCu;
        goto label_27b9cc;
    }
    ctx->pc = 0x27B9C4u;
    SET_GPR_U32(ctx, 31, 0x27B9CCu);
    ctx->pc = 0x27B9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B9C4u;
            // 0x27b9c8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x237930u;
    if (runtime->hasFunction(0x237930u)) {
        auto targetFn = runtime->lookupFunction(0x237930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B9CCu; }
        if (ctx->pc != 0x27B9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00237930_0x237930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B9CCu; }
        if (ctx->pc != 0x27B9CCu) { return; }
    }
    ctx->pc = 0x27B9CCu;
label_27b9cc:
    // 0x27b9cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b9d0:
    // 0x27b9d0: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
label_27b9d4:
    if (ctx->pc == 0x27B9D4u) {
        ctx->pc = 0x27B9D4u;
            // 0x27b9d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B9D8u;
        goto label_27b9d8;
    }
    ctx->pc = 0x27B9D0u;
    {
        const bool branch_taken_0x27b9d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x27B9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B9D0u;
            // 0x27b9d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b9d0) {
            ctx->pc = 0x27B9F0u;
            goto label_27b9f0;
        }
    }
    ctx->pc = 0x27B9D8u;
label_27b9d8:
    // 0x27b9d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27b9d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27b9dc:
    // 0x27b9dc: 0xc09f4d8  jal         func_27D360
label_27b9e0:
    if (ctx->pc == 0x27B9E0u) {
        ctx->pc = 0x27B9E0u;
            // 0x27b9e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B9E4u;
        goto label_27b9e4;
    }
    ctx->pc = 0x27B9DCu;
    SET_GPR_U32(ctx, 31, 0x27B9E4u);
    ctx->pc = 0x27B9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B9DCu;
            // 0x27b9e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D360u;
    if (runtime->hasFunction(0x27D360u)) {
        auto targetFn = runtime->lookupFunction(0x27D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B9E4u; }
        if (ctx->pc != 0x27B9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D360_0x27d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B9E4u; }
        if (ctx->pc != 0x27B9E4u) { return; }
    }
    ctx->pc = 0x27B9E4u;
label_27b9e4:
    // 0x27b9e4: 0x10000006  b           . + 4 + (0x6 << 2)
label_27b9e8:
    if (ctx->pc == 0x27B9E8u) {
        ctx->pc = 0x27B9ECu;
        goto label_27b9ec;
    }
    ctx->pc = 0x27B9E4u;
    {
        const bool branch_taken_0x27b9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b9e4) {
            ctx->pc = 0x27BA00u;
            goto label_27ba00;
        }
    }
    ctx->pc = 0x27B9ECu;
label_27b9ec:
    // 0x27b9ec: 0x0  nop
    ctx->pc = 0x27b9ecu;
    // NOP
label_27b9f0:
    // 0x27b9f0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x27b9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_27b9f4:
    // 0x27b9f4: 0xc09f558  jal         func_27D560
label_27b9f8:
    if (ctx->pc == 0x27B9F8u) {
        ctx->pc = 0x27B9F8u;
            // 0x27b9f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B9FCu;
        goto label_27b9fc;
    }
    ctx->pc = 0x27B9F4u;
    SET_GPR_U32(ctx, 31, 0x27B9FCu);
    ctx->pc = 0x27B9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B9F4u;
            // 0x27b9f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D560u;
    if (runtime->hasFunction(0x27D560u)) {
        auto targetFn = runtime->lookupFunction(0x27D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B9FCu; }
        if (ctx->pc != 0x27B9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D560_0x27d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B9FCu; }
        if (ctx->pc != 0x27B9FCu) { return; }
    }
    ctx->pc = 0x27B9FCu;
label_27b9fc:
    // 0x27b9fc: 0x0  nop
    ctx->pc = 0x27b9fcu;
    // NOP
label_27ba00:
    // 0x27ba00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27ba00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_27ba04:
    // 0x27ba04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27ba04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27ba08:
    // 0x27ba08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27ba08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27ba0c:
    // 0x27ba0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27ba0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27ba10:
    // 0x27ba10: 0x3e00008  jr          $ra
label_27ba14:
    if (ctx->pc == 0x27BA14u) {
        ctx->pc = 0x27BA14u;
            // 0x27ba14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x27BA18u;
        goto label_27ba18;
    }
    ctx->pc = 0x27BA10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BA10u;
            // 0x27ba14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27BA18u;
label_27ba18:
    // 0x27ba18: 0x0  nop
    ctx->pc = 0x27ba18u;
    // NOP
label_27ba1c:
    // 0x27ba1c: 0x0  nop
    ctx->pc = 0x27ba1cu;
    // NOP
label_27ba20:
    // 0x27ba20: 0x3e00008  jr          $ra
label_27ba24:
    if (ctx->pc == 0x27BA24u) {
        ctx->pc = 0x27BA28u;
        goto label_27ba28;
    }
    ctx->pc = 0x27BA20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27BA28u;
label_27ba28:
    // 0x27ba28: 0x0  nop
    ctx->pc = 0x27ba28u;
    // NOP
label_27ba2c:
    // 0x27ba2c: 0x0  nop
    ctx->pc = 0x27ba2cu;
    // NOP
label_27ba30:
    // 0x27ba30: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x27ba30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_27ba34:
    // 0x27ba34: 0x2469ffff  addiu       $t1, $v1, -0x1
    ctx->pc = 0x27ba34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_27ba38:
    // 0x27ba38: 0x5200031  bltz        $t1, . + 4 + (0x31 << 2)
label_27ba3c:
    if (ctx->pc == 0x27BA3Cu) {
        ctx->pc = 0x27BA3Cu;
            // 0x27ba3c: 0x93980  sll         $a3, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
        ctx->pc = 0x27BA40u;
        goto label_27ba40;
    }
    ctx->pc = 0x27BA38u;
    {
        const bool branch_taken_0x27ba38 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x27BA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BA38u;
            // 0x27ba3c: 0x93980  sll         $a3, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ba38) {
            ctx->pc = 0x27BB00u;
            goto label_27bb00;
        }
    }
    ctx->pc = 0x27BA40u;
label_27ba40:
    // 0x27ba40: 0x8c860030  lw          $a2, 0x30($a0)
    ctx->pc = 0x27ba40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_27ba44:
    // 0x27ba44: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x27ba44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_27ba48:
    // 0x27ba48: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x27ba48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_27ba4c:
    // 0x27ba4c: 0x8cc60018  lw          $a2, 0x18($a2)
    ctx->pc = 0x27ba4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_27ba50:
    // 0x27ba50: 0x14c30027  bne         $a2, $v1, . + 4 + (0x27 << 2)
label_27ba54:
    if (ctx->pc == 0x27BA54u) {
        ctx->pc = 0x27BA58u;
        goto label_27ba58;
    }
    ctx->pc = 0x27BA50u;
    {
        const bool branch_taken_0x27ba50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x27ba50) {
            ctx->pc = 0x27BAF0u;
            goto label_27baf0;
        }
    }
    ctx->pc = 0x27BA58u;
label_27ba58:
    // 0x27ba58: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x27ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_27ba5c:
    // 0x27ba5c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27ba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_27ba60:
    // 0x27ba60: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x27ba60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
label_27ba64:
    // 0x27ba64: 0x8c860030  lw          $a2, 0x30($a0)
    ctx->pc = 0x27ba64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_27ba68:
    // 0x27ba68: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x27ba68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_27ba6c:
    // 0x27ba6c: 0xc74021  addu        $t0, $a2, $a3
    ctx->pc = 0x27ba6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_27ba70:
    // 0x27ba70: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x27ba70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_27ba74:
    // 0x27ba74: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x27ba74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_27ba78:
    // 0x27ba78: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x27ba78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ba7c:
    // 0x27ba7c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x27ba7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_27ba80:
    // 0x27ba80: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x27ba80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ba84:
    // 0x27ba84: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x27ba84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ba88:
    // 0x27ba88: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x27ba88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_27ba8c:
    // 0x27ba8c: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x27ba8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_27ba90:
    // 0x27ba90: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x27ba90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ba94:
    // 0x27ba94: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x27ba94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
label_27ba98:
    // 0x27ba98: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x27ba98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ba9c:
    // 0x27ba9c: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x27ba9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27baa0:
    // 0x27baa0: 0xe5010010  swc1        $f1, 0x10($t0)
    ctx->pc = 0x27baa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
label_27baa4:
    // 0x27baa4: 0xe5000014  swc1        $f0, 0x14($t0)
    ctx->pc = 0x27baa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
label_27baa8:
    // 0x27baa8: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x27baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_27baac:
    // 0x27baac: 0xad030018  sw          $v1, 0x18($t0)
    ctx->pc = 0x27baacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 3));
label_27bab0:
    // 0x27bab0: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x27bab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bab4:
    // 0x27bab4: 0xe5000020  swc1        $f0, 0x20($t0)
    ctx->pc = 0x27bab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_27bab8:
    // 0x27bab8: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x27bab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27babc:
    // 0x27babc: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x27babcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_27bac0:
    // 0x27bac0: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x27bac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bac4:
    // 0x27bac4: 0xe5000028  swc1        $f0, 0x28($t0)
    ctx->pc = 0x27bac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 40), bits); }
label_27bac8:
    // 0x27bac8: 0xc4c0002c  lwc1        $f0, 0x2C($a2)
    ctx->pc = 0x27bac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bacc:
    // 0x27bacc: 0xe500002c  swc1        $f0, 0x2C($t0)
    ctx->pc = 0x27baccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 44), bits); }
label_27bad0:
    // 0x27bad0: 0xc4c00030  lwc1        $f0, 0x30($a2)
    ctx->pc = 0x27bad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bad4:
    // 0x27bad4: 0xe5000030  swc1        $f0, 0x30($t0)
    ctx->pc = 0x27bad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 48), bits); }
label_27bad8:
    // 0x27bad8: 0xc4c00034  lwc1        $f0, 0x34($a2)
    ctx->pc = 0x27bad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27badc:
    // 0x27badc: 0xe5000034  swc1        $f0, 0x34($t0)
    ctx->pc = 0x27badcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 52), bits); }
label_27bae0:
    // 0x27bae0: 0xc4c00038  lwc1        $f0, 0x38($a2)
    ctx->pc = 0x27bae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bae4:
    // 0x27bae4: 0xe5000038  swc1        $f0, 0x38($t0)
    ctx->pc = 0x27bae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 56), bits); }
label_27bae8:
    // 0x27bae8: 0xc4c0003c  lwc1        $f0, 0x3C($a2)
    ctx->pc = 0x27bae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27baec:
    // 0x27baec: 0xe500003c  swc1        $f0, 0x3C($t0)
    ctx->pc = 0x27baecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 60), bits); }
label_27baf0:
    // 0x27baf0: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x27baf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_27baf4:
    // 0x27baf4: 0x521ffd2  bgez        $t1, . + 4 + (-0x2E << 2)
label_27baf8:
    if (ctx->pc == 0x27BAF8u) {
        ctx->pc = 0x27BAF8u;
            // 0x27baf8: 0x24e7ffc0  addiu       $a3, $a3, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967232));
        ctx->pc = 0x27BAFCu;
        goto label_27bafc;
    }
    ctx->pc = 0x27BAF4u;
    {
        const bool branch_taken_0x27baf4 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x27BAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BAF4u;
            // 0x27baf8: 0x24e7ffc0  addiu       $a3, $a3, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27baf4) {
            ctx->pc = 0x27BA40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27ba40;
        }
    }
    ctx->pc = 0x27BAFCu;
label_27bafc:
    // 0x27bafc: 0x0  nop
    ctx->pc = 0x27bafcu;
    // NOP
label_27bb00:
    // 0x27bb00: 0x3e00008  jr          $ra
label_27bb04:
    if (ctx->pc == 0x27BB04u) {
        ctx->pc = 0x27BB08u;
        goto label_27bb08;
    }
    ctx->pc = 0x27BB00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27BB08u;
label_27bb08:
    // 0x27bb08: 0x0  nop
    ctx->pc = 0x27bb08u;
    // NOP
label_27bb0c:
    // 0x27bb0c: 0x0  nop
    ctx->pc = 0x27bb0cu;
    // NOP
label_27bb10:
    // 0x27bb10: 0x3e00008  jr          $ra
label_27bb14:
    if (ctx->pc == 0x27BB14u) {
        ctx->pc = 0x27BB18u;
        goto label_27bb18;
    }
    ctx->pc = 0x27BB10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27BB18u;
label_27bb18:
    // 0x27bb18: 0x0  nop
    ctx->pc = 0x27bb18u;
    // NOP
label_27bb1c:
    // 0x27bb1c: 0x0  nop
    ctx->pc = 0x27bb1cu;
    // NOP
label_27bb20:
    // 0x27bb20: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x27bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_27bb24:
    // 0x27bb24: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x27bb24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_27bb28:
    // 0x27bb28: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x27bb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_27bb2c:
    // 0x27bb2c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x27bb2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27bb30:
    // 0x27bb30: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_27bb34:
    if (ctx->pc == 0x27BB34u) {
        ctx->pc = 0x27BB34u;
            // 0x27bb34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27BB38u;
        goto label_27bb38;
    }
    ctx->pc = 0x27BB30u;
    {
        const bool branch_taken_0x27bb30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BB30u;
            // 0x27bb34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bb30) {
            ctx->pc = 0x27BB68u;
            goto label_27bb68;
        }
    }
    ctx->pc = 0x27BB38u;
label_27bb38:
    // 0x27bb38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27bb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27bb3c:
    // 0x27bb3c: 0x0  nop
    ctx->pc = 0x27bb3cu;
    // NOP
label_27bb40:
    // 0x27bb40: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x27bb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_27bb44:
    // 0x27bb44: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x27bb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_27bb48:
    // 0x27bb48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27bb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27bb4c:
    // 0x27bb4c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x27bb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bb50:
    // 0x27bb50: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x27bb50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_27bb54:
    // 0x27bb54: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27bb54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_27bb58:
    // 0x27bb58: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x27bb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_27bb5c:
    // 0x27bb5c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x27bb5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27bb60:
    // 0x27bb60: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_27bb64:
    if (ctx->pc == 0x27BB64u) {
        ctx->pc = 0x27BB64u;
            // 0x27bb64: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->pc = 0x27BB68u;
        goto label_27bb68;
    }
    ctx->pc = 0x27BB60u;
    {
        const bool branch_taken_0x27bb60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BB60u;
            // 0x27bb64: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bb60) {
            ctx->pc = 0x27BB40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27bb40;
        }
    }
    ctx->pc = 0x27BB68u;
label_27bb68:
    // 0x27bb68: 0x3e00008  jr          $ra
label_27bb6c:
    if (ctx->pc == 0x27BB6Cu) {
        ctx->pc = 0x27BB70u;
        goto label_27bb70;
    }
    ctx->pc = 0x27BB68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27BB70u;
label_27bb70:
    // 0x27bb70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x27bb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_27bb74:
    // 0x27bb74: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x27bb74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_27bb78:
    // 0x27bb78: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x27bb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_27bb7c:
    // 0x27bb7c: 0x24c6ea60  addiu       $a2, $a2, -0x15A0
    ctx->pc = 0x27bb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
label_27bb80:
    // 0x27bb80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27bb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_27bb84:
    // 0x27bb84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27bb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27bb88:
    // 0x27bb88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27bb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27bb8c:
    // 0x27bb8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27bb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27bb90:
    // 0x27bb90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27bb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27bb94:
    // 0x27bb94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27bb94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27bb98:
    // 0x27bb98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x27bb98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27bb9c:
    // 0x27bb9c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x27bb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27bba0:
    // 0x27bba0: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x27bba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_27bba4:
    // 0x27bba4: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x27bba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_27bba8:
    // 0x27bba8: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x27bba8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_27bbac:
    // 0x27bbac: 0xa3a3007c  sb          $v1, 0x7C($sp)
    ctx->pc = 0x27bbacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 124), (uint8_t)GPR_U32(ctx, 3));
label_27bbb0:
    // 0x27bbb0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x27bbb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_27bbb4:
    // 0x27bbb4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_27bbb8:
    if (ctx->pc == 0x27BBB8u) {
        ctx->pc = 0x27BBBCu;
        goto label_27bbbc;
    }
    ctx->pc = 0x27BBB4u;
    {
        const bool branch_taken_0x27bbb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bbb4) {
            ctx->pc = 0x27BBE8u;
            goto label_27bbe8;
        }
    }
    ctx->pc = 0x27BBBCu;
label_27bbbc:
    // 0x27bbbc: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x27bbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27bbc0:
    // 0x27bbc0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x27bbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_27bbc4:
    // 0x27bbc4: 0x2463d498  addiu       $v1, $v1, -0x2B68
    ctx->pc = 0x27bbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956184));
label_27bbc8:
    // 0x27bbc8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x27bbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_27bbcc:
    // 0x27bbcc: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27bbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27bbd0:
    // 0x27bbd0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x27bbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_27bbd4:
    // 0x27bbd4: 0x4004c803  .word       0x4004C803                   # mfc0        $a0, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27bbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_perf);
label_27bbd8:
    // 0x27bbd8: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x27bbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_27bbdc:
    // 0x27bbdc: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x27bbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_27bbe0:
    // 0x27bbe0: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x27bbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_27bbe4:
    // 0x27bbe4: 0x0  nop
    ctx->pc = 0x27bbe4u;
    // NOP
label_27bbe8:
    // 0x27bbe8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x27bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_27bbec:
    // 0x27bbec: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
label_27bbf0:
    if (ctx->pc == 0x27BBF0u) {
        ctx->pc = 0x27BBF4u;
        goto label_27bbf4;
    }
    ctx->pc = 0x27BBECu;
    {
        const bool branch_taken_0x27bbec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bbec) {
            ctx->pc = 0x27BC88u;
            goto label_27bc88;
        }
    }
    ctx->pc = 0x27BBF4u;
label_27bbf4:
    // 0x27bbf4: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x27bbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_27bbf8:
    // 0x27bbf8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_27bbfc:
    if (ctx->pc == 0x27BBFCu) {
        ctx->pc = 0x27BBFCu;
            // 0x27bbfc: 0x2472ffff  addiu       $s2, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->pc = 0x27BC00u;
        goto label_27bc00;
    }
    ctx->pc = 0x27BBF8u;
    {
        const bool branch_taken_0x27bbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BBF8u;
            // 0x27bbfc: 0x2472ffff  addiu       $s2, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bbf8) {
            ctx->pc = 0x27BC78u;
            goto label_27bc78;
        }
    }
    ctx->pc = 0x27BC00u;
label_27bc00:
    // 0x27bc00: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x27bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_27bc04:
    // 0x27bc04: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x27bc04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_27bc08:
    // 0x27bc08: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x27bc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_27bc0c:
    // 0x27bc0c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x27bc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27bc10:
    // 0x27bc10: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x27bc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27bc14:
    // 0x27bc14: 0x904200a8  lbu         $v0, 0xA8($v0)
    ctx->pc = 0x27bc14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 168)));
label_27bc18:
    // 0x27bc18: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x27bc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_27bc1c:
    // 0x27bc1c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x27bc1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_27bc20:
    // 0x27bc20: 0xa3a20064  sb          $v0, 0x64($sp)
    ctx->pc = 0x27bc20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 100), (uint8_t)GPR_U32(ctx, 2));
label_27bc24:
    // 0x27bc24: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x27bc24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_27bc28:
    // 0x27bc28: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27bc28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27bc2c:
    // 0x27bc2c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27bc2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27bc30:
    // 0x27bc30: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x27bc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_27bc34:
    // 0x27bc34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_27bc38:
    if (ctx->pc == 0x27BC38u) {
        ctx->pc = 0x27BC3Cu;
        goto label_27bc3c;
    }
    ctx->pc = 0x27BC34u;
    {
        const bool branch_taken_0x27bc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bc34) {
            ctx->pc = 0x27BC48u;
            goto label_27bc48;
        }
    }
    ctx->pc = 0x27BC3Cu;
label_27bc3c:
    // 0x27bc3c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x27bc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27bc40:
    // 0x27bc40: 0x10000003  b           . + 4 + (0x3 << 2)
label_27bc44:
    if (ctx->pc == 0x27BC44u) {
        ctx->pc = 0x27BC44u;
            // 0x27bc44: 0x8c470094  lw          $a3, 0x94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
        ctx->pc = 0x27BC48u;
        goto label_27bc48;
    }
    ctx->pc = 0x27BC40u;
    {
        const bool branch_taken_0x27bc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BC40u;
            // 0x27bc44: 0x8c470094  lw          $a3, 0x94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bc40) {
            ctx->pc = 0x27BC50u;
            goto label_27bc50;
        }
    }
    ctx->pc = 0x27BC48u;
label_27bc48:
    // 0x27bc48: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x27bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_27bc4c:
    // 0x27bc4c: 0x8c470094  lw          $a3, 0x94($v0)
    ctx->pc = 0x27bc4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_27bc50:
    // 0x27bc50: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x27bc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_27bc54:
    // 0x27bc54: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x27bc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_27bc58:
    // 0x27bc58: 0x24a80010  addiu       $t0, $a1, 0x10
    ctx->pc = 0x27bc58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_27bc5c:
    // 0x27bc5c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x27bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27bc60:
    // 0x27bc60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27bc60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27bc64:
    // 0x27bc64: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x27bc64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_27bc68:
    // 0x27bc68: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x27bc68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_27bc6c:
    // 0x27bc6c: 0x320f809  jalr        $t9
label_27bc70:
    if (ctx->pc == 0x27BC70u) {
        ctx->pc = 0x27BC70u;
            // 0x27bc70: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x27BC74u;
        goto label_27bc74;
    }
    ctx->pc = 0x27BC6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27BC74u);
        ctx->pc = 0x27BC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BC6Cu;
            // 0x27bc70: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27BC74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27BC74u; }
            if (ctx->pc != 0x27BC74u) { return; }
        }
        }
    }
    ctx->pc = 0x27BC74u;
label_27bc74:
    // 0x27bc74: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x27bc74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_27bc78:
    // 0x27bc78: 0x641ffe1  bgez        $s2, . + 4 + (-0x1F << 2)
label_27bc7c:
    if (ctx->pc == 0x27BC7Cu) {
        ctx->pc = 0x27BC80u;
        goto label_27bc80;
    }
    ctx->pc = 0x27BC78u;
    {
        const bool branch_taken_0x27bc78 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x27bc78) {
            ctx->pc = 0x27BC00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27bc00;
        }
    }
    ctx->pc = 0x27BC80u;
label_27bc80:
    // 0x27bc80: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x27bc80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_27bc84:
    // 0x27bc84: 0x0  nop
    ctx->pc = 0x27bc84u;
    // NOP
label_27bc88:
    // 0x27bc88: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x27bc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_27bc8c:
    // 0x27bc8c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x27bc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bc90:
    // 0x27bc90: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x27bc90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27bc94:
    // 0x27bc94: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x27bc94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
label_27bc98:
    // 0x27bc98: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x27bc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bc9c:
    // 0x27bc9c: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x27bc9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
label_27bca0:
    // 0x27bca0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x27bca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bca4:
    // 0x27bca4: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x27bca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
label_27bca8:
    // 0x27bca8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x27bca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bcac:
    // 0x27bcac: 0xe46001ac  swc1        $f0, 0x1AC($v1)
    ctx->pc = 0x27bcacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 428), bits); }
label_27bcb0:
    // 0x27bcb0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x27bcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_27bcb4:
    // 0x27bcb4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x27bcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bcb8:
    // 0x27bcb8: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x27bcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_27bcbc:
    // 0x27bcbc: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x27bcbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_27bcc0:
    // 0x27bcc0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x27bcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bcc4:
    // 0x27bcc4: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x27bcc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_27bcc8:
    // 0x27bcc8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x27bcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bccc:
    // 0x27bccc: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x27bcccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_27bcd0:
    // 0x27bcd0: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x27bcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bcd4:
    // 0x27bcd4: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x27bcd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
label_27bcd8:
    // 0x27bcd8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x27bcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_27bcdc:
    // 0x27bcdc: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x27bcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27bce0:
    // 0x27bce0: 0xc46002e8  lwc1        $f0, 0x2E8($v1)
    ctx->pc = 0x27bce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bce4:
    // 0x27bce4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27bce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_27bce8:
    // 0x27bce8: 0xe46002d4  swc1        $f0, 0x2D4($v1)
    ctx->pc = 0x27bce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 724), bits); }
label_27bcec:
    // 0x27bcec: 0xc46002dc  lwc1        $f0, 0x2DC($v1)
    ctx->pc = 0x27bcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bcf0:
    // 0x27bcf0: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x27bcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27bcf4:
    // 0x27bcf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27bcf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_27bcf8:
    // 0x27bcf8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27bcf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_27bcfc:
    // 0x27bcfc: 0xe46002d8  swc1        $f0, 0x2D8($v1)
    ctx->pc = 0x27bcfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 728), bits); }
label_27bd00:
    // 0x27bd00: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x27bd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_27bd04:
    // 0x27bd04: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x27bd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_27bd08:
    // 0x27bd08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27bd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_27bd0c:
    // 0x27bd0c: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x27bd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
label_27bd10:
    // 0x27bd10: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x27bd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_27bd14:
    // 0x27bd14: 0x1000003a  b           . + 4 + (0x3A << 2)
label_27bd18:
    if (ctx->pc == 0x27BD18u) {
        ctx->pc = 0x27BD18u;
            // 0x27bd18: 0x24730028  addiu       $s3, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x27BD1Cu;
        goto label_27bd1c;
    }
    ctx->pc = 0x27BD14u;
    {
        const bool branch_taken_0x27bd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BD14u;
            // 0x27bd18: 0x24730028  addiu       $s3, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd14) {
            ctx->pc = 0x27BE00u;
            goto label_27be00;
        }
    }
    ctx->pc = 0x27BD1Cu;
label_27bd1c:
    // 0x27bd1c: 0x0  nop
    ctx->pc = 0x27bd1cu;
    // NOP
label_27bd20:
    // 0x27bd20: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x27bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_27bd24:
    // 0x27bd24: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x27bd24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_27bd28:
    // 0x27bd28: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x27bd28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_27bd2c:
    // 0x27bd2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27bd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27bd30:
    // 0x27bd30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27bd34:
    // 0x27bd34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27bd38:
    // 0x27bd38: 0x8c460050  lw          $a2, 0x50($v0)
    ctx->pc = 0x27bd38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_27bd3c:
    // 0x27bd3c: 0x8c45004c  lw          $a1, 0x4C($v0)
    ctx->pc = 0x27bd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_27bd40:
    // 0x27bd40: 0xc09f034  jal         func_27C0D0
label_27bd44:
    if (ctx->pc == 0x27BD44u) {
        ctx->pc = 0x27BD44u;
            // 0x27bd44: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27BD48u;
        goto label_27bd48;
    }
    ctx->pc = 0x27BD40u;
    SET_GPR_U32(ctx, 31, 0x27BD48u);
    ctx->pc = 0x27BD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BD40u;
            // 0x27bd44: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27C0D0u;
    if (runtime->hasFunction(0x27C0D0u)) {
        auto targetFn = runtime->lookupFunction(0x27C0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BD48u; }
        if (ctx->pc != 0x27BD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027C0D0_0x27c0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BD48u; }
        if (ctx->pc != 0x27BD48u) { return; }
    }
    ctx->pc = 0x27BD48u;
label_27bd48:
    // 0x27bd48: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27bd48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27bd4c:
    // 0x27bd4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27bd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27bd50:
    // 0x27bd50: 0x8c24ea20  lw          $a0, -0x15E0($at)
    ctx->pc = 0x27bd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961696)));
label_27bd54:
    // 0x27bd54: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x27bd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_27bd58:
    // 0x27bd58: 0x14830027  bne         $a0, $v1, . + 4 + (0x27 << 2)
label_27bd5c:
    if (ctx->pc == 0x27BD5Cu) {
        ctx->pc = 0x27BD60u;
        goto label_27bd60;
    }
    ctx->pc = 0x27BD58u;
    {
        const bool branch_taken_0x27bd58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27bd58) {
            ctx->pc = 0x27BDF8u;
            goto label_27bdf8;
        }
    }
    ctx->pc = 0x27BD60u;
label_27bd60:
    // 0x27bd60: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x27bd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_27bd64:
    // 0x27bd64: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x27bd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_27bd68:
    // 0x27bd68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27bd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_27bd6c:
    // 0x27bd6c: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x27bd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
label_27bd70:
    // 0x27bd70: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x27bd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_27bd74:
    // 0x27bd74: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_27bd78:
    if (ctx->pc == 0x27BD78u) {
        ctx->pc = 0x27BD7Cu;
        goto label_27bd7c;
    }
    ctx->pc = 0x27BD74u;
    {
        const bool branch_taken_0x27bd74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27bd74) {
            ctx->pc = 0x27BDA0u;
            goto label_27bda0;
        }
    }
    ctx->pc = 0x27BD7Cu;
label_27bd7c:
    // 0x27bd7c: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x27bd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_27bd80:
    // 0x27bd80: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_27bd84:
    if (ctx->pc == 0x27BD84u) {
        ctx->pc = 0x27BD88u;
        goto label_27bd88;
    }
    ctx->pc = 0x27BD80u;
    {
        const bool branch_taken_0x27bd80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bd80) {
            ctx->pc = 0x27BDA0u;
            goto label_27bda0;
        }
    }
    ctx->pc = 0x27BD88u;
label_27bd88:
    // 0x27bd88: 0x8083008c  lb          $v1, 0x8C($a0)
    ctx->pc = 0x27bd88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
label_27bd8c:
    // 0x27bd8c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_27bd90:
    if (ctx->pc == 0x27BD90u) {
        ctx->pc = 0x27BD94u;
        goto label_27bd94;
    }
    ctx->pc = 0x27BD8Cu;
    {
        const bool branch_taken_0x27bd8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27bd8c) {
            ctx->pc = 0x27BDA0u;
            goto label_27bda0;
        }
    }
    ctx->pc = 0x27BD94u;
label_27bd94:
    // 0x27bd94: 0xc08d1c4  jal         func_234710
label_27bd98:
    if (ctx->pc == 0x27BD98u) {
        ctx->pc = 0x27BD9Cu;
        goto label_27bd9c;
    }
    ctx->pc = 0x27BD94u;
    SET_GPR_U32(ctx, 31, 0x27BD9Cu);
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BD9Cu; }
        if (ctx->pc != 0x27BD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BD9Cu; }
        if (ctx->pc != 0x27BD9Cu) { return; }
    }
    ctx->pc = 0x27BD9Cu;
label_27bd9c:
    // 0x27bd9c: 0x0  nop
    ctx->pc = 0x27bd9cu;
    // NOP
label_27bda0:
    // 0x27bda0: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x27bda0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_27bda4:
    // 0x27bda4: 0x24c6ea60  addiu       $a2, $a2, -0x15A0
    ctx->pc = 0x27bda4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
label_27bda8:
    // 0x27bda8: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x27bda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_27bdac:
    // 0x27bdac: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x27bdacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_27bdb0:
    // 0x27bdb0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x27bdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27bdb4:
    // 0x27bdb4: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x27bdb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_27bdb8:
    // 0x27bdb8: 0xa3a30078  sb          $v1, 0x78($sp)
    ctx->pc = 0x27bdb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 120), (uint8_t)GPR_U32(ctx, 3));
label_27bdbc:
    // 0x27bdbc: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x27bdbcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_27bdc0:
    // 0x27bdc0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_27bdc4:
    if (ctx->pc == 0x27BDC4u) {
        ctx->pc = 0x27BDC8u;
        goto label_27bdc8;
    }
    ctx->pc = 0x27BDC0u;
    {
        const bool branch_taken_0x27bdc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bdc0) {
            ctx->pc = 0x27BDF0u;
            goto label_27bdf0;
        }
    }
    ctx->pc = 0x27BDC8u;
label_27bdc8:
    // 0x27bdc8: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x27bdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27bdcc:
    // 0x27bdcc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x27bdccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_27bdd0:
    // 0x27bdd0: 0x2463d4a8  addiu       $v1, $v1, -0x2B58
    ctx->pc = 0x27bdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956200));
label_27bdd4:
    // 0x27bdd4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x27bdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_27bdd8:
    // 0x27bdd8: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27bdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27bddc:
    // 0x27bddc: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x27bddcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_27bde0:
    // 0x27bde0: 0x4004c803  .word       0x4004C803                   # mfc0        $a0, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27bde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_perf);
label_27bde4:
    // 0x27bde4: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x27bde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_27bde8:
    // 0x27bde8: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x27bde8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_27bdec:
    // 0x27bdec: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x27bdecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_27bdf0:
    // 0x27bdf0: 0x100000ad  b           . + 4 + (0xAD << 2)
label_27bdf4:
    if (ctx->pc == 0x27BDF4u) {
        ctx->pc = 0x27BDF8u;
        goto label_27bdf8;
    }
    ctx->pc = 0x27BDF0u;
    {
        const bool branch_taken_0x27bdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bdf0) {
            ctx->pc = 0x27C0A8u;
            goto label_27c0a8;
        }
    }
    ctx->pc = 0x27BDF8u;
label_27bdf8:
    // 0x27bdf8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27bdf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_27bdfc:
    // 0x27bdfc: 0x0  nop
    ctx->pc = 0x27bdfcu;
    // NOP
label_27be00:
    // 0x27be00: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x27be00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_27be04:
    // 0x27be04: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x27be04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27be08:
    // 0x27be08: 0x1460ffc5  bnez        $v1, . + 4 + (-0x3B << 2)
label_27be0c:
    if (ctx->pc == 0x27BE0Cu) {
        ctx->pc = 0x27BE10u;
        goto label_27be10;
    }
    ctx->pc = 0x27BE08u;
    {
        const bool branch_taken_0x27be08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27be08) {
            ctx->pc = 0x27BD20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27bd20;
        }
    }
    ctx->pc = 0x27BE10u;
label_27be10:
    // 0x27be10: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x27be10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_27be14:
    // 0x27be14: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x27be14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_27be18:
    // 0x27be18: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27be18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_27be1c:
    // 0x27be1c: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x27be1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
label_27be20:
    // 0x27be20: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x27be20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_27be24:
    // 0x27be24: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_27be28:
    if (ctx->pc == 0x27BE28u) {
        ctx->pc = 0x27BE2Cu;
        goto label_27be2c;
    }
    ctx->pc = 0x27BE24u;
    {
        const bool branch_taken_0x27be24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27be24) {
            ctx->pc = 0x27BE50u;
            goto label_27be50;
        }
    }
    ctx->pc = 0x27BE2Cu;
label_27be2c:
    // 0x27be2c: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x27be2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_27be30:
    // 0x27be30: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_27be34:
    if (ctx->pc == 0x27BE34u) {
        ctx->pc = 0x27BE38u;
        goto label_27be38;
    }
    ctx->pc = 0x27BE30u;
    {
        const bool branch_taken_0x27be30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27be30) {
            ctx->pc = 0x27BE50u;
            goto label_27be50;
        }
    }
    ctx->pc = 0x27BE38u;
label_27be38:
    // 0x27be38: 0x8083008c  lb          $v1, 0x8C($a0)
    ctx->pc = 0x27be38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
label_27be3c:
    // 0x27be3c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_27be40:
    if (ctx->pc == 0x27BE40u) {
        ctx->pc = 0x27BE44u;
        goto label_27be44;
    }
    ctx->pc = 0x27BE3Cu;
    {
        const bool branch_taken_0x27be3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27be3c) {
            ctx->pc = 0x27BE50u;
            goto label_27be50;
        }
    }
    ctx->pc = 0x27BE44u;
label_27be44:
    // 0x27be44: 0xc08d1c4  jal         func_234710
label_27be48:
    if (ctx->pc == 0x27BE48u) {
        ctx->pc = 0x27BE4Cu;
        goto label_27be4c;
    }
    ctx->pc = 0x27BE44u;
    SET_GPR_U32(ctx, 31, 0x27BE4Cu);
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BE4Cu; }
        if (ctx->pc != 0x27BE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BE4Cu; }
        if (ctx->pc != 0x27BE4Cu) { return; }
    }
    ctx->pc = 0x27BE4Cu;
label_27be4c:
    // 0x27be4c: 0x0  nop
    ctx->pc = 0x27be4cu;
    // NOP
label_27be50:
    // 0x27be50: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x27be50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_27be54:
    // 0x27be54: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x27be54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27be58:
    // 0x27be58: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x27be58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_27be5c:
    // 0x27be5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27be5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_27be60:
    // 0x27be60: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x27be60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
label_27be64:
    // 0x27be64: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x27be64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_27be68:
    // 0x27be68: 0x10000067  b           . + 4 + (0x67 << 2)
label_27be6c:
    if (ctx->pc == 0x27BE6Cu) {
        ctx->pc = 0x27BE6Cu;
            // 0x27be6c: 0x24740028  addiu       $s4, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x27BE70u;
        goto label_27be70;
    }
    ctx->pc = 0x27BE68u;
    {
        const bool branch_taken_0x27be68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BE68u;
            // 0x27be6c: 0x24740028  addiu       $s4, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27be68) {
            ctx->pc = 0x27C008u;
            goto label_27c008;
        }
    }
    ctx->pc = 0x27BE70u;
label_27be70:
    // 0x27be70: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x27be70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_27be74:
    // 0x27be74: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x27be74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_27be78:
    // 0x27be78: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x27be78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_27be7c:
    // 0x27be7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27be7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27be80:
    // 0x27be80: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x27be80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_27be84:
    // 0x27be84: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x27be84u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27be88:
    // 0x27be88: 0x8c46006c  lw          $a2, 0x6C($v0)
    ctx->pc = 0x27be88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_27be8c:
    // 0x27be8c: 0xc09f330  jal         func_27CCC0
label_27be90:
    if (ctx->pc == 0x27BE90u) {
        ctx->pc = 0x27BE90u;
            // 0x27be90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27BE94u;
        goto label_27be94;
    }
    ctx->pc = 0x27BE8Cu;
    SET_GPR_U32(ctx, 31, 0x27BE94u);
    ctx->pc = 0x27BE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BE8Cu;
            // 0x27be90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27CCC0u;
    if (runtime->hasFunction(0x27CCC0u)) {
        auto targetFn = runtime->lookupFunction(0x27CCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BE94u; }
        if (ctx->pc != 0x27BE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027CCC0_0x27ccc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BE94u; }
        if (ctx->pc != 0x27BE94u) { return; }
    }
    ctx->pc = 0x27BE94u;
label_27be94:
    // 0x27be94: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27be94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27be98:
    // 0x27be98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27be98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27be9c:
    // 0x27be9c: 0x8c24ea20  lw          $a0, -0x15E0($at)
    ctx->pc = 0x27be9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961696)));
label_27bea0:
    // 0x27bea0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x27bea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_27bea4:
    // 0x27bea4: 0x14830026  bne         $a0, $v1, . + 4 + (0x26 << 2)
label_27bea8:
    if (ctx->pc == 0x27BEA8u) {
        ctx->pc = 0x27BEACu;
        goto label_27beac;
    }
    ctx->pc = 0x27BEA4u;
    {
        const bool branch_taken_0x27bea4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27bea4) {
            ctx->pc = 0x27BF40u;
            goto label_27bf40;
        }
    }
    ctx->pc = 0x27BEACu;
label_27beac:
    // 0x27beac: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x27beacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_27beb0:
    // 0x27beb0: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x27beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_27beb4:
    // 0x27beb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27beb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_27beb8:
    // 0x27beb8: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x27beb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
label_27bebc:
    // 0x27bebc: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x27bebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_27bec0:
    // 0x27bec0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_27bec4:
    if (ctx->pc == 0x27BEC4u) {
        ctx->pc = 0x27BEC8u;
        goto label_27bec8;
    }
    ctx->pc = 0x27BEC0u;
    {
        const bool branch_taken_0x27bec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27bec0) {
            ctx->pc = 0x27BEE8u;
            goto label_27bee8;
        }
    }
    ctx->pc = 0x27BEC8u;
label_27bec8:
    // 0x27bec8: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x27bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_27becc:
    // 0x27becc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_27bed0:
    if (ctx->pc == 0x27BED0u) {
        ctx->pc = 0x27BED4u;
        goto label_27bed4;
    }
    ctx->pc = 0x27BECCu;
    {
        const bool branch_taken_0x27becc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27becc) {
            ctx->pc = 0x27BEE8u;
            goto label_27bee8;
        }
    }
    ctx->pc = 0x27BED4u;
label_27bed4:
    // 0x27bed4: 0x8083008c  lb          $v1, 0x8C($a0)
    ctx->pc = 0x27bed4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
label_27bed8:
    // 0x27bed8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_27bedc:
    if (ctx->pc == 0x27BEDCu) {
        ctx->pc = 0x27BEE0u;
        goto label_27bee0;
    }
    ctx->pc = 0x27BED8u;
    {
        const bool branch_taken_0x27bed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27bed8) {
            ctx->pc = 0x27BEE8u;
            goto label_27bee8;
        }
    }
    ctx->pc = 0x27BEE0u;
label_27bee0:
    // 0x27bee0: 0xc08d1c4  jal         func_234710
label_27bee4:
    if (ctx->pc == 0x27BEE4u) {
        ctx->pc = 0x27BEE8u;
        goto label_27bee8;
    }
    ctx->pc = 0x27BEE0u;
    SET_GPR_U32(ctx, 31, 0x27BEE8u);
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BEE8u; }
        if (ctx->pc != 0x27BEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BEE8u; }
        if (ctx->pc != 0x27BEE8u) { return; }
    }
    ctx->pc = 0x27BEE8u;
label_27bee8:
    // 0x27bee8: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x27bee8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_27beec:
    // 0x27beec: 0x24c6ea60  addiu       $a2, $a2, -0x15A0
    ctx->pc = 0x27beecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
label_27bef0:
    // 0x27bef0: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x27bef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_27bef4:
    // 0x27bef4: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x27bef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_27bef8:
    // 0x27bef8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x27bef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27befc:
    // 0x27befc: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x27befcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_27bf00:
    // 0x27bf00: 0xa3a30074  sb          $v1, 0x74($sp)
    ctx->pc = 0x27bf00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 3));
label_27bf04:
    // 0x27bf04: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x27bf04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_27bf08:
    // 0x27bf08: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_27bf0c:
    if (ctx->pc == 0x27BF0Cu) {
        ctx->pc = 0x27BF10u;
        goto label_27bf10;
    }
    ctx->pc = 0x27BF08u;
    {
        const bool branch_taken_0x27bf08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bf08) {
            ctx->pc = 0x27BF38u;
            goto label_27bf38;
        }
    }
    ctx->pc = 0x27BF10u;
label_27bf10:
    // 0x27bf10: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x27bf10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27bf14:
    // 0x27bf14: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x27bf14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_27bf18:
    // 0x27bf18: 0x2463d4a8  addiu       $v1, $v1, -0x2B58
    ctx->pc = 0x27bf18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956200));
label_27bf1c:
    // 0x27bf1c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x27bf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_27bf20:
    // 0x27bf20: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27bf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27bf24:
    // 0x27bf24: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x27bf24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_27bf28:
    // 0x27bf28: 0x4004c803  .word       0x4004C803                   # mfc0        $a0, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27bf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_perf);
label_27bf2c:
    // 0x27bf2c: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x27bf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_27bf30:
    // 0x27bf30: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x27bf30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_27bf34:
    // 0x27bf34: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x27bf34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_27bf38:
    // 0x27bf38: 0x1000005b  b           . + 4 + (0x5B << 2)
label_27bf3c:
    if (ctx->pc == 0x27BF3Cu) {
        ctx->pc = 0x27BF40u;
        goto label_27bf40;
    }
    ctx->pc = 0x27BF38u;
    {
        const bool branch_taken_0x27bf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bf38) {
            ctx->pc = 0x27C0A8u;
            goto label_27c0a8;
        }
    }
    ctx->pc = 0x27BF40u;
label_27bf40:
    // 0x27bf40: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x27bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_27bf44:
    // 0x27bf44: 0x8c630174  lw          $v1, 0x174($v1)
    ctx->pc = 0x27bf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
label_27bf48:
    // 0x27bf48: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
label_27bf4c:
    if (ctx->pc == 0x27BF4Cu) {
        ctx->pc = 0x27BF4Cu;
            // 0x27bf4c: 0x3c05006f  lui         $a1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x27BF50u;
        goto label_27bf50;
    }
    ctx->pc = 0x27BF48u;
    {
        const bool branch_taken_0x27bf48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BF48u;
            // 0x27bf4c: 0x3c05006f  lui         $a1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bf48) {
            ctx->pc = 0x27C000u;
            goto label_27c000;
        }
    }
    ctx->pc = 0x27BF50u;
label_27bf50:
    // 0x27bf50: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x27bf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_27bf54:
    // 0x27bf54: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x27bf54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_27bf58:
    // 0x27bf58: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x27bf58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_27bf5c:
    // 0x27bf5c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x27bf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27bf60:
    // 0x27bf60: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x27bf60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_27bf64:
    // 0x27bf64: 0xa3a20070  sb          $v0, 0x70($sp)
    ctx->pc = 0x27bf64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 2));
label_27bf68:
    // 0x27bf68: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x27bf68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_27bf6c:
    // 0x27bf6c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_27bf70:
    if (ctx->pc == 0x27BF70u) {
        ctx->pc = 0x27BF74u;
        goto label_27bf74;
    }
    ctx->pc = 0x27BF6Cu;
    {
        const bool branch_taken_0x27bf6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bf6c) {
            ctx->pc = 0x27BFA0u;
            goto label_27bfa0;
        }
    }
    ctx->pc = 0x27BF74u;
label_27bf74:
    // 0x27bf74: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x27bf74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27bf78:
    // 0x27bf78: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x27bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_27bf7c:
    // 0x27bf7c: 0x2442d4b0  addiu       $v0, $v0, -0x2B50
    ctx->pc = 0x27bf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956208));
label_27bf80:
    // 0x27bf80: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x27bf80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_27bf84:
    // 0x27bf84: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_27bf88:
    // 0x27bf88: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x27bf88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_27bf8c:
    // 0x27bf8c: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27bf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27bf90:
    // 0x27bf90: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x27bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_27bf94:
    // 0x27bf94: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x27bf94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_27bf98:
    // 0x27bf98: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x27bf98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_27bf9c:
    // 0x27bf9c: 0x0  nop
    ctx->pc = 0x27bf9cu;
    // NOP
label_27bfa0:
    // 0x27bfa0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x27bfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_27bfa4:
    // 0x27bfa4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27bfa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27bfa8:
    // 0x27bfa8: 0xc08e9d0  jal         func_23A740
label_27bfac:
    if (ctx->pc == 0x27BFACu) {
        ctx->pc = 0x27BFACu;
            // 0x27bfac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27BFB0u;
        goto label_27bfb0;
    }
    ctx->pc = 0x27BFA8u;
    SET_GPR_U32(ctx, 31, 0x27BFB0u);
    ctx->pc = 0x27BFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BFA8u;
            // 0x27bfac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A740u;
    if (runtime->hasFunction(0x23A740u)) {
        auto targetFn = runtime->lookupFunction(0x23A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BFB0u; }
        if (ctx->pc != 0x27BFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023A740_0x23a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BFB0u; }
        if (ctx->pc != 0x27BFB0u) { return; }
    }
    ctx->pc = 0x27BFB0u;
label_27bfb0:
    // 0x27bfb0: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x27bfb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_27bfb4:
    // 0x27bfb4: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x27bfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_27bfb8:
    // 0x27bfb8: 0x24c6ea60  addiu       $a2, $a2, -0x15A0
    ctx->pc = 0x27bfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
label_27bfbc:
    // 0x27bfbc: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x27bfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_27bfc0:
    // 0x27bfc0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x27bfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27bfc4:
    // 0x27bfc4: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x27bfc4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_27bfc8:
    // 0x27bfc8: 0xa3a3006c  sb          $v1, 0x6C($sp)
    ctx->pc = 0x27bfc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 108), (uint8_t)GPR_U32(ctx, 3));
label_27bfcc:
    // 0x27bfcc: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x27bfccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_27bfd0:
    // 0x27bfd0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_27bfd4:
    if (ctx->pc == 0x27BFD4u) {
        ctx->pc = 0x27BFD8u;
        goto label_27bfd8;
    }
    ctx->pc = 0x27BFD0u;
    {
        const bool branch_taken_0x27bfd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bfd0) {
            ctx->pc = 0x27C000u;
            goto label_27c000;
        }
    }
    ctx->pc = 0x27BFD8u;
label_27bfd8:
    // 0x27bfd8: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x27bfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27bfdc:
    // 0x27bfdc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x27bfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_27bfe0:
    // 0x27bfe0: 0x2463d4a8  addiu       $v1, $v1, -0x2B58
    ctx->pc = 0x27bfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956200));
label_27bfe4:
    // 0x27bfe4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x27bfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_27bfe8:
    // 0x27bfe8: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27bfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27bfec:
    // 0x27bfec: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x27bfecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_27bff0:
    // 0x27bff0: 0x4004c803  .word       0x4004C803                   # mfc0        $a0, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27bff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_perf);
label_27bff4:
    // 0x27bff4: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x27bff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_27bff8:
    // 0x27bff8: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x27bff8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_27bffc:
    // 0x27bffc: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x27bffcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_27c000:
    // 0x27c000: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x27c000u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_27c004:
    // 0x27c004: 0x0  nop
    ctx->pc = 0x27c004u;
    // NOP
label_27c008:
    // 0x27c008: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x27c008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_27c00c:
    // 0x27c00c: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x27c00cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27c010:
    // 0x27c010: 0x1460ff97  bnez        $v1, . + 4 + (-0x69 << 2)
label_27c014:
    if (ctx->pc == 0x27C014u) {
        ctx->pc = 0x27C018u;
        goto label_27c018;
    }
    ctx->pc = 0x27C010u;
    {
        const bool branch_taken_0x27c010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c010) {
            ctx->pc = 0x27BE70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27be70;
        }
    }
    ctx->pc = 0x27C018u;
label_27c018:
    // 0x27c018: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x27c018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_27c01c:
    // 0x27c01c: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x27c01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_27c020:
    // 0x27c020: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27c020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_27c024:
    // 0x27c024: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x27c024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
label_27c028:
    // 0x27c028: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x27c028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_27c02c:
    // 0x27c02c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_27c030:
    if (ctx->pc == 0x27C030u) {
        ctx->pc = 0x27C034u;
        goto label_27c034;
    }
    ctx->pc = 0x27C02Cu;
    {
        const bool branch_taken_0x27c02c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c02c) {
            ctx->pc = 0x27C058u;
            goto label_27c058;
        }
    }
    ctx->pc = 0x27C034u;
label_27c034:
    // 0x27c034: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x27c034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_27c038:
    // 0x27c038: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_27c03c:
    if (ctx->pc == 0x27C03Cu) {
        ctx->pc = 0x27C040u;
        goto label_27c040;
    }
    ctx->pc = 0x27C038u;
    {
        const bool branch_taken_0x27c038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c038) {
            ctx->pc = 0x27C058u;
            goto label_27c058;
        }
    }
    ctx->pc = 0x27C040u;
label_27c040:
    // 0x27c040: 0x8083008c  lb          $v1, 0x8C($a0)
    ctx->pc = 0x27c040u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
label_27c044:
    // 0x27c044: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_27c048:
    if (ctx->pc == 0x27C048u) {
        ctx->pc = 0x27C04Cu;
        goto label_27c04c;
    }
    ctx->pc = 0x27C044u;
    {
        const bool branch_taken_0x27c044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c044) {
            ctx->pc = 0x27C058u;
            goto label_27c058;
        }
    }
    ctx->pc = 0x27C04Cu;
label_27c04c:
    // 0x27c04c: 0xc08d1c4  jal         func_234710
label_27c050:
    if (ctx->pc == 0x27C050u) {
        ctx->pc = 0x27C054u;
        goto label_27c054;
    }
    ctx->pc = 0x27C04Cu;
    SET_GPR_U32(ctx, 31, 0x27C054u);
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C054u; }
        if (ctx->pc != 0x27C054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C054u; }
        if (ctx->pc != 0x27C054u) { return; }
    }
    ctx->pc = 0x27C054u;
label_27c054:
    // 0x27c054: 0x0  nop
    ctx->pc = 0x27c054u;
    // NOP
label_27c058:
    // 0x27c058: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x27c058u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_27c05c:
    // 0x27c05c: 0x24c6ea60  addiu       $a2, $a2, -0x15A0
    ctx->pc = 0x27c05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
label_27c060:
    // 0x27c060: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x27c060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_27c064:
    // 0x27c064: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x27c064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_27c068:
    // 0x27c068: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x27c068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27c06c:
    // 0x27c06c: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x27c06cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_27c070:
    // 0x27c070: 0xa3a30068  sb          $v1, 0x68($sp)
    ctx->pc = 0x27c070u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 3));
label_27c074:
    // 0x27c074: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x27c074u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_27c078:
    // 0x27c078: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_27c07c:
    if (ctx->pc == 0x27C07Cu) {
        ctx->pc = 0x27C080u;
        goto label_27c080;
    }
    ctx->pc = 0x27C078u;
    {
        const bool branch_taken_0x27c078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c078) {
            ctx->pc = 0x27C0A8u;
            goto label_27c0a8;
        }
    }
    ctx->pc = 0x27C080u;
label_27c080:
    // 0x27c080: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x27c080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27c084:
    // 0x27c084: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x27c084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_27c088:
    // 0x27c088: 0x2463d4a8  addiu       $v1, $v1, -0x2B58
    ctx->pc = 0x27c088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956200));
label_27c08c:
    // 0x27c08c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x27c08cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_27c090:
    // 0x27c090: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27c090u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27c094:
    // 0x27c094: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x27c094u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_27c098:
    // 0x27c098: 0x4004c803  .word       0x4004C803                   # mfc0        $a0, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27c098u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_perf);
label_27c09c:
    // 0x27c09c: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x27c09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_27c0a0:
    // 0x27c0a0: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x27c0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_27c0a4:
    // 0x27c0a4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x27c0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_27c0a8:
    // 0x27c0a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x27c0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_27c0ac:
    // 0x27c0ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27c0acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27c0b0:
    // 0x27c0b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27c0b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27c0b4:
    // 0x27c0b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27c0b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27c0b8:
    // 0x27c0b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27c0b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27c0bc:
    // 0x27c0bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27c0bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27c0c0:
    // 0x27c0c0: 0x3e00008  jr          $ra
label_27c0c4:
    if (ctx->pc == 0x27C0C4u) {
        ctx->pc = 0x27C0C4u;
            // 0x27c0c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x27C0C8u;
        goto label_27c0c8;
    }
    ctx->pc = 0x27C0C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C0C0u;
            // 0x27c0c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27C0C8u;
label_27c0c8:
    // 0x27c0c8: 0x0  nop
    ctx->pc = 0x27c0c8u;
    // NOP
label_27c0cc:
    // 0x27c0cc: 0x0  nop
    ctx->pc = 0x27c0ccu;
    // NOP
}
