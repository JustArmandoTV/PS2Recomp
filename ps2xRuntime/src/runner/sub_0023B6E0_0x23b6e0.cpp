#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023B6E0
// Address: 0x23b6e0 - 0x23bfb0
void sub_0023B6E0_0x23b6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B6E0_0x23b6e0");
#endif

    switch (ctx->pc) {
        case 0x23b6e0u: goto label_23b6e0;
        case 0x23b6e4u: goto label_23b6e4;
        case 0x23b6e8u: goto label_23b6e8;
        case 0x23b6ecu: goto label_23b6ec;
        case 0x23b6f0u: goto label_23b6f0;
        case 0x23b6f4u: goto label_23b6f4;
        case 0x23b6f8u: goto label_23b6f8;
        case 0x23b6fcu: goto label_23b6fc;
        case 0x23b700u: goto label_23b700;
        case 0x23b704u: goto label_23b704;
        case 0x23b708u: goto label_23b708;
        case 0x23b70cu: goto label_23b70c;
        case 0x23b710u: goto label_23b710;
        case 0x23b714u: goto label_23b714;
        case 0x23b718u: goto label_23b718;
        case 0x23b71cu: goto label_23b71c;
        case 0x23b720u: goto label_23b720;
        case 0x23b724u: goto label_23b724;
        case 0x23b728u: goto label_23b728;
        case 0x23b72cu: goto label_23b72c;
        case 0x23b730u: goto label_23b730;
        case 0x23b734u: goto label_23b734;
        case 0x23b738u: goto label_23b738;
        case 0x23b73cu: goto label_23b73c;
        case 0x23b740u: goto label_23b740;
        case 0x23b744u: goto label_23b744;
        case 0x23b748u: goto label_23b748;
        case 0x23b74cu: goto label_23b74c;
        case 0x23b750u: goto label_23b750;
        case 0x23b754u: goto label_23b754;
        case 0x23b758u: goto label_23b758;
        case 0x23b75cu: goto label_23b75c;
        case 0x23b760u: goto label_23b760;
        case 0x23b764u: goto label_23b764;
        case 0x23b768u: goto label_23b768;
        case 0x23b76cu: goto label_23b76c;
        case 0x23b770u: goto label_23b770;
        case 0x23b774u: goto label_23b774;
        case 0x23b778u: goto label_23b778;
        case 0x23b77cu: goto label_23b77c;
        case 0x23b780u: goto label_23b780;
        case 0x23b784u: goto label_23b784;
        case 0x23b788u: goto label_23b788;
        case 0x23b78cu: goto label_23b78c;
        case 0x23b790u: goto label_23b790;
        case 0x23b794u: goto label_23b794;
        case 0x23b798u: goto label_23b798;
        case 0x23b79cu: goto label_23b79c;
        case 0x23b7a0u: goto label_23b7a0;
        case 0x23b7a4u: goto label_23b7a4;
        case 0x23b7a8u: goto label_23b7a8;
        case 0x23b7acu: goto label_23b7ac;
        case 0x23b7b0u: goto label_23b7b0;
        case 0x23b7b4u: goto label_23b7b4;
        case 0x23b7b8u: goto label_23b7b8;
        case 0x23b7bcu: goto label_23b7bc;
        case 0x23b7c0u: goto label_23b7c0;
        case 0x23b7c4u: goto label_23b7c4;
        case 0x23b7c8u: goto label_23b7c8;
        case 0x23b7ccu: goto label_23b7cc;
        case 0x23b7d0u: goto label_23b7d0;
        case 0x23b7d4u: goto label_23b7d4;
        case 0x23b7d8u: goto label_23b7d8;
        case 0x23b7dcu: goto label_23b7dc;
        case 0x23b7e0u: goto label_23b7e0;
        case 0x23b7e4u: goto label_23b7e4;
        case 0x23b7e8u: goto label_23b7e8;
        case 0x23b7ecu: goto label_23b7ec;
        case 0x23b7f0u: goto label_23b7f0;
        case 0x23b7f4u: goto label_23b7f4;
        case 0x23b7f8u: goto label_23b7f8;
        case 0x23b7fcu: goto label_23b7fc;
        case 0x23b800u: goto label_23b800;
        case 0x23b804u: goto label_23b804;
        case 0x23b808u: goto label_23b808;
        case 0x23b80cu: goto label_23b80c;
        case 0x23b810u: goto label_23b810;
        case 0x23b814u: goto label_23b814;
        case 0x23b818u: goto label_23b818;
        case 0x23b81cu: goto label_23b81c;
        case 0x23b820u: goto label_23b820;
        case 0x23b824u: goto label_23b824;
        case 0x23b828u: goto label_23b828;
        case 0x23b82cu: goto label_23b82c;
        case 0x23b830u: goto label_23b830;
        case 0x23b834u: goto label_23b834;
        case 0x23b838u: goto label_23b838;
        case 0x23b83cu: goto label_23b83c;
        case 0x23b840u: goto label_23b840;
        case 0x23b844u: goto label_23b844;
        case 0x23b848u: goto label_23b848;
        case 0x23b84cu: goto label_23b84c;
        case 0x23b850u: goto label_23b850;
        case 0x23b854u: goto label_23b854;
        case 0x23b858u: goto label_23b858;
        case 0x23b85cu: goto label_23b85c;
        case 0x23b860u: goto label_23b860;
        case 0x23b864u: goto label_23b864;
        case 0x23b868u: goto label_23b868;
        case 0x23b86cu: goto label_23b86c;
        case 0x23b870u: goto label_23b870;
        case 0x23b874u: goto label_23b874;
        case 0x23b878u: goto label_23b878;
        case 0x23b87cu: goto label_23b87c;
        case 0x23b880u: goto label_23b880;
        case 0x23b884u: goto label_23b884;
        case 0x23b888u: goto label_23b888;
        case 0x23b88cu: goto label_23b88c;
        case 0x23b890u: goto label_23b890;
        case 0x23b894u: goto label_23b894;
        case 0x23b898u: goto label_23b898;
        case 0x23b89cu: goto label_23b89c;
        case 0x23b8a0u: goto label_23b8a0;
        case 0x23b8a4u: goto label_23b8a4;
        case 0x23b8a8u: goto label_23b8a8;
        case 0x23b8acu: goto label_23b8ac;
        case 0x23b8b0u: goto label_23b8b0;
        case 0x23b8b4u: goto label_23b8b4;
        case 0x23b8b8u: goto label_23b8b8;
        case 0x23b8bcu: goto label_23b8bc;
        case 0x23b8c0u: goto label_23b8c0;
        case 0x23b8c4u: goto label_23b8c4;
        case 0x23b8c8u: goto label_23b8c8;
        case 0x23b8ccu: goto label_23b8cc;
        case 0x23b8d0u: goto label_23b8d0;
        case 0x23b8d4u: goto label_23b8d4;
        case 0x23b8d8u: goto label_23b8d8;
        case 0x23b8dcu: goto label_23b8dc;
        case 0x23b8e0u: goto label_23b8e0;
        case 0x23b8e4u: goto label_23b8e4;
        case 0x23b8e8u: goto label_23b8e8;
        case 0x23b8ecu: goto label_23b8ec;
        case 0x23b8f0u: goto label_23b8f0;
        case 0x23b8f4u: goto label_23b8f4;
        case 0x23b8f8u: goto label_23b8f8;
        case 0x23b8fcu: goto label_23b8fc;
        case 0x23b900u: goto label_23b900;
        case 0x23b904u: goto label_23b904;
        case 0x23b908u: goto label_23b908;
        case 0x23b90cu: goto label_23b90c;
        case 0x23b910u: goto label_23b910;
        case 0x23b914u: goto label_23b914;
        case 0x23b918u: goto label_23b918;
        case 0x23b91cu: goto label_23b91c;
        case 0x23b920u: goto label_23b920;
        case 0x23b924u: goto label_23b924;
        case 0x23b928u: goto label_23b928;
        case 0x23b92cu: goto label_23b92c;
        case 0x23b930u: goto label_23b930;
        case 0x23b934u: goto label_23b934;
        case 0x23b938u: goto label_23b938;
        case 0x23b93cu: goto label_23b93c;
        case 0x23b940u: goto label_23b940;
        case 0x23b944u: goto label_23b944;
        case 0x23b948u: goto label_23b948;
        case 0x23b94cu: goto label_23b94c;
        case 0x23b950u: goto label_23b950;
        case 0x23b954u: goto label_23b954;
        case 0x23b958u: goto label_23b958;
        case 0x23b95cu: goto label_23b95c;
        case 0x23b960u: goto label_23b960;
        case 0x23b964u: goto label_23b964;
        case 0x23b968u: goto label_23b968;
        case 0x23b96cu: goto label_23b96c;
        case 0x23b970u: goto label_23b970;
        case 0x23b974u: goto label_23b974;
        case 0x23b978u: goto label_23b978;
        case 0x23b97cu: goto label_23b97c;
        case 0x23b980u: goto label_23b980;
        case 0x23b984u: goto label_23b984;
        case 0x23b988u: goto label_23b988;
        case 0x23b98cu: goto label_23b98c;
        case 0x23b990u: goto label_23b990;
        case 0x23b994u: goto label_23b994;
        case 0x23b998u: goto label_23b998;
        case 0x23b99cu: goto label_23b99c;
        case 0x23b9a0u: goto label_23b9a0;
        case 0x23b9a4u: goto label_23b9a4;
        case 0x23b9a8u: goto label_23b9a8;
        case 0x23b9acu: goto label_23b9ac;
        case 0x23b9b0u: goto label_23b9b0;
        case 0x23b9b4u: goto label_23b9b4;
        case 0x23b9b8u: goto label_23b9b8;
        case 0x23b9bcu: goto label_23b9bc;
        case 0x23b9c0u: goto label_23b9c0;
        case 0x23b9c4u: goto label_23b9c4;
        case 0x23b9c8u: goto label_23b9c8;
        case 0x23b9ccu: goto label_23b9cc;
        case 0x23b9d0u: goto label_23b9d0;
        case 0x23b9d4u: goto label_23b9d4;
        case 0x23b9d8u: goto label_23b9d8;
        case 0x23b9dcu: goto label_23b9dc;
        case 0x23b9e0u: goto label_23b9e0;
        case 0x23b9e4u: goto label_23b9e4;
        case 0x23b9e8u: goto label_23b9e8;
        case 0x23b9ecu: goto label_23b9ec;
        case 0x23b9f0u: goto label_23b9f0;
        case 0x23b9f4u: goto label_23b9f4;
        case 0x23b9f8u: goto label_23b9f8;
        case 0x23b9fcu: goto label_23b9fc;
        case 0x23ba00u: goto label_23ba00;
        case 0x23ba04u: goto label_23ba04;
        case 0x23ba08u: goto label_23ba08;
        case 0x23ba0cu: goto label_23ba0c;
        case 0x23ba10u: goto label_23ba10;
        case 0x23ba14u: goto label_23ba14;
        case 0x23ba18u: goto label_23ba18;
        case 0x23ba1cu: goto label_23ba1c;
        case 0x23ba20u: goto label_23ba20;
        case 0x23ba24u: goto label_23ba24;
        case 0x23ba28u: goto label_23ba28;
        case 0x23ba2cu: goto label_23ba2c;
        case 0x23ba30u: goto label_23ba30;
        case 0x23ba34u: goto label_23ba34;
        case 0x23ba38u: goto label_23ba38;
        case 0x23ba3cu: goto label_23ba3c;
        case 0x23ba40u: goto label_23ba40;
        case 0x23ba44u: goto label_23ba44;
        case 0x23ba48u: goto label_23ba48;
        case 0x23ba4cu: goto label_23ba4c;
        case 0x23ba50u: goto label_23ba50;
        case 0x23ba54u: goto label_23ba54;
        case 0x23ba58u: goto label_23ba58;
        case 0x23ba5cu: goto label_23ba5c;
        case 0x23ba60u: goto label_23ba60;
        case 0x23ba64u: goto label_23ba64;
        case 0x23ba68u: goto label_23ba68;
        case 0x23ba6cu: goto label_23ba6c;
        case 0x23ba70u: goto label_23ba70;
        case 0x23ba74u: goto label_23ba74;
        case 0x23ba78u: goto label_23ba78;
        case 0x23ba7cu: goto label_23ba7c;
        case 0x23ba80u: goto label_23ba80;
        case 0x23ba84u: goto label_23ba84;
        case 0x23ba88u: goto label_23ba88;
        case 0x23ba8cu: goto label_23ba8c;
        case 0x23ba90u: goto label_23ba90;
        case 0x23ba94u: goto label_23ba94;
        case 0x23ba98u: goto label_23ba98;
        case 0x23ba9cu: goto label_23ba9c;
        case 0x23baa0u: goto label_23baa0;
        case 0x23baa4u: goto label_23baa4;
        case 0x23baa8u: goto label_23baa8;
        case 0x23baacu: goto label_23baac;
        case 0x23bab0u: goto label_23bab0;
        case 0x23bab4u: goto label_23bab4;
        case 0x23bab8u: goto label_23bab8;
        case 0x23babcu: goto label_23babc;
        case 0x23bac0u: goto label_23bac0;
        case 0x23bac4u: goto label_23bac4;
        case 0x23bac8u: goto label_23bac8;
        case 0x23baccu: goto label_23bacc;
        case 0x23bad0u: goto label_23bad0;
        case 0x23bad4u: goto label_23bad4;
        case 0x23bad8u: goto label_23bad8;
        case 0x23badcu: goto label_23badc;
        case 0x23bae0u: goto label_23bae0;
        case 0x23bae4u: goto label_23bae4;
        case 0x23bae8u: goto label_23bae8;
        case 0x23baecu: goto label_23baec;
        case 0x23baf0u: goto label_23baf0;
        case 0x23baf4u: goto label_23baf4;
        case 0x23baf8u: goto label_23baf8;
        case 0x23bafcu: goto label_23bafc;
        case 0x23bb00u: goto label_23bb00;
        case 0x23bb04u: goto label_23bb04;
        case 0x23bb08u: goto label_23bb08;
        case 0x23bb0cu: goto label_23bb0c;
        case 0x23bb10u: goto label_23bb10;
        case 0x23bb14u: goto label_23bb14;
        case 0x23bb18u: goto label_23bb18;
        case 0x23bb1cu: goto label_23bb1c;
        case 0x23bb20u: goto label_23bb20;
        case 0x23bb24u: goto label_23bb24;
        case 0x23bb28u: goto label_23bb28;
        case 0x23bb2cu: goto label_23bb2c;
        case 0x23bb30u: goto label_23bb30;
        case 0x23bb34u: goto label_23bb34;
        case 0x23bb38u: goto label_23bb38;
        case 0x23bb3cu: goto label_23bb3c;
        case 0x23bb40u: goto label_23bb40;
        case 0x23bb44u: goto label_23bb44;
        case 0x23bb48u: goto label_23bb48;
        case 0x23bb4cu: goto label_23bb4c;
        case 0x23bb50u: goto label_23bb50;
        case 0x23bb54u: goto label_23bb54;
        case 0x23bb58u: goto label_23bb58;
        case 0x23bb5cu: goto label_23bb5c;
        case 0x23bb60u: goto label_23bb60;
        case 0x23bb64u: goto label_23bb64;
        case 0x23bb68u: goto label_23bb68;
        case 0x23bb6cu: goto label_23bb6c;
        case 0x23bb70u: goto label_23bb70;
        case 0x23bb74u: goto label_23bb74;
        case 0x23bb78u: goto label_23bb78;
        case 0x23bb7cu: goto label_23bb7c;
        case 0x23bb80u: goto label_23bb80;
        case 0x23bb84u: goto label_23bb84;
        case 0x23bb88u: goto label_23bb88;
        case 0x23bb8cu: goto label_23bb8c;
        case 0x23bb90u: goto label_23bb90;
        case 0x23bb94u: goto label_23bb94;
        case 0x23bb98u: goto label_23bb98;
        case 0x23bb9cu: goto label_23bb9c;
        case 0x23bba0u: goto label_23bba0;
        case 0x23bba4u: goto label_23bba4;
        case 0x23bba8u: goto label_23bba8;
        case 0x23bbacu: goto label_23bbac;
        case 0x23bbb0u: goto label_23bbb0;
        case 0x23bbb4u: goto label_23bbb4;
        case 0x23bbb8u: goto label_23bbb8;
        case 0x23bbbcu: goto label_23bbbc;
        case 0x23bbc0u: goto label_23bbc0;
        case 0x23bbc4u: goto label_23bbc4;
        case 0x23bbc8u: goto label_23bbc8;
        case 0x23bbccu: goto label_23bbcc;
        case 0x23bbd0u: goto label_23bbd0;
        case 0x23bbd4u: goto label_23bbd4;
        case 0x23bbd8u: goto label_23bbd8;
        case 0x23bbdcu: goto label_23bbdc;
        case 0x23bbe0u: goto label_23bbe0;
        case 0x23bbe4u: goto label_23bbe4;
        case 0x23bbe8u: goto label_23bbe8;
        case 0x23bbecu: goto label_23bbec;
        case 0x23bbf0u: goto label_23bbf0;
        case 0x23bbf4u: goto label_23bbf4;
        case 0x23bbf8u: goto label_23bbf8;
        case 0x23bbfcu: goto label_23bbfc;
        case 0x23bc00u: goto label_23bc00;
        case 0x23bc04u: goto label_23bc04;
        case 0x23bc08u: goto label_23bc08;
        case 0x23bc0cu: goto label_23bc0c;
        case 0x23bc10u: goto label_23bc10;
        case 0x23bc14u: goto label_23bc14;
        case 0x23bc18u: goto label_23bc18;
        case 0x23bc1cu: goto label_23bc1c;
        case 0x23bc20u: goto label_23bc20;
        case 0x23bc24u: goto label_23bc24;
        case 0x23bc28u: goto label_23bc28;
        case 0x23bc2cu: goto label_23bc2c;
        case 0x23bc30u: goto label_23bc30;
        case 0x23bc34u: goto label_23bc34;
        case 0x23bc38u: goto label_23bc38;
        case 0x23bc3cu: goto label_23bc3c;
        case 0x23bc40u: goto label_23bc40;
        case 0x23bc44u: goto label_23bc44;
        case 0x23bc48u: goto label_23bc48;
        case 0x23bc4cu: goto label_23bc4c;
        case 0x23bc50u: goto label_23bc50;
        case 0x23bc54u: goto label_23bc54;
        case 0x23bc58u: goto label_23bc58;
        case 0x23bc5cu: goto label_23bc5c;
        case 0x23bc60u: goto label_23bc60;
        case 0x23bc64u: goto label_23bc64;
        case 0x23bc68u: goto label_23bc68;
        case 0x23bc6cu: goto label_23bc6c;
        case 0x23bc70u: goto label_23bc70;
        case 0x23bc74u: goto label_23bc74;
        case 0x23bc78u: goto label_23bc78;
        case 0x23bc7cu: goto label_23bc7c;
        case 0x23bc80u: goto label_23bc80;
        case 0x23bc84u: goto label_23bc84;
        case 0x23bc88u: goto label_23bc88;
        case 0x23bc8cu: goto label_23bc8c;
        case 0x23bc90u: goto label_23bc90;
        case 0x23bc94u: goto label_23bc94;
        case 0x23bc98u: goto label_23bc98;
        case 0x23bc9cu: goto label_23bc9c;
        case 0x23bca0u: goto label_23bca0;
        case 0x23bca4u: goto label_23bca4;
        case 0x23bca8u: goto label_23bca8;
        case 0x23bcacu: goto label_23bcac;
        case 0x23bcb0u: goto label_23bcb0;
        case 0x23bcb4u: goto label_23bcb4;
        case 0x23bcb8u: goto label_23bcb8;
        case 0x23bcbcu: goto label_23bcbc;
        case 0x23bcc0u: goto label_23bcc0;
        case 0x23bcc4u: goto label_23bcc4;
        case 0x23bcc8u: goto label_23bcc8;
        case 0x23bcccu: goto label_23bccc;
        case 0x23bcd0u: goto label_23bcd0;
        case 0x23bcd4u: goto label_23bcd4;
        case 0x23bcd8u: goto label_23bcd8;
        case 0x23bcdcu: goto label_23bcdc;
        case 0x23bce0u: goto label_23bce0;
        case 0x23bce4u: goto label_23bce4;
        case 0x23bce8u: goto label_23bce8;
        case 0x23bcecu: goto label_23bcec;
        case 0x23bcf0u: goto label_23bcf0;
        case 0x23bcf4u: goto label_23bcf4;
        case 0x23bcf8u: goto label_23bcf8;
        case 0x23bcfcu: goto label_23bcfc;
        case 0x23bd00u: goto label_23bd00;
        case 0x23bd04u: goto label_23bd04;
        case 0x23bd08u: goto label_23bd08;
        case 0x23bd0cu: goto label_23bd0c;
        case 0x23bd10u: goto label_23bd10;
        case 0x23bd14u: goto label_23bd14;
        case 0x23bd18u: goto label_23bd18;
        case 0x23bd1cu: goto label_23bd1c;
        case 0x23bd20u: goto label_23bd20;
        case 0x23bd24u: goto label_23bd24;
        case 0x23bd28u: goto label_23bd28;
        case 0x23bd2cu: goto label_23bd2c;
        case 0x23bd30u: goto label_23bd30;
        case 0x23bd34u: goto label_23bd34;
        case 0x23bd38u: goto label_23bd38;
        case 0x23bd3cu: goto label_23bd3c;
        case 0x23bd40u: goto label_23bd40;
        case 0x23bd44u: goto label_23bd44;
        case 0x23bd48u: goto label_23bd48;
        case 0x23bd4cu: goto label_23bd4c;
        case 0x23bd50u: goto label_23bd50;
        case 0x23bd54u: goto label_23bd54;
        case 0x23bd58u: goto label_23bd58;
        case 0x23bd5cu: goto label_23bd5c;
        case 0x23bd60u: goto label_23bd60;
        case 0x23bd64u: goto label_23bd64;
        case 0x23bd68u: goto label_23bd68;
        case 0x23bd6cu: goto label_23bd6c;
        case 0x23bd70u: goto label_23bd70;
        case 0x23bd74u: goto label_23bd74;
        case 0x23bd78u: goto label_23bd78;
        case 0x23bd7cu: goto label_23bd7c;
        case 0x23bd80u: goto label_23bd80;
        case 0x23bd84u: goto label_23bd84;
        case 0x23bd88u: goto label_23bd88;
        case 0x23bd8cu: goto label_23bd8c;
        case 0x23bd90u: goto label_23bd90;
        case 0x23bd94u: goto label_23bd94;
        case 0x23bd98u: goto label_23bd98;
        case 0x23bd9cu: goto label_23bd9c;
        case 0x23bda0u: goto label_23bda0;
        case 0x23bda4u: goto label_23bda4;
        case 0x23bda8u: goto label_23bda8;
        case 0x23bdacu: goto label_23bdac;
        case 0x23bdb0u: goto label_23bdb0;
        case 0x23bdb4u: goto label_23bdb4;
        case 0x23bdb8u: goto label_23bdb8;
        case 0x23bdbcu: goto label_23bdbc;
        case 0x23bdc0u: goto label_23bdc0;
        case 0x23bdc4u: goto label_23bdc4;
        case 0x23bdc8u: goto label_23bdc8;
        case 0x23bdccu: goto label_23bdcc;
        case 0x23bdd0u: goto label_23bdd0;
        case 0x23bdd4u: goto label_23bdd4;
        case 0x23bdd8u: goto label_23bdd8;
        case 0x23bddcu: goto label_23bddc;
        case 0x23bde0u: goto label_23bde0;
        case 0x23bde4u: goto label_23bde4;
        case 0x23bde8u: goto label_23bde8;
        case 0x23bdecu: goto label_23bdec;
        case 0x23bdf0u: goto label_23bdf0;
        case 0x23bdf4u: goto label_23bdf4;
        case 0x23bdf8u: goto label_23bdf8;
        case 0x23bdfcu: goto label_23bdfc;
        case 0x23be00u: goto label_23be00;
        case 0x23be04u: goto label_23be04;
        case 0x23be08u: goto label_23be08;
        case 0x23be0cu: goto label_23be0c;
        case 0x23be10u: goto label_23be10;
        case 0x23be14u: goto label_23be14;
        case 0x23be18u: goto label_23be18;
        case 0x23be1cu: goto label_23be1c;
        case 0x23be20u: goto label_23be20;
        case 0x23be24u: goto label_23be24;
        case 0x23be28u: goto label_23be28;
        case 0x23be2cu: goto label_23be2c;
        case 0x23be30u: goto label_23be30;
        case 0x23be34u: goto label_23be34;
        case 0x23be38u: goto label_23be38;
        case 0x23be3cu: goto label_23be3c;
        case 0x23be40u: goto label_23be40;
        case 0x23be44u: goto label_23be44;
        case 0x23be48u: goto label_23be48;
        case 0x23be4cu: goto label_23be4c;
        case 0x23be50u: goto label_23be50;
        case 0x23be54u: goto label_23be54;
        case 0x23be58u: goto label_23be58;
        case 0x23be5cu: goto label_23be5c;
        case 0x23be60u: goto label_23be60;
        case 0x23be64u: goto label_23be64;
        case 0x23be68u: goto label_23be68;
        case 0x23be6cu: goto label_23be6c;
        case 0x23be70u: goto label_23be70;
        case 0x23be74u: goto label_23be74;
        case 0x23be78u: goto label_23be78;
        case 0x23be7cu: goto label_23be7c;
        case 0x23be80u: goto label_23be80;
        case 0x23be84u: goto label_23be84;
        case 0x23be88u: goto label_23be88;
        case 0x23be8cu: goto label_23be8c;
        case 0x23be90u: goto label_23be90;
        case 0x23be94u: goto label_23be94;
        case 0x23be98u: goto label_23be98;
        case 0x23be9cu: goto label_23be9c;
        case 0x23bea0u: goto label_23bea0;
        case 0x23bea4u: goto label_23bea4;
        case 0x23bea8u: goto label_23bea8;
        case 0x23beacu: goto label_23beac;
        case 0x23beb0u: goto label_23beb0;
        case 0x23beb4u: goto label_23beb4;
        case 0x23beb8u: goto label_23beb8;
        case 0x23bebcu: goto label_23bebc;
        case 0x23bec0u: goto label_23bec0;
        case 0x23bec4u: goto label_23bec4;
        case 0x23bec8u: goto label_23bec8;
        case 0x23beccu: goto label_23becc;
        case 0x23bed0u: goto label_23bed0;
        case 0x23bed4u: goto label_23bed4;
        case 0x23bed8u: goto label_23bed8;
        case 0x23bedcu: goto label_23bedc;
        case 0x23bee0u: goto label_23bee0;
        case 0x23bee4u: goto label_23bee4;
        case 0x23bee8u: goto label_23bee8;
        case 0x23beecu: goto label_23beec;
        case 0x23bef0u: goto label_23bef0;
        case 0x23bef4u: goto label_23bef4;
        case 0x23bef8u: goto label_23bef8;
        case 0x23befcu: goto label_23befc;
        case 0x23bf00u: goto label_23bf00;
        case 0x23bf04u: goto label_23bf04;
        case 0x23bf08u: goto label_23bf08;
        case 0x23bf0cu: goto label_23bf0c;
        case 0x23bf10u: goto label_23bf10;
        case 0x23bf14u: goto label_23bf14;
        case 0x23bf18u: goto label_23bf18;
        case 0x23bf1cu: goto label_23bf1c;
        case 0x23bf20u: goto label_23bf20;
        case 0x23bf24u: goto label_23bf24;
        case 0x23bf28u: goto label_23bf28;
        case 0x23bf2cu: goto label_23bf2c;
        case 0x23bf30u: goto label_23bf30;
        case 0x23bf34u: goto label_23bf34;
        case 0x23bf38u: goto label_23bf38;
        case 0x23bf3cu: goto label_23bf3c;
        case 0x23bf40u: goto label_23bf40;
        case 0x23bf44u: goto label_23bf44;
        case 0x23bf48u: goto label_23bf48;
        case 0x23bf4cu: goto label_23bf4c;
        case 0x23bf50u: goto label_23bf50;
        case 0x23bf54u: goto label_23bf54;
        case 0x23bf58u: goto label_23bf58;
        case 0x23bf5cu: goto label_23bf5c;
        case 0x23bf60u: goto label_23bf60;
        case 0x23bf64u: goto label_23bf64;
        case 0x23bf68u: goto label_23bf68;
        case 0x23bf6cu: goto label_23bf6c;
        case 0x23bf70u: goto label_23bf70;
        case 0x23bf74u: goto label_23bf74;
        case 0x23bf78u: goto label_23bf78;
        case 0x23bf7cu: goto label_23bf7c;
        case 0x23bf80u: goto label_23bf80;
        case 0x23bf84u: goto label_23bf84;
        case 0x23bf88u: goto label_23bf88;
        case 0x23bf8cu: goto label_23bf8c;
        case 0x23bf90u: goto label_23bf90;
        case 0x23bf94u: goto label_23bf94;
        case 0x23bf98u: goto label_23bf98;
        case 0x23bf9cu: goto label_23bf9c;
        case 0x23bfa0u: goto label_23bfa0;
        case 0x23bfa4u: goto label_23bfa4;
        case 0x23bfa8u: goto label_23bfa8;
        case 0x23bfacu: goto label_23bfac;
        default: break;
    }

    ctx->pc = 0x23b6e0u;

