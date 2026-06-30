#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0045B5A0
// Address: 0x45b5a0 - 0x45be40
void sub_0045B5A0_0x45b5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045B5A0_0x45b5a0");
#endif

    switch (ctx->pc) {
        case 0x45b5a0u: goto label_45b5a0;
        case 0x45b5a4u: goto label_45b5a4;
        case 0x45b5a8u: goto label_45b5a8;
        case 0x45b5acu: goto label_45b5ac;
        case 0x45b5b0u: goto label_45b5b0;
        case 0x45b5b4u: goto label_45b5b4;
        case 0x45b5b8u: goto label_45b5b8;
        case 0x45b5bcu: goto label_45b5bc;
        case 0x45b5c0u: goto label_45b5c0;
        case 0x45b5c4u: goto label_45b5c4;
        case 0x45b5c8u: goto label_45b5c8;
        case 0x45b5ccu: goto label_45b5cc;
        case 0x45b5d0u: goto label_45b5d0;
        case 0x45b5d4u: goto label_45b5d4;
        case 0x45b5d8u: goto label_45b5d8;
        case 0x45b5dcu: goto label_45b5dc;
        case 0x45b5e0u: goto label_45b5e0;
        case 0x45b5e4u: goto label_45b5e4;
        case 0x45b5e8u: goto label_45b5e8;
        case 0x45b5ecu: goto label_45b5ec;
        case 0x45b5f0u: goto label_45b5f0;
        case 0x45b5f4u: goto label_45b5f4;
        case 0x45b5f8u: goto label_45b5f8;
        case 0x45b5fcu: goto label_45b5fc;
        case 0x45b600u: goto label_45b600;
        case 0x45b604u: goto label_45b604;
        case 0x45b608u: goto label_45b608;
        case 0x45b60cu: goto label_45b60c;
        case 0x45b610u: goto label_45b610;
        case 0x45b614u: goto label_45b614;
        case 0x45b618u: goto label_45b618;
        case 0x45b61cu: goto label_45b61c;
        case 0x45b620u: goto label_45b620;
        case 0x45b624u: goto label_45b624;
        case 0x45b628u: goto label_45b628;
        case 0x45b62cu: goto label_45b62c;
        case 0x45b630u: goto label_45b630;
        case 0x45b634u: goto label_45b634;
        case 0x45b638u: goto label_45b638;
        case 0x45b63cu: goto label_45b63c;
        case 0x45b640u: goto label_45b640;
        case 0x45b644u: goto label_45b644;
        case 0x45b648u: goto label_45b648;
        case 0x45b64cu: goto label_45b64c;
        case 0x45b650u: goto label_45b650;
        case 0x45b654u: goto label_45b654;
        case 0x45b658u: goto label_45b658;
        case 0x45b65cu: goto label_45b65c;
        case 0x45b660u: goto label_45b660;
        case 0x45b664u: goto label_45b664;
        case 0x45b668u: goto label_45b668;
        case 0x45b66cu: goto label_45b66c;
        case 0x45b670u: goto label_45b670;
        case 0x45b674u: goto label_45b674;
        case 0x45b678u: goto label_45b678;
        case 0x45b67cu: goto label_45b67c;
        case 0x45b680u: goto label_45b680;
        case 0x45b684u: goto label_45b684;
        case 0x45b688u: goto label_45b688;
        case 0x45b68cu: goto label_45b68c;
        case 0x45b690u: goto label_45b690;
        case 0x45b694u: goto label_45b694;
        case 0x45b698u: goto label_45b698;
        case 0x45b69cu: goto label_45b69c;
        case 0x45b6a0u: goto label_45b6a0;
        case 0x45b6a4u: goto label_45b6a4;
        case 0x45b6a8u: goto label_45b6a8;
        case 0x45b6acu: goto label_45b6ac;
        case 0x45b6b0u: goto label_45b6b0;
        case 0x45b6b4u: goto label_45b6b4;
        case 0x45b6b8u: goto label_45b6b8;
        case 0x45b6bcu: goto label_45b6bc;
        case 0x45b6c0u: goto label_45b6c0;
        case 0x45b6c4u: goto label_45b6c4;
        case 0x45b6c8u: goto label_45b6c8;
        case 0x45b6ccu: goto label_45b6cc;
        case 0x45b6d0u: goto label_45b6d0;
        case 0x45b6d4u: goto label_45b6d4;
        case 0x45b6d8u: goto label_45b6d8;
        case 0x45b6dcu: goto label_45b6dc;
        case 0x45b6e0u: goto label_45b6e0;
        case 0x45b6e4u: goto label_45b6e4;
        case 0x45b6e8u: goto label_45b6e8;
        case 0x45b6ecu: goto label_45b6ec;
        case 0x45b6f0u: goto label_45b6f0;
        case 0x45b6f4u: goto label_45b6f4;
        case 0x45b6f8u: goto label_45b6f8;
        case 0x45b6fcu: goto label_45b6fc;
        case 0x45b700u: goto label_45b700;
        case 0x45b704u: goto label_45b704;
        case 0x45b708u: goto label_45b708;
        case 0x45b70cu: goto label_45b70c;
        case 0x45b710u: goto label_45b710;
        case 0x45b714u: goto label_45b714;
        case 0x45b718u: goto label_45b718;
        case 0x45b71cu: goto label_45b71c;
        case 0x45b720u: goto label_45b720;
        case 0x45b724u: goto label_45b724;
        case 0x45b728u: goto label_45b728;
        case 0x45b72cu: goto label_45b72c;
        case 0x45b730u: goto label_45b730;
        case 0x45b734u: goto label_45b734;
        case 0x45b738u: goto label_45b738;
        case 0x45b73cu: goto label_45b73c;
        case 0x45b740u: goto label_45b740;
        case 0x45b744u: goto label_45b744;
        case 0x45b748u: goto label_45b748;
        case 0x45b74cu: goto label_45b74c;
        case 0x45b750u: goto label_45b750;
        case 0x45b754u: goto label_45b754;
        case 0x45b758u: goto label_45b758;
        case 0x45b75cu: goto label_45b75c;
        case 0x45b760u: goto label_45b760;
        case 0x45b764u: goto label_45b764;
        case 0x45b768u: goto label_45b768;
        case 0x45b76cu: goto label_45b76c;
        case 0x45b770u: goto label_45b770;
        case 0x45b774u: goto label_45b774;
        case 0x45b778u: goto label_45b778;
        case 0x45b77cu: goto label_45b77c;
        case 0x45b780u: goto label_45b780;
        case 0x45b784u: goto label_45b784;
        case 0x45b788u: goto label_45b788;
        case 0x45b78cu: goto label_45b78c;
        case 0x45b790u: goto label_45b790;
        case 0x45b794u: goto label_45b794;
        case 0x45b798u: goto label_45b798;
        case 0x45b79cu: goto label_45b79c;
        case 0x45b7a0u: goto label_45b7a0;
        case 0x45b7a4u: goto label_45b7a4;
        case 0x45b7a8u: goto label_45b7a8;
        case 0x45b7acu: goto label_45b7ac;
        case 0x45b7b0u: goto label_45b7b0;
        case 0x45b7b4u: goto label_45b7b4;
        case 0x45b7b8u: goto label_45b7b8;
        case 0x45b7bcu: goto label_45b7bc;
        case 0x45b7c0u: goto label_45b7c0;
        case 0x45b7c4u: goto label_45b7c4;
        case 0x45b7c8u: goto label_45b7c8;
        case 0x45b7ccu: goto label_45b7cc;
        case 0x45b7d0u: goto label_45b7d0;
        case 0x45b7d4u: goto label_45b7d4;
        case 0x45b7d8u: goto label_45b7d8;
        case 0x45b7dcu: goto label_45b7dc;
        case 0x45b7e0u: goto label_45b7e0;
        case 0x45b7e4u: goto label_45b7e4;
        case 0x45b7e8u: goto label_45b7e8;
        case 0x45b7ecu: goto label_45b7ec;
        case 0x45b7f0u: goto label_45b7f0;
        case 0x45b7f4u: goto label_45b7f4;
        case 0x45b7f8u: goto label_45b7f8;
        case 0x45b7fcu: goto label_45b7fc;
        case 0x45b800u: goto label_45b800;
        case 0x45b804u: goto label_45b804;
        case 0x45b808u: goto label_45b808;
        case 0x45b80cu: goto label_45b80c;
        case 0x45b810u: goto label_45b810;
        case 0x45b814u: goto label_45b814;
        case 0x45b818u: goto label_45b818;
        case 0x45b81cu: goto label_45b81c;
        case 0x45b820u: goto label_45b820;
        case 0x45b824u: goto label_45b824;
        case 0x45b828u: goto label_45b828;
        case 0x45b82cu: goto label_45b82c;
        case 0x45b830u: goto label_45b830;
        case 0x45b834u: goto label_45b834;
        case 0x45b838u: goto label_45b838;
        case 0x45b83cu: goto label_45b83c;
        case 0x45b840u: goto label_45b840;
        case 0x45b844u: goto label_45b844;
        case 0x45b848u: goto label_45b848;
        case 0x45b84cu: goto label_45b84c;
        case 0x45b850u: goto label_45b850;
        case 0x45b854u: goto label_45b854;
        case 0x45b858u: goto label_45b858;
        case 0x45b85cu: goto label_45b85c;
        case 0x45b860u: goto label_45b860;
        case 0x45b864u: goto label_45b864;
        case 0x45b868u: goto label_45b868;
        case 0x45b86cu: goto label_45b86c;
        case 0x45b870u: goto label_45b870;
        case 0x45b874u: goto label_45b874;
        case 0x45b878u: goto label_45b878;
        case 0x45b87cu: goto label_45b87c;
        case 0x45b880u: goto label_45b880;
        case 0x45b884u: goto label_45b884;
        case 0x45b888u: goto label_45b888;
        case 0x45b88cu: goto label_45b88c;
        case 0x45b890u: goto label_45b890;
        case 0x45b894u: goto label_45b894;
        case 0x45b898u: goto label_45b898;
        case 0x45b89cu: goto label_45b89c;
        case 0x45b8a0u: goto label_45b8a0;
        case 0x45b8a4u: goto label_45b8a4;
        case 0x45b8a8u: goto label_45b8a8;
        case 0x45b8acu: goto label_45b8ac;
        case 0x45b8b0u: goto label_45b8b0;
        case 0x45b8b4u: goto label_45b8b4;
        case 0x45b8b8u: goto label_45b8b8;
        case 0x45b8bcu: goto label_45b8bc;
        case 0x45b8c0u: goto label_45b8c0;
        case 0x45b8c4u: goto label_45b8c4;
        case 0x45b8c8u: goto label_45b8c8;
        case 0x45b8ccu: goto label_45b8cc;
        case 0x45b8d0u: goto label_45b8d0;
        case 0x45b8d4u: goto label_45b8d4;
        case 0x45b8d8u: goto label_45b8d8;
        case 0x45b8dcu: goto label_45b8dc;
        case 0x45b8e0u: goto label_45b8e0;
        case 0x45b8e4u: goto label_45b8e4;
        case 0x45b8e8u: goto label_45b8e8;
        case 0x45b8ecu: goto label_45b8ec;
        case 0x45b8f0u: goto label_45b8f0;
        case 0x45b8f4u: goto label_45b8f4;
        case 0x45b8f8u: goto label_45b8f8;
        case 0x45b8fcu: goto label_45b8fc;
        case 0x45b900u: goto label_45b900;
        case 0x45b904u: goto label_45b904;
        case 0x45b908u: goto label_45b908;
        case 0x45b90cu: goto label_45b90c;
        case 0x45b910u: goto label_45b910;
        case 0x45b914u: goto label_45b914;
        case 0x45b918u: goto label_45b918;
        case 0x45b91cu: goto label_45b91c;
        case 0x45b920u: goto label_45b920;
        case 0x45b924u: goto label_45b924;
        case 0x45b928u: goto label_45b928;
        case 0x45b92cu: goto label_45b92c;
        case 0x45b930u: goto label_45b930;
        case 0x45b934u: goto label_45b934;
        case 0x45b938u: goto label_45b938;
        case 0x45b93cu: goto label_45b93c;
        case 0x45b940u: goto label_45b940;
        case 0x45b944u: goto label_45b944;
        case 0x45b948u: goto label_45b948;
        case 0x45b94cu: goto label_45b94c;
        case 0x45b950u: goto label_45b950;
        case 0x45b954u: goto label_45b954;
        case 0x45b958u: goto label_45b958;
        case 0x45b95cu: goto label_45b95c;
        case 0x45b960u: goto label_45b960;
        case 0x45b964u: goto label_45b964;
        case 0x45b968u: goto label_45b968;
        case 0x45b96cu: goto label_45b96c;
        case 0x45b970u: goto label_45b970;
        case 0x45b974u: goto label_45b974;
        case 0x45b978u: goto label_45b978;
        case 0x45b97cu: goto label_45b97c;
        case 0x45b980u: goto label_45b980;
        case 0x45b984u: goto label_45b984;
        case 0x45b988u: goto label_45b988;
        case 0x45b98cu: goto label_45b98c;
        case 0x45b990u: goto label_45b990;
        case 0x45b994u: goto label_45b994;
        case 0x45b998u: goto label_45b998;
        case 0x45b99cu: goto label_45b99c;
        case 0x45b9a0u: goto label_45b9a0;
        case 0x45b9a4u: goto label_45b9a4;
        case 0x45b9a8u: goto label_45b9a8;
        case 0x45b9acu: goto label_45b9ac;
        case 0x45b9b0u: goto label_45b9b0;
        case 0x45b9b4u: goto label_45b9b4;
        case 0x45b9b8u: goto label_45b9b8;
        case 0x45b9bcu: goto label_45b9bc;
        case 0x45b9c0u: goto label_45b9c0;
        case 0x45b9c4u: goto label_45b9c4;
        case 0x45b9c8u: goto label_45b9c8;
        case 0x45b9ccu: goto label_45b9cc;
        case 0x45b9d0u: goto label_45b9d0;
        case 0x45b9d4u: goto label_45b9d4;
        case 0x45b9d8u: goto label_45b9d8;
        case 0x45b9dcu: goto label_45b9dc;
        case 0x45b9e0u: goto label_45b9e0;
        case 0x45b9e4u: goto label_45b9e4;
        case 0x45b9e8u: goto label_45b9e8;
        case 0x45b9ecu: goto label_45b9ec;
        case 0x45b9f0u: goto label_45b9f0;
        case 0x45b9f4u: goto label_45b9f4;
        case 0x45b9f8u: goto label_45b9f8;
        case 0x45b9fcu: goto label_45b9fc;
        case 0x45ba00u: goto label_45ba00;
        case 0x45ba04u: goto label_45ba04;
        case 0x45ba08u: goto label_45ba08;
        case 0x45ba0cu: goto label_45ba0c;
        case 0x45ba10u: goto label_45ba10;
        case 0x45ba14u: goto label_45ba14;
        case 0x45ba18u: goto label_45ba18;
        case 0x45ba1cu: goto label_45ba1c;
        case 0x45ba20u: goto label_45ba20;
        case 0x45ba24u: goto label_45ba24;
        case 0x45ba28u: goto label_45ba28;
        case 0x45ba2cu: goto label_45ba2c;
        case 0x45ba30u: goto label_45ba30;
        case 0x45ba34u: goto label_45ba34;
        case 0x45ba38u: goto label_45ba38;
        case 0x45ba3cu: goto label_45ba3c;
        case 0x45ba40u: goto label_45ba40;
        case 0x45ba44u: goto label_45ba44;
        case 0x45ba48u: goto label_45ba48;
        case 0x45ba4cu: goto label_45ba4c;
        case 0x45ba50u: goto label_45ba50;
        case 0x45ba54u: goto label_45ba54;
        case 0x45ba58u: goto label_45ba58;
        case 0x45ba5cu: goto label_45ba5c;
        case 0x45ba60u: goto label_45ba60;
        case 0x45ba64u: goto label_45ba64;
        case 0x45ba68u: goto label_45ba68;
        case 0x45ba6cu: goto label_45ba6c;
        case 0x45ba70u: goto label_45ba70;
        case 0x45ba74u: goto label_45ba74;
        case 0x45ba78u: goto label_45ba78;
        case 0x45ba7cu: goto label_45ba7c;
        case 0x45ba80u: goto label_45ba80;
        case 0x45ba84u: goto label_45ba84;
        case 0x45ba88u: goto label_45ba88;
        case 0x45ba8cu: goto label_45ba8c;
        case 0x45ba90u: goto label_45ba90;
        case 0x45ba94u: goto label_45ba94;
        case 0x45ba98u: goto label_45ba98;
        case 0x45ba9cu: goto label_45ba9c;
        case 0x45baa0u: goto label_45baa0;
        case 0x45baa4u: goto label_45baa4;
        case 0x45baa8u: goto label_45baa8;
        case 0x45baacu: goto label_45baac;
        case 0x45bab0u: goto label_45bab0;
        case 0x45bab4u: goto label_45bab4;
        case 0x45bab8u: goto label_45bab8;
        case 0x45babcu: goto label_45babc;
        case 0x45bac0u: goto label_45bac0;
        case 0x45bac4u: goto label_45bac4;
        case 0x45bac8u: goto label_45bac8;
        case 0x45baccu: goto label_45bacc;
        case 0x45bad0u: goto label_45bad0;
        case 0x45bad4u: goto label_45bad4;
        case 0x45bad8u: goto label_45bad8;
        case 0x45badcu: goto label_45badc;
        case 0x45bae0u: goto label_45bae0;
        case 0x45bae4u: goto label_45bae4;
        case 0x45bae8u: goto label_45bae8;
        case 0x45baecu: goto label_45baec;
        case 0x45baf0u: goto label_45baf0;
        case 0x45baf4u: goto label_45baf4;
        case 0x45baf8u: goto label_45baf8;
        case 0x45bafcu: goto label_45bafc;
        case 0x45bb00u: goto label_45bb00;
        case 0x45bb04u: goto label_45bb04;
        case 0x45bb08u: goto label_45bb08;
        case 0x45bb0cu: goto label_45bb0c;
        case 0x45bb10u: goto label_45bb10;
        case 0x45bb14u: goto label_45bb14;
        case 0x45bb18u: goto label_45bb18;
        case 0x45bb1cu: goto label_45bb1c;
        case 0x45bb20u: goto label_45bb20;
        case 0x45bb24u: goto label_45bb24;
        case 0x45bb28u: goto label_45bb28;
        case 0x45bb2cu: goto label_45bb2c;
        case 0x45bb30u: goto label_45bb30;
        case 0x45bb34u: goto label_45bb34;
        case 0x45bb38u: goto label_45bb38;
        case 0x45bb3cu: goto label_45bb3c;
        case 0x45bb40u: goto label_45bb40;
        case 0x45bb44u: goto label_45bb44;
        case 0x45bb48u: goto label_45bb48;
        case 0x45bb4cu: goto label_45bb4c;
        case 0x45bb50u: goto label_45bb50;
        case 0x45bb54u: goto label_45bb54;
        case 0x45bb58u: goto label_45bb58;
        case 0x45bb5cu: goto label_45bb5c;
        case 0x45bb60u: goto label_45bb60;
        case 0x45bb64u: goto label_45bb64;
        case 0x45bb68u: goto label_45bb68;
        case 0x45bb6cu: goto label_45bb6c;
        case 0x45bb70u: goto label_45bb70;
        case 0x45bb74u: goto label_45bb74;
        case 0x45bb78u: goto label_45bb78;
        case 0x45bb7cu: goto label_45bb7c;
        case 0x45bb80u: goto label_45bb80;
        case 0x45bb84u: goto label_45bb84;
        case 0x45bb88u: goto label_45bb88;
        case 0x45bb8cu: goto label_45bb8c;
        case 0x45bb90u: goto label_45bb90;
        case 0x45bb94u: goto label_45bb94;
        case 0x45bb98u: goto label_45bb98;
        case 0x45bb9cu: goto label_45bb9c;
        case 0x45bba0u: goto label_45bba0;
        case 0x45bba4u: goto label_45bba4;
        case 0x45bba8u: goto label_45bba8;
        case 0x45bbacu: goto label_45bbac;
        case 0x45bbb0u: goto label_45bbb0;
        case 0x45bbb4u: goto label_45bbb4;
        case 0x45bbb8u: goto label_45bbb8;
        case 0x45bbbcu: goto label_45bbbc;
        case 0x45bbc0u: goto label_45bbc0;
        case 0x45bbc4u: goto label_45bbc4;
        case 0x45bbc8u: goto label_45bbc8;
        case 0x45bbccu: goto label_45bbcc;
        case 0x45bbd0u: goto label_45bbd0;
        case 0x45bbd4u: goto label_45bbd4;
        case 0x45bbd8u: goto label_45bbd8;
        case 0x45bbdcu: goto label_45bbdc;
        case 0x45bbe0u: goto label_45bbe0;
        case 0x45bbe4u: goto label_45bbe4;
        case 0x45bbe8u: goto label_45bbe8;
        case 0x45bbecu: goto label_45bbec;
        case 0x45bbf0u: goto label_45bbf0;
        case 0x45bbf4u: goto label_45bbf4;
        case 0x45bbf8u: goto label_45bbf8;
        case 0x45bbfcu: goto label_45bbfc;
        case 0x45bc00u: goto label_45bc00;
        case 0x45bc04u: goto label_45bc04;
        case 0x45bc08u: goto label_45bc08;
        case 0x45bc0cu: goto label_45bc0c;
        case 0x45bc10u: goto label_45bc10;
        case 0x45bc14u: goto label_45bc14;
        case 0x45bc18u: goto label_45bc18;
        case 0x45bc1cu: goto label_45bc1c;
        case 0x45bc20u: goto label_45bc20;
        case 0x45bc24u: goto label_45bc24;
        case 0x45bc28u: goto label_45bc28;
        case 0x45bc2cu: goto label_45bc2c;
        case 0x45bc30u: goto label_45bc30;
        case 0x45bc34u: goto label_45bc34;
        case 0x45bc38u: goto label_45bc38;
        case 0x45bc3cu: goto label_45bc3c;
        case 0x45bc40u: goto label_45bc40;
        case 0x45bc44u: goto label_45bc44;
        case 0x45bc48u: goto label_45bc48;
        case 0x45bc4cu: goto label_45bc4c;
        case 0x45bc50u: goto label_45bc50;
        case 0x45bc54u: goto label_45bc54;
        case 0x45bc58u: goto label_45bc58;
        case 0x45bc5cu: goto label_45bc5c;
        case 0x45bc60u: goto label_45bc60;
        case 0x45bc64u: goto label_45bc64;
        case 0x45bc68u: goto label_45bc68;
        case 0x45bc6cu: goto label_45bc6c;
        case 0x45bc70u: goto label_45bc70;
        case 0x45bc74u: goto label_45bc74;
        case 0x45bc78u: goto label_45bc78;
        case 0x45bc7cu: goto label_45bc7c;
        case 0x45bc80u: goto label_45bc80;
        case 0x45bc84u: goto label_45bc84;
        case 0x45bc88u: goto label_45bc88;
        case 0x45bc8cu: goto label_45bc8c;
        case 0x45bc90u: goto label_45bc90;
        case 0x45bc94u: goto label_45bc94;
        case 0x45bc98u: goto label_45bc98;
        case 0x45bc9cu: goto label_45bc9c;
        case 0x45bca0u: goto label_45bca0;
        case 0x45bca4u: goto label_45bca4;
        case 0x45bca8u: goto label_45bca8;
        case 0x45bcacu: goto label_45bcac;
        case 0x45bcb0u: goto label_45bcb0;
        case 0x45bcb4u: goto label_45bcb4;
        case 0x45bcb8u: goto label_45bcb8;
        case 0x45bcbcu: goto label_45bcbc;
        case 0x45bcc0u: goto label_45bcc0;
        case 0x45bcc4u: goto label_45bcc4;
        case 0x45bcc8u: goto label_45bcc8;
        case 0x45bcccu: goto label_45bccc;
        case 0x45bcd0u: goto label_45bcd0;
        case 0x45bcd4u: goto label_45bcd4;
        case 0x45bcd8u: goto label_45bcd8;
        case 0x45bcdcu: goto label_45bcdc;
        case 0x45bce0u: goto label_45bce0;
        case 0x45bce4u: goto label_45bce4;
        case 0x45bce8u: goto label_45bce8;
        case 0x45bcecu: goto label_45bcec;
        case 0x45bcf0u: goto label_45bcf0;
        case 0x45bcf4u: goto label_45bcf4;
        case 0x45bcf8u: goto label_45bcf8;
        case 0x45bcfcu: goto label_45bcfc;
        case 0x45bd00u: goto label_45bd00;
        case 0x45bd04u: goto label_45bd04;
        case 0x45bd08u: goto label_45bd08;
        case 0x45bd0cu: goto label_45bd0c;
        case 0x45bd10u: goto label_45bd10;
        case 0x45bd14u: goto label_45bd14;
        case 0x45bd18u: goto label_45bd18;
        case 0x45bd1cu: goto label_45bd1c;
        case 0x45bd20u: goto label_45bd20;
        case 0x45bd24u: goto label_45bd24;
        case 0x45bd28u: goto label_45bd28;
        case 0x45bd2cu: goto label_45bd2c;
        case 0x45bd30u: goto label_45bd30;
        case 0x45bd34u: goto label_45bd34;
        case 0x45bd38u: goto label_45bd38;
        case 0x45bd3cu: goto label_45bd3c;
        case 0x45bd40u: goto label_45bd40;
        case 0x45bd44u: goto label_45bd44;
        case 0x45bd48u: goto label_45bd48;
        case 0x45bd4cu: goto label_45bd4c;
        case 0x45bd50u: goto label_45bd50;
        case 0x45bd54u: goto label_45bd54;
        case 0x45bd58u: goto label_45bd58;
        case 0x45bd5cu: goto label_45bd5c;
        case 0x45bd60u: goto label_45bd60;
        case 0x45bd64u: goto label_45bd64;
        case 0x45bd68u: goto label_45bd68;
        case 0x45bd6cu: goto label_45bd6c;
        case 0x45bd70u: goto label_45bd70;
        case 0x45bd74u: goto label_45bd74;
        case 0x45bd78u: goto label_45bd78;
        case 0x45bd7cu: goto label_45bd7c;
        case 0x45bd80u: goto label_45bd80;
        case 0x45bd84u: goto label_45bd84;
        case 0x45bd88u: goto label_45bd88;
        case 0x45bd8cu: goto label_45bd8c;
        case 0x45bd90u: goto label_45bd90;
        case 0x45bd94u: goto label_45bd94;
        case 0x45bd98u: goto label_45bd98;
        case 0x45bd9cu: goto label_45bd9c;
        case 0x45bda0u: goto label_45bda0;
        case 0x45bda4u: goto label_45bda4;
        case 0x45bda8u: goto label_45bda8;
        case 0x45bdacu: goto label_45bdac;
        case 0x45bdb0u: goto label_45bdb0;
        case 0x45bdb4u: goto label_45bdb4;
        case 0x45bdb8u: goto label_45bdb8;
        case 0x45bdbcu: goto label_45bdbc;
        case 0x45bdc0u: goto label_45bdc0;
        case 0x45bdc4u: goto label_45bdc4;
        case 0x45bdc8u: goto label_45bdc8;
        case 0x45bdccu: goto label_45bdcc;
        case 0x45bdd0u: goto label_45bdd0;
        case 0x45bdd4u: goto label_45bdd4;
        case 0x45bdd8u: goto label_45bdd8;
        case 0x45bddcu: goto label_45bddc;
        case 0x45bde0u: goto label_45bde0;
        case 0x45bde4u: goto label_45bde4;
        case 0x45bde8u: goto label_45bde8;
        case 0x45bdecu: goto label_45bdec;
        case 0x45bdf0u: goto label_45bdf0;
        case 0x45bdf4u: goto label_45bdf4;
        case 0x45bdf8u: goto label_45bdf8;
        case 0x45bdfcu: goto label_45bdfc;
        case 0x45be00u: goto label_45be00;
        case 0x45be04u: goto label_45be04;
        case 0x45be08u: goto label_45be08;
        case 0x45be0cu: goto label_45be0c;
        case 0x45be10u: goto label_45be10;
        case 0x45be14u: goto label_45be14;
        case 0x45be18u: goto label_45be18;
        case 0x45be1cu: goto label_45be1c;
        case 0x45be20u: goto label_45be20;
        case 0x45be24u: goto label_45be24;
        case 0x45be28u: goto label_45be28;
        case 0x45be2cu: goto label_45be2c;
        case 0x45be30u: goto label_45be30;
        case 0x45be34u: goto label_45be34;
        case 0x45be38u: goto label_45be38;
        case 0x45be3cu: goto label_45be3c;
        default: break;
    }

    ctx->pc = 0x45b5a0u;

