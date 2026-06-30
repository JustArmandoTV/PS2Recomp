#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036B440
// Address: 0x36b440 - 0x36bba0
void sub_0036B440_0x36b440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B440_0x36b440");
#endif

    switch (ctx->pc) {
        case 0x36b440u: goto label_36b440;
        case 0x36b444u: goto label_36b444;
        case 0x36b448u: goto label_36b448;
        case 0x36b44cu: goto label_36b44c;
        case 0x36b450u: goto label_36b450;
        case 0x36b454u: goto label_36b454;
        case 0x36b458u: goto label_36b458;
        case 0x36b45cu: goto label_36b45c;
        case 0x36b460u: goto label_36b460;
        case 0x36b464u: goto label_36b464;
        case 0x36b468u: goto label_36b468;
        case 0x36b46cu: goto label_36b46c;
        case 0x36b470u: goto label_36b470;
        case 0x36b474u: goto label_36b474;
        case 0x36b478u: goto label_36b478;
        case 0x36b47cu: goto label_36b47c;
        case 0x36b480u: goto label_36b480;
        case 0x36b484u: goto label_36b484;
        case 0x36b488u: goto label_36b488;
        case 0x36b48cu: goto label_36b48c;
        case 0x36b490u: goto label_36b490;
        case 0x36b494u: goto label_36b494;
        case 0x36b498u: goto label_36b498;
        case 0x36b49cu: goto label_36b49c;
        case 0x36b4a0u: goto label_36b4a0;
        case 0x36b4a4u: goto label_36b4a4;
        case 0x36b4a8u: goto label_36b4a8;
        case 0x36b4acu: goto label_36b4ac;
        case 0x36b4b0u: goto label_36b4b0;
        case 0x36b4b4u: goto label_36b4b4;
        case 0x36b4b8u: goto label_36b4b8;
        case 0x36b4bcu: goto label_36b4bc;
        case 0x36b4c0u: goto label_36b4c0;
        case 0x36b4c4u: goto label_36b4c4;
        case 0x36b4c8u: goto label_36b4c8;
        case 0x36b4ccu: goto label_36b4cc;
        case 0x36b4d0u: goto label_36b4d0;
        case 0x36b4d4u: goto label_36b4d4;
        case 0x36b4d8u: goto label_36b4d8;
        case 0x36b4dcu: goto label_36b4dc;
        case 0x36b4e0u: goto label_36b4e0;
        case 0x36b4e4u: goto label_36b4e4;
        case 0x36b4e8u: goto label_36b4e8;
        case 0x36b4ecu: goto label_36b4ec;
        case 0x36b4f0u: goto label_36b4f0;
        case 0x36b4f4u: goto label_36b4f4;
        case 0x36b4f8u: goto label_36b4f8;
        case 0x36b4fcu: goto label_36b4fc;
        case 0x36b500u: goto label_36b500;
        case 0x36b504u: goto label_36b504;
        case 0x36b508u: goto label_36b508;
        case 0x36b50cu: goto label_36b50c;
        case 0x36b510u: goto label_36b510;
        case 0x36b514u: goto label_36b514;
        case 0x36b518u: goto label_36b518;
        case 0x36b51cu: goto label_36b51c;
        case 0x36b520u: goto label_36b520;
        case 0x36b524u: goto label_36b524;
        case 0x36b528u: goto label_36b528;
        case 0x36b52cu: goto label_36b52c;
        case 0x36b530u: goto label_36b530;
        case 0x36b534u: goto label_36b534;
        case 0x36b538u: goto label_36b538;
        case 0x36b53cu: goto label_36b53c;
        case 0x36b540u: goto label_36b540;
        case 0x36b544u: goto label_36b544;
        case 0x36b548u: goto label_36b548;
        case 0x36b54cu: goto label_36b54c;
        case 0x36b550u: goto label_36b550;
        case 0x36b554u: goto label_36b554;
        case 0x36b558u: goto label_36b558;
        case 0x36b55cu: goto label_36b55c;
        case 0x36b560u: goto label_36b560;
        case 0x36b564u: goto label_36b564;
        case 0x36b568u: goto label_36b568;
        case 0x36b56cu: goto label_36b56c;
        case 0x36b570u: goto label_36b570;
        case 0x36b574u: goto label_36b574;
        case 0x36b578u: goto label_36b578;
        case 0x36b57cu: goto label_36b57c;
        case 0x36b580u: goto label_36b580;
        case 0x36b584u: goto label_36b584;
        case 0x36b588u: goto label_36b588;
        case 0x36b58cu: goto label_36b58c;
        case 0x36b590u: goto label_36b590;
        case 0x36b594u: goto label_36b594;
        case 0x36b598u: goto label_36b598;
        case 0x36b59cu: goto label_36b59c;
        case 0x36b5a0u: goto label_36b5a0;
        case 0x36b5a4u: goto label_36b5a4;
        case 0x36b5a8u: goto label_36b5a8;
        case 0x36b5acu: goto label_36b5ac;
        case 0x36b5b0u: goto label_36b5b0;
        case 0x36b5b4u: goto label_36b5b4;
        case 0x36b5b8u: goto label_36b5b8;
        case 0x36b5bcu: goto label_36b5bc;
        case 0x36b5c0u: goto label_36b5c0;
        case 0x36b5c4u: goto label_36b5c4;
        case 0x36b5c8u: goto label_36b5c8;
        case 0x36b5ccu: goto label_36b5cc;
        case 0x36b5d0u: goto label_36b5d0;
        case 0x36b5d4u: goto label_36b5d4;
        case 0x36b5d8u: goto label_36b5d8;
        case 0x36b5dcu: goto label_36b5dc;
        case 0x36b5e0u: goto label_36b5e0;
        case 0x36b5e4u: goto label_36b5e4;
        case 0x36b5e8u: goto label_36b5e8;
        case 0x36b5ecu: goto label_36b5ec;
        case 0x36b5f0u: goto label_36b5f0;
        case 0x36b5f4u: goto label_36b5f4;
        case 0x36b5f8u: goto label_36b5f8;
        case 0x36b5fcu: goto label_36b5fc;
        case 0x36b600u: goto label_36b600;
        case 0x36b604u: goto label_36b604;
        case 0x36b608u: goto label_36b608;
        case 0x36b60cu: goto label_36b60c;
        case 0x36b610u: goto label_36b610;
        case 0x36b614u: goto label_36b614;
        case 0x36b618u: goto label_36b618;
        case 0x36b61cu: goto label_36b61c;
        case 0x36b620u: goto label_36b620;
        case 0x36b624u: goto label_36b624;
        case 0x36b628u: goto label_36b628;
        case 0x36b62cu: goto label_36b62c;
        case 0x36b630u: goto label_36b630;
        case 0x36b634u: goto label_36b634;
        case 0x36b638u: goto label_36b638;
        case 0x36b63cu: goto label_36b63c;
        case 0x36b640u: goto label_36b640;
        case 0x36b644u: goto label_36b644;
        case 0x36b648u: goto label_36b648;
        case 0x36b64cu: goto label_36b64c;
        case 0x36b650u: goto label_36b650;
        case 0x36b654u: goto label_36b654;
        case 0x36b658u: goto label_36b658;
        case 0x36b65cu: goto label_36b65c;
        case 0x36b660u: goto label_36b660;
        case 0x36b664u: goto label_36b664;
        case 0x36b668u: goto label_36b668;
        case 0x36b66cu: goto label_36b66c;
        case 0x36b670u: goto label_36b670;
        case 0x36b674u: goto label_36b674;
        case 0x36b678u: goto label_36b678;
        case 0x36b67cu: goto label_36b67c;
        case 0x36b680u: goto label_36b680;
        case 0x36b684u: goto label_36b684;
        case 0x36b688u: goto label_36b688;
        case 0x36b68cu: goto label_36b68c;
        case 0x36b690u: goto label_36b690;
        case 0x36b694u: goto label_36b694;
        case 0x36b698u: goto label_36b698;
        case 0x36b69cu: goto label_36b69c;
        case 0x36b6a0u: goto label_36b6a0;
        case 0x36b6a4u: goto label_36b6a4;
        case 0x36b6a8u: goto label_36b6a8;
        case 0x36b6acu: goto label_36b6ac;
        case 0x36b6b0u: goto label_36b6b0;
        case 0x36b6b4u: goto label_36b6b4;
        case 0x36b6b8u: goto label_36b6b8;
        case 0x36b6bcu: goto label_36b6bc;
        case 0x36b6c0u: goto label_36b6c0;
        case 0x36b6c4u: goto label_36b6c4;
        case 0x36b6c8u: goto label_36b6c8;
        case 0x36b6ccu: goto label_36b6cc;
        case 0x36b6d0u: goto label_36b6d0;
        case 0x36b6d4u: goto label_36b6d4;
        case 0x36b6d8u: goto label_36b6d8;
        case 0x36b6dcu: goto label_36b6dc;
        case 0x36b6e0u: goto label_36b6e0;
        case 0x36b6e4u: goto label_36b6e4;
        case 0x36b6e8u: goto label_36b6e8;
        case 0x36b6ecu: goto label_36b6ec;
        case 0x36b6f0u: goto label_36b6f0;
        case 0x36b6f4u: goto label_36b6f4;
        case 0x36b6f8u: goto label_36b6f8;
        case 0x36b6fcu: goto label_36b6fc;
        case 0x36b700u: goto label_36b700;
        case 0x36b704u: goto label_36b704;
        case 0x36b708u: goto label_36b708;
        case 0x36b70cu: goto label_36b70c;
        case 0x36b710u: goto label_36b710;
        case 0x36b714u: goto label_36b714;
        case 0x36b718u: goto label_36b718;
        case 0x36b71cu: goto label_36b71c;
        case 0x36b720u: goto label_36b720;
        case 0x36b724u: goto label_36b724;
        case 0x36b728u: goto label_36b728;
        case 0x36b72cu: goto label_36b72c;
        case 0x36b730u: goto label_36b730;
        case 0x36b734u: goto label_36b734;
        case 0x36b738u: goto label_36b738;
        case 0x36b73cu: goto label_36b73c;
        case 0x36b740u: goto label_36b740;
        case 0x36b744u: goto label_36b744;
        case 0x36b748u: goto label_36b748;
        case 0x36b74cu: goto label_36b74c;
        case 0x36b750u: goto label_36b750;
        case 0x36b754u: goto label_36b754;
        case 0x36b758u: goto label_36b758;
        case 0x36b75cu: goto label_36b75c;
        case 0x36b760u: goto label_36b760;
        case 0x36b764u: goto label_36b764;
        case 0x36b768u: goto label_36b768;
        case 0x36b76cu: goto label_36b76c;
        case 0x36b770u: goto label_36b770;
        case 0x36b774u: goto label_36b774;
        case 0x36b778u: goto label_36b778;
        case 0x36b77cu: goto label_36b77c;
        case 0x36b780u: goto label_36b780;
        case 0x36b784u: goto label_36b784;
        case 0x36b788u: goto label_36b788;
        case 0x36b78cu: goto label_36b78c;
        case 0x36b790u: goto label_36b790;
        case 0x36b794u: goto label_36b794;
        case 0x36b798u: goto label_36b798;
        case 0x36b79cu: goto label_36b79c;
        case 0x36b7a0u: goto label_36b7a0;
        case 0x36b7a4u: goto label_36b7a4;
        case 0x36b7a8u: goto label_36b7a8;
        case 0x36b7acu: goto label_36b7ac;
        case 0x36b7b0u: goto label_36b7b0;
        case 0x36b7b4u: goto label_36b7b4;
        case 0x36b7b8u: goto label_36b7b8;
        case 0x36b7bcu: goto label_36b7bc;
        case 0x36b7c0u: goto label_36b7c0;
        case 0x36b7c4u: goto label_36b7c4;
        case 0x36b7c8u: goto label_36b7c8;
        case 0x36b7ccu: goto label_36b7cc;
        case 0x36b7d0u: goto label_36b7d0;
        case 0x36b7d4u: goto label_36b7d4;
        case 0x36b7d8u: goto label_36b7d8;
        case 0x36b7dcu: goto label_36b7dc;
        case 0x36b7e0u: goto label_36b7e0;
        case 0x36b7e4u: goto label_36b7e4;
        case 0x36b7e8u: goto label_36b7e8;
        case 0x36b7ecu: goto label_36b7ec;
        case 0x36b7f0u: goto label_36b7f0;
        case 0x36b7f4u: goto label_36b7f4;
        case 0x36b7f8u: goto label_36b7f8;
        case 0x36b7fcu: goto label_36b7fc;
        case 0x36b800u: goto label_36b800;
        case 0x36b804u: goto label_36b804;
        case 0x36b808u: goto label_36b808;
        case 0x36b80cu: goto label_36b80c;
        case 0x36b810u: goto label_36b810;
        case 0x36b814u: goto label_36b814;
        case 0x36b818u: goto label_36b818;
        case 0x36b81cu: goto label_36b81c;
        case 0x36b820u: goto label_36b820;
        case 0x36b824u: goto label_36b824;
        case 0x36b828u: goto label_36b828;
        case 0x36b82cu: goto label_36b82c;
        case 0x36b830u: goto label_36b830;
        case 0x36b834u: goto label_36b834;
        case 0x36b838u: goto label_36b838;
        case 0x36b83cu: goto label_36b83c;
        case 0x36b840u: goto label_36b840;
        case 0x36b844u: goto label_36b844;
        case 0x36b848u: goto label_36b848;
        case 0x36b84cu: goto label_36b84c;
        case 0x36b850u: goto label_36b850;
        case 0x36b854u: goto label_36b854;
        case 0x36b858u: goto label_36b858;
        case 0x36b85cu: goto label_36b85c;
        case 0x36b860u: goto label_36b860;
        case 0x36b864u: goto label_36b864;
        case 0x36b868u: goto label_36b868;
        case 0x36b86cu: goto label_36b86c;
        case 0x36b870u: goto label_36b870;
        case 0x36b874u: goto label_36b874;
        case 0x36b878u: goto label_36b878;
        case 0x36b87cu: goto label_36b87c;
        case 0x36b880u: goto label_36b880;
        case 0x36b884u: goto label_36b884;
        case 0x36b888u: goto label_36b888;
        case 0x36b88cu: goto label_36b88c;
        case 0x36b890u: goto label_36b890;
        case 0x36b894u: goto label_36b894;
        case 0x36b898u: goto label_36b898;
        case 0x36b89cu: goto label_36b89c;
        case 0x36b8a0u: goto label_36b8a0;
        case 0x36b8a4u: goto label_36b8a4;
        case 0x36b8a8u: goto label_36b8a8;
        case 0x36b8acu: goto label_36b8ac;
        case 0x36b8b0u: goto label_36b8b0;
        case 0x36b8b4u: goto label_36b8b4;
        case 0x36b8b8u: goto label_36b8b8;
        case 0x36b8bcu: goto label_36b8bc;
        case 0x36b8c0u: goto label_36b8c0;
        case 0x36b8c4u: goto label_36b8c4;
        case 0x36b8c8u: goto label_36b8c8;
        case 0x36b8ccu: goto label_36b8cc;
        case 0x36b8d0u: goto label_36b8d0;
        case 0x36b8d4u: goto label_36b8d4;
        case 0x36b8d8u: goto label_36b8d8;
        case 0x36b8dcu: goto label_36b8dc;
        case 0x36b8e0u: goto label_36b8e0;
        case 0x36b8e4u: goto label_36b8e4;
        case 0x36b8e8u: goto label_36b8e8;
        case 0x36b8ecu: goto label_36b8ec;
        case 0x36b8f0u: goto label_36b8f0;
        case 0x36b8f4u: goto label_36b8f4;
        case 0x36b8f8u: goto label_36b8f8;
        case 0x36b8fcu: goto label_36b8fc;
        case 0x36b900u: goto label_36b900;
        case 0x36b904u: goto label_36b904;
        case 0x36b908u: goto label_36b908;
        case 0x36b90cu: goto label_36b90c;
        case 0x36b910u: goto label_36b910;
        case 0x36b914u: goto label_36b914;
        case 0x36b918u: goto label_36b918;
        case 0x36b91cu: goto label_36b91c;
        case 0x36b920u: goto label_36b920;
        case 0x36b924u: goto label_36b924;
        case 0x36b928u: goto label_36b928;
        case 0x36b92cu: goto label_36b92c;
        case 0x36b930u: goto label_36b930;
        case 0x36b934u: goto label_36b934;
        case 0x36b938u: goto label_36b938;
        case 0x36b93cu: goto label_36b93c;
        case 0x36b940u: goto label_36b940;
        case 0x36b944u: goto label_36b944;
        case 0x36b948u: goto label_36b948;
        case 0x36b94cu: goto label_36b94c;
        case 0x36b950u: goto label_36b950;
        case 0x36b954u: goto label_36b954;
        case 0x36b958u: goto label_36b958;
        case 0x36b95cu: goto label_36b95c;
        case 0x36b960u: goto label_36b960;
        case 0x36b964u: goto label_36b964;
        case 0x36b968u: goto label_36b968;
        case 0x36b96cu: goto label_36b96c;
        case 0x36b970u: goto label_36b970;
        case 0x36b974u: goto label_36b974;
        case 0x36b978u: goto label_36b978;
        case 0x36b97cu: goto label_36b97c;
        case 0x36b980u: goto label_36b980;
        case 0x36b984u: goto label_36b984;
        case 0x36b988u: goto label_36b988;
        case 0x36b98cu: goto label_36b98c;
        case 0x36b990u: goto label_36b990;
        case 0x36b994u: goto label_36b994;
        case 0x36b998u: goto label_36b998;
        case 0x36b99cu: goto label_36b99c;
        case 0x36b9a0u: goto label_36b9a0;
        case 0x36b9a4u: goto label_36b9a4;
        case 0x36b9a8u: goto label_36b9a8;
        case 0x36b9acu: goto label_36b9ac;
        case 0x36b9b0u: goto label_36b9b0;
        case 0x36b9b4u: goto label_36b9b4;
        case 0x36b9b8u: goto label_36b9b8;
        case 0x36b9bcu: goto label_36b9bc;
        case 0x36b9c0u: goto label_36b9c0;
        case 0x36b9c4u: goto label_36b9c4;
        case 0x36b9c8u: goto label_36b9c8;
        case 0x36b9ccu: goto label_36b9cc;
        case 0x36b9d0u: goto label_36b9d0;
        case 0x36b9d4u: goto label_36b9d4;
        case 0x36b9d8u: goto label_36b9d8;
        case 0x36b9dcu: goto label_36b9dc;
        case 0x36b9e0u: goto label_36b9e0;
        case 0x36b9e4u: goto label_36b9e4;
        case 0x36b9e8u: goto label_36b9e8;
        case 0x36b9ecu: goto label_36b9ec;
        case 0x36b9f0u: goto label_36b9f0;
        case 0x36b9f4u: goto label_36b9f4;
        case 0x36b9f8u: goto label_36b9f8;
        case 0x36b9fcu: goto label_36b9fc;
        case 0x36ba00u: goto label_36ba00;
        case 0x36ba04u: goto label_36ba04;
        case 0x36ba08u: goto label_36ba08;
        case 0x36ba0cu: goto label_36ba0c;
        case 0x36ba10u: goto label_36ba10;
        case 0x36ba14u: goto label_36ba14;
        case 0x36ba18u: goto label_36ba18;
        case 0x36ba1cu: goto label_36ba1c;
        case 0x36ba20u: goto label_36ba20;
        case 0x36ba24u: goto label_36ba24;
        case 0x36ba28u: goto label_36ba28;
        case 0x36ba2cu: goto label_36ba2c;
        case 0x36ba30u: goto label_36ba30;
        case 0x36ba34u: goto label_36ba34;
        case 0x36ba38u: goto label_36ba38;
        case 0x36ba3cu: goto label_36ba3c;
        case 0x36ba40u: goto label_36ba40;
        case 0x36ba44u: goto label_36ba44;
        case 0x36ba48u: goto label_36ba48;
        case 0x36ba4cu: goto label_36ba4c;
        case 0x36ba50u: goto label_36ba50;
        case 0x36ba54u: goto label_36ba54;
        case 0x36ba58u: goto label_36ba58;
        case 0x36ba5cu: goto label_36ba5c;
        case 0x36ba60u: goto label_36ba60;
        case 0x36ba64u: goto label_36ba64;
        case 0x36ba68u: goto label_36ba68;
        case 0x36ba6cu: goto label_36ba6c;
        case 0x36ba70u: goto label_36ba70;
        case 0x36ba74u: goto label_36ba74;
        case 0x36ba78u: goto label_36ba78;
        case 0x36ba7cu: goto label_36ba7c;
        case 0x36ba80u: goto label_36ba80;
        case 0x36ba84u: goto label_36ba84;
        case 0x36ba88u: goto label_36ba88;
        case 0x36ba8cu: goto label_36ba8c;
        case 0x36ba90u: goto label_36ba90;
        case 0x36ba94u: goto label_36ba94;
        case 0x36ba98u: goto label_36ba98;
        case 0x36ba9cu: goto label_36ba9c;
        case 0x36baa0u: goto label_36baa0;
        case 0x36baa4u: goto label_36baa4;
        case 0x36baa8u: goto label_36baa8;
        case 0x36baacu: goto label_36baac;
        case 0x36bab0u: goto label_36bab0;
        case 0x36bab4u: goto label_36bab4;
        case 0x36bab8u: goto label_36bab8;
        case 0x36babcu: goto label_36babc;
        case 0x36bac0u: goto label_36bac0;
        case 0x36bac4u: goto label_36bac4;
        case 0x36bac8u: goto label_36bac8;
        case 0x36baccu: goto label_36bacc;
        case 0x36bad0u: goto label_36bad0;
        case 0x36bad4u: goto label_36bad4;
        case 0x36bad8u: goto label_36bad8;
        case 0x36badcu: goto label_36badc;
        case 0x36bae0u: goto label_36bae0;
        case 0x36bae4u: goto label_36bae4;
        case 0x36bae8u: goto label_36bae8;
        case 0x36baecu: goto label_36baec;
        case 0x36baf0u: goto label_36baf0;
        case 0x36baf4u: goto label_36baf4;
        case 0x36baf8u: goto label_36baf8;
        case 0x36bafcu: goto label_36bafc;
        case 0x36bb00u: goto label_36bb00;
        case 0x36bb04u: goto label_36bb04;
        case 0x36bb08u: goto label_36bb08;
        case 0x36bb0cu: goto label_36bb0c;
        case 0x36bb10u: goto label_36bb10;
        case 0x36bb14u: goto label_36bb14;
        case 0x36bb18u: goto label_36bb18;
        case 0x36bb1cu: goto label_36bb1c;
        case 0x36bb20u: goto label_36bb20;
        case 0x36bb24u: goto label_36bb24;
        case 0x36bb28u: goto label_36bb28;
        case 0x36bb2cu: goto label_36bb2c;
        case 0x36bb30u: goto label_36bb30;
        case 0x36bb34u: goto label_36bb34;
        case 0x36bb38u: goto label_36bb38;
        case 0x36bb3cu: goto label_36bb3c;
        case 0x36bb40u: goto label_36bb40;
        case 0x36bb44u: goto label_36bb44;
        case 0x36bb48u: goto label_36bb48;
        case 0x36bb4cu: goto label_36bb4c;
        case 0x36bb50u: goto label_36bb50;
        case 0x36bb54u: goto label_36bb54;
        case 0x36bb58u: goto label_36bb58;
        case 0x36bb5cu: goto label_36bb5c;
        case 0x36bb60u: goto label_36bb60;
        case 0x36bb64u: goto label_36bb64;
        case 0x36bb68u: goto label_36bb68;
        case 0x36bb6cu: goto label_36bb6c;
        case 0x36bb70u: goto label_36bb70;
        case 0x36bb74u: goto label_36bb74;
        case 0x36bb78u: goto label_36bb78;
        case 0x36bb7cu: goto label_36bb7c;
        case 0x36bb80u: goto label_36bb80;
        case 0x36bb84u: goto label_36bb84;
        case 0x36bb88u: goto label_36bb88;
        case 0x36bb8cu: goto label_36bb8c;
        case 0x36bb90u: goto label_36bb90;
        case 0x36bb94u: goto label_36bb94;
        case 0x36bb98u: goto label_36bb98;
        case 0x36bb9cu: goto label_36bb9c;
        default: break;
    }

    ctx->pc = 0x36b440u;