label_23b6e0:
    // 0x23b6e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23b6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_23b6e4:
    // 0x23b6e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23b6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_23b6e8:
    // 0x23b6e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23b6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23b6ec:
    // 0x23b6ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23b6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23b6f0:
    // 0x23b6f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23b6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23b6f4:
    // 0x23b6f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23b6f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23b6f8:
    // 0x23b6f8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x23b6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_23b6fc:
    // 0x23b6fc: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x23b6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_23b700:
    // 0x23b700: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x23b700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_23b704:
    // 0x23b704: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x23b704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_23b708:
    // 0x23b708: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
label_23b70c:
    if (ctx->pc == 0x23B70Cu) {
        ctx->pc = 0x23B70Cu;
            // 0x23b70c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23B710u;
        goto label_23b710;
    }
    ctx->pc = 0x23B708u;
    {
        const bool branch_taken_0x23b708 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x23B70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B708u;
            // 0x23b70c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b708) {
            ctx->pc = 0x23B718u;
            goto label_23b718;
        }
    }
    ctx->pc = 0x23B710u;
label_23b710:
    // 0x23b710: 0xc0a728c  jal         func_29CA30
label_23b714:
    if (ctx->pc == 0x23B714u) {
        ctx->pc = 0x23B714u;
            // 0x23b714: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x23B718u;
        goto label_23b718;
    }
    ctx->pc = 0x23B710u;
    SET_GPR_U32(ctx, 31, 0x23B718u);
    ctx->pc = 0x23B714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B710u;
            // 0x23b714: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B718u; }
        if (ctx->pc != 0x23B718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B718u; }
        if (ctx->pc != 0x23B718u) { return; }
    }
    ctx->pc = 0x23B718u;