label_45b5a0:
    // 0x45b5a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x45b5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_45b5a4:
    // 0x45b5a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x45b5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_45b5a8:
    // 0x45b5a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45b5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_45b5ac:
    // 0x45b5ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45b5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45b5b0:
    // 0x45b5b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45b5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45b5b4:
    // 0x45b5b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x45b5b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_45b5b8:
    // 0x45b5b8: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x45b5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_45b5bc:
    // 0x45b5bc: 0xc0c9a58  jal         func_326960
label_45b5c0:
    if (ctx->pc == 0x45B5C0u) {
        ctx->pc = 0x45B5C0u;
            // 0x45b5c0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x45B5C4u;
        goto label_45b5c4;
    }
    ctx->pc = 0x45B5BCu;
    SET_GPR_U32(ctx, 31, 0x45B5C4u);
    ctx->pc = 0x45B5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B5BCu;
            // 0x45b5c0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B5C4u; }
        if (ctx->pc != 0x45B5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B5C4u; }
        if (ctx->pc != 0x45B5C4u) { return; }
    }
    ctx->pc = 0x45B5C4u;
label_45b5c4:
    // 0x45b5c4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45b5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_45b5c8:
    // 0x45b5c8: 0xc123328  jal         func_48CCA0
label_45b5cc:
    if (ctx->pc == 0x45B5CCu) {
        ctx->pc = 0x45B5CCu;
            // 0x45b5cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45B5D0u;
        goto label_45b5d0;
    }
    ctx->pc = 0x45B5C8u;
    SET_GPR_U32(ctx, 31, 0x45B5D0u);
    ctx->pc = 0x45B5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B5C8u;
            // 0x45b5cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B5D0u; }
        if (ctx->pc != 0x45B5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B5D0u; }
        if (ctx->pc != 0x45B5D0u) { return; }
    }
    ctx->pc = 0x45B5D0u;
label_45b5d0:
    // 0x45b5d0: 0x2c410019  sltiu       $at, $v0, 0x19
    ctx->pc = 0x45b5d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
label_45b5d4:
    // 0x45b5d4: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
label_45b5d8:
    if (ctx->pc == 0x45B5D8u) {
        ctx->pc = 0x45B5D8u;
            // 0x45b5d8: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x45B5DCu;
        goto label_45b5dc;
    }
    ctx->pc = 0x45B5D4u;
    {
        const bool branch_taken_0x45b5d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B5D4u;
            // 0x45b5d8: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b5d4) {
            ctx->pc = 0x45B6C8u;
            goto label_45b6c8;
        }
    }
    ctx->pc = 0x45B5DCu;
label_45b5dc:
    // 0x45b5dc: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x45b5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_45b5e0:
    // 0x45b5e0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45b5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45b5e4:
    // 0x45b5e4: 0x2484e1c0  addiu       $a0, $a0, -0x1E40
    ctx->pc = 0x45b5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959552));
label_45b5e8:
    // 0x45b5e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45b5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_45b5ec:
    // 0x45b5ec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x45b5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_45b5f0:
    // 0x45b5f0: 0x600008  jr          $v1
label_45b5f4:
    if (ctx->pc == 0x45B5F4u) {
        ctx->pc = 0x45B5F8u;
        goto label_45b5f8;
    }
    ctx->pc = 0x45B5F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x45B5F8u: goto label_45b5f8;
            case 0x45B600u: goto label_45b600;
            case 0x45B608u: goto label_45b608;
            case 0x45B610u: goto label_45b610;
            case 0x45B618u: goto label_45b618;
            case 0x45B620u: goto label_45b620;
            case 0x45B628u: goto label_45b628;
            case 0x45B630u: goto label_45b630;
            case 0x45B638u: goto label_45b638;
            case 0x45B640u: goto label_45b640;
            case 0x45B648u: goto label_45b648;
            case 0x45B650u: goto label_45b650;
            case 0x45B658u: goto label_45b658;
            case 0x45B660u: goto label_45b660;
            case 0x45B66Cu: goto label_45b66c;
            case 0x45B678u: goto label_45b678;
            case 0x45B684u: goto label_45b684;
            case 0x45B690u: goto label_45b690;
            case 0x45B69Cu: goto label_45b69c;
            case 0x45B6A4u: goto label_45b6a4;
            case 0x45B6ACu: goto label_45b6ac;
            case 0x45B6B4u: goto label_45b6b4;
            case 0x45B6BCu: goto label_45b6bc;
            case 0x45B6C4u: goto label_45b6c4;
            case 0x45B6C8u: goto label_45b6c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x45B5F8u;
label_45b5f8:
    // 0x45b5f8: 0x10000033  b           . + 4 + (0x33 << 2)
label_45b5fc:
    if (ctx->pc == 0x45B5FCu) {
        ctx->pc = 0x45B5FCu;
            // 0x45b5fc: 0x24100073  addiu       $s0, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->pc = 0x45B600u;
        goto label_45b600;
    }
    ctx->pc = 0x45B5F8u;
    {
        const bool branch_taken_0x45b5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B5F8u;
            // 0x45b5fc: 0x24100073  addiu       $s0, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b5f8) {
            ctx->pc = 0x45B6C8u;
            goto label_45b6c8;
        }
    }
    ctx->pc = 0x45B600u;
label_45b600:
    // 0x45b600: 0x10000031  b           . + 4 + (0x31 << 2)
label_45b604:
    if (ctx->pc == 0x45B604u) {
        ctx->pc = 0x45B604u;
            // 0x45b604: 0x24100074  addiu       $s0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->pc = 0x45B608u;
        goto label_45b608;
    }
    ctx->pc = 0x45B600u;
    {
        const bool branch_taken_0x45b600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B600u;
            // 0x45b604: 0x24100074  addiu       $s0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b600) {
            ctx->pc = 0x45B6C8u;
            goto label_45b6c8;
        }
    }
    ctx->pc = 0x45B608u;
label_45b608:
    // 0x45b608: 0x1000002f  b           . + 4 + (0x2F << 2)
label_45b60c:
    if (ctx->pc == 0x45B60Cu) {
        ctx->pc = 0x45B60Cu;
            // 0x45b60c: 0x24100075  addiu       $s0, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->pc = 0x45B610u;
        goto label_45b610;
    }
    ctx->pc = 0x45B608u;
    {
        const bool branch_taken_0x45b608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B608u;
            // 0x45b60c: 0x24100075  addiu       $s0, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b608) {
            ctx->pc = 0x45B6C8u;
            goto label_45b6c8;
        }
    }
    ctx->pc = 0x45B610u;
label_45b610:
    // 0x45b610: 0x1000002d  b           . + 4 + (0x2D << 2)
label_45b614:
    if (ctx->pc == 0x45B614u) {
        ctx->pc = 0x45B614u;
            // 0x45b614: 0x24100078  addiu       $s0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x45B618u;
        goto label_45b618;
    }
    ctx->pc = 0x45B610u;
    {
        const bool branch_taken_0x45b610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B610u;
            // 0x45b614: 0x24100078  addiu       $s0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b610) {
            ctx->pc = 0x45B6C8u;
            goto label_45b6c8;
        }
    }
    ctx->pc = 0x45B618u;
label_45b618:
    // 0x45b618: 0x1000002b  b           . + 4 + (0x2B << 2)
label_45b61c:
    if (ctx->pc == 0x45B61Cu) {
        ctx->pc = 0x45B61Cu;
            // 0x45b61c: 0x24100076  addiu       $s0, $zero, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
        ctx->pc = 0x45B620u;
        goto label_45b620;
    }
    ctx->pc = 0x45B618u;
    {
        const bool branch_taken_0x45b618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B618u;
            // 0x45b61c: 0x24100076  addiu       $s0, $zero, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b618) {
            ctx->pc = 0x45B6C8u;
            goto label_45b6c8;
        }
    }
    ctx->pc = 0x45B620u;
label_45b620:
    // 0x45b620: 0x10000029  b           . + 4 + (0x29 << 2)
label_45b624:
    if (ctx->pc == 0x45B624u) {
        ctx->pc = 0x45B624u;
            // 0x45b624: 0x24100079  addiu       $s0, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->pc = 0x45B628u;
        goto label_45b628;
    }
    ctx->pc = 0x45B620u;
    {
        const bool branch_taken_0x45b620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B620u;
            // 0x45b624: 0x24100079  addiu       $s0, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b620) {
            ctx->pc = 0x45B6C8u;
            goto label_45b6c8;
        }
    }
    ctx->pc = 0x45B628u;
label_45b628:
    // 0x45b628: 0x10000027  b           . + 4 + (0x27 << 2)