label_36b440:
    // 0x36b440: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x36b440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
label_36b444:
    // 0x36b444: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x36b444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_36b448:
    // 0x36b448: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x36b448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_36b44c:
    // 0x36b44c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x36b44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_36b450:
    // 0x36b450: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x36b450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_36b454:
    // 0x36b454: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x36b454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_36b458:
    // 0x36b458: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x36b458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_36b45c:
    // 0x36b45c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x36b45cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36b460:
    // 0x36b460: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x36b460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_36b464:
    // 0x36b464: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x36b464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_36b468:
    // 0x36b468: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36b468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_36b46c:
    // 0x36b46c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x36b46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_36b470:
    // 0x36b470: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x36b470u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_36b474:
    // 0x36b474: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x36b474u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_36b478:
    // 0x36b478: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x36b478u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_36b47c:
    // 0x36b47c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x36b47cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_36b480:
    // 0x36b480: 0x8c970070  lw          $s7, 0x70($a0)
    ctx->pc = 0x36b480u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_36b484:
    // 0x36b484: 0x12e001b4  beqz        $s7, . + 4 + (0x1B4 << 2)
label_36b488:
    if (ctx->pc == 0x36B488u) {
        ctx->pc = 0x36B488u;
            // 0x36b488: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B48Cu;
        goto label_36b48c;
    }
    ctx->pc = 0x36B484u;
    {
        const bool branch_taken_0x36b484 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36B484u;
            // 0x36b488: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b484) {
            ctx->pc = 0x36BB58u;
            goto label_36bb58;
        }
    }
    ctx->pc = 0x36B48Cu;
label_36b48c:
    // 0x36b48c: 0x8eb3006c  lw          $s3, 0x6C($s5)
    ctx->pc = 0x36b48cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_36b490:
    // 0x36b490: 0xc049820  jal         func_126080
label_36b494:
    if (ctx->pc == 0x36B494u) {
        ctx->pc = 0x36B494u;
            // 0x36b494: 0x8ea40068  lw          $a0, 0x68($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
        ctx->pc = 0x36B498u;
        goto label_36b498;
    }
    ctx->pc = 0x36B490u;
    SET_GPR_U32(ctx, 31, 0x36B498u);
    ctx->pc = 0x36B494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B490u;
            // 0x36b494: 0x8ea40068  lw          $a0, 0x68($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126080u;
    if (runtime->hasFunction(0x126080u)) {
        auto targetFn = runtime->lookupFunction(0x126080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B498u; }
        if (ctx->pc != 0x36B498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126080_0x126080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B498u; }
        if (ctx->pc != 0x36B498u) { return; }
    }
    ctx->pc = 0x36B498u;
label_36b498:
    // 0x36b498: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x36b498u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36b49c:
    // 0x36b49c: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x36b49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_36b4a0:
    // 0x36b4a0: 0xc04f278  jal         func_13C9E0
label_36b4a4:
    if (ctx->pc == 0x36B4A4u) {
        ctx->pc = 0x36B4A4u;
            // 0x36b4a4: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x36B4A8u;
        goto label_36b4a8;
    }
    ctx->pc = 0x36B4A0u;
    SET_GPR_U32(ctx, 31, 0x36B4A8u);
    ctx->pc = 0x36B4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B4A0u;
            // 0x36b4a4: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B4A8u; }
        if (ctx->pc != 0x36B4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B4A8u; }
        if (ctx->pc != 0x36B4A8u) { return; }
    }
    ctx->pc = 0x36B4A8u;
label_36b4a8:
    // 0x36b4a8: 0x8ea30064  lw          $v1, 0x64($s5)
    ctx->pc = 0x36b4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
label_36b4ac:
    // 0x36b4ac: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x36b4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_36b4b0:
    // 0x36b4b0: 0x8ea20068  lw          $v0, 0x68($s5)
    ctx->pc = 0x36b4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
label_36b4b4:
    // 0x36b4b4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x36b4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36b4b8:
    // 0x36b4b8: 0xc04cdd0  jal         func_133740
label_36b4bc:
    if (ctx->pc == 0x36B4BCu) {
        ctx->pc = 0x36B4BCu;
            // 0x36b4bc: 0x623023  subu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x36B4C0u;
        goto label_36b4c0;
    }
    ctx->pc = 0x36B4B8u;
    SET_GPR_U32(ctx, 31, 0x36B4C0u);
    ctx->pc = 0x36B4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B4B8u;
            // 0x36b4bc: 0x623023  subu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B4C0u; }
        if (ctx->pc != 0x36B4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B4C0u; }
        if (ctx->pc != 0x36B4C0u) { return; }
    }
    ctx->pc = 0x36B4C0u;
