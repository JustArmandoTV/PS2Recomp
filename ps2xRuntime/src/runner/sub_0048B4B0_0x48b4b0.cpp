#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048B4B0
// Address: 0x48b4b0 - 0x48bc40
void sub_0048B4B0_0x48b4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B4B0_0x48b4b0");
#endif

    switch (ctx->pc) {
        case 0x48b4b0u: goto label_48b4b0;
        case 0x48b4b4u: goto label_48b4b4;
        case 0x48b4b8u: goto label_48b4b8;
        case 0x48b4bcu: goto label_48b4bc;
        case 0x48b4c0u: goto label_48b4c0;
        case 0x48b4c4u: goto label_48b4c4;
        case 0x48b4c8u: goto label_48b4c8;
        case 0x48b4ccu: goto label_48b4cc;
        case 0x48b4d0u: goto label_48b4d0;
        case 0x48b4d4u: goto label_48b4d4;
        case 0x48b4d8u: goto label_48b4d8;
        case 0x48b4dcu: goto label_48b4dc;
        case 0x48b4e0u: goto label_48b4e0;
        case 0x48b4e4u: goto label_48b4e4;
        case 0x48b4e8u: goto label_48b4e8;
        case 0x48b4ecu: goto label_48b4ec;
        case 0x48b4f0u: goto label_48b4f0;
        case 0x48b4f4u: goto label_48b4f4;
        case 0x48b4f8u: goto label_48b4f8;
        case 0x48b4fcu: goto label_48b4fc;
        case 0x48b500u: goto label_48b500;
        case 0x48b504u: goto label_48b504;
        case 0x48b508u: goto label_48b508;
        case 0x48b50cu: goto label_48b50c;
        case 0x48b510u: goto label_48b510;
        case 0x48b514u: goto label_48b514;
        case 0x48b518u: goto label_48b518;
        case 0x48b51cu: goto label_48b51c;
        case 0x48b520u: goto label_48b520;
        case 0x48b524u: goto label_48b524;
        case 0x48b528u: goto label_48b528;
        case 0x48b52cu: goto label_48b52c;
        case 0x48b530u: goto label_48b530;
        case 0x48b534u: goto label_48b534;
        case 0x48b538u: goto label_48b538;
        case 0x48b53cu: goto label_48b53c;
        case 0x48b540u: goto label_48b540;
        case 0x48b544u: goto label_48b544;
        case 0x48b548u: goto label_48b548;
        case 0x48b54cu: goto label_48b54c;
        case 0x48b550u: goto label_48b550;
        case 0x48b554u: goto label_48b554;
        case 0x48b558u: goto label_48b558;
        case 0x48b55cu: goto label_48b55c;
        case 0x48b560u: goto label_48b560;
        case 0x48b564u: goto label_48b564;
        case 0x48b568u: goto label_48b568;
        case 0x48b56cu: goto label_48b56c;
        case 0x48b570u: goto label_48b570;
        case 0x48b574u: goto label_48b574;
        case 0x48b578u: goto label_48b578;
        case 0x48b57cu: goto label_48b57c;
        case 0x48b580u: goto label_48b580;
        case 0x48b584u: goto label_48b584;
        case 0x48b588u: goto label_48b588;
        case 0x48b58cu: goto label_48b58c;
        case 0x48b590u: goto label_48b590;
        case 0x48b594u: goto label_48b594;
        case 0x48b598u: goto label_48b598;
        case 0x48b59cu: goto label_48b59c;
        case 0x48b5a0u: goto label_48b5a0;
        case 0x48b5a4u: goto label_48b5a4;
        case 0x48b5a8u: goto label_48b5a8;
        case 0x48b5acu: goto label_48b5ac;
        case 0x48b5b0u: goto label_48b5b0;
        case 0x48b5b4u: goto label_48b5b4;
        case 0x48b5b8u: goto label_48b5b8;
        case 0x48b5bcu: goto label_48b5bc;
        case 0x48b5c0u: goto label_48b5c0;
        case 0x48b5c4u: goto label_48b5c4;
        case 0x48b5c8u: goto label_48b5c8;
        case 0x48b5ccu: goto label_48b5cc;
        case 0x48b5d0u: goto label_48b5d0;
        case 0x48b5d4u: goto label_48b5d4;
        case 0x48b5d8u: goto label_48b5d8;
        case 0x48b5dcu: goto label_48b5dc;
        case 0x48b5e0u: goto label_48b5e0;
        case 0x48b5e4u: goto label_48b5e4;
        case 0x48b5e8u: goto label_48b5e8;
        case 0x48b5ecu: goto label_48b5ec;
        case 0x48b5f0u: goto label_48b5f0;
        case 0x48b5f4u: goto label_48b5f4;
        case 0x48b5f8u: goto label_48b5f8;
        case 0x48b5fcu: goto label_48b5fc;
        case 0x48b600u: goto label_48b600;
        case 0x48b604u: goto label_48b604;
        case 0x48b608u: goto label_48b608;
        case 0x48b60cu: goto label_48b60c;
        case 0x48b610u: goto label_48b610;
        case 0x48b614u: goto label_48b614;
        case 0x48b618u: goto label_48b618;
        case 0x48b61cu: goto label_48b61c;
        case 0x48b620u: goto label_48b620;
        case 0x48b624u: goto label_48b624;
        case 0x48b628u: goto label_48b628;
        case 0x48b62cu: goto label_48b62c;
        case 0x48b630u: goto label_48b630;
        case 0x48b634u: goto label_48b634;
        case 0x48b638u: goto label_48b638;
        case 0x48b63cu: goto label_48b63c;
        case 0x48b640u: goto label_48b640;
        case 0x48b644u: goto label_48b644;
        case 0x48b648u: goto label_48b648;
        case 0x48b64cu: goto label_48b64c;
        case 0x48b650u: goto label_48b650;
        case 0x48b654u: goto label_48b654;
        case 0x48b658u: goto label_48b658;
        case 0x48b65cu: goto label_48b65c;
        case 0x48b660u: goto label_48b660;
        case 0x48b664u: goto label_48b664;
        case 0x48b668u: goto label_48b668;
        case 0x48b66cu: goto label_48b66c;
        case 0x48b670u: goto label_48b670;
        case 0x48b674u: goto label_48b674;
        case 0x48b678u: goto label_48b678;
        case 0x48b67cu: goto label_48b67c;
        case 0x48b680u: goto label_48b680;
        case 0x48b684u: goto label_48b684;
        case 0x48b688u: goto label_48b688;
        case 0x48b68cu: goto label_48b68c;
        case 0x48b690u: goto label_48b690;
        case 0x48b694u: goto label_48b694;
        case 0x48b698u: goto label_48b698;
        case 0x48b69cu: goto label_48b69c;
        case 0x48b6a0u: goto label_48b6a0;
        case 0x48b6a4u: goto label_48b6a4;
        case 0x48b6a8u: goto label_48b6a8;
        case 0x48b6acu: goto label_48b6ac;
        case 0x48b6b0u: goto label_48b6b0;
        case 0x48b6b4u: goto label_48b6b4;
        case 0x48b6b8u: goto label_48b6b8;
        case 0x48b6bcu: goto label_48b6bc;
        case 0x48b6c0u: goto label_48b6c0;
        case 0x48b6c4u: goto label_48b6c4;
        case 0x48b6c8u: goto label_48b6c8;
        case 0x48b6ccu: goto label_48b6cc;
        case 0x48b6d0u: goto label_48b6d0;
        case 0x48b6d4u: goto label_48b6d4;
        case 0x48b6d8u: goto label_48b6d8;
        case 0x48b6dcu: goto label_48b6dc;
        case 0x48b6e0u: goto label_48b6e0;
        case 0x48b6e4u: goto label_48b6e4;
        case 0x48b6e8u: goto label_48b6e8;
        case 0x48b6ecu: goto label_48b6ec;
        case 0x48b6f0u: goto label_48b6f0;
        case 0x48b6f4u: goto label_48b6f4;
        case 0x48b6f8u: goto label_48b6f8;
        case 0x48b6fcu: goto label_48b6fc;
        case 0x48b700u: goto label_48b700;
        case 0x48b704u: goto label_48b704;
        case 0x48b708u: goto label_48b708;
        case 0x48b70cu: goto label_48b70c;
        case 0x48b710u: goto label_48b710;
        case 0x48b714u: goto label_48b714;
        case 0x48b718u: goto label_48b718;
        case 0x48b71cu: goto label_48b71c;
        case 0x48b720u: goto label_48b720;
        case 0x48b724u: goto label_48b724;
        case 0x48b728u: goto label_48b728;
        case 0x48b72cu: goto label_48b72c;
        case 0x48b730u: goto label_48b730;
        case 0x48b734u: goto label_48b734;
        case 0x48b738u: goto label_48b738;
        case 0x48b73cu: goto label_48b73c;
        case 0x48b740u: goto label_48b740;
        case 0x48b744u: goto label_48b744;
        case 0x48b748u: goto label_48b748;
        case 0x48b74cu: goto label_48b74c;
        case 0x48b750u: goto label_48b750;
        case 0x48b754u: goto label_48b754;
        case 0x48b758u: goto label_48b758;
        case 0x48b75cu: goto label_48b75c;
        case 0x48b760u: goto label_48b760;
        case 0x48b764u: goto label_48b764;
        case 0x48b768u: goto label_48b768;
        case 0x48b76cu: goto label_48b76c;
        case 0x48b770u: goto label_48b770;
        case 0x48b774u: goto label_48b774;
        case 0x48b778u: goto label_48b778;
        case 0x48b77cu: goto label_48b77c;
        case 0x48b780u: goto label_48b780;
        case 0x48b784u: goto label_48b784;
        case 0x48b788u: goto label_48b788;
        case 0x48b78cu: goto label_48b78c;
        case 0x48b790u: goto label_48b790;
        case 0x48b794u: goto label_48b794;
        case 0x48b798u: goto label_48b798;
        case 0x48b79cu: goto label_48b79c;
        case 0x48b7a0u: goto label_48b7a0;
        case 0x48b7a4u: goto label_48b7a4;
        case 0x48b7a8u: goto label_48b7a8;
        case 0x48b7acu: goto label_48b7ac;
        case 0x48b7b0u: goto label_48b7b0;
        case 0x48b7b4u: goto label_48b7b4;
        case 0x48b7b8u: goto label_48b7b8;
        case 0x48b7bcu: goto label_48b7bc;
        case 0x48b7c0u: goto label_48b7c0;
        case 0x48b7c4u: goto label_48b7c4;
        case 0x48b7c8u: goto label_48b7c8;
        case 0x48b7ccu: goto label_48b7cc;
        case 0x48b7d0u: goto label_48b7d0;
        case 0x48b7d4u: goto label_48b7d4;
        case 0x48b7d8u: goto label_48b7d8;
        case 0x48b7dcu: goto label_48b7dc;
        case 0x48b7e0u: goto label_48b7e0;
        case 0x48b7e4u: goto label_48b7e4;
        case 0x48b7e8u: goto label_48b7e8;
        case 0x48b7ecu: goto label_48b7ec;
        case 0x48b7f0u: goto label_48b7f0;
        case 0x48b7f4u: goto label_48b7f4;
        case 0x48b7f8u: goto label_48b7f8;
        case 0x48b7fcu: goto label_48b7fc;
        case 0x48b800u: goto label_48b800;
        case 0x48b804u: goto label_48b804;
        case 0x48b808u: goto label_48b808;
        case 0x48b80cu: goto label_48b80c;
        case 0x48b810u: goto label_48b810;
        case 0x48b814u: goto label_48b814;
        case 0x48b818u: goto label_48b818;
        case 0x48b81cu: goto label_48b81c;
        case 0x48b820u: goto label_48b820;
        case 0x48b824u: goto label_48b824;
        case 0x48b828u: goto label_48b828;
        case 0x48b82cu: goto label_48b82c;
        case 0x48b830u: goto label_48b830;
        case 0x48b834u: goto label_48b834;
        case 0x48b838u: goto label_48b838;
        case 0x48b83cu: goto label_48b83c;
        case 0x48b840u: goto label_48b840;
        case 0x48b844u: goto label_48b844;
        case 0x48b848u: goto label_48b848;
        case 0x48b84cu: goto label_48b84c;
        case 0x48b850u: goto label_48b850;
        case 0x48b854u: goto label_48b854;
        case 0x48b858u: goto label_48b858;
        case 0x48b85cu: goto label_48b85c;
        case 0x48b860u: goto label_48b860;
        case 0x48b864u: goto label_48b864;
        case 0x48b868u: goto label_48b868;
        case 0x48b86cu: goto label_48b86c;
        case 0x48b870u: goto label_48b870;
        case 0x48b874u: goto label_48b874;
        case 0x48b878u: goto label_48b878;
        case 0x48b87cu: goto label_48b87c;
        case 0x48b880u: goto label_48b880;
        case 0x48b884u: goto label_48b884;
        case 0x48b888u: goto label_48b888;
        case 0x48b88cu: goto label_48b88c;
        case 0x48b890u: goto label_48b890;
        case 0x48b894u: goto label_48b894;
        case 0x48b898u: goto label_48b898;
        case 0x48b89cu: goto label_48b89c;
        case 0x48b8a0u: goto label_48b8a0;
        case 0x48b8a4u: goto label_48b8a4;
        case 0x48b8a8u: goto label_48b8a8;
        case 0x48b8acu: goto label_48b8ac;
        case 0x48b8b0u: goto label_48b8b0;
        case 0x48b8b4u: goto label_48b8b4;
        case 0x48b8b8u: goto label_48b8b8;
        case 0x48b8bcu: goto label_48b8bc;
        case 0x48b8c0u: goto label_48b8c0;
        case 0x48b8c4u: goto label_48b8c4;
        case 0x48b8c8u: goto label_48b8c8;
        case 0x48b8ccu: goto label_48b8cc;
        case 0x48b8d0u: goto label_48b8d0;
        case 0x48b8d4u: goto label_48b8d4;
        case 0x48b8d8u: goto label_48b8d8;
        case 0x48b8dcu: goto label_48b8dc;
        case 0x48b8e0u: goto label_48b8e0;
        case 0x48b8e4u: goto label_48b8e4;
        case 0x48b8e8u: goto label_48b8e8;
        case 0x48b8ecu: goto label_48b8ec;
        case 0x48b8f0u: goto label_48b8f0;
        case 0x48b8f4u: goto label_48b8f4;
        case 0x48b8f8u: goto label_48b8f8;
        case 0x48b8fcu: goto label_48b8fc;
        case 0x48b900u: goto label_48b900;
        case 0x48b904u: goto label_48b904;
        case 0x48b908u: goto label_48b908;
        case 0x48b90cu: goto label_48b90c;
        case 0x48b910u: goto label_48b910;
        case 0x48b914u: goto label_48b914;
        case 0x48b918u: goto label_48b918;
        case 0x48b91cu: goto label_48b91c;
        case 0x48b920u: goto label_48b920;
        case 0x48b924u: goto label_48b924;
        case 0x48b928u: goto label_48b928;
        case 0x48b92cu: goto label_48b92c;
        case 0x48b930u: goto label_48b930;
        case 0x48b934u: goto label_48b934;
        case 0x48b938u: goto label_48b938;
        case 0x48b93cu: goto label_48b93c;
        case 0x48b940u: goto label_48b940;
        case 0x48b944u: goto label_48b944;
        case 0x48b948u: goto label_48b948;
        case 0x48b94cu: goto label_48b94c;
        case 0x48b950u: goto label_48b950;
        case 0x48b954u: goto label_48b954;
        case 0x48b958u: goto label_48b958;
        case 0x48b95cu: goto label_48b95c;
        case 0x48b960u: goto label_48b960;
        case 0x48b964u: goto label_48b964;
        case 0x48b968u: goto label_48b968;
        case 0x48b96cu: goto label_48b96c;
        case 0x48b970u: goto label_48b970;
        case 0x48b974u: goto label_48b974;
        case 0x48b978u: goto label_48b978;
        case 0x48b97cu: goto label_48b97c;
        case 0x48b980u: goto label_48b980;
        case 0x48b984u: goto label_48b984;
        case 0x48b988u: goto label_48b988;
        case 0x48b98cu: goto label_48b98c;
        case 0x48b990u: goto label_48b990;
        case 0x48b994u: goto label_48b994;
        case 0x48b998u: goto label_48b998;
        case 0x48b99cu: goto label_48b99c;
        case 0x48b9a0u: goto label_48b9a0;
        case 0x48b9a4u: goto label_48b9a4;
        case 0x48b9a8u: goto label_48b9a8;
        case 0x48b9acu: goto label_48b9ac;
        case 0x48b9b0u: goto label_48b9b0;
        case 0x48b9b4u: goto label_48b9b4;
        case 0x48b9b8u: goto label_48b9b8;
        case 0x48b9bcu: goto label_48b9bc;
        case 0x48b9c0u: goto label_48b9c0;
        case 0x48b9c4u: goto label_48b9c4;
        case 0x48b9c8u: goto label_48b9c8;
        case 0x48b9ccu: goto label_48b9cc;
        case 0x48b9d0u: goto label_48b9d0;
        case 0x48b9d4u: goto label_48b9d4;
        case 0x48b9d8u: goto label_48b9d8;
        case 0x48b9dcu: goto label_48b9dc;
        case 0x48b9e0u: goto label_48b9e0;
        case 0x48b9e4u: goto label_48b9e4;
        case 0x48b9e8u: goto label_48b9e8;
        case 0x48b9ecu: goto label_48b9ec;
        case 0x48b9f0u: goto label_48b9f0;
        case 0x48b9f4u: goto label_48b9f4;
        case 0x48b9f8u: goto label_48b9f8;
        case 0x48b9fcu: goto label_48b9fc;
        case 0x48ba00u: goto label_48ba00;
        case 0x48ba04u: goto label_48ba04;
        case 0x48ba08u: goto label_48ba08;
        case 0x48ba0cu: goto label_48ba0c;
        case 0x48ba10u: goto label_48ba10;
        case 0x48ba14u: goto label_48ba14;
        case 0x48ba18u: goto label_48ba18;
        case 0x48ba1cu: goto label_48ba1c;
        case 0x48ba20u: goto label_48ba20;
        case 0x48ba24u: goto label_48ba24;
        case 0x48ba28u: goto label_48ba28;
        case 0x48ba2cu: goto label_48ba2c;
        case 0x48ba30u: goto label_48ba30;
        case 0x48ba34u: goto label_48ba34;
        case 0x48ba38u: goto label_48ba38;
        case 0x48ba3cu: goto label_48ba3c;
        case 0x48ba40u: goto label_48ba40;
        case 0x48ba44u: goto label_48ba44;
        case 0x48ba48u: goto label_48ba48;
        case 0x48ba4cu: goto label_48ba4c;
        case 0x48ba50u: goto label_48ba50;
        case 0x48ba54u: goto label_48ba54;
        case 0x48ba58u: goto label_48ba58;
        case 0x48ba5cu: goto label_48ba5c;
        case 0x48ba60u: goto label_48ba60;
        case 0x48ba64u: goto label_48ba64;
        case 0x48ba68u: goto label_48ba68;
        case 0x48ba6cu: goto label_48ba6c;
        case 0x48ba70u: goto label_48ba70;
        case 0x48ba74u: goto label_48ba74;
        case 0x48ba78u: goto label_48ba78;
        case 0x48ba7cu: goto label_48ba7c;
        case 0x48ba80u: goto label_48ba80;
        case 0x48ba84u: goto label_48ba84;
        case 0x48ba88u: goto label_48ba88;
        case 0x48ba8cu: goto label_48ba8c;
        case 0x48ba90u: goto label_48ba90;
        case 0x48ba94u: goto label_48ba94;
        case 0x48ba98u: goto label_48ba98;
        case 0x48ba9cu: goto label_48ba9c;
        case 0x48baa0u: goto label_48baa0;
        case 0x48baa4u: goto label_48baa4;
        case 0x48baa8u: goto label_48baa8;
        case 0x48baacu: goto label_48baac;
        case 0x48bab0u: goto label_48bab0;
        case 0x48bab4u: goto label_48bab4;
        case 0x48bab8u: goto label_48bab8;
        case 0x48babcu: goto label_48babc;
        case 0x48bac0u: goto label_48bac0;
        case 0x48bac4u: goto label_48bac4;
        case 0x48bac8u: goto label_48bac8;
        case 0x48baccu: goto label_48bacc;
        case 0x48bad0u: goto label_48bad0;
        case 0x48bad4u: goto label_48bad4;
        case 0x48bad8u: goto label_48bad8;
        case 0x48badcu: goto label_48badc;
        case 0x48bae0u: goto label_48bae0;
        case 0x48bae4u: goto label_48bae4;
        case 0x48bae8u: goto label_48bae8;
        case 0x48baecu: goto label_48baec;
        case 0x48baf0u: goto label_48baf0;
        case 0x48baf4u: goto label_48baf4;
        case 0x48baf8u: goto label_48baf8;
        case 0x48bafcu: goto label_48bafc;
        case 0x48bb00u: goto label_48bb00;
        case 0x48bb04u: goto label_48bb04;
        case 0x48bb08u: goto label_48bb08;
        case 0x48bb0cu: goto label_48bb0c;
        case 0x48bb10u: goto label_48bb10;
        case 0x48bb14u: goto label_48bb14;
        case 0x48bb18u: goto label_48bb18;
        case 0x48bb1cu: goto label_48bb1c;
        case 0x48bb20u: goto label_48bb20;
        case 0x48bb24u: goto label_48bb24;
        case 0x48bb28u: goto label_48bb28;
        case 0x48bb2cu: goto label_48bb2c;
        case 0x48bb30u: goto label_48bb30;
        case 0x48bb34u: goto label_48bb34;
        case 0x48bb38u: goto label_48bb38;
        case 0x48bb3cu: goto label_48bb3c;
        case 0x48bb40u: goto label_48bb40;
        case 0x48bb44u: goto label_48bb44;
        case 0x48bb48u: goto label_48bb48;
        case 0x48bb4cu: goto label_48bb4c;
        case 0x48bb50u: goto label_48bb50;
        case 0x48bb54u: goto label_48bb54;
        case 0x48bb58u: goto label_48bb58;
        case 0x48bb5cu: goto label_48bb5c;
        case 0x48bb60u: goto label_48bb60;
        case 0x48bb64u: goto label_48bb64;
        case 0x48bb68u: goto label_48bb68;
        case 0x48bb6cu: goto label_48bb6c;
        case 0x48bb70u: goto label_48bb70;
        case 0x48bb74u: goto label_48bb74;
        case 0x48bb78u: goto label_48bb78;
        case 0x48bb7cu: goto label_48bb7c;
        case 0x48bb80u: goto label_48bb80;
        case 0x48bb84u: goto label_48bb84;
        case 0x48bb88u: goto label_48bb88;
        case 0x48bb8cu: goto label_48bb8c;
        case 0x48bb90u: goto label_48bb90;
        case 0x48bb94u: goto label_48bb94;
        case 0x48bb98u: goto label_48bb98;
        case 0x48bb9cu: goto label_48bb9c;
        case 0x48bba0u: goto label_48bba0;
        case 0x48bba4u: goto label_48bba4;
        case 0x48bba8u: goto label_48bba8;
        case 0x48bbacu: goto label_48bbac;
        case 0x48bbb0u: goto label_48bbb0;
        case 0x48bbb4u: goto label_48bbb4;
        case 0x48bbb8u: goto label_48bbb8;
        case 0x48bbbcu: goto label_48bbbc;
        case 0x48bbc0u: goto label_48bbc0;
        case 0x48bbc4u: goto label_48bbc4;
        case 0x48bbc8u: goto label_48bbc8;
        case 0x48bbccu: goto label_48bbcc;
        case 0x48bbd0u: goto label_48bbd0;
        case 0x48bbd4u: goto label_48bbd4;
        case 0x48bbd8u: goto label_48bbd8;
        case 0x48bbdcu: goto label_48bbdc;
        case 0x48bbe0u: goto label_48bbe0;
        case 0x48bbe4u: goto label_48bbe4;
        case 0x48bbe8u: goto label_48bbe8;
        case 0x48bbecu: goto label_48bbec;
        case 0x48bbf0u: goto label_48bbf0;
        case 0x48bbf4u: goto label_48bbf4;
        case 0x48bbf8u: goto label_48bbf8;
        case 0x48bbfcu: goto label_48bbfc;
        case 0x48bc00u: goto label_48bc00;
        case 0x48bc04u: goto label_48bc04;
        case 0x48bc08u: goto label_48bc08;
        case 0x48bc0cu: goto label_48bc0c;
        case 0x48bc10u: goto label_48bc10;
        case 0x48bc14u: goto label_48bc14;
        case 0x48bc18u: goto label_48bc18;
        case 0x48bc1cu: goto label_48bc1c;
        case 0x48bc20u: goto label_48bc20;
        case 0x48bc24u: goto label_48bc24;
        case 0x48bc28u: goto label_48bc28;
        case 0x48bc2cu: goto label_48bc2c;
        case 0x48bc30u: goto label_48bc30;
        case 0x48bc34u: goto label_48bc34;
        case 0x48bc38u: goto label_48bc38;
        case 0x48bc3cu: goto label_48bc3c;
        default: break;
    }

    ctx->pc = 0x48b4b0u;