label_45b62c:
    if (ctx->pc == 0x45B62Cu) {
        ctx->pc = 0x45B62Cu;
            // 0x45b62c: 0x2410007c  addiu       $s0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->pc = 0x45B630u;
        goto label_45b630;
    }
    ctx->pc = 0x45B628u;
    {
        const bool branch_taken_0x45b628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B628u;
            // 0x45b62c: 0x2410007c  addiu       $s0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b628) {
            ctx->pc = 0x45B6C8u;
            goto label_45b6c8;
        }
    }
    ctx->pc = 0x45B630u;
label_45b630:
    // 0x45b630: 0x10000025  b           . + 4 + (0x25 << 2)
label_45b634:
    if (ctx->pc == 0x45B634u) {
        ctx->pc = 0x45B634u;
            // 0x45b634: 0x2410007f  addiu       $s0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->pc = 0x45B638u;
        goto label_45b638;
    }
    ctx->pc = 0x45B630u;
    {
        const bool branch_taken_0x45b630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B630u;
            // 0x45b634: 0x2410007f  addiu       $s0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b630) {
            ctx->pc = 0x45B6C8u;
            goto label_45b6c8;
        }
    }
    ctx->pc = 0x45B638u;
label_45b638:
    // 0x45b638: 0x10000023  b           . + 4 + (0x23 << 2)
label_45b63c:
    if (ctx->pc == 0x45B63Cu) {
        ctx->pc = 0x45B63Cu;
            // 0x45b63c: 0x24100083  addiu       $s0, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->pc = 0x45B640u;
        goto label_45b640;
    }
    ctx->pc = 0x45B638u;
    {
        const bool branch_taken_0x45b638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B638u;
            // 0x45b63c: 0x24100083  addiu       $s0, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b638) {
            ctx->pc = 0x45B6C8u;
            goto label_45b6c8;
        }
    }
    ctx->pc = 0x45B640u;
label_45b640:
    // 0x45b640: 0x10000021  b           . + 4 + (0x21 << 2)
label_45b644:
    if (ctx->pc == 0x45B644u) {
        ctx->pc = 0x45B644u;
            // 0x45b644: 0x24100082  addiu       $s0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->pc = 0x45B648u;
        goto label_45b648;
    }
    ctx->pc = 0x45B640u;
    {
        const bool branch_taken_0x45b640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B640u;
            // 0x45b644: 0x24100082  addiu       $s0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b640) {
            ctx->pc = 0x45B6C8u;
            goto label_45b6c8;
        }
    }
    ctx->pc = 0x45B648u;
label_45b648:
    // 0x45b648: 0x1000001f  b           . + 4 + (0x1F << 2)
label_45b64c:
    if (ctx->pc == 0x45B64Cu) {
        ctx->pc = 0x45B64Cu;
            // 0x45b64c: 0x24100083  addiu       $s0, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->pc = 0x45B650u;
        goto label_45b650;
    }
    ctx->pc = 0x45B648u;
    {
        const bool branch_taken_0x45b648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B648u;
            // 0x45b64c: 0x24100083  addiu       $s0, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b648) {
            ctx->pc = 0x45B6C8u;
            goto label_45b6c8;
        }
    }
    ctx->pc = 0x45B650u;
label_45b650:
    // 0x45b650: 0x1000001d  b           . + 4 + (0x1D << 2)
label_45b654:
    if (ctx->pc == 0x45B654u) {
        ctx->pc = 0x45B654u;
            // 0x45b654: 0x24100084  addiu       $s0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->pc = 0x45B658u;
        goto label_45b658;
    }
    ctx->pc = 0x45B650u;
    {
        const bool branch_taken_0x45b650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B650u;
            // 0x45b654: 0x24100084  addiu       $s0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b650) {
            ctx->pc = 0x45B6C8u;
            goto label_45b6c8;
        }
    }
    ctx->pc = 0x45B658u;
label_45b658:
    // 0x45b658: 0x1000001b  b           . + 4 + (0x1B << 2)
label_45b65c:
    if (ctx->pc == 0x45B65Cu) {
        ctx->pc = 0x45B65Cu;
            // 0x45b65c: 0x24100085  addiu       $s0, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->pc = 0x45B660u;
        goto label_45b660;
    }
    ctx->pc = 0x45B658u;
    {
        const bool branch_taken_0x45b658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B658u;
            // 0x45b65c: 0x24100085  addiu       $s0, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b658) {
            ctx->pc = 0x45B6C8u;
            goto label_45b6c8;
        }
    }
    ctx->pc = 0x45B660u;
label_45b660:
    // 0x45b660: 0x24030086  addiu       $v1, $zero, 0x86
    ctx->pc = 0x45b660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
label_45b664:
    // 0x45b664: 0x10000018  b           . + 4 + (0x18 << 2)
label_45b668:
    if (ctx->pc == 0x45B668u) {
        ctx->pc = 0x45B668u;
            // 0x45b668: 0x24700001  addiu       $s0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x45B66Cu;
        goto label_45b66c;
    }
    ctx->pc = 0x45B664u;
    {
        const bool branch_taken_0x45b664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B664u;
            // 0x45b668: 0x24700001  addiu       $s0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b664) {
            ctx->pc = 0x45B6C8u;
            goto label_45b6c8;
        }
    }
    ctx->pc = 0x45B66Cu;
label_45b66c:
    // 0x45b66c: 0x24030087  addiu       $v1, $zero, 0x87
    ctx->pc = 0x45b66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
label_45b670:
    // 0x45b670: 0x10000015  b           . + 4 + (0x15 << 2)
label_45b674:
    if (ctx->pc == 0x45B674u) {
        ctx->pc = 0x45B674u;
            // 0x45b674: 0x24700001  addiu       $s0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x45B678u;
        goto label_45b678;
    }
    ctx->pc = 0x45B670u;
    {
        const bool branch_taken_0x45b670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B670u;
            // 0x45b674: 0x24700001  addiu       $s0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b670) {
            ctx->pc = 0x45B6C8u;
            goto label_45b6c8;
        }
    }
    ctx->pc = 0x45B678u;
label_45b678:
    // 0x45b678: 0x24030088  addiu       $v1, $zero, 0x88
    ctx->pc = 0x45b678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_45b67c:
    // 0x45b67c: 0x10000012  b           . + 4 + (0x12 << 2)
label_45b680:
    if (ctx->pc == 0x45B680u) {
        ctx->pc = 0x45B680u;
            // 0x45b680: 0x24700001  addiu       $s0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x45B684u;
        goto label_45b684;
    }
    ctx->pc = 0x45B67Cu;
    {
        const bool branch_taken_0x45b67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B67Cu;
            // 0x45b680: 0x24700001  addiu       $s0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b67c) {
            ctx->pc = 0x45B6C8u;
            goto label_45b6c8;
        }
    }
    ctx->pc = 0x45B684u;
label_45b684:
    // 0x45b684: 0x24030089  addiu       $v1, $zero, 0x89
    ctx->pc = 0x45b684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
label_45b688:
    // 0x45b688: 0x1000000f  b           . + 4 + (0xF << 2)
label_45b68c:
    if (ctx->pc == 0x45B68Cu) {
        ctx->pc = 0x45B68Cu;
            // 0x45b68c: 0x24700001  addiu       $s0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x45B690u;
        goto label_45b690;
    }
    ctx->pc = 0x45B688u;
    {
        const bool branch_taken_0x45b688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B688u;
            // 0x45b68c: 0x24700001  addiu       $s0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b688) {
            ctx->pc = 0x45B6C8u;
            goto label_45b6c8;
        }
    }
    ctx->pc = 0x45B690u;
label_45b690:
    // 0x45b690: 0x2403008a  addiu       $v1, $zero, 0x8A
    ctx->pc = 0x45b690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
label_45b694:
    // 0x45b694: 0x1000000c  b           . + 4 + (0xC << 2)
label_45b698:
    if (ctx->pc == 0x45B698u) {
        ctx->pc = 0x45B698u;
            // 0x45b698: 0x24700001  addiu       $s0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x45B69Cu;
        goto label_45b69c;
    }
    ctx->pc = 0x45B694u;
    {
        const bool branch_taken_0x45b694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B694u;
            // 0x45b698: 0x24700001  addiu       $s0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b694) {
            ctx->pc = 0x45B6C8u;
            goto label_45b6c8;
        }
    }
    ctx->pc = 0x45B69Cu;
label_45b69c:
    // 0x45b69c: 0x1000000a  b           . + 4 + (0xA << 2)
label_45b6a0:
    if (ctx->pc == 0x45B6A0u) {
        ctx->pc = 0x45B6A0u;
            // 0x45b6a0: 0x2410008b  addiu       $s0, $zero, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
        ctx->pc = 0x45B6A4u;
        goto label_45b6a4;
    }
    ctx->pc = 0x45B69Cu;
    {
        const bool branch_taken_0x45b69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B69Cu;
            // 0x45b6a0: 0x2410008b  addiu       $s0, $zero, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b69c) {
            ctx->pc = 0x45B6C8u;
            goto label_45b6c8;
        }
    }
    ctx->pc = 0x45B6A4u;
label_45b6a4:
    // 0x45b6a4: 0x10000008  b           . + 4 + (0x8 << 2)
label_45b6a8:
    if (ctx->pc == 0x45B6A8u) {
        ctx->pc = 0x45B6A8u;
            // 0x45b6a8: 0x241000e0  addiu       $s0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x45B6ACu;
        goto label_45b6ac;
    }
    ctx->pc = 0x45B6A4u;
    {
        const bool branch_taken_0x45b6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B6A4u;
            // 0x45b6a8: 0x241000e0  addiu       $s0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b6a4) {
            ctx->pc = 0x45B6C8u;
            goto label_45b6c8;
        }
    }
    ctx->pc = 0x45B6ACu;
label_45b6ac:
    // 0x45b6ac: 0x10000006  b           . + 4 + (0x6 << 2)
label_45b6b0:
    if (ctx->pc == 0x45B6B0u) {
        ctx->pc = 0x45B6B0u;
            // 0x45b6b0: 0x2410008e  addiu       $s0, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->pc = 0x45B6B4u;
        goto label_45b6b4;
    }
    ctx->pc = 0x45B6ACu;
    {
        const bool branch_taken_0x45b6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B6ACu;
            // 0x45b6b0: 0x2410008e  addiu       $s0, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b6ac) {
            ctx->pc = 0x45B6C8u;
            goto label_45b6c8;
        }
    }
    ctx->pc = 0x45B6B4u;
label_45b6b4:
    // 0x45b6b4: 0x10000004  b           . + 4 + (0x4 << 2)
label_45b6b8:
    if (ctx->pc == 0x45B6B8u) {
        ctx->pc = 0x45B6B8u;
            // 0x45b6b8: 0x2410008d  addiu       $s0, $zero, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
        ctx->pc = 0x45B6BCu;
        goto label_45b6bc;
    }
    ctx->pc = 0x45B6B4u;
    {
        const bool branch_taken_0x45b6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B6B4u;
            // 0x45b6b8: 0x2410008d  addiu       $s0, $zero, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b6b4) {
            ctx->pc = 0x45B6C8u;
            goto label_45b6c8;
        }
    }
    ctx->pc = 0x45B6BCu;
label_45b6bc:
    // 0x45b6bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_45b6c0:
    if (ctx->pc == 0x45B6C0u) {
        ctx->pc = 0x45B6C0u;
            // 0x45b6c0: 0x241000e1  addiu       $s0, $zero, 0xE1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
        ctx->pc = 0x45B6C4u;
        goto label_45b6c4;
    }
    ctx->pc = 0x45B6BCu;
    {
        const bool branch_taken_0x45b6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B6BCu;
            // 0x45b6c0: 0x241000e1  addiu       $s0, $zero, 0xE1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b6bc) {
            ctx->pc = 0x45B6C8u;
            goto label_45b6c8;
        }
    }
    ctx->pc = 0x45B6C4u;
label_45b6c4:
    // 0x45b6c4: 0x2410008f  addiu       $s0, $zero, 0x8F
    ctx->pc = 0x45b6c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_45b6c8:
    // 0x45b6c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x45b6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45b6cc:
    // 0x45b6cc: 0x52030017  beql        $s0, $v1, . + 4 + (0x17 << 2)
label_45b6d0:
    if (ctx->pc == 0x45B6D0u) {
        ctx->pc = 0x45B6D0u;
            // 0x45b6d0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x45B6D4u;
        goto label_45b6d4;
    }
    ctx->pc = 0x45B6CCu;
    {
        const bool branch_taken_0x45b6cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x45b6cc) {
            ctx->pc = 0x45B6D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45B6CCu;
            // 0x45b6d0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45B72Cu;
            goto label_45b72c;
        }
    }
    ctx->pc = 0x45B6D4u;
label_45b6d4:
    // 0x45b6d4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x45b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_45b6d8:
    // 0x45b6d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x45b6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45b6dc:
    // 0x45b6dc: 0x8c5289f0  lw          $s2, -0x7610($v0)
    ctx->pc = 0x45b6dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_45b6e0:
    // 0x45b6e0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x45b6e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_45b6e4:
    // 0x45b6e4: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x45b6e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_45b6e8:
    // 0x45b6e8: 0x320f809  jalr        $t9
label_45b6ec:
    if (ctx->pc == 0x45B6ECu) {
        ctx->pc = 0x45B6ECu;
            // 0x45b6ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45B6F0u;
        goto label_45b6f0;
    }
    ctx->pc = 0x45B6E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45B6F0u);
        ctx->pc = 0x45B6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B6E8u;
            // 0x45b6ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45B6F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45B6F0u; }
            if (ctx->pc != 0x45B6F0u) { return; }
        }
        }
    }
    ctx->pc = 0x45B6F0u;
label_45b6f0:
    // 0x45b6f0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x45b6f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_45b6f4:
    // 0x45b6f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x45b6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_45b6f8:
    // 0x45b6f8: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x45b6f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_45b6fc:
    // 0x45b6fc: 0x320f809  jalr        $t9
label_45b700:
    if (ctx->pc == 0x45B700u) {
        ctx->pc = 0x45B700u;
            // 0x45b700: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45B704u;
        goto label_45b704;
    }
    ctx->pc = 0x45B6FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45B704u);
        ctx->pc = 0x45B700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B6FCu;
            // 0x45b700: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45B704u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45B704u; }
            if (ctx->pc != 0x45B704u) { return; }
        }
        }
    }
    ctx->pc = 0x45B704u;
label_45b704:
    // 0x45b704: 0x3c023f26  lui         $v0, 0x3F26
    ctx->pc = 0x45b704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
label_45b708:
    // 0x45b708: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x45b708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_45b70c:
    // 0x45b70c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x45b70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_45b710:
    // 0x45b710: 0x2407fc18  addiu       $a3, $zero, -0x3E8
    ctx->pc = 0x45b710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
label_45b714:
    // 0x45b714: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x45b714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45b718:
    // 0x45b718: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45b718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45b71c:
    // 0x45b71c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x45b71cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_45b720:
    // 0x45b720: 0xc0c85cc  jal         func_321730
label_45b724:
    if (ctx->pc == 0x45B724u) {
        ctx->pc = 0x45B724u;
            // 0x45b724: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45B728u;
        goto label_45b728;
    }
    ctx->pc = 0x45B720u;
    SET_GPR_U32(ctx, 31, 0x45B728u);
    ctx->pc = 0x45B724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B720u;
            // 0x45b724: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321730u;
    if (runtime->hasFunction(0x321730u)) {
        auto targetFn = runtime->lookupFunction(0x321730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B728u; }
        if (ctx->pc != 0x45B728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321730_0x321730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B728u; }
        if (ctx->pc != 0x45B728u) { return; }
    }
    ctx->pc = 0x45B728u;
label_45b728:
    // 0x45b728: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x45b728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_45b72c:
    // 0x45b72c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45b72cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45b730:
    // 0x45b730: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45b730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45b734:
    // 0x45b734: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45b734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45b738:
    // 0x45b738: 0x3e00008  jr          $ra
label_45b73c:
    if (ctx->pc == 0x45B73Cu) {
        ctx->pc = 0x45B73Cu;
            // 0x45b73c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x45B740u;
        goto label_45b740;
    }
    ctx->pc = 0x45B738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45B73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B738u;
            // 0x45b73c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45B740u;
label_45b740:
    // 0x45b740: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x45b740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_45b744:
    // 0x45b744: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x45b744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_45b748:
    // 0x45b748: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x45b748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_45b74c:
    // 0x45b74c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x45b74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_45b750:
    // 0x45b750: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x45b750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_45b754:
    // 0x45b754: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x45b754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_45b758:
    // 0x45b758: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45b758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_45b75c:
    // 0x45b75c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45b75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45b760:
    // 0x45b760: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x45b760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_45b764:
    // 0x45b764: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45b764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45b768:
    // 0x45b768: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x45b768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_45b76c:
    // 0x45b76c: 0x8c518a08  lw          $s1, -0x75F8($v0)
    ctx->pc = 0x45b76cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_45b770:
    // 0x45b770: 0xc0c9a58  jal         func_326960
label_45b774:
    if (ctx->pc == 0x45B774u) {
        ctx->pc = 0x45B774u;
            // 0x45b774: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x45B778u;
        goto label_45b778;
    }
    ctx->pc = 0x45B770u;
    SET_GPR_U32(ctx, 31, 0x45B778u);
    ctx->pc = 0x45B774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B770u;
            // 0x45b774: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B778u; }
        if (ctx->pc != 0x45B778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B778u; }
        if (ctx->pc != 0x45B778u) { return; }
    }
    ctx->pc = 0x45B778u;
label_45b778:
    // 0x45b778: 0x92430010  lbu         $v1, 0x10($s2)
    ctx->pc = 0x45b778u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
label_45b77c:
    // 0x45b77c: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x45b77cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_45b780:
    // 0x45b780: 0x102001a5  beqz        $at, . + 4 + (0x1A5 << 2)
label_45b784:
    if (ctx->pc == 0x45B784u) {
        ctx->pc = 0x45B784u;
            // 0x45b784: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45B788u;
        goto label_45b788;
    }
    ctx->pc = 0x45B780u;
    {
        const bool branch_taken_0x45b780 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B780u;
            // 0x45b784: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b780) {
            ctx->pc = 0x45BE18u;
            goto label_45be18;
        }
    }
    ctx->pc = 0x45B788u;
label_45b788:
    // 0x45b788: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x45b788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_45b78c:
    // 0x45b78c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x45b78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45b790:
    // 0x45b790: 0x2484e2a0  addiu       $a0, $a0, -0x1D60
    ctx->pc = 0x45b790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959776));
label_45b794:
    // 0x45b794: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45b794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_45b798:
    // 0x45b798: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x45b798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_45b79c:
    // 0x45b79c: 0x600008  jr          $v1