label_23b718:
    // 0x23b718: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x23b718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_23b71c:
    // 0x23b71c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x23b71cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_23b720:
    // 0x23b720: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x23b720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_23b724:
    // 0x23b724: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x23b724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23b728:
    // 0x23b728: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x23b728u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
label_23b72c:
    // 0x23b72c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x23b72cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23b730:
    // 0x23b730: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x23b730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_23b734:
    // 0x23b734: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x23b734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_23b738:
    // 0x23b738: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x23b738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23b73c:
    // 0x23b73c: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x23b73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_23b740:
    // 0x23b740: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23b740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23b744:
    // 0x23b744: 0xac830080  sw          $v1, 0x80($a0)
    ctx->pc = 0x23b744u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
label_23b748:
    // 0x23b748: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23b748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23b74c:
    // 0x23b74c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x23b74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_23b750:
    // 0x23b750: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x23b750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_23b754:
    // 0x23b754: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x23b754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_23b758:
    // 0x23b758: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x23b758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_23b75c:
    // 0x23b75c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x23b75cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_23b760:
    // 0x23b760: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x23b760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_23b764:
    // 0x23b764: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x23b764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_23b768:
    // 0x23b768: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x23b768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_23b76c:
    // 0x23b76c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x23b76cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_23b770:
    // 0x23b770: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x23b770u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_23b774:
    // 0x23b774: 0x2c610023  sltiu       $at, $v1, 0x23
    ctx->pc = 0x23b774u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
label_23b778:
    // 0x23b778: 0x502001ee  beql        $at, $zero, . + 4 + (0x1EE << 2)
label_23b77c:
    if (ctx->pc == 0x23B77Cu) {
        ctx->pc = 0x23B77Cu;
            // 0x23b77c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x23B780u;
        goto label_23b780;
    }
    ctx->pc = 0x23B778u;
    {
        const bool branch_taken_0x23b778 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b778) {
            ctx->pc = 0x23B77Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23B778u;
            // 0x23b77c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23BF34u;
            goto label_23bf34;
        }
    }
    ctx->pc = 0x23B780u;
label_23b780:
    // 0x23b780: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x23b780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_23b784:
    // 0x23b784: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23b784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23b788:
    // 0x23b788: 0x2484f680  addiu       $a0, $a0, -0x980
    ctx->pc = 0x23b788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964864));
label_23b78c:
    // 0x23b78c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23b78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23b790:
    // 0x23b790: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23b790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23b794:
    // 0x23b794: 0x600008  jr          $v1
label_23b798:
    if (ctx->pc == 0x23B798u) {
        ctx->pc = 0x23B79Cu;
        goto label_23b79c;
    }
    ctx->pc = 0x23B794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B79Cu: goto label_23b79c;
            case 0x23B7BCu: goto label_23b7bc;
            case 0x23B7DCu: goto label_23b7dc;
            case 0x23B7FCu: goto label_23b7fc;
            case 0x23B838u: goto label_23b838;
            case 0x23B8B4u: goto label_23b8b4;
            case 0x23B934u: goto label_23b934;
            case 0x23B954u: goto label_23b954;
            case 0x23B974u: goto label_23b974;
            case 0x23B994u: goto label_23b994;
            case 0x23B9B4u: goto label_23b9b4;
            case 0x23BA74u: goto label_23ba74;
            case 0x23BA94u: goto label_23ba94;
            case 0x23BAB4u: goto label_23bab4;
            case 0x23BB34u: goto label_23bb34;
            case 0x23BBB4u: goto label_23bbb4;
            case 0x23BBD4u: goto label_23bbd4;
            case 0x23BC98u: goto label_23bc98;
            case 0x23BCB8u: goto label_23bcb8;
            case 0x23BCD8u: goto label_23bcd8;
            case 0x23BD54u: goto label_23bd54;
            case 0x23BD74u: goto label_23bd74;
            case 0x23BD94u: goto label_23bd94;
            case 0x23BDB4u: goto label_23bdb4;
            case 0x23BDD4u: goto label_23bdd4;
            case 0x23BDF4u: goto label_23bdf4;
            case 0x23BE14u: goto label_23be14;
            case 0x23BE34u: goto label_23be34;
            case 0x23BE70u: goto label_23be70;
            case 0x23BED4u: goto label_23bed4;
            case 0x23BEF4u: goto label_23bef4;
            case 0x23BF14u: goto label_23bf14;
            case 0x23BF30u: goto label_23bf30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23B79Cu;
label_23b79c:
    // 0x23b79c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23b79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23b7a0:
    // 0x23b7a0: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23b7a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23b7a4:
    // 0x23b7a4: 0x106001e2  beqz        $v1, . + 4 + (0x1E2 << 2)
label_23b7a8:
    if (ctx->pc == 0x23B7A8u) {
        ctx->pc = 0x23B7ACu;
        goto label_23b7ac;
    }
    ctx->pc = 0x23B7A4u;
    {
        const bool branch_taken_0x23b7a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b7a4) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23B7ACu;
label_23b7ac:
    // 0x23b7ac: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23b7acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23b7b0:
    // 0x23b7b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23b7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23b7b4:
    // 0x23b7b4: 0x100001de  b           . + 4 + (0x1DE << 2)