label_48b4b0:
    // 0x48b4b0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x48b4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_48b4b4:
    // 0x48b4b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x48b4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_48b4b8:
    // 0x48b4b8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x48b4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_48b4bc:
    // 0x48b4bc: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x48b4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_48b4c0:
    // 0x48b4c0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x48b4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_48b4c4:
    // 0x48b4c4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x48b4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_48b4c8:
    // 0x48b4c8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x48b4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_48b4cc:
    // 0x48b4cc: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x48b4ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_48b4d0:
    // 0x48b4d0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x48b4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_48b4d4:
    // 0x48b4d4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x48b4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_48b4d8:
    // 0x48b4d8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x48b4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_48b4dc:
    // 0x48b4dc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x48b4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_48b4e0:
    // 0x48b4e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x48b4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_48b4e4:
    // 0x48b4e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x48b4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_48b4e8:
    // 0x48b4e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x48b4e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_48b4ec:
    // 0x48b4ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x48b4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_48b4f0:
    // 0x48b4f0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x48b4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_48b4f4:
    // 0x48b4f4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x48b4f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_48b4f8:
    // 0x48b4f8: 0xafa4012c  sw          $a0, 0x12C($sp)
    ctx->pc = 0x48b4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 4));
label_48b4fc:
    // 0x48b4fc: 0x8c5589e8  lw          $s5, -0x7618($v0)
    ctx->pc = 0x48b4fcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_48b500:
    // 0x48b500: 0x24a5ff70  addiu       $a1, $a1, -0x90
    ctx->pc = 0x48b500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967152));