label_45b7a0:
    if (ctx->pc == 0x45B7A0u) {
        ctx->pc = 0x45B7A4u;
        goto label_45b7a4;
    }
    ctx->pc = 0x45B79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x45B7A4u: goto label_45b7a4;
            case 0x45BA84u: goto label_45ba84;
            case 0x45BBE0u: goto label_45bbe0;
            case 0x45BC14u: goto label_45bc14;
            case 0x45BC68u: goto label_45bc68;
            case 0x45BCE0u: goto label_45bce0;
            case 0x45BD34u: goto label_45bd34;
            case 0x45BD6Cu: goto label_45bd6c;
            case 0x45BE18u: goto label_45be18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x45B7A4u;
label_45b7a4:
    // 0x45b7a4: 0x92460074  lbu         $a2, 0x74($s2)
    ctx->pc = 0x45b7a4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_45b7a8:
    // 0x45b7a8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x45b7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_45b7ac:
    // 0x45b7ac: 0x50c5004c  beql        $a2, $a1, . + 4 + (0x4C << 2)
label_45b7b0:
    if (ctx->pc == 0x45B7B0u) {
        ctx->pc = 0x45B7B0u;
            // 0x45b7b0: 0x8e440054  lw          $a0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->pc = 0x45B7B4u;
        goto label_45b7b4;
    }
    ctx->pc = 0x45B7ACu;
    {
        const bool branch_taken_0x45b7ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x45b7ac) {
            ctx->pc = 0x45B7B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45B7ACu;
            // 0x45b7b0: 0x8e440054  lw          $a0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45B8E0u;
            goto label_45b8e0;
        }
    }
    ctx->pc = 0x45B7B4u;
label_45b7b4:
    // 0x45b7b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x45b7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45b7b8:
    // 0x45b7b8: 0x50c3003c  beql        $a2, $v1, . + 4 + (0x3C << 2)
label_45b7bc:
    if (ctx->pc == 0x45B7BCu) {
        ctx->pc = 0x45B7BCu;
            // 0x45b7bc: 0x8e440054  lw          $a0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->pc = 0x45B7C0u;
        goto label_45b7c0;
    }
    ctx->pc = 0x45B7B8u;
    {
        const bool branch_taken_0x45b7b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x45b7b8) {
            ctx->pc = 0x45B7BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45B7B8u;
            // 0x45b7bc: 0x8e440054  lw          $a0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45B8ACu;
            goto label_45b8ac;
        }
    }
    ctx->pc = 0x45B7C0u;
label_45b7c0:
    // 0x45b7c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x45b7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45b7c4:
    // 0x45b7c4: 0x50c3002e  beql        $a2, $v1, . + 4 + (0x2E << 2)
label_45b7c8:
    if (ctx->pc == 0x45B7C8u) {
        ctx->pc = 0x45B7C8u;
            // 0x45b7c8: 0x8e440054  lw          $a0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->pc = 0x45B7CCu;
        goto label_45b7cc;
    }
    ctx->pc = 0x45B7C4u;
    {
        const bool branch_taken_0x45b7c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x45b7c4) {
            ctx->pc = 0x45B7C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45B7C4u;
            // 0x45b7c8: 0x8e440054  lw          $a0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45B880u;
            goto label_45b880;
        }
    }
    ctx->pc = 0x45B7CCu;
label_45b7cc:
    // 0x45b7cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x45b7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45b7d0:
    // 0x45b7d0: 0x50c30011  beql        $a2, $v1, . + 4 + (0x11 << 2)
label_45b7d4:
    if (ctx->pc == 0x45B7D4u) {
        ctx->pc = 0x45B7D4u;
            // 0x45b7d4: 0x8e440054  lw          $a0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->pc = 0x45B7D8u;
        goto label_45b7d8;
    }
    ctx->pc = 0x45B7D0u;
    {
        const bool branch_taken_0x45b7d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x45b7d0) {
            ctx->pc = 0x45B7D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45B7D0u;
            // 0x45b7d4: 0x8e440054  lw          $a0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45B818u;
            goto label_45b818;
        }
    }
    ctx->pc = 0x45B7D8u;
label_45b7d8:
    // 0x45b7d8: 0x50c00003  beql        $a2, $zero, . + 4 + (0x3 << 2)
label_45b7dc:
    if (ctx->pc == 0x45B7DCu) {
        ctx->pc = 0x45B7DCu;
            // 0x45b7dc: 0x8e440054  lw          $a0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->pc = 0x45B7E0u;
        goto label_45b7e0;
    }
    ctx->pc = 0x45B7D8u;
    {
        const bool branch_taken_0x45b7d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b7d8) {
            ctx->pc = 0x45B7DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45B7D8u;
            // 0x45b7dc: 0x8e440054  lw          $a0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45B7E8u;
            goto label_45b7e8;
        }
    }
    ctx->pc = 0x45B7E0u;
label_45b7e0:
    // 0x45b7e0: 0x1000018e  b           . + 4 + (0x18E << 2)
label_45b7e4:
    if (ctx->pc == 0x45B7E4u) {
        ctx->pc = 0x45B7E4u;
            // 0x45b7e4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x45B7E8u;
        goto label_45b7e8;
    }
    ctx->pc = 0x45B7E0u;
    {
        const bool branch_taken_0x45b7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B7E0u;
            // 0x45b7e4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b7e0) {
            ctx->pc = 0x45BE1Cu;
            goto label_45be1c;
        }
    }
    ctx->pc = 0x45B7E8u;
label_45b7e8:
    // 0x45b7e8: 0xc0ca008  jal         func_328020
label_45b7ec:
    if (ctx->pc == 0x45B7ECu) {
        ctx->pc = 0x45B7F0u;
        goto label_45b7f0;
    }
    ctx->pc = 0x45B7E8u;
    SET_GPR_U32(ctx, 31, 0x45B7F0u);
    ctx->pc = 0x328020u;
    if (runtime->hasFunction(0x328020u)) {
        auto targetFn = runtime->lookupFunction(0x328020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B7F0u; }
        if (ctx->pc != 0x45B7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00328020_0x328020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B7F0u; }
        if (ctx->pc != 0x45B7F0u) { return; }
    }
    ctx->pc = 0x45B7F0u;
label_45b7f0:
    // 0x45b7f0: 0x10400189  beqz        $v0, . + 4 + (0x189 << 2)
label_45b7f4:
    if (ctx->pc == 0x45B7F4u) {
        ctx->pc = 0x45B7F8u;
        goto label_45b7f8;
    }
    ctx->pc = 0x45B7F0u;
    {
        const bool branch_taken_0x45b7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b7f0) {
            ctx->pc = 0x45BE18u;
            goto label_45be18;
        }
    }
    ctx->pc = 0x45B7F8u;
label_45b7f8:
    // 0x45b7f8: 0x92420074  lbu         $v0, 0x74($s2)
    ctx->pc = 0x45b7f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_45b7fc:
    // 0x45b7fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x45b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_45b800:
    // 0x45b800: 0xa2420074  sb          $v0, 0x74($s2)
    ctx->pc = 0x45b800u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
label_45b804:
    // 0x45b804: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x45b804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_45b808:
    // 0x45b808: 0xc0c9ec0  jal         func_327B00
label_45b80c:
    if (ctx->pc == 0x45B80Cu) {
        ctx->pc = 0x45B80Cu;
            // 0x45b80c: 0x3405cb83  ori         $a1, $zero, 0xCB83 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52099);
        ctx->pc = 0x45B810u;
        goto label_45b810;
    }
    ctx->pc = 0x45B808u;
    SET_GPR_U32(ctx, 31, 0x45B810u);
    ctx->pc = 0x45B80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B808u;
            // 0x45b80c: 0x3405cb83  ori         $a1, $zero, 0xCB83 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52099);
        ctx->in_delay_slot = false;
    ctx->pc = 0x327B00u;
    if (runtime->hasFunction(0x327B00u)) {
        auto targetFn = runtime->lookupFunction(0x327B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B810u; }
        if (ctx->pc != 0x45B810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327B00_0x327b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B810u; }
        if (ctx->pc != 0x45B810u) { return; }
    }
    ctx->pc = 0x45B810u;
label_45b810:
    // 0x45b810: 0x10000181  b           . + 4 + (0x181 << 2)
label_45b814:
    if (ctx->pc == 0x45B814u) {
        ctx->pc = 0x45B818u;
        goto label_45b818;
    }
    ctx->pc = 0x45B810u;
    {
        const bool branch_taken_0x45b810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b810) {
            ctx->pc = 0x45BE18u;
            goto label_45be18;
        }
    }
    ctx->pc = 0x45B818u;
label_45b818:
    // 0x45b818: 0xc0ca008  jal         func_328020
label_45b81c:
    if (ctx->pc == 0x45B81Cu) {
        ctx->pc = 0x45B820u;
        goto label_45b820;
    }
    ctx->pc = 0x45B818u;
    SET_GPR_U32(ctx, 31, 0x45B820u);
    ctx->pc = 0x328020u;
    if (runtime->hasFunction(0x328020u)) {
        auto targetFn = runtime->lookupFunction(0x328020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B820u; }
        if (ctx->pc != 0x45B820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00328020_0x328020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B820u; }
        if (ctx->pc != 0x45B820u) { return; }
    }
    ctx->pc = 0x45B820u;
label_45b820:
    // 0x45b820: 0x1040017d  beqz        $v0, . + 4 + (0x17D << 2)
label_45b824:
    if (ctx->pc == 0x45B824u) {
        ctx->pc = 0x45B828u;
        goto label_45b828;
    }
    ctx->pc = 0x45B820u;
    {
        const bool branch_taken_0x45b820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b820) {
            ctx->pc = 0x45BE18u;
            goto label_45be18;
        }
    }
    ctx->pc = 0x45B828u;
label_45b828:
    // 0x45b828: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x45b828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_45b82c:
    // 0x45b82c: 0xc0c9ec0  jal         func_327B00
label_45b830:
    if (ctx->pc == 0x45B830u) {
        ctx->pc = 0x45B830u;
            // 0x45b830: 0x3405cb8e  ori         $a1, $zero, 0xCB8E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52110);
        ctx->pc = 0x45B834u;
        goto label_45b834;
    }
    ctx->pc = 0x45B82Cu;
    SET_GPR_U32(ctx, 31, 0x45B834u);
    ctx->pc = 0x45B830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B82Cu;
            // 0x45b830: 0x3405cb8e  ori         $a1, $zero, 0xCB8E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52110);
        ctx->in_delay_slot = false;
    ctx->pc = 0x327B00u;
    if (runtime->hasFunction(0x327B00u)) {
        auto targetFn = runtime->lookupFunction(0x327B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B834u; }
        if (ctx->pc != 0x45B834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327B00_0x327b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B834u; }
        if (ctx->pc != 0x45B834u) { return; }
    }
    ctx->pc = 0x45B834u;
label_45b834:
    // 0x45b834: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x45b834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_45b838:
    // 0x45b838: 0xc0c9ec0  jal         func_327B00
label_45b83c:
    if (ctx->pc == 0x45B83Cu) {
        ctx->pc = 0x45B83Cu;
            // 0x45b83c: 0x3405cb8f  ori         $a1, $zero, 0xCB8F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52111);
        ctx->pc = 0x45B840u;
        goto label_45b840;
    }
    ctx->pc = 0x45B838u;
    SET_GPR_U32(ctx, 31, 0x45B840u);
    ctx->pc = 0x45B83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B838u;
            // 0x45b83c: 0x3405cb8f  ori         $a1, $zero, 0xCB8F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52111);
        ctx->in_delay_slot = false;
    ctx->pc = 0x327B00u;
    if (runtime->hasFunction(0x327B00u)) {
        auto targetFn = runtime->lookupFunction(0x327B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B840u; }
        if (ctx->pc != 0x45B840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327B00_0x327b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B840u; }
        if (ctx->pc != 0x45B840u) { return; }
    }
    ctx->pc = 0x45B840u;
label_45b840:
    // 0x45b840: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x45b840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_45b844:
    // 0x45b844: 0xc0c9ec0  jal         func_327B00
label_45b848:
    if (ctx->pc == 0x45B848u) {
        ctx->pc = 0x45B848u;
            // 0x45b848: 0x3405cb90  ori         $a1, $zero, 0xCB90 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52112);
        ctx->pc = 0x45B84Cu;
        goto label_45b84c;
    }
    ctx->pc = 0x45B844u;
    SET_GPR_U32(ctx, 31, 0x45B84Cu);
    ctx->pc = 0x45B848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B844u;
            // 0x45b848: 0x3405cb90  ori         $a1, $zero, 0xCB90 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52112);
        ctx->in_delay_slot = false;
    ctx->pc = 0x327B00u;
    if (runtime->hasFunction(0x327B00u)) {
        auto targetFn = runtime->lookupFunction(0x327B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B84Cu; }
        if (ctx->pc != 0x45B84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327B00_0x327b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B84Cu; }
        if (ctx->pc != 0x45B84Cu) { return; }
    }
    ctx->pc = 0x45B84Cu;
label_45b84c:
    // 0x45b84c: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x45b84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_45b850:
    // 0x45b850: 0xc0c9ec0  jal         func_327B00
label_45b854:
    if (ctx->pc == 0x45B854u) {
        ctx->pc = 0x45B854u;
            // 0x45b854: 0x3405cb91  ori         $a1, $zero, 0xCB91 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52113);
        ctx->pc = 0x45B858u;
        goto label_45b858;
    }
    ctx->pc = 0x45B850u;
    SET_GPR_U32(ctx, 31, 0x45B858u);
    ctx->pc = 0x45B854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B850u;
            // 0x45b854: 0x3405cb91  ori         $a1, $zero, 0xCB91 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52113);
        ctx->in_delay_slot = false;
    ctx->pc = 0x327B00u;
    if (runtime->hasFunction(0x327B00u)) {
        auto targetFn = runtime->lookupFunction(0x327B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B858u; }
        if (ctx->pc != 0x45B858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327B00_0x327b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B858u; }
        if (ctx->pc != 0x45B858u) { return; }
    }
    ctx->pc = 0x45B858u;
label_45b858:
    // 0x45b858: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x45b858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_45b85c:
    // 0x45b85c: 0xc0c9ec0  jal         func_327B00
label_45b860:
    if (ctx->pc == 0x45B860u) {
        ctx->pc = 0x45B860u;
            // 0x45b860: 0x3405cb92  ori         $a1, $zero, 0xCB92 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52114);
        ctx->pc = 0x45B864u;
        goto label_45b864;
    }
    ctx->pc = 0x45B85Cu;
    SET_GPR_U32(ctx, 31, 0x45B864u);
    ctx->pc = 0x45B860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B85Cu;
            // 0x45b860: 0x3405cb92  ori         $a1, $zero, 0xCB92 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52114);
        ctx->in_delay_slot = false;
    ctx->pc = 0x327B00u;
    if (runtime->hasFunction(0x327B00u)) {
        auto targetFn = runtime->lookupFunction(0x327B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B864u; }
        if (ctx->pc != 0x45B864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327B00_0x327b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B864u; }
        if (ctx->pc != 0x45B864u) { return; }
    }
    ctx->pc = 0x45B864u;
label_45b864:
    // 0x45b864: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x45b864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_45b868:
    // 0x45b868: 0xc0c9ec0  jal         func_327B00
label_45b86c:
    if (ctx->pc == 0x45B86Cu) {
        ctx->pc = 0x45B86Cu;
            // 0x45b86c: 0x3405cb93  ori         $a1, $zero, 0xCB93 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52115);
        ctx->pc = 0x45B870u;
        goto label_45b870;
    }
    ctx->pc = 0x45B868u;
    SET_GPR_U32(ctx, 31, 0x45B870u);
    ctx->pc = 0x45B86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B868u;
            // 0x45b86c: 0x3405cb93  ori         $a1, $zero, 0xCB93 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52115);
        ctx->in_delay_slot = false;
    ctx->pc = 0x327B00u;
    if (runtime->hasFunction(0x327B00u)) {
        auto targetFn = runtime->lookupFunction(0x327B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B870u; }
        if (ctx->pc != 0x45B870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327B00_0x327b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B870u; }
        if (ctx->pc != 0x45B870u) { return; }
    }
    ctx->pc = 0x45B870u;
label_45b870:
    // 0x45b870: 0x92430074  lbu         $v1, 0x74($s2)
    ctx->pc = 0x45b870u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_45b874:
    // 0x45b874: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x45b874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_45b878:
    // 0x45b878: 0x10000167  b           . + 4 + (0x167 << 2)
label_45b87c:
    if (ctx->pc == 0x45B87Cu) {
        ctx->pc = 0x45B87Cu;
            // 0x45b87c: 0xa2430074  sb          $v1, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x45B880u;
        goto label_45b880;
    }
    ctx->pc = 0x45B878u;
    {
        const bool branch_taken_0x45b878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B878u;
            // 0x45b87c: 0xa2430074  sb          $v1, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b878) {
            ctx->pc = 0x45BE18u;
            goto label_45be18;
        }
    }
    ctx->pc = 0x45B880u;
label_45b880:
    // 0x45b880: 0xc0ca008  jal         func_328020
label_45b884:
    if (ctx->pc == 0x45B884u) {
        ctx->pc = 0x45B888u;
        goto label_45b888;
    }
    ctx->pc = 0x45B880u;
    SET_GPR_U32(ctx, 31, 0x45B888u);
    ctx->pc = 0x328020u;
    if (runtime->hasFunction(0x328020u)) {
        auto targetFn = runtime->lookupFunction(0x328020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B888u; }
        if (ctx->pc != 0x45B888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00328020_0x328020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B888u; }
        if (ctx->pc != 0x45B888u) { return; }
    }
    ctx->pc = 0x45B888u;
label_45b888:
    // 0x45b888: 0x10400163  beqz        $v0, . + 4 + (0x163 << 2)
label_45b88c:
    if (ctx->pc == 0x45B88Cu) {
        ctx->pc = 0x45B890u;
        goto label_45b890;
    }
    ctx->pc = 0x45B888u;
    {
        const bool branch_taken_0x45b888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b888) {
            ctx->pc = 0x45BE18u;
            goto label_45be18;
        }
    }
    ctx->pc = 0x45B890u;
label_45b890:
    // 0x45b890: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x45b890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_45b894:
    // 0x45b894: 0xc0c9ec0  jal         func_327B00