label_23b7b8:
    if (ctx->pc == 0x23B7B8u) {
        ctx->pc = 0x23B7B8u;
            // 0x23b7b8: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x23B7BCu;
        goto label_23b7bc;
    }
    ctx->pc = 0x23B7B4u;
    {
        const bool branch_taken_0x23b7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B7B4u;
            // 0x23b7b8: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b7b4) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23B7BCu;
label_23b7bc:
    // 0x23b7bc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23b7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23b7c0:
    // 0x23b7c0: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23b7c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23b7c4:
    // 0x23b7c4: 0x106001da  beqz        $v1, . + 4 + (0x1DA << 2)
label_23b7c8:
    if (ctx->pc == 0x23B7C8u) {
        ctx->pc = 0x23B7CCu;
        goto label_23b7cc;
    }
    ctx->pc = 0x23B7C4u;
    {
        const bool branch_taken_0x23b7c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b7c4) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23B7CCu;
label_23b7cc:
    // 0x23b7cc: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23b7ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23b7d0:
    // 0x23b7d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23b7d4:
    // 0x23b7d4: 0x100001d6  b           . + 4 + (0x1D6 << 2)
label_23b7d8:
    if (ctx->pc == 0x23B7D8u) {
        ctx->pc = 0x23B7D8u;
            // 0x23b7d8: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x23B7DCu;
        goto label_23b7dc;
    }
    ctx->pc = 0x23B7D4u;
    {
        const bool branch_taken_0x23b7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B7D4u;
            // 0x23b7d8: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b7d4) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23B7DCu;
label_23b7dc:
    // 0x23b7dc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23b7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23b7e0:
    // 0x23b7e0: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23b7e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23b7e4:
    // 0x23b7e4: 0x106001d2  beqz        $v1, . + 4 + (0x1D2 << 2)
label_23b7e8:
    if (ctx->pc == 0x23B7E8u) {
        ctx->pc = 0x23B7ECu;
        goto label_23b7ec;
    }
    ctx->pc = 0x23B7E4u;
    {
        const bool branch_taken_0x23b7e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b7e4) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23B7ECu;
label_23b7ec:
    // 0x23b7ec: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23b7ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23b7f0:
    // 0x23b7f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23b7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23b7f4:
    // 0x23b7f4: 0x100001ce  b           . + 4 + (0x1CE << 2)
label_23b7f8:
    if (ctx->pc == 0x23B7F8u) {
        ctx->pc = 0x23B7F8u;
            // 0x23b7f8: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x23B7FCu;
        goto label_23b7fc;
    }
    ctx->pc = 0x23B7F4u;
    {
        const bool branch_taken_0x23b7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B7F4u;
            // 0x23b7f8: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b7f4) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23B7FCu;
label_23b7fc:
    // 0x23b7fc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23b7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23b800:
    // 0x23b800: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23b800u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23b804:
    // 0x23b804: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_23b808:
    if (ctx->pc == 0x23B808u) {
        ctx->pc = 0x23B808u;
            // 0x23b808: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x23B80Cu;
        goto label_23b80c;
    }
    ctx->pc = 0x23B804u;
    {
        const bool branch_taken_0x23b804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b804) {
            ctx->pc = 0x23B808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23B804u;
            // 0x23b808: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23B81Cu;
            goto label_23b81c;
        }
    }
    ctx->pc = 0x23B80Cu;
label_23b80c:
    // 0x23b80c: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23b80cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23b810:
    // 0x23b810: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23b810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23b814:
    // 0x23b814: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x23b814u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_23b818:
    // 0x23b818: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x23b818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23b81c:
    // 0x23b81c: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23b81cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23b820:
    // 0x23b820: 0x106001c3  beqz        $v1, . + 4 + (0x1C3 << 2)
label_23b824:
    if (ctx->pc == 0x23B824u) {
        ctx->pc = 0x23B828u;
        goto label_23b828;
    }
    ctx->pc = 0x23B820u;
    {
        const bool branch_taken_0x23b820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b820) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23B828u;
label_23b828:
    // 0x23b828: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23b828u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23b82c:
    // 0x23b82c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23b82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23b830:
    // 0x23b830: 0x100001bf  b           . + 4 + (0x1BF << 2)
label_23b834:
    if (ctx->pc == 0x23B834u) {
        ctx->pc = 0x23B834u;
            // 0x23b834: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x23B838u;
        goto label_23b838;
    }
    ctx->pc = 0x23B830u;
    {
        const bool branch_taken_0x23b830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B830u;
            // 0x23b834: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b830) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23B838u;
label_23b838:
    // 0x23b838: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x23b838u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_23b83c:
    // 0x23b83c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23b83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23b840:
    // 0x23b840: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23b840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23b844:
    // 0x23b844: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x23b844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23b848:
    // 0x23b848: 0xc0a7a88  jal         func_29EA20
label_23b84c:
    if (ctx->pc == 0x23B84Cu) {
        ctx->pc = 0x23B84Cu;
            // 0x23b84c: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x23B850u;
        goto label_23b850;
    }
    ctx->pc = 0x23B848u;
    SET_GPR_U32(ctx, 31, 0x23B850u);
    ctx->pc = 0x23B84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B848u;
            // 0x23b84c: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B850u; }
        if (ctx->pc != 0x23B850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B850u; }
        if (ctx->pc != 0x23B850u) { return; }
    }
    ctx->pc = 0x23B850u;
label_23b850:
    // 0x23b850: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x23b850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_23b854:
    // 0x23b854: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23b854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23b858:
    // 0x23b858: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x23b858u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_23b85c:
    // 0x23b85c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x23b85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_23b860:
    // 0x23b860: 0xc0a8448  jal         func_2A1120
label_23b864:
    if (ctx->pc == 0x23B864u) {
        ctx->pc = 0x23B864u;
            // 0x23b864: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x23B868u;
        goto label_23b868;
    }
    ctx->pc = 0x23B860u;
    SET_GPR_U32(ctx, 31, 0x23B868u);
    ctx->pc = 0x23B864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B860u;
            // 0x23b864: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1120u;
    if (runtime->hasFunction(0x2A1120u)) {
        auto targetFn = runtime->lookupFunction(0x2A1120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B868u; }
        if (ctx->pc != 0x23B868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1120_0x2a1120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B868u; }
        if (ctx->pc != 0x23B868u) { return; }
    }
    ctx->pc = 0x23B868u;
label_23b868:
    // 0x23b868: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x23b868u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_23b86c:
    // 0x23b86c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x23b86cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23b870:
    // 0x23b870: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23b870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23b874:
    // 0x23b874: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x23b874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_23b878:
    // 0x23b878: 0xc5082b  sltu        $at, $a2, $a1
    ctx->pc = 0x23b878u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_23b87c:
    // 0x23b87c: 0x102001ac  beqz        $at, . + 4 + (0x1AC << 2)
label_23b880:
    if (ctx->pc == 0x23B880u) {
        ctx->pc = 0x23B884u;
        goto label_23b884;
    }
    ctx->pc = 0x23B87Cu;
    {
        const bool branch_taken_0x23b87c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b87c) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23B884u;
label_23b884:
    // 0x23b884: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x23b884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_23b888:
    // 0x23b888: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23b888u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23b88c:
    // 0x23b88c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_23b890:
    if (ctx->pc == 0x23B890u) {
        ctx->pc = 0x23B890u;
            // 0x23b890: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x23B894u;
        goto label_23b894;
    }
    ctx->pc = 0x23B88Cu;
    {
        const bool branch_taken_0x23b88c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B88Cu;
            // 0x23b890: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b88c) {
            ctx->pc = 0x23B8A0u;
            goto label_23b8a0;
        }
    }
    ctx->pc = 0x23B894u;
label_23b894:
    // 0x23b894: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23b894u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23b898:
    // 0x23b898: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23b898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23b89c:
    // 0x23b89c: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x23b89cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_23b8a0:
    // 0x23b8a0: 0xc5182b  sltu        $v1, $a2, $a1
    ctx->pc = 0x23b8a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_23b8a4:
    // 0x23b8a4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_23b8a8:
    if (ctx->pc == 0x23B8A8u) {
        ctx->pc = 0x23B8A8u;
            // 0x23b8a8: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->pc = 0x23B8ACu;
        goto label_23b8ac;
    }
    ctx->pc = 0x23B8A4u;
    {
        const bool branch_taken_0x23b8a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b8a4) {
            ctx->pc = 0x23B8A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23B8A4u;
            // 0x23b8a8: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23B888u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23b888;
        }
    }
    ctx->pc = 0x23B8ACu;
label_23b8ac:
    // 0x23b8ac: 0x100001a0  b           . + 4 + (0x1A0 << 2)
label_23b8b0:
    if (ctx->pc == 0x23B8B0u) {
        ctx->pc = 0x23B8B4u;
        goto label_23b8b4;
    }
    ctx->pc = 0x23B8ACu;
    {
        const bool branch_taken_0x23b8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b8ac) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23B8B4u;
label_23b8b4:
    // 0x23b8b4: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x23b8b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_23b8b8:
    // 0x23b8b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23b8bc:
    // 0x23b8bc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23b8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23b8c0:
    // 0x23b8c0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x23b8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23b8c4:
    // 0x23b8c4: 0xc0a7a88  jal         func_29EA20
label_23b8c8:
    if (ctx->pc == 0x23B8C8u) {
        ctx->pc = 0x23B8C8u;
            // 0x23b8c8: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x23B8CCu;
        goto label_23b8cc;
    }
    ctx->pc = 0x23B8C4u;
    SET_GPR_U32(ctx, 31, 0x23B8CCu);
    ctx->pc = 0x23B8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B8C4u;
            // 0x23b8c8: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B8CCu; }
        if (ctx->pc != 0x23B8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B8CCu; }
        if (ctx->pc != 0x23B8CCu) { return; }
    }
    ctx->pc = 0x23B8CCu;
label_23b8cc:
    // 0x23b8cc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x23b8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_23b8d0:
    // 0x23b8d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23b8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23b8d4:
    // 0x23b8d4: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x23b8d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_23b8d8:
    // 0x23b8d8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x23b8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_23b8dc:
    // 0x23b8dc: 0xc0a8448  jal         func_2A1120
label_23b8e0:
    if (ctx->pc == 0x23B8E0u) {
        ctx->pc = 0x23B8E0u;
            // 0x23b8e0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x23B8E4u;
        goto label_23b8e4;
    }
    ctx->pc = 0x23B8DCu;
    SET_GPR_U32(ctx, 31, 0x23B8E4u);
    ctx->pc = 0x23B8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B8DCu;
            // 0x23b8e0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1120u;
    if (runtime->hasFunction(0x2A1120u)) {
        auto targetFn = runtime->lookupFunction(0x2A1120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B8E4u; }
        if (ctx->pc != 0x23B8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1120_0x2a1120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B8E4u; }
        if (ctx->pc != 0x23B8E4u) { return; }
    }
    ctx->pc = 0x23B8E4u;
label_23b8e4:
    // 0x23b8e4: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x23b8e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_23b8e8:
    // 0x23b8e8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x23b8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23b8ec:
    // 0x23b8ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23b8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23b8f0:
    // 0x23b8f0: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x23b8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_23b8f4:
    // 0x23b8f4: 0xc5082b  sltu        $at, $a2, $a1
    ctx->pc = 0x23b8f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_23b8f8:
    // 0x23b8f8: 0x1020018d  beqz        $at, . + 4 + (0x18D << 2)
label_23b8fc:
    if (ctx->pc == 0x23B8FCu) {
        ctx->pc = 0x23B900u;
        goto label_23b900;
    }
    ctx->pc = 0x23B8F8u;
    {
        const bool branch_taken_0x23b8f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b8f8) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23B900u;
label_23b900:
    // 0x23b900: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x23b900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_23b904:
    // 0x23b904: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23b904u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23b908:
    // 0x23b908: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_23b90c:
    if (ctx->pc == 0x23B90Cu) {
        ctx->pc = 0x23B90Cu;
            // 0x23b90c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x23B910u;
        goto label_23b910;
    }
    ctx->pc = 0x23B908u;
    {
        const bool branch_taken_0x23b908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B908u;
            // 0x23b90c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b908) {
            ctx->pc = 0x23B920u;
            goto label_23b920;
        }
    }
    ctx->pc = 0x23B910u;
label_23b910:
    // 0x23b910: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23b910u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23b914:
    // 0x23b914: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23b914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23b918:
    // 0x23b918: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x23b918u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_23b91c:
    // 0x23b91c: 0x0  nop
    ctx->pc = 0x23b91cu;
    // NOP
label_23b920:
    // 0x23b920: 0xc5182b  sltu        $v1, $a2, $a1
    ctx->pc = 0x23b920u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_23b924:
    // 0x23b924: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
label_23b928:
    if (ctx->pc == 0x23B928u) {
        ctx->pc = 0x23B928u;
            // 0x23b928: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->pc = 0x23B92Cu;
        goto label_23b92c;
    }
    ctx->pc = 0x23B924u;
    {
        const bool branch_taken_0x23b924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b924) {
            ctx->pc = 0x23B928u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23B924u;
            // 0x23b928: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23B904u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23b904;
        }
    }
    ctx->pc = 0x23B92Cu;
label_23b92c:
    // 0x23b92c: 0x10000180  b           . + 4 + (0x180 << 2)
label_23b930:
    if (ctx->pc == 0x23B930u) {
        ctx->pc = 0x23B934u;
        goto label_23b934;
    }
    ctx->pc = 0x23B92Cu;
    {
        const bool branch_taken_0x23b92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b92c) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23B934u;
label_23b934:
    // 0x23b934: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23b934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23b938:
    // 0x23b938: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23b938u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23b93c:
    // 0x23b93c: 0x1060017c  beqz        $v1, . + 4 + (0x17C << 2)
label_23b940:
    if (ctx->pc == 0x23B940u) {
        ctx->pc = 0x23B944u;
        goto label_23b944;
    }
    ctx->pc = 0x23B93Cu;
    {
        const bool branch_taken_0x23b93c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b93c) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23B944u;
label_23b944:
    // 0x23b944: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23b944u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23b948:
    // 0x23b948: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23b948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23b94c:
    // 0x23b94c: 0x10000178  b           . + 4 + (0x178 << 2)