label_48b504:
    // 0x48b504: 0x8c7ed120  lw          $fp, -0x2EE0($v1)
    ctx->pc = 0x48b504u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_48b508:
    // 0x48b508: 0xa3a00110  sb          $zero, 0x110($sp)
    ctx->pc = 0x48b508u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 272), (uint8_t)GPR_U32(ctx, 0));
label_48b50c:
    // 0x48b50c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x48b50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_48b510:
    // 0x48b510: 0x8c470e80  lw          $a3, 0xE80($v0)
    ctx->pc = 0x48b510u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_48b514:
    // 0x48b514: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x48b514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_48b518:
    // 0x48b518: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x48b518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_48b51c:
    // 0x48b51c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x48b51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_48b520:
    // 0x48b520: 0x8cf10780  lw          $s1, 0x780($a3)
    ctx->pc = 0x48b520u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1920)));
label_48b524:
    // 0x48b524: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x48b524u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48b528:
    // 0x48b528: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x48b528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_48b52c:
    // 0x48b52c: 0xc6140004  lwc1        $f20, 0x4($s0)
    ctx->pc = 0x48b52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_48b530:
    // 0x48b530: 0xc04a508  jal         func_129420
label_48b534:
    if (ctx->pc == 0x48B534u) {
        ctx->pc = 0x48B534u;
            // 0x48b534: 0x2614000c  addiu       $s4, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = 0x48B538u;
        goto label_48b538;
    }
    ctx->pc = 0x48B530u;
    SET_GPR_U32(ctx, 31, 0x48B538u);
    ctx->pc = 0x48B534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48B530u;
            // 0x48b534: 0x2614000c  addiu       $s4, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B538u; }
        if (ctx->pc != 0x48B538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B538u; }
        if (ctx->pc != 0x48B538u) { return; }
    }
    ctx->pc = 0x48B538u;
label_48b538:
    // 0x48b538: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x48b538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_48b53c:
    // 0x48b53c: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x48b53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_48b540:
    // 0x48b540: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x48b540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_48b544:
    // 0x48b544: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x48b544u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48b548:
    // 0x48b548: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48b548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48b54c:
    // 0x48b54c: 0x8fb2012c  lw          $s2, 0x12C($sp)
    ctx->pc = 0x48b54cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_48b550:
    // 0x48b550: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x48b550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_48b554:
    // 0x48b554: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x48b554u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48b558:
    // 0x48b558: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x48b558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_48b55c:
    // 0x48b55c: 0x401027  not         $v0, $v0
    ctx->pc = 0x48b55cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_48b560:
    // 0x48b560: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x48b560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_48b564:
    // 0x48b564: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x48b564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_48b568:
    // 0x48b568: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x48b568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_48b56c:
    // 0x48b56c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x48b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_48b570:
    // 0x48b570: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48b570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48b574:
    // 0x48b574: 0xc04cc34  jal         func_1330D0
label_48b578:
    if (ctx->pc == 0x48B578u) {
        ctx->pc = 0x48B578u;
            // 0x48b578: 0x24450200  addiu       $a1, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->pc = 0x48B57Cu;
        goto label_48b57c;
    }
    ctx->pc = 0x48B574u;
    SET_GPR_U32(ctx, 31, 0x48B57Cu);
    ctx->pc = 0x48B578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48B574u;
            // 0x48b578: 0x24450200  addiu       $a1, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B57Cu; }
        if (ctx->pc != 0x48B57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B57Cu; }
        if (ctx->pc != 0x48B57Cu) { return; }
    }
    ctx->pc = 0x48B57Cu;
label_48b57c:
    // 0x48b57c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x48b57cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_48b580:
    // 0x48b580: 0x45000047  bc1f        . + 4 + (0x47 << 2)
label_48b584:
    if (ctx->pc == 0x48B584u) {
        ctx->pc = 0x48B588u;
        goto label_48b588;
    }
    ctx->pc = 0x48B580u;
    {
        const bool branch_taken_0x48b580 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x48b580) {
            ctx->pc = 0x48B6A0u;
            goto label_48b6a0;
        }
    }
    ctx->pc = 0x48B588u;
label_48b588:
    // 0x48b588: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x48b588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_48b58c:
    // 0x48b58c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x48b58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_48b590:
    // 0x48b590: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x48b590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_48b594:
    // 0x48b594: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
label_48b598:
    if (ctx->pc == 0x48B598u) {
        ctx->pc = 0x48B59Cu;
        goto label_48b59c;
    }
    ctx->pc = 0x48B594u;
    {
        const bool branch_taken_0x48b594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48b594) {
            ctx->pc = 0x48B658u;
            goto label_48b658;
        }
    }
    ctx->pc = 0x48B59Cu;
label_48b59c:
    // 0x48b59c: 0x2e210003  sltiu       $at, $s1, 0x3
    ctx->pc = 0x48b59cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_48b5a0:
    // 0x48b5a0: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
label_48b5a4:
    if (ctx->pc == 0x48B5A4u) {
        ctx->pc = 0x48B5A8u;
        goto label_48b5a8;
    }
    ctx->pc = 0x48B5A0u;
    {
        const bool branch_taken_0x48b5a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b5a0) {
            ctx->pc = 0x48B620u;
            goto label_48b620;
        }
    }
    ctx->pc = 0x48B5A8u;