label_45b898:
    if (ctx->pc == 0x45B898u) {
        ctx->pc = 0x45B898u;
            // 0x45b898: 0x3405cf6c  ori         $a1, $zero, 0xCF6C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53100);
        ctx->pc = 0x45B89Cu;
        goto label_45b89c;
    }
    ctx->pc = 0x45B894u;
    SET_GPR_U32(ctx, 31, 0x45B89Cu);
    ctx->pc = 0x45B898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B894u;
            // 0x45b898: 0x3405cf6c  ori         $a1, $zero, 0xCF6C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53100);
        ctx->in_delay_slot = false;
    ctx->pc = 0x327B00u;
    if (runtime->hasFunction(0x327B00u)) {
        auto targetFn = runtime->lookupFunction(0x327B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B89Cu; }
        if (ctx->pc != 0x45B89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327B00_0x327b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B89Cu; }
        if (ctx->pc != 0x45B89Cu) { return; }
    }
    ctx->pc = 0x45B89Cu;
label_45b89c:
    // 0x45b89c: 0x92430074  lbu         $v1, 0x74($s2)
    ctx->pc = 0x45b89cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_45b8a0:
    // 0x45b8a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x45b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_45b8a4:
    // 0x45b8a4: 0x1000015c  b           . + 4 + (0x15C << 2)
label_45b8a8:
    if (ctx->pc == 0x45B8A8u) {
        ctx->pc = 0x45B8A8u;
            // 0x45b8a8: 0xa2430074  sb          $v1, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x45B8ACu;
        goto label_45b8ac;
    }
    ctx->pc = 0x45B8A4u;
    {
        const bool branch_taken_0x45b8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B8A4u;
            // 0x45b8a8: 0xa2430074  sb          $v1, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b8a4) {
            ctx->pc = 0x45BE18u;
            goto label_45be18;
        }
    }
    ctx->pc = 0x45B8ACu;
label_45b8ac:
    // 0x45b8ac: 0xc0ca008  jal         func_328020
label_45b8b0:
    if (ctx->pc == 0x45B8B0u) {
        ctx->pc = 0x45B8B4u;
        goto label_45b8b4;
    }
    ctx->pc = 0x45B8ACu;
    SET_GPR_U32(ctx, 31, 0x45B8B4u);
    ctx->pc = 0x328020u;
    if (runtime->hasFunction(0x328020u)) {
        auto targetFn = runtime->lookupFunction(0x328020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B8B4u; }
        if (ctx->pc != 0x45B8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00328020_0x328020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B8B4u; }
        if (ctx->pc != 0x45B8B4u) { return; }
    }
    ctx->pc = 0x45B8B4u;
label_45b8b4:
    // 0x45b8b4: 0x10400158  beqz        $v0, . + 4 + (0x158 << 2)
label_45b8b8:
    if (ctx->pc == 0x45B8B8u) {
        ctx->pc = 0x45B8BCu;
        goto label_45b8bc;
    }
    ctx->pc = 0x45B8B4u;
    {
        const bool branch_taken_0x45b8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b8b4) {
            ctx->pc = 0x45BE18u;
            goto label_45be18;
        }
    }
    ctx->pc = 0x45B8BCu;
label_45b8bc:
    // 0x45b8bc: 0xc075268  jal         func_1D49A0
label_45b8c0:
    if (ctx->pc == 0x45B8C0u) {
        ctx->pc = 0x45B8C4u;
        goto label_45b8c4;
    }
    ctx->pc = 0x45B8BCu;
    SET_GPR_U32(ctx, 31, 0x45B8C4u);
    ctx->pc = 0x1D49A0u;
    if (runtime->hasFunction(0x1D49A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D49A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B8C4u; }
        if (ctx->pc != 0x45B8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D49A0_0x1d49a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B8C4u; }
        if (ctx->pc != 0x45B8C4u) { return; }
    }
    ctx->pc = 0x45B8C4u;
label_45b8c4:
    // 0x45b8c4: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x45b8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_45b8c8:
    // 0x45b8c8: 0xc0c9ec0  jal         func_327B00
label_45b8cc:
    if (ctx->pc == 0x45B8CCu) {
        ctx->pc = 0x45B8CCu;
            // 0x45b8cc: 0x3405cb7a  ori         $a1, $zero, 0xCB7A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52090);
        ctx->pc = 0x45B8D0u;
        goto label_45b8d0;
    }
    ctx->pc = 0x45B8C8u;
    SET_GPR_U32(ctx, 31, 0x45B8D0u);
    ctx->pc = 0x45B8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B8C8u;
            // 0x45b8cc: 0x3405cb7a  ori         $a1, $zero, 0xCB7A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52090);
        ctx->in_delay_slot = false;
    ctx->pc = 0x327B00u;
    if (runtime->hasFunction(0x327B00u)) {
        auto targetFn = runtime->lookupFunction(0x327B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B8D0u; }
        if (ctx->pc != 0x45B8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327B00_0x327b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B8D0u; }
        if (ctx->pc != 0x45B8D0u) { return; }
    }
    ctx->pc = 0x45B8D0u;
label_45b8d0:
    // 0x45b8d0: 0x92430074  lbu         $v1, 0x74($s2)
    ctx->pc = 0x45b8d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_45b8d4:
    // 0x45b8d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x45b8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_45b8d8:
    // 0x45b8d8: 0x1000014f  b           . + 4 + (0x14F << 2)
label_45b8dc:
    if (ctx->pc == 0x45B8DCu) {
        ctx->pc = 0x45B8DCu;
            // 0x45b8dc: 0xa2430074  sb          $v1, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x45B8E0u;
        goto label_45b8e0;
    }
    ctx->pc = 0x45B8D8u;
    {
        const bool branch_taken_0x45b8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45B8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B8D8u;
            // 0x45b8dc: 0xa2430074  sb          $v1, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45b8d8) {
            ctx->pc = 0x45BE18u;
            goto label_45be18;
        }
    }
    ctx->pc = 0x45B8E0u;
label_45b8e0:
    // 0x45b8e0: 0xc0ca008  jal         func_328020
label_45b8e4:
    if (ctx->pc == 0x45B8E4u) {
        ctx->pc = 0x45B8E8u;
        goto label_45b8e8;
    }
    ctx->pc = 0x45B8E0u;
    SET_GPR_U32(ctx, 31, 0x45B8E8u);
    ctx->pc = 0x328020u;
    if (runtime->hasFunction(0x328020u)) {
        auto targetFn = runtime->lookupFunction(0x328020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B8E8u; }
        if (ctx->pc != 0x45B8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00328020_0x328020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B8E8u; }
        if (ctx->pc != 0x45B8E8u) { return; }
    }
    ctx->pc = 0x45B8E8u;
label_45b8e8:
    // 0x45b8e8: 0x1040014b  beqz        $v0, . + 4 + (0x14B << 2)
label_45b8ec:
    if (ctx->pc == 0x45B8ECu) {
        ctx->pc = 0x45B8F0u;
        goto label_45b8f0;
    }
    ctx->pc = 0x45B8E8u;
    {
        const bool branch_taken_0x45b8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b8e8) {
            ctx->pc = 0x45BE18u;
            goto label_45be18;
        }
    }
    ctx->pc = 0x45B8F0u;
label_45b8f0:
    // 0x45b8f0: 0xc075214  jal         func_1D4850
label_45b8f4:
    if (ctx->pc == 0x45B8F4u) {
        ctx->pc = 0x45B8F8u;
        goto label_45b8f8;
    }
    ctx->pc = 0x45B8F0u;
    SET_GPR_U32(ctx, 31, 0x45B8F8u);
    ctx->pc = 0x1D4850u;
    if (runtime->hasFunction(0x1D4850u)) {
        auto targetFn = runtime->lookupFunction(0x1D4850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B8F8u; }
        if (ctx->pc != 0x45B8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4850_0x1d4850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B8F8u; }
        if (ctx->pc != 0x45B8F8u) { return; }
    }
    ctx->pc = 0x45B8F8u;
label_45b8f8:
    // 0x45b8f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x45b8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_45b8fc:
    // 0x45b8fc: 0x8c42a348  lw          $v0, -0x5CB8($v0)
    ctx->pc = 0x45b8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
label_45b900:
    // 0x45b900: 0xa0400038  sb          $zero, 0x38($v0)
    ctx->pc = 0x45b900u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 0));
label_45b904:
    // 0x45b904: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x45b904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_45b908:
    // 0x45b908: 0xc0c9a60  jal         func_326980
label_45b90c:
    if (ctx->pc == 0x45B90Cu) {
        ctx->pc = 0x45B90Cu;
            // 0x45b90c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x45B910u;
        goto label_45b910;
    }
    ctx->pc = 0x45B908u;
    SET_GPR_U32(ctx, 31, 0x45B910u);
    ctx->pc = 0x45B90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B908u;
            // 0x45b90c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326980u;
    if (runtime->hasFunction(0x326980u)) {
        auto targetFn = runtime->lookupFunction(0x326980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B910u; }
        if (ctx->pc != 0x45B910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326980_0x326980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B910u; }
        if (ctx->pc != 0x45B910u) { return; }
    }
    ctx->pc = 0x45B910u;
label_45b910:
    // 0x45b910: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x45b910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_45b914:
    // 0x45b914: 0xc0c9a60  jal         func_326980
label_45b918:
    if (ctx->pc == 0x45B918u) {
        ctx->pc = 0x45B918u;
            // 0x45b918: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x45B91Cu;
        goto label_45b91c;
    }
    ctx->pc = 0x45B914u;
    SET_GPR_U32(ctx, 31, 0x45B91Cu);
    ctx->pc = 0x45B918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B914u;
            // 0x45b918: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326980u;
    if (runtime->hasFunction(0x326980u)) {
        auto targetFn = runtime->lookupFunction(0x326980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B91Cu; }
        if (ctx->pc != 0x45B91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326980_0x326980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B91Cu; }
        if (ctx->pc != 0x45B91Cu) { return; }
    }
    ctx->pc = 0x45B91Cu;
label_45b91c:
    // 0x45b91c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x45b91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_45b920:
    // 0x45b920: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_45b924:
    if (ctx->pc == 0x45B924u) {
        ctx->pc = 0x45B924u;
            // 0x45b924: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x45B928u;
        goto label_45b928;
    }
    ctx->pc = 0x45B920u;
    {
        const bool branch_taken_0x45b920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b920) {
            ctx->pc = 0x45B924u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45B920u;
            // 0x45b924: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45B928u;
            goto label_45b928;
        }
    }
    ctx->pc = 0x45B928u;
label_45b928:
    // 0x45b928: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x45b928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_45b92c:
    // 0x45b92c: 0xc0c9a58  jal         func_326960
label_45b930:
    if (ctx->pc == 0x45B930u) {
        ctx->pc = 0x45B930u;
            // 0x45b930: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x45B934u;
        goto label_45b934;
    }
    ctx->pc = 0x45B92Cu;
    SET_GPR_U32(ctx, 31, 0x45B934u);
    ctx->pc = 0x45B930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B92Cu;
            // 0x45b930: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B934u; }
        if (ctx->pc != 0x45B934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B934u; }
        if (ctx->pc != 0x45B934u) { return; }
    }
    ctx->pc = 0x45B934u;
label_45b934:
    // 0x45b934: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x45b934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_45b938:
    // 0x45b938: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45b938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_45b93c:
    // 0x45b93c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x45b93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_45b940:
    // 0x45b940: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x45b940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_45b944:
    // 0x45b944: 0xac64005c  sw          $a0, 0x5C($v1)
    ctx->pc = 0x45b944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 4));
label_45b948:
    // 0x45b948: 0x92430074  lbu         $v1, 0x74($s2)
    ctx->pc = 0x45b948u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_45b94c:
    // 0x45b94c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x45b94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_45b950:
    // 0x45b950: 0xa2430074  sb          $v1, 0x74($s2)
    ctx->pc = 0x45b950u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 3));
label_45b954:
    // 0x45b954: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x45b954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_45b958:
    // 0x45b958: 0x8c440188  lw          $a0, 0x188($v0)
    ctx->pc = 0x45b958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
label_45b95c:
    // 0x45b95c: 0xc05d85a  jal         func_176168
label_45b960:
    if (ctx->pc == 0x45B960u) {
        ctx->pc = 0x45B960u;
            // 0x45b960: 0x24a5e230  addiu       $a1, $a1, -0x1DD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959664));
        ctx->pc = 0x45B964u;
        goto label_45b964;
    }
    ctx->pc = 0x45B95Cu;
    SET_GPR_U32(ctx, 31, 0x45B964u);
    ctx->pc = 0x45B960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B95Cu;
            // 0x45b960: 0x24a5e230  addiu       $a1, $a1, -0x1DD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176168u;
    if (runtime->hasFunction(0x176168u)) {
        auto targetFn = runtime->lookupFunction(0x176168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B964u; }
        if (ctx->pc != 0x45B964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176168_0x176168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B964u; }
        if (ctx->pc != 0x45B964u) { return; }
    }
    ctx->pc = 0x45B964u;
label_45b964:
    // 0x45b964: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x45b964u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_45b968:
    // 0x45b968: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x45b968u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_45b96c:
    // 0x45b96c: 0x320f809  jalr        $t9
label_45b970:
    if (ctx->pc == 0x45B970u) {
        ctx->pc = 0x45B970u;
            // 0x45b970: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45B974u;
        goto label_45b974;
    }
    ctx->pc = 0x45B96Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45B974u);
        ctx->pc = 0x45B970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45B96Cu;
            // 0x45b970: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45B974u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45B974u; }
            if (ctx->pc != 0x45B974u) { return; }
        }
        }
    }
    ctx->pc = 0x45B974u;
label_45b974:
    // 0x45b974: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x45b974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_45b978:
    // 0x45b978: 0xc0c9a58  jal         func_326960
label_45b97c:
    if (ctx->pc == 0x45B97Cu) {
        ctx->pc = 0x45B97Cu;
            // 0x45b97c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x45B980u;
        goto label_45b980;
    }
    ctx->pc = 0x45B978u;
    SET_GPR_U32(ctx, 31, 0x45B980u);
    ctx->pc = 0x45B97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B978u;
            // 0x45b97c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B980u; }
        if (ctx->pc != 0x45B980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B980u; }
        if (ctx->pc != 0x45B980u) { return; }
    }
    ctx->pc = 0x45B980u;
label_45b980:
    // 0x45b980: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45b980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_45b984:
    // 0x45b984: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45b984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_45b988:
    // 0x45b988: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x45b988u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45b98c:
    // 0x45b98c: 0x24a5e248  addiu       $a1, $a1, -0x1DB8
    ctx->pc = 0x45b98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959688));
label_45b990:
    // 0x45b990: 0xc123944  jal         func_48E510
label_45b994:
    if (ctx->pc == 0x45B994u) {
        ctx->pc = 0x45B994u;
            // 0x45b994: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45B998u;
        goto label_45b998;
    }
    ctx->pc = 0x45B990u;
    SET_GPR_U32(ctx, 31, 0x45B998u);
    ctx->pc = 0x45B994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B990u;
            // 0x45b994: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B998u; }
        if (ctx->pc != 0x45B998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B998u; }
        if (ctx->pc != 0x45B998u) { return; }
    }
    ctx->pc = 0x45B998u;
label_45b998:
    // 0x45b998: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x45b998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_45b99c:
    // 0x45b99c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45b99cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_45b9a0:
    // 0x45b9a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45b9a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45b9a4:
    // 0x45b9a4: 0x24a5e258  addiu       $a1, $a1, -0x1DA8
    ctx->pc = 0x45b9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959704));
label_45b9a8:
    // 0x45b9a8: 0xc123944  jal         func_48E510
label_45b9ac:
    if (ctx->pc == 0x45B9ACu) {
        ctx->pc = 0x45B9ACu;
            // 0x45b9ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45B9B0u;
        goto label_45b9b0;
    }
    ctx->pc = 0x45B9A8u;
    SET_GPR_U32(ctx, 31, 0x45B9B0u);
    ctx->pc = 0x45B9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B9A8u;
            // 0x45b9ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B9B0u; }
        if (ctx->pc != 0x45B9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B9B0u; }
        if (ctx->pc != 0x45B9B0u) { return; }
    }
    ctx->pc = 0x45B9B0u;
label_45b9b0:
    // 0x45b9b0: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x45b9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_45b9b4:
    // 0x45b9b4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45b9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_45b9b8:
    // 0x45b9b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x45b9b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45b9bc:
    // 0x45b9bc: 0x24a5e268  addiu       $a1, $a1, -0x1D98
    ctx->pc = 0x45b9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959720));
label_45b9c0:
    // 0x45b9c0: 0xc123944  jal         func_48E510
label_45b9c4:
    if (ctx->pc == 0x45B9C4u) {
        ctx->pc = 0x45B9C4u;
            // 0x45b9c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45B9C8u;
        goto label_45b9c8;
    }
    ctx->pc = 0x45B9C0u;
    SET_GPR_U32(ctx, 31, 0x45B9C8u);
    ctx->pc = 0x45B9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B9C0u;
            // 0x45b9c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B9C8u; }
        if (ctx->pc != 0x45B9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B9C8u; }
        if (ctx->pc != 0x45B9C8u) { return; }
    }
    ctx->pc = 0x45B9C8u;
label_45b9c8:
    // 0x45b9c8: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x45b9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_45b9cc:
    // 0x45b9cc: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45b9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_45b9d0:
    // 0x45b9d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45b9d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45b9d4:
    // 0x45b9d4: 0x24a5e280  addiu       $a1, $a1, -0x1D80
    ctx->pc = 0x45b9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959744));
label_45b9d8:
    // 0x45b9d8: 0xc123944  jal         func_48E510
label_45b9dc:
    if (ctx->pc == 0x45B9DCu) {
        ctx->pc = 0x45B9DCu;
            // 0x45b9dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45B9E0u;
        goto label_45b9e0;
    }
    ctx->pc = 0x45B9D8u;
    SET_GPR_U32(ctx, 31, 0x45B9E0u);
    ctx->pc = 0x45B9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B9D8u;
            // 0x45b9dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B9E0u; }
        if (ctx->pc != 0x45B9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B9E0u; }
        if (ctx->pc != 0x45B9E0u) { return; }
    }
    ctx->pc = 0x45B9E0u;
label_45b9e0:
    // 0x45b9e0: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x45b9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_45b9e4:
    // 0x45b9e4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45b9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_45b9e8:
    // 0x45b9e8: 0x24a5e290  addiu       $a1, $a1, -0x1D70
    ctx->pc = 0x45b9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959760));
label_45b9ec:
    // 0x45b9ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45b9ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45b9f0:
    // 0x45b9f0: 0xc123944  jal         func_48E510
label_45b9f4:
    if (ctx->pc == 0x45B9F4u) {
        ctx->pc = 0x45B9F4u;
            // 0x45b9f4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45B9F8u;
        goto label_45b9f8;
    }
    ctx->pc = 0x45B9F0u;
    SET_GPR_U32(ctx, 31, 0x45B9F8u);
    ctx->pc = 0x45B9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45B9F0u;
            // 0x45b9f4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B9F8u; }
        if (ctx->pc != 0x45B9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45B9F8u; }
        if (ctx->pc != 0x45B9F8u) { return; }
    }
    ctx->pc = 0x45B9F8u;