label_36b4c0:
    // 0x36b4c0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x36b4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_36b4c4:
    // 0x36b4c4: 0xc04cce8  jal         func_1333A0
label_36b4c8:
    if (ctx->pc == 0x36B4C8u) {
        ctx->pc = 0x36B4C8u;
            // 0x36b4c8: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x36B4CCu;
        goto label_36b4cc;
    }
    ctx->pc = 0x36B4C4u;
    SET_GPR_U32(ctx, 31, 0x36B4CCu);
    ctx->pc = 0x36B4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B4C4u;
            // 0x36b4c8: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B4CCu; }
        if (ctx->pc != 0x36B4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B4CCu; }
        if (ctx->pc != 0x36B4CCu) { return; }
    }
    ctx->pc = 0x36B4CCu;
label_36b4cc:
    // 0x36b4cc: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x36b4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_36b4d0:
    // 0x36b4d0: 0xc04ce80  jal         func_133A00
label_36b4d4:
    if (ctx->pc == 0x36B4D4u) {
        ctx->pc = 0x36B4D4u;
            // 0x36b4d4: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x36B4D8u;
        goto label_36b4d8;
    }
    ctx->pc = 0x36B4D0u;
    SET_GPR_U32(ctx, 31, 0x36B4D8u);
    ctx->pc = 0x36B4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B4D0u;
            // 0x36b4d4: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B4D8u; }
        if (ctx->pc != 0x36B4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B4D8u; }
        if (ctx->pc != 0x36B4D8u) { return; }
    }
    ctx->pc = 0x36B4D8u;
label_36b4d8:
    // 0x36b4d8: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x36b4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_36b4dc:
    // 0x36b4dc: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x36b4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_36b4e0:
    // 0x36b4e0: 0xc4764d10  lwc1        $f22, 0x4D10($v1)
    ctx->pc = 0x36b4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 19728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_36b4e4:
    // 0x36b4e4: 0xc4954d18  lwc1        $f21, 0x4D18($a0)
    ctx->pc = 0x36b4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 19736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_36b4e8:
    // 0x36b4e8: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x36b4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_36b4ec:
    // 0x36b4ec: 0xc4744d14  lwc1        $f20, 0x4D14($v1)
    ctx->pc = 0x36b4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 19732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_36b4f0:
    // 0x36b4f0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x36b4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_36b4f4:
    // 0x36b4f4: 0x8e720008  lw          $s2, 0x8($s3)
    ctx->pc = 0x36b4f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_36b4f8:
    // 0x36b4f8: 0x7e1823  subu        $v1, $v1, $fp
    ctx->pc = 0x36b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_36b4fc:
    // 0x36b4fc: 0x1c6000b4  bgtz        $v1, . + 4 + (0xB4 << 2)
label_36b500:
    if (ctx->pc == 0x36B500u) {
        ctx->pc = 0x36B500u;
            // 0x36b500: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x36B504u;
        goto label_36b504;
    }
    ctx->pc = 0x36B4FCu;
    {
        const bool branch_taken_0x36b4fc = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x36B500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36B4FCu;
            // 0x36b500: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b4fc) {
            ctx->pc = 0x36B7D0u;
            goto label_36b7d0;
        }
    }
    ctx->pc = 0x36B504u;
label_36b504:
    // 0x36b504: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x36b504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_36b508:
    // 0x36b508: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_36b50c:
    if (ctx->pc == 0x36B50Cu) {
        ctx->pc = 0x36B50Cu;
            // 0x36b50c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B510u;
        goto label_36b510;
    }
    ctx->pc = 0x36B508u;
    {
        const bool branch_taken_0x36b508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36B508u;
            // 0x36b50c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b508) {
            ctx->pc = 0x36B590u;
            goto label_36b590;
        }
    }
    ctx->pc = 0x36B510u;
label_36b510:
    // 0x36b510: 0x8ea6006c  lw          $a2, 0x6C($s5)
    ctx->pc = 0x36b510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_36b514:
    // 0x36b514: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x36b514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_36b518:
    // 0x36b518: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x36b518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_36b51c:
    // 0x36b51c: 0x14520018  bne         $v0, $s2, . + 4 + (0x18 << 2)
label_36b520:
    if (ctx->pc == 0x36B520u) {
        ctx->pc = 0x36B524u;
        goto label_36b524;
    }
    ctx->pc = 0x36B51Cu;
    {
        const bool branch_taken_0x36b51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x36b51c) {
            ctx->pc = 0x36B580u;
            goto label_36b580;
        }
    }
    ctx->pc = 0x36B524u;
label_36b524:
    // 0x36b524: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x36b524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_36b528:
    // 0x36b528: 0xa2082b  sltu        $at, $a1, $v0
    ctx->pc = 0x36b528u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_36b52c:
    // 0x36b52c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_36b530:
    if (ctx->pc == 0x36B530u) {
        ctx->pc = 0x36B534u;
        goto label_36b534;
    }
    ctx->pc = 0x36B52Cu;
    {
        const bool branch_taken_0x36b52c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b52c) {
            ctx->pc = 0x36B570u;
            goto label_36b570;
        }
    }
    ctx->pc = 0x36B534u;
label_36b534:
    // 0x36b534: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x36b534u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_36b538:
    // 0x36b538: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x36b538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_36b53c:
    // 0x36b53c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x36b53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_36b540:
    // 0x36b540: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x36b540u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_36b544:
    // 0x36b544: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x36b544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_36b548:
    // 0x36b548: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x36b548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_36b54c:
    // 0x36b54c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x36b54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_36b550:
    // 0x36b550: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x36b550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_36b554:
    // 0x36b554: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x36b554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_36b558:
    // 0x36b558: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x36b558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_36b55c:
    // 0x36b55c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36b560:
    // 0x36b560: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x36b560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_36b564:
    // 0x36b564: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x36b564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_36b568:
    // 0x36b568: 0xc04a508  jal         func_129420
label_36b56c:
    if (ctx->pc == 0x36B56Cu) {
        ctx->pc = 0x36B56Cu;
            // 0x36b56c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x36B570u;
        goto label_36b570;
    }
    ctx->pc = 0x36B568u;
    SET_GPR_U32(ctx, 31, 0x36B570u);
    ctx->pc = 0x36B56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B568u;
            // 0x36b56c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B570u; }
        if (ctx->pc != 0x36B570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B570u; }
        if (ctx->pc != 0x36B570u) { return; }
    }
    ctx->pc = 0x36B570u;
label_36b570:
    // 0x36b570: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x36b570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_36b574:
    // 0x36b574: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x36b574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_36b578:
    // 0x36b578: 0x10000005  b           . + 4 + (0x5 << 2)
label_36b57c:
    if (ctx->pc == 0x36B57Cu) {
        ctx->pc = 0x36B57Cu;
            // 0x36b57c: 0xaea20070  sw          $v0, 0x70($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x36B580u;
        goto label_36b580;
    }
    ctx->pc = 0x36B578u;
    {
        const bool branch_taken_0x36b578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36B578u;
            // 0x36b57c: 0xaea20070  sw          $v0, 0x70($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b578) {
            ctx->pc = 0x36B590u;
            goto label_36b590;
        }
    }
    ctx->pc = 0x36B580u;
label_36b580:
    // 0x36b580: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x36b580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_36b584:
    // 0x36b584: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x36b584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_36b588:
    // 0x36b588: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_36b58c:
    if (ctx->pc == 0x36B58Cu) {
        ctx->pc = 0x36B58Cu;
            // 0x36b58c: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->pc = 0x36B590u;
        goto label_36b590;
    }
    ctx->pc = 0x36B588u;
    {
        const bool branch_taken_0x36b588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36B588u;
            // 0x36b58c: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b588) {
            ctx->pc = 0x36B518u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36b518;
        }
    }
    ctx->pc = 0x36B590u;
label_36b590:
    // 0x36b590: 0x8e440d60  lw          $a0, 0xD60($s2)
    ctx->pc = 0x36b590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_36b594:
    // 0x36b594: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36b594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36b598:
    // 0x36b598: 0x2402eaab  addiu       $v0, $zero, -0x1555
    ctx->pc = 0x36b598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294961835));
label_36b59c:
    // 0x36b59c: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x36b59cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
label_36b5a0:
    // 0x36b5a0: 0xa085001c  sb          $a1, 0x1C($a0)
    ctx->pc = 0x36b5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 5));
label_36b5a4:
    // 0x36b5a4: 0xae4009ec  sw          $zero, 0x9EC($s2)
    ctx->pc = 0x36b5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2540), GPR_U32(ctx, 0));
label_36b5a8:
    // 0x36b5a8: 0xae420b04  sw          $v0, 0xB04($s2)
    ctx->pc = 0x36b5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2820), GPR_U32(ctx, 2));
label_36b5ac:
    // 0x36b5ac: 0x8e510d74  lw          $s1, 0xD74($s2)
    ctx->pc = 0x36b5acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
label_36b5b0:
    // 0x36b5b0: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x36b5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_36b5b4:
    // 0x36b5b4: 0x8e2202c8  lw          $v0, 0x2C8($s1)
    ctx->pc = 0x36b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
label_36b5b8:
    // 0x36b5b8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x36b5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_36b5bc:
    // 0x36b5bc: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x36b5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_36b5c0:
    // 0x36b5c0: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x36b5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_36b5c4:
    // 0x36b5c4: 0xc0a545c  jal         func_295170
label_36b5c8:
    if (ctx->pc == 0x36B5C8u) {
        ctx->pc = 0x36B5C8u;
            // 0x36b5c8: 0x628024  and         $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x36B5CCu;
        goto label_36b5cc;
    }
    ctx->pc = 0x36B5C4u;
    SET_GPR_U32(ctx, 31, 0x36B5CCu);
    ctx->pc = 0x36B5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B5C4u;
            // 0x36b5c8: 0x628024  and         $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B5CCu; }
        if (ctx->pc != 0x36B5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B5CCu; }
        if (ctx->pc != 0x36B5CCu) { return; }
    }
    ctx->pc = 0x36B5CCu;
label_36b5cc:
    // 0x36b5cc: 0xac50002c  sw          $s0, 0x2C($v0)
    ctx->pc = 0x36b5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 16));
label_36b5d0:
    // 0x36b5d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36b5d4:
    // 0x36b5d4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x36b5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_36b5d8:
    // 0x36b5d8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x36b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_36b5dc:
    // 0x36b5dc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x36b5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_36b5e0:
    // 0x36b5e0: 0xc08bf20  jal         func_22FC80
label_36b5e4:
    if (ctx->pc == 0x36B5E4u) {
        ctx->pc = 0x36B5E4u;
            // 0x36b5e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B5E8u;
        goto label_36b5e8;
    }
    ctx->pc = 0x36B5E0u;
    SET_GPR_U32(ctx, 31, 0x36B5E8u);
    ctx->pc = 0x36B5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B5E0u;
            // 0x36b5e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B5E8u; }
        if (ctx->pc != 0x36B5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B5E8u; }
        if (ctx->pc != 0x36B5E8u) { return; }
    }
    ctx->pc = 0x36B5E8u;
label_36b5e8:
    // 0x36b5e8: 0x8e430db8  lw          $v1, 0xDB8($s2)
    ctx->pc = 0x36b5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3512)));
label_36b5ec:
    // 0x36b5ec: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x36b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_36b5f0:
    // 0x36b5f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36b5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36b5f4:
    // 0x36b5f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36b5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_36b5f8:
    // 0x36b5f8: 0xae420db8  sw          $v0, 0xDB8($s2)
    ctx->pc = 0x36b5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3512), GPR_U32(ctx, 2));
label_36b5fc:
    // 0x36b5fc: 0x3442000f  ori         $v0, $v0, 0xF
    ctx->pc = 0x36b5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15);
label_36b600:
    // 0x36b600: 0xae420db8  sw          $v0, 0xDB8($s2)
    ctx->pc = 0x36b600u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3512), GPR_U32(ctx, 2));
label_36b604:
    // 0x36b604: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x36b604u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_36b608:
    // 0x36b608: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x36b608u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_36b60c:
    // 0x36b60c: 0x320f809  jalr        $t9
label_36b610:
    if (ctx->pc == 0x36B610u) {
        ctx->pc = 0x36B610u;
            // 0x36b610: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x36B614u;
        goto label_36b614;
    }
    ctx->pc = 0x36B60Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36B614u);
        ctx->pc = 0x36B610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36B60Cu;
            // 0x36b610: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36B614u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36B614u; }
            if (ctx->pc != 0x36B614u) { return; }
        }
        }
    }
    ctx->pc = 0x36B614u;
label_36b614:
    // 0x36b614: 0x8e440d60  lw          $a0, 0xD60($s2)
    ctx->pc = 0x36b614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_36b618:
    // 0x36b618: 0x3c020012  lui         $v0, 0x12
    ctx->pc = 0x36b618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
label_36b61c:
    // 0x36b61c: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x36b61cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_36b620:
    // 0x36b620: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x36b620u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_36b624:
    // 0x36b624: 0x320f809  jalr        $t9
label_36b628:
    if (ctx->pc == 0x36B628u) {
        ctx->pc = 0x36B628u;
            // 0x36b628: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x36B62Cu;
        goto label_36b62c;
    }
    ctx->pc = 0x36B624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36B62Cu);
        ctx->pc = 0x36B628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36B624u;
            // 0x36b628: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36B62Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36B62Cu; }
            if (ctx->pc != 0x36B62Cu) { return; }
        }
        }
    }
    ctx->pc = 0x36B62Cu;
label_36b62c:
    // 0x36b62c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36b62cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_36b630:
    // 0x36b630: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x36b630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_36b634:
    // 0x36b634: 0xe6560de0  swc1        $f22, 0xDE0($s2)
    ctx->pc = 0x36b634u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3552), bits); }
label_36b638:
    // 0x36b638: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x36b638u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_36b63c:
    // 0x36b63c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x36b63cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_36b640:
    // 0x36b640: 0xc04cbd8  jal         func_132F60
label_36b644:
    if (ctx->pc == 0x36B644u) {
        ctx->pc = 0x36B644u;
            // 0x36b644: 0xe6560de4  swc1        $f22, 0xDE4($s2) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
        ctx->pc = 0x36B648u;
        goto label_36b648;
    }
    ctx->pc = 0x36B640u;
    SET_GPR_U32(ctx, 31, 0x36B648u);
    ctx->pc = 0x36B644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B640u;
            // 0x36b644: 0xe6560de4  swc1        $f22, 0xDE4($s2) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B648u; }
        if (ctx->pc != 0x36B648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B648u; }
        if (ctx->pc != 0x36B648u) { return; }
    }
    ctx->pc = 0x36B648u;