label_48b5a8:
    // 0x48b5a8: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x48b5a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_48b5ac:
    // 0x48b5ac: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x48b5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_48b5b0:
    // 0x48b5b0: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x48b5b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_48b5b4:
    // 0x48b5b4: 0x320f809  jalr        $t9
label_48b5b8:
    if (ctx->pc == 0x48B5B8u) {
        ctx->pc = 0x48B5B8u;
            // 0x48b5b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48B5BCu;
        goto label_48b5bc;
    }
    ctx->pc = 0x48B5B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48B5BCu);
        ctx->pc = 0x48B5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B5B4u;
            // 0x48b5b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48B5BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48B5BCu; }
            if (ctx->pc != 0x48B5BCu) { return; }
        }
        }
    }
    ctx->pc = 0x48B5BCu;
label_48b5bc:
    // 0x48b5bc: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x48b5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_48b5c0:
    // 0x48b5c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x48b5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48b5c4:
    // 0x48b5c4: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x48b5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_48b5c8:
    // 0x48b5c8: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x48b5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_48b5cc:
    // 0x48b5cc: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x48b5ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_48b5d0:
    // 0x48b5d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x48b5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_48b5d4:
    // 0x48b5d4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x48b5d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_48b5d8:
    // 0x48b5d8: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x48b5d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_48b5dc:
    // 0x48b5dc: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x48b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_48b5e0:
    // 0x48b5e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48b5e4:
    // 0x48b5e4: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x48b5e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_48b5e8:
    // 0x48b5e8: 0x320f809  jalr        $t9
label_48b5ec:
    if (ctx->pc == 0x48B5ECu) {
        ctx->pc = 0x48B5ECu;
            // 0x48b5ec: 0x24470010  addiu       $a3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x48B5F0u;
        goto label_48b5f0;
    }
    ctx->pc = 0x48B5E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48B5F0u);
        ctx->pc = 0x48B5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B5E8u;
            // 0x48b5ec: 0x24470010  addiu       $a3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48B5F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48B5F0u; }
            if (ctx->pc != 0x48B5F0u) { return; }
        }
        }
    }
    ctx->pc = 0x48B5F0u;
label_48b5f0:
    // 0x48b5f0: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x48b5f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
label_48b5f4:
    // 0x48b5f4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_48b5f8:
    if (ctx->pc == 0x48B5F8u) {
        ctx->pc = 0x48B5FCu;
        goto label_48b5fc;
    }
    ctx->pc = 0x48B5F4u;
    {
        const bool branch_taken_0x48b5f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48b5f4) {
            ctx->pc = 0x48B608u;
            goto label_48b608;
        }
    }
    ctx->pc = 0x48B5FCu;
label_48b5fc:
    // 0x48b5fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x48b5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48b600:
    // 0x48b600: 0x1000003b  b           . + 4 + (0x3B << 2)
label_48b604:
    if (ctx->pc == 0x48B604u) {
        ctx->pc = 0x48B604u;
            // 0x48b604: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x48B608u;
        goto label_48b608;
    }
    ctx->pc = 0x48B600u;
    {
        const bool branch_taken_0x48b600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B600u;
            // 0x48b604: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b600) {
            ctx->pc = 0x48B6F0u;
            goto label_48b6f0;
        }
    }
    ctx->pc = 0x48B608u;
label_48b608:
    // 0x48b608: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x48b608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_48b60c:
    // 0x48b60c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x48b60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_48b610:
    // 0x48b610: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x48b610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_48b614:
    // 0x48b614: 0x10000036  b           . + 4 + (0x36 << 2)
label_48b618:
    if (ctx->pc == 0x48B618u) {
        ctx->pc = 0x48B618u;
            // 0x48b618: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x48B61Cu;
        goto label_48b61c;
    }
    ctx->pc = 0x48B614u;
    {
        const bool branch_taken_0x48b614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B614u;
            // 0x48b618: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b614) {
            ctx->pc = 0x48B6F0u;
            goto label_48b6f0;
        }
    }
    ctx->pc = 0x48B61Cu;
label_48b61c:
    // 0x48b61c: 0x0  nop
    ctx->pc = 0x48b61cu;
    // NOP
label_48b620:
    // 0x48b620: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x48b620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_48b624:
    // 0x48b624: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x48b624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_48b628:
    // 0x48b628: 0xa0530004  sb          $s3, 0x4($v0)
    ctx->pc = 0x48b628u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 19));
label_48b62c:
    // 0x48b62c: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x48b62cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_48b630:
    // 0x48b630: 0xa3a20110  sb          $v0, 0x110($sp)
    ctx->pc = 0x48b630u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 272), (uint8_t)GPR_U32(ctx, 2));
label_48b634:
    // 0x48b634: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x48b634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_48b638:
    // 0x48b638: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x48b638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_48b63c:
    // 0x48b63c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48b640:
    // 0x48b640: 0xc04cc34  jal         func_1330D0
label_48b644:
    if (ctx->pc == 0x48B644u) {
        ctx->pc = 0x48B644u;
            // 0x48b644: 0x24450200  addiu       $a1, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->pc = 0x48B648u;
        goto label_48b648;
    }
    ctx->pc = 0x48B640u;
    SET_GPR_U32(ctx, 31, 0x48B648u);
    ctx->pc = 0x48B644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48B640u;
            // 0x48b644: 0x24450200  addiu       $a1, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B648u; }
        if (ctx->pc != 0x48B648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B648u; }
        if (ctx->pc != 0x48B648u) { return; }
    }
    ctx->pc = 0x48B648u;
label_48b648:
    // 0x48b648: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x48b648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_48b64c:
    // 0x48b64c: 0x10000028  b           . + 4 + (0x28 << 2)
label_48b650:
    if (ctx->pc == 0x48B650u) {
        ctx->pc = 0x48B650u;
            // 0x48b650: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x48B654u;
        goto label_48b654;
    }
    ctx->pc = 0x48B64Cu;
    {
        const bool branch_taken_0x48b64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B64Cu;
            // 0x48b650: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b64c) {
            ctx->pc = 0x48B6F0u;
            goto label_48b6f0;
        }
    }
    ctx->pc = 0x48B654u;
label_48b654:
    // 0x48b654: 0x0  nop
    ctx->pc = 0x48b654u;
    // NOP
label_48b658:
    // 0x48b658: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x48b658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_48b65c:
    // 0x48b65c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x48b65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_48b660:
    // 0x48b660: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48b660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_48b664:
    // 0x48b664: 0x10a30022  beq         $a1, $v1, . + 4 + (0x22 << 2)
label_48b668:
    if (ctx->pc == 0x48B668u) {
        ctx->pc = 0x48B66Cu;
        goto label_48b66c;
    }
    ctx->pc = 0x48B664u;
    {
        const bool branch_taken_0x48b664 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x48b664) {
            ctx->pc = 0x48B6F0u;
            goto label_48b6f0;
        }
    }
    ctx->pc = 0x48B66Cu;
label_48b66c:
    // 0x48b66c: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x48b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_48b670:
    // 0x48b670: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x48b670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_48b674:
    // 0x48b674: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x48b674u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_48b678:
    // 0x48b678: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x48b678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_48b67c:
    // 0x48b67c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x48b67cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_48b680:
    // 0x48b680: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x48b680u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_48b684:
    // 0x48b684: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x48b684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_48b688:
    // 0x48b688: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48b688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48b68c:
    // 0x48b68c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x48b68cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_48b690:
    // 0x48b690: 0x320f809  jalr        $t9
label_48b694:
    if (ctx->pc == 0x48B694u) {
        ctx->pc = 0x48B694u;
            // 0x48b694: 0x24470010  addiu       $a3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x48B698u;
        goto label_48b698;
    }
    ctx->pc = 0x48B690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48B698u);
        ctx->pc = 0x48B694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B690u;
            // 0x48b694: 0x24470010  addiu       $a3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48B698u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48B698u; }
            if (ctx->pc != 0x48B698u) { return; }
        }
        }
    }
    ctx->pc = 0x48B698u;
label_48b698:
    // 0x48b698: 0x10000015  b           . + 4 + (0x15 << 2)
label_48b69c:
    if (ctx->pc == 0x48B69Cu) {
        ctx->pc = 0x48B6A0u;
        goto label_48b6a0;
    }
    ctx->pc = 0x48B698u;
    {
        const bool branch_taken_0x48b698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b698) {
            ctx->pc = 0x48B6F0u;
            goto label_48b6f0;
        }
    }
    ctx->pc = 0x48B6A0u;
label_48b6a0:
    // 0x48b6a0: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x48b6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_48b6a4:
    // 0x48b6a4: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
label_48b6a8:
    if (ctx->pc == 0x48B6A8u) {
        ctx->pc = 0x48B6ACu;
        goto label_48b6ac;
    }
    ctx->pc = 0x48B6A4u;
    {
        const bool branch_taken_0x48b6a4 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x48b6a4) {
            ctx->pc = 0x48B6D8u;
            goto label_48b6d8;
        }
    }
    ctx->pc = 0x48B6ACu;
label_48b6ac:
    // 0x48b6ac: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x48b6acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_48b6b0:
    // 0x48b6b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48b6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_48b6b4:
    // 0x48b6b4: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
label_48b6b8:
    if (ctx->pc == 0x48B6B8u) {
        ctx->pc = 0x48B6BCu;
        goto label_48b6bc;
    }
    ctx->pc = 0x48B6B4u;
    {
        const bool branch_taken_0x48b6b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x48b6b4) {
            ctx->pc = 0x48B6D8u;
            goto label_48b6d8;
        }
    }
    ctx->pc = 0x48B6BCu;
label_48b6bc:
    // 0x48b6bc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x48b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_48b6c0:
    // 0x48b6c0: 0x8c4489e8  lw          $a0, -0x7618($v0)
    ctx->pc = 0x48b6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_48b6c4:
    // 0x48b6c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48b6c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48b6c8:
    // 0x48b6c8: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x48b6c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_48b6cc:
    // 0x48b6cc: 0x320f809  jalr        $t9
label_48b6d0:
    if (ctx->pc == 0x48B6D0u) {
        ctx->pc = 0x48B6D4u;
        goto label_48b6d4;
    }
    ctx->pc = 0x48B6CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48B6D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x48B6D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48B6D4u; }
            if (ctx->pc != 0x48B6D4u) { return; }
        }
        }
    }
    ctx->pc = 0x48B6D4u;
label_48b6d4:
    // 0x48b6d4: 0x0  nop
    ctx->pc = 0x48b6d4u;
    // NOP