label_45b9f8:
    // 0x45b9f8: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x45b9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_45b9fc:
    // 0x45b9fc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x45b9fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45ba00:
    // 0x45ba00: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x45ba00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_45ba04:
    // 0x45ba04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45ba04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45ba08:
    // 0x45ba08: 0xc123654  jal         func_48D950
label_45ba0c:
    if (ctx->pc == 0x45BA0Cu) {
        ctx->pc = 0x45BA0Cu;
            // 0x45ba0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45BA10u;
        goto label_45ba10;
    }
    ctx->pc = 0x45BA08u;
    SET_GPR_U32(ctx, 31, 0x45BA10u);
    ctx->pc = 0x45BA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BA08u;
            // 0x45ba0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BA10u; }
        if (ctx->pc != 0x45BA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BA10u; }
        if (ctx->pc != 0x45BA10u) { return; }
    }
    ctx->pc = 0x45BA10u;
label_45ba10:
    // 0x45ba10: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x45ba10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_45ba14:
    // 0x45ba14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45ba14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45ba18:
    // 0x45ba18: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x45ba18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_45ba1c:
    // 0x45ba1c: 0xc123654  jal         func_48D950
label_45ba20:
    if (ctx->pc == 0x45BA20u) {
        ctx->pc = 0x45BA20u;
            // 0x45ba20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45BA24u;
        goto label_45ba24;
    }
    ctx->pc = 0x45BA1Cu;
    SET_GPR_U32(ctx, 31, 0x45BA24u);
    ctx->pc = 0x45BA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BA1Cu;
            // 0x45ba20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BA24u; }
        if (ctx->pc != 0x45BA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BA24u; }
        if (ctx->pc != 0x45BA24u) { return; }
    }
    ctx->pc = 0x45BA24u;
label_45ba24:
    // 0x45ba24: 0xc117300  jal         func_45CC00
label_45ba28:
    if (ctx->pc == 0x45BA28u) {
        ctx->pc = 0x45BA28u;
            // 0x45ba28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45BA2Cu;
        goto label_45ba2c;
    }
    ctx->pc = 0x45BA24u;
    SET_GPR_U32(ctx, 31, 0x45BA2Cu);
    ctx->pc = 0x45BA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BA24u;
            // 0x45ba28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x45CC00u;
    if (runtime->hasFunction(0x45CC00u)) {
        auto targetFn = runtime->lookupFunction(0x45CC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BA2Cu; }
        if (ctx->pc != 0x45BA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045CC00_0x45cc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BA2Cu; }
        if (ctx->pc != 0x45BA2Cu) { return; }
    }
    ctx->pc = 0x45BA2Cu;
label_45ba2c:
    // 0x45ba2c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x45ba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_45ba30:
    // 0x45ba30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45ba30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45ba34:
    // 0x45ba34: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x45ba34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_45ba38:
    // 0x45ba38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45ba38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45ba3c:
    // 0x45ba3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45ba3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45ba40:
    // 0x45ba40: 0xc0fd020  jal         func_3F4080
label_45ba44:
    if (ctx->pc == 0x45BA44u) {
        ctx->pc = 0x45BA44u;
            // 0x45ba44: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45BA48u;
        goto label_45ba48;
    }
    ctx->pc = 0x45BA40u;
    SET_GPR_U32(ctx, 31, 0x45BA48u);
    ctx->pc = 0x45BA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BA40u;
            // 0x45ba44: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4080u;
    if (runtime->hasFunction(0x3F4080u)) {
        auto targetFn = runtime->lookupFunction(0x3F4080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BA48u; }
        if (ctx->pc != 0x45BA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4080_0x3f4080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BA48u; }
        if (ctx->pc != 0x45BA48u) { return; }
    }
    ctx->pc = 0x45BA48u;
label_45ba48:
    // 0x45ba48: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x45ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_45ba4c:
    // 0x45ba4c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x45ba4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_45ba50:
    // 0x45ba50: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x45ba50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_45ba54:
    // 0x45ba54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45ba54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45ba58:
    // 0x45ba58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45ba58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45ba5c:
    // 0x45ba5c: 0xc0fd020  jal         func_3F4080
label_45ba60:
    if (ctx->pc == 0x45BA60u) {
        ctx->pc = 0x45BA60u;
            // 0x45ba60: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45BA64u;
        goto label_45ba64;
    }
    ctx->pc = 0x45BA5Cu;
    SET_GPR_U32(ctx, 31, 0x45BA64u);
    ctx->pc = 0x45BA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BA5Cu;
            // 0x45ba60: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4080u;
    if (runtime->hasFunction(0x3F4080u)) {
        auto targetFn = runtime->lookupFunction(0x3F4080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BA64u; }
        if (ctx->pc != 0x45BA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4080_0x3f4080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BA64u; }
        if (ctx->pc != 0x45BA64u) { return; }
    }
    ctx->pc = 0x45BA64u;
label_45ba64:
    // 0x45ba64: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x45ba64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_45ba68:
    // 0x45ba68: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x45ba68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_45ba6c:
    // 0x45ba6c: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x45ba6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_45ba70:
    // 0x45ba70: 0x802027  not         $a0, $a0
    ctx->pc = 0x45ba70u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_45ba74:
    // 0x45ba74: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x45ba74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_45ba78:
    // 0x45ba78: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x45ba78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_45ba7c:
    // 0x45ba7c: 0x100000e6  b           . + 4 + (0xE6 << 2)
label_45ba80:
    if (ctx->pc == 0x45BA80u) {
        ctx->pc = 0x45BA80u;
            // 0x45ba80: 0xaca30038  sw          $v1, 0x38($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
        ctx->pc = 0x45BA84u;
        goto label_45ba84;
    }
    ctx->pc = 0x45BA7Cu;
    {
        const bool branch_taken_0x45ba7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45BA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45BA7Cu;
            // 0x45ba80: 0xaca30038  sw          $v1, 0x38($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ba7c) {
            ctx->pc = 0x45BE18u;
            goto label_45be18;
        }
    }
    ctx->pc = 0x45BA84u;
label_45ba84:
    // 0x45ba84: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x45ba84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_45ba88:
    // 0x45ba88: 0xc0c91d4  jal         func_324750
label_45ba8c:
    if (ctx->pc == 0x45BA8Cu) {
        ctx->pc = 0x45BA8Cu;
            // 0x45ba8c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x45BA90u;
        goto label_45ba90;
    }
    ctx->pc = 0x45BA88u;
    SET_GPR_U32(ctx, 31, 0x45BA90u);
    ctx->pc = 0x45BA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BA88u;
            // 0x45ba8c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (runtime->hasFunction(0x324750u)) {
        auto targetFn = runtime->lookupFunction(0x324750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BA90u; }
        if (ctx->pc != 0x45BA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324750_0x324750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BA90u; }
        if (ctx->pc != 0x45BA90u) { return; }
    }
    ctx->pc = 0x45BA90u;
label_45ba90:
    // 0x45ba90: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x45ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_45ba94:
    // 0x45ba94: 0xc0fcfe0  jal         func_3F3F80
label_45ba98:
    if (ctx->pc == 0x45BA98u) {
        ctx->pc = 0x45BA98u;
            // 0x45ba98: 0x8c440e68  lw          $a0, 0xE68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
        ctx->pc = 0x45BA9Cu;
        goto label_45ba9c;
    }
    ctx->pc = 0x45BA94u;
    SET_GPR_U32(ctx, 31, 0x45BA9Cu);
    ctx->pc = 0x45BA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BA94u;
            // 0x45ba98: 0x8c440e68  lw          $a0, 0xE68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F3F80u;
    if (runtime->hasFunction(0x3F3F80u)) {
        auto targetFn = runtime->lookupFunction(0x3F3F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BA9Cu; }
        if (ctx->pc != 0x45BA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F3F80_0x3f3f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BA9Cu; }
        if (ctx->pc != 0x45BA9Cu) { return; }
    }
    ctx->pc = 0x45BA9Cu;
label_45ba9c:
    // 0x45ba9c: 0x104000de  beqz        $v0, . + 4 + (0xDE << 2)
label_45baa0:
    if (ctx->pc == 0x45BAA0u) {
        ctx->pc = 0x45BAA4u;
        goto label_45baa4;
    }
    ctx->pc = 0x45BA9Cu;
    {
        const bool branch_taken_0x45ba9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ba9c) {
            ctx->pc = 0x45BE18u;
            goto label_45be18;
        }
    }
    ctx->pc = 0x45BAA4u;
label_45baa4:
    // 0x45baa4: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x45baa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_45baa8:
    // 0x45baa8: 0xc0c9a58  jal         func_326960
label_45baac:
    if (ctx->pc == 0x45BAACu) {
        ctx->pc = 0x45BAACu;
            // 0x45baac: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x45BAB0u;
        goto label_45bab0;
    }
    ctx->pc = 0x45BAA8u;
    SET_GPR_U32(ctx, 31, 0x45BAB0u);
    ctx->pc = 0x45BAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BAA8u;
            // 0x45baac: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BAB0u; }
        if (ctx->pc != 0x45BAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BAB0u; }
        if (ctx->pc != 0x45BAB0u) { return; }
    }
    ctx->pc = 0x45BAB0u;
label_45bab0:
    // 0x45bab0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45bab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_45bab4:
    // 0x45bab4: 0xc123328  jal         func_48CCA0
label_45bab8:
    if (ctx->pc == 0x45BAB8u) {
        ctx->pc = 0x45BAB8u;
            // 0x45bab8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x45BABCu;
        goto label_45babc;
    }
    ctx->pc = 0x45BAB4u;
    SET_GPR_U32(ctx, 31, 0x45BABCu);
    ctx->pc = 0x45BAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BAB4u;
            // 0x45bab8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BABCu; }
        if (ctx->pc != 0x45BABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BABCu; }
        if (ctx->pc != 0x45BABCu) { return; }
    }
    ctx->pc = 0x45BABCu;
label_45babc:
    // 0x45babc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45babcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45bac0:
    // 0x45bac0: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x45bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_45bac4:
    // 0x45bac4: 0x50500007  beql        $v0, $s0, . + 4 + (0x7 << 2)
label_45bac8:
    if (ctx->pc == 0x45BAC8u) {
        ctx->pc = 0x45BAC8u;
            // 0x45bac8: 0xae500078  sw          $s0, 0x78($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 16));
        ctx->pc = 0x45BACCu;
        goto label_45bacc;
    }
    ctx->pc = 0x45BAC4u;
    {
        const bool branch_taken_0x45bac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x45bac4) {
            ctx->pc = 0x45BAC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45BAC4u;
            // 0x45bac8: 0xae500078  sw          $s0, 0x78($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45BAE4u;
            goto label_45bae4;
        }
    }
    ctx->pc = 0x45BACCu;
label_45bacc:
    // 0x45bacc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_45bad0:
    if (ctx->pc == 0x45BAD0u) {
        ctx->pc = 0x45BAD4u;
        goto label_45bad4;
    }
    ctx->pc = 0x45BACCu;
    {
        const bool branch_taken_0x45bacc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bacc) {
            ctx->pc = 0x45BAE0u;
            goto label_45bae0;
        }
    }
    ctx->pc = 0x45BAD4u;
label_45bad4:
    // 0x45bad4: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x45bad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_45bad8:
    // 0x45bad8: 0xc117288  jal         func_45CA20
label_45badc:
    if (ctx->pc == 0x45BADCu) {
        ctx->pc = 0x45BADCu;
            // 0x45badc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45BAE0u;
        goto label_45bae0;
    }
    ctx->pc = 0x45BAD8u;
    SET_GPR_U32(ctx, 31, 0x45BAE0u);
    ctx->pc = 0x45BADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BAD8u;
            // 0x45badc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x45CA20u;
    if (runtime->hasFunction(0x45CA20u)) {
        auto targetFn = runtime->lookupFunction(0x45CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BAE0u; }
        if (ctx->pc != 0x45BAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045CA20_0x45ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BAE0u; }
        if (ctx->pc != 0x45BAE0u) { return; }
    }
    ctx->pc = 0x45BAE0u;
label_45bae0:
    // 0x45bae0: 0xae500078  sw          $s0, 0x78($s2)
    ctx->pc = 0x45bae0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 16));
label_45bae4:
    // 0x45bae4: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x45bae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_45bae8:
    // 0x45bae8: 0xc0c9a58  jal         func_326960
label_45baec:
    if (ctx->pc == 0x45BAECu) {
        ctx->pc = 0x45BAECu;
            // 0x45baec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x45BAF0u;
        goto label_45baf0;
    }
    ctx->pc = 0x45BAE8u;
    SET_GPR_U32(ctx, 31, 0x45BAF0u);
    ctx->pc = 0x45BAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BAE8u;
            // 0x45baec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BAF0u; }
        if (ctx->pc != 0x45BAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BAF0u; }
        if (ctx->pc != 0x45BAF0u) { return; }
    }
    ctx->pc = 0x45BAF0u;
label_45baf0:
    // 0x45baf0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45baf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_45baf4:
    // 0x45baf4: 0xc123328  jal         func_48CCA0
label_45baf8:
    if (ctx->pc == 0x45BAF8u) {
        ctx->pc = 0x45BAF8u;
            // 0x45baf8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x45BAFCu;
        goto label_45bafc;
    }
    ctx->pc = 0x45BAF4u;
    SET_GPR_U32(ctx, 31, 0x45BAFCu);
    ctx->pc = 0x45BAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BAF4u;
            // 0x45baf8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BAFCu; }
        if (ctx->pc != 0x45BAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BAFCu; }
        if (ctx->pc != 0x45BAFCu) { return; }
    }
    ctx->pc = 0x45BAFCu;
label_45bafc:
    // 0x45bafc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45bafcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45bb00:
    // 0x45bb00: 0x8e42007c  lw          $v0, 0x7C($s2)
    ctx->pc = 0x45bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_45bb04:
    // 0x45bb04: 0x50500007  beql        $v0, $s0, . + 4 + (0x7 << 2)
label_45bb08:
    if (ctx->pc == 0x45BB08u) {
        ctx->pc = 0x45BB08u;
            // 0x45bb08: 0xae50007c  sw          $s0, 0x7C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 16));
        ctx->pc = 0x45BB0Cu;
        goto label_45bb0c;
    }
    ctx->pc = 0x45BB04u;
    {
        const bool branch_taken_0x45bb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x45bb04) {
            ctx->pc = 0x45BB08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45BB04u;
            // 0x45bb08: 0xae50007c  sw          $s0, 0x7C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45BB24u;
            goto label_45bb24;
        }
    }
    ctx->pc = 0x45BB0Cu;
label_45bb0c:
    // 0x45bb0c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_45bb10:
    if (ctx->pc == 0x45BB10u) {
        ctx->pc = 0x45BB14u;
        goto label_45bb14;
    }
    ctx->pc = 0x45BB0Cu;
    {
        const bool branch_taken_0x45bb0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bb0c) {
            ctx->pc = 0x45BB20u;
            goto label_45bb20;
        }
    }
    ctx->pc = 0x45BB14u;
label_45bb14:
    // 0x45bb14: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x45bb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_45bb18:
    // 0x45bb18: 0xc1171fc  jal         func_45C7F0
label_45bb1c:
    if (ctx->pc == 0x45BB1Cu) {
        ctx->pc = 0x45BB1Cu;
            // 0x45bb1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45BB20u;
        goto label_45bb20;
    }
    ctx->pc = 0x45BB18u;
    SET_GPR_U32(ctx, 31, 0x45BB20u);
    ctx->pc = 0x45BB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BB18u;
            // 0x45bb1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x45C7F0u;
    if (runtime->hasFunction(0x45C7F0u)) {
        auto targetFn = runtime->lookupFunction(0x45C7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BB20u; }
        if (ctx->pc != 0x45BB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045C7F0_0x45c7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BB20u; }
        if (ctx->pc != 0x45BB20u) { return; }
    }
    ctx->pc = 0x45BB20u;
label_45bb20:
    // 0x45bb20: 0xae50007c  sw          $s0, 0x7C($s2)
    ctx->pc = 0x45bb20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 16));
label_45bb24:
    // 0x45bb24: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x45bb24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_45bb28:
    // 0x45bb28: 0xc0c9a58  jal         func_326960
label_45bb2c:
    if (ctx->pc == 0x45BB2Cu) {
        ctx->pc = 0x45BB2Cu;
            // 0x45bb2c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x45BB30u;
        goto label_45bb30;
    }
    ctx->pc = 0x45BB28u;
    SET_GPR_U32(ctx, 31, 0x45BB30u);
    ctx->pc = 0x45BB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BB28u;
            // 0x45bb2c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BB30u; }
        if (ctx->pc != 0x45BB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BB30u; }
        if (ctx->pc != 0x45BB30u) { return; }
    }
    ctx->pc = 0x45BB30u;
label_45bb30:
    // 0x45bb30: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45bb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_45bb34:
    // 0x45bb34: 0xc123328  jal         func_48CCA0
label_45bb38:
    if (ctx->pc == 0x45BB38u) {
        ctx->pc = 0x45BB38u;
            // 0x45bb38: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x45BB3Cu;
        goto label_45bb3c;
    }
    ctx->pc = 0x45BB34u;
    SET_GPR_U32(ctx, 31, 0x45BB3Cu);
    ctx->pc = 0x45BB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BB34u;
            // 0x45bb38: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BB3Cu; }
        if (ctx->pc != 0x45BB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BB3Cu; }
        if (ctx->pc != 0x45BB3Cu) { return; }
    }
    ctx->pc = 0x45BB3Cu;
label_45bb3c:
    // 0x45bb3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45bb3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45bb40:
    // 0x45bb40: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x45bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_45bb44:
    // 0x45bb44: 0x50500007  beql        $v0, $s0, . + 4 + (0x7 << 2)
label_45bb48:
    if (ctx->pc == 0x45BB48u) {
        ctx->pc = 0x45BB48u;
            // 0x45bb48: 0xae500080  sw          $s0, 0x80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 16));
        ctx->pc = 0x45BB4Cu;
        goto label_45bb4c;
    }
    ctx->pc = 0x45BB44u;
    {
        const bool branch_taken_0x45bb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x45bb44) {
            ctx->pc = 0x45BB48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45BB44u;
            // 0x45bb48: 0xae500080  sw          $s0, 0x80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45BB64u;
            goto label_45bb64;
        }
    }
    ctx->pc = 0x45BB4Cu;