label_23b950:
    if (ctx->pc == 0x23B950u) {
        ctx->pc = 0x23B950u;
            // 0x23b950: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x23B954u;
        goto label_23b954;
    }
    ctx->pc = 0x23B94Cu;
    {
        const bool branch_taken_0x23b94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B94Cu;
            // 0x23b950: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b94c) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23B954u;
label_23b954:
    // 0x23b954: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23b954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23b958:
    // 0x23b958: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23b958u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23b95c:
    // 0x23b95c: 0x10600174  beqz        $v1, . + 4 + (0x174 << 2)
label_23b960:
    if (ctx->pc == 0x23B960u) {
        ctx->pc = 0x23B964u;
        goto label_23b964;
    }
    ctx->pc = 0x23B95Cu;
    {
        const bool branch_taken_0x23b95c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b95c) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23B964u;
label_23b964:
    // 0x23b964: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23b964u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23b968:
    // 0x23b968: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23b968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23b96c:
    // 0x23b96c: 0x10000170  b           . + 4 + (0x170 << 2)
label_23b970:
    if (ctx->pc == 0x23B970u) {
        ctx->pc = 0x23B970u;
            // 0x23b970: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x23B974u;
        goto label_23b974;
    }
    ctx->pc = 0x23B96Cu;
    {
        const bool branch_taken_0x23b96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B96Cu;
            // 0x23b970: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b96c) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23B974u;
label_23b974:
    // 0x23b974: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23b974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23b978:
    // 0x23b978: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23b978u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23b97c:
    // 0x23b97c: 0x1060016c  beqz        $v1, . + 4 + (0x16C << 2)
label_23b980:
    if (ctx->pc == 0x23B980u) {
        ctx->pc = 0x23B984u;
        goto label_23b984;
    }
    ctx->pc = 0x23B97Cu;
    {
        const bool branch_taken_0x23b97c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b97c) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23B984u;
label_23b984:
    // 0x23b984: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23b984u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23b988:
    // 0x23b988: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23b988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23b98c:
    // 0x23b98c: 0x10000168  b           . + 4 + (0x168 << 2)
label_23b990:
    if (ctx->pc == 0x23B990u) {
        ctx->pc = 0x23B990u;
            // 0x23b990: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x23B994u;
        goto label_23b994;
    }
    ctx->pc = 0x23B98Cu;
    {
        const bool branch_taken_0x23b98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B98Cu;
            // 0x23b990: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b98c) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23B994u;
label_23b994:
    // 0x23b994: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23b994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23b998:
    // 0x23b998: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23b998u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23b99c:
    // 0x23b99c: 0x10600164  beqz        $v1, . + 4 + (0x164 << 2)
label_23b9a0:
    if (ctx->pc == 0x23B9A0u) {
        ctx->pc = 0x23B9A4u;
        goto label_23b9a4;
    }
    ctx->pc = 0x23B99Cu;
    {
        const bool branch_taken_0x23b99c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b99c) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23B9A4u;
label_23b9a4:
    // 0x23b9a4: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23b9a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23b9a8:
    // 0x23b9a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23b9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23b9ac:
    // 0x23b9ac: 0x10000160  b           . + 4 + (0x160 << 2)
label_23b9b0:
    if (ctx->pc == 0x23B9B0u) {
        ctx->pc = 0x23B9B0u;
            // 0x23b9b0: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x23B9B4u;
        goto label_23b9b4;
    }
    ctx->pc = 0x23B9ACu;
    {
        const bool branch_taken_0x23b9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B9ACu;
            // 0x23b9b0: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9ac) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23B9B4u;
label_23b9b4:
    // 0x23b9b4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23b9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23b9b8:
    // 0x23b9b8: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23b9b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23b9bc:
    // 0x23b9bc: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_23b9c0:
    if (ctx->pc == 0x23B9C0u) {
        ctx->pc = 0x23B9C0u;
            // 0x23b9c0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x23B9C4u;
        goto label_23b9c4;
    }
    ctx->pc = 0x23B9BCu;
    {
        const bool branch_taken_0x23b9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b9bc) {
            ctx->pc = 0x23B9C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23B9BCu;
            // 0x23b9c0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23B9D4u;
            goto label_23b9d4;
        }
    }
    ctx->pc = 0x23B9C4u;
label_23b9c4:
    // 0x23b9c4: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23b9c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23b9c8:
    // 0x23b9c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23b9cc:
    // 0x23b9cc: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x23b9ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_23b9d0:
    // 0x23b9d0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x23b9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23b9d4:
    // 0x23b9d4: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23b9d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23b9d8:
    // 0x23b9d8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_23b9dc:
    if (ctx->pc == 0x23B9DCu) {
        ctx->pc = 0x23B9DCu;
            // 0x23b9dc: 0x8243001c  lb          $v1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x23B9E0u;
        goto label_23b9e0;
    }
    ctx->pc = 0x23B9D8u;
    {
        const bool branch_taken_0x23b9d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b9d8) {
            ctx->pc = 0x23B9DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23B9D8u;
            // 0x23b9dc: 0x8243001c  lb          $v1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23B9F0u;
            goto label_23b9f0;
        }
    }
    ctx->pc = 0x23B9E0u;
label_23b9e0:
    // 0x23b9e0: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23b9e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23b9e4:
    // 0x23b9e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23b9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23b9e8:
    // 0x23b9e8: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x23b9e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_23b9ec:
    // 0x23b9ec: 0x8243001c  lb          $v1, 0x1C($s2)
    ctx->pc = 0x23b9ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
label_23b9f0:
    // 0x23b9f0: 0x1060014f  beqz        $v1, . + 4 + (0x14F << 2)
label_23b9f4:
    if (ctx->pc == 0x23B9F4u) {
        ctx->pc = 0x23B9F8u;
        goto label_23b9f8;
    }
    ctx->pc = 0x23B9F0u;
    {
        const bool branch_taken_0x23b9f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b9f0) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23B9F8u;
label_23b9f8:
    // 0x23b9f8: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x23b9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_23b9fc:
    // 0x23b9fc: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x23b9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_23ba00:
    // 0x23ba00: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x23ba00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_23ba04:
    // 0x23ba04: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x23ba04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_23ba08:
    // 0x23ba08: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_23ba0c:
    if (ctx->pc == 0x23BA0Cu) {
        ctx->pc = 0x23BA0Cu;
            // 0x23ba0c: 0x8e450014  lw          $a1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->pc = 0x23BA10u;
        goto label_23ba10;
    }
    ctx->pc = 0x23BA08u;
    {
        const bool branch_taken_0x23ba08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x23ba08) {
            ctx->pc = 0x23BA0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23BA08u;
            // 0x23ba0c: 0x8e450014  lw          $a1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23BA20u;
            goto label_23ba20;
        }
    }
    ctx->pc = 0x23BA10u;
label_23ba10:
    // 0x23ba10: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x23ba10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_23ba14:
    // 0x23ba14: 0xc0a728c  jal         func_29CA30
label_23ba18:
    if (ctx->pc == 0x23BA18u) {
        ctx->pc = 0x23BA18u;
            // 0x23ba18: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x23BA1Cu;
        goto label_23ba1c;
    }
    ctx->pc = 0x23BA14u;
    SET_GPR_U32(ctx, 31, 0x23BA1Cu);
    ctx->pc = 0x23BA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BA14u;
            // 0x23ba18: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BA1Cu; }
        if (ctx->pc != 0x23BA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BA1Cu; }
        if (ctx->pc != 0x23BA1Cu) { return; }
    }
    ctx->pc = 0x23BA1Cu;
label_23ba1c:
    // 0x23ba1c: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x23ba1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_23ba20:
    // 0x23ba20: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x23ba20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_23ba24:
    // 0x23ba24: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x23ba24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_23ba28:
    // 0x23ba28: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x23ba28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23ba2c:
    // 0x23ba2c: 0xae440014  sw          $a0, 0x14($s2)
    ctx->pc = 0x23ba2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 4));
label_23ba30:
    // 0x23ba30: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x23ba30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23ba34:
    // 0x23ba34: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x23ba34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_23ba38:
    // 0x23ba38: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x23ba38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_23ba3c:
    // 0x23ba3c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x23ba3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_23ba40:
    // 0x23ba40: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x23ba40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_23ba44:
    // 0x23ba44: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x23ba44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23ba48:
    // 0x23ba48: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x23ba48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23ba4c:
    // 0x23ba4c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x23ba4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23ba50:
    // 0x23ba50: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x23ba50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23ba54:
    // 0x23ba54: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x23ba54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_23ba58:
    // 0x23ba58: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x23ba58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_23ba5c:
    // 0x23ba5c: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x23ba5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_23ba60:
    // 0x23ba60: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x23ba60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_23ba64:
    // 0x23ba64: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x23ba64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_23ba68:
    // 0x23ba68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23ba68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23ba6c:
    // 0x23ba6c: 0x10000130  b           . + 4 + (0x130 << 2)
label_23ba70:
    if (ctx->pc == 0x23BA70u) {
        ctx->pc = 0x23BA70u;
            // 0x23ba70: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x23BA74u;
        goto label_23ba74;
    }
    ctx->pc = 0x23BA6Cu;
    {
        const bool branch_taken_0x23ba6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BA6Cu;
            // 0x23ba70: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba6c) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BA74u;
label_23ba74:
    // 0x23ba74: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23ba74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23ba78:
    // 0x23ba78: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23ba78u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23ba7c:
    // 0x23ba7c: 0x1060012c  beqz        $v1, . + 4 + (0x12C << 2)
label_23ba80:
    if (ctx->pc == 0x23BA80u) {
        ctx->pc = 0x23BA84u;
        goto label_23ba84;
    }
    ctx->pc = 0x23BA7Cu;
    {
        const bool branch_taken_0x23ba7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ba7c) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BA84u;
label_23ba84:
    // 0x23ba84: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23ba84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23ba88:
    // 0x23ba88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23ba88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23ba8c:
    // 0x23ba8c: 0x10000128  b           . + 4 + (0x128 << 2)
label_23ba90:
    if (ctx->pc == 0x23BA90u) {
        ctx->pc = 0x23BA90u;
            // 0x23ba90: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x23BA94u;
        goto label_23ba94;
    }
    ctx->pc = 0x23BA8Cu;
    {
        const bool branch_taken_0x23ba8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BA8Cu;
            // 0x23ba90: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba8c) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BA94u;
label_23ba94:
    // 0x23ba94: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23ba94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23ba98:
    // 0x23ba98: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23ba98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23ba9c:
    // 0x23ba9c: 0x10600124  beqz        $v1, . + 4 + (0x124 << 2)
label_23baa0:
    if (ctx->pc == 0x23BAA0u) {
        ctx->pc = 0x23BAA4u;
        goto label_23baa4;
    }
    ctx->pc = 0x23BA9Cu;
    {
        const bool branch_taken_0x23ba9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ba9c) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BAA4u;
label_23baa4:
    // 0x23baa4: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23baa4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23baa8:
    // 0x23baa8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23baac:
    // 0x23baac: 0x10000120  b           . + 4 + (0x120 << 2)
label_23bab0:
    if (ctx->pc == 0x23BAB0u) {
        ctx->pc = 0x23BAB0u;
            // 0x23bab0: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x23BAB4u;
        goto label_23bab4;
    }
    ctx->pc = 0x23BAACu;
    {
        const bool branch_taken_0x23baac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BAACu;
            // 0x23bab0: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23baac) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BAB4u;
label_23bab4:
    // 0x23bab4: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x23bab4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_23bab8:
    // 0x23bab8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23babc:
    // 0x23babc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23babcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23bac0:
    // 0x23bac0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x23bac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23bac4:
    // 0x23bac4: 0xc0a7a88  jal         func_29EA20
label_23bac8:
    if (ctx->pc == 0x23BAC8u) {
        ctx->pc = 0x23BAC8u;
            // 0x23bac8: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x23BACCu;
        goto label_23bacc;
    }
    ctx->pc = 0x23BAC4u;
    SET_GPR_U32(ctx, 31, 0x23BACCu);
    ctx->pc = 0x23BAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BAC4u;
            // 0x23bac8: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BACCu; }
        if (ctx->pc != 0x23BACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BACCu; }
        if (ctx->pc != 0x23BACCu) { return; }
    }
    ctx->pc = 0x23BACCu;
label_23bacc:
    // 0x23bacc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x23baccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_23bad0:
    // 0x23bad0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23bad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23bad4:
    // 0x23bad4: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x23bad4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_23bad8:
    // 0x23bad8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x23bad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_23badc:
    // 0x23badc: 0xc0a8448  jal         func_2A1120
label_23bae0:
    if (ctx->pc == 0x23BAE0u) {
        ctx->pc = 0x23BAE0u;
            // 0x23bae0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x23BAE4u;
        goto label_23bae4;
    }
    ctx->pc = 0x23BADCu;
    SET_GPR_U32(ctx, 31, 0x23BAE4u);
    ctx->pc = 0x23BAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BADCu;
            // 0x23bae0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1120u;
    if (runtime->hasFunction(0x2A1120u)) {
        auto targetFn = runtime->lookupFunction(0x2A1120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BAE4u; }
        if (ctx->pc != 0x23BAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1120_0x2a1120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BAE4u; }
        if (ctx->pc != 0x23BAE4u) { return; }
    }
    ctx->pc = 0x23BAE4u;
label_23bae4:
    // 0x23bae4: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x23bae4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_23bae8:
    // 0x23bae8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x23bae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23baec:
    // 0x23baec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23baecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23baf0:
    // 0x23baf0: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x23baf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_23baf4:
    // 0x23baf4: 0xc5082b  sltu        $at, $a2, $a1
    ctx->pc = 0x23baf4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_23baf8:
    // 0x23baf8: 0x1020010d  beqz        $at, . + 4 + (0x10D << 2)
label_23bafc:
    if (ctx->pc == 0x23BAFCu) {
        ctx->pc = 0x23BB00u;
        goto label_23bb00;
    }
    ctx->pc = 0x23BAF8u;
    {
        const bool branch_taken_0x23baf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23baf8) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BB00u;
label_23bb00:
    // 0x23bb00: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x23bb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_23bb04:
    // 0x23bb04: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23bb04u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23bb08:
    // 0x23bb08: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_23bb0c:
    if (ctx->pc == 0x23BB0Cu) {
        ctx->pc = 0x23BB0Cu;
            // 0x23bb0c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x23BB10u;
        goto label_23bb10;
    }
    ctx->pc = 0x23BB08u;
    {
        const bool branch_taken_0x23bb08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BB08u;
            // 0x23bb0c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb08) {
            ctx->pc = 0x23BB20u;
            goto label_23bb20;
        }
    }
    ctx->pc = 0x23BB10u;
label_23bb10:
    // 0x23bb10: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23bb10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23bb14:
    // 0x23bb14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23bb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23bb18:
    // 0x23bb18: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x23bb18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_23bb1c:
    // 0x23bb1c: 0x0  nop
    ctx->pc = 0x23bb1cu;
    // NOP
label_23bb20:
    // 0x23bb20: 0xc5182b  sltu        $v1, $a2, $a1
    ctx->pc = 0x23bb20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_23bb24:
    // 0x23bb24: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
label_23bb28:
    if (ctx->pc == 0x23BB28u) {
        ctx->pc = 0x23BB28u;
            // 0x23bb28: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->pc = 0x23BB2Cu;
        goto label_23bb2c;
    }
    ctx->pc = 0x23BB24u;
    {
        const bool branch_taken_0x23bb24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bb24) {
            ctx->pc = 0x23BB28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23BB24u;
            // 0x23bb28: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23BB04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23bb04;
        }
    }
    ctx->pc = 0x23BB2Cu;