label_48b6d8:
    // 0x48b6d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x48b6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48b6dc:
    // 0x48b6dc: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x48b6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_48b6e0:
    // 0x48b6e0: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x48b6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_48b6e4:
    // 0x48b6e4: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x48b6e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_48b6e8:
    // 0x48b6e8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x48b6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_48b6ec:
    // 0x48b6ec: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x48b6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_48b6f0:
    // 0x48b6f0: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x48b6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_48b6f4:
    // 0x48b6f4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x48b6f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_48b6f8:
    // 0x48b6f8: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x48b6f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_48b6fc:
    // 0x48b6fc: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x48b6fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_48b700:
    // 0x48b700: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x48b700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_48b704:
    // 0x48b704: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x48b704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_48b708:
    // 0x48b708: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x48b708u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_48b70c:
    // 0x48b70c: 0x1460ff95  bnez        $v1, . + 4 + (-0x6B << 2)
label_48b710:
    if (ctx->pc == 0x48B710u) {
        ctx->pc = 0x48B710u;
            // 0x48b710: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x48B714u;
        goto label_48b714;
    }
    ctx->pc = 0x48B70Cu;
    {
        const bool branch_taken_0x48b70c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48B710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B70Cu;
            // 0x48b710: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b70c) {
            ctx->pc = 0x48B564u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48b564;
        }
    }
    ctx->pc = 0x48B714u;
label_48b714:
    // 0x48b714: 0x93a30110  lbu         $v1, 0x110($sp)
    ctx->pc = 0x48b714u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 272)));
label_48b718:
    // 0x48b718: 0x10600075  beqz        $v1, . + 4 + (0x75 << 2)
label_48b71c:
    if (ctx->pc == 0x48B71Cu) {
        ctx->pc = 0x48B720u;
        goto label_48b720;
    }
    ctx->pc = 0x48B718u;
    {
        const bool branch_taken_0x48b718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b718) {
            ctx->pc = 0x48B8F0u;
            goto label_48b8f0;
        }
    }
    ctx->pc = 0x48B720u;
label_48b720:
    // 0x48b720: 0x2e230003  sltiu       $v1, $s1, 0x3
    ctx->pc = 0x48b720u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_48b724:
    // 0x48b724: 0x14600072  bnez        $v1, . + 4 + (0x72 << 2)
label_48b728:
    if (ctx->pc == 0x48B728u) {
        ctx->pc = 0x48B72Cu;
        goto label_48b72c;
    }
    ctx->pc = 0x48B724u;
    {
        const bool branch_taken_0x48b724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48b724) {
            ctx->pc = 0x48B8F0u;
            goto label_48b8f0;
        }
    }
    ctx->pc = 0x48B72Cu;
label_48b72c:
    // 0x48b72c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x48b72cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48b730:
    // 0x48b730: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x48b730u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48b734:
    // 0x48b734: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x48b734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48b738:
    // 0x48b738: 0x262bffff  addiu       $t3, $s1, -0x1
    ctx->pc = 0x48b738u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_48b73c:
    // 0x48b73c: 0xfd1821  addu        $v1, $a3, $sp
    ctx->pc = 0x48b73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
label_48b740:
    // 0x48b740: 0x25490001  addiu       $t1, $t2, 0x1
    ctx->pc = 0x48b740u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_48b744:
    // 0x48b744: 0x24660130  addiu       $a2, $v1, 0x130
    ctx->pc = 0x48b744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
label_48b748:
    // 0x48b748: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x48b748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_48b74c:
    // 0x48b74c: 0x24c50004  addiu       $a1, $a2, 0x4
    ctx->pc = 0x48b74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_48b750:
    // 0x48b750: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x48b750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_48b754:
    // 0x48b754: 0x24c40005  addiu       $a0, $a2, 0x5
    ctx->pc = 0x48b754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
label_48b758:
    // 0x48b758: 0x24680130  addiu       $t0, $v1, 0x130
    ctx->pc = 0x48b758u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
label_48b75c:
    // 0x48b75c: 0x0  nop
    ctx->pc = 0x48b75cu;
    // NOP
label_48b760:
    // 0x48b760: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x48b760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b764:
    // 0x48b764: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x48b764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48b768:
    // 0x48b768: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x48b768u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_48b76c:
    // 0x48b76c: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
label_48b770:
    if (ctx->pc == 0x48B770u) {
        ctx->pc = 0x48B774u;
        goto label_48b774;
    }
    ctx->pc = 0x48B76Cu;
    {
        const bool branch_taken_0x48b76c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x48b76c) {
            ctx->pc = 0x48B7E0u;
            goto label_48b7e0;
        }
    }
    ctx->pc = 0x48B774u;
label_48b774:
    // 0x48b774: 0x908e0000  lbu         $t6, 0x0($a0)
    ctx->pc = 0x48b774u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_48b778:
    // 0x48b778: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x48b778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b77c:
    // 0x48b77c: 0x908d0001  lbu         $t5, 0x1($a0)
    ctx->pc = 0x48b77cu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_48b780:
    // 0x48b780: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x48b780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48b784:
    // 0x48b784: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x48b784u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_48b788:
    // 0x48b788: 0x908c0002  lbu         $t4, 0x2($a0)
    ctx->pc = 0x48b788u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_48b78c:
    // 0x48b78c: 0xa3ae015d  sb          $t6, 0x15D($sp)
    ctx->pc = 0x48b78cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 349), (uint8_t)GPR_U32(ctx, 14));
label_48b790:
    // 0x48b790: 0xa3ad015e  sb          $t5, 0x15E($sp)
    ctx->pc = 0x48b790u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 350), (uint8_t)GPR_U32(ctx, 13));
label_48b794:
    // 0x48b794: 0xa3ac015f  sb          $t4, 0x15F($sp)
    ctx->pc = 0x48b794u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 351), (uint8_t)GPR_U32(ctx, 12));
label_48b798:
    // 0x48b798: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x48b798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_48b79c:
    // 0x48b79c: 0x810c0004  lb          $t4, 0x4($t0)
    ctx->pc = 0x48b79cu;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
label_48b7a0:
    // 0x48b7a0: 0x93ae015d  lbu         $t6, 0x15D($sp)
    ctx->pc = 0x48b7a0u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 349)));
label_48b7a4:
    // 0x48b7a4: 0x93ad015e  lbu         $t5, 0x15E($sp)
    ctx->pc = 0x48b7a4u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 350)));
label_48b7a8:
    // 0x48b7a8: 0xa0ac0000  sb          $t4, 0x0($a1)
    ctx->pc = 0x48b7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 12));
label_48b7ac:
    // 0x48b7ac: 0x91130005  lbu         $s3, 0x5($t0)
    ctx->pc = 0x48b7acu;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
label_48b7b0:
    // 0x48b7b0: 0x91120006  lbu         $s2, 0x6($t0)
    ctx->pc = 0x48b7b0u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 6)));
label_48b7b4:
    // 0x48b7b4: 0x910f0007  lbu         $t7, 0x7($t0)
    ctx->pc = 0x48b7b4u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 7)));
label_48b7b8:
    // 0x48b7b8: 0x93ac015f  lbu         $t4, 0x15F($sp)
    ctx->pc = 0x48b7b8u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 351)));
label_48b7bc:
    // 0x48b7bc: 0xa0930000  sb          $s3, 0x0($a0)
    ctx->pc = 0x48b7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 19));
label_48b7c0:
    // 0x48b7c0: 0xa0920001  sb          $s2, 0x1($a0)
    ctx->pc = 0x48b7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 18));
label_48b7c4:
    // 0x48b7c4: 0xa08f0002  sb          $t7, 0x2($a0)
    ctx->pc = 0x48b7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 15));
label_48b7c8:
    // 0x48b7c8: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x48b7c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_48b7cc:
    // 0x48b7cc: 0xa1030004  sb          $v1, 0x4($t0)
    ctx->pc = 0x48b7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4), (uint8_t)GPR_U32(ctx, 3));
label_48b7d0:
    // 0x48b7d0: 0xa10e0005  sb          $t6, 0x5($t0)
    ctx->pc = 0x48b7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 5), (uint8_t)GPR_U32(ctx, 14));
label_48b7d4:
    // 0x48b7d4: 0xa10d0006  sb          $t5, 0x6($t0)
    ctx->pc = 0x48b7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 6), (uint8_t)GPR_U32(ctx, 13));
label_48b7d8:
    // 0x48b7d8: 0xa10c0007  sb          $t4, 0x7($t0)
    ctx->pc = 0x48b7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 12));
label_48b7dc:
    // 0x48b7dc: 0x0  nop
    ctx->pc = 0x48b7dcu;
    // NOP
label_48b7e0:
    // 0x48b7e0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x48b7e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_48b7e4:
    // 0x48b7e4: 0x131182b  sltu        $v1, $t1, $s1
    ctx->pc = 0x48b7e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_48b7e8:
    // 0x48b7e8: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
label_48b7ec:
    if (ctx->pc == 0x48B7ECu) {
        ctx->pc = 0x48B7ECu;
            // 0x48b7ec: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->pc = 0x48B7F0u;
        goto label_48b7f0;
    }
    ctx->pc = 0x48B7E8u;
    {
        const bool branch_taken_0x48b7e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48B7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B7E8u;
            // 0x48b7ec: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b7e8) {
            ctx->pc = 0x48B760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48b760;
        }
    }
    ctx->pc = 0x48B7F0u;
label_48b7f0:
    // 0x48b7f0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x48b7f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_48b7f4:
    // 0x48b7f4: 0x14b182b  sltu        $v1, $t2, $t3
    ctx->pc = 0x48b7f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_48b7f8:
    // 0x48b7f8: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
label_48b7fc:
    if (ctx->pc == 0x48B7FCu) {
        ctx->pc = 0x48B7FCu;
            // 0x48b7fc: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->pc = 0x48B800u;
        goto label_48b800;
    }
    ctx->pc = 0x48B7F8u;
    {
        const bool branch_taken_0x48b7f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48B7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B7F8u;
            // 0x48b7fc: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b7f8) {
            ctx->pc = 0x48B73Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48b73c;
        }
    }
    ctx->pc = 0x48B800u;
label_48b800:
    // 0x48b800: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x48b800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_48b804:
    // 0x48b804: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x48b804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_48b808:
    // 0x48b808: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x48b808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_48b80c:
    // 0x48b80c: 0x27b20130  addiu       $s2, $sp, 0x130
    ctx->pc = 0x48b80cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_48b810:
    // 0x48b810: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x48b810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48b814:
    // 0x48b814: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48b814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48b818:
    // 0x48b818: 0x0  nop
    ctx->pc = 0x48b818u;
    // NOP
label_48b81c:
    // 0x48b81c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x48b81cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_48b820:
    // 0x48b820: 0x4501002d  bc1t        . + 4 + (0x2D << 2)