label_36b648:
    // 0x36b648: 0x26440320  addiu       $a0, $s2, 0x320
    ctx->pc = 0x36b648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
label_36b64c:
    // 0x36b64c: 0x26450580  addiu       $a1, $s2, 0x580
    ctx->pc = 0x36b64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
label_36b650:
    // 0x36b650: 0xc04cca0  jal         func_133280
label_36b654:
    if (ctx->pc == 0x36B654u) {
        ctx->pc = 0x36B654u;
            // 0x36b654: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x36B658u;
        goto label_36b658;
    }
    ctx->pc = 0x36B650u;
    SET_GPR_U32(ctx, 31, 0x36B658u);
    ctx->pc = 0x36B654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B650u;
            // 0x36b654: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B658u; }
        if (ctx->pc != 0x36B658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B658u; }
        if (ctx->pc != 0x36B658u) { return; }
    }
    ctx->pc = 0x36B658u;
label_36b658:
    // 0x36b658: 0xe6540690  swc1        $f20, 0x690($s2)
    ctx->pc = 0x36b658u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1680), bits); }
label_36b65c:
    // 0x36b65c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x36b65cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36b660:
    // 0x36b660: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x36b660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_36b664:
    // 0x36b664: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36b664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36b668:
    // 0x36b668: 0x8ea20078  lw          $v0, 0x78($s5)
    ctx->pc = 0x36b668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
label_36b66c:
    // 0x36b66c: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x36b66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_36b670:
    // 0x36b670: 0x661804  sllv        $v1, $a2, $v1
    ctx->pc = 0x36b670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
label_36b674:
    // 0x36b674: 0x601827  not         $v1, $v1
    ctx->pc = 0x36b674u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_36b678:
    // 0x36b678: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x36b678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_36b67c:
    // 0x36b67c: 0xaea20078  sw          $v0, 0x78($s5)
    ctx->pc = 0x36b67cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 120), GPR_U32(ctx, 2));
label_36b680:
    // 0x36b680: 0x8e430d98  lw          $v1, 0xD98($s2)
    ctx->pc = 0x36b680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_36b684:
    // 0x36b684: 0x8ea2007c  lw          $v0, 0x7C($s5)
    ctx->pc = 0x36b684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
label_36b688:
    // 0x36b688: 0x661804  sllv        $v1, $a2, $v1
    ctx->pc = 0x36b688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
label_36b68c:
    // 0x36b68c: 0x601827  not         $v1, $v1
    ctx->pc = 0x36b68cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_36b690:
    // 0x36b690: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x36b690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_36b694:
    // 0x36b694: 0xc07649c  jal         func_1D9270
label_36b698:
    if (ctx->pc == 0x36B698u) {
        ctx->pc = 0x36B698u;
            // 0x36b698: 0xaea2007c  sw          $v0, 0x7C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 124), GPR_U32(ctx, 2));
        ctx->pc = 0x36B69Cu;
        goto label_36b69c;
    }
    ctx->pc = 0x36B694u;
    SET_GPR_U32(ctx, 31, 0x36B69Cu);
    ctx->pc = 0x36B698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B694u;
            // 0x36b698: 0xaea2007c  sw          $v0, 0x7C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B69Cu; }
        if (ctx->pc != 0x36B69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B69Cu; }
        if (ctx->pc != 0x36B69Cu) { return; }
    }
    ctx->pc = 0x36B69Cu;
label_36b69c:
    // 0x36b69c: 0x8e430e34  lw          $v1, 0xE34($s2)
    ctx->pc = 0x36b69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_36b6a0:
    // 0x36b6a0: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x36b6a0u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_36b6a4:
    // 0x36b6a4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_36b6a8:
    if (ctx->pc == 0x36B6A8u) {
        ctx->pc = 0x36B6A8u;
            // 0x36b6a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B6ACu;
        goto label_36b6ac;
    }
    ctx->pc = 0x36B6A4u;
    {
        const bool branch_taken_0x36b6a4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x36B6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36B6A4u;
            // 0x36b6a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b6a4) {
            ctx->pc = 0x36B6C0u;
            goto label_36b6c0;
        }
    }
    ctx->pc = 0x36B6ACu;
label_36b6ac:
    // 0x36b6ac: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x36b6acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_36b6b0:
    // 0x36b6b0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_36b6b4:
    if (ctx->pc == 0x36B6B4u) {
        ctx->pc = 0x36B6B8u;
        goto label_36b6b8;
    }
    ctx->pc = 0x36B6B0u;
    {
        const bool branch_taken_0x36b6b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b6b0) {
            ctx->pc = 0x36B6C0u;
            goto label_36b6c0;
        }
    }
    ctx->pc = 0x36B6B8u;
label_36b6b8:
    // 0x36b6b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36b6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36b6bc:
    // 0x36b6bc: 0x0  nop
    ctx->pc = 0x36b6bcu;
    // NOP
label_36b6c0:
    // 0x36b6c0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_36b6c4:
    if (ctx->pc == 0x36B6C4u) {
        ctx->pc = 0x36B6C8u;
        goto label_36b6c8;
    }
    ctx->pc = 0x36B6C0u;
    {
        const bool branch_taken_0x36b6c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x36b6c0) {
            ctx->pc = 0x36B6E0u;
            goto label_36b6e0;
        }
    }
    ctx->pc = 0x36B6C8u;
label_36b6c8:
    // 0x36b6c8: 0xc075eb4  jal         func_1D7AD0
label_36b6cc:
    if (ctx->pc == 0x36B6CCu) {
        ctx->pc = 0x36B6CCu;
            // 0x36b6cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B6D0u;
        goto label_36b6d0;
    }
    ctx->pc = 0x36B6C8u;
    SET_GPR_U32(ctx, 31, 0x36B6D0u);
    ctx->pc = 0x36B6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B6C8u;
            // 0x36b6cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B6D0u; }
        if (ctx->pc != 0x36B6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B6D0u; }
        if (ctx->pc != 0x36B6D0u) { return; }
    }
    ctx->pc = 0x36B6D0u;
label_36b6d0:
    // 0x36b6d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_36b6d4:
    if (ctx->pc == 0x36B6D4u) {
        ctx->pc = 0x36B6D8u;
        goto label_36b6d8;
    }
    ctx->pc = 0x36B6D0u;
    {
        const bool branch_taken_0x36b6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36b6d0) {
            ctx->pc = 0x36B6E0u;
            goto label_36b6e0;
        }
    }
    ctx->pc = 0x36B6D8u;
label_36b6d8:
    // 0x36b6d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36b6d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36b6dc:
    // 0x36b6dc: 0x0  nop
    ctx->pc = 0x36b6dcu;
    // NOP
label_36b6e0:
    // 0x36b6e0: 0x12000119  beqz        $s0, . + 4 + (0x119 << 2)
label_36b6e4:
    if (ctx->pc == 0x36B6E4u) {
        ctx->pc = 0x36B6E8u;
        goto label_36b6e8;
    }
    ctx->pc = 0x36B6E0u;
    {
        const bool branch_taken_0x36b6e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b6e0) {
            ctx->pc = 0x36BB48u;
            goto label_36bb48;
        }
    }
    ctx->pc = 0x36B6E8u;
label_36b6e8:
    // 0x36b6e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_36b6ec:
    // 0x36b6ec: 0x8e440d98  lw          $a0, 0xD98($s2)
    ctx->pc = 0x36b6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_36b6f0:
    // 0x36b6f0: 0x8c500e80  lw          $s0, 0xE80($v0)
    ctx->pc = 0x36b6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_36b6f4:
    // 0x36b6f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_36b6f8:
    // 0x36b6f8: 0x90433db0  lbu         $v1, 0x3DB0($v0)
    ctx->pc = 0x36b6f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 15792)));
label_36b6fc:
    // 0x36b6fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36b700:
    // 0x36b700: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x36b700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_36b704:
    // 0x36b704: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36b704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_36b708:
    // 0x36b708: 0x1c40001f  bgtz        $v0, . + 4 + (0x1F << 2)
label_36b70c:
    if (ctx->pc == 0x36B70Cu) {
        ctx->pc = 0x36B710u;
        goto label_36b710;
    }
    ctx->pc = 0x36B708u;
    {
        const bool branch_taken_0x36b708 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x36b708) {
            ctx->pc = 0x36B788u;
            goto label_36b788;
        }
    }
    ctx->pc = 0x36B710u;
label_36b710:
    // 0x36b710: 0x8e0202c0  lw          $v0, 0x2C0($s0)
    ctx->pc = 0x36b710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
label_36b714:
    // 0x36b714: 0x240400d0  addiu       $a0, $zero, 0xD0
    ctx->pc = 0x36b714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_36b718:
    // 0x36b718: 0x261602b8  addiu       $s6, $s0, 0x2B8
    ctx->pc = 0x36b718u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 696));
label_36b71c:
    // 0x36b71c: 0xc040180  jal         func_100600
label_36b720:
    if (ctx->pc == 0x36B720u) {
        ctx->pc = 0x36B720u;
            // 0x36b720: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x36B724u;
        goto label_36b724;
    }
    ctx->pc = 0x36B71Cu;
    SET_GPR_U32(ctx, 31, 0x36B724u);
    ctx->pc = 0x36B720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B71Cu;
            // 0x36b720: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B724u; }
        if (ctx->pc != 0x36B724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B724u; }
        if (ctx->pc != 0x36B724u) { return; }
    }
    ctx->pc = 0x36B724u;
label_36b724:
    // 0x36b724: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_36b728:
    if (ctx->pc == 0x36B728u) {
        ctx->pc = 0x36B728u;
            // 0x36b728: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B72Cu;
        goto label_36b72c;
    }
    ctx->pc = 0x36B724u;
    {
        const bool branch_taken_0x36b724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36B724u;
            // 0x36b728: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b724) {
            ctx->pc = 0x36B788u;
            goto label_36b788;
        }
    }
    ctx->pc = 0x36B72Cu;
label_36b72c:
    // 0x36b72c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x36b72cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_36b730:
    // 0x36b730: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x36b730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_36b734:
    // 0x36b734: 0x8e560d98  lw          $s6, 0xD98($s2)
    ctx->pc = 0x36b734u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_36b738:
    // 0x36b738: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36b738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_36b73c:
    // 0x36b73c: 0x824911aa  lb          $t1, 0x11AA($s2)
    ctx->pc = 0x36b73cu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4522)));
label_36b740:
    // 0x36b740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36b740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36b744:
    // 0x36b744: 0x344594a8  ori         $a1, $v0, 0x94A8
    ctx->pc = 0x36b744u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38056);
label_36b748:
    // 0x36b748: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x36b748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_36b74c:
    // 0x36b74c: 0x24080821  addiu       $t0, $zero, 0x821
    ctx->pc = 0x36b74cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2081));
label_36b750:
    // 0x36b750: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x36b750u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_36b754:
    // 0x36b754: 0xc0b9404  jal         func_2E5010
label_36b758:
    if (ctx->pc == 0x36B758u) {
        ctx->pc = 0x36B758u;
            // 0x36b758: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B75Cu;
        goto label_36b75c;
    }
    ctx->pc = 0x36B754u;
    SET_GPR_U32(ctx, 31, 0x36B75Cu);
    ctx->pc = 0x36B758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B754u;
            // 0x36b758: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B75Cu; }
        if (ctx->pc != 0x36B75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B75Cu; }
        if (ctx->pc != 0x36B75Cu) { return; }
    }
    ctx->pc = 0x36B75Cu;
label_36b75c:
    // 0x36b75c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36b760:
    // 0x36b760: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36b760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_36b764:
    // 0x36b764: 0x2c21004  sllv        $v0, $v0, $s6
    ctx->pc = 0x36b764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 22) & 0x1F));
label_36b768:
    // 0x36b768: 0x24634160  addiu       $v1, $v1, 0x4160
    ctx->pc = 0x36b768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16736));
label_36b76c:
    // 0x36b76c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x36b76cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36b770:
    // 0x36b770: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x36b770u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_36b774:
    // 0x36b774: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36b774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_36b778:
    // 0x36b778: 0x90433db0  lbu         $v1, 0x3DB0($v0)
    ctx->pc = 0x36b778u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 15792)));
label_36b77c:
    // 0x36b77c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_36b780:
    // 0x36b780: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x36b780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_36b784:
    // 0x36b784: 0xa0433db0  sb          $v1, 0x3DB0($v0)
    ctx->pc = 0x36b784u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 15792), (uint8_t)GPR_U32(ctx, 3));
label_36b788:
    // 0x36b788: 0xc040180  jal         func_100600
label_36b78c:
    if (ctx->pc == 0x36B78Cu) {
        ctx->pc = 0x36B78Cu;
            // 0x36b78c: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x36B790u;
        goto label_36b790;
    }
    ctx->pc = 0x36B788u;
    SET_GPR_U32(ctx, 31, 0x36B790u);
    ctx->pc = 0x36B78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B788u;
            // 0x36b78c: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B790u; }
        if (ctx->pc != 0x36B790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B790u; }
        if (ctx->pc != 0x36B790u) { return; }
    }
    ctx->pc = 0x36B790u;
label_36b790:
    // 0x36b790: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x36b790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36b794:
    // 0x36b794: 0x108000ec  beqz        $a0, . + 4 + (0xEC << 2)
label_36b798:
    if (ctx->pc == 0x36B798u) {
        ctx->pc = 0x36B79Cu;
        goto label_36b79c;
    }
    ctx->pc = 0x36B794u;
    {
        const bool branch_taken_0x36b794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b794) {
            ctx->pc = 0x36BB48u;
            goto label_36bb48;
        }
    }
    ctx->pc = 0x36B79Cu;
label_36b79c:
    // 0x36b79c: 0x824911aa  lb          $t1, 0x11AA($s2)
    ctx->pc = 0x36b79cu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4522)));
label_36b7a0:
    // 0x36b7a0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x36b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_36b7a4:
    // 0x36b7a4: 0x8e4a0d98  lw          $t2, 0xD98($s2)
    ctx->pc = 0x36b7a4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_36b7a8:
    // 0x36b7a8: 0x260704f8  addiu       $a3, $s0, 0x4F8
    ctx->pc = 0x36b7a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1272));
label_36b7ac:
    // 0x36b7ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36b7acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_36b7b0:
    // 0x36b7b0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x36b7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_36b7b4:
    // 0x36b7b4: 0x344594a8  ori         $a1, $v0, 0x94A8
    ctx->pc = 0x36b7b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38056);