label_23bb2c:
    // 0x23bb2c: 0x10000100  b           . + 4 + (0x100 << 2)
label_23bb30:
    if (ctx->pc == 0x23BB30u) {
        ctx->pc = 0x23BB34u;
        goto label_23bb34;
    }
    ctx->pc = 0x23BB2Cu;
    {
        const bool branch_taken_0x23bb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bb2c) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BB34u;
label_23bb34:
    // 0x23bb34: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x23bb34u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_23bb38:
    // 0x23bb38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23bb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23bb3c:
    // 0x23bb3c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23bb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23bb40:
    // 0x23bb40: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x23bb40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23bb44:
    // 0x23bb44: 0xc0a7a88  jal         func_29EA20
label_23bb48:
    if (ctx->pc == 0x23BB48u) {
        ctx->pc = 0x23BB48u;
            // 0x23bb48: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x23BB4Cu;
        goto label_23bb4c;
    }
    ctx->pc = 0x23BB44u;
    SET_GPR_U32(ctx, 31, 0x23BB4Cu);
    ctx->pc = 0x23BB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BB44u;
            // 0x23bb48: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB4Cu; }
        if (ctx->pc != 0x23BB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB4Cu; }
        if (ctx->pc != 0x23BB4Cu) { return; }
    }
    ctx->pc = 0x23BB4Cu;
label_23bb4c:
    // 0x23bb4c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x23bb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_23bb50:
    // 0x23bb50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23bb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23bb54:
    // 0x23bb54: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x23bb54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_23bb58:
    // 0x23bb58: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x23bb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_23bb5c:
    // 0x23bb5c: 0xc0a8448  jal         func_2A1120
label_23bb60:
    if (ctx->pc == 0x23BB60u) {
        ctx->pc = 0x23BB60u;
            // 0x23bb60: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x23BB64u;
        goto label_23bb64;
    }
    ctx->pc = 0x23BB5Cu;
    SET_GPR_U32(ctx, 31, 0x23BB64u);
    ctx->pc = 0x23BB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BB5Cu;
            // 0x23bb60: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1120u;
    if (runtime->hasFunction(0x2A1120u)) {
        auto targetFn = runtime->lookupFunction(0x2A1120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB64u; }
        if (ctx->pc != 0x23BB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1120_0x2a1120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB64u; }
        if (ctx->pc != 0x23BB64u) { return; }
    }
    ctx->pc = 0x23BB64u;
label_23bb64:
    // 0x23bb64: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x23bb64u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_23bb68:
    // 0x23bb68: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x23bb68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23bb6c:
    // 0x23bb6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23bb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23bb70:
    // 0x23bb70: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x23bb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_23bb74:
    // 0x23bb74: 0xc5082b  sltu        $at, $a2, $a1
    ctx->pc = 0x23bb74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_23bb78:
    // 0x23bb78: 0x102000ed  beqz        $at, . + 4 + (0xED << 2)
label_23bb7c:
    if (ctx->pc == 0x23BB7Cu) {
        ctx->pc = 0x23BB80u;
        goto label_23bb80;
    }
    ctx->pc = 0x23BB78u;
    {
        const bool branch_taken_0x23bb78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bb78) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BB80u;
label_23bb80:
    // 0x23bb80: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x23bb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_23bb84:
    // 0x23bb84: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23bb84u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23bb88:
    // 0x23bb88: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_23bb8c:
    if (ctx->pc == 0x23BB8Cu) {
        ctx->pc = 0x23BB8Cu;
            // 0x23bb8c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x23BB90u;
        goto label_23bb90;
    }
    ctx->pc = 0x23BB88u;
    {
        const bool branch_taken_0x23bb88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BB88u;
            // 0x23bb8c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb88) {
            ctx->pc = 0x23BBA0u;
            goto label_23bba0;
        }
    }
    ctx->pc = 0x23BB90u;
label_23bb90:
    // 0x23bb90: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23bb90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23bb94:
    // 0x23bb94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23bb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23bb98:
    // 0x23bb98: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x23bb98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_23bb9c:
    // 0x23bb9c: 0x0  nop
    ctx->pc = 0x23bb9cu;
    // NOP
label_23bba0:
    // 0x23bba0: 0xc5182b  sltu        $v1, $a2, $a1
    ctx->pc = 0x23bba0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_23bba4:
    // 0x23bba4: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
label_23bba8:
    if (ctx->pc == 0x23BBA8u) {
        ctx->pc = 0x23BBA8u;
            // 0x23bba8: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->pc = 0x23BBACu;
        goto label_23bbac;
    }
    ctx->pc = 0x23BBA4u;
    {
        const bool branch_taken_0x23bba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bba4) {
            ctx->pc = 0x23BBA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23BBA4u;
            // 0x23bba8: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23BB84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23bb84;
        }
    }
    ctx->pc = 0x23BBACu;
label_23bbac:
    // 0x23bbac: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_23bbb0:
    if (ctx->pc == 0x23BBB0u) {
        ctx->pc = 0x23BBB4u;
        goto label_23bbb4;
    }
    ctx->pc = 0x23BBACu;
    {
        const bool branch_taken_0x23bbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bbac) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BBB4u;
label_23bbb4:
    // 0x23bbb4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23bbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23bbb8:
    // 0x23bbb8: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23bbb8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23bbbc:
    // 0x23bbbc: 0x106000dc  beqz        $v1, . + 4 + (0xDC << 2)
label_23bbc0:
    if (ctx->pc == 0x23BBC0u) {
        ctx->pc = 0x23BBC4u;
        goto label_23bbc4;
    }
    ctx->pc = 0x23BBBCu;
    {
        const bool branch_taken_0x23bbbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bbbc) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BBC4u;
label_23bbc4:
    // 0x23bbc4: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23bbc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23bbc8:
    // 0x23bbc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23bbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23bbcc:
    // 0x23bbcc: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_23bbd0:
    if (ctx->pc == 0x23BBD0u) {
        ctx->pc = 0x23BBD0u;
            // 0x23bbd0: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x23BBD4u;
        goto label_23bbd4;
    }
    ctx->pc = 0x23BBCCu;
    {
        const bool branch_taken_0x23bbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BBCCu;
            // 0x23bbd0: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bbcc) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BBD4u;
label_23bbd4:
    // 0x23bbd4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23bbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23bbd8:
    // 0x23bbd8: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23bbd8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23bbdc:
    // 0x23bbdc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_23bbe0:
    if (ctx->pc == 0x23BBE0u) {
        ctx->pc = 0x23BBE4u;
        goto label_23bbe4;
    }
    ctx->pc = 0x23BBDCu;
    {
        const bool branch_taken_0x23bbdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bbdc) {
            ctx->pc = 0x23BBF0u;
            goto label_23bbf0;
        }
    }
    ctx->pc = 0x23BBE4u;
label_23bbe4:
    // 0x23bbe4: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23bbe4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23bbe8:
    // 0x23bbe8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23bbec:
    // 0x23bbec: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x23bbecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_23bbf0:
    // 0x23bbf0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x23bbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_23bbf4:
    // 0x23bbf4: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x23bbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_23bbf8:
    // 0x23bbf8: 0x8c86003c  lw          $a2, 0x3C($a0)
    ctx->pc = 0x23bbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_23bbfc:
    // 0x23bbfc: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_23bc00:
    if (ctx->pc == 0x23BC00u) {
        ctx->pc = 0x23BC00u;
            // 0x23bc00: 0x2485003c  addiu       $a1, $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
        ctx->pc = 0x23BC04u;
        goto label_23bc04;
    }
    ctx->pc = 0x23BBFCu;
    {
        const bool branch_taken_0x23bbfc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BBFCu;
            // 0x23bc00: 0x2485003c  addiu       $a1, $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bbfc) {
            ctx->pc = 0x23BC20u;
            goto label_23bc20;
        }
    }
    ctx->pc = 0x23BC04u;
label_23bc04:
    // 0x23bc04: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x23bc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_23bc08:
    // 0x23bc08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23bc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23bc0c:
    // 0x23bc0c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x23bc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_23bc10:
    // 0x23bc10: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x23bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_23bc14:
    // 0x23bc14: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23bc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23bc18:
    // 0x23bc18: 0x10000002  b           . + 4 + (0x2 << 2)
label_23bc1c:
    if (ctx->pc == 0x23BC1Cu) {
        ctx->pc = 0x23BC1Cu;
            // 0x23bc1c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x23BC20u;
        goto label_23bc20;
    }
    ctx->pc = 0x23BC18u;
    {
        const bool branch_taken_0x23bc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BC18u;
            // 0x23bc1c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc18) {
            ctx->pc = 0x23BC24u;
            goto label_23bc24;
        }
    }
    ctx->pc = 0x23BC20u;
label_23bc20:
    // 0x23bc20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23bc20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23bc24:
    // 0x23bc24: 0x50c00003  beql        $a2, $zero, . + 4 + (0x3 << 2)
label_23bc28:
    if (ctx->pc == 0x23BC28u) {
        ctx->pc = 0x23BC28u;
            // 0x23bc28: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x23BC2Cu;
        goto label_23bc2c;
    }
    ctx->pc = 0x23BC24u;
    {
        const bool branch_taken_0x23bc24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bc24) {
            ctx->pc = 0x23BC28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23BC24u;
            // 0x23bc28: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23BC34u;
            goto label_23bc34;
        }
    }
    ctx->pc = 0x23BC2Cu;
label_23bc2c:
    // 0x23bc2c: 0x10000004  b           . + 4 + (0x4 << 2)
label_23bc30:
    if (ctx->pc == 0x23BC30u) {
        ctx->pc = 0x23BC34u;
        goto label_23bc34;
    }
    ctx->pc = 0x23BC2Cu;
    {
        const bool branch_taken_0x23bc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bc2c) {
            ctx->pc = 0x23BC40u;
            goto label_23bc40;
        }
    }
    ctx->pc = 0x23BC34u;
label_23bc34:
    // 0x23bc34: 0xc0a79c0  jal         func_29E700
label_23bc38:
    if (ctx->pc == 0x23BC38u) {
        ctx->pc = 0x23BC3Cu;
        goto label_23bc3c;
    }
    ctx->pc = 0x23BC34u;
    SET_GPR_U32(ctx, 31, 0x23BC3Cu);
    ctx->pc = 0x29E700u;
    if (runtime->hasFunction(0x29E700u)) {
        auto targetFn = runtime->lookupFunction(0x29E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BC3Cu; }
        if (ctx->pc != 0x23BC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E700_0x29e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BC3Cu; }
        if (ctx->pc != 0x23BC3Cu) { return; }
    }
    ctx->pc = 0x23BC3Cu;
label_23bc3c:
    // 0x23bc3c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23bc3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23bc40:
    // 0x23bc40: 0x50c000bb  beql        $a2, $zero, . + 4 + (0xBB << 2)