label_48b824:
    if (ctx->pc == 0x48B824u) {
        ctx->pc = 0x48B828u;
        goto label_48b828;
    }
    ctx->pc = 0x48B820u;
    {
        const bool branch_taken_0x48b820 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x48b820) {
            ctx->pc = 0x48B8D8u;
            goto label_48b8d8;
        }
    }
    ctx->pc = 0x48B828u;
label_48b828:
    // 0x48b828: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x48b828u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_48b82c:
    // 0x48b82c: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x48b82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_48b830:
    // 0x48b830: 0x26c30001  addiu       $v1, $s6, 0x1
    ctx->pc = 0x48b830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_48b834:
    // 0x48b834: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x48b834u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_48b838:
    // 0x48b838: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x48b838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_48b83c:
    // 0x48b83c: 0x2ac10002  slti        $at, $s6, 0x2
    ctx->pc = 0x48b83cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
label_48b840:
    // 0x48b840: 0x39880  sll         $s3, $v1, 2
    ctx->pc = 0x48b840u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48b844:
    // 0x48b844: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x48b844u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_48b848:
    // 0x48b848: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_48b84c:
    if (ctx->pc == 0x48B84Cu) {
        ctx->pc = 0x48B84Cu;
            // 0x48b84c: 0x73a021  addu        $s4, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->pc = 0x48B850u;
        goto label_48b850;
    }
    ctx->pc = 0x48B848u;
    {
        const bool branch_taken_0x48b848 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x48B84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B848u;
            // 0x48b84c: 0x73a021  addu        $s4, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b848) {
            ctx->pc = 0x48B860u;
            goto label_48b860;
        }
    }
    ctx->pc = 0x48B850u;
label_48b850:
    // 0x48b850: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x48b850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_48b854:
    // 0x48b854: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x48b854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_48b858:
    // 0x48b858: 0x1000001f  b           . + 4 + (0x1F << 2)
label_48b85c:
    if (ctx->pc == 0x48B85Cu) {
        ctx->pc = 0x48B85Cu;
            // 0x48b85c: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x48B860u;
        goto label_48b860;
    }
    ctx->pc = 0x48B858u;
    {
        const bool branch_taken_0x48b858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B858u;
            // 0x48b85c: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b858) {
            ctx->pc = 0x48B8D8u;
            goto label_48b8d8;
        }
    }
    ctx->pc = 0x48B860u;
label_48b860:
    // 0x48b860: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x48b860u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_48b864:
    // 0x48b864: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x48b864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_48b868:
    // 0x48b868: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x48b868u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_48b86c:
    // 0x48b86c: 0x320f809  jalr        $t9
label_48b870:
    if (ctx->pc == 0x48B870u) {
        ctx->pc = 0x48B870u;
            // 0x48b870: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48B874u;
        goto label_48b874;
    }
    ctx->pc = 0x48B86Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48B874u);
        ctx->pc = 0x48B870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B86Cu;
            // 0x48b870: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48B874u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48B874u; }
            if (ctx->pc != 0x48B874u) { return; }
        }
        }
    }
    ctx->pc = 0x48B874u;
label_48b874:
    // 0x48b874: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x48b874u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_48b878:
    // 0x48b878: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x48b878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48b87c:
    // 0x48b87c: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x48b87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_48b880:
    // 0x48b880: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x48b880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_48b884:
    // 0x48b884: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x48b884u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_48b888:
    // 0x48b888: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x48b888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_48b88c:
    // 0x48b88c: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x48b88cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_48b890:
    // 0x48b890: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x48b890u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_48b894:
    // 0x48b894: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x48b894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_48b898:
    // 0x48b898: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48b898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48b89c:
    // 0x48b89c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x48b89cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_48b8a0:
    // 0x48b8a0: 0x320f809  jalr        $t9
label_48b8a4:
    if (ctx->pc == 0x48B8A4u) {
        ctx->pc = 0x48B8A4u;
            // 0x48b8a4: 0x24470010  addiu       $a3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x48B8A8u;
        goto label_48b8a8;
    }
    ctx->pc = 0x48B8A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48B8A8u);
        ctx->pc = 0x48B8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B8A0u;
            // 0x48b8a4: 0x24470010  addiu       $a3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48B8A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48B8A8u; }
            if (ctx->pc != 0x48B8A8u) { return; }
        }
        }
    }
    ctx->pc = 0x48B8A8u;
label_48b8a8:
    // 0x48b8a8: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x48b8a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
label_48b8ac:
    // 0x48b8ac: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_48b8b0:
    if (ctx->pc == 0x48B8B0u) {
        ctx->pc = 0x48B8B4u;
        goto label_48b8b4;
    }
    ctx->pc = 0x48B8ACu;
    {
        const bool branch_taken_0x48b8ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48b8ac) {
            ctx->pc = 0x48B8C0u;
            goto label_48b8c0;
        }
    }
    ctx->pc = 0x48B8B4u;
label_48b8b4:
    // 0x48b8b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x48b8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48b8b8:
    // 0x48b8b8: 0x10000007  b           . + 4 + (0x7 << 2)
label_48b8bc:
    if (ctx->pc == 0x48B8BCu) {
        ctx->pc = 0x48B8BCu;
            // 0x48b8bc: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x48B8C0u;
        goto label_48b8c0;
    }
    ctx->pc = 0x48B8B8u;
    {
        const bool branch_taken_0x48b8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B8B8u;
            // 0x48b8bc: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b8b8) {
            ctx->pc = 0x48B8D8u;
            goto label_48b8d8;
        }
    }
    ctx->pc = 0x48B8C0u;
label_48b8c0:
    // 0x48b8c0: 0x8fa3012c  lw          $v1, 0x12C($sp)
    ctx->pc = 0x48b8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_48b8c4:
    // 0x48b8c4: 0x732821  addu        $a1, $v1, $s3
    ctx->pc = 0x48b8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_48b8c8:
    // 0x48b8c8: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x48b8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_48b8cc:
    // 0x48b8cc: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x48b8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_48b8d0:
    // 0x48b8d0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x48b8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_48b8d4:
    // 0x48b8d4: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x48b8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_48b8d8:
    // 0x48b8d8: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x48b8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_48b8dc:
    // 0x48b8dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x48b8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_48b8e0:
    // 0x48b8e0: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x48b8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_48b8e4:
    // 0x48b8e4: 0x71182b  sltu        $v1, $v1, $s1
    ctx->pc = 0x48b8e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_48b8e8:
    // 0x48b8e8: 0x1460ffc9  bnez        $v1, . + 4 + (-0x37 << 2)
label_48b8ec:
    if (ctx->pc == 0x48B8ECu) {
        ctx->pc = 0x48B8ECu;
            // 0x48b8ec: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x48B8F0u;
        goto label_48b8f0;
    }
    ctx->pc = 0x48B8E8u;
    {
        const bool branch_taken_0x48b8e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48B8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B8E8u;
            // 0x48b8ec: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b8e8) {
            ctx->pc = 0x48B810u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48b810;
        }
    }
    ctx->pc = 0x48B8F0u;
label_48b8f0:
    // 0x48b8f0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x48b8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_48b8f4:
    // 0x48b8f4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x48b8f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_48b8f8:
    // 0x48b8f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x48b8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_48b8fc:
    // 0x48b8fc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x48b8fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_48b900:
    // 0x48b900: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x48b900u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_48b904:
    // 0x48b904: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x48b904u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_48b908:
    // 0x48b908: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x48b908u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_48b90c:
    // 0x48b90c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x48b90cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_48b910:
    // 0x48b910: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x48b910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48b914:
    // 0x48b914: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x48b914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48b918:
    // 0x48b918: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x48b918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48b91c:
    // 0x48b91c: 0x3e00008  jr          $ra
label_48b920:
    if (ctx->pc == 0x48B920u) {
        ctx->pc = 0x48B920u;
            // 0x48b920: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x48B924u;
        goto label_48b924;
    }
    ctx->pc = 0x48B91Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48B920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B91Cu;
            // 0x48b920: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48B924u;
label_48b924:
    // 0x48b924: 0x0  nop
    ctx->pc = 0x48b924u;
    // NOP
label_48b928:
    // 0x48b928: 0x0  nop
    ctx->pc = 0x48b928u;
    // NOP
label_48b92c:
    // 0x48b92c: 0x0  nop
    ctx->pc = 0x48b92cu;
    // NOP
label_48b930:
    // 0x48b930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48b930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_48b934:
    // 0x48b934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48b934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_48b938:
    // 0x48b938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48b938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48b93c:
    // 0x48b93c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48b93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48b940:
    // 0x48b940: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x48b940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48b944:
    // 0x48b944: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
label_48b948:
    if (ctx->pc == 0x48B948u) {
        ctx->pc = 0x48B948u;
            // 0x48b948: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48B94Cu;
        goto label_48b94c;
    }
    ctx->pc = 0x48B944u;
    {
        const bool branch_taken_0x48b944 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B944u;
            // 0x48b948: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b944) {
            ctx->pc = 0x48B9A0u;
            goto label_48b9a0;
        }
    }
    ctx->pc = 0x48B94Cu;
label_48b94c:
    // 0x48b94c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x48b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_48b950:
    // 0x48b950: 0x2442f920  addiu       $v0, $v0, -0x6E0
    ctx->pc = 0x48b950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965536));
label_48b954:
    // 0x48b954: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x48b954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_48b958:
    // 0x48b958: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x48b958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_48b95c:
    // 0x48b95c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_48b960:
    if (ctx->pc == 0x48B960u) {
        ctx->pc = 0x48B964u;
        goto label_48b964;
    }
    ctx->pc = 0x48B95Cu;
    {
        const bool branch_taken_0x48b95c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b95c) {
            ctx->pc = 0x48B974u;
            goto label_48b974;
        }
    }
    ctx->pc = 0x48B964u;
label_48b964:
    // 0x48b964: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x48b964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_48b968:
    // 0x48b968: 0xc0fe48c  jal         func_3F9230
label_48b96c:
    if (ctx->pc == 0x48B96Cu) {
        ctx->pc = 0x48B96Cu;
            // 0x48b96c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x48B970u;
        goto label_48b970;
    }
    ctx->pc = 0x48B968u;
    SET_GPR_U32(ctx, 31, 0x48B970u);
    ctx->pc = 0x48B96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48B968u;
            // 0x48b96c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B970u; }
        if (ctx->pc != 0x48B970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B970u; }
        if (ctx->pc != 0x48B970u) { return; }
    }
    ctx->pc = 0x48B970u;
label_48b970:
    // 0x48b970: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x48b970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_48b974:
    // 0x48b974: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
label_48b978:
    if (ctx->pc == 0x48B978u) {
        ctx->pc = 0x48B978u;
            // 0x48b978: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x48B97Cu;
        goto label_48b97c;
    }
    ctx->pc = 0x48B974u;
    {
        const bool branch_taken_0x48b974 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b974) {
            ctx->pc = 0x48B978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48B974u;
            // 0x48b978: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48B98Cu;
            goto label_48b98c;
        }
    }
    ctx->pc = 0x48B97Cu;