label_36b7b8:
    // 0x36b7b8: 0x24084140  addiu       $t0, $zero, 0x4140
    ctx->pc = 0x36b7b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16704));
label_36b7bc:
    // 0x36b7bc: 0xc0b9404  jal         func_2E5010
label_36b7c0:
    if (ctx->pc == 0x36B7C0u) {
        ctx->pc = 0x36B7C0u;
            // 0x36b7c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B7C4u;
        goto label_36b7c4;
    }
    ctx->pc = 0x36B7BCu;
    SET_GPR_U32(ctx, 31, 0x36B7C4u);
    ctx->pc = 0x36B7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B7BCu;
            // 0x36b7c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B7C4u; }
        if (ctx->pc != 0x36B7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B7C4u; }
        if (ctx->pc != 0x36B7C4u) { return; }
    }
    ctx->pc = 0x36B7C4u;
label_36b7c4:
    // 0x36b7c4: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_36b7c8:
    if (ctx->pc == 0x36B7C8u) {
        ctx->pc = 0x36B7CCu;
        goto label_36b7cc;
    }
    ctx->pc = 0x36B7C4u;
    {
        const bool branch_taken_0x36b7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b7c4) {
            ctx->pc = 0x36BB48u;
            goto label_36bb48;
        }
    }
    ctx->pc = 0x36B7CCu;
label_36b7cc:
    // 0x36b7cc: 0x0  nop
    ctx->pc = 0x36b7ccu;
    // NOP
label_36b7d0:
    // 0x36b7d0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x36b7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_36b7d4:
    // 0x36b7d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36b7d8:
    // 0x36b7d8: 0x10830085  beq         $a0, $v1, . + 4 + (0x85 << 2)
label_36b7dc:
    if (ctx->pc == 0x36B7DCu) {
        ctx->pc = 0x36B7E0u;
        goto label_36b7e0;
    }
    ctx->pc = 0x36B7D8u;
    {
        const bool branch_taken_0x36b7d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36b7d8) {
            ctx->pc = 0x36B9F0u;
            goto label_36b9f0;
        }
    }
    ctx->pc = 0x36B7E0u;
label_36b7e0:
    // 0x36b7e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_36b7e4:
    if (ctx->pc == 0x36B7E4u) {
        ctx->pc = 0x36B7E8u;
        goto label_36b7e8;
    }
    ctx->pc = 0x36B7E0u;
    {
        const bool branch_taken_0x36b7e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b7e0) {
            ctx->pc = 0x36B7F0u;
            goto label_36b7f0;
        }
    }
    ctx->pc = 0x36B7E8u;
label_36b7e8:
    // 0x36b7e8: 0x100000d7  b           . + 4 + (0xD7 << 2)
label_36b7ec:
    if (ctx->pc == 0x36B7ECu) {
        ctx->pc = 0x36B7F0u;
        goto label_36b7f0;
    }
    ctx->pc = 0x36B7E8u;
    {
        const bool branch_taken_0x36b7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b7e8) {
            ctx->pc = 0x36BB48u;
            goto label_36bb48;
        }
    }
    ctx->pc = 0x36B7F0u;
label_36b7f0:
    // 0x36b7f0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x36b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_36b7f4:
    // 0x36b7f4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x36b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_36b7f8:
    // 0x36b7f8: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x36b7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36b7fc:
    // 0x36b7fc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x36b7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_36b800:
    // 0x36b800: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x36b800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36b804:
    // 0x36b804: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x36b804u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_36b808:
    // 0x36b808: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x36b808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
label_36b80c:
    // 0x36b80c: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x36b80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_36b810:
    // 0x36b810: 0x31340  sll         $v0, $v1, 13
    ctx->pc = 0x36b810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
label_36b814:
    // 0x36b814: 0xc04f2b8  jal         func_13CAE0
label_36b818:
    if (ctx->pc == 0x36B818u) {
        ctx->pc = 0x36B818u;
            // 0x36b818: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x36B81Cu;
        goto label_36b81c;
    }
    ctx->pc = 0x36B814u;
    SET_GPR_U32(ctx, 31, 0x36B81Cu);
    ctx->pc = 0x36B818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B814u;
            // 0x36b818: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAE0u;
    if (runtime->hasFunction(0x13CAE0u)) {
        auto targetFn = runtime->lookupFunction(0x13CAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B81Cu; }
        if (ctx->pc != 0x36B81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CAE0_0x13cae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B81Cu; }
        if (ctx->pc != 0x36B81Cu) { return; }
    }
    ctx->pc = 0x36B81Cu;
label_36b81c:
    // 0x36b81c: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x36b81cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_36b820:
    // 0x36b820: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x36b820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_36b824:
    // 0x36b824: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x36b824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_36b828:
    // 0x36b828: 0xc04cca0  jal         func_133280
label_36b82c:
    if (ctx->pc == 0x36B82Cu) {
        ctx->pc = 0x36B82Cu;
            // 0x36b82c: 0x24c64d20  addiu       $a2, $a2, 0x4D20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19744));
        ctx->pc = 0x36B830u;
        goto label_36b830;
    }
    ctx->pc = 0x36B828u;
    SET_GPR_U32(ctx, 31, 0x36B830u);
    ctx->pc = 0x36B82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B828u;
            // 0x36b82c: 0x24c64d20  addiu       $a2, $a2, 0x4D20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B830u; }
        if (ctx->pc != 0x36B830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B830u; }
        if (ctx->pc != 0x36B830u) { return; }
    }
    ctx->pc = 0x36B830u;
label_36b830:
    // 0x36b830: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x36b830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36b834:
    // 0x36b834: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x36b834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_36b838:
    // 0x36b838: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x36b838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_36b83c:
    // 0x36b83c: 0x265003a0  addiu       $s0, $s2, 0x3A0
    ctx->pc = 0x36b83cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 928));
label_36b840:
    // 0x36b840: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36b840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_36b844:
    // 0x36b844: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x36b844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_36b848:
    // 0x36b848: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x36b848u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_36b84c:
    // 0x36b84c: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x36b84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_36b850:
    // 0x36b850: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36b850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36b854:
    // 0x36b854: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36b854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36b858:
    // 0x36b858: 0x0  nop
    ctx->pc = 0x36b858u;
    // NOP
label_36b85c:
    // 0x36b85c: 0x0  nop
    ctx->pc = 0x36b85cu;
    // NOP
label_36b860:
    // 0x36b860: 0xc04cc90  jal         func_133240
label_36b864:
    if (ctx->pc == 0x36B864u) {
        ctx->pc = 0x36B864u;
            // 0x36b864: 0x460105c1  sub.s       $f23, $f0, $f1 (Delay Slot)
        ctx->f[23] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x36B868u;
        goto label_36b868;
    }
    ctx->pc = 0x36B860u;
    SET_GPR_U32(ctx, 31, 0x36B868u);
    ctx->pc = 0x36B864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B860u;
            // 0x36b864: 0x460105c1  sub.s       $f23, $f0, $f1 (Delay Slot)
        ctx->f[23] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B868u; }
        if (ctx->pc != 0x36B868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B868u; }
        if (ctx->pc != 0x36B868u) { return; }
    }
    ctx->pc = 0x36B868u;
label_36b868:
    // 0x36b868: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x36b868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36b86c:
    // 0x36b86c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x36b86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_36b870:
    // 0x36b870: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x36b870u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_36b874:
    // 0x36b874: 0xc04cc7c  jal         func_1331F0
label_36b878:
    if (ctx->pc == 0x36B878u) {
        ctx->pc = 0x36B878u;
            // 0x36b878: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x36B87Cu;
        goto label_36b87c;
    }
    ctx->pc = 0x36B874u;
    SET_GPR_U32(ctx, 31, 0x36B87Cu);
    ctx->pc = 0x36B878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B874u;
            // 0x36b878: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B87Cu; }
        if (ctx->pc != 0x36B87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B87Cu; }
        if (ctx->pc != 0x36B87Cu) { return; }
    }
    ctx->pc = 0x36B87Cu;
label_36b87c:
    // 0x36b87c: 0xc0c05c8  jal         func_301720
label_36b880:
    if (ctx->pc == 0x36B880u) {
        ctx->pc = 0x36B880u;
            // 0x36b880: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B884u;
        goto label_36b884;
    }
    ctx->pc = 0x36B87Cu;
    SET_GPR_U32(ctx, 31, 0x36B884u);
    ctx->pc = 0x36B880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B87Cu;
            // 0x36b880: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301720u;
    if (runtime->hasFunction(0x301720u)) {
        auto targetFn = runtime->lookupFunction(0x301720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B884u; }
        if (ctx->pc != 0x36B884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301720_0x301720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B884u; }
        if (ctx->pc != 0x36B884u) { return; }
    }
    ctx->pc = 0x36B884u;
label_36b884:
    // 0x36b884: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36b884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36b888:
    // 0x36b888: 0xc0c05dc  jal         func_301770
label_36b88c:
    if (ctx->pc == 0x36B88Cu) {
        ctx->pc = 0x36B88Cu;
            // 0x36b88c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B890u;
        goto label_36b890;
    }
    ctx->pc = 0x36B888u;
    SET_GPR_U32(ctx, 31, 0x36B890u);
    ctx->pc = 0x36B88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B888u;
            // 0x36b88c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301770u;
    if (runtime->hasFunction(0x301770u)) {
        auto targetFn = runtime->lookupFunction(0x301770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B890u; }
        if (ctx->pc != 0x36B890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301770_0x301770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B890u; }
        if (ctx->pc != 0x36B890u) { return; }
    }
    ctx->pc = 0x36B890u;
label_36b890:
    // 0x36b890: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36b890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36b894:
    // 0x36b894: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x36b894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_36b898:
    // 0x36b898: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x36b898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_36b89c:
    // 0x36b89c: 0xc04cca0  jal         func_133280
label_36b8a0:
    if (ctx->pc == 0x36B8A0u) {
        ctx->pc = 0x36B8A0u;
            // 0x36b8a0: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x36B8A4u;
        goto label_36b8a4;
    }
    ctx->pc = 0x36B89Cu;
    SET_GPR_U32(ctx, 31, 0x36B8A4u);
    ctx->pc = 0x36B8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B89Cu;
            // 0x36b8a0: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B8A4u; }
        if (ctx->pc != 0x36B8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B8A4u; }
        if (ctx->pc != 0x36B8A4u) { return; }
    }
    ctx->pc = 0x36B8A4u;
label_36b8a4:
    // 0x36b8a4: 0xc077264  jal         func_1DC990
label_36b8a8:
    if (ctx->pc == 0x36B8A8u) {
        ctx->pc = 0x36B8A8u;
            // 0x36b8a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B8ACu;
        goto label_36b8ac;
    }
    ctx->pc = 0x36B8A4u;
    SET_GPR_U32(ctx, 31, 0x36B8ACu);
    ctx->pc = 0x36B8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B8A4u;
            // 0x36b8a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B8ACu; }
        if (ctx->pc != 0x36B8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B8ACu; }
        if (ctx->pc != 0x36B8ACu) { return; }
    }
    ctx->pc = 0x36B8ACu;
label_36b8ac:
    // 0x36b8ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x36b8acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36b8b0:
    // 0x36b8b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36b8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36b8b4:
    // 0x36b8b4: 0xc04cc90  jal         func_133240
label_36b8b8:
    if (ctx->pc == 0x36B8B8u) {
        ctx->pc = 0x36B8B8u;
            // 0x36b8b8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x36B8BCu;
        goto label_36b8bc;
    }
    ctx->pc = 0x36B8B4u;
    SET_GPR_U32(ctx, 31, 0x36B8BCu);
    ctx->pc = 0x36B8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B8B4u;
            // 0x36b8b8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B8BCu; }
        if (ctx->pc != 0x36B8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B8BCu; }
        if (ctx->pc != 0x36B8BCu) { return; }
    }
    ctx->pc = 0x36B8BCu;
label_36b8bc:
    // 0x36b8bc: 0xc04cc14  jal         func_133050
label_36b8c0:
    if (ctx->pc == 0x36B8C0u) {
        ctx->pc = 0x36B8C0u;
            // 0x36b8c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B8C4u;
        goto label_36b8c4;
    }
    ctx->pc = 0x36B8BCu;
    SET_GPR_U32(ctx, 31, 0x36B8C4u);
    ctx->pc = 0x36B8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B8BCu;
            // 0x36b8c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B8C4u; }
        if (ctx->pc != 0x36B8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B8C4u; }
        if (ctx->pc != 0x36B8C4u) { return; }
    }
    ctx->pc = 0x36B8C4u;
label_36b8c4:
    // 0x36b8c4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x36b8c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_36b8c8:
    // 0x36b8c8: 0xc0c1a0c  jal         func_306830
label_36b8cc:
    if (ctx->pc == 0x36B8CCu) {
        ctx->pc = 0x36B8CCu;
            // 0x36b8cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B8D0u;
        goto label_36b8d0;
    }
    ctx->pc = 0x36B8C8u;
    SET_GPR_U32(ctx, 31, 0x36B8D0u);
    ctx->pc = 0x36B8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B8C8u;
            // 0x36b8cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306830u;
    if (runtime->hasFunction(0x306830u)) {
        auto targetFn = runtime->lookupFunction(0x306830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B8D0u; }
        if (ctx->pc != 0x36B8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306830_0x306830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B8D0u; }
        if (ctx->pc != 0x36B8D0u) { return; }
    }
    ctx->pc = 0x36B8D0u;
label_36b8d0:
    // 0x36b8d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36b8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36b8d4:
    // 0x36b8d4: 0xc04cc44  jal         func_133110
label_36b8d8:
    if (ctx->pc == 0x36B8D8u) {
        ctx->pc = 0x36B8D8u;
            // 0x36b8d8: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x36B8DCu;
        goto label_36b8dc;
    }
    ctx->pc = 0x36B8D4u;
    SET_GPR_U32(ctx, 31, 0x36B8DCu);
    ctx->pc = 0x36B8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B8D4u;
            // 0x36b8d8: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B8DCu; }
        if (ctx->pc != 0x36B8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B8DCu; }
        if (ctx->pc != 0x36B8DCu) { return; }
    }
    ctx->pc = 0x36B8DCu;
label_36b8dc:
    // 0x36b8dc: 0xc0b6d5c  jal         func_2DB570