label_23bc44:
    if (ctx->pc == 0x23BC44u) {
        ctx->pc = 0x23BC44u;
            // 0x23bc44: 0xae060008  sw          $a2, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
        ctx->pc = 0x23BC48u;
        goto label_23bc48;
    }
    ctx->pc = 0x23BC40u;
    {
        const bool branch_taken_0x23bc40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bc40) {
            ctx->pc = 0x23BC44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23BC40u;
            // 0x23bc44: 0xae060008  sw          $a2, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BC48u;
label_23bc48:
    // 0x23bc48: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x23bc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_23bc4c:
    // 0x23bc4c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x23bc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23bc50:
    // 0x23bc50: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x23bc50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_23bc54:
    // 0x23bc54: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x23bc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23bc58:
    // 0x23bc58: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x23bc58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_23bc5c:
    // 0x23bc5c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x23bc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23bc60:
    // 0x23bc60: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x23bc60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_23bc64:
    // 0x23bc64: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x23bc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23bc68:
    // 0x23bc68: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x23bc68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_23bc6c:
    // 0x23bc6c: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x23bc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23bc70:
    // 0x23bc70: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x23bc70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_23bc74:
    // 0x23bc74: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x23bc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23bc78:
    // 0x23bc78: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x23bc78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_23bc7c:
    // 0x23bc7c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x23bc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23bc80:
    // 0x23bc80: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x23bc80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_23bc84:
    // 0x23bc84: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x23bc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23bc88:
    // 0x23bc88: 0xe4c0001c  swc1        $f0, 0x1C($a2)
    ctx->pc = 0x23bc88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
label_23bc8c:
    // 0x23bc8c: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x23bc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
label_23bc90:
    // 0x23bc90: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_23bc94:
    if (ctx->pc == 0x23BC94u) {
        ctx->pc = 0x23BC98u;
        goto label_23bc98;
    }
    ctx->pc = 0x23BC90u;
    {
        const bool branch_taken_0x23bc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bc90) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BC98u;
label_23bc98:
    // 0x23bc98: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23bc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23bc9c:
    // 0x23bc9c: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23bc9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23bca0:
    // 0x23bca0: 0x106000a3  beqz        $v1, . + 4 + (0xA3 << 2)
label_23bca4:
    if (ctx->pc == 0x23BCA4u) {
        ctx->pc = 0x23BCA8u;
        goto label_23bca8;
    }
    ctx->pc = 0x23BCA0u;
    {
        const bool branch_taken_0x23bca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bca0) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BCA8u;
label_23bca8:
    // 0x23bca8: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23bca8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23bcac:
    // 0x23bcac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23bcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23bcb0:
    // 0x23bcb0: 0x1000009f  b           . + 4 + (0x9F << 2)
label_23bcb4:
    if (ctx->pc == 0x23BCB4u) {
        ctx->pc = 0x23BCB4u;
            // 0x23bcb4: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x23BCB8u;
        goto label_23bcb8;
    }
    ctx->pc = 0x23BCB0u;
    {
        const bool branch_taken_0x23bcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BCB0u;
            // 0x23bcb4: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bcb0) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BCB8u;
label_23bcb8:
    // 0x23bcb8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23bcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23bcbc:
    // 0x23bcbc: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23bcbcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23bcc0:
    // 0x23bcc0: 0x1060009b  beqz        $v1, . + 4 + (0x9B << 2)
label_23bcc4:
    if (ctx->pc == 0x23BCC4u) {
        ctx->pc = 0x23BCC8u;
        goto label_23bcc8;
    }
    ctx->pc = 0x23BCC0u;
    {
        const bool branch_taken_0x23bcc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bcc0) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BCC8u;
label_23bcc8:
    // 0x23bcc8: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23bcc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23bccc:
    // 0x23bccc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23bcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23bcd0:
    // 0x23bcd0: 0x10000097  b           . + 4 + (0x97 << 2)
label_23bcd4:
    if (ctx->pc == 0x23BCD4u) {
        ctx->pc = 0x23BCD4u;
            // 0x23bcd4: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x23BCD8u;
        goto label_23bcd8;
    }
    ctx->pc = 0x23BCD0u;
    {
        const bool branch_taken_0x23bcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BCD0u;
            // 0x23bcd4: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bcd0) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BCD8u;
label_23bcd8:
    // 0x23bcd8: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x23bcd8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_23bcdc:
    // 0x23bcdc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23bce0:
    // 0x23bce0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23bce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23bce4:
    // 0x23bce4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x23bce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23bce8:
    // 0x23bce8: 0xc0a7a88  jal         func_29EA20
label_23bcec:
    if (ctx->pc == 0x23BCECu) {
        ctx->pc = 0x23BCECu;
            // 0x23bcec: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x23BCF0u;
        goto label_23bcf0;
    }
    ctx->pc = 0x23BCE8u;
    SET_GPR_U32(ctx, 31, 0x23BCF0u);
    ctx->pc = 0x23BCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BCE8u;
            // 0x23bcec: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BCF0u; }
        if (ctx->pc != 0x23BCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BCF0u; }
        if (ctx->pc != 0x23BCF0u) { return; }
    }
    ctx->pc = 0x23BCF0u;
label_23bcf0:
    // 0x23bcf0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x23bcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_23bcf4:
    // 0x23bcf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23bcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23bcf8:
    // 0x23bcf8: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x23bcf8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_23bcfc:
    // 0x23bcfc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x23bcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_23bd00:
    // 0x23bd00: 0xc0a8448  jal         func_2A1120
label_23bd04:
    if (ctx->pc == 0x23BD04u) {
        ctx->pc = 0x23BD04u;
            // 0x23bd04: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x23BD08u;
        goto label_23bd08;
    }
    ctx->pc = 0x23BD00u;
    SET_GPR_U32(ctx, 31, 0x23BD08u);
    ctx->pc = 0x23BD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BD00u;
            // 0x23bd04: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1120u;
    if (runtime->hasFunction(0x2A1120u)) {
        auto targetFn = runtime->lookupFunction(0x2A1120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BD08u; }
        if (ctx->pc != 0x23BD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1120_0x2a1120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BD08u; }
        if (ctx->pc != 0x23BD08u) { return; }
    }
    ctx->pc = 0x23BD08u;
label_23bd08:
    // 0x23bd08: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x23bd08u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_23bd0c:
    // 0x23bd0c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x23bd0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23bd10:
    // 0x23bd10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23bd10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23bd14:
    // 0x23bd14: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x23bd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_23bd18:
    // 0x23bd18: 0xc5082b  sltu        $at, $a2, $a1
    ctx->pc = 0x23bd18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_23bd1c:
    // 0x23bd1c: 0x10200084  beqz        $at, . + 4 + (0x84 << 2)
label_23bd20:
    if (ctx->pc == 0x23BD20u) {
        ctx->pc = 0x23BD24u;
        goto label_23bd24;
    }
    ctx->pc = 0x23BD1Cu;
    {
        const bool branch_taken_0x23bd1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bd1c) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BD24u;
label_23bd24:
    // 0x23bd24: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x23bd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_23bd28:
    // 0x23bd28: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23bd28u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23bd2c:
    // 0x23bd2c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_23bd30:
    if (ctx->pc == 0x23BD30u) {
        ctx->pc = 0x23BD30u;
            // 0x23bd30: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x23BD34u;
        goto label_23bd34;
    }
    ctx->pc = 0x23BD2Cu;
    {
        const bool branch_taken_0x23bd2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BD2Cu;
            // 0x23bd30: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd2c) {
            ctx->pc = 0x23BD40u;
            goto label_23bd40;
        }
    }
    ctx->pc = 0x23BD34u;
label_23bd34:
    // 0x23bd34: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23bd34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23bd38:
    // 0x23bd38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23bd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23bd3c:
    // 0x23bd3c: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x23bd3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_23bd40:
    // 0x23bd40: 0xc5182b  sltu        $v1, $a2, $a1
    ctx->pc = 0x23bd40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_23bd44:
    // 0x23bd44: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_23bd48:
    if (ctx->pc == 0x23BD48u) {
        ctx->pc = 0x23BD48u;
            // 0x23bd48: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->pc = 0x23BD4Cu;
        goto label_23bd4c;
    }
    ctx->pc = 0x23BD44u;
    {
        const bool branch_taken_0x23bd44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bd44) {
            ctx->pc = 0x23BD48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23BD44u;
            // 0x23bd48: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23BD28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23bd28;
        }
    }
    ctx->pc = 0x23BD4Cu;
label_23bd4c:
    // 0x23bd4c: 0x10000078  b           . + 4 + (0x78 << 2)
label_23bd50:
    if (ctx->pc == 0x23BD50u) {
        ctx->pc = 0x23BD54u;
        goto label_23bd54;
    }
    ctx->pc = 0x23BD4Cu;
    {
        const bool branch_taken_0x23bd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bd4c) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BD54u;
label_23bd54:
    // 0x23bd54: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23bd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23bd58:
    // 0x23bd58: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23bd58u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23bd5c:
    // 0x23bd5c: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
label_23bd60:
    if (ctx->pc == 0x23BD60u) {
        ctx->pc = 0x23BD64u;
        goto label_23bd64;
    }
    ctx->pc = 0x23BD5Cu;
    {
        const bool branch_taken_0x23bd5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bd5c) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BD64u;
label_23bd64:
    // 0x23bd64: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23bd64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23bd68:
    // 0x23bd68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23bd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23bd6c:
    // 0x23bd6c: 0x10000070  b           . + 4 + (0x70 << 2)