label_48b97c:
    // 0x48b97c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x48b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_48b980:
    // 0x48b980: 0x2442fb70  addiu       $v0, $v0, -0x490
    ctx->pc = 0x48b980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966128));
label_48b984:
    // 0x48b984: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x48b984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_48b988:
    // 0x48b988: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x48b988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_48b98c:
    // 0x48b98c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x48b98cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_48b990:
    // 0x48b990: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_48b994:
    if (ctx->pc == 0x48B994u) {
        ctx->pc = 0x48B994u;
            // 0x48b994: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48B998u;
        goto label_48b998;
    }
    ctx->pc = 0x48B990u;
    {
        const bool branch_taken_0x48b990 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x48b990) {
            ctx->pc = 0x48B994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48B990u;
            // 0x48b994: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48B9A4u;
            goto label_48b9a4;
        }
    }
    ctx->pc = 0x48B998u;
label_48b998:
    // 0x48b998: 0xc0400a8  jal         func_1002A0
label_48b99c:
    if (ctx->pc == 0x48B99Cu) {
        ctx->pc = 0x48B99Cu;
            // 0x48b99c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48B9A0u;
        goto label_48b9a0;
    }
    ctx->pc = 0x48B998u;
    SET_GPR_U32(ctx, 31, 0x48B9A0u);
    ctx->pc = 0x48B99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48B998u;
            // 0x48b99c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B9A0u; }
        if (ctx->pc != 0x48B9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B9A0u; }
        if (ctx->pc != 0x48B9A0u) { return; }
    }
    ctx->pc = 0x48B9A0u;
label_48b9a0:
    // 0x48b9a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x48b9a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48b9a4:
    // 0x48b9a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48b9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_48b9a8:
    // 0x48b9a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48b9a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48b9ac:
    // 0x48b9ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48b9acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48b9b0:
    // 0x48b9b0: 0x3e00008  jr          $ra
label_48b9b4:
    if (ctx->pc == 0x48B9B4u) {
        ctx->pc = 0x48B9B4u;
            // 0x48b9b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x48B9B8u;
        goto label_48b9b8;
    }
    ctx->pc = 0x48B9B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48B9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B9B0u;
            // 0x48b9b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48B9B8u;
label_48b9b8:
    // 0x48b9b8: 0x0  nop
    ctx->pc = 0x48b9b8u;
    // NOP
label_48b9bc:
    // 0x48b9bc: 0x0  nop
    ctx->pc = 0x48b9bcu;
    // NOP
label_48b9c0:
    // 0x48b9c0: 0x3e00008  jr          $ra
label_48b9c4:
    if (ctx->pc == 0x48B9C4u) {
        ctx->pc = 0x48B9C4u;
            // 0x48b9c4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x48B9C8u;
        goto label_48b9c8;
    }
    ctx->pc = 0x48B9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48B9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B9C0u;
            // 0x48b9c4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48B9C8u;
label_48b9c8:
    // 0x48b9c8: 0x0  nop
    ctx->pc = 0x48b9c8u;
    // NOP
label_48b9cc:
    // 0x48b9cc: 0x0  nop
    ctx->pc = 0x48b9ccu;
    // NOP
label_48b9d0:
    // 0x48b9d0: 0x3e00008  jr          $ra
label_48b9d4:
    if (ctx->pc == 0x48B9D4u) {
        ctx->pc = 0x48B9D8u;
        goto label_48b9d8;
    }
    ctx->pc = 0x48B9D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48B9D8u;
label_48b9d8:
    // 0x48b9d8: 0x0  nop
    ctx->pc = 0x48b9d8u;
    // NOP
label_48b9dc:
    // 0x48b9dc: 0x0  nop
    ctx->pc = 0x48b9dcu;
    // NOP
label_48b9e0:
    // 0x48b9e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48b9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_48b9e4:
    // 0x48b9e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48b9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_48b9e8:
    // 0x48b9e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48b9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48b9ec:
    // 0x48b9ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48b9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48b9f0:
    // 0x48b9f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x48b9f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48b9f4:
    // 0x48b9f4: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x48b9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48b9f8:
    // 0x48b9f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x48b9f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_48b9fc:
    // 0x48b9fc: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x48b9fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_48ba00:
    // 0x48ba00: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x48ba00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48ba04:
    // 0x48ba04: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x48ba04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_48ba08:
    // 0x48ba08: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x48ba08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48ba0c:
    // 0x48ba0c: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x48ba0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_48ba10:
    // 0x48ba10: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x48ba10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_48ba14:
    // 0x48ba14: 0xc04c720  jal         func_131C80
label_48ba18:
    if (ctx->pc == 0x48BA18u) {
        ctx->pc = 0x48BA18u;
            // 0x48ba18: 0x26250028  addiu       $a1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->pc = 0x48BA1Cu;
        goto label_48ba1c;
    }
    ctx->pc = 0x48BA14u;
    SET_GPR_U32(ctx, 31, 0x48BA1Cu);
    ctx->pc = 0x48BA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48BA14u;
            // 0x48ba18: 0x26250028  addiu       $a1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BA1Cu; }
        if (ctx->pc != 0x48BA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BA1Cu; }
        if (ctx->pc != 0x48BA1Cu) { return; }
    }
    ctx->pc = 0x48BA1Cu;
label_48ba1c:
    // 0x48ba1c: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x48ba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_48ba20:
    // 0x48ba20: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x48ba20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_48ba24:
    // 0x48ba24: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x48ba24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_48ba28:
    // 0x48ba28: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x48ba28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_48ba2c:
    // 0x48ba2c: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x48ba2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48ba30:
    // 0x48ba30: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x48ba30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_48ba34:
    // 0x48ba34: 0xc6200048  lwc1        $f0, 0x48($s1)
    ctx->pc = 0x48ba34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48ba38:
    // 0x48ba38: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x48ba38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_48ba3c:
    // 0x48ba3c: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x48ba3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48ba40:
    // 0x48ba40: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x48ba40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_48ba44:
    // 0x48ba44: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x48ba44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48ba48:
    // 0x48ba48: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x48ba48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_48ba4c:
    // 0x48ba4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48ba4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_48ba50:
    // 0x48ba50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48ba50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48ba54:
    // 0x48ba54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48ba54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48ba58:
    // 0x48ba58: 0x3e00008  jr          $ra
label_48ba5c:
    if (ctx->pc == 0x48BA5Cu) {
        ctx->pc = 0x48BA5Cu;
            // 0x48ba5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x48BA60u;
        goto label_48ba60;
    }
    ctx->pc = 0x48BA58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48BA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48BA58u;
            // 0x48ba5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48BA60u;
label_48ba60:
    // 0x48ba60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48ba60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_48ba64:
    // 0x48ba64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48ba64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_48ba68:
    // 0x48ba68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48ba68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48ba6c:
    // 0x48ba6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48ba6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48ba70:
    // 0x48ba70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x48ba70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48ba74:
    // 0x48ba74: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x48ba74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48ba78:
    // 0x48ba78: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x48ba78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_48ba7c:
    // 0x48ba7c: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x48ba7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_48ba80:
    // 0x48ba80: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x48ba80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48ba84:
    // 0x48ba84: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x48ba84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_48ba88:
    // 0x48ba88: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x48ba88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48ba8c:
    // 0x48ba8c: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x48ba8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_48ba90:
    // 0x48ba90: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x48ba90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_48ba94:
    // 0x48ba94: 0xc04c720  jal         func_131C80
label_48ba98:
    if (ctx->pc == 0x48BA98u) {
        ctx->pc = 0x48BA98u;
            // 0x48ba98: 0x26240028  addiu       $a0, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->pc = 0x48BA9Cu;
        goto label_48ba9c;
    }
    ctx->pc = 0x48BA94u;
    SET_GPR_U32(ctx, 31, 0x48BA9Cu);
    ctx->pc = 0x48BA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48BA94u;
            // 0x48ba98: 0x26240028  addiu       $a0, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BA9Cu; }
        if (ctx->pc != 0x48BA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BA9Cu; }
        if (ctx->pc != 0x48BA9Cu) { return; }
    }
    ctx->pc = 0x48BA9Cu;
label_48ba9c:
    // 0x48ba9c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x48ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_48baa0:
    // 0x48baa0: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x48baa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
label_48baa4:
    // 0x48baa4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x48baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_48baa8:
    // 0x48baa8: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x48baa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_48baac:
    // 0x48baac: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x48baacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48bab0:
    // 0x48bab0: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x48bab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
label_48bab4:
    // 0x48bab4: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x48bab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48bab8:
    // 0x48bab8: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x48bab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
label_48babc:
    // 0x48babc: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x48babcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48bac0:
    // 0x48bac0: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x48bac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
label_48bac4:
    // 0x48bac4: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x48bac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48bac8:
    // 0x48bac8: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x48bac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_48bacc:
    // 0x48bacc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x48baccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_48bad0:
    // 0x48bad0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x48bad0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_48bad4:
    // 0x48bad4: 0x320f809  jalr        $t9
label_48bad8:
    if (ctx->pc == 0x48BAD8u) {
        ctx->pc = 0x48BAD8u;
            // 0x48bad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48BADCu;
        goto label_48badc;
    }
    ctx->pc = 0x48BAD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48BADCu);
        ctx->pc = 0x48BAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48BAD4u;
            // 0x48bad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48BADCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48BADCu; }
            if (ctx->pc != 0x48BADCu) { return; }
        }
        }
    }
    ctx->pc = 0x48BADCu;
label_48badc:
    // 0x48badc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48badcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_48bae0:
    // 0x48bae0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48bae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48bae4:
    // 0x48bae4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48bae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48bae8:
    // 0x48bae8: 0x3e00008  jr          $ra
label_48baec:
    if (ctx->pc == 0x48BAECu) {
        ctx->pc = 0x48BAECu;
            // 0x48baec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x48BAF0u;
        goto label_48baf0;
    }
    ctx->pc = 0x48BAE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48BAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48BAE8u;
            // 0x48baec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48BAF0u;
label_48baf0:
    // 0x48baf0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x48baf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_48baf4:
    // 0x48baf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48baf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_48baf8:
    // 0x48baf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48baf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48bafc:
    // 0x48bafc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48bafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48bb00:
    // 0x48bb00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x48bb00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48bb04:
    // 0x48bb04: 0x8c860038  lw          $a2, 0x38($a0)
    ctx->pc = 0x48bb04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_48bb08:
    // 0x48bb08: 0xc48c0048  lwc1        $f12, 0x48($a0)
    ctx->pc = 0x48bb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_48bb0c:
    // 0x48bb0c: 0x8c870040  lw          $a3, 0x40($a0)
    ctx->pc = 0x48bb0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_48bb10:
    // 0x48bb10: 0x8c88003c  lw          $t0, 0x3C($a0)
    ctx->pc = 0x48bb10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_48bb14:
    // 0x48bb14: 0xc122f10  jal         func_48BC40