label_36b8e0:
    if (ctx->pc == 0x36B8E0u) {
        ctx->pc = 0x36B8E0u;
            // 0x36b8e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B8E4u;
        goto label_36b8e4;
    }
    ctx->pc = 0x36B8DCu;
    SET_GPR_U32(ctx, 31, 0x36B8E4u);
    ctx->pc = 0x36B8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B8DCu;
            // 0x36b8e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB570u;
    if (runtime->hasFunction(0x2DB570u)) {
        auto targetFn = runtime->lookupFunction(0x2DB570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B8E4u; }
        if (ctx->pc != 0x36B8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB570_0x2db570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B8E4u; }
        if (ctx->pc != 0x36B8E4u) { return; }
    }
    ctx->pc = 0x36B8E4u;
label_36b8e4:
    // 0x36b8e4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x36b8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_36b8e8:
    // 0x36b8e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x36b8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36b8ec:
    // 0x36b8ec: 0xc04cc04  jal         func_133010
label_36b8f0:
    if (ctx->pc == 0x36B8F0u) {
        ctx->pc = 0x36B8F0u;
            // 0x36b8f0: 0x24a54d50  addiu       $a1, $a1, 0x4D50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19792));
        ctx->pc = 0x36B8F4u;
        goto label_36b8f4;
    }
    ctx->pc = 0x36B8ECu;
    SET_GPR_U32(ctx, 31, 0x36B8F4u);
    ctx->pc = 0x36B8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B8ECu;
            // 0x36b8f0: 0x24a54d50  addiu       $a1, $a1, 0x4D50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B8F4u; }
        if (ctx->pc != 0x36B8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B8F4u; }
        if (ctx->pc != 0x36B8F4u) { return; }
    }
    ctx->pc = 0x36B8F4u;
label_36b8f4:
    // 0x36b8f4: 0xc077280  jal         func_1DCA00
label_36b8f8:
    if (ctx->pc == 0x36B8F8u) {
        ctx->pc = 0x36B8F8u;
            // 0x36b8f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B8FCu;
        goto label_36b8fc;
    }
    ctx->pc = 0x36B8F4u;
    SET_GPR_U32(ctx, 31, 0x36B8FCu);
    ctx->pc = 0x36B8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B8F4u;
            // 0x36b8f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B8FCu; }
        if (ctx->pc != 0x36B8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B8FCu; }
        if (ctx->pc != 0x36B8FCu) { return; }
    }
    ctx->pc = 0x36B8FCu;
label_36b8fc:
    // 0x36b8fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36b8fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36b900:
    // 0x36b900: 0xc0b6d5c  jal         func_2DB570
label_36b904:
    if (ctx->pc == 0x36B904u) {
        ctx->pc = 0x36B904u;
            // 0x36b904: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B908u;
        goto label_36b908;
    }
    ctx->pc = 0x36B900u;
    SET_GPR_U32(ctx, 31, 0x36B908u);
    ctx->pc = 0x36B904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B900u;
            // 0x36b904: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB570u;
    if (runtime->hasFunction(0x2DB570u)) {
        auto targetFn = runtime->lookupFunction(0x2DB570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B908u; }
        if (ctx->pc != 0x36B908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB570_0x2db570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B908u; }
        if (ctx->pc != 0x36B908u) { return; }
    }
    ctx->pc = 0x36B908u;
label_36b908:
    // 0x36b908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36b908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36b90c:
    // 0x36b90c: 0xc075318  jal         func_1D4C60
label_36b910:
    if (ctx->pc == 0x36B910u) {
        ctx->pc = 0x36B910u;
            // 0x36b910: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B914u;
        goto label_36b914;
    }
    ctx->pc = 0x36B90Cu;
    SET_GPR_U32(ctx, 31, 0x36B914u);
    ctx->pc = 0x36B910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B90Cu;
            // 0x36b910: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B914u; }
        if (ctx->pc != 0x36B914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B914u; }
        if (ctx->pc != 0x36B914u) { return; }
    }
    ctx->pc = 0x36B914u;
label_36b914:
    // 0x36b914: 0xc0b6cec  jal         func_2DB3B0
label_36b918:
    if (ctx->pc == 0x36B918u) {
        ctx->pc = 0x36B918u;
            // 0x36b918: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B91Cu;
        goto label_36b91c;
    }
    ctx->pc = 0x36B914u;
    SET_GPR_U32(ctx, 31, 0x36B91Cu);
    ctx->pc = 0x36B918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B914u;
            // 0x36b918: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B91Cu; }
        if (ctx->pc != 0x36B91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B91Cu; }
        if (ctx->pc != 0x36B91Cu) { return; }
    }
    ctx->pc = 0x36B91Cu;
label_36b91c:
    // 0x36b91c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36b91cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36b920:
    // 0x36b920: 0xc077280  jal         func_1DCA00
label_36b924:
    if (ctx->pc == 0x36B924u) {
        ctx->pc = 0x36B924u;
            // 0x36b924: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B928u;
        goto label_36b928;
    }
    ctx->pc = 0x36B920u;
    SET_GPR_U32(ctx, 31, 0x36B928u);
    ctx->pc = 0x36B924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B920u;
            // 0x36b924: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B928u; }
        if (ctx->pc != 0x36B928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B928u; }
        if (ctx->pc != 0x36B928u) { return; }
    }
    ctx->pc = 0x36B928u;
label_36b928:
    // 0x36b928: 0xc07727c  jal         func_1DC9F0
label_36b92c:
    if (ctx->pc == 0x36B92Cu) {
        ctx->pc = 0x36B92Cu;
            // 0x36b92c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B930u;
        goto label_36b930;
    }
    ctx->pc = 0x36B928u;
    SET_GPR_U32(ctx, 31, 0x36B930u);
    ctx->pc = 0x36B92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B928u;
            // 0x36b92c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B930u; }
        if (ctx->pc != 0x36B930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B930u; }
        if (ctx->pc != 0x36B930u) { return; }
    }
    ctx->pc = 0x36B930u;
label_36b930:
    // 0x36b930: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36b930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36b934:
    // 0x36b934: 0xc0c05e0  jal         func_301780
label_36b938:
    if (ctx->pc == 0x36B938u) {
        ctx->pc = 0x36B938u;
            // 0x36b938: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B93Cu;
        goto label_36b93c;
    }
    ctx->pc = 0x36B934u;
    SET_GPR_U32(ctx, 31, 0x36B93Cu);
    ctx->pc = 0x36B938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B934u;
            // 0x36b938: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301780u;
    if (runtime->hasFunction(0x301780u)) {
        auto targetFn = runtime->lookupFunction(0x301780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B93Cu; }
        if (ctx->pc != 0x36B93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301780_0x301780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B93Cu; }
        if (ctx->pc != 0x36B93Cu) { return; }
    }
    ctx->pc = 0x36B93Cu;
label_36b93c:
    // 0x36b93c: 0xc077280  jal         func_1DCA00
label_36b940:
    if (ctx->pc == 0x36B940u) {
        ctx->pc = 0x36B940u;
            // 0x36b940: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B944u;
        goto label_36b944;
    }
    ctx->pc = 0x36B93Cu;
    SET_GPR_U32(ctx, 31, 0x36B944u);
    ctx->pc = 0x36B940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B93Cu;
            // 0x36b940: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B944u; }
        if (ctx->pc != 0x36B944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B944u; }
        if (ctx->pc != 0x36B944u) { return; }
    }
    ctx->pc = 0x36B944u;
label_36b944:
    // 0x36b944: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36b944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36b948:
    // 0x36b948: 0xc0daef4  jal         func_36BBD0
label_36b94c:
    if (ctx->pc == 0x36B94Cu) {
        ctx->pc = 0x36B94Cu;
            // 0x36b94c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B950u;
        goto label_36b950;
    }
    ctx->pc = 0x36B948u;
    SET_GPR_U32(ctx, 31, 0x36B950u);
    ctx->pc = 0x36B94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B948u;
            // 0x36b94c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BBD0u;
    if (runtime->hasFunction(0x36BBD0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B950u; }
        if (ctx->pc != 0x36B950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBD0_0x36bbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B950u; }
        if (ctx->pc != 0x36B950u) { return; }
    }
    ctx->pc = 0x36B950u;
label_36b950:
    // 0x36b950: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36b950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36b954:
    // 0x36b954: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x36b954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36b958:
    // 0x36b958: 0xc075378  jal         func_1D4DE0
label_36b95c:
    if (ctx->pc == 0x36B95Cu) {
        ctx->pc = 0x36B95Cu;
            // 0x36b95c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x36B960u;
        goto label_36b960;
    }
    ctx->pc = 0x36B958u;
    SET_GPR_U32(ctx, 31, 0x36B960u);
    ctx->pc = 0x36B95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B958u;
            // 0x36b95c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B960u; }
        if (ctx->pc != 0x36B960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B960u; }
        if (ctx->pc != 0x36B960u) { return; }
    }
    ctx->pc = 0x36B960u;
label_36b960:
    // 0x36b960: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x36b960u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_36b964:
    // 0x36b964: 0xc0daef0  jal         func_36BBC0
label_36b968:
    if (ctx->pc == 0x36B968u) {
        ctx->pc = 0x36B968u;
            // 0x36b968: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B96Cu;
        goto label_36b96c;
    }
    ctx->pc = 0x36B964u;
    SET_GPR_U32(ctx, 31, 0x36B96Cu);
    ctx->pc = 0x36B968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B964u;
            // 0x36b968: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BBC0u;
    if (runtime->hasFunction(0x36BBC0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B96Cu; }
        if (ctx->pc != 0x36B96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBC0_0x36bbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B96Cu; }
        if (ctx->pc != 0x36B96Cu) { return; }
    }
    ctx->pc = 0x36B96Cu;
label_36b96c:
    // 0x36b96c: 0x4600bb00  add.s       $f12, $f23, $f0
    ctx->pc = 0x36b96cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_36b970:
    // 0x36b970: 0xc0cef78  jal         func_33BDE0
label_36b974:
    if (ctx->pc == 0x36B974u) {
        ctx->pc = 0x36B974u;
            // 0x36b974: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B978u;
        goto label_36b978;
    }
    ctx->pc = 0x36B970u;
    SET_GPR_U32(ctx, 31, 0x36B978u);
    ctx->pc = 0x36B974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B970u;
            // 0x36b974: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BDE0u;
    if (runtime->hasFunction(0x33BDE0u)) {
        auto targetFn = runtime->lookupFunction(0x33BDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B978u; }
        if (ctx->pc != 0x36B978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BDE0_0x33bde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B978u; }
        if (ctx->pc != 0x36B978u) { return; }
    }
    ctx->pc = 0x36B978u;
label_36b978:
    // 0x36b978: 0xc0daeec  jal         func_36BBB0
label_36b97c:
    if (ctx->pc == 0x36B97Cu) {
        ctx->pc = 0x36B97Cu;
            // 0x36b97c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B980u;
        goto label_36b980;
    }
    ctx->pc = 0x36B978u;
    SET_GPR_U32(ctx, 31, 0x36B980u);
    ctx->pc = 0x36B97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B978u;
            // 0x36b97c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BBB0u;
    if (runtime->hasFunction(0x36BBB0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B980u; }
        if (ctx->pc != 0x36B980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBB0_0x36bbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B980u; }
        if (ctx->pc != 0x36B980u) { return; }
    }
    ctx->pc = 0x36B980u;
label_36b980:
    // 0x36b980: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x36b980u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_36b984:
    // 0x36b984: 0xc0daef0  jal         func_36BBC0
label_36b988:
    if (ctx->pc == 0x36B988u) {
        ctx->pc = 0x36B988u;
            // 0x36b988: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B98Cu;
        goto label_36b98c;
    }
    ctx->pc = 0x36B984u;
    SET_GPR_U32(ctx, 31, 0x36B98Cu);
    ctx->pc = 0x36B988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B984u;
            // 0x36b988: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BBC0u;
    if (runtime->hasFunction(0x36BBC0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B98Cu; }
        if (ctx->pc != 0x36B98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBC0_0x36bbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B98Cu; }
        if (ctx->pc != 0x36B98Cu) { return; }
    }
    ctx->pc = 0x36B98Cu;
label_36b98c:
    // 0x36b98c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x36b98cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_36b990:
    // 0x36b990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36b990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36b994:
    // 0x36b994: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x36b994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_36b998:
    // 0x36b998: 0xc0daee8  jal         func_36BBA0
label_36b99c:
    if (ctx->pc == 0x36B99Cu) {
        ctx->pc = 0x36B99Cu;
            // 0x36b99c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x36B9A0u;
        goto label_36b9a0;
    }
    ctx->pc = 0x36B998u;
    SET_GPR_U32(ctx, 31, 0x36B9A0u);
    ctx->pc = 0x36B99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B998u;
            // 0x36b99c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BBA0u;
    if (runtime->hasFunction(0x36BBA0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B9A0u; }
        if (ctx->pc != 0x36B9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBA0_0x36bba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B9A0u; }
        if (ctx->pc != 0x36B9A0u) { return; }
    }
    ctx->pc = 0x36B9A0u;
label_36b9a0:
    // 0x36b9a0: 0xc077280  jal         func_1DCA00
label_36b9a4:
    if (ctx->pc == 0x36B9A4u) {
        ctx->pc = 0x36B9A4u;
            // 0x36b9a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B9A8u;
        goto label_36b9a8;
    }
    ctx->pc = 0x36B9A0u;
    SET_GPR_U32(ctx, 31, 0x36B9A8u);
    ctx->pc = 0x36B9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B9A0u;
            // 0x36b9a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B9A8u; }
        if (ctx->pc != 0x36B9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B9A8u; }
        if (ctx->pc != 0x36B9A8u) { return; }
    }
    ctx->pc = 0x36B9A8u;
label_36b9a8:
    // 0x36b9a8: 0xc07727c  jal         func_1DC9F0
label_36b9ac:
    if (ctx->pc == 0x36B9ACu) {
        ctx->pc = 0x36B9ACu;
            // 0x36b9ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B9B0u;
        goto label_36b9b0;
    }
    ctx->pc = 0x36B9A8u;
    SET_GPR_U32(ctx, 31, 0x36B9B0u);
    ctx->pc = 0x36B9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B9A8u;
            // 0x36b9ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B9B0u; }
        if (ctx->pc != 0x36B9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B9B0u; }
        if (ctx->pc != 0x36B9B0u) { return; }
    }
    ctx->pc = 0x36B9B0u;
label_36b9b0:
    // 0x36b9b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36b9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36b9b4:
    // 0x36b9b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36b9b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_36b9b8:
    // 0x36b9b8: 0xc0c05d4  jal         func_301750