label_23bd70:
    if (ctx->pc == 0x23BD70u) {
        ctx->pc = 0x23BD70u;
            // 0x23bd70: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x23BD74u;
        goto label_23bd74;
    }
    ctx->pc = 0x23BD6Cu;
    {
        const bool branch_taken_0x23bd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BD6Cu;
            // 0x23bd70: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd6c) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BD74u;
label_23bd74:
    // 0x23bd74: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23bd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23bd78:
    // 0x23bd78: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23bd78u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23bd7c:
    // 0x23bd7c: 0x1060006c  beqz        $v1, . + 4 + (0x6C << 2)
label_23bd80:
    if (ctx->pc == 0x23BD80u) {
        ctx->pc = 0x23BD84u;
        goto label_23bd84;
    }
    ctx->pc = 0x23BD7Cu;
    {
        const bool branch_taken_0x23bd7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bd7c) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BD84u;
label_23bd84:
    // 0x23bd84: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23bd84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23bd88:
    // 0x23bd88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23bd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23bd8c:
    // 0x23bd8c: 0x10000068  b           . + 4 + (0x68 << 2)
label_23bd90:
    if (ctx->pc == 0x23BD90u) {
        ctx->pc = 0x23BD90u;
            // 0x23bd90: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x23BD94u;
        goto label_23bd94;
    }
    ctx->pc = 0x23BD8Cu;
    {
        const bool branch_taken_0x23bd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BD8Cu;
            // 0x23bd90: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd8c) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BD94u;
label_23bd94:
    // 0x23bd94: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23bd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23bd98:
    // 0x23bd98: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23bd98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23bd9c:
    // 0x23bd9c: 0x10600064  beqz        $v1, . + 4 + (0x64 << 2)
label_23bda0:
    if (ctx->pc == 0x23BDA0u) {
        ctx->pc = 0x23BDA4u;
        goto label_23bda4;
    }
    ctx->pc = 0x23BD9Cu;
    {
        const bool branch_taken_0x23bd9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bd9c) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BDA4u;
label_23bda4:
    // 0x23bda4: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23bda4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23bda8:
    // 0x23bda8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23bda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23bdac:
    // 0x23bdac: 0x10000060  b           . + 4 + (0x60 << 2)
label_23bdb0:
    if (ctx->pc == 0x23BDB0u) {
        ctx->pc = 0x23BDB0u;
            // 0x23bdb0: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x23BDB4u;
        goto label_23bdb4;
    }
    ctx->pc = 0x23BDACu;
    {
        const bool branch_taken_0x23bdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BDACu;
            // 0x23bdb0: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bdac) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BDB4u;
label_23bdb4:
    // 0x23bdb4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23bdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23bdb8:
    // 0x23bdb8: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23bdb8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23bdbc:
    // 0x23bdbc: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
label_23bdc0:
    if (ctx->pc == 0x23BDC0u) {
        ctx->pc = 0x23BDC4u;
        goto label_23bdc4;
    }
    ctx->pc = 0x23BDBCu;
    {
        const bool branch_taken_0x23bdbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bdbc) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BDC4u;
label_23bdc4:
    // 0x23bdc4: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23bdc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23bdc8:
    // 0x23bdc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23bdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23bdcc:
    // 0x23bdcc: 0x10000058  b           . + 4 + (0x58 << 2)
label_23bdd0:
    if (ctx->pc == 0x23BDD0u) {
        ctx->pc = 0x23BDD0u;
            // 0x23bdd0: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x23BDD4u;
        goto label_23bdd4;
    }
    ctx->pc = 0x23BDCCu;
    {
        const bool branch_taken_0x23bdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BDCCu;
            // 0x23bdd0: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bdcc) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BDD4u;
label_23bdd4:
    // 0x23bdd4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23bdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23bdd8:
    // 0x23bdd8: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23bdd8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23bddc:
    // 0x23bddc: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
label_23bde0:
    if (ctx->pc == 0x23BDE0u) {
        ctx->pc = 0x23BDE4u;
        goto label_23bde4;
    }
    ctx->pc = 0x23BDDCu;
    {
        const bool branch_taken_0x23bddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bddc) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BDE4u;
label_23bde4:
    // 0x23bde4: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23bde4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23bde8:
    // 0x23bde8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23bde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23bdec:
    // 0x23bdec: 0x10000050  b           . + 4 + (0x50 << 2)
label_23bdf0:
    if (ctx->pc == 0x23BDF0u) {
        ctx->pc = 0x23BDF0u;
            // 0x23bdf0: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x23BDF4u;
        goto label_23bdf4;
    }
    ctx->pc = 0x23BDECu;
    {
        const bool branch_taken_0x23bdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BDECu;
            // 0x23bdf0: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bdec) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BDF4u;
label_23bdf4:
    // 0x23bdf4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23bdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23bdf8:
    // 0x23bdf8: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23bdf8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23bdfc:
    // 0x23bdfc: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
label_23be00:
    if (ctx->pc == 0x23BE00u) {
        ctx->pc = 0x23BE04u;
        goto label_23be04;
    }
    ctx->pc = 0x23BDFCu;
    {
        const bool branch_taken_0x23bdfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bdfc) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BE04u;
label_23be04:
    // 0x23be04: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23be04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23be08:
    // 0x23be08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23be08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23be0c:
    // 0x23be0c: 0x10000048  b           . + 4 + (0x48 << 2)
label_23be10:
    if (ctx->pc == 0x23BE10u) {
        ctx->pc = 0x23BE10u;
            // 0x23be10: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x23BE14u;
        goto label_23be14;
    }
    ctx->pc = 0x23BE0Cu;
    {
        const bool branch_taken_0x23be0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BE0Cu;
            // 0x23be10: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be0c) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BE14u;
label_23be14:
    // 0x23be14: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23be14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23be18:
    // 0x23be18: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23be18u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23be1c:
    // 0x23be1c: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
label_23be20:
    if (ctx->pc == 0x23BE20u) {
        ctx->pc = 0x23BE24u;
        goto label_23be24;
    }
    ctx->pc = 0x23BE1Cu;
    {
        const bool branch_taken_0x23be1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23be1c) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BE24u;
label_23be24:
    // 0x23be24: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23be24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23be28:
    // 0x23be28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23be28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23be2c:
    // 0x23be2c: 0x10000040  b           . + 4 + (0x40 << 2)
label_23be30:
    if (ctx->pc == 0x23BE30u) {
        ctx->pc = 0x23BE30u;
            // 0x23be30: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x23BE34u;
        goto label_23be34;
    }
    ctx->pc = 0x23BE2Cu;
    {
        const bool branch_taken_0x23be2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BE2Cu;
            // 0x23be30: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be2c) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BE34u;
label_23be34:
    // 0x23be34: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23be34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23be38:
    // 0x23be38: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23be38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23be3c:
    // 0x23be3c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_23be40:
    if (ctx->pc == 0x23BE40u) {
        ctx->pc = 0x23BE40u;
            // 0x23be40: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x23BE44u;
        goto label_23be44;
    }
    ctx->pc = 0x23BE3Cu;
    {
        const bool branch_taken_0x23be3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23be3c) {
            ctx->pc = 0x23BE40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23BE3Cu;
            // 0x23be40: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23BE54u;
            goto label_23be54;
        }
    }
    ctx->pc = 0x23BE44u;
label_23be44:
    // 0x23be44: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23be44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23be48:
    // 0x23be48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23be48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23be4c:
    // 0x23be4c: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x23be4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_23be50:
    // 0x23be50: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x23be50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_23be54:
    // 0x23be54: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23be54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23be58:
    // 0x23be58: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x23be58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_23be5c:
    // 0x23be5c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x23be5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_23be60:
    // 0x23be60: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x23be60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_23be64:
    // 0x23be64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23be64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23be68:
    // 0x23be68: 0x10000031  b           . + 4 + (0x31 << 2)
label_23be6c:
    if (ctx->pc == 0x23BE6Cu) {
        ctx->pc = 0x23BE6Cu;
            // 0x23be6c: 0xac830080  sw          $v1, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
        ctx->pc = 0x23BE70u;
        goto label_23be70;
    }
    ctx->pc = 0x23BE68u;
    {
        const bool branch_taken_0x23be68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BE68u;
            // 0x23be6c: 0xac830080  sw          $v1, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be68) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BE70u;
label_23be70:
    // 0x23be70: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23be70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23be74:
    // 0x23be74: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23be74u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23be78:
    // 0x23be78: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
label_23be7c:
    if (ctx->pc == 0x23BE7Cu) {
        ctx->pc = 0x23BE7Cu;
            // 0x23be7c: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x23BE80u;
        goto label_23be80;
    }
    ctx->pc = 0x23BE78u;
    {
        const bool branch_taken_0x23be78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23be78) {
            ctx->pc = 0x23BE7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23BE78u;
            // 0x23be7c: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23BEB8u;
            goto label_23beb8;
        }
    }
    ctx->pc = 0x23BE80u;
label_23be80:
    // 0x23be80: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23be80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23be84:
    // 0x23be84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23be84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23be88:
    // 0x23be88: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x23be88u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_23be8c:
    // 0x23be8c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x23be8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_23be90:
    // 0x23be90: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23be90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_23be94:
    // 0x23be94: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_23be98:
    if (ctx->pc == 0x23BE98u) {
        ctx->pc = 0x23BE9Cu;
        goto label_23be9c;
    }
    ctx->pc = 0x23BE94u;
    {
        const bool branch_taken_0x23be94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23be94) {
            ctx->pc = 0x23BEB4u;
            goto label_23beb4;
        }
    }
    ctx->pc = 0x23BE9Cu;
label_23be9c:
    // 0x23be9c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_23bea0:
    if (ctx->pc == 0x23BEA0u) {
        ctx->pc = 0x23BEA4u;
        goto label_23bea4;
    }
    ctx->pc = 0x23BE9Cu;
    {
        const bool branch_taken_0x23be9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23be9c) {
            ctx->pc = 0x23BEB4u;
            goto label_23beb4;
        }
    }
    ctx->pc = 0x23BEA4u;
label_23bea4:
    // 0x23bea4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23bea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23bea8:
    // 0x23bea8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23bea8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23beac:
    // 0x23beac: 0x320f809  jalr        $t9
label_23beb0:
    if (ctx->pc == 0x23BEB0u) {
        ctx->pc = 0x23BEB0u;
            // 0x23beb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23BEB4u;
        goto label_23beb4;
    }
    ctx->pc = 0x23BEACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23BEB4u);
        ctx->pc = 0x23BEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BEACu;
            // 0x23beb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23BEB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23BEB4u; }
            if (ctx->pc != 0x23BEB4u) { return; }
        }
        }
    }
    ctx->pc = 0x23BEB4u;
label_23beb4:
    // 0x23beb4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x23beb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_23beb8:
    // 0x23beb8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23beb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23bebc:
    // 0x23bebc: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x23bebcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_23bec0:
    // 0x23bec0: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x23bec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_23bec4:
    // 0x23bec4: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x23bec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_23bec8:
    // 0x23bec8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23becc:
    // 0x23becc: 0x10000018  b           . + 4 + (0x18 << 2)
label_23bed0:
    if (ctx->pc == 0x23BED0u) {
        ctx->pc = 0x23BED0u;
            // 0x23bed0: 0xac830080  sw          $v1, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
        ctx->pc = 0x23BED4u;
        goto label_23bed4;
    }
    ctx->pc = 0x23BECCu;
    {
        const bool branch_taken_0x23becc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BECCu;
            // 0x23bed0: 0xac830080  sw          $v1, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23becc) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BED4u;
label_23bed4:
    // 0x23bed4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23bed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23bed8:
    // 0x23bed8: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23bed8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23bedc:
    // 0x23bedc: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_23bee0:
    if (ctx->pc == 0x23BEE0u) {
        ctx->pc = 0x23BEE4u;
        goto label_23bee4;
    }
    ctx->pc = 0x23BEDCu;
    {
        const bool branch_taken_0x23bedc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bedc) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BEE4u;
label_23bee4:
    // 0x23bee4: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23bee4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23bee8:
    // 0x23bee8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23bee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23beec:
    // 0x23beec: 0x10000010  b           . + 4 + (0x10 << 2)
label_23bef0:
    if (ctx->pc == 0x23BEF0u) {
        ctx->pc = 0x23BEF0u;
            // 0x23bef0: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x23BEF4u;
        goto label_23bef4;
    }
    ctx->pc = 0x23BEECu;
    {
        const bool branch_taken_0x23beec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BEECu;
            // 0x23bef0: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23beec) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BEF4u;
label_23bef4:
    // 0x23bef4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23bef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23bef8:
    // 0x23bef8: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23bef8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23befc:
    // 0x23befc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_23bf00:
    if (ctx->pc == 0x23BF00u) {
        ctx->pc = 0x23BF04u;
        goto label_23bf04;
    }
    ctx->pc = 0x23BEFCu;
    {
        const bool branch_taken_0x23befc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23befc) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BF04u;
label_23bf04:
    // 0x23bf04: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23bf04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23bf08:
    // 0x23bf08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23bf08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23bf0c:
    // 0x23bf0c: 0x10000008  b           . + 4 + (0x8 << 2)
label_23bf10:
    if (ctx->pc == 0x23BF10u) {
        ctx->pc = 0x23BF10u;
            // 0x23bf10: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x23BF14u;
        goto label_23bf14;
    }
    ctx->pc = 0x23BF0Cu;
    {
        const bool branch_taken_0x23bf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BF0Cu;
            // 0x23bf10: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf0c) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BF14u;
label_23bf14:
    // 0x23bf14: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23bf14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23bf18:
    // 0x23bf18: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23bf18u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23bf1c:
    // 0x23bf1c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_23bf20:
    if (ctx->pc == 0x23BF20u) {
        ctx->pc = 0x23BF24u;
        goto label_23bf24;
    }
    ctx->pc = 0x23BF1Cu;
    {
        const bool branch_taken_0x23bf1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bf1c) {
            ctx->pc = 0x23BF30u;
            goto label_23bf30;
        }
    }
    ctx->pc = 0x23BF24u;
label_23bf24:
    // 0x23bf24: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23bf24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23bf28:
    // 0x23bf28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23bf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23bf2c:
    // 0x23bf2c: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x23bf2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_23bf30:
    // 0x23bf30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23bf30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23bf34:
    // 0x23bf34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23bf34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23bf38:
    // 0x23bf38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23bf38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23bf3c:
    // 0x23bf3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23bf3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23bf40:
    // 0x23bf40: 0x3e00008  jr          $ra
label_23bf44:
    if (ctx->pc == 0x23BF44u) {
        ctx->pc = 0x23BF44u;
            // 0x23bf44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x23BF48u;
        goto label_23bf48;
    }
    ctx->pc = 0x23BF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BF40u;
            // 0x23bf44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23BF48u;
label_23bf48:
    // 0x23bf48: 0x0  nop
    ctx->pc = 0x23bf48u;
    // NOP
label_23bf4c:
    // 0x23bf4c: 0x0  nop
    ctx->pc = 0x23bf4cu;
    // NOP
label_23bf50:
    // 0x23bf50: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x23bf50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_23bf54:
    // 0x23bf54: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x23bf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_23bf58:
    // 0x23bf58: 0x8ce70094  lw          $a3, 0x94($a3)
    ctx->pc = 0x23bf58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 148)));
label_23bf5c:
    // 0x23bf5c: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x23bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_23bf60:
    // 0x23bf60: 0x94e80020  lhu         $t0, 0x20($a3)
    ctx->pc = 0x23bf60u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 32)));
label_23bf64:
    // 0x23bf64: 0x94670020  lhu         $a3, 0x20($v1)
    ctx->pc = 0x23bf64u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_23bf68:
    // 0x23bf68: 0x107182b  sltu        $v1, $t0, $a3
    ctx->pc = 0x23bf68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_23bf6c:
    // 0x23bf6c: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
label_23bf70:
    if (ctx->pc == 0x23BF70u) {
        ctx->pc = 0x23BF70u;
            // 0x23bf70: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x23BF74u;
        goto label_23bf74;
    }
    ctx->pc = 0x23BF6Cu;
    {
        const bool branch_taken_0x23bf6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bf6c) {
            ctx->pc = 0x23BF70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23BF6Cu;
            // 0x23bf70: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23BFA4u;
            goto label_23bfa4;
        }
    }
    ctx->pc = 0x23BF74u;
label_23bf74:
    // 0x23bf74: 0x1071826  xor         $v1, $t0, $a3
    ctx->pc = 0x23bf74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 7));
label_23bf78:
    // 0x23bf78: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x23bf78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23bf7c:
    // 0x23bf7c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_23bf80:
    if (ctx->pc == 0x23BF80u) {
        ctx->pc = 0x23BF84u;
        goto label_23bf84;
    }
    ctx->pc = 0x23BF7Cu;
    {
        const bool branch_taken_0x23bf7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bf7c) {
            ctx->pc = 0x23BFA0u;
            goto label_23bfa0;
        }
    }
    ctx->pc = 0x23BF84u;
label_23bf84:
    // 0x23bf84: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x23bf84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_23bf88:
    // 0x23bf88: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x23bf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_23bf8c:
    // 0x23bf8c: 0x8ca50094  lw          $a1, 0x94($a1)
    ctx->pc = 0x23bf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
label_23bf90:
    // 0x23bf90: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x23bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_23bf94:
    // 0x23bf94: 0x94a50020  lhu         $a1, 0x20($a1)
    ctx->pc = 0x23bf94u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
label_23bf98:
    // 0x23bf98: 0x94630020  lhu         $v1, 0x20($v1)
    ctx->pc = 0x23bf98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_23bf9c:
    // 0x23bf9c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x23bf9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23bfa0:
    // 0x23bfa0: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x23bfa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_23bfa4:
    // 0x23bfa4: 0x3e00008  jr          $ra
label_23bfa8:
    if (ctx->pc == 0x23BFA8u) {
        ctx->pc = 0x23BFACu;
        goto label_23bfac;
    }
    ctx->pc = 0x23BFA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23BFACu;
label_23bfac:
    // 0x23bfac: 0x0  nop
    ctx->pc = 0x23bfacu;
    // NOP
}