label_48bb18:
    if (ctx->pc == 0x48BB18u) {
        ctx->pc = 0x48BB18u;
            // 0x48bb18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48BB1Cu;
        goto label_48bb1c;
    }
    ctx->pc = 0x48BB14u;
    SET_GPR_U32(ctx, 31, 0x48BB1Cu);
    ctx->pc = 0x48BB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48BB14u;
            // 0x48bb18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48BC40u;
    if (runtime->hasFunction(0x48BC40u)) {
        auto targetFn = runtime->lookupFunction(0x48BC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BB1Cu; }
        if (ctx->pc != 0x48BB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048BC40_0x48bc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BB1Cu; }
        if (ctx->pc != 0x48BB1Cu) { return; }
    }
    ctx->pc = 0x48BB1Cu;
label_48bb1c:
    // 0x48bb1c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x48bb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_48bb20:
    // 0x48bb20: 0xc04f278  jal         func_13C9E0
label_48bb24:
    if (ctx->pc == 0x48BB24u) {
        ctx->pc = 0x48BB24u;
            // 0x48bb24: 0x26250028  addiu       $a1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->pc = 0x48BB28u;
        goto label_48bb28;
    }
    ctx->pc = 0x48BB20u;
    SET_GPR_U32(ctx, 31, 0x48BB28u);
    ctx->pc = 0x48BB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48BB20u;
            // 0x48bb24: 0x26250028  addiu       $a1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BB28u; }
        if (ctx->pc != 0x48BB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BB28u; }
        if (ctx->pc != 0x48BB28u) { return; }
    }
    ctx->pc = 0x48BB28u;
label_48bb28:
    // 0x48bb28: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x48bb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_48bb2c:
    // 0x48bb2c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x48bb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_48bb30:
    // 0x48bb30: 0xc04cb9c  jal         func_132E70
label_48bb34:
    if (ctx->pc == 0x48BB34u) {
        ctx->pc = 0x48BB34u;
            // 0x48bb34: 0x260601a4  addiu       $a2, $s0, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 420));
        ctx->pc = 0x48BB38u;
        goto label_48bb38;
    }
    ctx->pc = 0x48BB30u;
    SET_GPR_U32(ctx, 31, 0x48BB38u);
    ctx->pc = 0x48BB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48BB30u;
            // 0x48bb34: 0x260601a4  addiu       $a2, $s0, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 420));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E70u;
    if (runtime->hasFunction(0x132E70u)) {
        auto targetFn = runtime->lookupFunction(0x132E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BB38u; }
        if (ctx->pc != 0x48BB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E70_0x132e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BB38u; }
        if (ctx->pc != 0x48BB38u) { return; }
    }
    ctx->pc = 0x48BB38u;
label_48bb38:
    // 0x48bb38: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x48bb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_48bb3c:
    // 0x48bb3c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x48bb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_48bb40:
    // 0x48bb40: 0xc04cb9c  jal         func_132E70
label_48bb44:
    if (ctx->pc == 0x48BB44u) {
        ctx->pc = 0x48BB44u;
            // 0x48bb44: 0x260601b0  addiu       $a2, $s0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
        ctx->pc = 0x48BB48u;
        goto label_48bb48;
    }
    ctx->pc = 0x48BB40u;
    SET_GPR_U32(ctx, 31, 0x48BB48u);
    ctx->pc = 0x48BB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48BB40u;
            // 0x48bb44: 0x260601b0  addiu       $a2, $s0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E70u;
    if (runtime->hasFunction(0x132E70u)) {
        auto targetFn = runtime->lookupFunction(0x132E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BB48u; }
        if (ctx->pc != 0x48BB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E70_0x132e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48BB48u; }
        if (ctx->pc != 0x48BB48u) { return; }
    }
    ctx->pc = 0x48BB48u;
label_48bb48:
    // 0x48bb48: 0xc626001c  lwc1        $f6, 0x1C($s1)
    ctx->pc = 0x48bb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_48bb4c:
    // 0x48bb4c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x48bb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_48bb50:
    // 0x48bb50: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x48bb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48bb54:
    // 0x48bb54: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x48bb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_48bb58:
    // 0x48bb58: 0xc7a50084  lwc1        $f5, 0x84($sp)
    ctx->pc = 0x48bb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_48bb5c:
    // 0x48bb5c: 0x460609c0  add.s       $f7, $f1, $f6
    ctx->pc = 0x48bb5cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_48bb60:
    // 0x48bb60: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x48bb60u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
label_48bb64:
    // 0x48bb64: 0xe7a70080  swc1        $f7, 0x80($sp)
    ctx->pc = 0x48bb64u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_48bb68:
    // 0x48bb68: 0xc6260020  lwc1        $f6, 0x20($s1)
    ctx->pc = 0x48bb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_48bb6c:
    // 0x48bb6c: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x48bb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48bb70:
    // 0x48bb70: 0xc7a40088  lwc1        $f4, 0x88($sp)
    ctx->pc = 0x48bb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_48bb74:
    // 0x48bb74: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x48bb74u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
label_48bb78:
    // 0x48bb78: 0xe7a50084  swc1        $f5, 0x84($sp)
    ctx->pc = 0x48bb78u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_48bb7c:
    // 0x48bb7c: 0xc6250024  lwc1        $f5, 0x24($s1)
    ctx->pc = 0x48bb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_48bb80:
    // 0x48bb80: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x48bb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48bb84:
    // 0x48bb84: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x48bb84u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
label_48bb88:
    // 0x48bb88: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x48bb88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_48bb8c:
    // 0x48bb8c: 0x460520c0  add.s       $f3, $f4, $f5
    ctx->pc = 0x48bb8cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
label_48bb90:
    // 0x48bb90: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x48bb90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_48bb94:
    // 0x48bb94: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x48bb94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_48bb98:
    // 0x48bb98: 0xe7a30088  swc1        $f3, 0x88($sp)
    ctx->pc = 0x48bb98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_48bb9c:
    // 0x48bb9c: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x48bb9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_48bba0:
    // 0x48bba0: 0xe60701a4  swc1        $f7, 0x1A4($s0)
    ctx->pc = 0x48bba0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
label_48bba4:
    // 0x48bba4: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x48bba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48bba8:
    // 0x48bba8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48bba8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48bbac:
    // 0x48bbac: 0x0  nop
    ctx->pc = 0x48bbacu;
    // NOP
label_48bbb0:
    // 0x48bbb0: 0xe60101a8  swc1        $f1, 0x1A8($s0)
    ctx->pc = 0x48bbb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
label_48bbb4:
    // 0x48bbb4: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x48bbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48bbb8:
    // 0x48bbb8: 0xe60101ac  swc1        $f1, 0x1AC($s0)
    ctx->pc = 0x48bbb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 428), bits); }
label_48bbbc:
    // 0x48bbbc: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x48bbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48bbc0:
    // 0x48bbc0: 0xe60101b0  swc1        $f1, 0x1B0($s0)
    ctx->pc = 0x48bbc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
label_48bbc4:
    // 0x48bbc4: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x48bbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48bbc8:
    // 0x48bbc8: 0xe60101b4  swc1        $f1, 0x1B4($s0)
    ctx->pc = 0x48bbc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 436), bits); }
label_48bbcc:
    // 0x48bbcc: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x48bbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48bbd0:
    // 0x48bbd0: 0xe60101b8  swc1        $f1, 0x1B8($s0)
    ctx->pc = 0x48bbd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
label_48bbd4:
    // 0x48bbd4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x48bbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_48bbd8:
    // 0x48bbd8: 0xc6210048  lwc1        $f1, 0x48($s1)
    ctx->pc = 0x48bbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48bbdc:
    // 0x48bbdc: 0xc6230050  lwc1        $f3, 0x50($s1)
    ctx->pc = 0x48bbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_48bbe0:
    // 0x48bbe0: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x48bbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48bbe4:
    // 0x48bbe4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x48bbe4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_48bbe8:
    // 0x48bbe8: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x48bbe8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_48bbec:
    // 0x48bbec: 0xe6210048  swc1        $f1, 0x48($s1)
    ctx->pc = 0x48bbecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
label_48bbf0:
    // 0x48bbf0: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x48bbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48bbf4:
    // 0x48bbf4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x48bbf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_48bbf8:
    // 0x48bbf8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_48bbfc:
    if (ctx->pc == 0x48BBFCu) {
        ctx->pc = 0x48BBFCu;
            // 0x48bbfc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48BC00u;
        goto label_48bc00;
    }
    ctx->pc = 0x48BBF8u;
    {
        const bool branch_taken_0x48bbf8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x48BBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48BBF8u;
            // 0x48bbfc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bbf8) {
            ctx->pc = 0x48BC14u;
            goto label_48bc14;
        }
    }
    ctx->pc = 0x48BC00u;
label_48bc00:
    // 0x48bc00: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x48bc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48bc04:
    // 0x48bc04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x48bc04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_48bc08:
    // 0x48bc08: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_48bc0c:
    if (ctx->pc == 0x48BC0Cu) {
        ctx->pc = 0x48BC0Cu;
            // 0x48bc0c: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x48BC10u;
        goto label_48bc10;
    }
    ctx->pc = 0x48BC08u;
    {
        const bool branch_taken_0x48bc08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x48bc08) {
            ctx->pc = 0x48BC0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48BC08u;
            // 0x48bc0c: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x48BC18u;
            goto label_48bc18;
        }
    }
    ctx->pc = 0x48BC10u;
label_48bc10:
    // 0x48bc10: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x48bc10u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_48bc14:
    // 0x48bc14: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x48bc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_48bc18:
    // 0x48bc18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x48bc18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48bc1c:
    // 0x48bc1c: 0x0  nop
    ctx->pc = 0x48bc1cu;
    // NOP
label_48bc20:
    // 0x48bc20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x48bc20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_48bc24:
    // 0x48bc24: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x48bc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_48bc28:
    // 0x48bc28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48bc28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_48bc2c:
    // 0x48bc2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48bc2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48bc30:
    // 0x48bc30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48bc30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48bc34:
    // 0x48bc34: 0x3e00008  jr          $ra
label_48bc38:
    if (ctx->pc == 0x48BC38u) {
        ctx->pc = 0x48BC38u;
            // 0x48bc38: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x48BC3Cu;
        goto label_48bc3c;
    }
    ctx->pc = 0x48BC34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48BC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48BC34u;
            // 0x48bc38: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48BC3Cu;
label_48bc3c:
    // 0x48bc3c: 0x0  nop
    ctx->pc = 0x48bc3cu;
    // NOP
}