label_36b9bc:
    if (ctx->pc == 0x36B9BCu) {
        ctx->pc = 0x36B9BCu;
            // 0x36b9bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36B9C0u;
        goto label_36b9c0;
    }
    ctx->pc = 0x36B9B8u;
    SET_GPR_U32(ctx, 31, 0x36B9C0u);
    ctx->pc = 0x36B9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B9B8u;
            // 0x36b9bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301750u;
    if (runtime->hasFunction(0x301750u)) {
        auto targetFn = runtime->lookupFunction(0x301750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B9C0u; }
        if (ctx->pc != 0x36B9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301750_0x301750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B9C0u; }
        if (ctx->pc != 0x36B9C0u) { return; }
    }
    ctx->pc = 0x36B9C0u;
label_36b9c0:
    // 0x36b9c0: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x36b9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36b9c4:
    // 0x36b9c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36b9c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36b9c8:
    // 0x36b9c8: 0x0  nop
    ctx->pc = 0x36b9c8u;
    // NOP
label_36b9cc:
    // 0x36b9cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x36b9ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_36b9d0:
    // 0x36b9d0: 0x4500005d  bc1f        . + 4 + (0x5D << 2)
label_36b9d4:
    if (ctx->pc == 0x36B9D4u) {
        ctx->pc = 0x36B9D8u;
        goto label_36b9d8;
    }
    ctx->pc = 0x36B9D0u;
    {
        const bool branch_taken_0x36b9d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x36b9d0) {
            ctx->pc = 0x36BB48u;
            goto label_36bb48;
        }
    }
    ctx->pc = 0x36B9D8u;
label_36b9d8:
    // 0x36b9d8: 0x264403a0  addiu       $a0, $s2, 0x3A0
    ctx->pc = 0x36b9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 928));
label_36b9dc:
    // 0x36b9dc: 0xc04cc04  jal         func_133010
label_36b9e0:
    if (ctx->pc == 0x36B9E0u) {
        ctx->pc = 0x36B9E0u;
            // 0x36b9e0: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x36B9E4u;
        goto label_36b9e4;
    }
    ctx->pc = 0x36B9DCu;
    SET_GPR_U32(ctx, 31, 0x36B9E4u);
    ctx->pc = 0x36B9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B9DCu;
            // 0x36b9e0: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B9E4u; }
        if (ctx->pc != 0x36B9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36B9E4u; }
        if (ctx->pc != 0x36B9E4u) { return; }
    }
    ctx->pc = 0x36B9E4u;
label_36b9e4:
    // 0x36b9e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36b9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36b9e8:
    // 0x36b9e8: 0x10000057  b           . + 4 + (0x57 << 2)
label_36b9ec:
    if (ctx->pc == 0x36B9ECu) {
        ctx->pc = 0x36B9ECu;
            // 0x36b9ec: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x36B9F0u;
        goto label_36b9f0;
    }
    ctx->pc = 0x36B9E8u;
    {
        const bool branch_taken_0x36b9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36B9E8u;
            // 0x36b9ec: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b9e8) {
            ctx->pc = 0x36BB48u;
            goto label_36bb48;
        }
    }
    ctx->pc = 0x36B9F0u;
label_36b9f0:
    // 0x36b9f0: 0x24021555  addiu       $v0, $zero, 0x1555
    ctx->pc = 0x36b9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5461));
label_36b9f4:
    // 0x36b9f4: 0xae420af8  sw          $v0, 0xAF8($s2)
    ctx->pc = 0x36b9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2808), GPR_U32(ctx, 2));
label_36b9f8:
    // 0x36b9f8: 0xc0c05c8  jal         func_301720
label_36b9fc:
    if (ctx->pc == 0x36B9FCu) {
        ctx->pc = 0x36B9FCu;
            // 0x36b9fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36BA00u;
        goto label_36ba00;
    }
    ctx->pc = 0x36B9F8u;
    SET_GPR_U32(ctx, 31, 0x36BA00u);
    ctx->pc = 0x36B9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36B9F8u;
            // 0x36b9fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301720u;
    if (runtime->hasFunction(0x301720u)) {
        auto targetFn = runtime->lookupFunction(0x301720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BA00u; }
        if (ctx->pc != 0x36BA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301720_0x301720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BA00u; }
        if (ctx->pc != 0x36BA00u) { return; }
    }
    ctx->pc = 0x36BA00u;
label_36ba00:
    // 0x36ba00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36ba00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36ba04:
    // 0x36ba04: 0xc0c05dc  jal         func_301770
label_36ba08:
    if (ctx->pc == 0x36BA08u) {
        ctx->pc = 0x36BA08u;
            // 0x36ba08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36BA0Cu;
        goto label_36ba0c;
    }
    ctx->pc = 0x36BA04u;
    SET_GPR_U32(ctx, 31, 0x36BA0Cu);
    ctx->pc = 0x36BA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BA04u;
            // 0x36ba08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301770u;
    if (runtime->hasFunction(0x301770u)) {
        auto targetFn = runtime->lookupFunction(0x301770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BA0Cu; }
        if (ctx->pc != 0x36BA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301770_0x301770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BA0Cu; }
        if (ctx->pc != 0x36BA0Cu) { return; }
    }
    ctx->pc = 0x36BA0Cu;
label_36ba0c:
    // 0x36ba0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36ba0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36ba10:
    // 0x36ba10: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x36ba10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_36ba14:
    // 0x36ba14: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x36ba14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_36ba18:
    // 0x36ba18: 0xc04cca0  jal         func_133280
label_36ba1c:
    if (ctx->pc == 0x36BA1Cu) {
        ctx->pc = 0x36BA1Cu;
            // 0x36ba1c: 0x264603a0  addiu       $a2, $s2, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 928));
        ctx->pc = 0x36BA20u;
        goto label_36ba20;
    }
    ctx->pc = 0x36BA18u;
    SET_GPR_U32(ctx, 31, 0x36BA20u);
    ctx->pc = 0x36BA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BA18u;
            // 0x36ba1c: 0x264603a0  addiu       $a2, $s2, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BA20u; }
        if (ctx->pc != 0x36BA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BA20u; }
        if (ctx->pc != 0x36BA20u) { return; }
    }
    ctx->pc = 0x36BA20u;
label_36ba20:
    // 0x36ba20: 0xc077264  jal         func_1DC990
label_36ba24:
    if (ctx->pc == 0x36BA24u) {
        ctx->pc = 0x36BA24u;
            // 0x36ba24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36BA28u;
        goto label_36ba28;
    }
    ctx->pc = 0x36BA20u;
    SET_GPR_U32(ctx, 31, 0x36BA28u);
    ctx->pc = 0x36BA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BA20u;
            // 0x36ba24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BA28u; }
        if (ctx->pc != 0x36BA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BA28u; }
        if (ctx->pc != 0x36BA28u) { return; }
    }
    ctx->pc = 0x36BA28u;
label_36ba28:
    // 0x36ba28: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x36ba28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36ba2c:
    // 0x36ba2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36ba2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36ba30:
    // 0x36ba30: 0xc04cc90  jal         func_133240
label_36ba34:
    if (ctx->pc == 0x36BA34u) {
        ctx->pc = 0x36BA34u;
            // 0x36ba34: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x36BA38u;
        goto label_36ba38;
    }
    ctx->pc = 0x36BA30u;
    SET_GPR_U32(ctx, 31, 0x36BA38u);
    ctx->pc = 0x36BA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BA30u;
            // 0x36ba34: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BA38u; }
        if (ctx->pc != 0x36BA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BA38u; }
        if (ctx->pc != 0x36BA38u) { return; }
    }
    ctx->pc = 0x36BA38u;
label_36ba38:
    // 0x36ba38: 0xc04cc14  jal         func_133050
label_36ba3c:
    if (ctx->pc == 0x36BA3Cu) {
        ctx->pc = 0x36BA3Cu;
            // 0x36ba3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36BA40u;
        goto label_36ba40;
    }
    ctx->pc = 0x36BA38u;
    SET_GPR_U32(ctx, 31, 0x36BA40u);
    ctx->pc = 0x36BA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BA38u;
            // 0x36ba3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BA40u; }
        if (ctx->pc != 0x36BA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BA40u; }
        if (ctx->pc != 0x36BA40u) { return; }
    }
    ctx->pc = 0x36BA40u;
label_36ba40:
    // 0x36ba40: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x36ba40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_36ba44:
    // 0x36ba44: 0xc0c1a0c  jal         func_306830
label_36ba48:
    if (ctx->pc == 0x36BA48u) {
        ctx->pc = 0x36BA48u;
            // 0x36ba48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36BA4Cu;
        goto label_36ba4c;
    }
    ctx->pc = 0x36BA44u;
    SET_GPR_U32(ctx, 31, 0x36BA4Cu);
    ctx->pc = 0x36BA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BA44u;
            // 0x36ba48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306830u;
    if (runtime->hasFunction(0x306830u)) {
        auto targetFn = runtime->lookupFunction(0x306830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BA4Cu; }
        if (ctx->pc != 0x36BA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306830_0x306830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BA4Cu; }
        if (ctx->pc != 0x36BA4Cu) { return; }
    }
    ctx->pc = 0x36BA4Cu;
label_36ba4c:
    // 0x36ba4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36ba4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36ba50:
    // 0x36ba50: 0xc04cc44  jal         func_133110
label_36ba54:
    if (ctx->pc == 0x36BA54u) {
        ctx->pc = 0x36BA54u;
            // 0x36ba54: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x36BA58u;
        goto label_36ba58;
    }
    ctx->pc = 0x36BA50u;
    SET_GPR_U32(ctx, 31, 0x36BA58u);
    ctx->pc = 0x36BA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BA50u;
            // 0x36ba54: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BA58u; }
        if (ctx->pc != 0x36BA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BA58u; }
        if (ctx->pc != 0x36BA58u) { return; }
    }
    ctx->pc = 0x36BA58u;
label_36ba58:
    // 0x36ba58: 0xc0b6d5c  jal         func_2DB570
label_36ba5c:
    if (ctx->pc == 0x36BA5Cu) {
        ctx->pc = 0x36BA5Cu;
            // 0x36ba5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36BA60u;
        goto label_36ba60;
    }
    ctx->pc = 0x36BA58u;
    SET_GPR_U32(ctx, 31, 0x36BA60u);
    ctx->pc = 0x36BA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BA58u;
            // 0x36ba5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB570u;
    if (runtime->hasFunction(0x2DB570u)) {
        auto targetFn = runtime->lookupFunction(0x2DB570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BA60u; }
        if (ctx->pc != 0x36BA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB570_0x2db570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BA60u; }
        if (ctx->pc != 0x36BA60u) { return; }
    }
    ctx->pc = 0x36BA60u;
label_36ba60:
    // 0x36ba60: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x36ba60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_36ba64:
    // 0x36ba64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x36ba64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36ba68:
    // 0x36ba68: 0xc04cc04  jal         func_133010
label_36ba6c:
    if (ctx->pc == 0x36BA6Cu) {
        ctx->pc = 0x36BA6Cu;
            // 0x36ba6c: 0x24a54d50  addiu       $a1, $a1, 0x4D50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19792));
        ctx->pc = 0x36BA70u;
        goto label_36ba70;
    }
    ctx->pc = 0x36BA68u;
    SET_GPR_U32(ctx, 31, 0x36BA70u);
    ctx->pc = 0x36BA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BA68u;
            // 0x36ba6c: 0x24a54d50  addiu       $a1, $a1, 0x4D50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BA70u; }
        if (ctx->pc != 0x36BA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BA70u; }
        if (ctx->pc != 0x36BA70u) { return; }
    }
    ctx->pc = 0x36BA70u;
label_36ba70:
    // 0x36ba70: 0xc077280  jal         func_1DCA00
label_36ba74:
    if (ctx->pc == 0x36BA74u) {
        ctx->pc = 0x36BA74u;
            // 0x36ba74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36BA78u;
        goto label_36ba78;
    }
    ctx->pc = 0x36BA70u;
    SET_GPR_U32(ctx, 31, 0x36BA78u);
    ctx->pc = 0x36BA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BA70u;
            // 0x36ba74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BA78u; }
        if (ctx->pc != 0x36BA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BA78u; }
        if (ctx->pc != 0x36BA78u) { return; }
    }
    ctx->pc = 0x36BA78u;
label_36ba78:
    // 0x36ba78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36ba78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36ba7c:
    // 0x36ba7c: 0xc0b6d5c  jal         func_2DB570
label_36ba80:
    if (ctx->pc == 0x36BA80u) {
        ctx->pc = 0x36BA80u;
            // 0x36ba80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36BA84u;
        goto label_36ba84;
    }
    ctx->pc = 0x36BA7Cu;
    SET_GPR_U32(ctx, 31, 0x36BA84u);
    ctx->pc = 0x36BA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BA7Cu;
            // 0x36ba80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB570u;
    if (runtime->hasFunction(0x2DB570u)) {
        auto targetFn = runtime->lookupFunction(0x2DB570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BA84u; }
        if (ctx->pc != 0x36BA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB570_0x2db570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BA84u; }
        if (ctx->pc != 0x36BA84u) { return; }
    }
    ctx->pc = 0x36BA84u;
label_36ba84:
    // 0x36ba84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36ba84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36ba88:
    // 0x36ba88: 0xc075318  jal         func_1D4C60
label_36ba8c:
    if (ctx->pc == 0x36BA8Cu) {
        ctx->pc = 0x36BA8Cu;
            // 0x36ba8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36BA90u;
        goto label_36ba90;
    }
    ctx->pc = 0x36BA88u;
    SET_GPR_U32(ctx, 31, 0x36BA90u);
    ctx->pc = 0x36BA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BA88u;
            // 0x36ba8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BA90u; }
        if (ctx->pc != 0x36BA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BA90u; }
        if (ctx->pc != 0x36BA90u) { return; }
    }
    ctx->pc = 0x36BA90u;
label_36ba90:
    // 0x36ba90: 0xc0b6cec  jal         func_2DB3B0
label_36ba94:
    if (ctx->pc == 0x36BA94u) {
        ctx->pc = 0x36BA94u;
            // 0x36ba94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36BA98u;
        goto label_36ba98;
    }
    ctx->pc = 0x36BA90u;
    SET_GPR_U32(ctx, 31, 0x36BA98u);
    ctx->pc = 0x36BA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BA90u;
            // 0x36ba94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BA98u; }
        if (ctx->pc != 0x36BA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BA98u; }
        if (ctx->pc != 0x36BA98u) { return; }
    }
    ctx->pc = 0x36BA98u;