label_45bb4c:
    // 0x45bb4c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_45bb50:
    if (ctx->pc == 0x45BB50u) {
        ctx->pc = 0x45BB54u;
        goto label_45bb54;
    }
    ctx->pc = 0x45BB4Cu;
    {
        const bool branch_taken_0x45bb4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bb4c) {
            ctx->pc = 0x45BB60u;
            goto label_45bb60;
        }
    }
    ctx->pc = 0x45BB54u;
label_45bb54:
    // 0x45bb54: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x45bb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_45bb58:
    // 0x45bb58: 0xc11718c  jal         func_45C630
label_45bb5c:
    if (ctx->pc == 0x45BB5Cu) {
        ctx->pc = 0x45BB5Cu;
            // 0x45bb5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45BB60u;
        goto label_45bb60;
    }
    ctx->pc = 0x45BB58u;
    SET_GPR_U32(ctx, 31, 0x45BB60u);
    ctx->pc = 0x45BB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BB58u;
            // 0x45bb5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x45C630u;
    if (runtime->hasFunction(0x45C630u)) {
        auto targetFn = runtime->lookupFunction(0x45C630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BB60u; }
        if (ctx->pc != 0x45BB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045C630_0x45c630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BB60u; }
        if (ctx->pc != 0x45BB60u) { return; }
    }
    ctx->pc = 0x45BB60u;
label_45bb60:
    // 0x45bb60: 0xae500080  sw          $s0, 0x80($s2)
    ctx->pc = 0x45bb60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 16));
label_45bb64:
    // 0x45bb64: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x45bb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_45bb68:
    // 0x45bb68: 0xc0c9a58  jal         func_326960
label_45bb6c:
    if (ctx->pc == 0x45BB6Cu) {
        ctx->pc = 0x45BB6Cu;
            // 0x45bb6c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x45BB70u;
        goto label_45bb70;
    }
    ctx->pc = 0x45BB68u;
    SET_GPR_U32(ctx, 31, 0x45BB70u);
    ctx->pc = 0x45BB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BB68u;
            // 0x45bb6c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BB70u; }
        if (ctx->pc != 0x45BB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BB70u; }
        if (ctx->pc != 0x45BB70u) { return; }
    }
    ctx->pc = 0x45BB70u;
label_45bb70:
    // 0x45bb70: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45bb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_45bb74:
    // 0x45bb74: 0xc123328  jal         func_48CCA0
label_45bb78:
    if (ctx->pc == 0x45BB78u) {
        ctx->pc = 0x45BB78u;
            // 0x45bb78: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x45BB7Cu;
        goto label_45bb7c;
    }
    ctx->pc = 0x45BB74u;
    SET_GPR_U32(ctx, 31, 0x45BB7Cu);
    ctx->pc = 0x45BB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BB74u;
            // 0x45bb78: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BB7Cu; }
        if (ctx->pc != 0x45BB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BB7Cu; }
        if (ctx->pc != 0x45BB7Cu) { return; }
    }
    ctx->pc = 0x45BB7Cu;
label_45bb7c:
    // 0x45bb7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45bb7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45bb80:
    // 0x45bb80: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x45bb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_45bb84:
    // 0x45bb84: 0x50500007  beql        $v0, $s0, . + 4 + (0x7 << 2)
label_45bb88:
    if (ctx->pc == 0x45BB88u) {
        ctx->pc = 0x45BB88u;
            // 0x45bb88: 0xae500084  sw          $s0, 0x84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 16));
        ctx->pc = 0x45BB8Cu;
        goto label_45bb8c;
    }
    ctx->pc = 0x45BB84u;
    {
        const bool branch_taken_0x45bb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x45bb84) {
            ctx->pc = 0x45BB88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45BB84u;
            // 0x45bb88: 0xae500084  sw          $s0, 0x84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45BBA4u;
            goto label_45bba4;
        }
    }
    ctx->pc = 0x45BB8Cu;
label_45bb8c:
    // 0x45bb8c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_45bb90:
    if (ctx->pc == 0x45BB90u) {
        ctx->pc = 0x45BB94u;
        goto label_45bb94;
    }
    ctx->pc = 0x45BB8Cu;
    {
        const bool branch_taken_0x45bb8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bb8c) {
            ctx->pc = 0x45BBA0u;
            goto label_45bba0;
        }
    }
    ctx->pc = 0x45BB94u;
label_45bb94:
    // 0x45bb94: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x45bb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_45bb98:
    // 0x45bb98: 0xc117118  jal         func_45C460
label_45bb9c:
    if (ctx->pc == 0x45BB9Cu) {
        ctx->pc = 0x45BB9Cu;
            // 0x45bb9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45BBA0u;
        goto label_45bba0;
    }
    ctx->pc = 0x45BB98u;
    SET_GPR_U32(ctx, 31, 0x45BBA0u);
    ctx->pc = 0x45BB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BB98u;
            // 0x45bb9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x45C460u;
    if (runtime->hasFunction(0x45C460u)) {
        auto targetFn = runtime->lookupFunction(0x45C460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BBA0u; }
        if (ctx->pc != 0x45BBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045C460_0x45c460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BBA0u; }
        if (ctx->pc != 0x45BBA0u) { return; }
    }
    ctx->pc = 0x45BBA0u;
label_45bba0:
    // 0x45bba0: 0xae500084  sw          $s0, 0x84($s2)
    ctx->pc = 0x45bba0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 16));
label_45bba4:
    // 0x45bba4: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x45bba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_45bba8:
    // 0x45bba8: 0xc0c9a58  jal         func_326960
label_45bbac:
    if (ctx->pc == 0x45BBACu) {
        ctx->pc = 0x45BBACu;
            // 0x45bbac: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x45BBB0u;
        goto label_45bbb0;
    }
    ctx->pc = 0x45BBA8u;
    SET_GPR_U32(ctx, 31, 0x45BBB0u);
    ctx->pc = 0x45BBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BBA8u;
            // 0x45bbac: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BBB0u; }
        if (ctx->pc != 0x45BBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BBB0u; }
        if (ctx->pc != 0x45BBB0u) { return; }
    }
    ctx->pc = 0x45BBB0u;
label_45bbb0:
    // 0x45bbb0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45bbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_45bbb4:
    // 0x45bbb4: 0xc123328  jal         func_48CCA0
label_45bbb8:
    if (ctx->pc == 0x45BBB8u) {
        ctx->pc = 0x45BBB8u;
            // 0x45bbb8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x45BBBCu;
        goto label_45bbbc;
    }
    ctx->pc = 0x45BBB4u;
    SET_GPR_U32(ctx, 31, 0x45BBBCu);
    ctx->pc = 0x45BBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BBB4u;
            // 0x45bbb8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BBBCu; }
        if (ctx->pc != 0x45BBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BBBCu; }
        if (ctx->pc != 0x45BBBCu) { return; }
    }
    ctx->pc = 0x45BBBCu;
label_45bbbc:
    // 0x45bbbc: 0xae420088  sw          $v0, 0x88($s2)
    ctx->pc = 0x45bbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 2));
label_45bbc0:
    // 0x45bbc0: 0xc11705c  jal         func_45C170
label_45bbc4:
    if (ctx->pc == 0x45BBC4u) {
        ctx->pc = 0x45BBC4u;
            // 0x45bbc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45BBC8u;
        goto label_45bbc8;
    }
    ctx->pc = 0x45BBC0u;
    SET_GPR_U32(ctx, 31, 0x45BBC8u);
    ctx->pc = 0x45BBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BBC0u;
            // 0x45bbc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x45C170u;
    if (runtime->hasFunction(0x45C170u)) {
        auto targetFn = runtime->lookupFunction(0x45C170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BBC8u; }
        if (ctx->pc != 0x45BBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045C170_0x45c170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BBC8u; }
        if (ctx->pc != 0x45BBC8u) { return; }
    }
    ctx->pc = 0x45BBC8u;
label_45bbc8:
    // 0x45bbc8: 0xc116ff4  jal         func_45BFD0
label_45bbcc:
    if (ctx->pc == 0x45BBCCu) {
        ctx->pc = 0x45BBCCu;
            // 0x45bbcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45BBD0u;
        goto label_45bbd0;
    }
    ctx->pc = 0x45BBC8u;
    SET_GPR_U32(ctx, 31, 0x45BBD0u);
    ctx->pc = 0x45BBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BBC8u;
            // 0x45bbcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x45BFD0u;
    if (runtime->hasFunction(0x45BFD0u)) {
        auto targetFn = runtime->lookupFunction(0x45BFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BBD0u; }
        if (ctx->pc != 0x45BBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045BFD0_0x45bfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BBD0u; }
        if (ctx->pc != 0x45BBD0u) { return; }
    }
    ctx->pc = 0x45BBD0u;
label_45bbd0:
    // 0x45bbd0: 0xc116f90  jal         func_45BE40
label_45bbd4:
    if (ctx->pc == 0x45BBD4u) {
        ctx->pc = 0x45BBD4u;
            // 0x45bbd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45BBD8u;
        goto label_45bbd8;
    }
    ctx->pc = 0x45BBD0u;
    SET_GPR_U32(ctx, 31, 0x45BBD8u);
    ctx->pc = 0x45BBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BBD0u;
            // 0x45bbd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x45BE40u;
    if (runtime->hasFunction(0x45BE40u)) {
        auto targetFn = runtime->lookupFunction(0x45BE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BBD8u; }
        if (ctx->pc != 0x45BBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045BE40_0x45be40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BBD8u; }
        if (ctx->pc != 0x45BBD8u) { return; }
    }
    ctx->pc = 0x45BBD8u;
label_45bbd8:
    // 0x45bbd8: 0x1000008f  b           . + 4 + (0x8F << 2)
label_45bbdc:
    if (ctx->pc == 0x45BBDCu) {
        ctx->pc = 0x45BBE0u;
        goto label_45bbe0;
    }
    ctx->pc = 0x45BBD8u;
    {
        const bool branch_taken_0x45bbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bbd8) {
            ctx->pc = 0x45BE18u;
            goto label_45be18;
        }
    }
    ctx->pc = 0x45BBE0u;
label_45bbe0:
    // 0x45bbe0: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x45bbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_45bbe4:
    // 0x45bbe4: 0xc0c9ec0  jal         func_327B00
label_45bbe8:
    if (ctx->pc == 0x45BBE8u) {
        ctx->pc = 0x45BBE8u;
            // 0x45bbe8: 0x3405cf08  ori         $a1, $zero, 0xCF08 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53000);
        ctx->pc = 0x45BBECu;
        goto label_45bbec;
    }
    ctx->pc = 0x45BBE4u;
    SET_GPR_U32(ctx, 31, 0x45BBECu);
    ctx->pc = 0x45BBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BBE4u;
            // 0x45bbe8: 0x3405cf08  ori         $a1, $zero, 0xCF08 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53000);
        ctx->in_delay_slot = false;
    ctx->pc = 0x327B00u;
    if (runtime->hasFunction(0x327B00u)) {
        auto targetFn = runtime->lookupFunction(0x327B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BBECu; }
        if (ctx->pc != 0x45BBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327B00_0x327b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BBECu; }
        if (ctx->pc != 0x45BBECu) { return; }
    }
    ctx->pc = 0x45BBECu;
label_45bbec:
    // 0x45bbec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x45bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_45bbf0:
    // 0x45bbf0: 0x8c4289c8  lw          $v0, -0x7638($v0)
    ctx->pc = 0x45bbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937032)));
label_45bbf4:
    // 0x45bbf4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x45bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_45bbf8:
    // 0x45bbf8: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x45bbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
label_45bbfc:
    // 0x45bbfc: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x45bbfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_45bc00:
    // 0x45bc00: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x45bc00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_45bc04:
    // 0x45bc04: 0x320f809  jalr        $t9
label_45bc08:
    if (ctx->pc == 0x45BC08u) {
        ctx->pc = 0x45BC08u;
            // 0x45bc08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45BC0Cu;
        goto label_45bc0c;
    }
    ctx->pc = 0x45BC04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45BC0Cu);
        ctx->pc = 0x45BC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45BC04u;
            // 0x45bc08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45BC0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45BC0Cu; }
            if (ctx->pc != 0x45BC0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x45BC0Cu;
label_45bc0c:
    // 0x45bc0c: 0x10000082  b           . + 4 + (0x82 << 2)
label_45bc10:
    if (ctx->pc == 0x45BC10u) {
        ctx->pc = 0x45BC14u;
        goto label_45bc14;
    }
    ctx->pc = 0x45BC0Cu;
    {
        const bool branch_taken_0x45bc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bc0c) {
            ctx->pc = 0x45BE18u;
            goto label_45be18;
        }
    }
    ctx->pc = 0x45BC14u;
label_45bc14:
    // 0x45bc14: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x45bc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_45bc18:
    // 0x45bc18: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x45bc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_45bc1c:
    // 0x45bc1c: 0xc0ca008  jal         func_328020
label_45bc20:
    if (ctx->pc == 0x45BC20u) {
        ctx->pc = 0x45BC20u;
            // 0x45bc20: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x45BC24u;
        goto label_45bc24;
    }
    ctx->pc = 0x45BC1Cu;
    SET_GPR_U32(ctx, 31, 0x45BC24u);
    ctx->pc = 0x45BC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BC1Cu;
            // 0x45bc20: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x328020u;
    if (runtime->hasFunction(0x328020u)) {
        auto targetFn = runtime->lookupFunction(0x328020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BC24u; }
        if (ctx->pc != 0x45BC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00328020_0x328020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BC24u; }
        if (ctx->pc != 0x45BC24u) { return; }
    }
    ctx->pc = 0x45BC24u;
label_45bc24:
    // 0x45bc24: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
label_45bc28:
    if (ctx->pc == 0x45BC28u) {
        ctx->pc = 0x45BC2Cu;
        goto label_45bc2c;
    }
    ctx->pc = 0x45BC24u;
    {
        const bool branch_taken_0x45bc24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bc24) {
            ctx->pc = 0x45BE18u;
            goto label_45be18;
        }
    }
    ctx->pc = 0x45BC2Cu;
label_45bc2c:
    // 0x45bc2c: 0xc040180  jal         func_100600
label_45bc30:
    if (ctx->pc == 0x45BC30u) {
        ctx->pc = 0x45BC30u;
            // 0x45bc30: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x45BC34u;
        goto label_45bc34;
    }
    ctx->pc = 0x45BC2Cu;
    SET_GPR_U32(ctx, 31, 0x45BC34u);
    ctx->pc = 0x45BC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BC2Cu;
            // 0x45bc30: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BC34u; }
        if (ctx->pc != 0x45BC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BC34u; }
        if (ctx->pc != 0x45BC34u) { return; }
    }
    ctx->pc = 0x45BC34u;
label_45bc34:
    // 0x45bc34: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_45bc38:
    if (ctx->pc == 0x45BC38u) {
        ctx->pc = 0x45BC38u;
            // 0x45bc38: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x45BC3Cu;
        goto label_45bc3c;
    }
    ctx->pc = 0x45BC34u;
    {
        const bool branch_taken_0x45bc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bc34) {
            ctx->pc = 0x45BC38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45BC34u;
            // 0x45bc38: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45BC54u;
            goto label_45bc54;
        }
    }
    ctx->pc = 0x45BC3Cu;
label_45bc3c:
    // 0x45bc3c: 0x8e450054  lw          $a1, 0x54($s2)
    ctx->pc = 0x45bc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_45bc40:
    // 0x45bc40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x45bc40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45bc44:
    // 0x45bc44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x45bc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45bc48:
    // 0x45bc48: 0xc153064  jal         func_54C190
label_45bc4c:
    if (ctx->pc == 0x45BC4Cu) {
        ctx->pc = 0x45BC4Cu;
            // 0x45bc4c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45BC50u;
        goto label_45bc50;
    }
    ctx->pc = 0x45BC48u;
    SET_GPR_U32(ctx, 31, 0x45BC50u);
    ctx->pc = 0x45BC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BC48u;
            // 0x45bc4c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x54C190u;
    if (runtime->hasFunction(0x54C190u)) {
        auto targetFn = runtime->lookupFunction(0x54C190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BC50u; }
        if (ctx->pc != 0x45BC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0054C190_0x54c190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BC50u; }
        if (ctx->pc != 0x45BC50u) { return; }
    }
    ctx->pc = 0x45BC50u;
label_45bc50:
    // 0x45bc50: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x45bc50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_45bc54:
    // 0x45bc54: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x45bc54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_45bc58:
    // 0x45bc58: 0x320f809  jalr        $t9
label_45bc5c:
    if (ctx->pc == 0x45BC5Cu) {
        ctx->pc = 0x45BC5Cu;
            // 0x45bc5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45BC60u;
        goto label_45bc60;
    }
    ctx->pc = 0x45BC58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45BC60u);
        ctx->pc = 0x45BC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45BC58u;
            // 0x45bc5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45BC60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45BC60u; }
            if (ctx->pc != 0x45BC60u) { return; }
        }
        }
    }
    ctx->pc = 0x45BC60u;
label_45bc60:
    // 0x45bc60: 0x1000006d  b           . + 4 + (0x6D << 2)
label_45bc64:
    if (ctx->pc == 0x45BC64u) {
        ctx->pc = 0x45BC68u;
        goto label_45bc68;
    }
    ctx->pc = 0x45BC60u;
    {
        const bool branch_taken_0x45bc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bc60) {
            ctx->pc = 0x45BE18u;
            goto label_45be18;
        }
    }
    ctx->pc = 0x45BC68u;
label_45bc68:
    // 0x45bc68: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x45bc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_45bc6c:
    // 0x45bc6c: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x45bc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_45bc70:
    // 0x45bc70: 0x8c840064  lw          $a0, 0x64($a0)
    ctx->pc = 0x45bc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_45bc74:
    // 0x45bc74: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
label_45bc78:
    if (ctx->pc == 0x45BC78u) {
        ctx->pc = 0x45BC78u;
            // 0x45bc78: 0x8e430054  lw          $v1, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->pc = 0x45BC7Cu;
        goto label_45bc7c;
    }
    ctx->pc = 0x45BC74u;
    {
        const bool branch_taken_0x45bc74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x45bc74) {
            ctx->pc = 0x45BC78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45BC74u;
            // 0x45bc78: 0x8e430054  lw          $v1, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45BC9Cu;
            goto label_45bc9c;
        }
    }
    ctx->pc = 0x45BC7Cu;
label_45bc7c:
    // 0x45bc7c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x45bc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_45bc80:
    // 0x45bc80: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_45bc84:
    if (ctx->pc == 0x45BC84u) {
        ctx->pc = 0x45BC84u;
            // 0x45bc84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45BC88u;
        goto label_45bc88;
    }
    ctx->pc = 0x45BC80u;
    {
        const bool branch_taken_0x45bc80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x45bc80) {
            ctx->pc = 0x45BC84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45BC80u;
            // 0x45bc84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45BC90u;
            goto label_45bc90;
        }
    }
    ctx->pc = 0x45BC88u;