label_36ba98:
    // 0x36ba98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36ba98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36ba9c:
    // 0x36ba9c: 0xc077280  jal         func_1DCA00
label_36baa0:
    if (ctx->pc == 0x36BAA0u) {
        ctx->pc = 0x36BAA0u;
            // 0x36baa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36BAA4u;
        goto label_36baa4;
    }
    ctx->pc = 0x36BA9Cu;
    SET_GPR_U32(ctx, 31, 0x36BAA4u);
    ctx->pc = 0x36BAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BA9Cu;
            // 0x36baa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BAA4u; }
        if (ctx->pc != 0x36BAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BAA4u; }
        if (ctx->pc != 0x36BAA4u) { return; }
    }
    ctx->pc = 0x36BAA4u;
label_36baa4:
    // 0x36baa4: 0xc07727c  jal         func_1DC9F0
label_36baa8:
    if (ctx->pc == 0x36BAA8u) {
        ctx->pc = 0x36BAA8u;
            // 0x36baa8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36BAACu;
        goto label_36baac;
    }
    ctx->pc = 0x36BAA4u;
    SET_GPR_U32(ctx, 31, 0x36BAACu);
    ctx->pc = 0x36BAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BAA4u;
            // 0x36baa8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BAACu; }
        if (ctx->pc != 0x36BAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BAACu; }
        if (ctx->pc != 0x36BAACu) { return; }
    }
    ctx->pc = 0x36BAACu;
label_36baac:
    // 0x36baac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36baacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36bab0:
    // 0x36bab0: 0xc0c05e0  jal         func_301780
label_36bab4:
    if (ctx->pc == 0x36BAB4u) {
        ctx->pc = 0x36BAB4u;
            // 0x36bab4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36BAB8u;
        goto label_36bab8;
    }
    ctx->pc = 0x36BAB0u;
    SET_GPR_U32(ctx, 31, 0x36BAB8u);
    ctx->pc = 0x36BAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BAB0u;
            // 0x36bab4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301780u;
    if (runtime->hasFunction(0x301780u)) {
        auto targetFn = runtime->lookupFunction(0x301780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BAB8u; }
        if (ctx->pc != 0x36BAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301780_0x301780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BAB8u; }
        if (ctx->pc != 0x36BAB8u) { return; }
    }
    ctx->pc = 0x36BAB8u;
label_36bab8:
    // 0x36bab8: 0xc077280  jal         func_1DCA00
label_36babc:
    if (ctx->pc == 0x36BABCu) {
        ctx->pc = 0x36BABCu;
            // 0x36babc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36BAC0u;
        goto label_36bac0;
    }
    ctx->pc = 0x36BAB8u;
    SET_GPR_U32(ctx, 31, 0x36BAC0u);
    ctx->pc = 0x36BABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BAB8u;
            // 0x36babc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BAC0u; }
        if (ctx->pc != 0x36BAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BAC0u; }
        if (ctx->pc != 0x36BAC0u) { return; }
    }
    ctx->pc = 0x36BAC0u;
label_36bac0:
    // 0x36bac0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36bac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36bac4:
    // 0x36bac4: 0xc0daef4  jal         func_36BBD0
label_36bac8:
    if (ctx->pc == 0x36BAC8u) {
        ctx->pc = 0x36BAC8u;
            // 0x36bac8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36BACCu;
        goto label_36bacc;
    }
    ctx->pc = 0x36BAC4u;
    SET_GPR_U32(ctx, 31, 0x36BACCu);
    ctx->pc = 0x36BAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BAC4u;
            // 0x36bac8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BBD0u;
    if (runtime->hasFunction(0x36BBD0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BACCu; }
        if (ctx->pc != 0x36BACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBD0_0x36bbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BACCu; }
        if (ctx->pc != 0x36BACCu) { return; }
    }
    ctx->pc = 0x36BACCu;
label_36bacc:
    // 0x36bacc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36baccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36bad0:
    // 0x36bad0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x36bad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36bad4:
    // 0x36bad4: 0xc075378  jal         func_1D4DE0
label_36bad8:
    if (ctx->pc == 0x36BAD8u) {
        ctx->pc = 0x36BAD8u;
            // 0x36bad8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x36BADCu;
        goto label_36badc;
    }
    ctx->pc = 0x36BAD4u;
    SET_GPR_U32(ctx, 31, 0x36BADCu);
    ctx->pc = 0x36BAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BAD4u;
            // 0x36bad8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BADCu; }
        if (ctx->pc != 0x36BADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BADCu; }
        if (ctx->pc != 0x36BADCu) { return; }
    }
    ctx->pc = 0x36BADCu;
label_36badc:
    // 0x36badc: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x36badcu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_36bae0:
    // 0x36bae0: 0xc0daef0  jal         func_36BBC0
label_36bae4:
    if (ctx->pc == 0x36BAE4u) {
        ctx->pc = 0x36BAE4u;
            // 0x36bae4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36BAE8u;
        goto label_36bae8;
    }
    ctx->pc = 0x36BAE0u;
    SET_GPR_U32(ctx, 31, 0x36BAE8u);
    ctx->pc = 0x36BAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BAE0u;
            // 0x36bae4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BBC0u;
    if (runtime->hasFunction(0x36BBC0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BAE8u; }
        if (ctx->pc != 0x36BAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBC0_0x36bbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BAE8u; }
        if (ctx->pc != 0x36BAE8u) { return; }
    }
    ctx->pc = 0x36BAE8u;
label_36bae8:
    // 0x36bae8: 0x4600bb00  add.s       $f12, $f23, $f0
    ctx->pc = 0x36bae8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_36baec:
    // 0x36baec: 0xc0cef78  jal         func_33BDE0
label_36baf0:
    if (ctx->pc == 0x36BAF0u) {
        ctx->pc = 0x36BAF0u;
            // 0x36baf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36BAF4u;
        goto label_36baf4;
    }
    ctx->pc = 0x36BAECu;
    SET_GPR_U32(ctx, 31, 0x36BAF4u);
    ctx->pc = 0x36BAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BAECu;
            // 0x36baf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BDE0u;
    if (runtime->hasFunction(0x33BDE0u)) {
        auto targetFn = runtime->lookupFunction(0x33BDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BAF4u; }
        if (ctx->pc != 0x36BAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BDE0_0x33bde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BAF4u; }
        if (ctx->pc != 0x36BAF4u) { return; }
    }
    ctx->pc = 0x36BAF4u;
label_36baf4:
    // 0x36baf4: 0xc0daeec  jal         func_36BBB0
label_36baf8:
    if (ctx->pc == 0x36BAF8u) {
        ctx->pc = 0x36BAF8u;
            // 0x36baf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36BAFCu;
        goto label_36bafc;
    }
    ctx->pc = 0x36BAF4u;
    SET_GPR_U32(ctx, 31, 0x36BAFCu);
    ctx->pc = 0x36BAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BAF4u;
            // 0x36baf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BBB0u;
    if (runtime->hasFunction(0x36BBB0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BAFCu; }
        if (ctx->pc != 0x36BAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBB0_0x36bbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BAFCu; }
        if (ctx->pc != 0x36BAFCu) { return; }
    }
    ctx->pc = 0x36BAFCu;
label_36bafc:
    // 0x36bafc: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x36bafcu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_36bb00:
    // 0x36bb00: 0xc0daef0  jal         func_36BBC0
label_36bb04:
    if (ctx->pc == 0x36BB04u) {
        ctx->pc = 0x36BB04u;
            // 0x36bb04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36BB08u;
        goto label_36bb08;
    }
    ctx->pc = 0x36BB00u;
    SET_GPR_U32(ctx, 31, 0x36BB08u);
    ctx->pc = 0x36BB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BB00u;
            // 0x36bb04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BBC0u;
    if (runtime->hasFunction(0x36BBC0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BB08u; }
        if (ctx->pc != 0x36BB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBC0_0x36bbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BB08u; }
        if (ctx->pc != 0x36BB08u) { return; }
    }
    ctx->pc = 0x36BB08u;
label_36bb08:
    // 0x36bb08: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x36bb08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_36bb0c:
    // 0x36bb0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36bb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36bb10:
    // 0x36bb10: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x36bb10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_36bb14:
    // 0x36bb14: 0xc0daee8  jal         func_36BBA0
label_36bb18:
    if (ctx->pc == 0x36BB18u) {
        ctx->pc = 0x36BB18u;
            // 0x36bb18: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x36BB1Cu;
        goto label_36bb1c;
    }
    ctx->pc = 0x36BB14u;
    SET_GPR_U32(ctx, 31, 0x36BB1Cu);
    ctx->pc = 0x36BB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BB14u;
            // 0x36bb18: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BBA0u;
    if (runtime->hasFunction(0x36BBA0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BB1Cu; }
        if (ctx->pc != 0x36BB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBA0_0x36bba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BB1Cu; }
        if (ctx->pc != 0x36BB1Cu) { return; }
    }
    ctx->pc = 0x36BB1Cu;
label_36bb1c:
    // 0x36bb1c: 0xc077280  jal         func_1DCA00
label_36bb20:
    if (ctx->pc == 0x36BB20u) {
        ctx->pc = 0x36BB20u;
            // 0x36bb20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36BB24u;
        goto label_36bb24;
    }
    ctx->pc = 0x36BB1Cu;
    SET_GPR_U32(ctx, 31, 0x36BB24u);
    ctx->pc = 0x36BB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BB1Cu;
            // 0x36bb20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BB24u; }
        if (ctx->pc != 0x36BB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BB24u; }
        if (ctx->pc != 0x36BB24u) { return; }
    }
    ctx->pc = 0x36BB24u;
label_36bb24:
    // 0x36bb24: 0xc07727c  jal         func_1DC9F0
label_36bb28:
    if (ctx->pc == 0x36BB28u) {
        ctx->pc = 0x36BB28u;
            // 0x36bb28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36BB2Cu;
        goto label_36bb2c;
    }
    ctx->pc = 0x36BB24u;
    SET_GPR_U32(ctx, 31, 0x36BB2Cu);
    ctx->pc = 0x36BB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BB24u;
            // 0x36bb28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BB2Cu; }
        if (ctx->pc != 0x36BB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BB2Cu; }
        if (ctx->pc != 0x36BB2Cu) { return; }
    }
    ctx->pc = 0x36BB2Cu;
label_36bb2c:
    // 0x36bb2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36bb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36bb30:
    // 0x36bb30: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36bb30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_36bb34:
    // 0x36bb34: 0xc0c05d4  jal         func_301750
label_36bb38:
    if (ctx->pc == 0x36BB38u) {
        ctx->pc = 0x36BB38u;
            // 0x36bb38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36BB3Cu;
        goto label_36bb3c;
    }
    ctx->pc = 0x36BB34u;
    SET_GPR_U32(ctx, 31, 0x36BB3Cu);
    ctx->pc = 0x36BB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BB34u;
            // 0x36bb38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301750u;
    if (runtime->hasFunction(0x301750u)) {
        auto targetFn = runtime->lookupFunction(0x301750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BB3Cu; }
        if (ctx->pc != 0x36BB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301750_0x301750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BB3Cu; }
        if (ctx->pc != 0x36BB3Cu) { return; }
    }
    ctx->pc = 0x36BB3Cu;
label_36bb3c:
    // 0x36bb3c: 0xc10c9d8  jal         func_432760
label_36bb40:
    if (ctx->pc == 0x36BB40u) {
        ctx->pc = 0x36BB40u;
            // 0x36bb40: 0x8ea40080  lw          $a0, 0x80($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
        ctx->pc = 0x36BB44u;
        goto label_36bb44;
    }
    ctx->pc = 0x36BB3Cu;
    SET_GPR_U32(ctx, 31, 0x36BB44u);
    ctx->pc = 0x36BB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BB3Cu;
            // 0x36bb40: 0x8ea40080  lw          $a0, 0x80($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x432760u;
    if (runtime->hasFunction(0x432760u)) {
        auto targetFn = runtime->lookupFunction(0x432760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BB44u; }
        if (ctx->pc != 0x36BB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432760_0x432760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36BB44u; }
        if (ctx->pc != 0x36BB44u) { return; }
    }
    ctx->pc = 0x36BB44u;
label_36bb44:
    // 0x36bb44: 0x0  nop
    ctx->pc = 0x36bb44u;
    // NOP
label_36bb48:
    // 0x36bb48: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x36bb48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_36bb4c:
    // 0x36bb4c: 0x297182b  sltu        $v1, $s4, $s7
    ctx->pc = 0x36bb4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_36bb50:
    // 0x36bb50: 0x1460fe67  bnez        $v1, . + 4 + (-0x199 << 2)
label_36bb54:
    if (ctx->pc == 0x36BB54u) {
        ctx->pc = 0x36BB54u;
            // 0x36bb54: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->pc = 0x36BB58u;
        goto label_36bb58;
    }
    ctx->pc = 0x36BB50u;
    {
        const bool branch_taken_0x36bb50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36BB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36BB50u;
            // 0x36bb54: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bb50) {
            ctx->pc = 0x36B4F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36b4f0;
        }
    }
    ctx->pc = 0x36BB58u;
label_36bb58:
    // 0x36bb58: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x36bb58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_36bb5c:
    // 0x36bb5c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x36bb5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_36bb60:
    // 0x36bb60: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x36bb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_36bb64:
    // 0x36bb64: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x36bb64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_36bb68:
    // 0x36bb68: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x36bb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_36bb6c:
    // 0x36bb6c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x36bb6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_36bb70:
    // 0x36bb70: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x36bb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_36bb74:
    // 0x36bb74: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x36bb74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_36bb78:
    // 0x36bb78: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x36bb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_36bb7c:
    // 0x36bb7c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x36bb7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_36bb80:
    // 0x36bb80: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x36bb80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_36bb84:
    // 0x36bb84: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x36bb84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_36bb88:
    // 0x36bb88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36bb88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_36bb8c:
    // 0x36bb8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36bb8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36bb90:
    // 0x36bb90: 0x3e00008  jr          $ra
label_36bb94:
    if (ctx->pc == 0x36BB94u) {
        ctx->pc = 0x36BB94u;
            // 0x36bb94: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x36BB98u;
        goto label_36bb98;
    }
    ctx->pc = 0x36BB90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36BB90u;
            // 0x36bb94: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36BB98u;
label_36bb98:
    // 0x36bb98: 0x0  nop
    ctx->pc = 0x36bb98u;
    // NOP
label_36bb9c:
    // 0x36bb9c: 0x0  nop
    ctx->pc = 0x36bb9cu;
    // NOP
}