label_45bc88:
    // 0x45bc88: 0x10000063  b           . + 4 + (0x63 << 2)
label_45bc8c:
    if (ctx->pc == 0x45BC8Cu) {
        ctx->pc = 0x45BC90u;
        goto label_45bc90;
    }
    ctx->pc = 0x45BC88u;
    {
        const bool branch_taken_0x45bc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bc88) {
            ctx->pc = 0x45BE18u;
            goto label_45be18;
        }
    }
    ctx->pc = 0x45BC90u;
label_45bc90:
    // 0x45bc90: 0xc117300  jal         func_45CC00
label_45bc94:
    if (ctx->pc == 0x45BC94u) {
        ctx->pc = 0x45BC98u;
        goto label_45bc98;
    }
    ctx->pc = 0x45BC90u;
    SET_GPR_U32(ctx, 31, 0x45BC98u);
    ctx->pc = 0x45CC00u;
    if (runtime->hasFunction(0x45CC00u)) {
        auto targetFn = runtime->lookupFunction(0x45CC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BC98u; }
        if (ctx->pc != 0x45BC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045CC00_0x45cc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BC98u; }
        if (ctx->pc != 0x45BC98u) { return; }
    }
    ctx->pc = 0x45BC98u;
label_45bc98:
    // 0x45bc98: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x45bc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_45bc9c:
    // 0x45bc9c: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x45bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_45bca0:
    // 0x45bca0: 0xac620068  sw          $v0, 0x68($v1)
    ctx->pc = 0x45bca0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 2));
label_45bca4:
    // 0x45bca4: 0xac620064  sw          $v0, 0x64($v1)
    ctx->pc = 0x45bca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
label_45bca8:
    // 0x45bca8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x45bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_45bcac:
    // 0x45bcac: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x45bcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_45bcb0:
    // 0x45bcb0: 0xc0c9a58  jal         func_326960
label_45bcb4:
    if (ctx->pc == 0x45BCB4u) {
        ctx->pc = 0x45BCB4u;
            // 0x45bcb4: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x45BCB8u;
        goto label_45bcb8;
    }
    ctx->pc = 0x45BCB0u;
    SET_GPR_U32(ctx, 31, 0x45BCB8u);
    ctx->pc = 0x45BCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BCB0u;
            // 0x45bcb4: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BCB8u; }
        if (ctx->pc != 0x45BCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BCB8u; }
        if (ctx->pc != 0x45BCB8u) { return; }
    }
    ctx->pc = 0x45BCB8u;
label_45bcb8:
    // 0x45bcb8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x45bcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_45bcbc:
    // 0x45bcbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x45bcbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_45bcc0:
    // 0x45bcc0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x45bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_45bcc4:
    // 0x45bcc4: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x45bcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_45bcc8:
    // 0x45bcc8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x45bcc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_45bccc:
    // 0x45bccc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x45bcccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_45bcd0:
    // 0x45bcd0: 0x320f809  jalr        $t9
label_45bcd4:
    if (ctx->pc == 0x45BCD4u) {
        ctx->pc = 0x45BCD4u;
            // 0x45bcd4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x45BCD8u;
        goto label_45bcd8;
    }
    ctx->pc = 0x45BCD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45BCD8u);
        ctx->pc = 0x45BCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45BCD0u;
            // 0x45bcd4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45BCD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45BCD8u; }
            if (ctx->pc != 0x45BCD8u) { return; }
        }
        }
    }
    ctx->pc = 0x45BCD8u;
label_45bcd8:
    // 0x45bcd8: 0x1000004f  b           . + 4 + (0x4F << 2)
label_45bcdc:
    if (ctx->pc == 0x45BCDCu) {
        ctx->pc = 0x45BCE0u;
        goto label_45bce0;
    }
    ctx->pc = 0x45BCD8u;
    {
        const bool branch_taken_0x45bcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bcd8) {
            ctx->pc = 0x45BE18u;
            goto label_45be18;
        }
    }
    ctx->pc = 0x45BCE0u;
label_45bce0:
    // 0x45bce0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x45bce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_45bce4:
    // 0x45bce4: 0x8c633e28  lw          $v1, 0x3E28($v1)
    ctx->pc = 0x45bce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15912)));
label_45bce8:
    // 0x45bce8: 0x90630023  lbu         $v1, 0x23($v1)
    ctx->pc = 0x45bce8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
label_45bcec:
    // 0x45bcec: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
label_45bcf0:
    if (ctx->pc == 0x45BCF0u) {
        ctx->pc = 0x45BCF4u;
        goto label_45bcf4;
    }
    ctx->pc = 0x45BCECu;
    {
        const bool branch_taken_0x45bcec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x45bcec) {
            ctx->pc = 0x45BE18u;
            goto label_45be18;
        }
    }
    ctx->pc = 0x45BCF4u;
label_45bcf4:
    // 0x45bcf4: 0xae400090  sw          $zero, 0x90($s2)
    ctx->pc = 0x45bcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 0));
label_45bcf8:
    // 0x45bcf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x45bcf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_45bcfc:
    // 0x45bcfc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x45bcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_45bd00:
    // 0x45bd00: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x45bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_45bd04:
    // 0x45bd04: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x45bd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_45bd08:
    // 0x45bd08: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x45bd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_45bd0c:
    // 0x45bd0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x45bd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45bd10:
    // 0x45bd10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45bd14:
    // 0x45bd14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45bd18:
    // 0x45bd18: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x45bd18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_45bd1c:
    // 0x45bd1c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x45bd1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_45bd20:
    // 0x45bd20: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x45bd20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_45bd24:
    // 0x45bd24: 0x320f809  jalr        $t9
label_45bd28:
    if (ctx->pc == 0x45BD28u) {
        ctx->pc = 0x45BD28u;
            // 0x45bd28: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x45BD2Cu;
        goto label_45bd2c;
    }
    ctx->pc = 0x45BD24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45BD2Cu);
        ctx->pc = 0x45BD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45BD24u;
            // 0x45bd28: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45BD2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45BD2Cu; }
            if (ctx->pc != 0x45BD2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x45BD2Cu;
label_45bd2c:
    // 0x45bd2c: 0x1000003a  b           . + 4 + (0x3A << 2)
label_45bd30:
    if (ctx->pc == 0x45BD30u) {
        ctx->pc = 0x45BD34u;
        goto label_45bd34;
    }
    ctx->pc = 0x45BD2Cu;
    {
        const bool branch_taken_0x45bd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bd2c) {
            ctx->pc = 0x45BE18u;
            goto label_45be18;
        }
    }
    ctx->pc = 0x45BD34u;
label_45bd34:
    // 0x45bd34: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x45bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_45bd38:
    // 0x45bd38: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x45bd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_45bd3c:
    // 0x45bd3c: 0xc0fcfec  jal         func_3F3FB0
label_45bd40:
    if (ctx->pc == 0x45BD40u) {
        ctx->pc = 0x45BD40u;
            // 0x45bd40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45BD44u;
        goto label_45bd44;
    }
    ctx->pc = 0x45BD3Cu;
    SET_GPR_U32(ctx, 31, 0x45BD44u);
    ctx->pc = 0x45BD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BD3Cu;
            // 0x45bd40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F3FB0u;
    if (runtime->hasFunction(0x3F3FB0u)) {
        auto targetFn = runtime->lookupFunction(0x3F3FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BD44u; }
        if (ctx->pc != 0x45BD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F3FB0_0x3f3fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BD44u; }
        if (ctx->pc != 0x45BD44u) { return; }
    }
    ctx->pc = 0x45BD44u;
label_45bd44:
    // 0x45bd44: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x45bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_45bd48:
    // 0x45bd48: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x45bd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_45bd4c:
    // 0x45bd4c: 0xc0fcfec  jal         func_3F3FB0
label_45bd50:
    if (ctx->pc == 0x45BD50u) {
        ctx->pc = 0x45BD50u;
            // 0x45bd50: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x45BD54u;
        goto label_45bd54;
    }
    ctx->pc = 0x45BD4Cu;
    SET_GPR_U32(ctx, 31, 0x45BD54u);
    ctx->pc = 0x45BD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BD4Cu;
            // 0x45bd50: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F3FB0u;
    if (runtime->hasFunction(0x3F3FB0u)) {
        auto targetFn = runtime->lookupFunction(0x3F3FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BD54u; }
        if (ctx->pc != 0x45BD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F3FB0_0x3f3fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BD54u; }
        if (ctx->pc != 0x45BD54u) { return; }
    }
    ctx->pc = 0x45BD54u;
label_45bd54:
    // 0x45bd54: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x45bd54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_45bd58:
    // 0x45bd58: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x45bd58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_45bd5c:
    // 0x45bd5c: 0x320f809  jalr        $t9
label_45bd60:
    if (ctx->pc == 0x45BD60u) {
        ctx->pc = 0x45BD60u;
            // 0x45bd60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45BD64u;
        goto label_45bd64;
    }
    ctx->pc = 0x45BD5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45BD64u);
        ctx->pc = 0x45BD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45BD5Cu;
            // 0x45bd60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45BD64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45BD64u; }
            if (ctx->pc != 0x45BD64u) { return; }
        }
        }
    }
    ctx->pc = 0x45BD64u;
label_45bd64:
    // 0x45bd64: 0x1000002c  b           . + 4 + (0x2C << 2)
label_45bd68:
    if (ctx->pc == 0x45BD68u) {
        ctx->pc = 0x45BD6Cu;
        goto label_45bd6c;
    }
    ctx->pc = 0x45BD64u;
    {
        const bool branch_taken_0x45bd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bd64) {
            ctx->pc = 0x45BE18u;
            goto label_45be18;
        }
    }
    ctx->pc = 0x45BD6Cu;
label_45bd6c:
    // 0x45bd6c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x45bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_45bd70:
    // 0x45bd70: 0xc0fcfe0  jal         func_3F3F80
label_45bd74:
    if (ctx->pc == 0x45BD74u) {
        ctx->pc = 0x45BD74u;
            // 0x45bd74: 0x8c440e68  lw          $a0, 0xE68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
        ctx->pc = 0x45BD78u;
        goto label_45bd78;
    }
    ctx->pc = 0x45BD70u;
    SET_GPR_U32(ctx, 31, 0x45BD78u);
    ctx->pc = 0x45BD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BD70u;
            // 0x45bd74: 0x8c440e68  lw          $a0, 0xE68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F3F80u;
    if (runtime->hasFunction(0x3F3F80u)) {
        auto targetFn = runtime->lookupFunction(0x3F3F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BD78u; }
        if (ctx->pc != 0x45BD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F3F80_0x3f3f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BD78u; }
        if (ctx->pc != 0x45BD78u) { return; }
    }
    ctx->pc = 0x45BD78u;
label_45bd78:
    // 0x45bd78: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_45bd7c:
    if (ctx->pc == 0x45BD7Cu) {
        ctx->pc = 0x45BD80u;
        goto label_45bd80;
    }
    ctx->pc = 0x45BD78u;
    {
        const bool branch_taken_0x45bd78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bd78) {
            ctx->pc = 0x45BE18u;
            goto label_45be18;
        }
    }
    ctx->pc = 0x45BD80u;
label_45bd80:
    // 0x45bd80: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x45bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_45bd84:
    // 0x45bd84: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x45bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_45bd88:
    // 0x45bd88: 0xc1206fc  jal         func_481BF0
label_45bd8c:
    if (ctx->pc == 0x45BD8Cu) {
        ctx->pc = 0x45BD8Cu;
            // 0x45bd8c: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->pc = 0x45BD90u;
        goto label_45bd90;
    }
    ctx->pc = 0x45BD88u;
    SET_GPR_U32(ctx, 31, 0x45BD90u);
    ctx->pc = 0x45BD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BD88u;
            // 0x45bd8c: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481BF0u;
    if (runtime->hasFunction(0x481BF0u)) {
        auto targetFn = runtime->lookupFunction(0x481BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BD90u; }
        if (ctx->pc != 0x45BD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481BF0_0x481bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BD90u; }
        if (ctx->pc != 0x45BD90u) { return; }
    }
    ctx->pc = 0x45BD90u;
label_45bd90:
    // 0x45bd90: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x45bd90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_45bd94:
    // 0x45bd94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x45bd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_45bd98:
    // 0x45bd98: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x45bd98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_45bd9c:
    // 0x45bd9c: 0x320f809  jalr        $t9
label_45bda0:
    if (ctx->pc == 0x45BDA0u) {
        ctx->pc = 0x45BDA0u;
            // 0x45bda0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x45BDA4u;
        goto label_45bda4;
    }
    ctx->pc = 0x45BD9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45BDA4u);
        ctx->pc = 0x45BDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45BD9Cu;
            // 0x45bda0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45BDA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45BDA4u; }
            if (ctx->pc != 0x45BDA4u) { return; }
        }
        }
    }
    ctx->pc = 0x45BDA4u;
label_45bda4:
    // 0x45bda4: 0xc040180  jal         func_100600
label_45bda8:
    if (ctx->pc == 0x45BDA8u) {
        ctx->pc = 0x45BDA8u;
            // 0x45bda8: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x45BDACu;
        goto label_45bdac;
    }
    ctx->pc = 0x45BDA4u;
    SET_GPR_U32(ctx, 31, 0x45BDACu);
    ctx->pc = 0x45BDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BDA4u;
            // 0x45bda8: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BDACu; }
        if (ctx->pc != 0x45BDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BDACu; }
        if (ctx->pc != 0x45BDACu) { return; }
    }
    ctx->pc = 0x45BDACu;
label_45bdac:
    // 0x45bdac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45bdacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45bdb0:
    // 0x45bdb0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_45bdb4:
    if (ctx->pc == 0x45BDB4u) {
        ctx->pc = 0x45BDB8u;
        goto label_45bdb8;
    }
    ctx->pc = 0x45BDB0u;
    {
        const bool branch_taken_0x45bdb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bdb0) {
            ctx->pc = 0x45BDDCu;
            goto label_45bddc;
        }
    }
    ctx->pc = 0x45BDB8u;
label_45bdb8:
    // 0x45bdb8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x45bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_45bdbc:
    // 0x45bdbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45bdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45bdc0:
    // 0x45bdc0: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x45bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_45bdc4:
    // 0x45bdc4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x45bdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_45bdc8:
    // 0x45bdc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45bdc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45bdcc:
    // 0x45bdcc: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x45bdccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_45bdd0:
    // 0x45bdd0: 0xc151190  jal         func_544640
label_45bdd4:
    if (ctx->pc == 0x45BDD4u) {
        ctx->pc = 0x45BDD4u;
            // 0x45bdd4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45BDD8u;
        goto label_45bdd8;
    }
    ctx->pc = 0x45BDD0u;
    SET_GPR_U32(ctx, 31, 0x45BDD8u);
    ctx->pc = 0x45BDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BDD0u;
            // 0x45bdd4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x544640u;
    if (runtime->hasFunction(0x544640u)) {
        auto targetFn = runtime->lookupFunction(0x544640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BDD8u; }
        if (ctx->pc != 0x45BDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00544640_0x544640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BDD8u; }
        if (ctx->pc != 0x45BDD8u) { return; }
    }
    ctx->pc = 0x45BDD8u;
label_45bdd8:
    // 0x45bdd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45bdd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45bddc:
    // 0x45bddc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x45bddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_45bde0:
    // 0x45bde0: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x45bde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_45bde4:
    // 0x45bde4: 0xc1206b0  jal         func_481AC0
label_45bde8:
    if (ctx->pc == 0x45BDE8u) {
        ctx->pc = 0x45BDE8u;
            // 0x45bde8: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->pc = 0x45BDECu;
        goto label_45bdec;
    }
    ctx->pc = 0x45BDE4u;
    SET_GPR_U32(ctx, 31, 0x45BDECu);
    ctx->pc = 0x45BDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BDE4u;
            // 0x45bde8: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481AC0u;
    if (runtime->hasFunction(0x481AC0u)) {
        auto targetFn = runtime->lookupFunction(0x481AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BDECu; }
        if (ctx->pc != 0x45BDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481AC0_0x481ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45BDECu; }
        if (ctx->pc != 0x45BDECu) { return; }
    }
    ctx->pc = 0x45BDECu;
label_45bdec:
    // 0x45bdec: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x45bdecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_45bdf0:
    // 0x45bdf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x45bdf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45bdf4:
    // 0x45bdf4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x45bdf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_45bdf8:
    // 0x45bdf8: 0x320f809  jalr        $t9
label_45bdfc:
    if (ctx->pc == 0x45BDFCu) {
        ctx->pc = 0x45BDFCu;
            // 0x45bdfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45BE00u;
        goto label_45be00;
    }
    ctx->pc = 0x45BDF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45BE00u);
        ctx->pc = 0x45BDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45BDF8u;
            // 0x45bdfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45BE00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45BE00u; }
            if (ctx->pc != 0x45BE00u) { return; }
        }
        }
    }
    ctx->pc = 0x45BE00u;
label_45be00:
    // 0x45be00: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x45be00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_45be04:
    // 0x45be04: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x45be04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_45be08:
    // 0x45be08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45be08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45be0c:
    // 0x45be0c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x45be0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_45be10:
    // 0x45be10: 0x320f809  jalr        $t9
label_45be14:
    if (ctx->pc == 0x45BE14u) {
        ctx->pc = 0x45BE14u;
            // 0x45be14: 0x24a51a60  addiu       $a1, $a1, 0x1A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6752));
        ctx->pc = 0x45BE18u;
        goto label_45be18;
    }
    ctx->pc = 0x45BE10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45BE18u);
        ctx->pc = 0x45BE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45BE10u;
            // 0x45be14: 0x24a51a60  addiu       $a1, $a1, 0x1A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6752));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45BE18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45BE18u; }
            if (ctx->pc != 0x45BE18u) { return; }
        }
        }
    }
    ctx->pc = 0x45BE18u;
label_45be18:
    // 0x45be18: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x45be18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_45be1c:
    // 0x45be1c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x45be1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_45be20:
    // 0x45be20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x45be20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_45be24:
    // 0x45be24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x45be24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_45be28:
    // 0x45be28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45be28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45be2c:
    // 0x45be2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45be2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45be30:
    // 0x45be30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45be30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45be34:
    // 0x45be34: 0x3e00008  jr          $ra
label_45be38:
    if (ctx->pc == 0x45BE38u) {
        ctx->pc = 0x45BE38u;
            // 0x45be38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x45BE3Cu;
        goto label_45be3c;
    }
    ctx->pc = 0x45BE34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45BE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45BE34u;
            // 0x45be38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45BE3Cu;
label_45be3c:
    // 0x45be3c: 0x0  nop
    ctx->pc = 0x45be3cu;
    // NOP
}
